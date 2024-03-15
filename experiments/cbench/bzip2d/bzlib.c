// function Bze_BzReadOpen

typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
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
typedef struct __locale_struct {
    struct locale_data *__locales[13];
    const unsigned short int *__ctype_b;
    const int *__ctype_tolower;
    const int *__ctype_toupper;
    const char *__names[13];
} *__locale_t;
typedef __locale_t locale_t;
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
typedef struct {
    char *next_in;
    unsigned int avail_in;
    unsigned int total_in_lo32;
    unsigned int total_in_hi32;
    char *next_out;
    unsigned int avail_out;
    unsigned int total_out_lo32;
    unsigned int total_out_hi32;
    void *state;
    void *(*bzalloc) (void *, int, int);
    void (*bzfree) (void *, void *);
    void *opaque;
} bz_stream;
extern int BZ2_bzCompressInit(bz_stream * strm, int blockSize100k, int verbosity, int workFactor);
extern int BZ2_bzCompress(bz_stream * strm, int action);
extern int BZ2_bzCompressEnd(bz_stream * strm);
extern int BZ2_bzDecompressInit(bz_stream * strm, int verbosity, int small);
extern int BZ2_bzDecompress(bz_stream * strm);
extern int BZ2_bzDecompressEnd(bz_stream * strm);
typedef void BZFILE;
extern BZFILE *BZ2_bzReadOpen(int *bzerror, FILE * f, int verbosity, int small, void *unused, int nUnused);
extern void BZ2_bzReadClose(int *bzerror, BZFILE * b);
extern void BZ2_bzReadGetUnused(int *bzerror, BZFILE * b, void **unused, int *nUnused);
extern int BZ2_bzRead(int *bzerror, BZFILE * b, void *buf, int len);
extern BZFILE *BZ2_bzWriteOpen(int *bzerror, FILE * f, int blockSize100k, int verbosity, int workFactor);
extern void BZ2_bzWrite(int *bzerror, BZFILE * b, void *buf, int len);
extern void BZ2_bzWriteClose(int *bzerror, BZFILE * b, int abandon, unsigned int *nbytes_in, unsigned int *nbytes_out);
extern void BZ2_bzWriteClose64(int *bzerror, BZFILE * b, int abandon, unsigned int *nbytes_in_lo32, unsigned int *nbytes_in_hi32, unsigned int *nbytes_out_lo32, unsigned int *nbytes_out_hi32);
extern int BZ2_bzBuffToBuffCompress(char *dest, unsigned int *destLen, char *source, unsigned int sourceLen, int blockSize100k, int verbosity, int workFactor);
extern int BZ2_bzBuffToBuffDecompress(char *dest, unsigned int *destLen, char *source, unsigned int sourceLen, int small, int verbosity);
extern const char *BZ2_bzlibVersion(void);
extern BZFILE *BZ2_bzopen(const char *path, const char *mode);
extern BZFILE *BZ2_bzdopen(int fd, const char *mode);
extern int BZ2_bzread(BZFILE * b, void *buf, int len);
extern int BZ2_bzwrite(BZFILE * b, void *buf, int len);
extern int BZ2_bzflush(BZFILE * b);
extern void BZ2_bzclose(BZFILE * b);
extern const char *BZ2_bzerror(BZFILE * b, int *errnum);
typedef char Char;
typedef unsigned char Bool;
typedef unsigned char UChar;
typedef int Int32;
typedef unsigned int UInt32;
typedef short Int16;
typedef unsigned short UInt16;
extern void BZ2_bz__AssertH__fail(int errcode);
extern Int32 BZ2_rNums[512];
extern UInt32 BZ2_crc32Table[256];
typedef struct {
    bz_stream *strm;
    Int32 mode;
    Int32 state;
    UInt32 avail_in_expect;
    UInt32 *arr1;
    UInt32 *arr2;
    UInt32 *ftab;
    Int32 origPtr;
    UInt32 *ptr;
    UChar *block;
    UInt16 *mtfv;
    UChar *zbits;
    Int32 workFactor;
    UInt32 state_in_ch;
    Int32 state_in_len;
    Int32 rNToGo;
    Int32 rTPos;
    Int32 nblock;
    Int32 nblockMAX;
    Int32 numZ;
    Int32 state_out_pos;
    Int32 nInUse;
    Bool inUse[256];
    UChar unseqToSeq[256];
    UInt32 bsBuff;
    Int32 bsLive;
    UInt32 blockCRC;
    UInt32 combinedCRC;
    Int32 verbosity;
    Int32 blockNo;
    Int32 blockSize100k;
    Int32 nMTF;
    Int32 mtfFreq[258];
    UChar selector[(2 + (900000 / 50))];
    UChar selectorMtf[(2 + (900000 / 50))];
    UChar len[6][258];
    Int32 code[6][258];
    Int32 rfreq[6][258];
    UInt32 len_pack[258][4];
} EState;
extern void BZ2_blockSort(EState *);
extern void BZ2_compressBlock(EState *, Bool);
extern void BZ2_bsInitWrite(EState *);
extern void BZ2_hbAssignCodes(Int32 *, UChar *, Int32, Int32, Int32);
extern void BZ2_hbMakeCodeLengths(UChar *, Int32 *, Int32, Int32);
typedef struct {
    bz_stream *strm;
    Int32 state;
    UChar state_out_ch;
    Int32 state_out_len;
    Bool blockRandomised;
    Int32 rNToGo;
    Int32 rTPos;
    UInt32 bsBuff;
    Int32 bsLive;
    Int32 blockSize100k;
    Bool smallDecompress;
    Int32 currBlockNo;
    Int32 verbosity;
    Int32 origPtr;
    UInt32 tPos;
    Int32 k0;
    Int32 unzftab[256];
    Int32 nblock_used;
    Int32 cftab[257];
    Int32 cftabCopy[257];
    UInt32 *tt;
    UInt16 *ll16;
    UChar *ll4;
    UInt32 storedBlockCRC;
    UInt32 storedCombinedCRC;
    UInt32 calculatedBlockCRC;
    UInt32 calculatedCombinedCRC;
    Int32 nInUse;
    Bool inUse[256];
    Bool inUse16[16];
    UChar seqToUnseq[256];
    UChar mtfa[4096];
    Int32 mtfbase[256 / 16];
    UChar selector[(2 + (900000 / 50))];
    UChar selectorMtf[(2 + (900000 / 50))];
    UChar len[6][258];
    Int32 limit[6][258];
    Int32 base[6][258];
    Int32 perm[6][258];
    Int32 minLens[6];
    Int32 save_i;
    Int32 save_j;
    Int32 save_t;
    Int32 save_alphaSize;
    Int32 save_nGroups;
    Int32 save_nSelectors;
    Int32 save_EOB;
    Int32 save_groupNo;
    Int32 save_groupPos;
    Int32 save_nextSym;
    Int32 save_nblockMAX;
    Int32 save_nblock;
    Int32 save_es;
    Int32 save_N;
    Int32 save_curr;
    Int32 save_zt;
    Int32 save_zn;
    Int32 save_zvec;
    Int32 save_zj;
    Int32 save_gSel;
    Int32 save_gMinlen;
    Int32 *save_gLimit;
    Int32 *save_gBase;
    Int32 *save_gPerm;
} DState;
extern Int32 BZ2_indexIntoF(Int32, Int32 *);
extern Int32 BZ2_decompress(DState *);
extern void BZ2_hbCreateDecodeTables(Int32 *, Int32 *, Int32 *, UChar *, Int32, Int32, Int32);
void BZ2_bz__AssertH__fail(int errcode)
{
    fprintf(stderr, "\n\nbzip2/libbzip2: internal error number %d.\n" "This is a bug in bzip2/libbzip2, %s.\n" "Please report it to me at: jseward@bzip.org.  If this happened\n" "when you were using some program which uses libbzip2 as a\n" "component, you should also report this bug to the author(s)\n" "of that program.  Please make an effort to report this bug;\n" "timely and accurate bug reports eventually lead to higher\n" "quality software.  Thanks.  Julian Seward, 15 February 2005.\n\n", errcode, BZ2_bzlibVersion());
    if (errcode == 1007) {
	fprintf(stderr, "\n*** A special note about internal error number 1007 ***\n" "\n" "Experience suggests that a common cause of i.e. 1007\n" "is unreliable memory or other hardware.  The 1007 assertion\n" "just happens to cross-check the results of huge numbers of\n" "memory reads/writes, and so acts (unintendedly) as a stress\n" "test of your memory system.\n" "\n" "I suggest the following: try compressing the file again,\n" "possibly monitoring progress in detail with the -vv flag.\n" "\n" "* If the error cannot be reproduced, and/or happens at different\n" "  points in compression, you may have a flaky memory system.\n" "  Try a memory-test program.  I have used Memtest86\n" "  (www.memtest86.com).  At the time of writing it is free (GPLd).\n" "  Memtest86 tests memory much more thorougly than your BIOSs\n" "  power-on test, and may find failures that the BIOS doesn't.\n" "\n" "* If the error can be repeatably reproduced, this is a bug in\n" "  bzip2, and I would very much like to hear about it.  Please\n" "  let me know, and, ideally, save a copy of the file causing the\n" "  problem -- without which I will be unable to investigate it.\n" "\n");
    }
    exit(3);
}

static int bz_config_ok(void)
{
    if (sizeof(int) != 4)
	return 0;
    if (sizeof(short) != 2)
	return 0;
    if (sizeof(char) != 1)
	return 0;
    return 1;
}

static void *default_bzalloc(void *opaque, Int32 items, Int32 size)
{
    void *v = malloc(items * size);
    return v;
}

static void default_bzfree(void *opaque, void *addr)
{
    if (addr != ((void *) 0))
	free(addr);
} static void prepare_new_block(EState * s)
{
    Int32 i;
    s->nblock = 0;
    s->numZ = 0;
    s->state_out_pos = 0; {
	s->blockCRC = 0xffffffffL;
    };
    for (i = 0; i < 256; i++)
	s->inUse[i] = ((Bool) 0);
    s->blockNo++;
}

static void init_RL(EState * s)
{
    s->state_in_ch = 256;
    s->state_in_len = 0;
} static Bool isempty_RL(EState * s)
{
    if (s->state_in_ch < 256 && s->state_in_len > 0)
	return ((Bool) 0);
    else
	return ((Bool) 1);
}

int BZ2_bzCompressInit(bz_stream * strm, int blockSize100k, int verbosity, int workFactor)
{
    Int32 n;
    EState *s;
    if (!bz_config_ok())
	return (-9);
    if (strm == ((void *) 0) || blockSize100k < 1 || blockSize100k > 9 || workFactor < 0 || workFactor > 250)
	return (-2);
    if (workFactor == 0)
	workFactor = 30;
    if (strm->bzalloc == ((void *) 0))
	strm->bzalloc = default_bzalloc;
    if (strm->bzfree == ((void *) 0))
	strm->bzfree = default_bzfree;
    s = (strm->bzalloc) (strm->opaque, (sizeof(EState)), 1);
    if (s == ((void *) 0))
	return (-3);
    s->strm = strm;
    s->arr1 = ((void *) 0);
    s->arr2 = ((void *) 0);
    s->ftab = ((void *) 0);
    n = 100000 * blockSize100k;
    s->arr1 = (strm->bzalloc) (strm->opaque, (n * sizeof(UInt32)), 1);
    s->arr2 = (strm->bzalloc) (strm->opaque, ((n + (2 + 12 + 18 + 2)) * sizeof(UInt32)), 1);
    s->ftab = (strm->bzalloc) (strm->opaque, (65537 * sizeof(UInt32)), 1);
    if (s->arr1 == ((void *) 0) || s->arr2 == ((void *) 0) || s->ftab == ((void *) 0)) {
	if (s->arr1 != ((void *) 0))
	    (strm->bzfree) (strm->opaque, (s->arr1));
	if (s->arr2 != ((void *) 0))
	    (strm->bzfree) (strm->opaque, (s->arr2));
	if (s->ftab != ((void *) 0))
	    (strm->bzfree) (strm->opaque, (s->ftab));
	if (s != ((void *) 0))
	    (strm->bzfree) (strm->opaque, (s));
	return (-3);
    }
    s->blockNo = 0;
    s->state = 2;
    s->mode = 2;
    s->combinedCRC = 0;
    s->blockSize100k = blockSize100k;
    s->nblockMAX = 100000 * blockSize100k - 19;
    s->verbosity = verbosity;
    s->workFactor = workFactor;
    s->block = (UChar *) s->arr2;
    s->mtfv = (UInt16 *) s->arr1;
    s->zbits = ((void *) 0);
    s->ptr = (UInt32 *) s->arr1;
    strm->state = s;
    strm->total_in_lo32 = 0;
    strm->total_in_hi32 = 0;
    strm->total_out_lo32 = 0;
    strm->total_out_hi32 = 0;
    init_RL(s);
    prepare_new_block(s);
    return 0;
}

static void add_pair_to_block(EState * s)
{
    Int32 i;
    UChar ch = (UChar) (s->state_in_ch);
    for (i = 0; i < s->state_in_len; i++) { {
	    s->blockCRC = (s->blockCRC << 8) ^ BZ2_crc32Table[(s->blockCRC >> 24) ^ ((UChar) ch)];
    };
    }
    s->inUse[s->state_in_ch] = ((Bool) 1);
    switch (s->state_in_len) {
    case 1:
	s->block[s->nblock] = (UChar) ch;
	s->nblock++;
	break;
    case 2:
	s->block[s->nblock] = (UChar) ch;
	s->nblock++;
	s->block[s->nblock] = (UChar) ch;
	s->nblock++;
	break;
    case 3:
	s->block[s->nblock] = (UChar) ch;
	s->nblock++;
	s->block[s->nblock] = (UChar) ch;
	s->nblock++;
	s->block[s->nblock] = (UChar) ch;
	s->nblock++;
	break;
    default:
	s->inUse[s->state_in_len - 4] = ((Bool) 1);
	s->block[s->nblock] = (UChar) ch;
	s->nblock++;
	s->block[s->nblock] = (UChar) ch;
	s->nblock++;
	s->block[s->nblock] = (UChar) ch;
	s->nblock++;
	s->block[s->nblock] = (UChar) ch;
	s->nblock++;
	s->block[s->nblock] = ((UChar) (s->state_in_len - 4));
	s->nblock++;
	break;
    }
}

static void flush_RL(EState * s)
{
    if (s->state_in_ch < 256)
	add_pair_to_block(s);
    init_RL(s);
}

static Bool copy_input_until_stop(EState * s)
{
    Bool progress_in = ((Bool) 0);
    if (s->mode == 2) {
	while (((Bool) 1)) {
	    if (s->nblock >= s->nblockMAX)
		break;
	    if (s->strm->avail_in == 0)
		break;
	    progress_in = ((Bool) 1); {
		UInt32 zchh = (UInt32) ((UInt32) (*((UChar *) (s->strm->next_in))));
		if (zchh != s->state_in_ch && s->state_in_len == 1) {
		    UChar ch = (UChar) (s->state_in_ch); {
			s->blockCRC = (s->blockCRC << 8) ^ BZ2_crc32Table[(s->blockCRC >> 24) ^ ((UChar) ch)];
		    };
		    s->inUse[s->state_in_ch] = ((Bool) 1);
		    s->block[s->nblock] = (UChar) ch;
		    s->nblock++;
		    s->state_in_ch = zchh;
		} else if (zchh != s->state_in_ch || s->state_in_len == 255) {
		    if (s->state_in_ch < 256)
			add_pair_to_block(s);
		    s->state_in_ch = zchh;
		    s->state_in_len = 1;
		} else {
		    s->state_in_len++;
		}
	    };
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	}
    } else {
	while (((Bool) 1)) {
	    if (s->nblock >= s->nblockMAX)
		break;
	    if (s->strm->avail_in == 0)
		break;
	    if (s->avail_in_expect == 0)
		break;
	    progress_in = ((Bool) 1); {
		UInt32 zchh = (UInt32) ((UInt32) (*((UChar *) (s->strm->next_in))));
		if (zchh != s->state_in_ch && s->state_in_len == 1) {
		    UChar ch = (UChar) (s->state_in_ch); {
			s->blockCRC = (s->blockCRC << 8) ^ BZ2_crc32Table[(s->blockCRC >> 24) ^ ((UChar) ch)];
		    };
		    s->inUse[s->state_in_ch] = ((Bool) 1);
		    s->block[s->nblock] = (UChar) ch;
		    s->nblock++;
		    s->state_in_ch = zchh;
		} else if (zchh != s->state_in_ch || s->state_in_len == 255) {
		    if (s->state_in_ch < 256)
			add_pair_to_block(s);
		    s->state_in_ch = zchh;
		    s->state_in_len = 1;
		} else {
		    s->state_in_len++;
		}
	    };
	    s->strm->next_in++;
	    s->strm->avail_in--;
	    s->strm->total_in_lo32++;
	    if (s->strm->total_in_lo32 == 0)
		s->strm->total_in_hi32++;
	    s->avail_in_expect--;
	}
    }
    return progress_in;
}

static Bool copy_output_until_stop(EState * s)
{
    Bool progress_out = ((Bool) 0);
    while (((Bool) 1)) {
	if (s->strm->avail_out == 0)
	    break;
	if (s->state_out_pos >= s->numZ)
	    break;
	progress_out = ((Bool) 1);
	*(s->strm->next_out) = s->zbits[s->state_out_pos];
	s->state_out_pos++;
	s->strm->avail_out--;
	s->strm->next_out++;
	s->strm->total_out_lo32++;
	if (s->strm->total_out_lo32 == 0)
	    s->strm->total_out_hi32++;
    }
    return progress_out;
}

static Bool handle_compress(bz_stream * strm)
{
    Bool progress_in = ((Bool) 0);
    Bool progress_out = ((Bool) 0);
    EState *s = strm->state;
    while (((Bool) 1)) {
	if (s->state == 1) {
	    progress_out |= copy_output_until_stop(s);
	    if (s->state_out_pos < s->numZ)
		break;
	    if (s->mode == 4 && s->avail_in_expect == 0 && isempty_RL(s))
		break;
	    prepare_new_block(s);
	    s->state = 2;
	    if (s->mode == 3 && s->avail_in_expect == 0 && isempty_RL(s))
		break;
	}
	if (s->state == 2) {
	    progress_in |= copy_input_until_stop(s);
	    if (s->mode != 2 && s->avail_in_expect == 0) {
		flush_RL(s);
		BZ2_compressBlock(s, (Bool) (s->mode == 4));
		s->state = 1;
	    } else if (s->nblock >= s->nblockMAX) {
		BZ2_compressBlock(s, ((Bool) 0));
		s->state = 1;
	    } else if (s->strm->avail_in == 0) {
		break;
	    }
	}
    }
    return progress_in || progress_out;
}

int BZ2_bzCompress(bz_stream * strm, int action)
{
    Bool progress;
    EState *s;
    if (strm == ((void *) 0))
	return (-2);
    s = strm->state;
    if (s == ((void *) 0))
	return (-2);
    if (s->strm != strm)
	return (-2);
  preswitch:switch (s->mode) {
    case 1:
	return (-1);
    case 2:
	if (action == 0) {
	    progress = handle_compress(strm);
	    return progress ? 1 : (-2);
	} else if (action == 1) {
	    s->avail_in_expect = strm->avail_in;
	    s->mode = 3;
	    goto preswitch;
	} else if (action == 2) {
	    s->avail_in_expect = strm->avail_in;
	    s->mode = 4;
	    goto preswitch;
	} else
	    return (-2);
    case 3:
	if (action != 1)
	    return (-1);
	if (s->avail_in_expect != s->strm->avail_in)
	    return (-1);
	progress = handle_compress(strm);
	if (s->avail_in_expect > 0 || !isempty_RL(s) || s->state_out_pos < s->numZ)
	    return 2;
	s->mode = 2;
	return 1;
    case 4:
	if (action != 2)
	    return (-1);
	if (s->avail_in_expect != s->strm->avail_in)
	    return (-1);
	progress = handle_compress(strm);
	if (!progress)
	    return (-1);
	if (s->avail_in_expect > 0 || !isempty_RL(s) || s->state_out_pos < s->numZ)
	    return 3;
	s->mode = 1;
	return 4;
    }
    return 0;
}

int BZ2_bzCompressEnd(bz_stream * strm)
{
    EState *s;
    if (strm == ((void *) 0))
	return (-2);
    s = strm->state;
    if (s == ((void *) 0))
	return (-2);
    if (s->strm != strm)
	return (-2);
    if (s->arr1 != ((void *) 0))
	(strm->bzfree) (strm->opaque, (s->arr1));
    if (s->arr2 != ((void *) 0))
	(strm->bzfree) (strm->opaque, (s->arr2));
    if (s->ftab != ((void *) 0))
	(strm->bzfree) (strm->opaque, (s->ftab));
    (strm->bzfree) (strm->opaque, (strm->state));
    strm->state = ((void *) 0);
    return 0;
}

int BZ2_bzDecompressInit(bz_stream * strm, int verbosity, int small)
{
    DState *s;
    if (!bz_config_ok())
	return (-9);
    if (strm == ((void *) 0))
	return (-2);
    if (small != 0 && small != 1)
	return (-2);
    if (verbosity < 0 || verbosity > 4)
	return (-2);
    if (strm->bzalloc == ((void *) 0))
	strm->bzalloc = default_bzalloc;
    if (strm->bzfree == ((void *) 0))
	strm->bzfree = default_bzfree;
    s = (strm->bzalloc) (strm->opaque, (sizeof(DState)), 1);
    if (s == ((void *) 0))
	return (-3);
    s->strm = strm;
    strm->state = s;
    s->state = 10;
    s->bsLive = 0;
    s->bsBuff = 0;
    s->calculatedCombinedCRC = 0;
    strm->total_in_lo32 = 0;
    strm->total_in_hi32 = 0;
    strm->total_out_lo32 = 0;
    strm->total_out_hi32 = 0;
    s->smallDecompress = (Bool) small;
    s->ll4 = ((void *) 0);
    s->ll16 = ((void *) 0);
    s->tt = ((void *) 0);
    s->currBlockNo = 0;
    s->verbosity = verbosity;
    return 0;
}

static Bool unRLE_obuf_to_output_FAST(DState * s)
{
    UChar k1;
    if (s->blockRandomised) {
	while (((Bool) 1)) {
	    while (((Bool) 1)) {
		if (s->strm->avail_out == 0)
		    return ((Bool) 0);
		if (s->state_out_len == 0)
		    break;
		*((UChar *) (s->strm->next_out)) = s->state_out_ch; {
		    s->calculatedBlockCRC = (s->calculatedBlockCRC << 8) ^ BZ2_crc32Table[(s->calculatedBlockCRC >> 24) ^ ((UChar) s->state_out_ch)];
		};
		s->state_out_len--;
		s->strm->next_out++;
		s->strm->avail_out--;
		s->strm->total_out_lo32++;
		if (s->strm->total_out_lo32 == 0)
		    s->strm->total_out_hi32++;
	    }
	    if (s->nblock_used == s->save_nblock + 1)
		return ((Bool) 0);
	    if (s->nblock_used > s->save_nblock + 1)
		return ((Bool) 1);
	    s->state_out_len = 1;
	    s->state_out_ch = s->k0;
	    s->tPos = s->tt[s->tPos];
	    k1 = (UChar) (s->tPos & 0xff);
	    s->tPos >>= 8;;
	    if (s->rNToGo == 0) {
		s->rNToGo = BZ2_rNums[s->rTPos];
		s->rTPos++;
		if (s->rTPos == 512)
		    s->rTPos = 0;
	    }
	    s->rNToGo--;;
	    k1 ^= ((s->rNToGo == 1) ? 1 : 0);
	    s->nblock_used++;
	    if (s->nblock_used == s->save_nblock + 1)
		continue;
	    if (k1 != s->k0) {
		s->k0 = k1;
		continue;
	    };
	    s->state_out_len = 2;
	    s->tPos = s->tt[s->tPos];
	    k1 = (UChar) (s->tPos & 0xff);
	    s->tPos >>= 8;;
	    if (s->rNToGo == 0) {
		s->rNToGo = BZ2_rNums[s->rTPos];
		s->rTPos++;
		if (s->rTPos == 512)
		    s->rTPos = 0;
	    }
	    s->rNToGo--;;
	    k1 ^= ((s->rNToGo == 1) ? 1 : 0);
	    s->nblock_used++;
	    if (s->nblock_used == s->save_nblock + 1)
		continue;
	    if (k1 != s->k0) {
		s->k0 = k1;
		continue;
	    };
	    s->state_out_len = 3;
	    s->tPos = s->tt[s->tPos];
	    k1 = (UChar) (s->tPos & 0xff);
	    s->tPos >>= 8;;
	    if (s->rNToGo == 0) {
		s->rNToGo = BZ2_rNums[s->rTPos];
		s->rTPos++;
		if (s->rTPos == 512)
		    s->rTPos = 0;
	    }
	    s->rNToGo--;;
	    k1 ^= ((s->rNToGo == 1) ? 1 : 0);
	    s->nblock_used++;
	    if (s->nblock_used == s->save_nblock + 1)
		continue;
	    if (k1 != s->k0) {
		s->k0 = k1;
		continue;
	    };
	    s->tPos = s->tt[s->tPos];
	    k1 = (UChar) (s->tPos & 0xff);
	    s->tPos >>= 8;;
	    if (s->rNToGo == 0) {
		s->rNToGo = BZ2_rNums[s->rTPos];
		s->rTPos++;
		if (s->rTPos == 512)
		    s->rTPos = 0;
	    }
	    s->rNToGo--;;
	    k1 ^= ((s->rNToGo == 1) ? 1 : 0);
	    s->nblock_used++;
	    s->state_out_len = ((Int32) k1) + 4;
	    s->tPos = s->tt[s->tPos];
	    s->k0 = (UChar) (s->tPos & 0xff);
	    s->tPos >>= 8;;
	    if (s->rNToGo == 0) {
		s->rNToGo = BZ2_rNums[s->rTPos];
		s->rTPos++;
		if (s->rTPos == 512)
		    s->rTPos = 0;
	    }
	    s->rNToGo--;;
	    s->k0 ^= ((s->rNToGo == 1) ? 1 : 0);
	    s->nblock_used++;
	}
    } else {
	UInt32 c_calculatedBlockCRC = s->calculatedBlockCRC;
	UChar c_state_out_ch = s->state_out_ch;
	Int32 c_state_out_len = s->state_out_len;
	Int32 c_nblock_used = s->nblock_used;
	Int32 c_k0 = s->k0;
	UInt32 *c_tt = s->tt;
	UInt32 c_tPos = s->tPos;
	char *cs_next_out = s->strm->next_out;
	unsigned int cs_avail_out = s->strm->avail_out;
	UInt32 avail_out_INIT = cs_avail_out;
	Int32 s_save_nblockPP = s->save_nblock + 1;
	unsigned int total_out_lo32_old;
	while (((Bool) 1)) {
	    if (c_state_out_len > 0) {
		while (((Bool) 1)) {
		    if (cs_avail_out == 0)
			goto return_notr;
		    if (c_state_out_len == 1)
			break;
		    *((UChar *) (cs_next_out)) = c_state_out_ch; {
			c_calculatedBlockCRC = (c_calculatedBlockCRC << 8) ^ BZ2_crc32Table[(c_calculatedBlockCRC >> 24) ^ ((UChar) c_state_out_ch)];
		    };
		    c_state_out_len--;
		    cs_next_out++;
		    cs_avail_out--;
		}
	      s_state_out_len_eq_one:{
		    if (cs_avail_out == 0) {
			c_state_out_len = 1;
			goto return_notr;
		    };
		    *((UChar *) (cs_next_out)) = c_state_out_ch; {
			c_calculatedBlockCRC = (c_calculatedBlockCRC << 8) ^ BZ2_crc32Table[(c_calculatedBlockCRC >> 24) ^ ((UChar) c_state_out_ch)];
		    };
		    cs_next_out++;
		    cs_avail_out--;
		}
	    }
	    if (c_nblock_used > s_save_nblockPP)
		return ((Bool) 1);
	    if (c_nblock_used == s_save_nblockPP) {
		c_state_out_len = 0;
		goto return_notr;
	    };
	    c_state_out_ch = c_k0;
	    c_tPos = c_tt[c_tPos];
	    k1 = (UChar) (c_tPos & 0xff);
	    c_tPos >>= 8;;
	    c_nblock_used++;
	    if (k1 != c_k0) {
		c_k0 = k1;
		goto s_state_out_len_eq_one;
	    };
	    if (c_nblock_used == s_save_nblockPP)
		goto s_state_out_len_eq_one;
	    c_state_out_len = 2;
	    c_tPos = c_tt[c_tPos];
	    k1 = (UChar) (c_tPos & 0xff);
	    c_tPos >>= 8;;
	    c_nblock_used++;
	    if (c_nblock_used == s_save_nblockPP)
		continue;
	    if (k1 != c_k0) {
		c_k0 = k1;
		continue;
	    };
	    c_state_out_len = 3;
	    c_tPos = c_tt[c_tPos];
	    k1 = (UChar) (c_tPos & 0xff);
	    c_tPos >>= 8;;
	    c_nblock_used++;
	    if (c_nblock_used == s_save_nblockPP)
		continue;
	    if (k1 != c_k0) {
		c_k0 = k1;
		continue;
	    };
	    c_tPos = c_tt[c_tPos];
	    k1 = (UChar) (c_tPos & 0xff);
	    c_tPos >>= 8;;
	    c_nblock_used++;
	    c_state_out_len = ((Int32) k1) + 4;
	    c_tPos = c_tt[c_tPos];
	    c_k0 = (UChar) (c_tPos & 0xff);
	    c_tPos >>= 8;;
	    c_nblock_used++;
	}
      return_notr:total_out_lo32_old = s->strm->total_out_lo32;
	s->strm->total_out_lo32 += (avail_out_INIT - cs_avail_out);
	if (s->strm->total_out_lo32 < total_out_lo32_old)
	    s->strm->total_out_hi32++;
	s->calculatedBlockCRC = c_calculatedBlockCRC;
	s->state_out_ch = c_state_out_ch;
	s->state_out_len = c_state_out_len;
	s->nblock_used = c_nblock_used;
	s->k0 = c_k0;
	s->tt = c_tt;
	s->tPos = c_tPos;
	s->strm->next_out = cs_next_out;
	s->strm->avail_out = cs_avail_out;
    }
    return ((Bool) 0);
}

__inline__ Int32 BZ2_indexIntoF(Int32 indx, Int32 * cftab)
{
    Int32 nb, na, mid;
    nb = 0;
    na = 256;
    do {
	mid = (nb + na) >> 1;
	if (indx >= cftab[mid])
	    nb = mid;
	else
	    na = mid;
    } while (na - nb != 1);
    return nb;
}

static Bool unRLE_obuf_to_output_SMALL(DState * s)
{
    UChar k1;
    if (s->blockRandomised) {
	while (((Bool) 1)) {
	    while (((Bool) 1)) {
		if (s->strm->avail_out == 0)
		    return ((Bool) 0);
		if (s->state_out_len == 0)
		    break;
		*((UChar *) (s->strm->next_out)) = s->state_out_ch; {
		    s->calculatedBlockCRC = (s->calculatedBlockCRC << 8) ^ BZ2_crc32Table[(s->calculatedBlockCRC >> 24) ^ ((UChar) s->state_out_ch)];
		};
		s->state_out_len--;
		s->strm->next_out++;
		s->strm->avail_out--;
		s->strm->total_out_lo32++;
		if (s->strm->total_out_lo32 == 0)
		    s->strm->total_out_hi32++;
	    }
	    if (s->nblock_used == s->save_nblock + 1)
		return ((Bool) 0);
	    if (s->nblock_used > s->save_nblock + 1)
		return ((Bool) 1);
	    s->state_out_len = 1;
	    s->state_out_ch = s->k0;
	    k1 = BZ2_indexIntoF(s->tPos, s->cftab);
	    s->tPos = (((UInt32) s->ll16[s->tPos]) | (((((UInt32) (s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));;
	    if (s->rNToGo == 0) {
		s->rNToGo = BZ2_rNums[s->rTPos];
		s->rTPos++;
		if (s->rTPos == 512)
		    s->rTPos = 0;
	    }
	    s->rNToGo--;;
	    k1 ^= ((s->rNToGo == 1) ? 1 : 0);
	    s->nblock_used++;
	    if (s->nblock_used == s->save_nblock + 1)
		continue;
	    if (k1 != s->k0) {
		s->k0 = k1;
		continue;
	    };
	    s->state_out_len = 2;
	    k1 = BZ2_indexIntoF(s->tPos, s->cftab);
	    s->tPos = (((UInt32) s->ll16[s->tPos]) | (((((UInt32) (s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));;
	    if (s->rNToGo == 0) {
		s->rNToGo = BZ2_rNums[s->rTPos];
		s->rTPos++;
		if (s->rTPos == 512)
		    s->rTPos = 0;
	    }
	    s->rNToGo--;;
	    k1 ^= ((s->rNToGo == 1) ? 1 : 0);
	    s->nblock_used++;
	    if (s->nblock_used == s->save_nblock + 1)
		continue;
	    if (k1 != s->k0) {
		s->k0 = k1;
		continue;
	    };
	    s->state_out_len = 3;
	    k1 = BZ2_indexIntoF(s->tPos, s->cftab);
	    s->tPos = (((UInt32) s->ll16[s->tPos]) | (((((UInt32) (s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));;
	    if (s->rNToGo == 0) {
		s->rNToGo = BZ2_rNums[s->rTPos];
		s->rTPos++;
		if (s->rTPos == 512)
		    s->rTPos = 0;
	    }
	    s->rNToGo--;;
	    k1 ^= ((s->rNToGo == 1) ? 1 : 0);
	    s->nblock_used++;
	    if (s->nblock_used == s->save_nblock + 1)
		continue;
	    if (k1 != s->k0) {
		s->k0 = k1;
		continue;
	    };
	    k1 = BZ2_indexIntoF(s->tPos, s->cftab);
	    s->tPos = (((UInt32) s->ll16[s->tPos]) | (((((UInt32) (s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));;
	    if (s->rNToGo == 0) {
		s->rNToGo = BZ2_rNums[s->rTPos];
		s->rTPos++;
		if (s->rTPos == 512)
		    s->rTPos = 0;
	    }
	    s->rNToGo--;;
	    k1 ^= ((s->rNToGo == 1) ? 1 : 0);
	    s->nblock_used++;
	    s->state_out_len = ((Int32) k1) + 4;
	    s->k0 = BZ2_indexIntoF(s->tPos, s->cftab);
	    s->tPos = (((UInt32) s->ll16[s->tPos]) | (((((UInt32) (s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));;
	    if (s->rNToGo == 0) {
		s->rNToGo = BZ2_rNums[s->rTPos];
		s->rTPos++;
		if (s->rTPos == 512)
		    s->rTPos = 0;
	    }
	    s->rNToGo--;;
	    s->k0 ^= ((s->rNToGo == 1) ? 1 : 0);
	    s->nblock_used++;
	}
    } else {
	while (((Bool) 1)) {
	    while (((Bool) 1)) {
		if (s->strm->avail_out == 0)
		    return ((Bool) 0);
		if (s->state_out_len == 0)
		    break;
		*((UChar *) (s->strm->next_out)) = s->state_out_ch; {
		    s->calculatedBlockCRC = (s->calculatedBlockCRC << 8) ^ BZ2_crc32Table[(s->calculatedBlockCRC >> 24) ^ ((UChar) s->state_out_ch)];
		};
		s->state_out_len--;
		s->strm->next_out++;
		s->strm->avail_out--;
		s->strm->total_out_lo32++;
		if (s->strm->total_out_lo32 == 0)
		    s->strm->total_out_hi32++;
	    }
	    if (s->nblock_used == s->save_nblock + 1)
		return ((Bool) 0);
	    if (s->nblock_used > s->save_nblock + 1)
		return ((Bool) 1);
	    s->state_out_len = 1;
	    s->state_out_ch = s->k0;
	    k1 = BZ2_indexIntoF(s->tPos, s->cftab);
	    s->tPos = (((UInt32) s->ll16[s->tPos]) | (((((UInt32) (s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));;
	    s->nblock_used++;
	    if (s->nblock_used == s->save_nblock + 1)
		continue;
	    if (k1 != s->k0) {
		s->k0 = k1;
		continue;
	    };
	    s->state_out_len = 2;
	    k1 = BZ2_indexIntoF(s->tPos, s->cftab);
	    s->tPos = (((UInt32) s->ll16[s->tPos]) | (((((UInt32) (s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));;
	    s->nblock_used++;
	    if (s->nblock_used == s->save_nblock + 1)
		continue;
	    if (k1 != s->k0) {
		s->k0 = k1;
		continue;
	    };
	    s->state_out_len = 3;
	    k1 = BZ2_indexIntoF(s->tPos, s->cftab);
	    s->tPos = (((UInt32) s->ll16[s->tPos]) | (((((UInt32) (s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));;
	    s->nblock_used++;
	    if (s->nblock_used == s->save_nblock + 1)
		continue;
	    if (k1 != s->k0) {
		s->k0 = k1;
		continue;
	    };
	    k1 = BZ2_indexIntoF(s->tPos, s->cftab);
	    s->tPos = (((UInt32) s->ll16[s->tPos]) | (((((UInt32) (s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));;
	    s->nblock_used++;
	    s->state_out_len = ((Int32) k1) + 4;
	    s->k0 = BZ2_indexIntoF(s->tPos, s->cftab);
	    s->tPos = (((UInt32) s->ll16[s->tPos]) | (((((UInt32) (s->ll4[(s->tPos) >> 1])) >> (((s->tPos) << 2) & 0x4)) & 0xF) << 16));;
	    s->nblock_used++;
	}
    }
}

int BZ2_bzDecompress(bz_stream * strm)
{
    Bool corrupt;
    DState *s;
    if (strm == ((void *) 0))
	return (-2);
    s = strm->state;
    if (s == ((void *) 0))
	return (-2);
    if (s->strm != strm)
	return (-2);
    while (((Bool) 1)) {
	if (s->state == 1)
	    return (-1);
	if (s->state == 2) {
	    if (s->smallDecompress)
		corrupt = unRLE_obuf_to_output_SMALL(s);
	    else
		corrupt = unRLE_obuf_to_output_FAST(s);
	    if (corrupt)
		return (-4);
	    if (s->nblock_used == s->save_nblock + 1 && s->state_out_len == 0) { {
		    s->calculatedBlockCRC = ~(s->calculatedBlockCRC);
	    };
	    if (s->verbosity >= 3)
		fprintf(stderr, " {0x%08x, 0x%08x}", s->storedBlockCRC, s->calculatedBlockCRC);
		if (s->verbosity >= 2)
		    fprintf(stderr, "]");
		if (s->calculatedBlockCRC != s->storedBlockCRC)
		    return (-4);
		s->calculatedCombinedCRC = (s->calculatedCombinedCRC << 1) | (s->calculatedCombinedCRC >> 31);
		s->calculatedCombinedCRC ^= s->calculatedBlockCRC;
		s->state = 14;
	    } else {
		return 0;
	    }
	}
	if (s->state >= 10) {
	    Int32 r = BZ2_decompress(s);
	    if (r == 4) {
		if (s->verbosity >= 3)
		    fprintf(stderr, "\n    combined CRCs: stored = 0x%08x, computed = 0x%08x", s->storedCombinedCRC, s->calculatedCombinedCRC);
		if (s->calculatedCombinedCRC != s->storedCombinedCRC)
		    return (-4);
		return r;
	    }
	    if (s->state != 2)
		return r;
	}
    }
    {
	if (!(0))
	    BZ2_bz__AssertH__fail(6001);
    };
    return 0;
}

int BZ2_bzDecompressEnd(bz_stream * strm)
{
    DState *s;
    if (strm == ((void *) 0))
	return (-2);
    s = strm->state;
    if (s == ((void *) 0))
	return (-2);
    if (s->strm != strm)
	return (-2);
    if (s->tt != ((void *) 0))
	(strm->bzfree) (strm->opaque, (s->tt));
    if (s->ll16 != ((void *) 0))
	(strm->bzfree) (strm->opaque, (s->ll16));
    if (s->ll4 != ((void *) 0))
	(strm->bzfree) (strm->opaque, (s->ll4));
    (strm->bzfree) (strm->opaque, (strm->state));
    strm->state = ((void *) 0);
    return 0;
}

typedef struct {
    FILE *handle;
    Char buf[5000];
    Int32 bufN;
    Bool writing;
    bz_stream strm;
    Int32 lastErr;
    Bool initialisedOk;
} bzFile;
static Bool myfeof(FILE * f)
{
    Int32 c = fgetc(f);
    if (c == (-1))
	return ((Bool) 1);
    ungetc(c, f);
    return ((Bool) 0);
}

BZFILE *BZ2_bzWriteOpen(int *bzerror, FILE * f, int blockSize100k, int verbosity, int workFactor)
{
    Int32 ret;
    bzFile *bzf = ((void *) 0); {
	if (bzerror != ((void *) 0))
	    *bzerror = 0;
	if (bzf != ((void *) 0))
	    bzf->lastErr = 0;
    };
    if (f == ((void *) 0) || (blockSize100k < 1 || blockSize100k > 9) || (workFactor < 0 || workFactor > 250) || (verbosity < 0 || verbosity > 4)) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-2);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-2);
    };
    return ((void *) 0);
    };
    if (ferror(f)) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-6);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-6);
    };
    return ((void *) 0);
    };
    bzf = malloc(sizeof(bzFile));
    if (bzf == ((void *) 0)) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-3);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-3);
    };
    return ((void *) 0);
    }; {
	if (bzerror != ((void *) 0))
	    *bzerror = 0;
	if (bzf != ((void *) 0))
	    bzf->lastErr = 0;
    };
    bzf->initialisedOk = ((Bool) 0);
    bzf->bufN = 0;
    bzf->handle = f;
    bzf->writing = ((Bool) 1);
    bzf->strm.bzalloc = ((void *) 0);
    bzf->strm.bzfree = ((void *) 0);
    bzf->strm.opaque = ((void *) 0);
    if (workFactor == 0)
	workFactor = 30;
    ret = BZ2_bzCompressInit(&(bzf->strm), blockSize100k, verbosity, workFactor);
    if (ret != 0) { {
	    if (bzerror != ((void *) 0))
		*bzerror = ret;
	    if (bzf != ((void *) 0))
		bzf->lastErr = ret;
    };
    free(bzf);
    return ((void *) 0);
    };
    bzf->strm.avail_in = 0;
    bzf->initialisedOk = ((Bool) 1);
    return bzf;
}

void BZ2_bzWrite(int *bzerror, BZFILE * b, void *buf, int len)
{
    Int32 n, n2, ret;
    bzFile *bzf = (bzFile *) b; {
	if (bzerror != ((void *) 0))
	    *bzerror = 0;
	if (bzf != ((void *) 0))
	    bzf->lastErr = 0;
    };
    if (bzf == ((void *) 0) || buf == ((void *) 0) || len < 0) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-2);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-2);
    };
    return;
    };
    if (!(bzf->writing)) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-1);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-1);
    };
    return;
    };
    if (ferror(bzf->handle)) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-6);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-6);
    };
    return;
    };
    if (len == 0) { {
	    if (bzerror != ((void *) 0))
		*bzerror = 0;
	    if (bzf != ((void *) 0))
		bzf->lastErr = 0;
    };
    return;
    };
    bzf->strm.avail_in = len;
    bzf->strm.next_in = buf;
    while (((Bool) 1)) {
	bzf->strm.avail_out = 5000;
	bzf->strm.next_out = bzf->buf;
	ret = BZ2_bzCompress(&(bzf->strm), 0);
	if (ret != 1) { {
		if (bzerror != ((void *) 0))
		    *bzerror = ret;
		if (bzf != ((void *) 0))
		    bzf->lastErr = ret;
	};
	return;
	};
	if (bzf->strm.avail_out < 5000) {
	    n = 5000 - bzf->strm.avail_out;
	    n2 = fwrite((void *) (bzf->buf), sizeof(UChar), n, bzf->handle);
	    if (n != n2 || ferror(bzf->handle)) { {
		    if (bzerror != ((void *) 0))
			*bzerror = (-6);
		    if (bzf != ((void *) 0))
			bzf->lastErr = (-6);
	    };
	    return;
	    };
	}
	if (bzf->strm.avail_in == 0) { {
		if (bzerror != ((void *) 0))
		    *bzerror = 0;
		if (bzf != ((void *) 0))
		    bzf->lastErr = 0;
	};
	return;
	};
    }
}

void BZ2_bzWriteClose(int *bzerror, BZFILE * b, int abandon, unsigned int *nbytes_in, unsigned int *nbytes_out)
{
    BZ2_bzWriteClose64(bzerror, b, abandon, nbytes_in, ((void *) 0), nbytes_out, ((void *) 0));
} void BZ2_bzWriteClose64(int *bzerror, BZFILE * b, int abandon, unsigned int *nbytes_in_lo32, unsigned int *nbytes_in_hi32, unsigned int *nbytes_out_lo32, unsigned int *nbytes_out_hi32)
{
    Int32 n, n2, ret;
    bzFile *bzf = (bzFile *) b;
    if (bzf == ((void *) 0)) { {
	    if (bzerror != ((void *) 0))
		*bzerror = 0;
	    if (bzf != ((void *) 0))
		bzf->lastErr = 0;
    };
    return;
    };
    if (!(bzf->writing)) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-1);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-1);
    };
    return;
    };
    if (ferror(bzf->handle)) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-6);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-6);
    };
    return;
    };
    if (nbytes_in_lo32 != ((void *) 0))
	*nbytes_in_lo32 = 0;
    if (nbytes_in_hi32 != ((void *) 0))
	*nbytes_in_hi32 = 0;
    if (nbytes_out_lo32 != ((void *) 0))
	*nbytes_out_lo32 = 0;
    if (nbytes_out_hi32 != ((void *) 0))
	*nbytes_out_hi32 = 0;
    if ((!abandon) && bzf->lastErr == 0) {
	while (((Bool) 1)) {
	    bzf->strm.avail_out = 5000;
	    bzf->strm.next_out = bzf->buf;
	    ret = BZ2_bzCompress(&(bzf->strm), 2);
	    if (ret != 3 && ret != 4) { {
		    if (bzerror != ((void *) 0))
			*bzerror = ret;
		    if (bzf != ((void *) 0))
			bzf->lastErr = ret;
	    };
	    return;
	    };
	    if (bzf->strm.avail_out < 5000) {
		n = 5000 - bzf->strm.avail_out;
		n2 = fwrite((void *) (bzf->buf), sizeof(UChar), n, bzf->handle);
		if (n != n2 || ferror(bzf->handle)) { {
			if (bzerror != ((void *) 0))
			    *bzerror = (-6);
			if (bzf != ((void *) 0))
			    bzf->lastErr = (-6);
		};
		return;
		};
	    }
	    if (ret == 4)
		break;
	}
    }
    if (!abandon && !ferror(bzf->handle)) {
	fflush(bzf->handle);
	if (ferror(bzf->handle)) { {
		if (bzerror != ((void *) 0))
		    *bzerror = (-6);
		if (bzf != ((void *) 0))
		    bzf->lastErr = (-6);
	};
	return;
	};
    }
    if (nbytes_in_lo32 != ((void *) 0))
	*nbytes_in_lo32 = bzf->strm.total_in_lo32;
    if (nbytes_in_hi32 != ((void *) 0))
	*nbytes_in_hi32 = bzf->strm.total_in_hi32;
    if (nbytes_out_lo32 != ((void *) 0))
	*nbytes_out_lo32 = bzf->strm.total_out_lo32;
    if (nbytes_out_hi32 != ((void *) 0))
	*nbytes_out_hi32 = bzf->strm.total_out_hi32; {
	if (bzerror != ((void *) 0))
	    *bzerror = 0;
	if (bzf != ((void *) 0))
	    bzf->lastErr = 0;
	};
	BZ2_bzCompressEnd(&(bzf->strm));
	free(bzf);
} 
// complexity is O(n) inferred by loopus
BZFILE *BZ2_bzReadOpen(int *bzerror, FILE * f, int verbosity, int small, void *unused, int nUnused)
{
    bzFile *bzf = ((void *) 0);
    int ret; {
	if (bzerror != ((void *) 0))
	    *bzerror = 0;
	if (bzf != ((void *) 0))
	    bzf->lastErr = 0;
    };
    if (f == ((void *) 0) || (small != 0 && small != 1) || (verbosity < 0 || verbosity > 4) || (unused == ((void *) 0) && nUnused != 0) || (unused != ((void *) 0) && (nUnused < 0 || nUnused > 5000))) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-2);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-2);
    };
    return ((void *) 0);
    };
    if (ferror(f)) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-6);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-6);
    };
    return ((void *) 0);
    };
    bzf = malloc(sizeof(bzFile));
    if (bzf == ((void *) 0)) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-3);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-3);
    };
    return ((void *) 0);
    }; {
	if (bzerror != ((void *) 0))
	    *bzerror = 0;
	if (bzf != ((void *) 0))
	    bzf->lastErr = 0;
    };
    bzf->initialisedOk = ((Bool) 0);
    bzf->handle = f;
    bzf->bufN = 0;
    bzf->writing = ((Bool) 0);
    bzf->strm.bzalloc = ((void *) 0);
    bzf->strm.bzfree = ((void *) 0);
    bzf->strm.opaque = ((void *) 0);
    while (nUnused > 0) {
	bzf->buf[bzf->bufN] = *((UChar *) (unused));
	bzf->bufN++;
	unused = ((void *) (1 + ((UChar *) (unused))));
	nUnused--;
    } ret = BZ2_bzDecompressInit(&(bzf->strm), verbosity, small);
    if (ret != 0) { {
	    if (bzerror != ((void *) 0))
		*bzerror = ret;
	    if (bzf != ((void *) 0))
		bzf->lastErr = ret;
    };
    free(bzf);
    return ((void *) 0);
    };
    bzf->strm.avail_in = bzf->bufN;
    bzf->strm.next_in = bzf->buf;
    bzf->initialisedOk = ((Bool) 1);
    return bzf;
}

void BZ2_bzReadClose(int *bzerror, BZFILE * b)
{
    bzFile *bzf = (bzFile *) b; {
	if (bzerror != ((void *) 0))
	    *bzerror = 0;
	if (bzf != ((void *) 0))
	    bzf->lastErr = 0;
    };
    if (bzf == ((void *) 0)) { {
	    if (bzerror != ((void *) 0))
		*bzerror = 0;
	    if (bzf != ((void *) 0))
		bzf->lastErr = 0;
    };
    return;
    };
    if (bzf->writing) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-1);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-1);
    };
    return;
    };
    if (bzf->initialisedOk)
	(void) BZ2_bzDecompressEnd(&(bzf->strm));
    free(bzf);
} int BZ2_bzRead(int *bzerror, BZFILE * b, void *buf, int len)
{
    Int32 n, ret;
    bzFile *bzf = (bzFile *) b; {
	if (bzerror != ((void *) 0))
	    *bzerror = 0;
	if (bzf != ((void *) 0))
	    bzf->lastErr = 0;
    };
    if (bzf == ((void *) 0) || buf == ((void *) 0) || len < 0) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-2);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-2);
    };
    return 0;
    };
    if (bzf->writing) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-1);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-1);
    };
    return 0;
    };
    if (len == 0) { {
	    if (bzerror != ((void *) 0))
		*bzerror = 0;
	    if (bzf != ((void *) 0))
		bzf->lastErr = 0;
    };
    return 0;
    };
    bzf->strm.avail_out = len;
    bzf->strm.next_out = buf;
    while (((Bool) 1)) {
	if (ferror(bzf->handle)) { {
		if (bzerror != ((void *) 0))
		    *bzerror = (-6);
		if (bzf != ((void *) 0))
		    bzf->lastErr = (-6);
	};
	return 0;
	};
	if (bzf->strm.avail_in == 0 && !myfeof(bzf->handle)) {
	    n = fread(bzf->buf, sizeof(UChar), 5000, bzf->handle);
	    if (ferror(bzf->handle)) { {
		    if (bzerror != ((void *) 0))
			*bzerror = (-6);
		    if (bzf != ((void *) 0))
			bzf->lastErr = (-6);
	    };
	    return 0;
	    };
	    bzf->bufN = n;
	    bzf->strm.avail_in = bzf->bufN;
	    bzf->strm.next_in = bzf->buf;
	}
	ret = BZ2_bzDecompress(&(bzf->strm));
	if (ret != 0 && ret != 4) { {
		if (bzerror != ((void *) 0))
		    *bzerror = ret;
		if (bzf != ((void *) 0))
		    bzf->lastErr = ret;
	};
	return 0;
	};
	if (ret == 0 && myfeof(bzf->handle) && bzf->strm.avail_in == 0 && bzf->strm.avail_out > 0) { {
		if (bzerror != ((void *) 0))
		    *bzerror = (-7);
		if (bzf != ((void *) 0))
		    bzf->lastErr = (-7);
	};
	return 0;
	};
	if (ret == 4) { {
		if (bzerror != ((void *) 0))
		    *bzerror = 4;
		if (bzf != ((void *) 0))
		    bzf->lastErr = 4;
	};
	return len - bzf->strm.avail_out;
	};
	if (bzf->strm.avail_out == 0) { {
		if (bzerror != ((void *) 0))
		    *bzerror = 0;
		if (bzf != ((void *) 0))
		    bzf->lastErr = 0;
	};
	return len;
	};
    }
    return 0;
}

void BZ2_bzReadGetUnused(int *bzerror, BZFILE * b, void **unused, int *nUnused)
{
    bzFile *bzf = (bzFile *) b;
    if (bzf == ((void *) 0)) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-2);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-2);
    };
    return;
    };
    if (bzf->lastErr != 4) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-1);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-1);
    };
    return;
    };
    if (unused == ((void *) 0) || nUnused == ((void *) 0)) { {
	    if (bzerror != ((void *) 0))
		*bzerror = (-2);
	    if (bzf != ((void *) 0))
		bzf->lastErr = (-2);
    };
    return;
    }; {
	if (bzerror != ((void *) 0))
	    *bzerror = 0;
	if (bzf != ((void *) 0))
	    bzf->lastErr = 0;
    };
    *nUnused = bzf->strm.avail_in;
    *unused = bzf->strm.next_in;
} int BZ2_bzBuffToBuffCompress(char *dest, unsigned int *destLen, char *source, unsigned int sourceLen, int blockSize100k, int verbosity, int workFactor)
{
    bz_stream strm;
    int ret;
    if (dest == ((void *) 0) || destLen == ((void *) 0) || source == ((void *) 0) || blockSize100k < 1 || blockSize100k > 9 || verbosity < 0 || verbosity > 4 || workFactor < 0 || workFactor > 250)
	return (-2);
    if (workFactor == 0)
	workFactor = 30;
    strm.bzalloc = ((void *) 0);
    strm.bzfree = ((void *) 0);
    strm.opaque = ((void *) 0);
    ret = BZ2_bzCompressInit(&strm, blockSize100k, verbosity, workFactor);
    if (ret != 0)
	return ret;
    strm.next_in = source;
    strm.next_out = dest;
    strm.avail_in = sourceLen;
    strm.avail_out = *destLen;
    ret = BZ2_bzCompress(&strm, 2);
    if (ret == 3)
	goto output_overflow;
    if (ret != 4)
	goto errhandler;
    *destLen -= strm.avail_out;
    BZ2_bzCompressEnd(&strm);
    return 0;
  output_overflow:BZ2_bzCompressEnd(&strm);
    return (-8);
  errhandler:BZ2_bzCompressEnd(&strm);
    return ret;
}

int BZ2_bzBuffToBuffDecompress(char *dest, unsigned int *destLen, char *source, unsigned int sourceLen, int small, int verbosity)
{
    bz_stream strm;
    int ret;
    if (dest == ((void *) 0) || destLen == ((void *) 0) || source == ((void *) 0) || (small != 0 && small != 1) || verbosity < 0 || verbosity > 4)
	return (-2);
    strm.bzalloc = ((void *) 0);
    strm.bzfree = ((void *) 0);
    strm.opaque = ((void *) 0);
    ret = BZ2_bzDecompressInit(&strm, verbosity, small);
    if (ret != 0)
	return ret;
    strm.next_in = source;
    strm.next_out = dest;
    strm.avail_in = sourceLen;
    strm.avail_out = *destLen;
    ret = BZ2_bzDecompress(&strm);
    if (ret == 0)
	goto output_overflow_or_eof;
    if (ret != 4)
	goto errhandler;
    *destLen -= strm.avail_out;
    BZ2_bzDecompressEnd(&strm);
    return 0;
  output_overflow_or_eof:if (strm.avail_out > 0) {
	BZ2_bzDecompressEnd(&strm);
	return (-7);
    } else {
	BZ2_bzDecompressEnd(&strm);
	return (-8);
    };
  errhandler:BZ2_bzDecompressEnd(&strm);
    return ret;
}

const char *BZ2_bzlibVersion(void)
{
    return "1.0.4, 20-Dec-2006";
}

static BZFILE *bzopen_or_bzdopen(const char *path, int fd, const char *mode, int open_mode)
{
    int bzerr;
    char unused[5000];
    int blockSize100k = 9;
    int writing = 0;
    char mode2[10] = "";
    FILE *fp = ((void *) 0);
    BZFILE *bzfp = ((void *) 0);
    int verbosity = 0;
    int workFactor = 30;
    int smallMode = 0;
    int nUnused = 0;
    if (mode == ((void *) 0))
	return ((void *) 0);
    while (*mode) {
	switch (*mode) {
	case 'r':
	    writing = 0;
	    break;
	case 'w':
	    writing = 1;
	    break;
	case 's':
	    smallMode = 1;
	    break;
	default:
	    if (((*__ctype_b_loc())[(int) (((int) (*mode)))] & (unsigned short int) _ISdigit)) {
		blockSize100k = *mode - 0x30;
	    }
	} mode++;
    } strcat(mode2, writing ? "w" : "r");
    strcat(mode2, "b");
    if (open_mode == 0) {
	if (path == ((void *) 0) || strcmp(path, "") == 0) {
	    fp = (writing ? stdout : stdin);;
	} else {
	    fp = fopen(path, mode2);
	}
    } else {
	fp = fdopen(fd, mode2);
    }
    if (fp == ((void *) 0))
	return ((void *) 0);
    if (writing) {
	if (blockSize100k < 1)
	    blockSize100k = 1;
	if (blockSize100k > 9)
	    blockSize100k = 9;
	bzfp = BZ2_bzWriteOpen(&bzerr, fp, blockSize100k, verbosity, workFactor);
    } else {
	bzfp = BZ2_bzReadOpen(&bzerr, fp, verbosity, smallMode, unused, nUnused);
    }
    if (bzfp == ((void *) 0)) {
	if (fp != stdin && fp != stdout)
	    fclose(fp);
	return ((void *) 0);
    }
    return bzfp;
}

BZFILE *BZ2_bzopen(const char *path, const char *mode)
{
    return bzopen_or_bzdopen(path, -1, mode, 0);
}

BZFILE *BZ2_bzdopen(int fd, const char *mode)
{
    return bzopen_or_bzdopen(((void *) 0), fd, mode, 1);
} /*int BZ2_bzread(BZFILE * b, void *buf, int len)
{
    int bzerr, nread;
    if (((bzFile *) b)->lastErr == 4)
	return 0;
    nread = BZ2_bzRead(&bzerr, b, buf, len);
    if (bzerr == 0 || bzerr == 4) {
	return nread;
    } else {
	return -1;
    }
}

int BZ2_bzwrite(BZFILE * b, void *buf, int len)
{
    int bzerr;
    BZ2_bzWrite(&bzerr, b, buf, len);
    if (bzerr == 0) {
	return len;
    } else {
	return -1;
    }
}*/

int BZ2_bzflush(BZFILE * b)
{
    return 0;
}

void BZ2_bzclose(BZFILE * b)
{
    int bzerr;
    FILE *fp;
    if (b == ((void *) 0)) {
	return;
    }
    fp = ((bzFile *) b)->handle;
    if (((bzFile *) b)->writing) {
	BZ2_bzWriteClose(&bzerr, b, 0, ((void *) 0), ((void *) 0));
	if (bzerr != 0) {
	    BZ2_bzWriteClose(((void *) 0), b, 1, ((void *) 0), ((void *) 0));
	}
    } else {
	BZ2_bzReadClose(&bzerr, b);
    }
    if (fp != stdin && fp != stdout) {
	fclose(fp);
    }
}
static const char *bzerrorstrings[] = { "OK", "SEQUENCE_ERROR", "PARAM_ERROR", "MEM_ERROR", "DATA_ERROR", "DATA_ERROR_MAGIC", "IO_ERROR", "UNEXPECTED_EOF", "OUTBUFF_FULL", "CONFIG_ERROR", "???", "???", "???", "???", "???", "???" };

const char *BZ2_bzerror(BZFILE * b, int *errnum)
{
    int err = ((bzFile *) b)->lastErr;
    if (err > 0)
	err = 0;
    *errnum = err;
    return bzerrorstrings[err * -1];
}
