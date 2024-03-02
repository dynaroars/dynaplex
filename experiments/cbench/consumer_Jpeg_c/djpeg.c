#include <cstdio>
typedef boolean(*jpeg_marker_parser_method) (j_decompress_ptr cinfo);
extern struct jpeg_error_mgr *jpeg_std_error(struct jpeg_error_mgr *err);
extern void jpeg_CreateCompress(j_compress_ptr cinfo, int version, size_t structsize);
extern void jpeg_CreateDecompress(j_decompress_ptr cinfo, int version, size_t structsize);
extern void jpeg_destroy_compress(j_compress_ptr cinfo);
extern void jpeg_destroy_decompress(j_decompress_ptr cinfo);
extern void jpeg_stdio_dest(j_compress_ptr cinfo, FILE * outfile);
extern void jpeg_stdio_src(j_decompress_ptr cinfo, FILE * infile);
extern void jpeg_set_defaults(j_compress_ptr cinfo);
extern void jpeg_set_colorspace(j_compress_ptr cinfo, J_COLOR_SPACE colorspace);
extern void jpeg_default_colorspace(j_compress_ptr cinfo);
extern void jpeg_set_quality(j_compress_ptr cinfo, int quality, boolean force_baseline);
extern void jpeg_set_linear_quality(j_compress_ptr cinfo, int scale_factor, boolean force_baseline);
extern void jpeg_add_quant_table(j_compress_ptr cinfo, int which_tbl, const unsigned int *basic_table, int scale_factor, boolean force_baseline);
extern int jpeg_quality_scaling(int quality);
extern void jpeg_simple_progression(j_compress_ptr cinfo);
extern void jpeg_suppress_tables(j_compress_ptr cinfo, boolean suppress);
extern JQUANT_TBL *jpeg_alloc_quant_table(j_common_ptr cinfo);
extern JHUFF_TBL *jpeg_alloc_huff_table(j_common_ptr cinfo);
extern void jpeg_start_compress(j_compress_ptr cinfo, boolean write_all_tables);
extern JDIMENSION jpeg_write_scanlines(j_compress_ptr cinfo, JSAMPARRAY scanlines, JDIMENSION num_lines);
extern void jpeg_finish_compress(j_compress_ptr cinfo);
extern JDIMENSION jpeg_write_raw_data(j_compress_ptr cinfo, JSAMPIMAGE data, JDIMENSION num_lines);
extern void jpeg_write_marker(j_compress_ptr cinfo, int marker, const JOCTET * dataptr, unsigned int datalen);
extern void jpeg_write_tables(j_compress_ptr cinfo);
extern int jpeg_read_header(j_decompress_ptr cinfo, boolean require_image);
extern boolean jpeg_start_decompress(j_decompress_ptr cinfo);
extern JDIMENSION jpeg_read_scanlines(j_decompress_ptr cinfo, JSAMPARRAY scanlines, JDIMENSION max_lines);
extern boolean jpeg_finish_decompress(j_decompress_ptr cinfo);
extern JDIMENSION jpeg_read_raw_data(j_decompress_ptr cinfo, JSAMPIMAGE data, JDIMENSION max_lines);
extern boolean jpeg_has_multiple_scans(j_decompress_ptr cinfo);
extern boolean jpeg_start_output(j_decompress_ptr cinfo, int scan_number);
extern boolean jpeg_finish_output(j_decompress_ptr cinfo);
extern boolean jpeg_input_complete(j_decompress_ptr cinfo);
extern void jpeg_new_colormap(j_decompress_ptr cinfo);
extern int jpeg_consume_input(j_decompress_ptr cinfo);
extern void jpeg_calc_output_dimensions(j_decompress_ptr cinfo);
extern void jpeg_set_marker_processor(j_decompress_ptr cinfo, int marker_code, jpeg_marker_parser_method routine);
extern jvirt_barray_ptr *jpeg_read_coefficients(j_decompress_ptr cinfo);
extern void jpeg_write_coefficients(j_compress_ptr cinfo, jvirt_barray_ptr * coef_arrays);
extern void jpeg_copy_critical_parameters(j_decompress_ptr srcinfo, j_compress_ptr dstinfo);
extern void jpeg_abort_compress(j_compress_ptr cinfo);
extern void jpeg_abort_decompress(j_decompress_ptr cinfo);
extern void jpeg_abort(j_common_ptr cinfo);
extern void jpeg_destroy(j_common_ptr cinfo);
extern boolean jpeg_resync_to_restart(j_decompress_ptr cinfo, int desired);
typedef enum { JMSG_NOMESSAGE, JERR_ARITH_NOTIMPL, JERR_BAD_ALIGN_TYPE, JERR_BAD_ALLOC_CHUNK, JERR_BAD_BUFFER_MODE, JERR_BAD_COMPONENT_ID, JERR_BAD_DCTSIZE, JERR_BAD_IN_COLORSPACE, JERR_BAD_J_COLORSPACE, JERR_BAD_LENGTH, JERR_BAD_LIB_VERSION, JERR_BAD_MCU_SIZE, JERR_BAD_POOL_ID, JERR_BAD_PRECISION, JERR_BAD_PROGRESSION, JERR_BAD_PROG_SCRIPT, JERR_BAD_SAMPLING, JERR_BAD_SCAN_SCRIPT, JERR_BAD_STATE, JERR_BAD_STRUCT_SIZE, JERR_BAD_VIRTUAL_ACCESS, JERR_BUFFER_SIZE, JERR_CANT_SUSPEND, JERR_CCIR601_NOTIMPL, JERR_COMPONENT_COUNT, JERR_CONVERSION_NOTIMPL, JERR_DAC_INDEX, JERR_DAC_VALUE, JERR_DHT_COUNTS, JERR_DHT_INDEX, JERR_DQT_INDEX, JERR_EMPTY_IMAGE, JERR_EMS_READ, JERR_EMS_WRITE, JERR_EOI_EXPECTED, JERR_FILE_READ, JERR_FILE_WRITE, JERR_FRACT_SAMPLE_NOTIMPL, JERR_HUFF_CLEN_OVERFLOW, JERR_HUFF_MISSING_CODE, JERR_IMAGE_TOO_BIG, JERR_INPUT_EMPTY, JERR_INPUT_EOF, JERR_MISMATCHED_QUANT_TABLE, JERR_MISSING_DATA, JERR_MODE_CHANGE, JERR_NOTIMPL, JERR_NOT_COMPILED, JERR_NO_BACKING_STORE, JERR_NO_HUFF_TABLE, JERR_NO_IMAGE, JERR_NO_QUANT_TABLE, JERR_NO_SOI, JERR_OUT_OF_MEMORY, JERR_QUANT_COMPONENTS, JERR_QUANT_FEW_COLORS, JERR_QUANT_MANY_COLORS, JERR_SOF_DUPLICATE, JERR_SOF_NO_SOS, JERR_SOF_UNSUPPORTED, JERR_SOI_DUPLICATE, JERR_SOS_NO_SOF, JERR_TFILE_CREATE, JERR_TFILE_READ, JERR_TFILE_SEEK, JERR_TFILE_WRITE, JERR_TOO_LITTLE_DATA, JERR_UNKNOWN_MARKER, JERR_VIRTUAL_BUG, JERR_WIDTH_OVERFLOW, JERR_XMS_READ, JERR_XMS_WRITE, JMSG_COPYRIGHT, JMSG_VERSION, JTRC_16BIT_TABLES, JTRC_ADOBE, JTRC_APP0, JTRC_APP14, JTRC_DAC, JTRC_DHT, JTRC_DQT, JTRC_DRI, JTRC_EMS_CLOSE, JTRC_EMS_OPEN, JTRC_EOI, JTRC_HUFFBITS, JTRC_JFIF, JTRC_JFIF_BADTHUMBNAILSIZE, JTRC_JFIF_MINOR, JTRC_JFIF_THUMBNAIL, JTRC_MISC_MARKER, JTRC_PARMLESS_MARKER, JTRC_QUANTVALS, JTRC_QUANT_3_NCOLORS, JTRC_QUANT_NCOLORS, JTRC_QUANT_SELECTED, JTRC_RECOVERY_ACTION, JTRC_RST, JTRC_SMOOTH_NOTIMPL, JTRC_SOF, JTRC_SOF_COMPONENT, JTRC_SOI, JTRC_SOS, JTRC_SOS_COMPONENT, JTRC_SOS_PARAMS, JTRC_TFILE_CLOSE, JTRC_TFILE_OPEN, JTRC_UNKNOWN_IDS, JTRC_XMS_CLOSE, JTRC_XMS_OPEN, JWRN_ADOBE_XFORM, JWRN_BOGUS_PROGRESSION, JWRN_EXTRANEOUS_DATA, JWRN_HIT_MARKER, JWRN_HUFF_BAD_CODE, JWRN_JFIF_MAJOR, JWRN_JPEG_EOF, JWRN_MUST_RESYNC, JWRN_NOT_SEQUENTIAL, JWRN_TOO_MUCH_DATA, JMSG_LASTMSGCODE } J_MESSAGE_CODE;
typedef enum { JMSG_FIRSTADDONCODE = 1000, JERR_BMP_BADCMAP, JERR_BMP_BADDEPTH, JERR_BMP_BADHEADER, JERR_BMP_BADPLANES, JERR_BMP_COLORSPACE, JERR_BMP_COMPRESSED, JERR_BMP_NOT, JTRC_BMP, JTRC_BMP_MAPPED, JTRC_BMP_OS2, JTRC_BMP_OS2_MAPPED, JERR_GIF_BUG, JERR_GIF_CODESIZE, JERR_GIF_COLORSPACE, JERR_GIF_IMAGENOTFOUND, JERR_GIF_NOT, JTRC_GIF, JTRC_GIF_BADVERSION, JTRC_GIF_EXTENSION, JTRC_GIF_NONSQUARE, JWRN_GIF_BADDATA, JWRN_GIF_CHAR, JWRN_GIF_ENDCODE, JWRN_GIF_NOMOREDATA, JERR_PPM_COLORSPACE, JERR_PPM_NONNUMERIC, JERR_PPM_NOT, JTRC_PGM, JTRC_PGM_TEXT, JTRC_PPM, JTRC_PPM_TEXT, JERR_TGA_BADCMAP, JERR_TGA_BADPARMS, JERR_TGA_COLORSPACE, JTRC_TGA, JTRC_TGA_GRAY, JTRC_TGA_MAPPED, JERR_BAD_CMAP_FILE, JERR_TOO_MANY_COLORS, JERR_UNGETC_FAILED, JERR_UNKNOWN_FORMAT, JERR_UNSUPPORTED_FORMAT, JMSG_LASTADDONCODE } ADDON_MESSAGE_CODE;
typedef struct cjpeg_source_struct *cjpeg_source_ptr;
struct cjpeg_source_struct {
    void (*start_input) (j_compress_ptr cinfo, cjpeg_source_ptr sinfo);
    JDIMENSION(*get_pixel_rows) (j_compress_ptr cinfo, cjpeg_source_ptr sinfo);
    void (*finish_input) (j_compress_ptr cinfo, cjpeg_source_ptr sinfo);
    FILE *input_file;
    JSAMPARRAY buffer;
    JDIMENSION buffer_height;
};
typedef struct djpeg_dest_struct *djpeg_dest_ptr;
struct djpeg_dest_struct {
    void (*start_output) (j_decompress_ptr cinfo, djpeg_dest_ptr dinfo);
    void (*put_pixel_rows) (j_decompress_ptr cinfo, djpeg_dest_ptr dinfo, JDIMENSION rows_supplied);
    void (*finish_output) (j_decompress_ptr cinfo, djpeg_dest_ptr dinfo);
    FILE *output_file;
    JSAMPARRAY buffer;
    JDIMENSION buffer_height;
};
struct cdjpeg_progress_mgr {
    struct jpeg_progress_mgr pub;
    int completed_extra_passes;
    int total_extra_passes;
    int percent_done;
};
typedef struct cdjpeg_progress_mgr *cd_progress_ptr;
extern cjpeg_source_ptr jinit_read_bmp(j_compress_ptr cinfo);
extern djpeg_dest_ptr jinit_write_bmp(j_decompress_ptr cinfo, boolean is_os2);
extern cjpeg_source_ptr jinit_read_gif(j_compress_ptr cinfo);
extern djpeg_dest_ptr jinit_write_gif(j_decompress_ptr cinfo);
extern cjpeg_source_ptr jinit_read_ppm(j_compress_ptr cinfo);
extern djpeg_dest_ptr jinit_write_ppm(j_decompress_ptr cinfo);
extern cjpeg_source_ptr jinit_read_rle(j_compress_ptr cinfo);
extern djpeg_dest_ptr jinit_write_rle(j_decompress_ptr cinfo);
extern cjpeg_source_ptr jinit_read_targa(j_compress_ptr cinfo);
extern djpeg_dest_ptr jinit_write_targa(j_decompress_ptr cinfo);
extern boolean read_quant_tables(j_compress_ptr cinfo, char *filename, int scale_factor, boolean force_baseline);
extern boolean read_scan_script(j_compress_ptr cinfo, char *filename);
extern boolean set_quant_slots(j_compress_ptr cinfo, char *arg);
extern boolean set_sample_factors(j_compress_ptr cinfo, char *arg);
extern void read_color_map(j_decompress_ptr cinfo, FILE * infile);
extern void enable_signal_catcher(j_common_ptr cinfo);
extern void start_progress_monitor(j_common_ptr cinfo, cd_progress_ptr progress);
extern void end_progress_monitor(j_common_ptr cinfo);
extern boolean keymatch(char *arg, const char *keyword, int minchars);
extern FILE *read_stdin(void);
extern FILE *write_stdout(void);
enum { _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)), _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)), _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)), _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)), _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)), _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)), _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)), _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)), _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)), _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)), _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)), _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8)) };
extern __const unsigned short int **__ctype_b_loc(void) __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc(void) __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc(void) __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern int isalnum(int) __attribute__ ((__nothrow__));
extern int isalpha(int) __attribute__ ((__nothrow__));
extern int iscntrl(int) __attribute__ ((__nothrow__));
extern int isdigit(int) __attribute__ ((__nothrow__));
extern int islower(int) __attribute__ ((__nothrow__));
extern int isgraph(int) __attribute__ ((__nothrow__));
extern int isprint(int) __attribute__ ((__nothrow__));
extern int ispunct(int) __attribute__ ((__nothrow__));
extern int isspace(int) __attribute__ ((__nothrow__));
extern int isupper(int) __attribute__ ((__nothrow__));
extern int isxdigit(int) __attribute__ ((__nothrow__));
extern int tolower(int __c) __attribute__ ((__nothrow__));
extern int toupper(int __c) __attribute__ ((__nothrow__));
extern int isblank(int) __attribute__ ((__nothrow__));
extern int isascii(int __c) __attribute__ ((__nothrow__));
extern int toascii(int __c) __attribute__ ((__nothrow__));
extern int _toupper(int) __attribute__ ((__nothrow__));
extern int _tolower(int) __attribute__ ((__nothrow__));
extern int isalnum_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isalpha_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int iscntrl_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isdigit_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int islower_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isgraph_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isprint_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int ispunct_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isspace_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isupper_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isxdigit_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int isblank_l(int, __locale_t) __attribute__ ((__nothrow__));
extern int __tolower_l(int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int tolower_l(int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int __toupper_l(int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int toupper_l(int __c, __locale_t __l) __attribute__ ((__nothrow__));
static const char *const cdjpeg_message_table[] = { ((void *) 0), "Unsupported BMP colormap format", "Only 8- and 24-bit BMP files are supported", "Invalid BMP file: bad header length", "Invalid BMP file: biPlanes not equal to 1", "BMP output must be grayscale or RGB", "Sorry, compressed BMPs not yet supported", "Not a BMP file - does not start with BM", "%ux%u 24-bit BMP image", "%ux%u 8-bit colormapped BMP image", "%ux%u 24-bit OS2 BMP image", "%ux%u 8-bit colormapped OS2 BMP image", "GIF output got confused", "Bogus GIF codesize %d", "GIF output must be grayscale or RGB", "Too few images in GIF file", "Not a GIF file", "%ux%ux%d GIF image", "Warning: unexpected GIF version number '%c%c%c'", "Ignoring GIF extension block of type 0x%02x", "Caution: nonsquare pixels in input", "Corrupt data in GIF file", "Bogus char 0x%02x in GIF file, ignoring", "Premature end of GIF image", "Ran out of GIF bits", "PPM output must be grayscale or RGB", "Nonnumeric data in PPM file", "Not a PPM file", "%ux%u PGM image", "%ux%u text PGM image", "%ux%u PPM image", "%ux%u text PPM image", "Unsupported Targa colormap format", "Invalid or unsupported Targa file", "Targa output must be grayscale or RGB", "%ux%u RGB Targa image", "%ux%u grayscale Targa image", "%ux%u colormapped Targa image", "Color map file is invalid or of unsupported format", "Output file format cannot handle %d colormap entries", "ungetc failed", "Unrecognized input file format --- perhaps you need -targa", "Unsupported output file format", ((void *) 0) };
typedef enum { FMT_BMP, FMT_GIF, FMT_OS2, FMT_PPM, FMT_RLE, FMT_TARGA, FMT_TIFF } IMAGE_FORMATS;
static IMAGE_FORMATS requested_fmt;
static const char *progname;
static char *outfilename;
static void usage(void)
{
    fprintf(stderr, "usage: %s [switches] ", progname);
    fprintf(stderr, "[inputfile]\n");
    fprintf(stderr, "Switches (names may be abbreviated):\n");
    fprintf(stderr, "  -colors N      Reduce image to no more than N colors\n");
    fprintf(stderr, "  -fast          Fast, low-quality processing\n");
    fprintf(stderr, "  -grayscale     Force grayscale output\n");
    fprintf(stderr, "  -scale M/N     Scale output image by fraction M/N, eg, 1/8\n");
    fprintf(stderr, "  -bmp           Select BMP output format (Windows style)%s\n", (FMT_PPM == FMT_BMP ? " (default)" : ""));
    fprintf(stderr, "  -gif           Select GIF output format%s\n", (FMT_PPM == FMT_GIF ? " (default)" : ""));
    fprintf(stderr, "  -os2           Select BMP output format (OS/2 style)%s\n", (FMT_PPM == FMT_OS2 ? " (default)" : ""));
    fprintf(stderr, "  -pnm           Select PBMPLUS (PPM/PGM) output format%s\n", (FMT_PPM == FMT_PPM ? " (default)" : ""));
    fprintf(stderr, "  -targa         Select Targa output format%s\n", (FMT_PPM == FMT_TARGA ? " (default)" : ""));
    fprintf(stderr, "Switches for advanced users:\n");
    fprintf(stderr, "  -dct int       Use integer DCT method%s\n", (JDCT_ISLOW == JDCT_ISLOW ? " (default)" : ""));
    fprintf(stderr, "  -dct fast      Use fast integer DCT (less accurate)%s\n", (JDCT_ISLOW == JDCT_IFAST ? " (default)" : ""));
    fprintf(stderr, "  -dct float     Use floating-point DCT method%s\n", (JDCT_ISLOW == JDCT_FLOAT ? " (default)" : ""));
    fprintf(stderr, "  -dither fs     Use F-S dithering (default)\n");
    fprintf(stderr, "  -dither none   Don't use dithering in quantization\n");
    fprintf(stderr, "  -dither ordered  Use ordered dither (medium speed, quality)\n");
    fprintf(stderr, "  -map FILE      Map to colors used in named image file\n");
    fprintf(stderr, "  -nosmooth      Don't use high-quality upsampling\n");
    fprintf(stderr, "  -onepass       Use 1-pass quantization (fast, low quality)\n");
    fprintf(stderr, "  -maxmemory N   Maximum memory to use (in kbytes)\n");
    fprintf(stderr, "  -outfile name  Specify name for output file\n");
    fprintf(stderr, "  -verbose  or  -debug   Emit debug output\n");
    exit(1);
} static int parse_switches(j_decompress_ptr cinfo, int argc, char **argv, int last_file_arg_seen, boolean for_real)
{
    int argn;
    char *arg;
    requested_fmt = FMT_PPM;
    outfilename = ((void *) 0);
    cinfo->err->trace_level = 0;
    for (argn = 1; argn < argc; argn++) {
	arg = argv[argn];
	if (*arg != '-') {
	    if (argn <= last_file_arg_seen) {
		outfilename = ((void *) 0);
		continue;
	    }
	    break;
	}
	arg++;
	if (keymatch(arg, "bmp", 1)) {
	    requested_fmt = FMT_BMP;
	} else if (keymatch(arg, "colors", 1) || keymatch(arg, "colours", 1) || keymatch(arg, "quantize", 1) || keymatch(arg, "quantise", 1)) {
	    int val;
	    if (++argn >= argc)
		usage();
	    if (sscanf(argv[argn], "%d", &val) != 1)
		usage();
	    cinfo->desired_number_of_colors = val;
	    cinfo->quantize_colors = 1;
	} else if (keymatch(arg, "dct", 2)) {
	    if (++argn >= argc)
		usage();
	    if (keymatch(argv[argn], "int", 1)) {
		cinfo->dct_method = JDCT_ISLOW;
	    } else if (keymatch(argv[argn], "fast", 2)) {
		cinfo->dct_method = JDCT_IFAST;
	    } else if (keymatch(argv[argn], "float", 2)) {
		cinfo->dct_method = JDCT_FLOAT;
	    } else
		usage();
	} else if (keymatch(arg, "dither", 2)) {
	    if (++argn >= argc)
		usage();
	    if (keymatch(argv[argn], "fs", 2)) {
		cinfo->dither_mode = JDITHER_FS;
	    } else if (keymatch(argv[argn], "none", 2)) {
		cinfo->dither_mode = JDITHER_NONE;
	    } else if (keymatch(argv[argn], "ordered", 2)) {
		cinfo->dither_mode = JDITHER_ORDERED;
	    } else
		usage();
	} else if (keymatch(arg, "debug", 1) || keymatch(arg, "verbose", 1)) {
	    static boolean printed_version = 0;
	    if (!printed_version) {
		fprintf(stderr, "Independent JPEG Group's DJPEG, version %s\n%s\n", "6a  7-Feb-96", "Copyright (C) 1996, Thomas G. Lane");
		printed_version = 1;
	    }
	    cinfo->err->trace_level++;
	} else if (keymatch(arg, "fast", 1)) {
	    cinfo->two_pass_quantize = 0;
	    cinfo->dither_mode = JDITHER_ORDERED;
	    if (!cinfo->quantize_colors)
		cinfo->desired_number_of_colors = 216;
	    cinfo->dct_method = JDCT_IFAST;
	    cinfo->do_fancy_upsampling = 0;
	} else if (keymatch(arg, "gif", 1)) {
	    requested_fmt = FMT_GIF;
	} else if (keymatch(arg, "grayscale", 2) || keymatch(arg, "greyscale", 2)) {
	    cinfo->out_color_space = JCS_GRAYSCALE;
	} else if (keymatch(arg, "map", 3)) {
	    if (++argn >= argc)
		usage();
	    if (for_real) {
		FILE *mapfile;
		if ((mapfile = fopen(argv[argn], "rb")) == ((void *) 0)) {
		    fprintf(stderr, "%s: can't open %s\n", progname, argv[argn]);
		    exit(1);
		}
		read_color_map(cinfo, mapfile);
		fclose(mapfile);
		cinfo->quantize_colors = 1;
	    }
	} else if (keymatch(arg, "maxmemory", 3)) {
	    long lval;
	    char ch = 'x';
	    if (++argn >= argc)
		usage();
	    if (sscanf(argv[argn], "%ld%c", &lval, &ch) < 1)
		usage();
	    if (ch == 'm' || ch == 'M')
		lval *= 1000L;
	    cinfo->mem->max_memory_to_use = lval * 1000L;
	} else if (keymatch(arg, "nosmooth", 3)) {
	    cinfo->do_fancy_upsampling = 0;
	} else if (keymatch(arg, "onepass", 3)) {
	    cinfo->two_pass_quantize = 0;
	} else if (keymatch(arg, "os2", 3)) {
	    requested_fmt = FMT_OS2;
	} else if (keymatch(arg, "outfile", 4)) {
	    if (++argn >= argc)
		usage();
	    outfilename = argv[argn];
	} else if (keymatch(arg, "pnm", 1) || keymatch(arg, "ppm", 1)) {
	    requested_fmt = FMT_PPM;
	} else if (keymatch(arg, "rle", 1)) {
	    requested_fmt = FMT_RLE;
	} else if (keymatch(arg, "scale", 1)) {
	    if (++argn >= argc)
		usage();
	    if (sscanf(argv[argn], "%d/%d", &cinfo->scale_num, &cinfo->scale_denom) != 2)
		usage();
	} else if (keymatch(arg, "targa", 1)) {
	    requested_fmt = FMT_TARGA;
	} else {
	    usage();
	}
    }
    return argn;
}

static unsigned int jpeg_getc(j_decompress_ptr cinfo)
{
    struct jpeg_source_mgr *datasrc = cinfo->src;
    if (datasrc->bytes_in_buffer == 0) {
	if (!(*datasrc->fill_input_buffer) (cinfo))
	    ((cinfo)->err->msg_code = (JERR_CANT_SUSPEND), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    }
    datasrc->bytes_in_buffer--;
    return (*datasrc->next_input_byte++);
}

static boolean COM_handler(j_decompress_ptr cinfo)
{
    boolean traceit = (cinfo->err->trace_level >= 1);
    INT32 length;
    unsigned int ch;
    unsigned int lastch = 0;
    length = jpeg_getc(cinfo) << 8;
    length += jpeg_getc(cinfo);
    length -= 2;
    if (traceit)
	fprintf(stderr, "Comment, length %ld:\n", (long) length);
    while (--length >= 0) {
	ch = jpeg_getc(cinfo);
	if (traceit) {
	    if (ch == '\r') {
		fprintf(stderr, "\n");
	    } else if (ch == '\n') {
		if (lastch != '\r')
		    fprintf(stderr, "\n");
	    } else if (ch == '\\') {
		fprintf(stderr, "\\\\");
	    } else if (((*__ctype_b_loc())[(int) ((ch))] & (unsigned short int) _ISprint)) {
		_IO_putc(ch, stderr);
	    } else {
		fprintf(stderr, "\\%03o", ch);
	    }
	    lastch = ch;
	}
    }
    if (traceit)
	fprintf(stderr, "\n");
    return 1;
}

int main1(int argc, char **argv)
{
    struct jpeg_decompress_struct cinfo;
    struct jpeg_error_mgr jerr;
    int file_index;
    djpeg_dest_ptr dest_mgr = ((void *) 0);
    FILE *input_file;
    FILE *output_file;
    JDIMENSION num_scanlines;
    progname = argv[0];
    if (progname == ((void *) 0) || progname[0] == 0)
	progname = "djpeg";
    cinfo.err = jpeg_std_error(&jerr);
    jpeg_CreateDecompress((&cinfo), 61, (size_t) sizeof(struct jpeg_decompress_struct));
    jerr.addon_message_table = cdjpeg_message_table;
    jerr.first_addon_message = JMSG_FIRSTADDONCODE;
    jerr.last_addon_message = JMSG_LASTADDONCODE;
    jpeg_set_marker_processor(&cinfo, 0xFE, COM_handler);
    file_index = parse_switches(&cinfo, argc, argv, 0, 0);
    if (file_index < argc - 1) {
	fprintf(stderr, "%s: only one input file\n", progname);
	usage();
    }
    if (file_index < argc) {
	if ((input_file = fopen(argv[file_index], "rb")) == ((void *) 0)) {
	    fprintf(stderr, "%s: can't open %s\n", progname, argv[file_index]);
	    exit(1);
	}
    } else {
	input_file = read_stdin();
    }
    if (outfilename != ((void *) 0)) {
	if ((output_file = fopen(outfilename, "wb")) == ((void *) 0)) {
	    fprintf(stderr, "%s: can't open %s\n", progname, outfilename);
	    exit(1);
	}
    } else {
	output_file = write_stdout();
    }
    jpeg_stdio_src(&cinfo, input_file);
    (void) jpeg_read_header(&cinfo, 1);
    file_index = parse_switches(&cinfo, argc, argv, 0, 1);
    switch (requested_fmt) {
    case FMT_BMP:
	dest_mgr = jinit_write_bmp(&cinfo, 0);
	break;
    case FMT_OS2:
	dest_mgr = jinit_write_bmp(&cinfo, 1);
	break;
    case FMT_GIF:
	dest_mgr = jinit_write_gif(&cinfo);
	break;
    case FMT_PPM:
	dest_mgr = jinit_write_ppm(&cinfo);
	break;
    case FMT_TARGA:
	dest_mgr = jinit_write_targa(&cinfo);
	break;
    default:
	((&cinfo)->err->msg_code = (JERR_UNSUPPORTED_FORMAT), (*(&cinfo)->err->error_exit) ((j_common_ptr) (&cinfo)));
	break;
    }
    dest_mgr->output_file = output_file;
    (void) jpeg_start_decompress(&cinfo);
    (*dest_mgr->start_output) (&cinfo, dest_mgr);
    while (cinfo.output_scanline < cinfo.output_height) {
	num_scanlines = jpeg_read_scanlines(&cinfo, dest_mgr->buffer, dest_mgr->buffer_height);
	(*dest_mgr->put_pixel_rows) (&cinfo, dest_mgr, num_scanlines);
    }
    (*dest_mgr->finish_output) (&cinfo, dest_mgr);
    (void) jpeg_finish_decompress(&cinfo);
    jpeg_destroy_decompress(&cinfo);
    if (input_file != stdin)
	fclose(input_file);
    if (output_file != stdout)
	fclose(output_file);
    return 0;
}
