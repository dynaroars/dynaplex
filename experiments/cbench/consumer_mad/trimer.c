typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;
__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct {
    int __val[2];
} __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;
__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;
__extension__ typedef int __clockid_t;
__extension__ typedef void *__timer_t;
__extension__ typedef long int __blksize_t;
__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;
__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;
__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;
__extension__ typedef int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
__extension__ typedef int __intptr_t;
__extension__ typedef unsigned int __socklen_t;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
typedef struct {
    int __count;
    union {
	unsigned int __wch;
	char __wchb[4];
    } __value;
} __mbstate_t;
typedef struct {
    __off_t __pos;
    __mbstate_t __state;
} _G_fpos_t;
typedef struct {
    __off64_t __pos;
    __mbstate_t __state;
} _G_fpos64_t;
typedef int _G_int16_t __attribute__ ((__mode__(__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__(__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__(__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__(__SI__)));
typedef __builtin_va_list va_list;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t;
struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
    struct _IO_marker *_next;
    struct _IO_FILE *_sbuf;
    int _pos;
};
enum __codecvt_result { __codecvt_ok, __codecvt_partial, __codecvt_error, __codecvt_noconv };
struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    unsigned short _cur_column;
    signed char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15 * sizeof(int) - 4 * sizeof(void *) - sizeof(size_t)];
};
typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);
typedef __ssize_t __io_write_fn(void *__cookie, __const char *__buf, size_t __n);
typedef int __io_seek_fn(void *__cookie, __off64_t * __pos, int __w);
typedef int __io_close_fn(void *__cookie);
extern int __underflow(_IO_FILE *);
extern int __uflow(_IO_FILE *);
extern int __overflow(_IO_FILE *, int);
extern int _IO_getc(_IO_FILE * __fp);
extern int _IO_putc(int __c, _IO_FILE * __fp);
extern int _IO_feof(_IO_FILE * __fp) __attribute__ ((__nothrow__));
extern int _IO_ferror(_IO_FILE * __fp) __attribute__ ((__nothrow__));
extern int _IO_peekc_locked(_IO_FILE * __fp);
extern void _IO_flockfile(_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile(_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile(_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_vfscanf(_IO_FILE * __restrict, const char *__restrict, __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf(_IO_FILE * __restrict, const char *__restrict, __gnuc_va_list);
extern __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn(_IO_FILE *, void *, size_t);
extern __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
extern void _IO_free_backup_area(_IO_FILE *) __attribute__ ((__nothrow__));
typedef _G_fpos_t fpos_t;
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern int remove(__const char *__filename) __attribute__ ((__nothrow__));
extern int rename(__const char *__old, __const char *__new) __attribute__ ((__nothrow__));
extern int renameat(int __oldfd, __const char *__old, int __newfd, __const char *__new) __attribute__ ((__nothrow__));
extern FILE *tmpfile(void);
extern char *tmpnam(char *__s) __attribute__ ((__nothrow__));
extern char *tmpnam_r(char *__s) __attribute__ ((__nothrow__));
extern char *tempnam(__const char *__dir, __const char *__pfx) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern int fclose(FILE * __stream);
extern int fflush(FILE * __stream);
extern int fflush_unlocked(FILE * __stream);
extern FILE *fopen(__const char *__restrict __filename, __const char *__restrict __modes);
extern FILE *freopen(__const char *__restrict __filename, __const char *__restrict __modes, FILE * __restrict __stream);
extern FILE *fdopen(int __fd, __const char *__modes) __attribute__ ((__nothrow__));
extern FILE *fmemopen(void *__s, size_t __len, __const char *__modes) __attribute__ ((__nothrow__));
extern FILE *open_memstream(char **__bufloc, size_t * __sizeloc) __attribute__ ((__nothrow__));
extern void setbuf(FILE * __restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));
extern int setvbuf(FILE * __restrict __stream, char *__restrict __buf, int __modes, size_t __n) __attribute__ ((__nothrow__));
extern void setbuffer(FILE * __restrict __stream, char *__restrict __buf, size_t __size) __attribute__ ((__nothrow__));
extern void setlinebuf(FILE * __stream) __attribute__ ((__nothrow__));
extern int fprintf(FILE * __restrict __stream, __const char *__restrict __format, ...);
extern int printf(__const char *__restrict __format, ...);
extern int sprintf(char *__restrict __s, __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int vfprintf(FILE * __restrict __s, __const char *__restrict __format, __gnuc_va_list __arg);
extern int vprintf(__const char *__restrict __format, __gnuc_va_list __arg);
extern int vsprintf(char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__nothrow__));
extern int snprintf(char *__restrict __s, size_t __maxlen, __const char *__restrict __format, ...) __attribute__ ((__nothrow__)) __attribute__ ((__format__(__printf__, 3, 4)));
extern int vsnprintf(char *__restrict __s, size_t __maxlen, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__nothrow__)) __attribute__ ((__format__(__printf__, 3, 0)));
extern int vdprintf(int __fd, __const char *__restrict __fmt, __gnuc_va_list __arg) __attribute__ ((__format__(__printf__, 2, 0)));
extern int fscanf(FILE * __restrict __stream, __const char *__restrict __format, ...);
extern int scanf(__const char *__restrict __format, ...);
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int fscanf(FILE * __restrict __stream, __const char *__restrict __format, ...) __asm__("" "__isoc99_fscanf");
extern int scanf(__const char *__restrict __format, ...) __asm__("" "__isoc99_scanf");
extern int sscanf(__const char *__restrict __s, __const char *__restrict __format, ...) __asm__("" "__isoc99_sscanf") __attribute__ ((__nothrow__));
extern int vfscanf(FILE * __restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__format__(__scanf__, 2, 0)));
extern int vscanf(__const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__format__(__scanf__, 1, 0)));
extern int vsscanf(__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __attribute__ ((__nothrow__)) __attribute__ ((__format__(__scanf__, 2, 0)));
extern int vfscanf(FILE * __restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__("" "__isoc99_vfscanf") __attribute__ ((__format__(__scanf__, 2, 0)));
extern int vscanf(__const char *__restrict __format, __gnuc_va_list __arg) __asm__("" "__isoc99_vscanf") __attribute__ ((__format__(__scanf__, 1, 0)));
extern int vsscanf(__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__("" "__isoc99_vsscanf") __attribute__ ((__nothrow__)) __attribute__ ((__format__(__scanf__, 2, 0)));
extern int fgetc(FILE * __stream);
extern int getc(FILE * __stream);
extern int getchar(void);
extern int getc_unlocked(FILE * __stream);
extern int getchar_unlocked(void);
extern int fgetc_unlocked(FILE * __stream);
extern int fputc(int __c, FILE * __stream);
extern int putc(int __c, FILE * __stream);
extern int putchar(int __c);
extern int fputc_unlocked(int __c, FILE * __stream);
extern int putc_unlocked(int __c, FILE * __stream);
extern int putchar_unlocked(int __c);
extern int getw(FILE * __stream);
extern int putw(int __w, FILE * __stream);
extern char *fgets(char *__restrict __s, int __n, FILE * __restrict __stream);
extern char *gets(char *__s);
extern __ssize_t __getdelim(char **__restrict __lineptr, size_t * __restrict __n, int __delimiter, FILE * __restrict __stream);
extern __ssize_t getdelim(char **__restrict __lineptr, size_t * __restrict __n, int __delimiter, FILE * __restrict __stream);
extern int fputs(__const char *__restrict __s, FILE * __restrict __stream);
extern int puts(__const char *__s);
extern int ungetc(int __c, FILE * __stream);
extern size_t fread(void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);
extern size_t fwrite(__const void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __s);
extern size_t fread_unlocked(void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);
extern size_t fwrite_unlocked(__const void *__restrict __ptr, size_t __size, size_t __n, FILE * __restrict __stream);
extern int fseek(FILE * __stream, long int __off, int __whence);
extern long int ftell(FILE * __stream);
extern void rewind(FILE * __stream);
extern int fseeko(FILE * __stream, __off_t __off, int __whence);
extern __off_t ftello(FILE * __stream);
extern int fgetpos(FILE * __restrict __stream, fpos_t * __restrict __pos);
extern int fsetpos(FILE * __stream, __const fpos_t * __pos);
extern void clearerr(FILE * __stream) __attribute__ ((__nothrow__));
extern int feof(FILE * __stream) __attribute__ ((__nothrow__));
extern int ferror(FILE * __stream) __attribute__ ((__nothrow__));
extern void clearerr_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern int feof_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern int ferror_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern void perror(__const char *__s);
extern int sys_nerr;
extern __const char *__const sys_errlist[];
extern int fileno(FILE * __stream) __attribute__ ((__nothrow__));
extern int fileno_unlocked(FILE * __stream) __attribute__ ((__nothrow__));
extern FILE *popen(__const char *__command, __const char *__modes);
extern int pclose(FILE * __stream);
extern char *ctermid(char *__s) __attribute__ ((__nothrow__));
extern void flockfile(FILE * __stream) __attribute__ ((__nothrow__));
extern int ftrylockfile(FILE * __stream) __attribute__ ((__nothrow__));
extern void funlockfile(FILE * __stream) __attribute__ ((__nothrow__));
extern void __assert_fail(__const char *__assertion, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert_perror_fail(int __errnum, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
typedef struct {
    signed long seconds;
    unsigned long fraction;
} mad_timer_t;
extern mad_timer_t const mad_timer_zero;
enum mad_units { MAD_UNITS_HOURS = -2, MAD_UNITS_MINUTES = -1, MAD_UNITS_SECONDS = 0, MAD_UNITS_DECISECONDS = 10, MAD_UNITS_CENTISECONDS = 100, MAD_UNITS_MILLISECONDS = 1000, MAD_UNITS_8000_HZ = 8000, MAD_UNITS_11025_HZ = 11025, MAD_UNITS_12000_HZ = 12000, MAD_UNITS_16000_HZ = 16000, MAD_UNITS_22050_HZ = 22050, MAD_UNITS_24000_HZ = 24000, MAD_UNITS_32000_HZ = 32000, MAD_UNITS_44100_HZ = 44100, MAD_UNITS_48000_HZ = 48000, MAD_UNITS_24_FPS = 24, MAD_UNITS_25_FPS = 25, MAD_UNITS_30_FPS = 30, MAD_UNITS_48_FPS = 48, MAD_UNITS_50_FPS = 50, MAD_UNITS_60_FPS = 60, MAD_UNITS_75_FPS = 75, MAD_UNITS_23_976_FPS = -24, MAD_UNITS_24_975_FPS = -25, MAD_UNITS_29_97_FPS = -30, MAD_UNITS_47_952_FPS = -48, MAD_UNITS_49_95_FPS = -50, MAD_UNITS_59_94_FPS = -60 };
int mad_timer_compare(mad_timer_t, mad_timer_t);
void mad_timer_negate(mad_timer_t *);
mad_timer_t mad_timer_abs(mad_timer_t);
void mad_timer_set(mad_timer_t *, unsigned long, unsigned long, unsigned long);
void mad_timer_add(mad_timer_t *, mad_timer_t);
void mad_timer_multiply(mad_timer_t *, signed long);
signed long mad_timer_count(mad_timer_t, enum mad_units);
unsigned long mad_timer_fraction(mad_timer_t, unsigned long);
void mad_timer_string(mad_timer_t, char *, char const *, enum mad_units, enum mad_units, unsigned long);
mad_timer_t const mad_timer_zero = { 0, 0 };

int mad_timer_compare(mad_timer_t timer1, mad_timer_t timer2)
{
    signed long diff;
    diff = timer1.seconds - timer2.seconds;
    if (diff < 0)
	return -1;
    else if (diff > 0)
	return +1;
    diff = timer1.fraction - timer2.fraction;
    if (diff < 0)
	return -1;
    else if (diff > 0)
	return +1;
    return 0;
}

void mad_timer_negate(mad_timer_t * timer)
{
    timer->seconds = -timer->seconds;
    if (timer->fraction) {
	timer->seconds -= 1;
	timer->fraction = 352800000UL - timer->fraction;
    }
}

mad_timer_t mad_timer_abs(mad_timer_t timer)
{
    if (mad_timer_compare((timer), mad_timer_zero) < 0)
	mad_timer_negate(&timer);
    return timer;
}

static void reduce_timer(mad_timer_t * timer)
{
    timer->seconds += timer->fraction / 352800000UL;
    timer->fraction %= 352800000UL;
} static unsigned long gcd(unsigned long num1, unsigned long num2)
{
    unsigned long tmp;
    while (num2) {
	tmp = num2;
	num2 = num1 % num2;
	num1 = tmp;
    }
    return num1;
}

static void reduce_rational(unsigned long *numer, unsigned long *denom)
{
    unsigned long factor;
    factor = gcd(*numer, *denom);
    ((factor != 0) ? (void) (0) : __assert_fail("factor != 0", "timer.c", 127, __PRETTY_FUNCTION__));
    *numer /= factor;
    *denom /= factor;
} static unsigned long scale_rational(unsigned long numer, unsigned long denom, unsigned long scale)
{
    reduce_rational(&numer, &denom);
    reduce_rational(&scale, &denom);
    ((denom != 0) ? (void) (0) : __assert_fail("denom != 0", "timer.c", 144, __PRETTY_FUNCTION__));
    if (denom < scale)
	return numer * (scale / denom) + numer * (scale % denom) / denom;
    if (denom < numer)
	return scale * (numer / denom) + scale * (numer % denom) / denom;
    return numer * scale / denom;
}

void mad_timer_set(mad_timer_t * timer, unsigned long seconds, unsigned long numer, unsigned long denom)
{
    timer->seconds = seconds;
    if (numer >= denom && denom > 0) {
	timer->seconds += numer / denom;
	numer %= denom;
    }
    switch (denom) {
    case 0:
    case 1:
	timer->fraction = 0;
	break;
    case 352800000UL:
	timer->fraction = numer;
	break;
    case 1000:
	timer->fraction = numer * (352800000UL / 1000);
	break;
    case 8000:
	timer->fraction = numer * (352800000UL / 8000);
	break;
    case 11025:
	timer->fraction = numer * (352800000UL / 11025);
	break;
    case 12000:
	timer->fraction = numer * (352800000UL / 12000);
	break;
    case 16000:
	timer->fraction = numer * (352800000UL / 16000);
	break;
    case 22050:
	timer->fraction = numer * (352800000UL / 22050);
	break;
    case 24000:
	timer->fraction = numer * (352800000UL / 24000);
	break;
    case 32000:
	timer->fraction = numer * (352800000UL / 32000);
	break;
    case 44100:
	timer->fraction = numer * (352800000UL / 44100);
	break;
    case 48000:
	timer->fraction = numer * (352800000UL / 48000);
	break;
    default:
	timer->fraction = scale_rational(numer, denom, 352800000UL);
	break;
    }
    if (timer->fraction >= 352800000UL)
	reduce_timer(timer);
}

void mad_timer_add(mad_timer_t * timer, mad_timer_t incr)
{
    timer->seconds += incr.seconds;
    timer->fraction += incr.fraction;
    if (timer->fraction >= 352800000UL)
	reduce_timer(timer);
}
//complexity is O(n) inferred by loopus
void mad_timer_multiply(mad_timer_t * timer, signed long scalar)
{
    mad_timer_t addend;
    unsigned long factor;
    factor = scalar;
    if (scalar < 0) {
	factor = -scalar;
	mad_timer_negate(timer);
    }
    addend = *timer;
    *timer = mad_timer_zero;
    while (factor) {
	if (factor & 1)
	    mad_timer_add(timer, addend);
	mad_timer_add(&addend, addend);
	factor >>= 1;
    }
}

signed long mad_timer_count(mad_timer_t timer, enum mad_units units)
{
    switch (units) {
    case MAD_UNITS_HOURS:
	return timer.seconds / 60 / 60;
    case MAD_UNITS_MINUTES:
	return timer.seconds / 60;
    case MAD_UNITS_SECONDS:
	return timer.seconds;
    case MAD_UNITS_DECISECONDS:
    case MAD_UNITS_CENTISECONDS:
    case MAD_UNITS_MILLISECONDS:
    case MAD_UNITS_8000_HZ:
    case MAD_UNITS_11025_HZ:
    case MAD_UNITS_12000_HZ:
    case MAD_UNITS_16000_HZ:
    case MAD_UNITS_22050_HZ:
    case MAD_UNITS_24000_HZ:
    case MAD_UNITS_32000_HZ:
    case MAD_UNITS_44100_HZ:
    case MAD_UNITS_48000_HZ:
    case MAD_UNITS_24_FPS:
    case MAD_UNITS_25_FPS:
    case MAD_UNITS_30_FPS:
    case MAD_UNITS_48_FPS:
    case MAD_UNITS_50_FPS:
    case MAD_UNITS_60_FPS:
    case MAD_UNITS_75_FPS:
	return timer.seconds * (signed long) units + (signed long) scale_rational(timer.fraction, 352800000UL, units);
    case MAD_UNITS_23_976_FPS:
    case MAD_UNITS_24_975_FPS:
    case MAD_UNITS_29_97_FPS:
    case MAD_UNITS_47_952_FPS:
    case MAD_UNITS_49_95_FPS:
    case MAD_UNITS_59_94_FPS:
	return (mad_timer_count(timer, -units) + 1) * 1000 / 1001;
    }
    return 0;
}

unsigned long mad_timer_fraction(mad_timer_t timer, unsigned long denom)
{
    timer = mad_timer_abs(timer);
    switch (denom) {
    case 0:
	return 352800000UL / timer.fraction;
    case 352800000UL:
	return timer.fraction;
    default:
	return scale_rational(timer.fraction, 352800000UL, denom);
    }
}

void mad_timer_string(mad_timer_t timer, char *dest, char const *format, enum mad_units units, enum mad_units fracunits, unsigned long subparts)
{
    unsigned long hours, minutes, seconds, sub;
    unsigned int frac;
    timer = mad_timer_abs(timer);
    seconds = timer.seconds;
    frac = sub = 0;
    switch (fracunits) {
    case MAD_UNITS_HOURS:
    case MAD_UNITS_MINUTES:
    case MAD_UNITS_SECONDS:
	break;
    case MAD_UNITS_DECISECONDS:
    case MAD_UNITS_CENTISECONDS:
    case MAD_UNITS_MILLISECONDS:
    case MAD_UNITS_8000_HZ:
    case MAD_UNITS_11025_HZ:
    case MAD_UNITS_12000_HZ:
    case MAD_UNITS_16000_HZ:
    case MAD_UNITS_22050_HZ:
    case MAD_UNITS_24000_HZ:
    case MAD_UNITS_32000_HZ:
    case MAD_UNITS_44100_HZ:
    case MAD_UNITS_48000_HZ:
    case MAD_UNITS_24_FPS:
    case MAD_UNITS_25_FPS:
    case MAD_UNITS_30_FPS:
    case MAD_UNITS_48_FPS:
    case MAD_UNITS_50_FPS:
    case MAD_UNITS_60_FPS:
    case MAD_UNITS_75_FPS:{
	    unsigned long denom;
	    denom = 352800000UL / fracunits;
	    frac = timer.fraction / denom;
	    sub = scale_rational(timer.fraction % denom, denom, subparts);
	} break;
    case MAD_UNITS_23_976_FPS:
    case MAD_UNITS_24_975_FPS:
    case MAD_UNITS_29_97_FPS:
    case MAD_UNITS_47_952_FPS:
    case MAD_UNITS_49_95_FPS:
    case MAD_UNITS_59_94_FPS:{
	    unsigned long frame, cycle, d, m;
	    frame = mad_timer_count(timer, fracunits);
	    cycle = -fracunits * 60 * 10 - (10 - 1) * 2;
	    d = frame / cycle;
	    m = frame % cycle;
	    frame += (10 - 1) * 2 * d;
	    if (m > 2)
		frame += 2 * ((m - 2) / (cycle / 10));
	    frac = frame % -fracunits;
	    seconds = frame / -fracunits;
	}
	break;
    }
    switch (units) {
    case MAD_UNITS_HOURS:
	minutes = seconds / 60;
	hours = minutes / 60;
	sprintf(dest, format, hours, (unsigned int) (minutes % 60), (unsigned int) (seconds % 60), frac, sub);
	break;
    case MAD_UNITS_MINUTES:
	minutes = seconds / 60;
	sprintf(dest, format, minutes, (unsigned int) (seconds % 60), frac, sub);
	break;
    case MAD_UNITS_SECONDS:
	sprintf(dest, format, seconds, frac, sub);
	break;
    case MAD_UNITS_23_976_FPS:
    case MAD_UNITS_24_975_FPS:
    case MAD_UNITS_29_97_FPS:
    case MAD_UNITS_47_952_FPS:
    case MAD_UNITS_49_95_FPS:
    case MAD_UNITS_59_94_FPS:
	if (fracunits < 0) {
	    sub = 0;
	}
    case MAD_UNITS_DECISECONDS:
    case MAD_UNITS_CENTISECONDS:
    case MAD_UNITS_MILLISECONDS:
    case MAD_UNITS_8000_HZ:
    case MAD_UNITS_11025_HZ:
    case MAD_UNITS_12000_HZ:
    case MAD_UNITS_16000_HZ:
    case MAD_UNITS_22050_HZ:
    case MAD_UNITS_24000_HZ:
    case MAD_UNITS_32000_HZ:
    case MAD_UNITS_44100_HZ:
    case MAD_UNITS_48000_HZ:
    case MAD_UNITS_24_FPS:
    case MAD_UNITS_25_FPS:
    case MAD_UNITS_30_FPS:
    case MAD_UNITS_48_FPS:
    case MAD_UNITS_50_FPS:
    case MAD_UNITS_60_FPS:
    case MAD_UNITS_75_FPS:
	sprintf(dest, format, mad_timer_count(timer, units), sub);
	break;
    }
}
