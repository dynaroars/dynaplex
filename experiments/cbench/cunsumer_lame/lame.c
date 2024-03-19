extern void __assert_fail(__const char *__assertion, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert_perror_fail(int __errnum, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
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
extern int dprintf(int __fd, __const char *__restrict __fmt, ...) __attribute__ ((__format__(__printf__, 2, 3)));
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
extern __ssize_t getline(char **__restrict __lineptr, size_t * __restrict __n, FILE * __restrict __stream);
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
typedef enum sound_file_format_e { sf_unknown, sf_wave, sf_aiff, sf_mp3, sf_raw } sound_file_format;
typedef struct {
    unsigned long num_samples;
    int num_channels;
    int in_samplerate;
    int out_samplerate;
    int gtkflag;
    int bWriteVbrTag;
    int quality;
    int silent;
    int mode;
    int mode_fixed;
    int force_ms;
    int brate;
    int copyright;
    int original;
    int error_protection;
    int padding_type;
    int extension;
    int disable_reservoir;
    int experimentalX;
    int experimentalY;
    int experimentalZ;
    int VBR;
    int VBR_q;
    int VBR_min_bitrate_kbps;
    int VBR_max_bitrate_kbps;
    int lowpassfreq;
    int highpassfreq;
    int lowpasswidth;
    int highpasswidth;
    sound_file_format input_format;
    int swapbytes;
    char *inPath;
    char *outPath;
    int ATHonly;
    int noATH;
    float cwlimit;
    int allow_diff_short;
    int no_short_blocks;
    int emphasis;
    long int frameNum;
    long totalframes;
    int encoder_delay;
    int framesize;
    int version;
    int padding;
    int mode_gr;
    int stereo;
    int VBR_min_bitrate;
    int VBR_max_bitrate;
    float resample_ratio;
    int bitrate_index;
    int samplerate_index;
    int mode_ext;
    float lowpass1, lowpass2;
    float highpass1, highpass2;
    int lowpass_band;
    int highpass_band;
    int filter_type;
    int quantization;
    int noise_shaping;
    int noise_shaping_stop;
    int psymodel;
    int use_best_huffman;
} lame_global_flags;
void lame_init(lame_global_flags *);
void lame_usage(lame_global_flags *, char *);
void lame_help(lame_global_flags *, char *);
void lame_version(lame_global_flags *, char *);
void lame_parse_args(lame_global_flags *, int argc, char **argv);
void lame_init_params(lame_global_flags *);
void lame_print_config(lame_global_flags *);
int lame_encode_buffer(lame_global_flags *, short int leftpcm[], short int rightpcm[], int num_samples, char *mp3buffer, int mp3buffer_size);
int lame_encode_buffer_interleaved(lame_global_flags *, short int pcm[], int num_samples, char *mp3buffer, int mp3buffer_size);
int lame_encode(lame_global_flags *, short int Buffer[2][1152], char *mp3buffer, int mp3buffer_size);
int lame_encode_finish(lame_global_flags *, char *mp3buffer, int size);
void lame_mp3_tags(lame_global_flags *);
void lame_init_infile(lame_global_flags *);
int lame_readframe(lame_global_flags *, short int Buffer[2][1152]);
void lame_close_infile(lame_global_flags *);
int lame_decode_init(void);
int lame_decode(char *mp3buf, int len, short pcm_l[], short pcm_r[]);
int lame_decode_initfile(FILE * fd, int *stereo, int *samp, int *bitrate, unsigned long *nsamp);
int lame_decode_fromfile(FILE * fd, short int pcm_l[], short int pcm_r[]);
extern void *memcpy(void *__restrict __dest, __const void *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memmove(void *__dest, __const void *__src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memccpy(void *__restrict __dest, __const void *__restrict __src, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memset(void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int memcmp(__const void *__s1, __const void *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern void *memchr(__const void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *strcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strcat(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strncat(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int strcmp(__const char *__s1, __const char *__s2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern int strncmp(__const char *__s1, __const char *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern int strcoll(__const char *__s1, __const char *__s2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern size_t strxfrm(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
typedef struct __locale_struct {
    struct locale_data *__locales[13];
    const unsigned short int *__ctype_b;
    const int *__ctype_tolower;
    const int *__ctype_toupper;
    const char *__names[13];
} *__locale_t;
typedef __locale_t locale_t;
extern int strcoll_l(__const char *__s1, __const char *__s2, __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2, 3)));
extern size_t strxfrm_l(char *__dest, __const char *__src, size_t __n, __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern char *strdup(__const char *__s) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__(1)));
extern char *strndup(__const char *__string, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__(1)));
extern char *strchr(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *strrchr(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern size_t strcspn(__const char *__s, __const char *__reject) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern size_t strspn(__const char *__s, __const char *__accept) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strpbrk(__const char *__s, __const char *__accept) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strstr(__const char *__haystack, __const char *__needle) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strtok(char *__restrict __s, __const char *__restrict __delim) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern char *__strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern char *strtok_r(char *__restrict __s, __const char *__restrict __delim, char **__restrict __save_ptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern size_t strlen(__const char *__s) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern size_t strnlen(__const char *__string, size_t __maxlen) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *strerror(int __errnum) __attribute__ ((__nothrow__));
extern int strerror_r(int __errnum, char *__buf, size_t __buflen) __asm__("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern char *strerror_l(int __errnum, __locale_t __l) __attribute__ ((__nothrow__));
extern void __bzero(void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void bcopy(__const void *__src, void *__dest, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void bzero(void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int bcmp(__const void *__s1, __const void *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *index(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern char *rindex(__const char *__s, int __c) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern int ffs(int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int strcasecmp(__const char *__s1, __const char *__s2) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern int strncasecmp(__const char *__s1, __const char *__s2, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strsep(char **__restrict __stringp, __const char *__restrict __delim) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *strsignal(int __sig) __attribute__ ((__nothrow__));
extern char *__stpcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *stpcpy(char *__restrict __dest, __const char *__restrict __src) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *__stpncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern char *stpncpy(char *__restrict __dest, __const char *__restrict __src, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
typedef float float_t;
typedef double double_t;
extern double acos(double __x) __attribute__ ((__nothrow__));
extern double __acos(double __x) __attribute__ ((__nothrow__));
extern double asin(double __x) __attribute__ ((__nothrow__));
extern double __asin(double __x) __attribute__ ((__nothrow__));
extern double atan(double __x) __attribute__ ((__nothrow__));
extern double __atan(double __x) __attribute__ ((__nothrow__));
extern double atan2(double __y, double __x) __attribute__ ((__nothrow__));
extern double __atan2(double __y, double __x) __attribute__ ((__nothrow__));
extern double cos(double __x) __attribute__ ((__nothrow__));
extern double __cos(double __x) __attribute__ ((__nothrow__));
extern double sin(double __x) __attribute__ ((__nothrow__));
extern double __sin(double __x) __attribute__ ((__nothrow__));
extern double tan(double __x) __attribute__ ((__nothrow__));
extern double __tan(double __x) __attribute__ ((__nothrow__));
extern double cosh(double __x) __attribute__ ((__nothrow__));
extern double __cosh(double __x) __attribute__ ((__nothrow__));
extern double sinh(double __x) __attribute__ ((__nothrow__));
extern double __sinh(double __x) __attribute__ ((__nothrow__));
extern double tanh(double __x) __attribute__ ((__nothrow__));
extern double __tanh(double __x) __attribute__ ((__nothrow__));
extern double acosh(double __x) __attribute__ ((__nothrow__));
extern double __acosh(double __x) __attribute__ ((__nothrow__));
extern double asinh(double __x) __attribute__ ((__nothrow__));
extern double __asinh(double __x) __attribute__ ((__nothrow__));
extern double atanh(double __x) __attribute__ ((__nothrow__));
extern double __atanh(double __x) __attribute__ ((__nothrow__));
extern double exp(double __x) __attribute__ ((__nothrow__));
extern double __exp(double __x) __attribute__ ((__nothrow__));
extern double frexp(double __x, int *__exponent) __attribute__ ((__nothrow__));
extern double __frexp(double __x, int *__exponent) __attribute__ ((__nothrow__));
extern double ldexp(double __x, int __exponent) __attribute__ ((__nothrow__));
extern double __ldexp(double __x, int __exponent) __attribute__ ((__nothrow__));
extern double log(double __x) __attribute__ ((__nothrow__));
extern double __log(double __x) __attribute__ ((__nothrow__));
extern double log10(double __x) __attribute__ ((__nothrow__));
extern double __log10(double __x) __attribute__ ((__nothrow__));
extern double modf(double __x, double *__iptr) __attribute__ ((__nothrow__));
extern double __modf(double __x, double *__iptr) __attribute__ ((__nothrow__));
extern double expm1(double __x) __attribute__ ((__nothrow__));
extern double __expm1(double __x) __attribute__ ((__nothrow__));
extern double log1p(double __x) __attribute__ ((__nothrow__));
extern double __log1p(double __x) __attribute__ ((__nothrow__));
extern double logb(double __x) __attribute__ ((__nothrow__));
extern double __logb(double __x) __attribute__ ((__nothrow__));
extern double exp2(double __x) __attribute__ ((__nothrow__));
extern double __exp2(double __x) __attribute__ ((__nothrow__));
extern double log2(double __x) __attribute__ ((__nothrow__));
extern double __log2(double __x) __attribute__ ((__nothrow__));
extern double pow(double __x, double __y) __attribute__ ((__nothrow__));
extern double __pow(double __x, double __y) __attribute__ ((__nothrow__));
extern double sqrt(double __x) __attribute__ ((__nothrow__));
extern double __sqrt(double __x) __attribute__ ((__nothrow__));
extern double hypot(double __x, double __y) __attribute__ ((__nothrow__));
extern double __hypot(double __x, double __y) __attribute__ ((__nothrow__));
extern double cbrt(double __x) __attribute__ ((__nothrow__));
extern double __cbrt(double __x) __attribute__ ((__nothrow__));
extern double ceil(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __ceil(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double fabs(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __fabs(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double floor(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __floor(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double fmod(double __x, double __y) __attribute__ ((__nothrow__));
extern double __fmod(double __x, double __y) __attribute__ ((__nothrow__));
extern int __isinf(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __finite(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isinf(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int finite(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double drem(double __x, double __y) __attribute__ ((__nothrow__));
extern double __drem(double __x, double __y) __attribute__ ((__nothrow__));
extern double significand(double __x) __attribute__ ((__nothrow__));
extern double __significand(double __x) __attribute__ ((__nothrow__));
extern double copysign(double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __copysign(double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double nan(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __nan(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __isnan(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isnan(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double j0(double) __attribute__ ((__nothrow__));
extern double __j0(double) __attribute__ ((__nothrow__));
extern double j1(double) __attribute__ ((__nothrow__));
extern double __j1(double) __attribute__ ((__nothrow__));
extern double jn(int, double) __attribute__ ((__nothrow__));
extern double __jn(int, double) __attribute__ ((__nothrow__));
extern double y0(double) __attribute__ ((__nothrow__));
extern double __y0(double) __attribute__ ((__nothrow__));
extern double y1(double) __attribute__ ((__nothrow__));
extern double __y1(double) __attribute__ ((__nothrow__));
extern double yn(int, double) __attribute__ ((__nothrow__));
extern double __yn(int, double) __attribute__ ((__nothrow__));
extern double erf(double) __attribute__ ((__nothrow__));
extern double __erf(double) __attribute__ ((__nothrow__));
extern double erfc(double) __attribute__ ((__nothrow__));
extern double __erfc(double) __attribute__ ((__nothrow__));
extern double lgamma(double) __attribute__ ((__nothrow__));
extern double __lgamma(double) __attribute__ ((__nothrow__));
extern double tgamma(double) __attribute__ ((__nothrow__));
extern double __tgamma(double) __attribute__ ((__nothrow__));
extern double gamma(double) __attribute__ ((__nothrow__));
extern double __gamma(double) __attribute__ ((__nothrow__));
extern double lgamma_r(double, int *__signgamp) __attribute__ ((__nothrow__));
extern double __lgamma_r(double, int *__signgamp) __attribute__ ((__nothrow__));
extern double rint(double __x) __attribute__ ((__nothrow__));
extern double __rint(double __x) __attribute__ ((__nothrow__));
extern double nextafter(double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __nextafter(double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double nexttoward(double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __nexttoward(double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double remainder(double __x, double __y) __attribute__ ((__nothrow__));
extern double __remainder(double __x, double __y) __attribute__ ((__nothrow__));
extern double scalbn(double __x, int __n) __attribute__ ((__nothrow__));
extern double __scalbn(double __x, int __n) __attribute__ ((__nothrow__));
extern int ilogb(double __x) __attribute__ ((__nothrow__));
extern int __ilogb(double __x) __attribute__ ((__nothrow__));
extern double scalbln(double __x, long int __n) __attribute__ ((__nothrow__));
extern double __scalbln(double __x, long int __n) __attribute__ ((__nothrow__));
extern double nearbyint(double __x) __attribute__ ((__nothrow__));
extern double __nearbyint(double __x) __attribute__ ((__nothrow__));
extern double round(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __round(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double trunc(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double __trunc(double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double remquo(double __x, double __y, int *__quo) __attribute__ ((__nothrow__));
extern double __remquo(double __x, double __y, int *__quo) __attribute__ ((__nothrow__));
extern long int lrint(double __x) __attribute__ ((__nothrow__));
extern long int __lrint(double __x) __attribute__ ((__nothrow__));
extern long long int llrint(double __x) __attribute__ ((__nothrow__));
extern long long int __llrint(double __x) __attribute__ ((__nothrow__));
extern long int lround(double __x) __attribute__ ((__nothrow__));
extern long int __lround(double __x) __attribute__ ((__nothrow__));
extern long long int llround(double __x) __attribute__ ((__nothrow__));
extern long long int __llround(double __x) __attribute__ ((__nothrow__));
extern double fdim(double __x, double __y) __attribute__ ((__nothrow__));
extern double __fdim(double __x, double __y) __attribute__ ((__nothrow__));
extern double fmax(double __x, double __y) __attribute__ ((__nothrow__));
extern double __fmax(double __x, double __y) __attribute__ ((__nothrow__));
extern double fmin(double __x, double __y) __attribute__ ((__nothrow__));
extern double __fmin(double __x, double __y) __attribute__ ((__nothrow__));
extern int __fpclassify(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __signbit(double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern double fma(double __x, double __y, double __z) __attribute__ ((__nothrow__));
extern double __fma(double __x, double __y, double __z) __attribute__ ((__nothrow__));
extern double scalb(double __x, double __n) __attribute__ ((__nothrow__));
extern double __scalb(double __x, double __n) __attribute__ ((__nothrow__));
extern float acosf(float __x) __attribute__ ((__nothrow__));
extern float __acosf(float __x) __attribute__ ((__nothrow__));
extern float asinf(float __x) __attribute__ ((__nothrow__));
extern float __asinf(float __x) __attribute__ ((__nothrow__));
extern float atanf(float __x) __attribute__ ((__nothrow__));
extern float __atanf(float __x) __attribute__ ((__nothrow__));
extern float atan2f(float __y, float __x) __attribute__ ((__nothrow__));
extern float __atan2f(float __y, float __x) __attribute__ ((__nothrow__));
extern float cosf(float __x) __attribute__ ((__nothrow__));
extern float __cosf(float __x) __attribute__ ((__nothrow__));
extern float sinf(float __x) __attribute__ ((__nothrow__));
extern float __sinf(float __x) __attribute__ ((__nothrow__));
extern float tanf(float __x) __attribute__ ((__nothrow__));
extern float __tanf(float __x) __attribute__ ((__nothrow__));
extern float coshf(float __x) __attribute__ ((__nothrow__));
extern float __coshf(float __x) __attribute__ ((__nothrow__));
extern float sinhf(float __x) __attribute__ ((__nothrow__));
extern float __sinhf(float __x) __attribute__ ((__nothrow__));
extern float tanhf(float __x) __attribute__ ((__nothrow__));
extern float __tanhf(float __x) __attribute__ ((__nothrow__));
extern float acoshf(float __x) __attribute__ ((__nothrow__));
extern float __acoshf(float __x) __attribute__ ((__nothrow__));
extern float asinhf(float __x) __attribute__ ((__nothrow__));
extern float __asinhf(float __x) __attribute__ ((__nothrow__));
extern float atanhf(float __x) __attribute__ ((__nothrow__));
extern float __atanhf(float __x) __attribute__ ((__nothrow__));
extern float expf(float __x) __attribute__ ((__nothrow__));
extern float __expf(float __x) __attribute__ ((__nothrow__));
extern float frexpf(float __x, int *__exponent) __attribute__ ((__nothrow__));
extern float __frexpf(float __x, int *__exponent) __attribute__ ((__nothrow__));
extern float ldexpf(float __x, int __exponent) __attribute__ ((__nothrow__));
extern float __ldexpf(float __x, int __exponent) __attribute__ ((__nothrow__));
extern float logf(float __x) __attribute__ ((__nothrow__));
extern float __logf(float __x) __attribute__ ((__nothrow__));
extern float log10f(float __x) __attribute__ ((__nothrow__));
extern float __log10f(float __x) __attribute__ ((__nothrow__));
extern float modff(float __x, float *__iptr) __attribute__ ((__nothrow__));
extern float __modff(float __x, float *__iptr) __attribute__ ((__nothrow__));
extern float expm1f(float __x) __attribute__ ((__nothrow__));
extern float __expm1f(float __x) __attribute__ ((__nothrow__));
extern float log1pf(float __x) __attribute__ ((__nothrow__));
extern float __log1pf(float __x) __attribute__ ((__nothrow__));
extern float logbf(float __x) __attribute__ ((__nothrow__));
extern float __logbf(float __x) __attribute__ ((__nothrow__));
extern float exp2f(float __x) __attribute__ ((__nothrow__));
extern float __exp2f(float __x) __attribute__ ((__nothrow__));
extern float log2f(float __x) __attribute__ ((__nothrow__));
extern float __log2f(float __x) __attribute__ ((__nothrow__));
extern float powf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __powf(float __x, float __y) __attribute__ ((__nothrow__));
extern float sqrtf(float __x) __attribute__ ((__nothrow__));
extern float __sqrtf(float __x) __attribute__ ((__nothrow__));
extern float hypotf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __hypotf(float __x, float __y) __attribute__ ((__nothrow__));
extern float cbrtf(float __x) __attribute__ ((__nothrow__));
extern float __cbrtf(float __x) __attribute__ ((__nothrow__));
extern float ceilf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __ceilf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float fabsf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __fabsf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float floorf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __floorf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float fmodf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __fmodf(float __x, float __y) __attribute__ ((__nothrow__));
extern int __isinff(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __finitef(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isinff(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int finitef(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float dremf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __dremf(float __x, float __y) __attribute__ ((__nothrow__));
extern float significandf(float __x) __attribute__ ((__nothrow__));
extern float __significandf(float __x) __attribute__ ((__nothrow__));
extern float copysignf(float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __copysignf(float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float nanf(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __nanf(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __isnanf(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isnanf(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float j0f(float) __attribute__ ((__nothrow__));
extern float __j0f(float) __attribute__ ((__nothrow__));
extern float j1f(float) __attribute__ ((__nothrow__));
extern float __j1f(float) __attribute__ ((__nothrow__));
extern float jnf(int, float) __attribute__ ((__nothrow__));
extern float __jnf(int, float) __attribute__ ((__nothrow__));
extern float y0f(float) __attribute__ ((__nothrow__));
extern float __y0f(float) __attribute__ ((__nothrow__));
extern float y1f(float) __attribute__ ((__nothrow__));
extern float __y1f(float) __attribute__ ((__nothrow__));
extern float ynf(int, float) __attribute__ ((__nothrow__));
extern float __ynf(int, float) __attribute__ ((__nothrow__));
extern float erff(float) __attribute__ ((__nothrow__));
extern float __erff(float) __attribute__ ((__nothrow__));
extern float erfcf(float) __attribute__ ((__nothrow__));
extern float __erfcf(float) __attribute__ ((__nothrow__));
extern float lgammaf(float) __attribute__ ((__nothrow__));
extern float __lgammaf(float) __attribute__ ((__nothrow__));
extern float tgammaf(float) __attribute__ ((__nothrow__));
extern float __tgammaf(float) __attribute__ ((__nothrow__));
extern float gammaf(float) __attribute__ ((__nothrow__));
extern float __gammaf(float) __attribute__ ((__nothrow__));
extern float lgammaf_r(float, int *__signgamp) __attribute__ ((__nothrow__));
extern float __lgammaf_r(float, int *__signgamp) __attribute__ ((__nothrow__));
extern float rintf(float __x) __attribute__ ((__nothrow__));
extern float __rintf(float __x) __attribute__ ((__nothrow__));
extern float nextafterf(float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __nextafterf(float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float nexttowardf(float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __nexttowardf(float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float remainderf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __remainderf(float __x, float __y) __attribute__ ((__nothrow__));
extern float scalbnf(float __x, int __n) __attribute__ ((__nothrow__));
extern float __scalbnf(float __x, int __n) __attribute__ ((__nothrow__));
extern int ilogbf(float __x) __attribute__ ((__nothrow__));
extern int __ilogbf(float __x) __attribute__ ((__nothrow__));
extern float scalblnf(float __x, long int __n) __attribute__ ((__nothrow__));
extern float __scalblnf(float __x, long int __n) __attribute__ ((__nothrow__));
extern float nearbyintf(float __x) __attribute__ ((__nothrow__));
extern float __nearbyintf(float __x) __attribute__ ((__nothrow__));
extern float roundf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __roundf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float truncf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float __truncf(float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float remquof(float __x, float __y, int *__quo) __attribute__ ((__nothrow__));
extern float __remquof(float __x, float __y, int *__quo) __attribute__ ((__nothrow__));
extern long int lrintf(float __x) __attribute__ ((__nothrow__));
extern long int __lrintf(float __x) __attribute__ ((__nothrow__));
extern long long int llrintf(float __x) __attribute__ ((__nothrow__));
extern long long int __llrintf(float __x) __attribute__ ((__nothrow__));
extern long int lroundf(float __x) __attribute__ ((__nothrow__));
extern long int __lroundf(float __x) __attribute__ ((__nothrow__));
extern long long int llroundf(float __x) __attribute__ ((__nothrow__));
extern long long int __llroundf(float __x) __attribute__ ((__nothrow__));
extern float fdimf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __fdimf(float __x, float __y) __attribute__ ((__nothrow__));
extern float fmaxf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __fmaxf(float __x, float __y) __attribute__ ((__nothrow__));
extern float fminf(float __x, float __y) __attribute__ ((__nothrow__));
extern float __fminf(float __x, float __y) __attribute__ ((__nothrow__));
extern int __fpclassifyf(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __signbitf(float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern float fmaf(float __x, float __y, float __z) __attribute__ ((__nothrow__));
extern float __fmaf(float __x, float __y, float __z) __attribute__ ((__nothrow__));
extern float scalbf(float __x, float __n) __attribute__ ((__nothrow__));
extern float __scalbf(float __x, float __n) __attribute__ ((__nothrow__));
extern long double acosl(long double __x) __attribute__ ((__nothrow__));
extern long double __acosl(long double __x) __attribute__ ((__nothrow__));
extern long double asinl(long double __x) __attribute__ ((__nothrow__));
extern long double __asinl(long double __x) __attribute__ ((__nothrow__));
extern long double atanl(long double __x) __attribute__ ((__nothrow__));
extern long double __atanl(long double __x) __attribute__ ((__nothrow__));
extern long double atan2l(long double __y, long double __x) __attribute__ ((__nothrow__));
extern long double __atan2l(long double __y, long double __x) __attribute__ ((__nothrow__));
extern long double cosl(long double __x) __attribute__ ((__nothrow__));
extern long double __cosl(long double __x) __attribute__ ((__nothrow__));
extern long double sinl(long double __x) __attribute__ ((__nothrow__));
extern long double __sinl(long double __x) __attribute__ ((__nothrow__));
extern long double tanl(long double __x) __attribute__ ((__nothrow__));
extern long double __tanl(long double __x) __attribute__ ((__nothrow__));
extern long double coshl(long double __x) __attribute__ ((__nothrow__));
extern long double __coshl(long double __x) __attribute__ ((__nothrow__));
extern long double sinhl(long double __x) __attribute__ ((__nothrow__));
extern long double __sinhl(long double __x) __attribute__ ((__nothrow__));
extern long double tanhl(long double __x) __attribute__ ((__nothrow__));
extern long double __tanhl(long double __x) __attribute__ ((__nothrow__));
extern long double acoshl(long double __x) __attribute__ ((__nothrow__));
extern long double __acoshl(long double __x) __attribute__ ((__nothrow__));
extern long double asinhl(long double __x) __attribute__ ((__nothrow__));
extern long double __asinhl(long double __x) __attribute__ ((__nothrow__));
extern long double atanhl(long double __x) __attribute__ ((__nothrow__));
extern long double __atanhl(long double __x) __attribute__ ((__nothrow__));
extern long double expl(long double __x) __attribute__ ((__nothrow__));
extern long double __expl(long double __x) __attribute__ ((__nothrow__));
extern long double frexpl(long double __x, int *__exponent) __attribute__ ((__nothrow__));
extern long double __frexpl(long double __x, int *__exponent) __attribute__ ((__nothrow__));
extern long double ldexpl(long double __x, int __exponent) __attribute__ ((__nothrow__));
extern long double __ldexpl(long double __x, int __exponent) __attribute__ ((__nothrow__));
extern long double logl(long double __x) __attribute__ ((__nothrow__));
extern long double __logl(long double __x) __attribute__ ((__nothrow__));
extern long double log10l(long double __x) __attribute__ ((__nothrow__));
extern long double __log10l(long double __x) __attribute__ ((__nothrow__));
extern long double modfl(long double __x, long double *__iptr) __attribute__ ((__nothrow__));
extern long double __modfl(long double __x, long double *__iptr) __attribute__ ((__nothrow__));
extern long double expm1l(long double __x) __attribute__ ((__nothrow__));
extern long double __expm1l(long double __x) __attribute__ ((__nothrow__));
extern long double log1pl(long double __x) __attribute__ ((__nothrow__));
extern long double __log1pl(long double __x) __attribute__ ((__nothrow__));
extern long double logbl(long double __x) __attribute__ ((__nothrow__));
extern long double __logbl(long double __x) __attribute__ ((__nothrow__));
extern long double exp2l(long double __x) __attribute__ ((__nothrow__));
extern long double __exp2l(long double __x) __attribute__ ((__nothrow__));
extern long double log2l(long double __x) __attribute__ ((__nothrow__));
extern long double __log2l(long double __x) __attribute__ ((__nothrow__));
extern long double powl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __powl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double sqrtl(long double __x) __attribute__ ((__nothrow__));
extern long double __sqrtl(long double __x) __attribute__ ((__nothrow__));
extern long double hypotl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __hypotl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double cbrtl(long double __x) __attribute__ ((__nothrow__));
extern long double __cbrtl(long double __x) __attribute__ ((__nothrow__));
extern long double ceill(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __ceill(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double fabsl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __fabsl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double floorl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __floorl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double fmodl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fmodl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern int __isinfl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __finitel(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isinfl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int finitel(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double dreml(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __dreml(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double significandl(long double __x) __attribute__ ((__nothrow__));
extern long double __significandl(long double __x) __attribute__ ((__nothrow__));
extern long double copysignl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __copysignl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double nanl(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __nanl(__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __isnanl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int isnanl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double j0l(long double) __attribute__ ((__nothrow__));
extern long double __j0l(long double) __attribute__ ((__nothrow__));
extern long double j1l(long double) __attribute__ ((__nothrow__));
extern long double __j1l(long double) __attribute__ ((__nothrow__));
extern long double jnl(int, long double) __attribute__ ((__nothrow__));
extern long double __jnl(int, long double) __attribute__ ((__nothrow__));
extern long double y0l(long double) __attribute__ ((__nothrow__));
extern long double __y0l(long double) __attribute__ ((__nothrow__));
extern long double y1l(long double) __attribute__ ((__nothrow__));
extern long double __y1l(long double) __attribute__ ((__nothrow__));
extern long double ynl(int, long double) __attribute__ ((__nothrow__));
extern long double __ynl(int, long double) __attribute__ ((__nothrow__));
extern long double erfl(long double) __attribute__ ((__nothrow__));
extern long double __erfl(long double) __attribute__ ((__nothrow__));
extern long double erfcl(long double) __attribute__ ((__nothrow__));
extern long double __erfcl(long double) __attribute__ ((__nothrow__));
extern long double lgammal(long double) __attribute__ ((__nothrow__));
extern long double __lgammal(long double) __attribute__ ((__nothrow__));
extern long double tgammal(long double) __attribute__ ((__nothrow__));
extern long double __tgammal(long double) __attribute__ ((__nothrow__));
extern long double gammal(long double) __attribute__ ((__nothrow__));
extern long double __gammal(long double) __attribute__ ((__nothrow__));
extern long double lgammal_r(long double, int *__signgamp) __attribute__ ((__nothrow__));
extern long double __lgammal_r(long double, int *__signgamp) __attribute__ ((__nothrow__));
extern long double rintl(long double __x) __attribute__ ((__nothrow__));
extern long double __rintl(long double __x) __attribute__ ((__nothrow__));
extern long double nextafterl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __nextafterl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double nexttowardl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __nexttowardl(long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double remainderl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __remainderl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double scalbnl(long double __x, int __n) __attribute__ ((__nothrow__));
extern long double __scalbnl(long double __x, int __n) __attribute__ ((__nothrow__));
extern int ilogbl(long double __x) __attribute__ ((__nothrow__));
extern int __ilogbl(long double __x) __attribute__ ((__nothrow__));
extern long double scalblnl(long double __x, long int __n) __attribute__ ((__nothrow__));
extern long double __scalblnl(long double __x, long int __n) __attribute__ ((__nothrow__));
extern long double nearbyintl(long double __x) __attribute__ ((__nothrow__));
extern long double __nearbyintl(long double __x) __attribute__ ((__nothrow__));
extern long double roundl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __roundl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double truncl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double __truncl(long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double remquol(long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__));
extern long double __remquol(long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__));
extern long int lrintl(long double __x) __attribute__ ((__nothrow__));
extern long int __lrintl(long double __x) __attribute__ ((__nothrow__));
extern long long int llrintl(long double __x) __attribute__ ((__nothrow__));
extern long long int __llrintl(long double __x) __attribute__ ((__nothrow__));
extern long int lroundl(long double __x) __attribute__ ((__nothrow__));
extern long int __lroundl(long double __x) __attribute__ ((__nothrow__));
extern long long int llroundl(long double __x) __attribute__ ((__nothrow__));
extern long long int __llroundl(long double __x) __attribute__ ((__nothrow__));
extern long double fdiml(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fdiml(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double fmaxl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fmaxl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double fminl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern long double __fminl(long double __x, long double __y) __attribute__ ((__nothrow__));
extern int __fpclassifyl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int __signbitl(long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long double fmal(long double __x, long double __y, long double __z) __attribute__ ((__nothrow__));
extern long double __fmal(long double __x, long double __y, long double __z) __attribute__ ((__nothrow__));
extern long double scalbl(long double __x, long double __n) __attribute__ ((__nothrow__));
extern long double __scalbl(long double __x, long double __n) __attribute__ ((__nothrow__));
extern int signgam;
enum { FP_NAN, FP_INFINITE, FP_ZERO, FP_SUBNORMAL, FP_NORMAL };
typedef enum { _IEEE_ = -1, _SVID_, _XOPEN_, _POSIX_, _ISOC_ } _LIB_VERSION_TYPE;
extern _LIB_VERSION_TYPE _LIB_VERSION;
struct exception {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
};
extern int matherr(struct exception *__exc);
typedef struct {
    int quot;
    int rem;
} div_t;
typedef struct {
    long int quot;
    long int rem;
} ldiv_t;
__extension__ typedef struct {
    long long int quot;
    long long int rem;
} lldiv_t;
extern size_t __ctype_get_mb_cur_max(void) __attribute__ ((__nothrow__));
extern double atof(__const char *__nptr) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern int atoi(__const char *__nptr) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern long int atol(__const char *__nptr) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
__extension__ extern long long int atoll(__const char *__nptr) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
extern double strtod(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern float strtof(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long double strtold(__const char *__restrict __nptr, char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int strtol(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern unsigned long int strtoul(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
__extension__ extern long long int strtoq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
__extension__ extern unsigned long long int strtouq(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
__extension__ extern long long int strtoll(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
__extension__ extern unsigned long long int strtoull(__const char *__restrict __nptr, char **__restrict __endptr, int __base) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern char *l64a(long int __n) __attribute__ ((__nothrow__));
extern long int a64l(__const char *__s) __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__(1)));
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef int int8_t __attribute__ ((__mode__(__QI__)));
typedef int int16_t __attribute__ ((__mode__(__HI__)));
typedef int int32_t __attribute__ ((__mode__(__SI__)));
typedef int int64_t __attribute__ ((__mode__(__DI__)));
typedef unsigned int u_int8_t __attribute__ ((__mode__(__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__(__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__(__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__(__DI__)));
typedef int register_t __attribute__ ((__mode__(__word__)));
typedef int __sig_atomic_t;
typedef struct {
    unsigned long int __val[(1024 / (8 * sizeof(unsigned long int)))];
} __sigset_t;
typedef __sigset_t sigset_t;
struct timespec {
    __time_t tv_sec;
    long int tv_nsec;
};
struct timeval {
    __time_t tv_sec;
    __suseconds_t tv_usec;
};
typedef __suseconds_t suseconds_t;
typedef long int __fd_mask;
typedef struct {
    __fd_mask __fds_bits[1024 / (8 * (int) sizeof(__fd_mask))];
}
fd_set;
typedef __fd_mask fd_mask;
extern int select(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, struct timeval *__restrict __timeout);
extern int pselect(int __nfds, fd_set * __restrict __readfds, fd_set * __restrict __writefds, fd_set * __restrict __exceptfds, const struct timespec *__restrict __timeout, const __sigset_t * __restrict __sigmask);
__extension__ extern unsigned int gnu_dev_major(unsigned long long int __dev) __attribute__ ((__nothrow__));
__extension__ extern unsigned int gnu_dev_minor(unsigned long long int __dev) __attribute__ ((__nothrow__));
__extension__ extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) __attribute__ ((__nothrow__));
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef unsigned long int pthread_t;
typedef union {
    char __size[36];
    long int __align;
} pthread_attr_t;
typedef struct __pthread_internal_slist {
    struct __pthread_internal_slist *__next;
} __pthread_slist_t;
typedef union {
    struct __pthread_mutex_s {
	int __lock;
	unsigned int __count;
	int __owner;
	int __kind;
	unsigned int __nusers;
	__extension__ union {
	    int __spins;
	    __pthread_slist_t __list;
	};
    } __data;
    char __size[24];
    long int __align;
} pthread_mutex_t;
typedef union {
    char __size[4];
    long int __align;
} pthread_mutexattr_t;
typedef union {
    struct {
	int __lock;
	unsigned int __futex;
	__extension__ unsigned long long int __total_seq;
	__extension__ unsigned long long int __wakeup_seq;
	__extension__ unsigned long long int __woken_seq;
	void *__mutex;
	unsigned int __nwaiters;
	unsigned int __broadcast_seq;
    } __data;
    char __size[48];
    __extension__ long long int __align;
} pthread_cond_t;
typedef union {
    char __size[4];
    long int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
typedef union {
    struct {
	int __lock;
	unsigned int __nr_readers;
	unsigned int __readers_wakeup;
	unsigned int __writer_wakeup;
	unsigned int __nr_readers_queued;
	unsigned int __nr_writers_queued;
	unsigned char __flags;
	unsigned char __shared;
	unsigned char __pad1;
	unsigned char __pad2;
	int __writer;
    } __data;
    char __size[32];
    long int __align;
} pthread_rwlock_t;
typedef union {
    char __size[8];
    long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union {
    char __size[20];
    long int __align;
} pthread_barrier_t;
typedef union {
    char __size[4];
    int __align;
} pthread_barrierattr_t;
extern long int random(void) __attribute__ ((__nothrow__));
extern void srandom(unsigned int __seed) __attribute__ ((__nothrow__));
extern char *initstate(unsigned int __seed, char *__statebuf, size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern char *setstate(char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
struct random_data {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
};
extern int random_r(struct random_data *__restrict __buf, int32_t * __restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int srandom_r(unsigned int __seed, struct random_data *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int initstate_r(unsigned int __seed, char *__restrict __statebuf, size_t __statelen, struct random_data *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern int setstate_r(char *__restrict __statebuf, struct random_data *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int rand(void) __attribute__ ((__nothrow__));
extern void srand(unsigned int __seed) __attribute__ ((__nothrow__));
extern int rand_r(unsigned int *__seed) __attribute__ ((__nothrow__));
extern double drand48(void) __attribute__ ((__nothrow__));
extern double erand48(unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int lrand48(void) __attribute__ ((__nothrow__));
extern long int nrand48(unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int mrand48(void) __attribute__ ((__nothrow__));
extern long int jrand48(unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void srand48(long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48(unsigned short int __seed16v[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void lcong48(unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
struct drand48_data {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};
extern int drand48_r(struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int erand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int lrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int nrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int mrand48_r(struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int jrand48_r(unsigned short int __xsubi[3], struct drand48_data *__restrict __buffer, long int *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int srand48_r(long int __seedval, struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int seed48_r(unsigned short int __seed16v[3], struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int lcong48_r(unsigned short int __param[7], struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern void *malloc(size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern void *calloc(size_t __nmemb, size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern void *realloc(void *__ptr, size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));
extern void free(void *__ptr) __attribute__ ((__nothrow__));
extern void cfree(void *__ptr) __attribute__ ((__nothrow__));
extern void *alloca(size_t __size) __attribute__ ((__nothrow__));
extern void *valloc(size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
extern int posix_memalign(void **__memptr, size_t __alignment, size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void abort(void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern int atexit(void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int on_exit(void (*__func) (int __status, void *__arg), void *__arg) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern void exit(int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void _Exit(int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern char *getenv(__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern char *__secure_getenv(__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int putenv(char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int setenv(__const char *__name, __const char *__value, int __replace) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int unsetenv(__const char *__name) __attribute__ ((__nothrow__));
extern int clearenv(void) __attribute__ ((__nothrow__));
extern char *mktemp(char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int mkstemp(char *__template) __attribute__ ((__nonnull__(1)));
extern int mkstemps(char *__template, int __suffixlen) __attribute__ ((__nonnull__(1)));
extern char *mkdtemp(char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int system(__const char *__command);
extern char *realpath(__const char *__restrict __name, char *__restrict __resolved) __attribute__ ((__nothrow__));
typedef int (*__compar_fn_t) (__const void *, __const void *);
extern void *bsearch(__const void *__key, __const void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar) __attribute__ ((__nonnull__(1, 2, 5)));
extern void qsort(void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar) __attribute__ ((__nonnull__(1, 4)));
extern int abs(int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern long int labs(long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
__extension__ extern long long int llabs(long long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern div_t div(int __numer, int __denom) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern ldiv_t ldiv(long int __numer, long int __denom) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
__extension__ extern lldiv_t lldiv(long long int __numer, long long int __denom) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern char *gcvt(double __value, int __ndigit, char *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3)));
extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4)));
extern char *qgcvt(long double __value, int __ndigit, char *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3)));
extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4, 5)));
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4, 5)));
extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4, 5)));
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(3, 4, 5)));
extern int mblen(__const char *__s, size_t __n) __attribute__ ((__nothrow__));
extern int mbtowc(wchar_t * __restrict __pwc, __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));
extern int wctomb(char *__s, wchar_t __wchar) __attribute__ ((__nothrow__));
extern size_t mbstowcs(wchar_t * __restrict __pwcs, __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));
extern size_t wcstombs(char *__restrict __s, __const wchar_t * __restrict __pwcs, size_t __n) __attribute__ ((__nothrow__));
extern int rpmatch(__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int posix_openpt(int __oflag);
extern int getloadavg(double __loadavg[], int __nelem) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
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
struct flock {
    short int l_type;
    short int l_whence;
    __off_t l_start;
    __off_t l_len;
    __pid_t l_pid;
};
extern int fcntl(int __fd, int __cmd, ...);
extern int open(__const char *__file, int __oflag, ...) __attribute__ ((__nonnull__(1)));
extern int openat(int __fd, __const char *__file, int __oflag, ...) __attribute__ ((__nonnull__(2)));
extern int openat64(int __fd, __const char *__file, int __oflag, ...) __attribute__ ((__nonnull__(2)));
extern int creat(__const char *__file, __mode_t __mode) __attribute__ ((__nonnull__(1)));
extern int lockf(int __fd, int __cmd, __off_t __len);
extern int posix_fadvise(int __fd, __off_t __offset, __off_t __len, int __advise) __attribute__ ((__nothrow__));
extern int posix_fallocate(int __fd, __off_t __offset, __off_t __len);
extern int *__errno_location(void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
typedef float FLOAT;
typedef double FLOAT8;
typedef struct {
    unsigned int steps;
    unsigned int bits;
    unsigned int group;
    unsigned int quant;
} sb_alloc, *alloc_ptr;
typedef sb_alloc al_table[32][16];
enum byte_order { order_unknown, order_bigEndian, order_littleEndian };
extern enum byte_order NativeByteOrder;
typedef struct bit_stream_struc {
    unsigned char *pbtOutBuf;
    int nOutBufPos;
    FILE *pt;
    unsigned char *buf;
    int buf_size;
    unsigned long totbit;
    int buf_byte_idx;
    int buf_bit_idx;
} Bit_stream_struc;
typedef FLOAT8 D576[576];
typedef int I576[576];
typedef FLOAT8 D192_3[192][3];
typedef int I192_3[192][3];
typedef struct {
    FLOAT8 l[21 + 1];
    FLOAT8 s[12 + 1][3];
} III_psy_xmin;
typedef struct {
    III_psy_xmin thm;
    III_psy_xmin en;
} III_psy_ratio;
typedef struct {
    unsigned part2_3_length;
    unsigned big_values;
    unsigned count1;
    unsigned global_gain;
    unsigned scalefac_compress;
    unsigned window_switching_flag;
    unsigned block_type;
    unsigned mixed_block_flag;
    unsigned table_select[3];
    int subblock_gain[3];
    unsigned region0_count;
    unsigned region1_count;
    unsigned preflag;
    unsigned scalefac_scale;
    unsigned count1table_select;
    unsigned part2_length;
    unsigned sfb_lmax;
    unsigned sfb_smax;
    unsigned count1bits;
    unsigned *sfb_partition_table;
    unsigned slen[4];
} gr_info;
typedef struct {
    int main_data_begin;
    unsigned private_bits;
    int resvDrain;
    unsigned scfsi[2][4];
    struct {
	struct gr_info_ss {
	    gr_info tt;
	} ch[2];
    } gr[2];
} III_side_info_t;
typedef struct {
    int l[22];
    int s[13][3];
} III_scalefac_t;
extern int bitrate_table[2][15];
extern void display_bitrates(FILE * out_fh);
extern int BitrateIndex(int, int, int);
extern int SmpFrqIndex(long, int *);
extern void *mem_alloc(unsigned long, char *);
extern int copy_buffer(char *buffer, int buffer_size, Bit_stream_struc * bs);
extern void init_bit_stream_w(Bit_stream_struc *);
extern void alloc_buffer(Bit_stream_struc *, int);
extern void desalloc_buffer(Bit_stream_struc *);
extern void putbits(Bit_stream_struc *, unsigned int, int);
extern enum byte_order DetermineByteOrder(void);
extern void SwapBytesInWords(short *loc, int words);
extern void getframebits(lame_global_flags * gfp, int *bitsPerFrame, int *mean_bits);
void timestatus(int samp_rate, long frameNum, long totalframes, int framesize);
void L3psycho_anal(lame_global_flags * gfp, short int *buffer[2], int gr, FLOAT8 * ms_ratio, FLOAT8 * ms_ratio_next, FLOAT8 * ms_ener_ratio, III_psy_ratio ratio[2][2], III_psy_ratio MS_ratio[2][2], FLOAT8 pe[2], FLOAT8 pe_MS[2], int blocktype_d[2]);
void mdct_sub48(lame_global_flags * gfp, short *w0, short *w1, FLOAT8 mdct_freq[2][2][576], III_side_info_t * l3_side);
extern int cont_flag;
extern int pretab[];
void iteration_loop(lame_global_flags * gfp, FLOAT8 pe[2][2], FLOAT8 ms_ratio[2], FLOAT8 xr_org[2][2][576], III_psy_ratio ratio[2][2], III_side_info_t * l3_side, int l3_enc[2][2][576], III_scalefac_t scalefac[2][2]);
void VBR_iteration_loop(lame_global_flags * gfp, FLOAT8 pe[2][2], FLOAT8 ms_ratio[2], FLOAT8 xr_org[2][2][576], III_psy_ratio ratio[2][2], III_side_info_t * l3_side, int l3_enc[2][2][576], III_scalefac_t scalefac[2][2]);
extern int bit_buffer[50000];
extern FLOAT masking_lower;
extern int convert_mdct, convert_psy, reduce_sidechannel;
extern unsigned nr_of_sfb_block[6][3][4];
extern int pretab[21];
struct scalefac_struct {
    int l[1 + 22];
    int s[1 + 13];
};
extern struct scalefac_struct scalefac_band;
extern struct scalefac_struct sfBandIndex[6];
extern FLOAT8 pow43[(8206 + 2)];
extern FLOAT8 pow20[256];
extern FLOAT8 ipow20[256];
FLOAT8 ATHformula(lame_global_flags * gfp, FLOAT8 f);
void compute_ath(lame_global_flags * gfp, FLOAT8 ATH_l[21], FLOAT8 ATH_s[21]);
void ms_convert(FLOAT8 xr[2][576], FLOAT8 xr_org[2][576]);
void on_pe(lame_global_flags * gfp, FLOAT8 pe[2][2], III_side_info_t * l3_side, int targ_bits[2], int mean_bits, int gr);
void reduce_side(int targ_bits[2], FLOAT8 ms_ener_ratio, int mean_bits);
void outer_loop(lame_global_flags * gfp, FLOAT8 xr[576], int bits, FLOAT8 noise[4], III_psy_xmin * l3_xmin, int l3_enc[576], III_scalefac_t * scalefac, gr_info *, FLOAT8 xfsf[4][21], int ch);
void iteration_init(lame_global_flags * gfp, III_side_info_t * l3_side, int l3_enc[2][2][576]);
int inner_loop(lame_global_flags * gfp, FLOAT8 xrpow[576], int l3_enc[576], int max_bits, gr_info * cod_info);
int calc_xmin(lame_global_flags * gfp, FLOAT8 xr[576], III_psy_ratio * ratio, gr_info * cod_info, III_psy_xmin * l3_xmin);
int scale_bitcount(III_scalefac_t * scalefac, gr_info * cod_info);
int scale_bitcount_lsf(III_scalefac_t * scalefac, gr_info * cod_info);
int calc_noise1(FLOAT8 xr[576], int ix[576], gr_info * cod_info, FLOAT8 xfsf[4][21], FLOAT8 distort[4][21], III_psy_xmin * l3_xmin, III_scalefac_t *, FLOAT8 * noise, FLOAT8 * tot_noise, FLOAT8 * max_noise);
int loop_break(III_scalefac_t * scalefac, gr_info * cod_info);
void amp_scalefac_bands(FLOAT8 xrpow[576], gr_info * cod_info, III_scalefac_t * scalefac, FLOAT8 distort[4][21]);
void quantize_xrpow(FLOAT8 xr[576], int ix[576], gr_info * cod_info);
void quantize_xrpow_ISO(FLOAT8 xr[576], int ix[576], gr_info * cod_info);
int new_choose_table(int ix[576], unsigned int begin, unsigned int end, int *s);
int bin_search_StepSize2(lame_global_flags * gfp, int desired_rate, int start, int ix[576], FLOAT8 xrspow[576], gr_info * cod_info);
int count_bits(lame_global_flags * gfp, int *ix, FLOAT8 xr[576], gr_info * cod_info);
int quant_compare(int type, int best_over, FLOAT8 best_tot_noise, FLOAT8 best_over_noise, FLOAT8 best_max_over, int over, FLOAT8 tot_noise, FLOAT8 over_noise, FLOAT8 max_noise);
int VBR_compare(int best_over, FLOAT8 best_tot_noise, FLOAT8 best_over_noise, FLOAT8 best_max_over, int over, FLOAT8 tot_noise, FLOAT8 over_noise, FLOAT8 max_noise);
void best_huffman_divide(int gr, int ch, gr_info * cod_info, int *ix);
void best_scalefac_store(lame_global_flags * gfp, int gr, int ch, int l3_enc[2][2][576], III_side_info_t * l3_side, III_scalefac_t scalefac[2][2]);
int init_outer_loop(lame_global_flags * gfp, FLOAT8 xr[576], gr_info * cod_info);
void III_format_bitstream(lame_global_flags * gfp, int bitsPerFrame, int l3_enc[2][2][576], III_side_info_t * l3_side, III_scalefac_t scalefac[2][2], Bit_stream_struc * in_bs);
int HuffmanCode(int table_select, int x, int y, unsigned *code, unsigned int *extword, int *codebits, int *extbits);
void III_FlushBitstream(void);
int abs_and_sign(int *x);
void putMyBits(u_int value, u_int length);
typedef struct {
    u_int value;
    u_short length;
} BF_BitstreamElement;
typedef struct {
    u_int nrEntries;
    BF_BitstreamElement *element;
} BF_BitstreamPart;
typedef struct BF_FrameData {
    int frameLength;
    int nGranules;
    int nChannels;
    BF_BitstreamPart *header;
    BF_BitstreamPart *frameSI;
    BF_BitstreamPart *channelSI[2];
    BF_BitstreamPart *spectrumSI[2][2];
    BF_BitstreamPart *scaleFactors[2][2];
    BF_BitstreamPart *codedData[2][2];
    BF_BitstreamPart *userSpectrum[2][2];
    BF_BitstreamPart *userFrameData;
} BF_FrameData;
typedef struct BF_FrameResults {
    int SILength;
    int mainDataLength;
    int nextBackPtr;
} BF_FrameResults;
void InitFormatBitStream(void);
int BF_PartLength(BF_BitstreamPart * part);
void BF_BitstreamFrame(BF_FrameData * frameInfo, BF_FrameResults * results);
void BF_FlushBitstream(BF_FrameData * frameInfo, BF_FrameResults * results);
typedef struct BF_PartHolder {
    int max_elements;
    BF_BitstreamPart *part;
} BF_PartHolder;
BF_PartHolder *BF_newPartHolder(int max_elements);
BF_PartHolder *BF_resizePartHolder(BF_PartHolder * oldPH, int max_elements);
BF_PartHolder *BF_addElement(BF_PartHolder * thePH, BF_BitstreamElement * theElement);
BF_PartHolder *BF_addEntry(BF_PartHolder * thePH, u_int value, u_int length);
BF_PartHolder *BF_NewHolderFromBitstreamPart(BF_BitstreamPart * thePart);
BF_PartHolder *BF_LoadHolderFromBitstreamPart(BF_PartHolder * theHolder, BF_BitstreamPart * thePart);
BF_PartHolder *BF_freePartHolder(BF_PartHolder * thePH);
void lame_print_version(FILE *);
char *get_lame_version(void);
char *get_psy_version(void);
char *get_mp3x_version(void);
typedef struct {
    int h_id;
    int samprate;
    int flags;
    int frames;
    int bytes;
    int vbr_scale;
    u_char toc[100];
} VBRTAGDATA;
int CheckVbrTag(unsigned char *buf);
int GetVbrTag(VBRTAGDATA * pTagData, unsigned char *buf);
int SeekPoint(unsigned char TOC[100], int file_bytes, float percent);
int InitVbrTag(Bit_stream_struc * pBs, int nVersion, int nMode, int SampIndex);
int PutVbrTag(char *lpszFileName, int nVbrScale, int nVersion);
void AddVbrFrame(int nStreamPos);
typedef struct {
    int used;
    int valid;
    char title[31];
    char artist[31];
    char album[31];
    char year[5];
    char comment[31];
    char tagtext[128];
    char genre[1];
    unsigned char track;
} ID3TAGDATA;
void id3_inittag(ID3TAGDATA * tag);
void id3_buildtag(ID3TAGDATA * tag);
int id3_writetag(char *filename, ID3TAGDATA * tag);
extern ID3TAGDATA id3tag;
extern int genre_last;
extern char *genre_list[];
extern FLOAT8 psy_data[];
struct huffcodetab {
    unsigned int xlen;
    unsigned int linmax;
    unsigned long int *table;
    unsigned char *hlen;
};
extern struct huffcodetab ht[34];
void CloseSndFile(lame_global_flags * gfp);
FILE *OpenSndFile(lame_global_flags * gfp, const char *lpszFileName, int default_samp, int default_chan);
unsigned long GetSndSamples(void);
int GetSndSampleRate(void);
int GetSndChannels(void);
int GetSndBitrate(void);
int get_audio(lame_global_flags * gfp, short buffer[2][1152], int stereo);
typedef float Single;
typedef double defdouble;
typedef double Double;
extern defdouble ConvertFromIeeeSingle(char *bytes);
extern void ConvertToIeeeSingle(defdouble num, char *bytes);
extern defdouble ConvertFromIeeeDouble(char *bytes);
extern void ConvertToIeeeDouble(defdouble num, char *bytes);
extern defdouble ConvertFromIeeeExtended(char *bytes);
extern void ConvertToIeeeExtended(defdouble num, char *bytes);
extern int ReadByte(FILE * fp);
extern int Read16BitsLowHigh(FILE * fp);
extern int Read16BitsHighLow(FILE * fp);
extern void Write8Bits(FILE * fp, int i);
extern void Write16BitsLowHigh(FILE * fp, int i);
extern void Write16BitsHighLow(FILE * fp, int i);
extern int Read24BitsHighLow(FILE * fp);
extern int Read32Bits(FILE * fp);
extern int Read32BitsHighLow(FILE * fp);
extern void Write32Bits(FILE * fp, int i);
extern void Write32BitsLowHigh(FILE * fp, int i);
extern void Write32BitsHighLow(FILE * fp, int i);
extern void ReadBytes(FILE * fp, char *p, int n);
extern void ReadBytesSwapped(FILE * fp, char *p, int n);
extern void WriteBytes(FILE * fp, char *p, int n);
extern void WriteBytesSwapped(FILE * fp, char *p, int n);
extern defdouble ReadIeeeFloatHighLow(FILE * fp);
extern defdouble ReadIeeeFloatLowHigh(FILE * fp);
extern defdouble ReadIeeeDoubleHighLow(FILE * fp);
extern defdouble ReadIeeeDoubleLowHigh(FILE * fp);
extern defdouble ReadIeeeExtendedHighLow(FILE * fp);
extern defdouble ReadIeeeExtendedLowHigh(FILE * fp);
extern void WriteIeeeFloatLowHigh(FILE * fp, defdouble num);
extern void WriteIeeeFloatHighLow(FILE * fp, defdouble num);
extern void WriteIeeeDoubleLowHigh(FILE * fp, defdouble num);
extern void WriteIeeeDoubleHighLow(FILE * fp, defdouble num);
extern void WriteIeeeExtendedLowHigh(FILE * fp, defdouble num);
extern void WriteIeeeExtendedHighLow(FILE * fp, defdouble num);
typedef struct blockAlign_struct {
    unsigned long offset;
    unsigned long blockSize;
} blockAlign;
typedef struct IFF_AIFF_struct {
    short numChannels;
    unsigned long numSampleFrames;
    short sampleSize;
    FLOAT sampleRate;
    unsigned long sampleType;
    blockAlign blkAlgn;
} IFF_AIFF;
extern int aiff_read_headers(FILE *, IFF_AIFF *);
extern int aiff_seek_to_sound_data(FILE *);
extern int aiff_write_headers(FILE *, IFF_AIFF *);
extern int parse_wavheader(void);
extern int parse_aiff(const char fn[]);
extern void aiff_check(const char *, IFF_AIFF *, int *);
static Bit_stream_struc bs;
static III_side_info_t l3_side;
static short int mfbuf[2][(1152 + 1152 + 800 - 48)];
static int mf_size;
static int mf_samples_to_encode;
void lame_init_params(lame_global_flags * gfp)
{
    int i;
    FLOAT compression_ratio;
    memset(&bs, 0, sizeof(Bit_stream_struc));
    memset(&l3_side, 0x00, sizeof(III_side_info_t));
    gfp->frameNum = 0;
    InitFormatBitStream();
    if (gfp->num_channels == 1) {
	gfp->mode = 3;
    }
    gfp->stereo = 2;
    if (gfp->mode == 3)
	gfp->stereo = 1;
    if (gfp->out_samplerate == 0) {
	gfp->out_samplerate = gfp->in_samplerate;
	if (gfp->out_samplerate >= 48000)
	    gfp->out_samplerate = 48000;
	else if (gfp->out_samplerate >= 44100)
	    gfp->out_samplerate = 44100;
	else if (gfp->out_samplerate >= 32000)
	    gfp->out_samplerate = 32000;
	else if (gfp->out_samplerate >= 24000)
	    gfp->out_samplerate = 24000;
	else if (gfp->out_samplerate >= 22050)
	    gfp->out_samplerate = 22050;
	else
	    gfp->out_samplerate = 16000;
	if (gfp->brate > 0) {
	    compression_ratio = gfp->out_samplerate * 16 * gfp->stereo / (1000.0 * gfp->brate);
	    if (!gfp->VBR && compression_ratio > 13) {
		gfp->out_samplerate = (10 * 1000.0 * gfp->brate) / (16 * gfp->stereo);
		if (gfp->out_samplerate <= 16000)
		    gfp->out_samplerate = 16000;
		else if (gfp->out_samplerate <= 22050)
		    gfp->out_samplerate = 22050;
		else if (gfp->out_samplerate <= 24000)
		    gfp->out_samplerate = 24000;
		else if (gfp->out_samplerate <= 32000)
		    gfp->out_samplerate = 32000;
		else if (gfp->out_samplerate <= 44100)
		    gfp->out_samplerate = 44100;
		else
		    gfp->out_samplerate = 48000;
	    }
	}
    }
    gfp->mode_gr = (gfp->out_samplerate <= 24000) ? 1 : 2;
    gfp->encoder_delay = 800;
    gfp->framesize = gfp->mode_gr * 576;
    if (gfp->brate == 0) {
	gfp->brate = 128;
	if (gfp->mode_gr == 1)
	    gfp->brate = 64;
    }
    gfp->resample_ratio = 1;
    if (gfp->out_samplerate != gfp->in_samplerate)
	gfp->resample_ratio = (FLOAT) gfp->in_samplerate / (FLOAT) gfp->out_samplerate;
    gfp->totalframes = 0;
    gfp->totalframes = 2 + gfp->num_samples / (gfp->resample_ratio * gfp->framesize);
    if (gfp->brate >= 320)
	gfp->VBR = 0;
    compression_ratio = gfp->out_samplerate * 16 * gfp->stereo / (1000.0 * gfp->brate);
    if (gfp->VBR && compression_ratio > 11) {
	compression_ratio = 4.4 + gfp->VBR_q;
    }
    if ((!gfp->mode_fixed) && (gfp->mode != 3)) {
	if (compression_ratio < 9) {
	    gfp->mode = 0;
	}
    }
    if (gfp->lowpassfreq == 0) {
	int band = 1 + floor(.5 + 14 - 18 * log(compression_ratio / 16.0));
	if (band < 31) {
	    gfp->lowpass1 = band / 31.0;
	    gfp->lowpass2 = band / 31.0;
	}
    }
    if (gfp->highpassfreq > 0) {
	gfp->highpass1 = 2.0 * gfp->highpassfreq / gfp->out_samplerate;
	if (gfp->highpasswidth >= 0) {
	    gfp->highpass2 = 2.0 * (gfp->highpassfreq + gfp->highpasswidth) / gfp->out_samplerate;
	} else {
	    gfp->highpass2 = 1.00 * 2.0 * gfp->highpassfreq / gfp->out_samplerate;
	}
	gfp->highpass1 = ((1) < (gfp->highpass1) ? (1) : (gfp->highpass1));
	gfp->highpass2 = ((1) < (gfp->highpass2) ? (1) : (gfp->highpass2));
    }
    if (gfp->lowpassfreq > 0) {
	gfp->lowpass2 = 2.0 * gfp->lowpassfreq / gfp->out_samplerate;
	if (gfp->lowpasswidth >= 0) {
	    gfp->lowpass1 = 2.0 * (gfp->lowpassfreq - gfp->lowpasswidth) / gfp->out_samplerate;
	    if (gfp->lowpass1 < 0) {
		gfp->lowpass1 = 0;
	    }
	} else {
	    gfp->lowpass1 = 1.00 * 2.0 * gfp->lowpassfreq / gfp->out_samplerate;
	}
	gfp->lowpass1 = ((1) < (gfp->lowpass1) ? (1) : (gfp->lowpass1));
	gfp->lowpass2 = ((1) < (gfp->lowpass2) ? (1) : (gfp->lowpass2));
    }
    if (gfp->filter_type == 0) {
	int band, maxband, minband;
	FLOAT8 amp, freq;
	if (gfp->lowpass1 > 0) {
	    minband = 999;
	    maxband = -1;
	    for (band = 0; band <= 31; ++band) {
		freq = band / 31.0;
		amp = 1;
		if (freq >= gfp->lowpass2) {
		    gfp->lowpass_band = ((gfp->lowpass_band) < (band) ? (gfp->lowpass_band) : (band));
		    amp = 0;
		}
		if (gfp->lowpass1 < freq && freq < gfp->lowpass2) {
		    minband = ((minband) < (band) ? (minband) : (band));
		    maxband = ((maxband) > (band) ? (maxband) : (band));
		    amp = cos((3.14159265358979323846 / 2) * (gfp->lowpass1 - freq) / (gfp->lowpass2 - gfp->lowpass1));
		}
	    }
	    if (minband == 999)
		gfp->lowpass1 = (gfp->lowpass_band - .75) / 31.0;
	    else
		gfp->lowpass1 = (minband - .75) / 31.0;
	    gfp->lowpass2 = gfp->lowpass_band / 31.0;
	}
	if (gfp->highpass2 > 0)
	    if (gfp->highpass2 < .9 * (.75 / 31.0)) {
		gfp->highpass1 = 0;
		gfp->highpass2 = 0;
		fprintf(stderr, "Warning: highpass filter disabled.  highpass frequency to small\n");
	    }
	if (gfp->highpass2 > 0) {
	    minband = 999;
	    maxband = -1;
	    for (band = 0; band <= 31; ++band) {
		freq = band / 31.0;
		amp = 1;
		if (freq <= gfp->highpass1) {
		    gfp->highpass_band = ((gfp->highpass_band) > (band) ? (gfp->highpass_band) : (band));
		    amp = 0;
		}
		if (gfp->highpass1 < freq && freq < gfp->highpass2) {
		    minband = ((minband) < (band) ? (minband) : (band));
		    maxband = ((maxband) > (band) ? (maxband) : (band));
		    amp = cos((3.14159265358979323846 / 2) * (gfp->highpass2 - freq) / (gfp->highpass2 - gfp->highpass1));
		}
	    }
	    gfp->highpass1 = gfp->highpass_band / 31.0;
	    if (maxband == -1)
		gfp->highpass2 = (gfp->highpass_band + .75) / 31.0;
	    else
		gfp->highpass2 = (maxband + .75) / 31.0;
	}
    }
    if (gfp->filter_type == 1) {
    }
    gfp->mode_ext = 0;
    gfp->stereo = (gfp->mode == 3) ? 1 : 2;
    gfp->samplerate_index = SmpFrqIndex((long) gfp->out_samplerate, &gfp->version);
    if (gfp->samplerate_index < 0) {
	display_bitrates(stderr);
	exit(1);
    }
    if ((gfp->bitrate_index = BitrateIndex(gfp->brate, gfp->version, gfp->out_samplerate)) < 0) {
	display_bitrates(stderr);
	exit(1);
    }
    if (gfp->VBR) {
	if (0 == gfp->VBR_max_bitrate_kbps) {
	    gfp->VBR_max_bitrate = 13;
	    if (gfp->VBR_min_bitrate_kbps >= 256)
		gfp->VBR_max_bitrate = 14;
	    if (gfp->VBR_q == 0)
		gfp->VBR_max_bitrate = 14;
	    if (gfp->VBR_q >= 4)
		gfp->VBR_max_bitrate = 12;
	    if (gfp->VBR_q >= 8)
		gfp->VBR_max_bitrate = 9;
	} else {
	    if ((gfp->VBR_max_bitrate = BitrateIndex(gfp->VBR_max_bitrate_kbps, gfp->version, gfp->out_samplerate)) < 0) {
		display_bitrates(stderr);
		exit(1);
	    }
	}
	if (0 == gfp->VBR_min_bitrate_kbps) {
	    gfp->VBR_min_bitrate = 1;
	} else {
	    if ((gfp->VBR_min_bitrate = BitrateIndex(gfp->VBR_min_bitrate_kbps, gfp->version, gfp->out_samplerate)) < 0) {
		display_bitrates(stderr);
		exit(1);
	    }
	}
    }
    if (gfp->VBR)
	gfp->quality = ((gfp->quality) < (2) ? (gfp->quality) : (2));
    if (gfp->mode == 3)
	gfp->force_ms = 0;
    if (gfp->VBR == 0)
	gfp->bWriteVbrTag = 0;
    if (gfp->outPath != ((void *) 0) && gfp->outPath[0] == '-') {
	gfp->bWriteVbrTag = 0;
    }
    if (gfp->outPath == ((void *) 0) || gfp->outPath[0] == '-') {
	id3tag.used = 0;
    }
    if (gfp->gtkflag) {
	gfp->bWriteVbrTag = 0;
    }
    init_bit_stream_w(&bs);
    if (gfp->quality == 9) {
	gfp->filter_type = 0;
	gfp->psymodel = 0;
	gfp->quantization = 0;
	gfp->noise_shaping = 0;
	gfp->noise_shaping_stop = 0;
	gfp->use_best_huffman = 0;
    }
    if (gfp->quality == 8)
	gfp->quality = 7;
    if (gfp->quality == 7) {
	gfp->filter_type = 0;
	gfp->psymodel = 1;
	gfp->quantization = 0;
	gfp->noise_shaping = 0;
	gfp->noise_shaping_stop = 0;
	gfp->use_best_huffman = 0;
    }
    if (gfp->quality == 6)
	gfp->quality = 5;
    if (gfp->quality == 5) {
	gfp->filter_type = 0;
	gfp->psymodel = 1;
	gfp->quantization = 0;
	gfp->noise_shaping = 1;
	gfp->noise_shaping_stop = 0;
	gfp->use_best_huffman = 0;
    }
    if (gfp->quality == 4)
	gfp->quality = 2;
    if (gfp->quality == 3)
	gfp->quality = 2;
    if (gfp->quality == 2) {
	gfp->filter_type = 0;
	gfp->psymodel = 1;
	gfp->quantization = 1;
	gfp->noise_shaping = 1;
	gfp->noise_shaping_stop = 0;
	gfp->use_best_huffman = 1;
    }
    if (gfp->quality == 1) {
	gfp->filter_type = 0;
	gfp->psymodel = 1;
	gfp->quantization = 1;
	gfp->noise_shaping = 1;
	gfp->noise_shaping_stop = 1;
	gfp->use_best_huffman = 1;
    }
    if (gfp->quality == 0) {
	gfp->filter_type = 1;
	gfp->psymodel = 1;
	gfp->quantization = 1;
	gfp->noise_shaping = 3;
	gfp->noise_shaping_stop = 2;
	gfp->use_best_huffman = 2;
	exit(-99);
    }
    for (i = 0; i < 22 + 1; i++) {
	scalefac_band.l[i] = sfBandIndex[gfp->samplerate_index + (gfp->version * 3)].l[i];
    }
    for (i = 0; i < 13 + 1; i++) {
	scalefac_band.s[i] = sfBandIndex[gfp->samplerate_index + (gfp->version * 3)].s[i];
    }
    if (gfp->bWriteVbrTag) {
	InitVbrTag(&bs, 1 - gfp->version, gfp->mode, gfp->samplerate_index);
    }
    return;
}

void lame_print_config(lame_global_flags * gfp)
{
    static const char *mode_names[4] = { "stereo", "j-stereo", "dual-ch", "single-ch" };
    FLOAT out_samplerate = gfp->out_samplerate / 1000.0;
    FLOAT in_samplerate = gfp->resample_ratio * out_samplerate;
    FLOAT compression = (FLOAT) (gfp->stereo * 16 * out_samplerate) / (FLOAT) (gfp->brate);
    lame_print_version(stderr);
    if (gfp->num_channels == 2 && gfp->stereo == 1) {
	fprintf(stderr, "Autoconverting from stereo to mono. Setting encoding to mono mode.\n");
    }
    if (gfp->resample_ratio != 1) {
	fprintf(stderr, "Resampling:  input=%ikHz  output=%ikHz\n", (int) in_samplerate, (int) out_samplerate);
    }
    if (gfp->highpass2 > 0.0)
	fprintf(stderr, "Using polyphase highpass filter, transition band: %.0f Hz -  %.0f Hz\n", gfp->highpass1 * out_samplerate * 500, gfp->highpass2 * out_samplerate * 500);
    if (gfp->lowpass1 > 0.0)
	fprintf(stderr, "Using polyphase lowpass filter,  transition band:  %.0f Hz - %.0f Hz\n", gfp->lowpass1 * out_samplerate * 500, gfp->lowpass2 * out_samplerate * 500);
    if (gfp->gtkflag) {
	fprintf(stderr, "Analyzing %s \n", gfp->inPath);
    } else {
	fprintf(stderr, "Encoding %s to %s\n", (strcmp(gfp->inPath, "-") ? gfp->inPath : "stdin"), (strcmp(gfp->outPath, "-") ? gfp->outPath : "stdout"));
	if (gfp->VBR)
	    fprintf(stderr, "Encoding as %.1fkHz VBR(q=%i) %s MPEG%i LayerIII  qval=%i\n", gfp->out_samplerate / 1000.0, gfp->VBR_q, mode_names[gfp->mode], 2 - gfp->version, gfp->quality);
	else
	    fprintf(stderr, "Encoding as %.1f kHz %d kbps %s MPEG%i LayerIII (%4.1fx)  qval=%i\n", gfp->out_samplerate / 1000.0, gfp->brate, mode_names[gfp->mode], 2 - gfp->version, compression, gfp->quality);
    }
    fflush(stderr);
}
//complexity is O(n^2) inferred by loopus
int lame_encode_frame(lame_global_flags * gfp, short int inbuf_l[], short int inbuf_r[], int mf_size, char *mp3buf, int mp3buf_size)
{
    static unsigned long frameBits;
    static unsigned long bitsPerSlot;
    static FLOAT8 frac_SpF;
    static FLOAT8 slot_lag;
    static unsigned long sentBits = 0;
    FLOAT8 xr[2][2][576];
    int l3_enc[2][2][576];
    int mp3count;
    III_psy_ratio masking_ratio[2][2];
    III_psy_ratio masking_MS_ratio[2][2];
    III_psy_ratio(*masking)[2][2];
    III_scalefac_t scalefac[2][2];
    short int *inbuf[2];
    typedef FLOAT8 pedata[2][2];
    pedata pe, pe_MS;
    pedata *pe_use;
    int ch, gr, mean_bits;
    int bitsPerFrame;
    int check_ms_stereo;
    static FLOAT8 ms_ratio[2] = { 0, 0 };
    FLOAT8 ms_ratio_next = 0;
    FLOAT8 ms_ratio_prev = 0;
    static FLOAT8 ms_ener_ratio[2] = { 0, 0 };
    memset((char *) masking_ratio, 0, sizeof(masking_ratio));
    memset((char *) masking_MS_ratio, 0, sizeof(masking_MS_ratio));
    memset((char *) scalefac, 0, sizeof(scalefac));
    inbuf[0] = inbuf_l;
    inbuf[1] = inbuf_r;
    gfp->mode_ext = 0;
    if (gfp->frameNum == 0) {
	FLOAT8 avg_slots_per_frame;
	FLOAT8 sampfreq = gfp->out_samplerate / 1000.0;
	int bit_rate = gfp->brate;
	sentBits = 0;
	bitsPerSlot = 8;
	avg_slots_per_frame = (bit_rate * gfp->framesize) / (sampfreq * bitsPerSlot);
	frac_SpF = avg_slots_per_frame - floor(avg_slots_per_frame + 1e-9);
	if (fabs(frac_SpF) < 1e-9)
	    frac_SpF = 0;
	slot_lag = -frac_SpF;
	gfp->padding = 1;
	if (frac_SpF == 0)
	    gfp->padding = 0;
	((576 >= (224 + 48)) ? (void) (0) : __assert_fail("576>=(224+48)", "lame.c", 659, __PRETTY_FUNCTION__));
	((mf_size >= (1024 + gfp->framesize - (224 + 48))) ? (void) (0) : __assert_fail("mf_size>=(1024+gfp->framesize-(224+48))", "lame.c", 661, __PRETTY_FUNCTION__));
    }
    switch (gfp->padding_type) {
    case 0:
	gfp->padding = 0;
	break;
    case 1:
	gfp->padding = 1;
	break;
    case 2:
    default:
	if (gfp->VBR) {
	    gfp->padding = 0;
	} else {
	    if (gfp->disable_reservoir) {
		gfp->padding = 0;
	    } else {
		if (frac_SpF != 0) {
		    if (slot_lag > (frac_SpF - 1.0)) {
			slot_lag -= frac_SpF;
			gfp->padding = 0;
		    } else {
			gfp->padding = 1;
			slot_lag += (1 - frac_SpF);
		    }
		}
	    }
	}
    }
    if (!gfp->gtkflag && !gfp->silent) {
	int mod = gfp->version == 0 ? 200 : 50;
	if (gfp->frameNum % mod == 0) {
	    timestatus(gfp->out_samplerate, gfp->frameNum, gfp->totalframes, gfp->framesize);
	}
    }
    if (gfp->psymodel) {
	short int *bufp[2];
	int blocktype[2];
	ms_ratio_prev = ms_ratio[gfp->mode_gr - 1];
	for (gr = 0; gr < gfp->mode_gr; gr++) {
	    for (ch = 0; ch < gfp->stereo; ch++)
		bufp[ch] = &inbuf[ch][576 + gr * 576 - (224 + 48)];
	    L3psycho_anal(gfp, bufp, gr, &ms_ratio[gr], &ms_ratio_next, &ms_ener_ratio[gr], masking_ratio, masking_MS_ratio, pe[gr], pe_MS[gr], blocktype);
	    for (ch = 0; ch < gfp->stereo; ch++)
		l3_side.gr[gr].ch[ch].tt.block_type = blocktype[ch];
	}
    } else {
	for (gr = 0; gr < gfp->mode_gr; gr++)
	    for (ch = 0; ch < gfp->stereo; ch++) {
		l3_side.gr[gr].ch[ch].tt.block_type = 0;
		pe[gr][ch] = 700;
	    }
    }
    for (gr = 0; gr < gfp->mode_gr; gr++) {
	for (ch = 0; ch < gfp->stereo; ch++) {
	    gr_info *cod_info = &l3_side.gr[gr].ch[ch].tt;
	    cod_info->mixed_block_flag = 0;
	    if (cod_info->block_type == 0)
		cod_info->window_switching_flag = 0;
	    else
		cod_info->window_switching_flag = 1;
	}
    }
    mdct_sub48(gfp, inbuf[0], inbuf[1], xr, &l3_side);
    check_ms_stereo = (gfp->mode == 1);
    if (check_ms_stereo) {
	check_ms_stereo = (l3_side.gr[0].ch[0].tt.block_type == l3_side.gr[0].ch[1].tt.block_type) && (l3_side.gr[1].ch[0].tt.block_type == l3_side.gr[1].ch[1].tt.block_type);
    }
    if (check_ms_stereo) {
	FLOAT8 ms_ratio_ave, ms_ener_ratio_ave;
	ms_ratio_ave = .25 * (ms_ratio[0] + ms_ratio[1] + ms_ratio_prev + ms_ratio_next);
	ms_ener_ratio_ave = .5 * (ms_ener_ratio[0] + ms_ener_ratio[1]);
	if (ms_ratio_ave < .35)
	    gfp->mode_ext = 2;
    }
    if (gfp->force_ms)
	gfp->mode_ext = 2;
    if (2 == gfp->mode_ext) {
	masking = &masking_MS_ratio;
	pe_use = &pe_MS;
    } else {
	masking = &masking_ratio;
	pe_use = &pe;
    }
    if (gfp->VBR) {
	VBR_iteration_loop(gfp, *pe_use, ms_ratio, xr, *masking, &l3_side, l3_enc, scalefac);
    } else {
	iteration_loop(gfp, *pe_use, ms_ratio, xr, *masking, &l3_side, l3_enc, scalefac);
    }
    getframebits(gfp, &bitsPerFrame, &mean_bits);
    III_format_bitstream(gfp, bitsPerFrame, l3_enc, &l3_side, scalefac, &bs);
    frameBits = bs.totbit - sentBits;
    if (frameBits % bitsPerSlot)
	fprintf(stderr, "Sent %ld bits = %ld slots plus %ld\n", frameBits, frameBits / bitsPerSlot, frameBits % bitsPerSlot);
    sentBits += frameBits;
    mp3count = copy_buffer(mp3buf, mp3buf_size, &bs);
    if (gfp->bWriteVbrTag)
	AddVbrFrame((int) (sentBits / 8));
    gfp->frameNum++;
    return mp3count;
}

int fill_buffer_resample(lame_global_flags * gfp, short int *outbuf, int desired_len, short int *inbuf, int len, int *num_used, int ch)
{
    static FLOAT8 itime[2];
    static short int inbuf_old[2][5];
    static int init[2] = { 0, 0 };
    int i, j = 0, k, linear, value;
    if (gfp->frameNum == 0 && !init[ch]) {
	init[ch] = 1;
	itime[ch] = 0;
	memset((char *) inbuf_old[ch], 0, sizeof(short int) * 5);
    }
    if (gfp->frameNum != 0)
	init[ch] = 0;
    linear = (fabs(gfp->resample_ratio - floor(.5 + gfp->resample_ratio)) < .0001);
    for (k = 0; k < desired_len; k++) {
	int y0, y1, y2, y3;
	FLOAT8 x0, x1, x2, x3;
	FLOAT8 time0;
	time0 = k * gfp->resample_ratio;
	j = floor(time0 - itime[ch]);
	if (j + 2 >= len)
	    break;
	x1 = time0 - (itime[ch] + j);
	x2 = x1 - 1;
	y1 = (j < 0) ? inbuf_old[ch][5 + j] : inbuf[j];
	y2 = ((1 + j) < 0) ? inbuf_old[ch][5 + 1 + j] : inbuf[1 + j];
	if (linear) {
	    outbuf[k] = floor(.5 + (y2 * x1 - y1 * x2));
	} else {
	    x0 = x1 + 1;
	    x3 = x1 - 2;
	    y0 = ((j - 1) < 0) ? inbuf_old[ch][5 + (j - 1)] : inbuf[j - 1];
	    y3 = ((j + 2) < 0) ? inbuf_old[ch][5 + (j + 2)] : inbuf[j + 2];
	    value = floor(.5 + -y0 * x1 * x2 * x3 / 6 + y1 * x0 * x2 * x3 / 2 - y2 * x0 * x1 * x3 / 2 + y3 * x0 * x1 * x2 / 6);
	    if (value > 32767)
		outbuf[k] = 32767;
	    else if (value < -32767)
		outbuf[k] = -32767;
	    else
		outbuf[k] = value;
	}
    }
    *num_used = ((len) < (j + 2) ? (len) : (j + 2));
    itime[ch] += *num_used - k * gfp->resample_ratio;
    for (i = 0; i < 5; i++)
	inbuf_old[ch][i] = inbuf[*num_used + i - 5];
    return k;
}

int fill_buffer(lame_global_flags * gfp, short int *outbuf, int desired_len, short int *inbuf, int len)
{
    int j;
    j = ((desired_len) < (len) ? (desired_len) : (len));
    memcpy((char *) outbuf, (char *) inbuf, sizeof(short int) * j);
    return j;
}
//complexity is O(n^2) inferred by loopus
int lame_encode_buffer(lame_global_flags * gfp, short int buffer_l[], short int buffer_r[], int nsamples, char *mp3buf, int mp3buf_size)
{
    static int frame_buffered = 0;
    int mp3size = 0, ret, i, ch, mf_needed;
    short int *in_buffer[2];
    in_buffer[0] = buffer_l;
    in_buffer[1] = buffer_r;
    ((800 >= 48) ? (void) (0) : __assert_fail("800>=48", "lame.c", 987, __PRETTY_FUNCTION__));
    ((1024 - (224 + 48) >= 0) ? (void) (0) : __assert_fail("1024-(224+48) >= 0", "lame.c", 988, __PRETTY_FUNCTION__));
    mf_needed = 1024 + gfp->framesize - (224 + 48);
    (((1152 + 1152 + 800 - 48) >= mf_needed) ? (void) (0) : __assert_fail("(1152+1152+800-48)>=mf_needed", "lame.c", 990, __PRETTY_FUNCTION__));
    if (gfp->frameNum == 0 && !frame_buffered) {
	memset((char *) mfbuf, 0, sizeof(mfbuf));
	frame_buffered = 1;
	mf_samples_to_encode = 800 + 288;
	mf_size = 800 - 48;
    }
    if (gfp->frameNum == 1) {
	frame_buffered = 0;
    }
    if (gfp->num_channels == 2 && gfp->stereo == 1) {
	for (i = 0; i < nsamples; ++i) {
	    in_buffer[0][i] = ((int) in_buffer[0][i] + (int) in_buffer[1][i]) / 2;
	    in_buffer[1][i] = 0;
    }}
    while (nsamples > 0) {
	int n_in = 0;
	int n_out = 0;
	for (ch = 0; ch < gfp->stereo; ch++) {
	    if (gfp->resample_ratio != 1) {
		n_out = fill_buffer_resample(gfp, &mfbuf[ch][mf_size], gfp->framesize, in_buffer[ch], nsamples, &n_in, ch);
	    } else {
		n_out = fill_buffer(gfp, &mfbuf[ch][mf_size], gfp->framesize, in_buffer[ch], nsamples);
		n_in = n_out;
	    }
	    in_buffer[ch] += n_in;
	}
	nsamples -= n_in;
	mf_size += n_out;
	((mf_size <= (1152 + 1152 + 800 - 48)) ? (void) (0) : __assert_fail("mf_size<=(1152+1152+800-48)", "lame.c", 1040, __PRETTY_FUNCTION__));
	mf_samples_to_encode += n_out;
	if (mf_size >= mf_needed) {
	    ret = lame_encode_frame(gfp, mfbuf[0], mfbuf[1], mf_size, mp3buf, mp3buf_size);
	    if (ret == -1) {
		return -1;
	    }
	    mp3buf += ret;
	    mp3size += ret;
	    mf_size -= gfp->framesize;
	    mf_samples_to_encode -= gfp->framesize;
	    for (ch = 0; ch < gfp->stereo; ch++)
		for (i = 0; i < mf_size; i++)
		    mfbuf[ch][i] = mfbuf[ch][i + gfp->framesize];
	}
    }
    ((nsamples == 0) ? (void) (0) : __assert_fail("nsamples==0", "lame.c", 1061, __PRETTY_FUNCTION__));
    return mp3size;
}
//complexity is O(n^2) inferred by loopus
int lame_encode_buffer_interleaved(lame_global_flags * gfp, short int buffer[], int nsamples, char *mp3buf, int mp3buf_size)
{
    static int frame_buffered = 0;
    int mp3size = 0, ret, i, ch, mf_needed;
    ((800 >= 48) ? (void) (0) : __assert_fail("800>=48", "lame.c", 1075, __PRETTY_FUNCTION__));
    ((1024 - (224 + 48) >= 0) ? (void) (0) : __assert_fail("1024-(224+48) >= 0", "lame.c", 1076, __PRETTY_FUNCTION__));
    mf_needed = 1024 + gfp->framesize - (224 + 48);
    (((1152 + 1152 + 800 - 48) >= mf_needed) ? (void) (0) : __assert_fail("(1152+1152+800-48)>=mf_needed", "lame.c", 1078, __PRETTY_FUNCTION__));
    if (gfp->num_channels == 1) {
	return lame_encode_buffer(gfp, buffer, ((void *) 0), nsamples, mp3buf, mp3buf_size);
    }
    if (gfp->resample_ratio != 1) {
	short int *buffer_l;
	short int *buffer_r;
	buffer_l = malloc(sizeof(short int) * nsamples);
	buffer_r = malloc(sizeof(short int) * nsamples);
	if (buffer_l == ((void *) 0) || buffer_r == ((void *) 0)) {
	    return -1;
	}
	for (i = 0; i < nsamples; i++) {
	    buffer_l[i] = buffer[2 * i];
	    buffer_r[i] = buffer[2 * i + 1];
	}
	ret = lame_encode_buffer(gfp, buffer_l, buffer_r, nsamples, mp3buf, mp3buf_size);
	free(buffer_l);
	free(buffer_r);
	return ret;
    }
    if (gfp->frameNum == 0 && !frame_buffered) {
	memset((char *) mfbuf, 0, sizeof(mfbuf));
	frame_buffered = 1;
	mf_samples_to_encode = 800 + 288;
	mf_size = 800 - 48;
    }
    if (gfp->frameNum == 1) {
	frame_buffered = 0;
    }
    if (gfp->num_channels == 2 && gfp->stereo == 1) {
	for (i = 0; i < nsamples; ++i) {
	    buffer[2 * i] = ((int) buffer[2 * i] + (int) buffer[2 * i + 1]) / 2;
	    buffer[2 * i + 1] = 0;
    }}
    while (nsamples > 0) {
	int n_out;
	n_out = ((gfp->framesize) < (nsamples) ? (gfp->framesize) : (nsamples));
	for (i = 0; i < n_out; ++i) {
	    mfbuf[0][mf_size + i] = buffer[2 * i];
	    mfbuf[1][mf_size + i] = buffer[2 * i + 1];
	}
	buffer += 2 * n_out;
	nsamples -= n_out;
	mf_size += n_out;
	((mf_size <= (1152 + 1152 + 800 - 48)) ? (void) (0) : __assert_fail("mf_size<=(1152+1152+800-48)", "lame.c", 1135, __PRETTY_FUNCTION__));
	mf_samples_to_encode += n_out;
	if (mf_size >= mf_needed) {
	    ret = lame_encode_frame(gfp, mfbuf[0], mfbuf[1], mf_size, mp3buf, mp3buf_size);
	    if (ret == -1) {
		return -1;
	    }
	    mp3buf += ret;
	    mp3size += ret;
	    mf_size -= gfp->framesize;
	    mf_samples_to_encode -= gfp->framesize;
	    for (ch = 0; ch < gfp->stereo; ch++)
		for (i = 0; i < mf_size; i++)
		    mfbuf[ch][i] = mfbuf[ch][i + gfp->framesize];
	}
    }
    ((nsamples == 0) ? (void) (0) : __assert_fail("nsamples==0", "lame.c", 1156, __PRETTY_FUNCTION__));
    return mp3size;
}

int lame_encode(lame_global_flags * gfp, short int in_buffer[2][1152], char *mp3buf, int size)
{
    int imp3, save;
    save = mf_samples_to_encode;
    imp3 = lame_encode_buffer(gfp, in_buffer[0], in_buffer[1], 576 * gfp->mode_gr, mp3buf, size);
    mf_samples_to_encode = save;
    return imp3;
}

void lame_init(lame_global_flags * gfp)
{
    gfp->allow_diff_short = 0;
    gfp->ATHonly = 0;
    gfp->noATH = 0;
    gfp->bWriteVbrTag = 1;
    gfp->cwlimit = 0;
    gfp->disable_reservoir = 0;
    gfp->experimentalX = 0;
    gfp->experimentalY = 0;
    gfp->experimentalZ = 0;
    gfp->frameNum = 0;
    gfp->gtkflag = 0;
    gfp->quality = 5;
    gfp->input_format = sf_unknown;
    gfp->filter_type = 0;
    gfp->lowpassfreq = 0;
    gfp->highpassfreq = 0;
    gfp->lowpasswidth = -1;
    gfp->highpasswidth = -1;
    gfp->lowpass1 = 0;
    gfp->lowpass2 = 0;
    gfp->highpass1 = 0;
    gfp->highpass2 = 0;
    gfp->lowpass_band = 32;
    gfp->highpass_band = -1;
    gfp->no_short_blocks = 0;
    gfp->resample_ratio = 1;
    gfp->padding_type = 2;
    gfp->padding = 0;
    gfp->swapbytes = 0;
    gfp->silent = 0;
    gfp->totalframes = 0;
    gfp->VBR = 0;
    gfp->VBR_q = 4;
    gfp->VBR_min_bitrate_kbps = 0;
    gfp->VBR_max_bitrate_kbps = 0;
    gfp->VBR_min_bitrate = 1;
    gfp->VBR_max_bitrate = 13;
    gfp->version = 1;
    gfp->mode = 1;
    gfp->mode_fixed = 0;
    gfp->force_ms = 0;
    gfp->brate = 0;
    gfp->copyright = 0;
    gfp->original = 1;
    gfp->extension = 0;
    gfp->error_protection = 0;
    gfp->emphasis = 0;
    gfp->in_samplerate = 1000 * 44.1;
    gfp->out_samplerate = 0;
    gfp->num_channels = 2;
    gfp->num_samples = 0xFFFFFFFF;
    gfp->inPath = ((void *) 0);
    gfp->outPath = ((void *) 0);
    id3tag.used = 0;
} 
//complexity is O(n^2) inferred by loopus 
int lame_encode_finish(lame_global_flags * gfp, char *mp3buffer, int mp3buffer_size)
{
    int imp3, mp3count, mp3buffer_size_remaining;
    short int buffer[2][1152];
    memset((char *) buffer, 0, sizeof(buffer));
    mp3count = 0;
    while (mf_samples_to_encode > 0) {
	mp3buffer_size_remaining = mp3buffer_size - mp3count;
	if (mp3buffer_size == 0)
	    mp3buffer_size_remaining = 0;
	imp3 = lame_encode(gfp, buffer, mp3buffer, mp3buffer_size_remaining);
	if (imp3 == -1) {
	    desalloc_buffer(&bs);
	    return -1;
	}
	mp3buffer += imp3;
	mp3count += imp3;
	mf_samples_to_encode -= gfp->framesize;
    }
    gfp->frameNum--;
    if (!gfp->gtkflag && !gfp->silent) {
	timestatus(gfp->out_samplerate, gfp->frameNum, gfp->totalframes, gfp->framesize);
	fprintf(stderr, "\n");
	fflush(stderr);
    }
    III_FlushBitstream();
    mp3buffer_size_remaining = mp3buffer_size - mp3count;
    if (mp3buffer_size == 0)
	mp3buffer_size_remaining = 0;
    imp3 = copy_buffer(mp3buffer, mp3buffer_size_remaining, &bs);
    if (imp3 == -1) {
	desalloc_buffer(&bs);
	return -1;
    }
    mp3count += imp3;
    desalloc_buffer(&bs);
    return mp3count;
}

void lame_mp3_tags(lame_global_flags * gfp)
{
    if (gfp->bWriteVbrTag) {
	int nQuality = gfp->VBR_q * 100 / 9;
	PutVbrTag(gfp->outPath, nQuality, 1 - gfp->version);
    }
    if (id3tag.used) {
	id3_buildtag(&id3tag);
	id3_writetag(gfp->outPath, &id3tag);
    }
}

void lame_version(lame_global_flags * gfp, char *ostring)
{
    strncpy(ostring, get_lame_version(), 20);
}
