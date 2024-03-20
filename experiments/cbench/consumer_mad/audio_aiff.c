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
extern char const mad_version[];
extern char const mad_copyright[];
extern char const mad_author[];
extern char const mad_build[];
typedef signed int mad_fixed_t;
typedef signed int mad_fixed64hi_t;
typedef unsigned int mad_fixed64lo_t;
typedef mad_fixed_t mad_sample_t;
mad_fixed_t mad_f_abs(mad_fixed_t);
struct mad_bitptr {
    unsigned char const *byte;
    unsigned short cache;
    unsigned short left;
};
void mad_bit_init(struct mad_bitptr *, unsigned char const *);
unsigned int mad_bit_length(struct mad_bitptr const *, struct mad_bitptr const *);
unsigned char const *mad_bit_nextbyte(struct mad_bitptr const *);
void mad_bit_skip(struct mad_bitptr *, unsigned int);
unsigned long mad_bit_read(struct mad_bitptr *, unsigned int);
void mad_bit_write(struct mad_bitptr *, unsigned int, unsigned long);
unsigned short mad_bit_crc(struct mad_bitptr, unsigned int, unsigned short);
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
enum mad_error { MAD_ERROR_NONE = 0x0000, MAD_ERROR_BUFLEN = 0x0001, MAD_ERROR_BUFPTR = 0x0002, MAD_ERROR_NOMEM = 0x0031, MAD_ERROR_LOSTSYNC = 0x0101, MAD_ERROR_BADLAYER = 0x0102, MAD_ERROR_BADBITRATE = 0x0103, MAD_ERROR_BADSAMPLERATE = 0x0104, MAD_ERROR_BADEMPHASIS = 0x0105, MAD_ERROR_BADCRC = 0x0201, MAD_ERROR_BADBITALLOC = 0x0211, MAD_ERROR_BADSCALEFACTOR = 0x0221, MAD_ERROR_BADFRAMELEN = 0x0231, MAD_ERROR_BADBIGVALUES = 0x0232, MAD_ERROR_BADBLOCKTYPE = 0x0233, MAD_ERROR_BADSCFSI = 0x0234, MAD_ERROR_BADDATAPTR = 0x0235, MAD_ERROR_BADPART3LEN = 0x0236, MAD_ERROR_BADHUFFTABLE = 0x0237, MAD_ERROR_BADHUFFDATA = 0x0238, MAD_ERROR_BADSTEREO = 0x0239 };
struct mad_stream {
    unsigned char const *buffer;
    unsigned char const *bufend;
    unsigned long skiplen;
    int sync;
    unsigned long freerate;
    unsigned char const *this_frame;
    unsigned char const *next_frame;
    struct mad_bitptr ptr;
    struct mad_bitptr anc_ptr;
    unsigned int anc_bitlen;
    unsigned char (*main_data)[(511 + 2048 + 8)];
    unsigned int md_len;
    int options;
    enum mad_error error;
};
enum { MAD_OPTION_IGNORECRC = 0x0001, MAD_OPTION_HALFSAMPLERATE = 0x0002 };
void mad_stream_init(struct mad_stream *);
void mad_stream_finish(struct mad_stream *);
void mad_stream_buffer(struct mad_stream *, unsigned char const *, unsigned long);
void mad_stream_skip(struct mad_stream *, unsigned long);
int mad_stream_sync(struct mad_stream *);
char const *mad_stream_errorstr(struct mad_stream const *);
enum mad_layer { MAD_LAYER_I = 1, MAD_LAYER_II = 2, MAD_LAYER_III = 3 };
enum mad_mode { MAD_MODE_SINGLE_CHANNEL = 0, MAD_MODE_DUAL_CHANNEL = 1, MAD_MODE_JOINT_STEREO = 2, MAD_MODE_STEREO = 3 };
enum mad_emphasis { MAD_EMPHASIS_NONE = 0, MAD_EMPHASIS_50_15_US = 1, MAD_EMPHASIS_CCITT_J_17 = 3 };
struct mad_header {
    enum mad_layer layer;
    enum mad_mode mode;
    int mode_extension;
    enum mad_emphasis emphasis;
    unsigned long bitrate;
    unsigned int samplerate;
    unsigned short crc_check;
    unsigned short crc_target;
    int flags;
    int private_bits;
    mad_timer_t duration;
};
struct mad_frame {
    struct mad_header header;
    int options;
    mad_fixed_t sbsample[2][36][32];
    mad_fixed_t(*overlap)[2][32][18];
};
enum { MAD_FLAG_NPRIVATE_III = 0x0007, MAD_FLAG_INCOMPLETE = 0x0008, MAD_FLAG_PROTECTION = 0x0010, MAD_FLAG_COPYRIGHT = 0x0020, MAD_FLAG_ORIGINAL = 0x0040, MAD_FLAG_PADDING = 0x0080, MAD_FLAG_I_STEREO = 0x0100, MAD_FLAG_MS_STEREO = 0x0200, MAD_FLAG_FREEFORMAT = 0x0400, MAD_FLAG_LSF_EXT = 0x1000, MAD_FLAG_MC_EXT = 0x2000, MAD_FLAG_MPEG_2_5_EXT = 0x4000 };
enum { MAD_PRIVATE_HEADER = 0x0100, MAD_PRIVATE_III = 0x001f };
void mad_header_init(struct mad_header *);
int mad_header_decode(struct mad_header *, struct mad_stream *);
void mad_frame_init(struct mad_frame *);
void mad_frame_finish(struct mad_frame *);
int mad_frame_decode(struct mad_frame *, struct mad_stream *);
void mad_frame_mute(struct mad_frame *);
struct mad_pcm {
    unsigned int samplerate;
    unsigned short channels;
    unsigned short length;
    mad_fixed_t samples[2][1152];
};
struct mad_synth {
    mad_fixed_t filter[2][2][2][16][8];
    unsigned int phase;
    struct mad_pcm pcm;
};
enum { MAD_PCM_CHANNEL_SINGLE = 0 };
enum { MAD_PCM_CHANNEL_DUAL_1 = 0, MAD_PCM_CHANNEL_DUAL_2 = 1 };
enum { MAD_PCM_CHANNEL_STEREO_LEFT = 0, MAD_PCM_CHANNEL_STEREO_RIGHT = 1 };
void mad_synth_init(struct mad_synth *);
void mad_synth_mute(struct mad_synth *);
void mad_synth_frame(struct mad_synth *, struct mad_frame const *);
enum mad_decoder_mode { MAD_DECODER_MODE_SYNC = 0, MAD_DECODER_MODE_ASYNC };
enum mad_flow { MAD_FLOW_CONTINUE = 0x0000, MAD_FLOW_STOP = 0x0010, MAD_FLOW_BREAK = 0x0011, MAD_FLOW_IGNORE = 0x0020 };
struct mad_decoder {
    enum mad_decoder_mode mode;
    int options;
    struct {
	long pid;
	int in;
	int out;
    } async;
    struct {
	struct mad_stream stream;
	struct mad_frame frame;
	struct mad_synth synth;
    } *sync;
    void *cb_data;
    enum mad_flow (*input_func) (void *, struct mad_stream *);
    enum mad_flow (*header_func) (void *, struct mad_header const *);
    enum mad_flow (*filter_func) (void *, struct mad_stream const *, struct mad_frame *);
    enum mad_flow (*output_func) (void *, struct mad_header const *, struct mad_pcm *);
    enum mad_flow (*error_func) (void *, struct mad_stream *, struct mad_frame *);
    enum mad_flow (*message_func) (void *, void *, unsigned int *);
};
void mad_decoder_init(struct mad_decoder *, void *, enum mad_flow (*)(void *, struct mad_stream *), enum mad_flow (*)(void *, struct mad_header const *), enum mad_flow (*)(void *, struct mad_stream const *, struct mad_frame *), enum mad_flow (*)(void *, struct mad_header const *, struct mad_pcm *), enum mad_flow (*)(void *, struct mad_stream *, struct mad_frame *), enum mad_flow (*)(void *, void *, unsigned int *));
int mad_decoder_finish(struct mad_decoder *);
int mad_decoder_run(struct mad_decoder *, enum mad_decoder_mode);
int mad_decoder_message(struct mad_decoder *, void *, unsigned int *);
enum audio_command { AUDIO_COMMAND_INIT, AUDIO_COMMAND_CONFIG, AUDIO_COMMAND_PLAY, AUDIO_COMMAND_STOP, AUDIO_COMMAND_FINISH };
enum audio_mode { AUDIO_MODE_ROUND, AUDIO_MODE_DITHER };
struct audio_stats {
    unsigned long clipped_samples;
    mad_fixed_t peak_clipping;
    mad_fixed_t peak_sample;
};
union audio_control {
    enum audio_command command;
    struct audio_init {
	enum audio_command command;
	char const *path;
    } init;
    struct audio_config {
	enum audio_command command;
	unsigned int channels;
	unsigned int speed;
	unsigned int precision;
    } config;
    struct audio_play {
	enum audio_command command;
	unsigned int nsamples;
	mad_fixed_t const *samples[2];
	enum audio_mode mode;
	struct audio_stats *stats;
    } play;
    struct audio_stop {
	enum audio_command command;
	int flush;
    } stop;
    struct audio_finish {
	enum audio_command command;
    } finish;
};
struct audio_dither {
    mad_fixed_t error[3];
    mad_fixed_t random;
};
extern char const *audio_error;
typedef int audio_ctlfunc_t(union audio_control *);
audio_ctlfunc_t *audio_output(char const **);
audio_ctlfunc_t audio_oss;
audio_ctlfunc_t audio_esd;
audio_ctlfunc_t audio_empeg;
audio_ctlfunc_t audio_sun;
audio_ctlfunc_t audio_win32;
audio_ctlfunc_t audio_raw;
audio_ctlfunc_t audio_cdda;
audio_ctlfunc_t audio_aiff;
audio_ctlfunc_t audio_wave;
audio_ctlfunc_t audio_snd;
audio_ctlfunc_t audio_hex;
audio_ctlfunc_t audio_null;
void audio_control_init(union audio_control *, enum audio_command);
signed long audio_linear_round(unsigned int, mad_fixed_t, struct audio_stats *);
signed long audio_linear_dither(unsigned int, mad_fixed_t, struct audio_dither *, struct audio_stats *);
unsigned char audio_mulaw_round(mad_fixed_t, struct audio_stats *);
unsigned char audio_mulaw_dither(mad_fixed_t, struct audio_dither *, struct audio_stats *);
typedef unsigned int audio_pcmfunc_t(unsigned char *, unsigned int, mad_fixed_t const *, mad_fixed_t const *, enum audio_mode, struct audio_stats *);
audio_pcmfunc_t audio_pcm_u8;
audio_pcmfunc_t audio_pcm_s8;
audio_pcmfunc_t audio_pcm_s16le;
audio_pcmfunc_t audio_pcm_s16be;
audio_pcmfunc_t audio_pcm_s24le;
audio_pcmfunc_t audio_pcm_s24be;
audio_pcmfunc_t audio_pcm_s32le;
audio_pcmfunc_t audio_pcm_s32be;
audio_pcmfunc_t audio_pcm_mulaw;
static FILE *outfile;
static audio_pcmfunc_t *audio_pcm;
static unsigned long nsamples;
static unsigned long form_len, ssnd_len;
static long comm_chunk, ssnd_chunk;
static unsigned int config_channels;
static unsigned int config_speed;
static unsigned int config_precision;
static int init(struct audio_init *init)
{
    if (init->path && strcmp(init->path, "-") != 0) {
	outfile = fopen(init->path, "wb");
	if (outfile == 0) {
	    audio_error = ":";
	    return -1;
	}
    } else
	outfile = stdout;
    if (fwrite("FORM" "\xff\xff\xff\xff" "AIFF", 4 + 4 + 4, 1, outfile) != 1) {
	audio_error = ":fwrite";
	return -1;
    }
    form_len = 4;
    comm_chunk = -1;
    ssnd_chunk = -1;
    config_channels = 0;
    config_speed = 0;
    config_precision = 0;
    return 0;
}

static void int32(unsigned char *ptr, unsigned long num)
{
    ptr[0] = num >> 24;
    ptr[1] = num >> 16;
    ptr[2] = num >> 8;
    ptr[3] = num >> 0;
} static void int16(unsigned char *ptr, unsigned int num)
{
    ptr[0] = num >> 8;
    ptr[1] = num >> 0;
} 
//complexity is O(n) inferred by loopus
static void float80(unsigned char *ptr, signed long num)
{
    if (num == 0)
	memset(ptr, 0, 10);
    else {
	int exp;
	unsigned int s, e;
	unsigned long abs, sr, f;
	enum { BIAS = 0x3fff };
	s = num < 0;
	abs = s ? -num : num;
	for (exp = -1, sr = abs; sr; sr >>= 1)
	    ++exp;
	e = exp + BIAS;
	f = abs << (32 - exp - 1);
	ptr[0] = (s << 7) | (e >> 8);
	ptr[1] = (e >> 0);
	ptr[2] = (f >> 24);
	ptr[3] = (f >> 16);
	ptr[4] = (f >> 8);
	ptr[5] = (f >> 0);
	ptr[6] = 0;
	ptr[7] = 0;
	ptr[8] = 0;
	ptr[9] = 0;
    }
}

static int config(struct audio_config *config)
{
    unsigned int bitdepth;
    unsigned char chunk[8 + 18];
    if (config_precision) {
	config->channels = config_channels;
	config->speed = config_speed;
	config->precision = config_precision;
	return 0;
    }
    bitdepth = config->precision;
    if (bitdepth == 0)
	bitdepth = 16;
    else if (bitdepth > 32)
	bitdepth = 32;
    comm_chunk = ftell(outfile);
    memcpy(&chunk[0], "COMM", 4);
    int32(&chunk[4], 18);
    int16(&chunk[8], config->channels);
    int32(&chunk[10], ~0L);
    int16(&chunk[14], bitdepth);
    float80(&chunk[16], config->speed);
    if (fwrite(chunk, 8 + 18, 1, outfile) != 1) {
	audio_error = ":fwrite";
	return -1;
    }
    form_len += 8 + 18;
    ssnd_chunk = ftell(outfile);
    memcpy(&chunk[0], "SSND", 4);
    int32(&chunk[4], ~0L);
    int32(&chunk[8], 0);
    int32(&chunk[12], 0);
    if (fwrite(chunk, 8 + 8, 1, outfile) != 1) {
	audio_error = ":fwrite";
	return -1;
    }
    form_len += 8 + 8;
    ssnd_len = 8;
    switch (config->precision = bitdepth) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
	audio_pcm = audio_pcm_s8;
	break;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
	audio_pcm = audio_pcm_s16be;
	break;
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
	audio_pcm = audio_pcm_s24be;
	break;
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
	audio_pcm = audio_pcm_s32be;
	break;
    }
    nsamples = 0;
    config_channels = config->channels;
    config_speed = config->speed;
    config_precision = config->precision;
    return 0;
}

static int play(struct audio_play *play)
{
    unsigned char data[(1152 * 3) * 4 * 2];
    unsigned int len;
    len = audio_pcm(data, play->nsamples, play->samples[0], play->samples[1], play->mode, play->stats);
    if (fwrite(data, len, 1, outfile) != 1) {
	audio_error = ":fwrite";
	return -1;
    }
    nsamples += play->nsamples;
    ssnd_len += len;
    form_len += len;
    return 0;
}

static int stop(struct audio_stop *stop)
{
    return 0;
}

static int patch_int32(long address, unsigned long num)
{
    unsigned char dword[4];
    if (fseek(outfile, address, 0) == -1) {
	audio_error = ":fseek";
	return -1;
    }
    int32(dword, num);
    if (fwrite(dword, sizeof(dword), 1, outfile) != 1) {
	audio_error = ":fwrite";
	return -1;
    }
    if (fseek(outfile, 0, 2) == -1) {
	audio_error = ":fseek";
	return -1;
    }
    return 0;
}

static int finish(struct audio_finish *finish)
{
    int result = 0;
    if (config_precision == 0) {
	struct audio_config dummy;
	dummy.command = AUDIO_COMMAND_CONFIG;
	dummy.channels = 2;
	dummy.speed = 44100;
	dummy.precision = 0;
	result = config(&dummy);
    }
    if (ssnd_len & 1) {
	if (fputc(0, outfile) == (-1) && result == 0) {
	    audio_error = ":fputc";
	    result = -1;
	}
	++form_len;
    }
    if (result == 0 && ((comm_chunk != -1 && patch_int32(comm_chunk + 10, nsamples) == -1) || (ssnd_chunk != -1 && patch_int32(ssnd_chunk + 4, ssnd_len) == -1)))
	result = -1;
    if (result == 0)
	patch_int32(4, form_len);
    if (outfile != stdout && fclose(outfile) == (-1) && result == 0) {
	audio_error = ":fclose";
	result = -1;
    }
    return result;
}

int audio_aiff(union audio_control *control)
{
    audio_error = 0;
    switch (control->command) {
    case AUDIO_COMMAND_INIT:
	return init(&control->init);
    case AUDIO_COMMAND_CONFIG:
	return config(&control->config);
    case AUDIO_COMMAND_PLAY:
	return play(&control->play);
    case AUDIO_COMMAND_STOP:
	return stop(&control->stop);
    case AUDIO_COMMAND_FINISH:
	return finish(&control->finish);
    }
    return 0;
}
