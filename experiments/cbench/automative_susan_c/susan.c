typedef int TOTAL_TYPE;
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
typedef unsigned char uchar;
typedef struct {
    int x, y, info, dx, dy, I;
} CORNER_LIST[15000];
void usage(void)
{
    printf("Usage: susan <in.pgm> <out.pgm> [options]\n\n");
    printf("-s : Smoothing mode (default)\n");
    printf("-e : Edges mode\n");
    printf("-c : Corners mode\n\n");
    printf("See source code for more information about setting the thresholds\n");
    printf("-t <thresh> : Brightness threshold, all modes (default=20)\n");
    printf("-d <thresh> : Distance threshold, smoothing mode, (default=4) (use next option instead for flat 3x3 mask)\n");
    printf("-3 : Use flat 3x3 mask, edges or smoothing mode\n");
    printf("-n : No post-processing on the binary edge map (runs much faster); edges mode\n");
    printf("-q : Use faster (and usually stabler) corner mode; edge-like corner suppression not carried out; corners mode\n");
    printf("-b : Mark corners/edges with single black points instead of black with white border; corners or edges mode\n");
    printf("-p : Output initial enhancement image only; corners or edges mode (default is edges mode)\n");
    printf("\nSUSAN Version 2l (C) 1995-1997 Stephen Smith, DRA UK. steve@fmrib.ox.ac.uk\n");
    exit(0);
} int getint(FILE * fd)
{
    int c, i;
    char dummy[10000];
    c = _IO_getc(fd);
    while (1) {
	if (c == '#')
	    fgets(dummy, 9000, fd);
	if (c == (-1)) {
	    fprintf(stderr, "Image %s not binary PGM.\n", "is");
	    exit(0);
	};
	if (c >= '0' && c <= '9')
	    break;
	c = _IO_getc(fd);
    }
    i = 0;
    while (1) {
	i = (i * 10) + (c - '0');
	c = _IO_getc(fd);
	if (c == (-1))
	    return (i);
	if (c < '0' || c > '9')
	    break;
    }
    return (i);
}

void get_image(char filename[200], unsigned char **in, int *x_size, int *y_size)
{
    FILE *fd;
    char header[100];
    int tmp;
    if ((fd = fopen(filename, "r")) == ((void *) 0)) {
	fprintf(stderr, "Can't input image %s.\n", filename);
	exit(0);
    };
    header[0] = fgetc(fd);
    header[1] = fgetc(fd);
    if (!(header[0] == 'P' && header[1] == '5')) {
	fprintf(stderr, "Image %s does not have binary PGM header.\n", filename);
	exit(0);
    };
    *x_size = getint(fd);
    *y_size = getint(fd);
    tmp = getint(fd);
    *in = (uchar *) malloc(*x_size * *y_size);
    if (fread(*in, 1, *x_size * *y_size, fd) == 0) {
	fprintf(stderr, "Image %s is wrong size.\n", filename);
	exit(0);
    };
    fclose(fd);
}

void put_image(char filename[100], char *in, int x_size, int y_size)
{
    FILE *fd;
    if ((fd = fopen(filename, "w")) == ((void *) 0)) {
	fprintf(stderr, "Can't output image%s.\n", filename);
	exit(0);
    };
    fprintf(fd, "P5\n");
    fprintf(fd, "%d %d\n", x_size, y_size);
    fprintf(fd, "255\n");
    if (fwrite(in, x_size * y_size, 1, fd) != 1) {
	fprintf(stderr, "Can't write image %s.\n", filename);
	exit(0);
    };
    fclose(fd);
}

void int_to_uchar(int *r, uchar * in, int size)
{
    int i, max_r = r[0], min_r = r[0];
    for (i = 0; i < size; i++) {
	if (r[i] > max_r)
	    max_r = r[i];
	if (r[i] < min_r)
	    min_r = r[i];
    }
    max_r -= min_r;
    for (i = 0; i < size; i++)
	in[i] = (uchar) ((int) ((int) (r[i] - min_r) * 255) / max_r);
} void setup_brightness_lut(uchar ** bp, int thresh, int form)
{
    int k;
    double temp;
    *bp = (unsigned char *) malloc(516);
    *bp = *bp + 258;
    for (k = -256; k < 257; k++) {
	temp = ((float) k) / ((float) thresh);
	temp = temp * temp;
	if (form == 6)
	    temp = temp * temp * temp;
	temp = 100.0 * exp(-temp);
	*(*bp + k) = (uchar) temp;
    }
}

void free_brightness_lut(uchar * bp)
{
    free(bp - 258);
} void susan_principle(uchar * in, int *r, uchar * bp, int max_no, int x_size, int y_size)
{
    int i, j, n;
    uchar *p, *cp;
    memset(r, 0, x_size * y_size * sizeof(int));
    for (i = 3; i < y_size - 3; i++)
	for (j = 3; j < x_size - 3; j++) {
	    n = 100;
	    p = in + (i - 3) * x_size + j - 1;
	    cp = bp + in[i * x_size + j];
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 3;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 5;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 6;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += 2;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 6;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 5;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 3;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    if (n <= max_no)
		r[i * x_size + j] = max_no - n;
	}
}

void susan_principle_small(uchar * in, int *r, uchar * bp, int max_no, int x_size, int y_size)
{
    int i, j, n;
    uchar *p, *cp;
    memset(r, 0, x_size * y_size * sizeof(int));
    max_no = 730;
    for (i = 1; i < y_size - 1; i++)
	for (j = 1; j < x_size - 1; j++) {
	    n = 100;
	    p = in + (i - 1) * x_size + j - 1;
	    cp = bp + in[i * x_size + j];
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 2;
	    n += *(cp - *p);
	    p += 2;
	    n += *(cp - *p);
	    p += x_size - 2;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    if (n <= max_no)
		r[i * x_size + j] = max_no - n;
	}
}

uchar median(uchar * in, int i, int j, int x_size)
{
    int p[8], k, l, tmp;
    p[0] = in[(i - 1) * x_size + j - 1];
    p[1] = in[(i - 1) * x_size + j];
    p[2] = in[(i - 1) * x_size + j + 1];
    p[3] = in[(i) * x_size + j - 1];
    p[4] = in[(i) * x_size + j + 1];
    p[5] = in[(i + 1) * x_size + j - 1];
    p[6] = in[(i + 1) * x_size + j];
    p[7] = in[(i + 1) * x_size + j + 1];
    for (k = 0; k < 7; k++)
	for (l = 0; l < (7 - k); l++)
	    if (p[l] > p[l + 1]) {
		tmp = p[l];
		p[l] = p[l + 1];
		p[l + 1] = tmp;
	    }
    return ((p[3] + p[4]) / 2);
}

//complexity is O(n^2) inferred by loopus
void enlarge(uchar ** in, uchar * tmp_image, int *x_size, int *y_size, int border)
{
    int i, j;
    for (i = 0; i < *y_size; i++)
	memcpy(tmp_image + (i + border) * (*x_size + 2 * border) + border, *in + i * *x_size, *x_size);
    for (i = 0; i < border; i++) {
	memcpy(tmp_image + (border - 1 - i) * (*x_size + 2 * border) + border, *in + i * *x_size, *x_size);
	memcpy(tmp_image + (*y_size + border + i) * (*x_size + 2 * border) + border, *in + (*y_size - i - 1) * *x_size, *x_size);
    }
    for (i = 0; i < border; i++)
	for (j = 0; j < *y_size + 2 * border; j++) {
	    tmp_image[j * (*x_size + 2 * border) + border - 1 - i] = tmp_image[j * (*x_size + 2 * border) + border + i];
	    tmp_image[j * (*x_size + 2 * border) + *x_size + border + i] = tmp_image[j * (*x_size + 2 * border) + *x_size + border - 1 - i];
	}
    *x_size += 2 * border;
    *y_size += 2 * border;
    *in = tmp_image;
}

// complexity is O(n^4) inferred by loopus
void susan_smoothing(int three_by_three, uchar * in, float dt, int x_size, int y_size, uchar * bp)
{
    float temp;
    int n_max, increment, mask_size, i, j, x, y, area, brightness, tmp, centre;
    uchar *ip, *dp, *dpt, *cp, *out = in, *tmp_image;
    TOTAL_TYPE total;
    if (three_by_three == 0)
	mask_size = ((int) (1.5 * dt)) + 1;
    else
	mask_size = 1;
    total = 0.1;
    if ((dt > 15) && (total == 0)) {
	printf("Distance_thresh (%f) too big for integer arithmetic.\n", dt);
	printf("Either reduce it to <=15 or recompile with variable \"total\"\n");
	printf("as a float: see top \"defines\" section.\n");
	exit(0);
    }
    if ((2 * mask_size + 1 > x_size) || (2 * mask_size + 1 > y_size)) {
	printf("Mask size (1.5*distance_thresh+1=%d) too big for image (%dx%d).\n", mask_size, x_size, y_size);
	exit(0);
    }
    tmp_image = (uchar *) malloc((x_size + mask_size * 2) * (y_size + mask_size * 2));
    enlarge(&in, tmp_image, &x_size, &y_size, mask_size);
    if (three_by_three == 0) {
	n_max = (mask_size * 2) + 1;
	increment = x_size - n_max;
	dp = (unsigned char *) malloc(n_max * n_max);
	dpt = dp;
	temp = -(dt * dt);
	for (i = -mask_size; i <= mask_size; i++)
	    for (j = -mask_size; j <= mask_size; j++) {
		x = (int) (100.0 * exp(((float) ((i * i) + (j * j))) / temp));
		*dpt++ = (unsigned char) x;
	} for (i = mask_size; i < y_size - mask_size; i++) {
	    for (j = mask_size; j < x_size - mask_size; j++) {
		area = 0;
		total = 0;
		dpt = dp;
		ip = in + ((i - mask_size) * x_size) + j - mask_size;
		centre = in[i * x_size + j];
		cp = bp + centre;
		for (y = -mask_size; y <= mask_size; y++) {
		    for (x = -mask_size; x <= mask_size; x++) {
			brightness = *ip++;
			tmp = *dpt++ * *(cp - brightness);
			area += tmp;
			total += tmp * brightness;
		    }
		    ip += increment;
		}
		tmp = area - 10000;
		if (tmp == 0)
		    *out++ = median(in, i, j, x_size);
		else
		    *out++ = ((total - (centre * 10000)) / tmp);
	    }
	}
	free(dp);
    } else {
	for (i = 1; i < y_size - 1; i++) {
	    for (j = 1; j < x_size - 1; j++) {
		area = 0;
		total = 0;
		ip = in + ((i - 1) * x_size) + j - 1;
		centre = in[i * x_size + j];
		cp = bp + centre;
		brightness = *ip++;
		tmp = *(cp - brightness);
		area += tmp;
		total += tmp * brightness;
		brightness = *ip++;
		tmp = *(cp - brightness);
		area += tmp;
		total += tmp * brightness;
		brightness = *ip;
		tmp = *(cp - brightness);
		area += tmp;
		total += tmp * brightness;
		ip += x_size - 2;
		brightness = *ip++;
		tmp = *(cp - brightness);
		area += tmp;
		total += tmp * brightness;
		brightness = *ip++;
		tmp = *(cp - brightness);
		area += tmp;
		total += tmp * brightness;
		brightness = *ip;
		tmp = *(cp - brightness);
		area += tmp;
		total += tmp * brightness;
		ip += x_size - 2;
		brightness = *ip++;
		tmp = *(cp - brightness);
		area += tmp;
		total += tmp * brightness;
		brightness = *ip++;
		tmp = *(cp - brightness);
		area += tmp;
		total += tmp * brightness;
		brightness = *ip;
		tmp = *(cp - brightness);
		area += tmp;
		total += tmp * brightness;
		tmp = area - 100;
		if (tmp == 0)
		    *out++ = median(in, i, j, x_size);
		else
		    *out++ = (total - (centre * 100)) / tmp;
	    }
	}
    }
}

// complexity is O(n^2) inferred by loopus
void edge_draw(uchar * in, uchar * mid, int x_size, int y_size, int drawing_mode)
{
    int i;
    uchar *inp, *midp;
    if (drawing_mode == 0) {
	midp = mid;
	for (i = 0; i < x_size * y_size; i++) {
	    if (*midp < 8) {
		inp = in + (midp - mid) - x_size - 1;
		*inp++ = 255;
		*inp++ = 255;
		*inp = 255;
		inp += x_size - 2;
		*inp++ = 255;
		inp++;
		*inp = 255;
		inp += x_size - 2;
		*inp++ = 255;
		*inp++ = 255;
		*inp = 255;
	    }
	    midp++;
	}
    }
    midp = mid;
    for (i = 0; i < x_size * y_size; i++) {
	if (*midp < 8)
	    *(in + (midp - mid)) = 0;
	midp++;
    }
}

void susan_thin(int *r, uchar * mid, int x_size, int y_size)
{
    int l[9], centre, b01, b12, b21, b10, p1, p2, p3, p4, b00, b02, b20, b22, m, n, a = 0, b = 0, x, y, i, j;
    uchar *mp;
    for (i = 4; i < y_size - 4; i++)
	for (j = 4; j < x_size - 4; j++)
	    if (mid[i * x_size + j] < 8) {
		centre = r[i * x_size + j];
		mp = mid + (i - 1) * x_size + j - 1;
		n = (*mp < 8) + (*(mp + 1) < 8) + (*(mp + 2) < 8) + (*(mp + x_size) < 8) + (*(mp + x_size + 2) < 8) + (*(mp + x_size + x_size) < 8) + (*(mp + x_size + x_size + 1) < 8) + (*(mp + x_size + x_size + 2) < 8);
		if (n == 0)
		    mid[i * x_size + j] = 100;
		if ((n == 1) && (mid[i * x_size + j] < 6)) {
		    l[0] = r[(i - 1) * x_size + j - 1];
		    l[1] = r[(i - 1) * x_size + j];
		    l[2] = r[(i - 1) * x_size + j + 1];
		    l[3] = r[(i) * x_size + j - 1];
		    l[4] = 0;
		    l[5] = r[(i) * x_size + j + 1];
		    l[6] = r[(i + 1) * x_size + j - 1];
		    l[7] = r[(i + 1) * x_size + j];
		    l[8] = r[(i + 1) * x_size + j + 1];
		    if (mid[(i - 1) * x_size + j - 1] < 8) {
			l[0] = 0;
			l[1] = 0;
			l[3] = 0;
			l[2] *= 2;
			l[6] *= 2;
			l[5] *= 3;
			l[7] *= 3;
			l[8] *= 4;
		    } else {
			if (mid[(i - 1) * x_size + j] < 8) {
			    l[1] = 0;
			    l[0] = 0;
			    l[2] = 0;
			    l[3] *= 2;
			    l[5] *= 2;
			    l[6] *= 3;
			    l[8] *= 3;
			    l[7] *= 4;
			} else {
			    if (mid[(i - 1) * x_size + j + 1] < 8) {
				l[2] = 0;
				l[1] = 0;
				l[5] = 0;
				l[0] *= 2;
				l[8] *= 2;
				l[3] *= 3;
				l[7] *= 3;
				l[6] *= 4;
			    } else {
				if (mid[(i) * x_size + j - 1] < 8) {
				    l[3] = 0;
				    l[0] = 0;
				    l[6] = 0;
				    l[1] *= 2;
				    l[7] *= 2;
				    l[2] *= 3;
				    l[8] *= 3;
				    l[5] *= 4;
				} else {
				    if (mid[(i) * x_size + j + 1] < 8) {
					l[5] = 0;
					l[2] = 0;
					l[8] = 0;
					l[1] *= 2;
					l[7] *= 2;
					l[0] *= 3;
					l[6] *= 3;
					l[3] *= 4;
				    } else {
					if (mid[(i + 1) * x_size + j - 1] < 8) {
					    l[6] = 0;
					    l[3] = 0;
					    l[7] = 0;
					    l[0] *= 2;
					    l[8] *= 2;
					    l[1] *= 3;
					    l[5] *= 3;
					    l[2] *= 4;
					} else {
					    if (mid[(i + 1) * x_size + j] < 8) {
						l[7] = 0;
						l[6] = 0;
						l[8] = 0;
						l[3] *= 2;
						l[5] *= 2;
						l[0] *= 3;
						l[2] *= 3;
						l[1] *= 4;
					    } else {
						if (mid[(i + 1) * x_size + j + 1] < 8) {
						    l[8] = 0;
						    l[5] = 0;
						    l[7] = 0;
						    l[6] *= 2;
						    l[2] *= 2;
						    l[1] *= 3;
						    l[3] *= 3;
						    l[0] *= 4;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		    m = 0;
		    for (y = 0; y < 3; y++)
			for (x = 0; x < 3; x++)
			    if (l[y + y + y + x] > m) {
				m = l[y + y + y + x];
				a = y;
				b = x;
			    }
		    if (m > 0) {
			if (mid[i * x_size + j] < 4)
			    mid[(i + a - 1) * x_size + j + b - 1] = 4;
			else
			    mid[(i + a - 1) * x_size + j + b - 1] = mid[i * x_size + j] + 1;
			if ((a + a + b) < 3) {
			    i += a - 1;
			    j += b - 2;
			    if (i < 4)
				i = 4;
			    if (j < 4)
				j = 4;
			}
		    }
		}
		if (n == 2) {
		    b00 = mid[(i - 1) * x_size + j - 1] < 8;
		    b02 = mid[(i - 1) * x_size + j + 1] < 8;
		    b20 = mid[(i + 1) * x_size + j - 1] < 8;
		    b22 = mid[(i + 1) * x_size + j + 1] < 8;
		    if (((b00 + b02 + b20 + b22) == 2) && ((b00 | b22) & (b02 | b20))) {
			if (b00) {
			    if (b02) {
				x = 0;
				y = -1;
			    } else {
				x = -1;
				y = 0;
			    }
			} else {
			    if (b02) {
				x = 1;
				y = 0;
			    } else {
				x = 0;
				y = 1;
			    }
			}
			if (((float) r[(i + y) * x_size + j + x] / (float) centre) > 0.7) {
			    if (((x == 0) && (mid[(i + (2 * y)) * x_size + j] > 7) && (mid[(i + (2 * y)) * x_size + j - 1] > 7) && (mid[(i + (2 * y)) * x_size + j + 1] > 7)) || ((y == 0) && (mid[(i) * x_size + j + (2 * x)] > 7) && (mid[(i + 1) * x_size + j + (2 * x)] > 7) && (mid[(i - 1) * x_size + j + (2 * x)] > 7))) {
				mid[(i) * x_size + j] = 100;
				mid[(i + y) * x_size + j + x] = 3;
			    }
			}
		    } else {
			b01 = mid[(i - 1) * x_size + j] < 8;
			b12 = mid[(i) * x_size + j + 1] < 8;
			b21 = mid[(i + 1) * x_size + j] < 8;
			b10 = mid[(i) * x_size + j - 1] < 8;
			if (((b01 + b12 + b21 + b10) == 2) && ((b10 | b12) & (b01 | b21)) && ((b01 & ((mid[(i - 2) * x_size + j - 1] < 8) | (mid[(i - 2) * x_size + j + 1] < 8))) | (b10 & ((mid[(i - 1) * x_size + j - 2] < 8) | (mid[(i + 1) * x_size + j - 2] < 8))) | (b12 & ((mid[(i - 1) * x_size + j + 2] < 8) | (mid[(i + 1) * x_size + j + 2] < 8))) | (b21 & ((mid[(i + 2) * x_size + j - 1] < 8) | (mid[(i + 2) * x_size + j + 1] < 8))))) {
			    mid[(i) * x_size + j] = 100;
			    i--;
			    j -= 2;
			    if (i < 4)
				i = 4;
			    if (j < 4)
				j = 4;
			}
		    }
		}
		if (n > 2) {
		    b01 = mid[(i - 1) * x_size + j] < 8;
		    b12 = mid[(i) * x_size + j + 1] < 8;
		    b21 = mid[(i + 1) * x_size + j] < 8;
		    b10 = mid[(i) * x_size + j - 1] < 8;
		    if ((b01 + b12 + b21 + b10) > 1) {
			b00 = mid[(i - 1) * x_size + j - 1] < 8;
			b02 = mid[(i - 1) * x_size + j + 1] < 8;
			b20 = mid[(i + 1) * x_size + j - 1] < 8;
			b22 = mid[(i + 1) * x_size + j + 1] < 8;
			p1 = b00 | b01;
			p2 = b02 | b12;
			p3 = b22 | b21;
			p4 = b20 | b10;
			if (((p1 + p2 + p3 + p4) - ((b01 & p2) + (b12 & p3) + (b21 & p4) + (b10 & p1))) < 2) {
			    mid[(i) * x_size + j] = 100;
			    i--;
			    j -= 2;
			    if (i < 4)
				i = 4;
			    if (j < 4)
				j = 4;
			}
		    }
		}
	    }
}

void susan_edges(uchar * in, int *r, uchar * mid, uchar * bp, int max_no, int x_size, int y_size)
{
    float z;
    int do_symmetry, i, j, m, n, a, b, x, y, w;
    uchar c, *p, *cp;
    memset(r, 0, x_size * y_size * sizeof(int));
    for (i = 3; i < y_size - 3; i++)
	for (j = 3; j < x_size - 3; j++) {
	    n = 100;
	    p = in + (i - 3) * x_size + j - 1;
	    cp = bp + in[i * x_size + j];
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 3;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 5;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 6;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += 2;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 6;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 5;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 3;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    if (n <= max_no)
		r[i * x_size + j] = max_no - n;
	}
    for (i = 4; i < y_size - 4; i++)
	for (j = 4; j < x_size - 4; j++) {
	    if (r[i * x_size + j] > 0) {
		m = r[i * x_size + j];
		n = max_no - m;
		cp = bp + in[i * x_size + j];
		if (n > 600) {
		    p = in + (i - 3) * x_size + j - 1;
		    x = 0;
		    y = 0;
		    c = *(cp - *p++);
		    x -= c;
		    y -= 3 * c;
		    c = *(cp - *p++);
		    y -= 3 * c;
		    c = *(cp - *p);
		    x += c;
		    y -= 3 * c;
		    p += x_size - 3;
		    c = *(cp - *p++);
		    x -= 2 * c;
		    y -= 2 * c;
		    c = *(cp - *p++);
		    x -= c;
		    y -= 2 * c;
		    c = *(cp - *p++);
		    y -= 2 * c;
		    c = *(cp - *p++);
		    x += c;
		    y -= 2 * c;
		    c = *(cp - *p);
		    x += 2 * c;
		    y -= 2 * c;
		    p += x_size - 5;
		    c = *(cp - *p++);
		    x -= 3 * c;
		    y -= c;
		    c = *(cp - *p++);
		    x -= 2 * c;
		    y -= c;
		    c = *(cp - *p++);
		    x -= c;
		    y -= c;
		    c = *(cp - *p++);
		    y -= c;
		    c = *(cp - *p++);
		    x += c;
		    y -= c;
		    c = *(cp - *p++);
		    x += 2 * c;
		    y -= c;
		    c = *(cp - *p);
		    x += 3 * c;
		    y -= c;
		    p += x_size - 6;
		    c = *(cp - *p++);
		    x -= 3 * c;
		    c = *(cp - *p++);
		    x -= 2 * c;
		    c = *(cp - *p);
		    x -= c;
		    p += 2;
		    c = *(cp - *p++);
		    x += c;
		    c = *(cp - *p++);
		    x += 2 * c;
		    c = *(cp - *p);
		    x += 3 * c;
		    p += x_size - 6;
		    c = *(cp - *p++);
		    x -= 3 * c;
		    y += c;
		    c = *(cp - *p++);
		    x -= 2 * c;
		    y += c;
		    c = *(cp - *p++);
		    x -= c;
		    y += c;
		    c = *(cp - *p++);
		    y += c;
		    c = *(cp - *p++);
		    x += c;
		    y += c;
		    c = *(cp - *p++);
		    x += 2 * c;
		    y += c;
		    c = *(cp - *p);
		    x += 3 * c;
		    y += c;
		    p += x_size - 5;
		    c = *(cp - *p++);
		    x -= 2 * c;
		    y += 2 * c;
		    c = *(cp - *p++);
		    x -= c;
		    y += 2 * c;
		    c = *(cp - *p++);
		    y += 2 * c;
		    c = *(cp - *p++);
		    x += c;
		    y += 2 * c;
		    c = *(cp - *p);
		    x += 2 * c;
		    y += 2 * c;
		    p += x_size - 3;
		    c = *(cp - *p++);
		    x -= c;
		    y += 3 * c;
		    c = *(cp - *p++);
		    y += 3 * c;
		    c = *(cp - *p);
		    x += c;
		    y += 3 * c;
		    z = sqrt((float) ((x * x) + (y * y)));
		    if (z > (0.9 * (float) n)) {
			do_symmetry = 0;
			if (x == 0)
			    z = 1000000.0;
			else
			    z = ((float) y) / ((float) x);
			if (z < 0) {
			    z = -z;
			    w = -1;
			} else
			    w = 1;
			if (z < 0.5) {
			    a = 0;
			    b = 1;
			} else {
			    if (z > 2.0) {
				a = 1;
				b = 0;
			    } else {
				if (w > 0) {
				    a = 1;
				    b = 1;
				} else {
				    a = -1;
				    b = 1;
				}
			    }
			}
			if ((m > r[(i + a) * x_size + j + b]) && (m >= r[(i - a) * x_size + j - b]) && (m > r[(i + (2 * a)) * x_size + j + (2 * b)]) && (m >= r[(i - (2 * a)) * x_size + j - (2 * b)]))
			    mid[i * x_size + j] = 1;
		    } else
			do_symmetry = 1;
		} else
		    do_symmetry = 1;
		if (do_symmetry == 1) {
		    p = in + (i - 3) * x_size + j - 1;
		    x = 0;
		    y = 0;
		    w = 0;
		    c = *(cp - *p++);
		    x += c;
		    y += 9 * c;
		    w += 3 * c;
		    c = *(cp - *p++);
		    y += 9 * c;
		    c = *(cp - *p);
		    x += c;
		    y += 9 * c;
		    w -= 3 * c;
		    p += x_size - 3;
		    c = *(cp - *p++);
		    x += 4 * c;
		    y += 4 * c;
		    w += 4 * c;
		    c = *(cp - *p++);
		    x += c;
		    y += 4 * c;
		    w += 2 * c;
		    c = *(cp - *p++);
		    y += 4 * c;
		    c = *(cp - *p++);
		    x += c;
		    y += 4 * c;
		    w -= 2 * c;
		    c = *(cp - *p);
		    x += 4 * c;
		    y += 4 * c;
		    w -= 4 * c;
		    p += x_size - 5;
		    c = *(cp - *p++);
		    x += 9 * c;
		    y += c;
		    w += 3 * c;
		    c = *(cp - *p++);
		    x += 4 * c;
		    y += c;
		    w += 2 * c;
		    c = *(cp - *p++);
		    x += c;
		    y += c;
		    w += c;
		    c = *(cp - *p++);
		    y += c;
		    c = *(cp - *p++);
		    x += c;
		    y += c;
		    w -= c;
		    c = *(cp - *p++);
		    x += 4 * c;
		    y += c;
		    w -= 2 * c;
		    c = *(cp - *p);
		    x += 9 * c;
		    y += c;
		    w -= 3 * c;
		    p += x_size - 6;
		    c = *(cp - *p++);
		    x += 9 * c;
		    c = *(cp - *p++);
		    x += 4 * c;
		    c = *(cp - *p);
		    x += c;
		    p += 2;
		    c = *(cp - *p++);
		    x += c;
		    c = *(cp - *p++);
		    x += 4 * c;
		    c = *(cp - *p);
		    x += 9 * c;
		    p += x_size - 6;
		    c = *(cp - *p++);
		    x += 9 * c;
		    y += c;
		    w -= 3 * c;
		    c = *(cp - *p++);
		    x += 4 * c;
		    y += c;
		    w -= 2 * c;
		    c = *(cp - *p++);
		    x += c;
		    y += c;
		    w -= c;
		    c = *(cp - *p++);
		    y += c;
		    c = *(cp - *p++);
		    x += c;
		    y += c;
		    w += c;
		    c = *(cp - *p++);
		    x += 4 * c;
		    y += c;
		    w += 2 * c;
		    c = *(cp - *p);
		    x += 9 * c;
		    y += c;
		    w += 3 * c;
		    p += x_size - 5;
		    c = *(cp - *p++);
		    x += 4 * c;
		    y += 4 * c;
		    w -= 4 * c;
		    c = *(cp - *p++);
		    x += c;
		    y += 4 * c;
		    w -= 2 * c;
		    c = *(cp - *p++);
		    y += 4 * c;
		    c = *(cp - *p++);
		    x += c;
		    y += 4 * c;
		    w += 2 * c;
		    c = *(cp - *p);
		    x += 4 * c;
		    y += 4 * c;
		    w += 4 * c;
		    p += x_size - 3;
		    c = *(cp - *p++);
		    x += c;
		    y += 9 * c;
		    w -= 3 * c;
		    c = *(cp - *p++);
		    y += 9 * c;
		    c = *(cp - *p);
		    x += c;
		    y += 9 * c;
		    w += 3 * c;
		    if (y == 0)
			z = 1000000.0;
		    else
			z = ((float) x) / ((float) y);
		    if (z < 0.5) {
			a = 0;
			b = 1;
		    } else {
			if (z > 2.0) {
			    a = 1;
			    b = 0;
			} else {
			    if (w > 0) {
				a = -1;
				b = 1;
			    } else {
				a = 1;
				b = 1;
			    }
			}
		    }
		    if ((m > r[(i + a) * x_size + j + b]) && (m >= r[(i - a) * x_size + j - b]) && (m > r[(i + (2 * a)) * x_size + j + (2 * b)]) && (m >= r[(i - (2 * a)) * x_size + j - (2 * b)]))
			mid[i * x_size + j] = 2;
		}
	    }
	}
}

void susan_edges_small(uchar * in, int *r, uchar * mid, uchar * bp, int max_no, int x_size, int y_size)
{
    float z;
    int do_symmetry, i, j, m, n, a, b, x, y, w;
    uchar c, *p, *cp;
    memset(r, 0, x_size * y_size * sizeof(int));
    max_no = 730;
    for (i = 1; i < y_size - 1; i++)
	for (j = 1; j < x_size - 1; j++) {
	    n = 100;
	    p = in + (i - 1) * x_size + j - 1;
	    cp = bp + in[i * x_size + j];
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 2;
	    n += *(cp - *p);
	    p += 2;
	    n += *(cp - *p);
	    p += x_size - 2;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    if (n <= max_no)
		r[i * x_size + j] = max_no - n;
	}
    for (i = 2; i < y_size - 2; i++)
	for (j = 2; j < x_size - 2; j++) {
	    if (r[i * x_size + j] > 0) {
		m = r[i * x_size + j];
		n = max_no - m;
		cp = bp + in[i * x_size + j];
		if (n > 250) {
		    p = in + (i - 1) * x_size + j - 1;
		    x = 0;
		    y = 0;
		    c = *(cp - *p++);
		    x -= c;
		    y -= c;
		    c = *(cp - *p++);
		    y -= c;
		    c = *(cp - *p);
		    x += c;
		    y -= c;
		    p += x_size - 2;
		    c = *(cp - *p);
		    x -= c;
		    p += 2;
		    c = *(cp - *p);
		    x += c;
		    p += x_size - 2;
		    c = *(cp - *p++);
		    x -= c;
		    y += c;
		    c = *(cp - *p++);
		    y += c;
		    c = *(cp - *p);
		    x += c;
		    y += c;
		    z = sqrt((float) ((x * x) + (y * y)));
		    if (z > (0.4 * (float) n)) {
			do_symmetry = 0;
			if (x == 0)
			    z = 1000000.0;
			else
			    z = ((float) y) / ((float) x);
			if (z < 0) {
			    z = -z;
			    w = -1;
			} else
			    w = 1;
			if (z < 0.5) {
			    a = 0;
			    b = 1;
			} else {
			    if (z > 2.0) {
				a = 1;
				b = 0;
			    } else {
				if (w > 0) {
				    a = 1;
				    b = 1;
				} else {
				    a = -1;
				    b = 1;
				}
			    }
			}
			if ((m > r[(i + a) * x_size + j + b]) && (m >= r[(i - a) * x_size + j - b]))
			    mid[i * x_size + j] = 1;
		    } else
			do_symmetry = 1;
		} else
		    do_symmetry = 1;
		if (do_symmetry == 1) {
		    p = in + (i - 1) * x_size + j - 1;
		    x = 0;
		    y = 0;
		    w = 0;
		    c = *(cp - *p++);
		    x += c;
		    y += c;
		    w += c;
		    c = *(cp - *p++);
		    y += c;
		    c = *(cp - *p);
		    x += c;
		    y += c;
		    w -= c;
		    p += x_size - 2;
		    c = *(cp - *p);
		    x += c;
		    p += 2;
		    c = *(cp - *p);
		    x += c;
		    p += x_size - 2;
		    c = *(cp - *p++);
		    x += c;
		    y += c;
		    w -= c;
		    c = *(cp - *p++);
		    y += c;
		    c = *(cp - *p);
		    x += c;
		    y += c;
		    w += c;
		    if (y == 0)
			z = 1000000.0;
		    else
			z = ((float) x) / ((float) y);
		    if (z < 0.5) {
			a = 0;
			b = 1;
		    } else {
			if (z > 2.0) {
			    a = 1;
			    b = 0;
			} else {
			    if (w > 0) {
				a = -1;
				b = 1;
			    } else {
				a = 1;
				b = 1;
			    }
			}
		    }
		    if ((m > r[(i + a) * x_size + j + b]) && (m >= r[(i - a) * x_size + j - b]))
			mid[i * x_size + j] = 2;
		}
	    }
	}
}

void corner_draw(uchar * in, CORNER_LIST corner_list, int x_size, int drawing_mode)
{
    uchar *p;
    int n = 0;
    while (corner_list[n].info != 7) {
	if (drawing_mode == 0) {
	    p = in + (corner_list[n].y - 1) * x_size + corner_list[n].x - 1;
	    *p++ = 255;
	    *p++ = 255;
	    *p = 255;
	    p += x_size - 2;
	    *p++ = 255;
	    *p++ = 0;
	    *p = 255;
	    p += x_size - 2;
	    *p++ = 255;
	    *p++ = 255;
	    *p = 255;
	    n++;
	} else {
	    p = in + corner_list[n].y * x_size + corner_list[n].x;
	    *p = 0;
	    n++;
	}
    }
}

//complexity is O(n^2) inferred by loopus
void susan_corners(uchar * in, int *r, uchar * bp, int max_no, CORNER_LIST corner_list, int x_size, int y_size)
{
    int n, x, y, sq, xx, yy, i, j, *cgx, *cgy;
    float divide;
    uchar c, *p, *cp;
    memset(r, 0, x_size * y_size * sizeof(int));
    cgx = (int *) malloc(x_size * y_size * sizeof(int));
    cgy = (int *) malloc(x_size * y_size * sizeof(int));
    for (i = 5; i < y_size - 5; i++)
	for (j = 5; j < x_size - 5; j++) {
	    n = 100;
	    p = in + (i - 3) * x_size + j - 1;
	    cp = bp + in[i * x_size + j];
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 3;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 5;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 6;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    if (n < max_no) {
		p += 2;
		n += *(cp - *p++);
		if (n < max_no) {
		    n += *(cp - *p++);
		    if (n < max_no) {
			n += *(cp - *p);
			if (n < max_no) {
			    p += x_size - 6;
			    n += *(cp - *p++);
			    if (n < max_no) {
				n += *(cp - *p++);
				if (n < max_no) {
				    n += *(cp - *p++);
				    if (n < max_no) {
					n += *(cp - *p++);
					if (n < max_no) {
					    n += *(cp - *p++);
					    if (n < max_no) {
						n += *(cp - *p++);
						if (n < max_no) {
						    n += *(cp - *p);
						    if (n < max_no) {
							p += x_size - 5;
							n += *(cp - *p++);
							if (n < max_no) {
							    n += *(cp - *p++);
							    if (n < max_no) {
								n += *(cp - *p++);
								if (n < max_no) {
								    n += *(cp - *p++);
								    if (n < max_no) {
									n += *(cp - *p);
									if (n < max_no) {
									    p += x_size - 3;
									    n += *(cp - *p++);
									    if (n < max_no) {
										n += *(cp - *p++);
										if (n < max_no) {
										    n += *(cp - *p);
										    if (n < max_no) {
											x = 0;
											y = 0;
											p = in + (i - 3) * x_size + j - 1;
											c = *(cp - *p++);
											x -= c;
											y -= 3 * c;
											c = *(cp - *p++);
											y -= 3 * c;
											c = *(cp - *p);
											x += c;
											y -= 3 * c;
											p += x_size - 3;
											c = *(cp - *p++);
											x -= 2 * c;
											y -= 2 * c;
											c = *(cp - *p++);
											x -= c;
											y -= 2 * c;
											c = *(cp - *p++);
											y -= 2 * c;
											c = *(cp - *p++);
											x += c;
											y -= 2 * c;
											c = *(cp - *p);
											x += 2 * c;
											y -= 2 * c;
											p += x_size - 5;
											c = *(cp - *p++);
											x -= 3 * c;
											y -= c;
											c = *(cp - *p++);
											x -= 2 * c;
											y -= c;
											c = *(cp - *p++);
											x -= c;
											y -= c;
											c = *(cp - *p++);
											y -= c;
											c = *(cp - *p++);
											x += c;
											y -= c;
											c = *(cp - *p++);
											x += 2 * c;
											y -= c;
											c = *(cp - *p);
											x += 3 * c;
											y -= c;
											p += x_size - 6;
											c = *(cp - *p++);
											x -= 3 * c;
											c = *(cp - *p++);
											x -= 2 * c;
											c = *(cp - *p);
											x -= c;
											p += 2;
											c = *(cp - *p++);
											x += c;
											c = *(cp - *p++);
											x += 2 * c;
											c = *(cp - *p);
											x += 3 * c;
											p += x_size - 6;
											c = *(cp - *p++);
											x -= 3 * c;
											y += c;
											c = *(cp - *p++);
											x -= 2 * c;
											y += c;
											c = *(cp - *p++);
											x -= c;
											y += c;
											c = *(cp - *p++);
											y += c;
											c = *(cp - *p++);
											x += c;
											y += c;
											c = *(cp - *p++);
											x += 2 * c;
											y += c;
											c = *(cp - *p);
											x += 3 * c;
											y += c;
											p += x_size - 5;
											c = *(cp - *p++);
											x -= 2 * c;
											y += 2 * c;
											c = *(cp - *p++);
											x -= c;
											y += 2 * c;
											c = *(cp - *p++);
											y += 2 * c;
											c = *(cp - *p++);
											x += c;
											y += 2 * c;
											c = *(cp - *p);
											x += 2 * c;
											y += 2 * c;
											p += x_size - 3;
											c = *(cp - *p++);
											x -= c;
											y += 3 * c;
											c = *(cp - *p++);
											y += 3 * c;
											c = *(cp - *p);
											x += c;
											y += 3 * c;
											xx = x * x;
											yy = y * y;
											sq = xx + yy;
											if (sq > ((n * n) / 2)) {
											    if (yy < xx) {
												divide = (float) y / (float) abs(x);
												sq = abs(x) / x;
												sq = *(cp - in[(i + ((divide) < 0 ? ((int) (divide - 0.5)) : ((int) (divide + 0.5)))) * x_size + j + sq]) + *(cp - in[(i + ((2 * divide) < 0 ? ((int) (2 * divide - 0.5)) : ((int) (2 * divide + 0.5)))) * x_size + j + 2 * sq]) + *(cp - in[(i + ((3 * divide) < 0 ? ((int) (3 * divide - 0.5)) : ((int) (3 * divide + 0.5)))) * x_size + j + 3 * sq]);
											    } else {
												divide = (float) x / (float) abs(y);
												sq = abs(y) / y;
												sq = *(cp - in[(i + sq) * x_size + j + ((divide) < 0 ? ((int) (divide - 0.5)) : ((int) (divide + 0.5)))]) + *(cp - in[(i + 2 * sq) * x_size + j + ((2 * divide) < 0 ? ((int) (2 * divide - 0.5)) : ((int) (2 * divide + 0.5)))]) + *(cp - in[(i + 3 * sq) * x_size + j + ((3 * divide) < 0 ? ((int) (3 * divide - 0.5)) : ((int) (3 * divide + 0.5)))]);
											    } if (sq > 290) {
												r[i * x_size + j] = max_no - n;
												cgx[i * x_size + j] = (51 * x) / n;
												cgy[i * x_size + j] = (51 * y) / n;
											    }
											}
										    }
										}
									    }
									}
								    }
								}
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    n = 0;
    for (i = 5; i < y_size - 5; i++)
	for (j = 5; j < x_size - 5; j++) {
	    x = r[i * x_size + j];
	    if (x > 0) {
		if ((x > r[(i - 3) * x_size + j - 3]) && (x > r[(i - 3) * x_size + j - 2]) && (x > r[(i - 3) * x_size + j - 1]) && (x > r[(i - 3) * x_size + j]) && (x > r[(i - 3) * x_size + j + 1]) && (x > r[(i - 3) * x_size + j + 2]) && (x > r[(i - 3) * x_size + j + 3]) && (x > r[(i - 2) * x_size + j - 3]) && (x > r[(i - 2) * x_size + j - 2]) && (x > r[(i - 2) * x_size + j - 1]) && (x > r[(i - 2) * x_size + j]) && (x > r[(i - 2) * x_size + j + 1]) && (x > r[(i - 2) * x_size + j + 2]) && (x > r[(i - 2) * x_size + j + 3]) && (x > r[(i - 1) * x_size + j - 3]) && (x > r[(i - 1) * x_size + j - 2]) && (x > r[(i - 1) * x_size + j - 1]) && (x > r[(i - 1) * x_size + j]) && (x > r[(i - 1) * x_size + j + 1]) && (x > r[(i - 1) * x_size + j + 2]) && (x > r[(i - 1) * x_size + j + 3]) && (x > r[(i) * x_size + j - 3]) && (x > r[(i) * x_size + j - 2]) && (x > r[(i) * x_size + j - 1]) && (x >= r[(i) * x_size + j + 1]) && (x >= r[(i) * x_size + j + 2]) && (x >= r[(i) * x_size + j + 3]) && (x >= r[(i + 1) * x_size + j - 3]) && (x >= r[(i + 1) * x_size + j - 2]) && (x >= r[(i + 1) * x_size + j - 1]) && (x >= r[(i + 1) * x_size + j]) && (x >= r[(i + 1) * x_size + j + 1]) && (x >= r[(i + 1) * x_size + j + 2]) && (x >= r[(i + 1) * x_size + j + 3]) && (x >= r[(i + 2) * x_size + j - 3]) && (x >= r[(i + 2) * x_size + j - 2]) && (x >= r[(i + 2) * x_size + j - 1]) && (x >= r[(i + 2) * x_size + j]) && (x >= r[(i + 2) * x_size + j + 1]) && (x >= r[(i + 2) * x_size + j + 2]) && (x >= r[(i + 2) * x_size + j + 3]) && (x >= r[(i + 3) * x_size + j - 3]) && (x >= r[(i + 3) * x_size + j - 2]) && (x >= r[(i + 3) * x_size + j - 1]) && (x >= r[(i + 3) * x_size + j]) && (x >= r[(i + 3) * x_size + j + 1]) && (x >= r[(i + 3) * x_size + j + 2]) && (x >= r[(i + 3) * x_size + j + 3])) {
		    corner_list[n].info = 0;
		    corner_list[n].x = j;
		    corner_list[n].y = i;
		    corner_list[n].dx = cgx[i * x_size + j];
		    corner_list[n].dy = cgy[i * x_size + j];
		    corner_list[n].I = in[i * x_size + j];
		    n++;
		    if (n == 15000) {
			fprintf(stderr, "Too many corners.\n");
			exit(1);
		    }
		}
	    }
	}
    corner_list[n].info = 7;
    free(cgx);
    free(cgy);
}

void susan_corners_quick(uchar * in, int *r, uchar * bp, int max_no, CORNER_LIST corner_list, int x_size, int y_size)
{
    int n, x, y, i, j;
    uchar *p, *cp;
    memset(r, 0, x_size * y_size * sizeof(int));
    for (i = 7; i < y_size - 7; i++)
	for (j = 7; j < x_size - 7; j++) {
	    n = 100;
	    p = in + (i - 3) * x_size + j - 1;
	    cp = bp + in[i * x_size + j];
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 3;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 5;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    p += x_size - 6;
	    n += *(cp - *p++);
	    n += *(cp - *p++);
	    n += *(cp - *p);
	    if (n < max_no) {
		p += 2;
		n += *(cp - *p++);
		if (n < max_no) {
		    n += *(cp - *p++);
		    if (n < max_no) {
			n += *(cp - *p);
			if (n < max_no) {
			    p += x_size - 6;
			    n += *(cp - *p++);
			    if (n < max_no) {
				n += *(cp - *p++);
				if (n < max_no) {
				    n += *(cp - *p++);
				    if (n < max_no) {
					n += *(cp - *p++);
					if (n < max_no) {
					    n += *(cp - *p++);
					    if (n < max_no) {
						n += *(cp - *p++);
						if (n < max_no) {
						    n += *(cp - *p);
						    if (n < max_no) {
							p += x_size - 5;
							n += *(cp - *p++);
							if (n < max_no) {
							    n += *(cp - *p++);
							    if (n < max_no) {
								n += *(cp - *p++);
								if (n < max_no) {
								    n += *(cp - *p++);
								    if (n < max_no) {
									n += *(cp - *p);
									if (n < max_no) {
									    p += x_size - 3;
									    n += *(cp - *p++);
									    if (n < max_no) {
										n += *(cp - *p++);
										if (n < max_no) {
										    n += *(cp - *p);
										    if (n < max_no)
											r[i * x_size + j] = max_no - n;
										}
									    }
									}
								    }
								}
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    n = 0;
    for (i = 7; i < y_size - 7; i++)
	for (j = 7; j < x_size - 7; j++) {
	    x = r[i * x_size + j];
	    if (x > 0) {
		if ((x > r[(i - 3) * x_size + j - 3]) && (x > r[(i - 3) * x_size + j - 2]) && (x > r[(i - 3) * x_size + j - 1]) && (x > r[(i - 3) * x_size + j]) && (x > r[(i - 3) * x_size + j + 1]) && (x > r[(i - 3) * x_size + j + 2]) && (x > r[(i - 3) * x_size + j + 3]) && (x > r[(i - 2) * x_size + j - 3]) && (x > r[(i - 2) * x_size + j - 2]) && (x > r[(i - 2) * x_size + j - 1]) && (x > r[(i - 2) * x_size + j]) && (x > r[(i - 2) * x_size + j + 1]) && (x > r[(i - 2) * x_size + j + 2]) && (x > r[(i - 2) * x_size + j + 3]) && (x > r[(i - 1) * x_size + j - 3]) && (x > r[(i - 1) * x_size + j - 2]) && (x > r[(i - 1) * x_size + j - 1]) && (x > r[(i - 1) * x_size + j]) && (x > r[(i - 1) * x_size + j + 1]) && (x > r[(i - 1) * x_size + j + 2]) && (x > r[(i - 1) * x_size + j + 3]) && (x > r[(i) * x_size + j - 3]) && (x > r[(i) * x_size + j - 2]) && (x > r[(i) * x_size + j - 1]) && (x >= r[(i) * x_size + j + 1]) && (x >= r[(i) * x_size + j + 2]) && (x >= r[(i) * x_size + j + 3]) && (x >= r[(i + 1) * x_size + j - 3]) && (x >= r[(i + 1) * x_size + j - 2]) && (x >= r[(i + 1) * x_size + j - 1]) && (x >= r[(i + 1) * x_size + j]) && (x >= r[(i + 1) * x_size + j + 1]) && (x >= r[(i + 1) * x_size + j + 2]) && (x >= r[(i + 1) * x_size + j + 3]) && (x >= r[(i + 2) * x_size + j - 3]) && (x >= r[(i + 2) * x_size + j - 2]) && (x >= r[(i + 2) * x_size + j - 1]) && (x >= r[(i + 2) * x_size + j]) && (x >= r[(i + 2) * x_size + j + 1]) && (x >= r[(i + 2) * x_size + j + 2]) && (x >= r[(i + 2) * x_size + j + 3]) && (x >= r[(i + 3) * x_size + j - 3]) && (x >= r[(i + 3) * x_size + j - 2]) && (x >= r[(i + 3) * x_size + j - 1]) && (x >= r[(i + 3) * x_size + j]) && (x >= r[(i + 3) * x_size + j + 1]) && (x >= r[(i + 3) * x_size + j + 2]) && (x >= r[(i + 3) * x_size + j + 3])) {
		    corner_list[n].info = 0;
		    corner_list[n].x = j;
		    corner_list[n].y = i;
		    x = in[(i - 2) * x_size + j - 2] + in[(i - 2) * x_size + j - 1] + in[(i - 2) * x_size + j] + in[(i - 2) * x_size + j + 1] + in[(i - 2) * x_size + j + 2] + in[(i - 1) * x_size + j - 2] + in[(i - 1) * x_size + j - 1] + in[(i - 1) * x_size + j] + in[(i - 1) * x_size + j + 1] + in[(i - 1) * x_size + j + 2] + in[(i) * x_size + j - 2] + in[(i) * x_size + j - 1] + in[(i) * x_size + j] + in[(i) * x_size + j + 1] + in[(i) * x_size + j + 2] + in[(i + 1) * x_size + j - 2] + in[(i + 1) * x_size + j - 1] + in[(i + 1) * x_size + j] + in[(i + 1) * x_size + j + 1] + in[(i + 1) * x_size + j + 2] + in[(i + 2) * x_size + j - 2] + in[(i + 2) * x_size + j - 1] + in[(i + 2) * x_size + j] + in[(i + 2) * x_size + j + 1] + in[(i + 2) * x_size + j + 2];
		    corner_list[n].I = x / 25;
		    x = in[(i - 2) * x_size + j + 2] + in[(i - 1) * x_size + j + 2] + in[(i) * x_size + j + 2] + in[(i + 1) * x_size + j + 2] + in[(i + 2) * x_size + j + 2] - (in[(i - 2) * x_size + j - 2] + in[(i - 1) * x_size + j - 2] + in[(i) * x_size + j - 2] + in[(i + 1) * x_size + j - 2] + in[(i + 2) * x_size + j - 2]);
		    x += x + in[(i - 2) * x_size + j + 1] + in[(i - 1) * x_size + j + 1] + in[(i) * x_size + j + 1] + in[(i + 1) * x_size + j + 1] + in[(i + 2) * x_size + j + 1] - (in[(i - 2) * x_size + j - 1] + in[(i - 1) * x_size + j - 1] + in[(i) * x_size + j - 1] + in[(i + 1) * x_size + j - 1] + in[(i + 2) * x_size + j - 1]);
		    y = in[(i + 2) * x_size + j - 2] + in[(i + 2) * x_size + j - 1] + in[(i + 2) * x_size + j] + in[(i + 2) * x_size + j + 1] + in[(i + 2) * x_size + j + 2] - (in[(i - 2) * x_size + j - 2] + in[(i - 2) * x_size + j - 1] + in[(i - 2) * x_size + j] + in[(i - 2) * x_size + j + 1] + in[(i - 2) * x_size + j + 2]);
		    y += y + in[(i + 1) * x_size + j - 2] + in[(i + 1) * x_size + j - 1] + in[(i + 1) * x_size + j] + in[(i + 1) * x_size + j + 1] + in[(i + 1) * x_size + j + 2] - (in[(i - 1) * x_size + j - 2] + in[(i - 1) * x_size + j - 1] + in[(i - 1) * x_size + j] + in[(i - 1) * x_size + j + 1] + in[(i - 1) * x_size + j + 2]);
		    corner_list[n].dx = x / 15;
		    corner_list[n].dy = y / 15;
		    n++;
		    if (n == 15000) {
			fprintf(stderr, "Too many corners.\n");
			exit(1);
		    }
		}
	    }
	}
    corner_list[n].info = 7;
}

void main1(int argc, char *argv[])
{
    char *tcp;
    uchar *in, *bp, *mid;
    float dt = 4.0;
    int *r, argindex = 3, bt = 20, principle = 0, thin_post_proc = 1, three_by_three = 0, drawing_mode = 0, susan_quick = 0, max_no_corners = 1850, max_no_edges = 2650, mode = 0, x_size, y_size;
    CORNER_LIST corner_list;
    if (argc < 3)
	usage();
    get_image(argv[1], &in, &x_size, &y_size);
    while (argindex < argc) {
	tcp = argv[argindex];
	if (*tcp == '-')
	    switch (*++tcp) {
	    case 's':
		mode = 0;
		break;
	    case 'e':
		mode = 1;
		break;
	    case 'c':
		mode = 2;
		break;
	    case 'p':
		principle = 1;
		break;
	    case 'n':
		thin_post_proc = 0;
		break;
	    case 'b':
		drawing_mode = 1;
		break;
	    case '3':
		three_by_three = 1;
		break;
	    case 'q':
		susan_quick = 1;
		break;
	    case 'd':
		if (++argindex >= argc) {
		    printf("No argument following -d\n");
		    exit(0);
		}
		dt = atof(argv[argindex]);
		if (dt < 0)
		    three_by_three = 1;
		break;
	    case 't':
		if (++argindex >= argc) {
		    printf("No argument following -t\n");
		    exit(0);
		}
		bt = atoi(argv[argindex]);
		break;
	} else
	    usage();
	argindex++;
    }
    if ((principle == 1) && (mode == 0))
	mode = 1;
    switch (mode) {
    case 0:
	setup_brightness_lut(&bp, bt, 2);
	susan_smoothing(three_by_three, in, dt, x_size, y_size, bp);
	free_brightness_lut(bp);
	break;
    case 1:
	r = (int *) malloc(x_size * y_size * sizeof(int));
	setup_brightness_lut(&bp, bt, 6);
	if (principle) {
	    if (three_by_three)
		susan_principle_small(in, r, bp, max_no_edges, x_size, y_size);
	    else
		susan_principle(in, r, bp, max_no_edges, x_size, y_size);
	    int_to_uchar(r, in, x_size * y_size);
	} else {
	    mid = (uchar *) malloc(x_size * y_size);
	    memset(mid, 100, x_size * y_size);
	    if (three_by_three)
		susan_edges_small(in, r, mid, bp, max_no_edges, x_size, y_size);
	    else
		susan_edges(in, r, mid, bp, max_no_edges, x_size, y_size);
	    if (thin_post_proc)
		susan_thin(r, mid, x_size, y_size);
	    edge_draw(in, mid, x_size, y_size, drawing_mode);
	    free(mid);
	}
	free_brightness_lut(bp);
	free(r);
	break;
    case 2:
	r = (int *) malloc(x_size * y_size * sizeof(int));
	setup_brightness_lut(&bp, bt, 6);
	if (principle) {
	    susan_principle(in, r, bp, max_no_corners, x_size, y_size);
	    int_to_uchar(r, in, x_size * y_size);
	} else {
	    if (susan_quick)
		susan_corners_quick(in, r, bp, max_no_corners, corner_list, x_size, y_size);
	    else
		susan_corners(in, r, bp, max_no_corners, corner_list, x_size, y_size);
	    corner_draw(in, corner_list, x_size, drawing_mode);
	}
	free_brightness_lut(bp);
	free(r);
	break;
    }
    put_image(argv[2], (char *) in, x_size, y_size);
    free(in);
}
