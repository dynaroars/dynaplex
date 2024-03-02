
//complexity is O(1) of the 
static void panic(const Char *) __attribute__ ((noreturn));
static void ioError(void) __attribute__ ((noreturn));
static void outOfMemory(void) __attribute__ ((noreturn));
static void configError(void) __attribute__ ((noreturn));
static void crcError(void) __attribute__ ((noreturn));
static void cleanUpAndFail(Int32) __attribute__ ((noreturn));
static void compressedStreamEOF(void) __attribute__ ((noreturn));
static void copyFileName(Char *, Char *);
static void *myMalloc(Int32);
static void applySavedFileAttrToOutputFile(IntNative fd);
static void uInt64_from_UInt32s(UInt64 * n, UInt32 lo32, UInt32 hi32)
{
    n->b[7] = (UChar) ((hi32 >> 24) & 0xFF);
    n->b[6] = (UChar) ((hi32 >> 16) & 0xFF);
    n->b[5] = (UChar) ((hi32 >> 8) & 0xFF);
    n->b[4] = (UChar) (hi32 & 0xFF);
    n->b[3] = (UChar) ((lo32 >> 24) & 0xFF);
    n->b[2] = (UChar) ((lo32 >> 16) & 0xFF);
    n->b[1] = (UChar) ((lo32 >> 8) & 0xFF);
    n->b[0] = (UChar) (lo32 & 0xFF);
} static double uInt64_to_double(UInt64 * n)
{
    Int32 i;
    double base = 1.0;
    double sum = 0.0;
    for (i = 0; i < 8; i++) {
	sum += base * (double) (n->b[i]);
	base *= 256.0;
    } return sum;
}

static Bool uInt64_isZero(UInt64 * n)
{
    Int32 i;
    for (i = 0; i < 8; i++)
	if (n->b[i] != 0)
	    return 0;
    return 1;
}

static Int32 uInt64_qrm10(UInt64 * n)
{
    UInt32 rem, tmp;
    Int32 i;
    rem = 0;
    for (i = 7; i >= 0; i--) {
	tmp = rem * 256 + n->b[i];
	n->b[i] = tmp / 10;
	rem = tmp % 10;
    }
    return rem;
}

static void uInt64_toAscii(char *outbuf, UInt64 * n)
{
    Int32 i, q;
    UChar buf[32];
    Int32 nBuf = 0;
    UInt64 n_copy = *n;
    do {
	q = uInt64_qrm10(&n_copy);
	buf[nBuf] = q + '0';
	nBuf++;
    } while (!uInt64_isZero(&n_copy));
    outbuf[nBuf] = 0;
    for (i = 0; i < nBuf; i++)
	outbuf[i] = buf[nBuf - i - 1];
}

static Bool myfeof(FILE * f)
{
    Int32 c = fgetc(f);
    if (c == (-1))
	return ((Bool) 1);
    ungetc(c, f);
    return ((Bool) 0);
}

static void compressStream(FILE * stream, FILE * zStream)
{
    BZFILE *bzf = ((void *) 0);
    UChar ibuf[5000];
    Int32 nIbuf;
    UInt32 nbytes_in_lo32, nbytes_in_hi32;
    UInt32 nbytes_out_lo32, nbytes_out_hi32;
    Int32 bzerr, bzerr_dummy, ret;;;
    if (ferror(stream))
	goto errhandler_io;
    if (ferror(zStream))
	goto errhandler_io;
    bzf = BZ2_bzWriteOpen(&bzerr, zStream, blockSize100k, verbosity, workFactor);
    if (bzerr != 0)
	goto errhandler;
    if (verbosity >= 2)
	fprintf(stderr, "\n");
    while (((Bool) 1)) {
	if (myfeof(stream))
	    break;
	nIbuf = fread(ibuf, sizeof(UChar), 5000, stream);
	if (ferror(stream))
	    goto errhandler_io;
	if (nIbuf > 0)
	    BZ2_bzWrite(&bzerr, bzf, (void *) ibuf, nIbuf);
	if (bzerr != 0)
	    goto errhandler;
    }
    BZ2_bzWriteClose64(&bzerr, bzf, 0, &nbytes_in_lo32, &nbytes_in_hi32, &nbytes_out_lo32, &nbytes_out_hi32);
    if (bzerr != 0)
	goto errhandler;
    if (ferror(zStream))
	goto errhandler_io;
    ret = fflush(zStream);
    if (ret == (-1))
	goto errhandler_io;
    if (zStream != stdout) {
	Int32 fd = fileno(zStream);
	if (fd < 0)
	    goto errhandler_io;
	applySavedFileAttrToOutputFile(fd);
	ret = fclose(zStream);
	outputHandleJustInCase = ((void *) 0);
	if (ret == (-1))
	    goto errhandler_io;
    }
    outputHandleJustInCase = ((void *) 0);
    if (ferror(stream))
	goto errhandler_io;
    ret = fclose(stream);
    if (ret == (-1))
	goto errhandler_io;
    if (verbosity >= 1) {
	if (nbytes_in_lo32 == 0 && nbytes_in_hi32 == 0) {
	    fprintf(stderr, " no data compressed.\n");
	} else {
	    Char buf_nin[32], buf_nout[32];
	    UInt64 nbytes_in, nbytes_out;
	    double nbytes_in_d, nbytes_out_d;
	    uInt64_from_UInt32s(&nbytes_in, nbytes_in_lo32, nbytes_in_hi32);
	    uInt64_from_UInt32s(&nbytes_out, nbytes_out_lo32, nbytes_out_hi32);
	    nbytes_in_d = uInt64_to_double(&nbytes_in);
	    nbytes_out_d = uInt64_to_double(&nbytes_out);
	    uInt64_toAscii(buf_nin, &nbytes_in);
	    uInt64_toAscii(buf_nout, &nbytes_out);
	    fprintf(stderr, "%6.3f:1, %6.3f bits/byte, " "%5.2f%% saved, %s in, %s out.\n", nbytes_in_d / nbytes_out_d, (8.0 * nbytes_out_d) / nbytes_in_d, 100.0 * (1.0 - nbytes_out_d / nbytes_in_d), buf_nin, buf_nout);
    }}
    return;
  errhandler:BZ2_bzWriteClose64(&bzerr_dummy, bzf, 1, &nbytes_in_lo32, &nbytes_in_hi32, &nbytes_out_lo32, &nbytes_out_hi32);
    switch (bzerr) {
    case (-9):
	configError();
	break;
    case (-3):
	outOfMemory();
	break;
    case (-6):
      errhandler_io:ioError();
	break;
    default:
	panic("compress:unexpected error");
    }
    panic("compress:end");
}

static Bool uncompressStream(FILE * zStream, FILE * stream)
{
    BZFILE *bzf = ((void *) 0);
    Int32 bzerr, bzerr_dummy, ret, nread, streamNo, i;
    UChar obuf[5000];
    UChar unused[5000];
    Int32 nUnused;
    void *unusedTmpV;
    UChar *unusedTmp;
    nUnused = 0;
    streamNo = 0;;;
    if (ferror(stream))
	goto errhandler_io;
    if (ferror(zStream))
	goto errhandler_io;
    while (((Bool) 1)) {
	bzf = BZ2_bzReadOpen(&bzerr, zStream, verbosity, (int) smallMode, unused, nUnused);
	if (bzf == ((void *) 0) || bzerr != 0)
	    goto errhandler;
	streamNo++;
	while (bzerr == 0) {
	    nread = BZ2_bzRead(&bzerr, bzf, obuf, 5000);
	    if (bzerr == (-5))
		goto trycat;
	    if ((bzerr == 0 || bzerr == 4) && nread > 0)
		fwrite(obuf, sizeof(UChar), nread, stream);
	    if (ferror(stream))
		goto errhandler_io;
	}
	if (bzerr != 4)
	    goto errhandler;
	BZ2_bzReadGetUnused(&bzerr, bzf, &unusedTmpV, &nUnused);
	if (bzerr != 0)
	    panic("decompress:bzReadGetUnused");
	unusedTmp = (UChar *) unusedTmpV;
	for (i = 0; i < nUnused; i++)
	    unused[i] = unusedTmp[i];
	BZ2_bzReadClose(&bzerr, bzf);
	if (bzerr != 0)
	    panic("decompress:bzReadGetUnused");
	if (nUnused == 0 && myfeof(zStream))
	    break;
    }
  closeok:if (ferror(zStream))
	goto errhandler_io;
    if (stream != stdout) {
	Int32 fd = fileno(stream);
	if (fd < 0)
	    goto errhandler_io;
	applySavedFileAttrToOutputFile(fd);
    }
    ret = fclose(zStream);
    if (ret == (-1))
	goto errhandler_io;
    if (ferror(stream))
	goto errhandler_io;
    ret = fflush(stream);
    if (ret != 0)
	goto errhandler_io;
    if (stream != stdout) {
	ret = fclose(stream);
	outputHandleJustInCase = ((void *) 0);
	if (ret == (-1))
	    goto errhandler_io;
    }
    outputHandleJustInCase = ((void *) 0);
    if (verbosity >= 2)
	fprintf(stderr, "\n    ");
    return ((Bool) 1);
  trycat:if (forceOverwrite) {
	rewind(zStream);
	while (((Bool) 1)) {
	    if (myfeof(zStream))
		break;
	    nread = fread(obuf, sizeof(UChar), 5000, zStream);
	    if (ferror(zStream))
		goto errhandler_io;
	    if (nread > 0)
		fwrite(obuf, sizeof(UChar), nread, stream);
	    if (ferror(stream))
		goto errhandler_io;
	}
	goto closeok;
    }
  errhandler:BZ2_bzReadClose(&bzerr_dummy, bzf);
    switch (bzerr) {
    case (-9):
	configError();
	break;
    case (-6):
      errhandler_io:ioError();
	break;
    case (-4):
	crcError();
    case (-3):
	outOfMemory();
    case (-7):
	compressedStreamEOF();
    case (-5):
	if (zStream != stdin)
	    fclose(zStream);
	if (stream != stdout)
	    fclose(stream);
	if (streamNo == 1) {
	    return ((Bool) 0);
	} else {
	    if (noisy)
		fprintf(stderr, "\n%s: %s: trailing garbage after EOF ignored\n", progName, inName);
	    return ((Bool) 1);
	}
    default:
	panic("decompress:unexpected error");
    }
    panic("decompress:end");
    return ((Bool) 1);
}

static Bool testStream(FILE * zStream)
{
    BZFILE *bzf = ((void *) 0);
    Int32 bzerr, bzerr_dummy, ret, nread, streamNo, i;
    UChar obuf[5000];
    UChar unused[5000];
    Int32 nUnused;
    void *unusedTmpV;
    UChar *unusedTmp;
    nUnused = 0;
    streamNo = 0;;
    if (ferror(zStream))
	goto errhandler_io;
    while (((Bool) 1)) {
	bzf = BZ2_bzReadOpen(&bzerr, zStream, verbosity, (int) smallMode, unused, nUnused);
	if (bzf == ((void *) 0) || bzerr != 0)
	    goto errhandler;
	streamNo++;
	while (bzerr == 0) {
	    nread = BZ2_bzRead(&bzerr, bzf, obuf, 5000);
	    if (bzerr == (-5))
		goto errhandler;
	}
	if (bzerr != 4)
	    goto errhandler;
	BZ2_bzReadGetUnused(&bzerr, bzf, &unusedTmpV, &nUnused);
	if (bzerr != 0)
	    panic("test:bzReadGetUnused");
	unusedTmp = (UChar *) unusedTmpV;
	for (i = 0; i < nUnused; i++)
	    unused[i] = unusedTmp[i];
	BZ2_bzReadClose(&bzerr, bzf);
	if (bzerr != 0)
	    panic("test:bzReadGetUnused");
	if (nUnused == 0 && myfeof(zStream))
	    break;
    }
    if (ferror(zStream))
	goto errhandler_io;
    ret = fclose(zStream);
    if (ret == (-1))
	goto errhandler_io;
    if (verbosity >= 2)
	fprintf(stderr, "\n    ");
    return ((Bool) 1);
  errhandler:BZ2_bzReadClose(&bzerr_dummy, bzf);
    if (verbosity == 0)
	fprintf(stderr, "%s: %s: ", progName, inName);
    switch (bzerr) {
    case (-9):
	configError();
	break;
    case (-6):
      errhandler_io:ioError();
	break;
    case (-4):
	fprintf(stderr, "data integrity (CRC) error in data\n");
	return ((Bool) 0);
    case (-3):
	outOfMemory();
    case (-7):
	fprintf(stderr, "file ends unexpectedly\n");
	return ((Bool) 0);
    case (-5):
	if (zStream != stdin)
	    fclose(zStream);
	if (streamNo == 1) {
	    fprintf(stderr, "bad magic number (file not created by bzip2)\n");
	    return ((Bool) 0);
	} else {
	    if (noisy)
		fprintf(stderr, "trailing garbage after EOF ignored\n");
	    return ((Bool) 1);
	}
    default:
	panic("test:unexpected error");
    }
    panic("test:end");
    return ((Bool) 1);
}

static void setExit(Int32 v)
{
    if (v > exitValue)
	exitValue = v;
}

static void cadvise(void)
{
    if (noisy)
	fprintf(stderr, "\nIt is possible that the compressed file(s) have become corrupted.\n" "You can use the -tvv option to test integrity of such files.\n\n" "You can use the `bzip2recover' program to attempt to recover\n" "data from undamaged sections of corrupted files.\n\n");
}

static void showFileNames(void)
{
    if (noisy)
	fprintf(stderr, "\tInput file = %s, output file = %s\n", inName, outName);
}

static void cleanUpAndFail(Int32 ec)
{
    IntNative retVal;
    struct stat statBuf;
    if (srcMode == 3 && opMode != 3 && deleteOutputOnInterrupt) {
	retVal = stat(inName, &statBuf);
	if (retVal == 0) {
	    if (noisy)
		fprintf(stderr, "%s: Deleting output file %s, if it exists.\n", progName, outName);
	    if (outputHandleJustInCase != ((void *) 0))
		fclose(outputHandleJustInCase);
	    retVal = remove(outName);
	    if (retVal != 0)
		fprintf(stderr, "%s: WARNING: deletion of output file " "(apparently) failed.\n", progName);
	} else {
	    fprintf(stderr, "%s: WARNING: deletion of output file suppressed\n", progName);
	    fprintf(stderr, "%s:    since input file no longer exists.  Output file\n", progName);
	    fprintf(stderr, "%s:    `%s' may be incomplete.\n", progName, outName);
	    fprintf(stderr, "%s:    I suggest doing an integrity test (bzip2 -tv)" " of it.\n", progName);
	}
    }
    if (noisy && numFileNames > 0 && numFilesProcessed < numFileNames) {
	fprintf(stderr, "%s: WARNING: some files have not been processed:\n" "%s:    %d specified on command line, %d not processed yet.\n\n", progName, progName, numFileNames, numFileNames - numFilesProcessed);
    }
    setExit(ec);
    exit(exitValue);
}

static void panic(const Char * s)
{
    fprintf(stderr, "\n%s: PANIC -- internal consistency error:\n" "\t%s\n" "\tThis is a BUG.  Please report it to me at:\n" "\tjseward@bzip.org\n", progName, s);
    showFileNames();
    cleanUpAndFail(3);
} static void crcError(void)
{
    fprintf(stderr, "\n%s: Data integrity error when decompressing.\n", progName);
    showFileNames();
    cadvise();
    cleanUpAndFail(2);
} static void compressedStreamEOF(void)
{
    if (noisy) {
	fprintf(stderr, "\n%s: Compressed file ends unexpectedly;\n\t" "perhaps it is corrupted?  *Possible* reason follows.\n", progName);
	perror(progName);
	showFileNames();
	cadvise();
    }
    cleanUpAndFail(2);
}

static void ioError(void)
{
    fprintf(stderr, "\n%s: I/O or other error, bailing out.  " "Possible reason follows.\n", progName);
    perror(progName);
    showFileNames();
    cleanUpAndFail(1);
} static void mySignalCatcher(IntNative n)
{
    fprintf(stderr, "\n%s: Control-C or similar caught, quitting.\n", progName);
    cleanUpAndFail(1);
} static void mySIGSEGVorSIGBUScatcher(IntNative n)
{
    if (opMode == 1)
	fprintf(stderr, "\n%s: Caught a SIGSEGV or SIGBUS whilst compressing.\n" "\n" "   Possible causes are (most likely first):\n" "   (1) This computer has unreliable memory or cache hardware\n" "       (a surprisingly common problem; try a different machine.)\n" "   (2) A bug in the compiler used to create this executable\n" "       (unlikely, if you didn't compile bzip2 yourself.)\n" "   (3) A real bug in bzip2 -- I hope this should never be the case.\n" "   The user's manual, Section 4.3, has more info on (1) and (2).\n" "   \n" "   If you suspect this is a bug in bzip2, or are unsure about (1)\n" "   or (2), feel free to report it to me at: jseward@bzip.org.\n" "   Section 4.3 of the user's manual describes the info a useful\n" "   bug report should have.  If the manual is available on your\n" "   system, please try and read it before mailing me.  If you don't\n" "   have the manual or can't be bothered to read it, mail me anyway.\n" "\n", progName);
    else
	fprintf(stderr, "\n%s: Caught a SIGSEGV or SIGBUS whilst decompressing.\n" "\n" "   Possible causes are (most likely first):\n" "   (1) The compressed data is corrupted, and bzip2's usual checks\n" "       failed to detect this.  Try bzip2 -tvv my_file.bz2.\n" "   (2) This computer has unreliable memory or cache hardware\n" "       (a surprisingly common problem; try a different machine.)\n" "   (3) A bug in the compiler used to create this executable\n" "       (unlikely, if you didn't compile bzip2 yourself.)\n" "   (4) A real bug in bzip2 -- I hope this should never be the case.\n" "   The user's manual, Section 4.3, has more info on (2) and (3).\n" "   \n" "   If you suspect this is a bug in bzip2, or are unsure about (2)\n" "   or (3), feel free to report it to me at: jseward@bzip.org.\n" "   Section 4.3 of the user's manual describes the info a useful\n" "   bug report should have.  If the manual is available on your\n" "   system, please try and read it before mailing me.  If you don't\n" "   have the manual or can't be bothered to read it, mail me anyway.\n" "\n", progName);
    showFileNames();
    if (opMode == 1)
	cleanUpAndFail(3);
    else {
	cadvise();
	cleanUpAndFail(2);
    }
}

static void outOfMemory(void)
{
    fprintf(stderr, "\n%s: couldn't allocate enough memory\n", progName);
    showFileNames();
    cleanUpAndFail(1);
} static void configError(void)
{
    fprintf(stderr, "bzip2: I'm not configured correctly for this platform!\n" "\tI require Int32, Int16 and Char to have sizes\n" "\tof 4, 2 and 1 bytes to run properly, and they don't.\n" "\tProbably you can fix this by defining them correctly,\n" "\tand recompiling.  Bye!\n");
    setExit(3);
    exit(exitValue);
} static void pad(Char * s)
{
    Int32 i;
    if ((Int32) strlen(s) >= longestFileName)
	return;
    for (i = 1; i <= longestFileName - (Int32) strlen(s); i++)
	fprintf(stderr, " ");
}

static void copyFileName(Char * to, Char * from)
{
    if (strlen(from) > 1034 - 10) {
	fprintf(stderr, "bzip2: file name\n`%s'\n" "is suspiciously (more than %d chars) long.\n" "Try using a reasonable file name instead.  Sorry! :-)\n", from, 1034 - 10);
	setExit(1);
	exit(exitValue);
    }
    strncpy(to, from, 1034 - 10);
    to[1034 - 10] = '\0';
}

static Bool fileExists(Char * name)
{
    FILE *tmp = fopen(name, "rb");
    Bool exists = (tmp != ((void *) 0));
    if (tmp != ((void *) 0))
	fclose(tmp);
    return exists;
}

static FILE *fopen_output_safely(Char * name, const char *mode)
{
    FILE *fp;
    IntNative fh;
    fh = open(name, 01 | 0100 | 0200, 0200 | 0400);
    if (fh == -1)
	return ((void *) 0);
    fp = fdopen(fh, mode);
    if (fp == ((void *) 0))
	close(fh);
    return fp;
}

static Bool notAStandardFile(Char * name)
{
    IntNative i;
    struct stat statBuf;
    i = lstat(name, &statBuf);
    if (i != 0)
	return ((Bool) 1);
    if (((((statBuf.st_mode)) & 0170000) == (0100000)))
	return ((Bool) 0);
    return ((Bool) 1);
}

static Int32 countHardLinks(Char * name)
{
    IntNative i;
    struct stat statBuf;
    i = lstat(name, &statBuf);
    if (i != 0)
	return 0;
    return (statBuf.st_nlink - 1);
}

static struct stat fileMetaInfo;
static void saveInputFileMetaInfo(Char * srcName)
{
    IntNative retVal;
    retVal = stat(srcName, &fileMetaInfo); {
	if ((retVal) != 0)
	    ioError();
    };
}

static void applySavedTimeInfoToOutputFile(Char * dstName)
{
    IntNative retVal;
    struct utimbuf uTimBuf;
    uTimBuf.actime = fileMetaInfo.st_atim.tv_sec;
    uTimBuf.modtime = fileMetaInfo.st_mtim.tv_sec;
    retVal = utime(dstName, &uTimBuf); {
	if ((retVal) != 0)
	    ioError();
    };
}

static void applySavedFileAttrToOutputFile(IntNative fd)
{
    IntNative retVal;
    retVal = fchmod(fd, fileMetaInfo.st_mode); {
	if ((retVal) != 0)
	    ioError();
    };
    (void) fchown(fd, fileMetaInfo.st_uid, fileMetaInfo.st_gid);
} static Bool containsDubiousChars(Char * name)
{
    return ((Bool) 0);
}
const Char *zSuffix[4] = { ".bz2", ".bz", ".tbz2", ".tbz" };
const Char *unzSuffix[4] = { "", "", ".tar", ".tar" };

static Bool hasSuffix(Char * s, const Char * suffix)
{
    Int32 ns = strlen(s);
    Int32 nx = strlen(suffix);
    if (ns < nx)
	return ((Bool) 0);
    if (strcmp(s + ns - nx, suffix) == 0)
	return ((Bool) 1);
    return ((Bool) 0);
}

static Bool mapSuffix(Char * name, const Char * oldSuffix, const Char * newSuffix)
{
    if (!hasSuffix(name, oldSuffix))
	return ((Bool) 0);
    name[strlen(name) - strlen(oldSuffix)] = 0;
    strcat(name, newSuffix);
    return ((Bool) 1);
}

static void compress(Char * name)
{
    FILE *inStr;
    FILE *outStr;
    Int32 n, i;
    struct stat statBuf;
    deleteOutputOnInterrupt = ((Bool) 0);
    if (name == ((void *) 0) && srcMode != 1)
	panic("compress: bad modes\n");
    switch (srcMode) {
    case 1:
	copyFileName(inName, (Char *) "(stdin)");
	copyFileName(outName, (Char *) "(stdout)");
	break;
    case 3:
	copyFileName(inName, name);
	copyFileName(outName, name);
	strcat(outName, ".bz2");
	break;
    case 2:
	copyFileName(inName, name);
	copyFileName(outName, (Char *) "(stdout)");
	break;
    }
    if (srcMode != 1 && containsDubiousChars(inName)) {
	if (noisy)
	    fprintf(stderr, "%s: There are no files matching `%s'.\n", progName, inName);
	setExit(1);
	return;
    }
    if (srcMode != 1 && !fileExists(inName)) {
	fprintf(stderr, "%s: Can't open input file %s: %s.\n", progName, inName, strerror((*__errno_location())));
	setExit(1);
	return;
    }
    for (i = 0; i < 4; i++) {
	if (hasSuffix(inName, zSuffix[i])) {
	    if (noisy)
		fprintf(stderr, "%s: Input file %s already has %s suffix.\n", progName, inName, zSuffix[i]);
	    setExit(1);
	    return;
	}
    }
    if (srcMode == 3 || srcMode == 2) {
	stat(inName, &statBuf);
	if (((((statBuf.st_mode)) & 0170000) == (0040000))) {
	    fprintf(stderr, "%s: Input file %s is a directory.\n", progName, inName);
	    setExit(1);
	    return;
	}
    }
    if (srcMode == 3 && !forceOverwrite && notAStandardFile(inName)) {
	if (noisy)
	    fprintf(stderr, "%s: Input file %s is not a normal file.\n", progName, inName);
	setExit(1);
	return;
    }
    if (srcMode == 3 && fileExists(outName)) {
	if (forceOverwrite) {
	    remove(outName);
	} else {
	    fprintf(stderr, "%s: Output file %s already exists.\n", progName, outName);
	    setExit(1);
	    return;
	}
    }
    if (srcMode == 3 && !forceOverwrite && (n = countHardLinks(inName)) > 0) {
	fprintf(stderr, "%s: Input file %s has %d other link%s.\n", progName, inName, n, n > 1 ? "s" : "");
	setExit(1);
	return;
    }
    if (srcMode == 3) {
	saveInputFileMetaInfo(inName);
    }
    switch (srcMode) {
    case 1:
	inStr = stdin;
	outStr = stdout;
	if (isatty(fileno(stdout))) {
	    fprintf(stderr, "%s: I won't write compressed data to a terminal.\n", progName);
	    fprintf(stderr, "%s: For help, type: `%s --help'.\n", progName, progName);
	    setExit(1);
	    return;
	};
	break;
    case 2:
	inStr = fopen(inName, "rb");
	outStr = stdout;
	if (isatty(fileno(stdout))) {
	    fprintf(stderr, "%s: I won't write compressed data to a terminal.\n", progName);
	    fprintf(stderr, "%s: For help, type: `%s --help'.\n", progName, progName);
	    if (inStr != ((void *) 0))
		fclose(inStr);
	    setExit(1);
	    return;
	};
	if (inStr == ((void *) 0)) {
	    fprintf(stderr, "%s: Can't open input file %s: %s.\n", progName, inName, strerror((*__errno_location())));
	    setExit(1);
	    return;
	};
	break;
    case 3:
	inStr = fopen(inName, "rb");
	outStr = fopen_output_safely(outName, "wb");
	if (outStr == ((void *) 0)) {
	    fprintf(stderr, "%s: Can't create output file %s: %s.\n", progName, outName, strerror((*__errno_location())));
	    if (inStr != ((void *) 0))
		fclose(inStr);
	    setExit(1);
	    return;
	}
	if (inStr == ((void *) 0)) {
	    fprintf(stderr, "%s: Can't open input file %s: %s.\n", progName, inName, strerror((*__errno_location())));
	    if (outStr != ((void *) 0))
		fclose(outStr);
	    setExit(1);
	    return;
	};
	break;
    default:
	panic("compress: bad srcMode");
	break;
    }
    if (verbosity >= 1) {
	fprintf(stderr, "  %s: ", inName);
	pad(inName);
	fflush(stderr);
    }
    outputHandleJustInCase = outStr;
    deleteOutputOnInterrupt = ((Bool) 1);
    compressStream(inStr, outStr);
    outputHandleJustInCase = ((void *) 0);
    if (srcMode == 3) {
	applySavedTimeInfoToOutputFile(outName);
	deleteOutputOnInterrupt = ((Bool) 0);
	if (!keepInputFiles) {
	    IntNative retVal = remove(inName); {
		if ((retVal) != 0)
		    ioError();
	    };
	}
    }
    deleteOutputOnInterrupt = ((Bool) 0);
}

static void uncompress(Char * name)
{
    FILE *inStr;
    FILE *outStr;
    Int32 n, i;
    Bool magicNumberOK;
    Bool cantGuess;
    struct stat statBuf;
    deleteOutputOnInterrupt = ((Bool) 0);
    if (name == ((void *) 0) && srcMode != 1)
	panic("uncompress: bad modes\n");
    cantGuess = ((Bool) 0);
    switch (srcMode) {
    case 1:
	copyFileName(inName, (Char *) "(stdin)");
	copyFileName(outName, (Char *) "(stdout)");
	static void addFlagsFromEnvVar(Cell ** argList, Char * varName)
	{
		Char *envbase, *p;
		envbase = getenv(varName);
		if (envbase != ((void *) 0)) {
			p = envbase;
			while (((Bool) 1)) {
				if (p[0] == 0)
					break;
				p += strlen(p) + 1;
				*argList = snocString(*argList, p);
			}
		}
	}

IntNative main1(IntNative argc, Char * argv[])
{
    Int32 i, j;
    Char *tmp;
    Cell *argList;
    Cell *aa;
    Bool decode;
    if (sizeof(Int32) != 4 || sizeof(UInt32) != 4 || sizeof(Int16) != 2 || sizeof(UInt16) != 2 || sizeof(Char) != 1 || sizeof(UChar) != 1)
	configError();
    outputHandleJustInCase = ((void *) 0);
    smallMode = ((Bool) 0);
    keepInputFiles = ((Bool) 0);
    forceOverwrite = ((Bool) 0);
    noisy = ((Bool) 1);
    verbosity = 0;
    blockSize100k = 9;
    testFailsExist = ((Bool) 0);
    unzFailsExist = ((Bool) 0);
    numFileNames = 0;
    numFilesProcessed = 0;
    workFactor = 30;
    deleteOutputOnInterrupt = ((Bool) 0);
    exitValue = 0;
    i = j = 0;
    signal(11, mySIGSEGVorSIGBUScatcher);
    signal(7, mySIGSEGVorSIGBUScatcher);
    copyFileName(inName, (Char *) "(none)");
    copyFileName(outName, (Char *) "(none)");
    copyFileName(progNameReally, argv[0]);
    progName = &progNameReally[0];
    for (tmp = &progNameReally[0]; *tmp != '\0'; tmp++)
	if (*tmp == '/')
	    progName = tmp + 1;
    argList = ((void *) 0);
    addFlagsFromEnvVar(&argList, (Char *) "BZIP2");
    addFlagsFromEnvVar(&argList, (Char *) "BZIP");
    for (i = 1; i <= argc - 1; i++)
	argList = snocString((argList), (argv[i]));
    longestFileName = 7;
    numFileNames = 0;
    decode = ((Bool) 1);
    for (aa = argList; aa != ((void *) 0); aa = aa->link) {
	if ((strcmp(aa->name, ("--")) == 0)) {
	    decode = ((Bool) 0);
	    continue;
	}
	if (aa->name[0] == '-' && decode)
	    continue;
	numFileNames++;
	if (longestFileName < (Int32) strlen(aa->name))
	    longestFileName = (Int32) strlen(aa->name);
    }
    if (numFileNames == 0)
	srcMode = 1;
    else
	srcMode = 3;
    opMode = 1;
    if ((strstr(progName, "unzip") != 0) || (strstr(progName, "UNZIP") != 0))
	opMode = 2;
    if ((strstr(progName, "z2cat") != 0) || (strstr(progName, "Z2CAT") != 0) || (strstr(progName, "zcat") != 0) || (strstr(progName, "ZCAT") != 0)) {
	opMode = 2;
	srcMode = (numFileNames == 0) ? 1 : 2;
    }
    for (aa = argList; aa != ((void *) 0); aa = aa->link) {
	if ((strcmp(aa->name, ("--")) == 0))
	    break;
	if (aa->name[0] == '-' && aa->name[1] != '-') {
	    for (j = 1; aa->name[j] != '\0'; j++) {
		switch (aa->name[j]) {
		case 'c':
		    srcMode = 2;
		    break;
		case 'd':
		    opMode = 2;
		    break;
		case 'z':
		    opMode = 1;
		    break;
		case 'f':
		    forceOverwrite = ((Bool) 1);
		    break;
		case 't':
		    opMode = 3;
		    break;
		case 'k':
		    keepInputFiles = ((Bool) 1);
		    break;
		case 's':
		    smallMode = ((Bool) 1);
		    break;
		case 'q':
		    noisy = ((Bool) 0);
		    break;
		case '1':
		    blockSize100k = 1;
		    break;
		case '2':
		    blockSize100k = 2;
		    break;
		case '3':
		    blockSize100k = 3;
		    break;
		case '4':
		    blockSize100k = 4;
		    break;
		case '5':
		    blockSize100k = 5;
		    break;
		case '6':
		    blockSize100k = 6;
		    break;
		case '7':
		    blockSize100k = 7;
		    break;
		case '8':
		    blockSize100k = 8;
		    break;
		case '9':
		    blockSize100k = 9;
		    break;
		case 'V':
		case 'L':
		    license();
		    break;
		case 'v':
		    verbosity++;
		    break;
		case 'h':
		    usage(progName);
		    exit(0);
		    break;
		default:
		    fprintf(stderr, "%s: Bad flag `%s'\n", progName, aa->name);
		    usage(progName);
		    exit(1);
		    break;
		}
	    }
	}
    }
    for (aa = argList; aa != ((void *) 0); aa = aa->link) {
	if ((strcmp(aa->name, ("--")) == 0))
	    break;
	if ((strcmp(aa->name, ("--stdout")) == 0))
	    srcMode = 2;
	else if ((strcmp(aa->name, ("--decompress")) == 0))
	    opMode = 2;
	else if ((strcmp(aa->name, ("--compress")) == 0))
	    opMode = 1;
	else if ((strcmp(aa->name, ("--force")) == 0))
	    forceOverwrite = ((Bool) 1);
	else if ((strcmp(aa->name, ("--test")) == 0))
	    opMode = 3;
	else if ((strcmp(aa->name, ("--keep")) == 0))
	    keepInputFiles = ((Bool) 1);
	else if ((strcmp(aa->name, ("--small")) == 0))
	    smallMode = ((Bool) 1);
	else if ((strcmp(aa->name, ("--quiet")) == 0))
	    noisy = ((Bool) 0);
	else if ((strcmp(aa->name, ("--version")) == 0))
	    license();
	else if ((strcmp(aa->name, ("--license")) == 0))
	    license();
	else if ((strcmp(aa->name, ("--exponential")) == 0))
	    workFactor = 1;
	else if ((strcmp(aa->name, ("--repetitive-best")) == 0))
	    redundant(aa->name);
	else if ((strcmp(aa->name, ("--repetitive-fast")) == 0))
	    redundant(aa->name);
	else if ((strcmp(aa->name, ("--fast")) == 0))
	    blockSize100k = 1;
	else if ((strcmp(aa->name, ("--best")) == 0))
	    blockSize100k = 9;
	else if ((strcmp(aa->name, ("--verbose")) == 0))
	    verbosity++;
	else if ((strcmp(aa->name, ("--help")) == 0)) {
	    usage(progName);
	    exit(0);
	} else if (strncmp(aa->name, "--", 2) == 0) {
	    fprintf(stderr, "%s: Bad flag `%s'\n", progName, aa->name);
	    usage(progName);
	    exit(1);
	}
    }
    if (verbosity > 4)
	verbosity = 4;
    if (opMode == 1 && smallMode && blockSize100k > 2)
	blockSize100k = 2;
    if (opMode == 3 && srcMode == 2) {
	fprintf(stderr, "%s: -c and -t cannot be used together.\n", progName);
	exit(1);
    }
    if (srcMode == 2 && numFileNames == 0)
	srcMode = 1;
    if (opMode != 1)
	blockSize100k = 0;
    if (srcMode == 3) {
	signal(2, mySignalCatcher);
	signal(15, mySignalCatcher);
	signal(1, mySignalCatcher);
    }
    if (opMode == 1) {
	if (srcMode == 1) {
	    compress(((void *) 0));
	} else {
	    decode = ((Bool) 1);
	    for (aa = argList; aa != ((void *) 0); aa = aa->link) {
		if ((strcmp(aa->name, ("--")) == 0)) {
		    decode = ((Bool) 0);
		    continue;
		}
		if (aa->name[0] == '-' && decode)
		    continue;
		numFilesProcessed++;
		compress(aa->name);
	    }
	}
    } else if (opMode == 2) {
	unzFailsExist = ((Bool) 0);
	if (srcMode == 1) {
	    uncompress(((void *) 0));
	} else {
	    decode = ((Bool) 1);
	    for (aa = argList; aa != ((void *) 0); aa = aa->link) {
		if ((strcmp(aa->name, ("--")) == 0)) {
		    decode = ((Bool) 0);
		    continue;
		}
		if (aa->name[0] == '-' && decode)
		    continue;
		numFilesProcessed++;
		uncompress(aa->name);
	    }
	}
	if (unzFailsExist) {
	    setExit(2);
	    exit(exitValue);
	}
    } else {
	testFailsExist = ((Bool) 0);
	if (srcMode == 1) {
	    testf(((void *) 0));
	} else {
	    decode = ((Bool) 1);
	    for (aa = argList; aa != ((void *) 0); aa = aa->link) {
		if ((strcmp(aa->name, ("--")) == 0)) {
		    decode = ((Bool) 0);
		    continue;
		}
		if (aa->name[0] == '-' && decode)
		    continue;
		numFilesProcessed++;
		testf(aa->name);
	    }
	}
	if (testFailsExist && noisy) {
	    fprintf(stderr, "\n" "You can use the `bzip2recover' program to attempt to recover\n" "data from undamaged sections of corrupted files.\n\n");
	    setExit(2);
	    exit(exitValue);
	}
    }
    aa = argList;
    while (aa != ((void *) 0)) {
	Cell *aa2 = aa->link;
	if (aa->name != ((void *) 0))
	    free(aa->name);
	free(aa);
	aa = aa2;
    } return exitValue;
}
