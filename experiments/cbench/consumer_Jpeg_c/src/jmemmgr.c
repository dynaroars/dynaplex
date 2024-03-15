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
typedef unsigned char JSAMPLE;
typedef short JCOEF;
typedef unsigned char JOCTET;
typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef short INT16;
typedef long INT32;
typedef unsigned int JDIMENSION;
typedef int boolean;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;
typedef JCOEF JBLOCK[64];
typedef JBLOCK *JBLOCKROW;
typedef JBLOCKROW *JBLOCKARRAY;
typedef JBLOCKARRAY *JBLOCKIMAGE;
typedef JCOEF *JCOEFPTR;
typedef struct {
    UINT16 quantval[64];
    boolean sent_table;
} JQUANT_TBL;
typedef struct {
    UINT8 bits[17];
    UINT8 huffval[256];
    boolean sent_table;
} JHUFF_TBL;
typedef struct {
    int component_id;
    int component_index;
    int h_samp_factor;
    int v_samp_factor;
    int quant_tbl_no;
    int dc_tbl_no;
    int ac_tbl_no;
    JDIMENSION width_in_blocks;
    JDIMENSION height_in_blocks;
    int DCT_scaled_size;
    JDIMENSION downsampled_width;
    JDIMENSION downsampled_height;
    boolean component_needed;
    int MCU_width;
    int MCU_height;
    int MCU_blocks;
    int MCU_sample_width;
    int last_col_width;
    int last_row_height;
    JQUANT_TBL *quant_table;
    void *dct_table;
} jpeg_component_info;
typedef struct {
    int comps_in_scan;
    int component_index[4];
    int Ss, Se;
    int Ah, Al;
} jpeg_scan_info;
typedef enum { JCS_UNKNOWN, JCS_GRAYSCALE, JCS_RGB, JCS_YCbCr, JCS_CMYK, JCS_YCCK } J_COLOR_SPACE;
typedef enum { JDCT_ISLOW, JDCT_IFAST, JDCT_FLOAT } J_DCT_METHOD;
typedef enum { JDITHER_NONE, JDITHER_ORDERED, JDITHER_FS } J_DITHER_MODE;
struct jpeg_common_struct {
    struct jpeg_error_mgr *err;
    struct jpeg_memory_mgr *mem;
    struct jpeg_progress_mgr *progress;
    boolean is_decompressor;
    int global_state;
};
typedef struct jpeg_common_struct *j_common_ptr;
typedef struct jpeg_compress_struct *j_compress_ptr;
typedef struct jpeg_decompress_struct *j_decompress_ptr;
struct jpeg_compress_struct {
    struct jpeg_error_mgr *err;
    struct jpeg_memory_mgr *mem;
    struct jpeg_progress_mgr *progress;
    boolean is_decompressor;
    int global_state;
    struct jpeg_destination_mgr *dest;
    JDIMENSION image_width;
    JDIMENSION image_height;
    int input_components;
    J_COLOR_SPACE in_color_space;
    double input_gamma;
    int data_precision;
    int num_components;
    J_COLOR_SPACE jpeg_color_space;
    jpeg_component_info *comp_info;
    JQUANT_TBL *quant_tbl_ptrs[4];
    JHUFF_TBL *dc_huff_tbl_ptrs[4];
    JHUFF_TBL *ac_huff_tbl_ptrs[4];
    UINT8 arith_dc_L[16];
    UINT8 arith_dc_U[16];
    UINT8 arith_ac_K[16];
    int num_scans;
    const jpeg_scan_info *scan_info;
    boolean raw_data_in;
    boolean arith_code;
    boolean optimize_coding;
    boolean CCIR601_sampling;
    int smoothing_factor;
    J_DCT_METHOD dct_method;
    unsigned int restart_interval;
    int restart_in_rows;
    boolean write_JFIF_header;
    UINT8 density_unit;
    UINT16 X_density;
    UINT16 Y_density;
    boolean write_Adobe_marker;
    JDIMENSION next_scanline;
    boolean progressive_mode;
    int max_h_samp_factor;
    int max_v_samp_factor;
    JDIMENSION total_iMCU_rows;
    int comps_in_scan;
    jpeg_component_info *cur_comp_info[4];
    JDIMENSION MCUs_per_row;
    JDIMENSION MCU_rows_in_scan;
    int blocks_in_MCU;
    int MCU_membership[10];
    int Ss, Se, Ah, Al;
    struct jpeg_comp_master *master;
    struct jpeg_c_main_controller *main;
    struct jpeg_c_prep_controller *prep;
    struct jpeg_c_coef_controller *coef;
    struct jpeg_marker_writer *marker;
    struct jpeg_color_converter *cconvert;
    struct jpeg_downsampler *downsample;
    struct jpeg_forward_dct *fdct;
    struct jpeg_entropy_encoder *entropy;
};
struct jpeg_decompress_struct {
    struct jpeg_error_mgr *err;
    struct jpeg_memory_mgr *mem;
    struct jpeg_progress_mgr *progress;
    boolean is_decompressor;
    int global_state;
    struct jpeg_source_mgr *src;
    JDIMENSION image_width;
    JDIMENSION image_height;
    int num_components;
    J_COLOR_SPACE jpeg_color_space;
    J_COLOR_SPACE out_color_space;
    unsigned int scale_num, scale_denom;
    double output_gamma;
    boolean buffered_image;
    boolean raw_data_out;
    J_DCT_METHOD dct_method;
    boolean do_fancy_upsampling;
    boolean do_block_smoothing;
    boolean quantize_colors;
    J_DITHER_MODE dither_mode;
    boolean two_pass_quantize;
    int desired_number_of_colors;
    boolean enable_1pass_quant;
    boolean enable_external_quant;
    boolean enable_2pass_quant;
    JDIMENSION output_width;
    JDIMENSION output_height;
    int out_color_components;
    int output_components;
    int rec_outbuf_height;
    int actual_number_of_colors;
    JSAMPARRAY colormap;
    JDIMENSION output_scanline;
    int input_scan_number;
    JDIMENSION input_iMCU_row;
    int output_scan_number;
    JDIMENSION output_iMCU_row;
    int (*coef_bits)[64];
    JQUANT_TBL *quant_tbl_ptrs[4];
    JHUFF_TBL *dc_huff_tbl_ptrs[4];
    JHUFF_TBL *ac_huff_tbl_ptrs[4];
    int data_precision;
    jpeg_component_info *comp_info;
    boolean progressive_mode;
    boolean arith_code;
    UINT8 arith_dc_L[16];
    UINT8 arith_dc_U[16];
    UINT8 arith_ac_K[16];
    unsigned int restart_interval;
    boolean saw_JFIF_marker;
    UINT8 density_unit;
    UINT16 X_density;
    UINT16 Y_density;
    boolean saw_Adobe_marker;
    UINT8 Adobe_transform;
    boolean CCIR601_sampling;
    int max_h_samp_factor;
    int max_v_samp_factor;
    int min_DCT_scaled_size;
    JDIMENSION total_iMCU_rows;
    JSAMPLE *sample_range_limit;
    int comps_in_scan;
    jpeg_component_info *cur_comp_info[4];
    JDIMENSION MCUs_per_row;
    JDIMENSION MCU_rows_in_scan;
    int blocks_in_MCU;
    int MCU_membership[10];
    int Ss, Se, Ah, Al;
    int unread_marker;
    struct jpeg_decomp_master *master;
    struct jpeg_d_main_controller *main;
    struct jpeg_d_coef_controller *coef;
    struct jpeg_d_post_controller *post;
    struct jpeg_input_controller *inputctl;
    struct jpeg_marker_reader *marker;
    struct jpeg_entropy_decoder *entropy;
    struct jpeg_inverse_dct *idct;
    struct jpeg_upsampler *upsample;
    struct jpeg_color_deconverter *cconvert;
    struct jpeg_color_quantizer *cquantize;
};
struct jpeg_error_mgr {
    void (*error_exit) (j_common_ptr cinfo);
    void (*emit_message) (j_common_ptr cinfo, int msg_level);
    void (*output_message) (j_common_ptr cinfo);
    void (*format_message) (j_common_ptr cinfo, char *buffer);
    void (*reset_error_mgr) (j_common_ptr cinfo);
    int msg_code;
    union {
	int i[8];
	char s[80];
    } msg_parm;
    int trace_level;
    long num_warnings;
    const char *const *jpeg_message_table;
    int last_jpeg_message;
    const char *const *addon_message_table;
    int first_addon_message;
    int last_addon_message;
};
struct jpeg_progress_mgr {
    void (*progress_monitor) (j_common_ptr cinfo);
    long pass_counter;
    long pass_limit;
    int completed_passes;
    int total_passes;
};
struct jpeg_destination_mgr {
    JOCTET *next_output_byte;
    size_t free_in_buffer;
    void (*init_destination) (j_compress_ptr cinfo);
    boolean(*empty_output_buffer) (j_compress_ptr cinfo);
    void (*term_destination) (j_compress_ptr cinfo);
};
struct jpeg_source_mgr {
    const JOCTET *next_input_byte;
    size_t bytes_in_buffer;
    void (*init_source) (j_decompress_ptr cinfo);
    boolean(*fill_input_buffer) (j_decompress_ptr cinfo);
    void (*skip_input_data) (j_decompress_ptr cinfo, long num_bytes);
    boolean(*resync_to_restart) (j_decompress_ptr cinfo, int desired);
    void (*term_source) (j_decompress_ptr cinfo);
};
typedef struct jvirt_sarray_control *jvirt_sarray_ptr;
typedef struct jvirt_barray_control *jvirt_barray_ptr;
struct jpeg_memory_mgr {
    void *(*alloc_small) (j_common_ptr cinfo, int pool_id, size_t sizeofobject);
    void *(*alloc_large) (j_common_ptr cinfo, int pool_id, size_t sizeofobject);
    JSAMPARRAY(*alloc_sarray) (j_common_ptr cinfo, int pool_id, JDIMENSION samplesperrow, JDIMENSION numrows);
    JBLOCKARRAY(*alloc_barray) (j_common_ptr cinfo, int pool_id, JDIMENSION blocksperrow, JDIMENSION numrows);
    jvirt_sarray_ptr(*request_virt_sarray) (j_common_ptr cinfo, int pool_id, boolean pre_zero, JDIMENSION samplesperrow, JDIMENSION numrows, JDIMENSION maxaccess);
    jvirt_barray_ptr(*request_virt_barray) (j_common_ptr cinfo, int pool_id, boolean pre_zero, JDIMENSION blocksperrow, JDIMENSION numrows, JDIMENSION maxaccess);
    void (*realize_virt_arrays) (j_common_ptr cinfo);
    JSAMPARRAY(*access_virt_sarray) (j_common_ptr cinfo, jvirt_sarray_ptr ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable);
    JBLOCKARRAY(*access_virt_barray) (j_common_ptr cinfo, jvirt_barray_ptr ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable);
    void (*free_pool) (j_common_ptr cinfo, int pool_id);
    void (*self_destruct) (j_common_ptr cinfo);
    long max_memory_to_use;
};
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
typedef enum { JBUF_PASS_THRU, JBUF_SAVE_SOURCE, JBUF_CRANK_DEST, JBUF_SAVE_AND_PASS } J_BUF_MODE;
struct jpeg_comp_master {
    void (*prepare_for_pass) (j_compress_ptr cinfo);
    void (*pass_startup) (j_compress_ptr cinfo);
    void (*finish_pass) (j_compress_ptr cinfo);
    boolean call_pass_startup;
    boolean is_last_pass;
};
struct jpeg_c_main_controller {
    void (*start_pass) (j_compress_ptr cinfo, J_BUF_MODE pass_mode);
    void (*process_data) (j_compress_ptr cinfo, JSAMPARRAY input_buf, JDIMENSION * in_row_ctr, JDIMENSION in_rows_avail);
};
struct jpeg_c_prep_controller {
    void (*start_pass) (j_compress_ptr cinfo, J_BUF_MODE pass_mode);
    void (*pre_process_data) (j_compress_ptr cinfo, JSAMPARRAY input_buf, JDIMENSION * in_row_ctr, JDIMENSION in_rows_avail, JSAMPIMAGE output_buf, JDIMENSION * out_row_group_ctr, JDIMENSION out_row_groups_avail);
};
struct jpeg_c_coef_controller {
    void (*start_pass) (j_compress_ptr cinfo, J_BUF_MODE pass_mode);
    boolean(*compress_data) (j_compress_ptr cinfo, JSAMPIMAGE input_buf);
};
struct jpeg_color_converter {
    void (*start_pass) (j_compress_ptr cinfo);
    void (*color_convert) (j_compress_ptr cinfo, JSAMPARRAY input_buf, JSAMPIMAGE output_buf, JDIMENSION output_row, int num_rows);
};
struct jpeg_downsampler {
    void (*start_pass) (j_compress_ptr cinfo);
    void (*downsample) (j_compress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION in_row_index, JSAMPIMAGE output_buf, JDIMENSION out_row_group_index);
    boolean need_context_rows;
};
struct jpeg_forward_dct {
    void (*start_pass) (j_compress_ptr cinfo);
    void (*forward_DCT) (j_compress_ptr cinfo, jpeg_component_info * compptr, JSAMPARRAY sample_data, JBLOCKROW coef_blocks, JDIMENSION start_row, JDIMENSION start_col, JDIMENSION num_blocks);
};
struct jpeg_entropy_encoder {
    void (*start_pass) (j_compress_ptr cinfo, boolean gather_statistics);
    boolean(*encode_mcu) (j_compress_ptr cinfo, JBLOCKROW * MCU_data);
    void (*finish_pass) (j_compress_ptr cinfo);
};
struct jpeg_marker_writer {
    void (*write_any_marker) (j_compress_ptr cinfo, int marker, const JOCTET * dataptr, unsigned int datalen);
    void (*write_file_header) (j_compress_ptr cinfo);
    void (*write_frame_header) (j_compress_ptr cinfo);
    void (*write_scan_header) (j_compress_ptr cinfo);
    void (*write_file_trailer) (j_compress_ptr cinfo);
    void (*write_tables_only) (j_compress_ptr cinfo);
};
struct jpeg_decomp_master {
    void (*prepare_for_output_pass) (j_decompress_ptr cinfo);
    void (*finish_output_pass) (j_decompress_ptr cinfo);
    boolean is_dummy_pass;
};
struct jpeg_input_controller {
    int (*consume_input) (j_decompress_ptr cinfo);
    void (*reset_input_controller) (j_decompress_ptr cinfo);
    void (*start_input_pass) (j_decompress_ptr cinfo);
    void (*finish_input_pass) (j_decompress_ptr cinfo);
    boolean has_multiple_scans;
    boolean eoi_reached;
};
struct jpeg_d_main_controller {
    void (*start_pass) (j_decompress_ptr cinfo, J_BUF_MODE pass_mode);
    void (*process_data) (j_decompress_ptr cinfo, JSAMPARRAY output_buf, JDIMENSION * out_row_ctr, JDIMENSION out_rows_avail);
};
struct jpeg_d_coef_controller {
    void (*start_input_pass) (j_decompress_ptr cinfo);
    int (*consume_data) (j_decompress_ptr cinfo);
    void (*start_output_pass) (j_decompress_ptr cinfo);
    int (*decompress_data) (j_decompress_ptr cinfo, JSAMPIMAGE output_buf);
    jvirt_barray_ptr *coef_arrays;
};
struct jpeg_d_post_controller {
    void (*start_pass) (j_decompress_ptr cinfo, J_BUF_MODE pass_mode);
    void (*post_process_data) (j_decompress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION * in_row_group_ctr, JDIMENSION in_row_groups_avail, JSAMPARRAY output_buf, JDIMENSION * out_row_ctr, JDIMENSION out_rows_avail);
};
struct jpeg_marker_reader {
    void (*reset_marker_reader) (j_decompress_ptr cinfo);
    int (*read_markers) (j_decompress_ptr cinfo);
    jpeg_marker_parser_method read_restart_marker;
    jpeg_marker_parser_method process_COM;
    jpeg_marker_parser_method process_APPn[16];
    boolean saw_SOI;
    boolean saw_SOF;
    int next_restart_num;
    unsigned int discarded_bytes;
};
struct jpeg_entropy_decoder {
    void (*start_pass) (j_decompress_ptr cinfo);
    boolean(*decode_mcu) (j_decompress_ptr cinfo, JBLOCKROW * MCU_data);
};
typedef void (*inverse_DCT_method_ptr) (j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col);
struct jpeg_inverse_dct {
    void (*start_pass) (j_decompress_ptr cinfo);
    inverse_DCT_method_ptr inverse_DCT[10];
};
struct jpeg_upsampler {
    void (*start_pass) (j_decompress_ptr cinfo);
    void (*upsample) (j_decompress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION * in_row_group_ctr, JDIMENSION in_row_groups_avail, JSAMPARRAY output_buf, JDIMENSION * out_row_ctr, JDIMENSION out_rows_avail);
    boolean need_context_rows;
};
struct jpeg_color_deconverter {
    void (*start_pass) (j_decompress_ptr cinfo);
    void (*color_convert) (j_decompress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION input_row, JSAMPARRAY output_buf, int num_rows);
};
struct jpeg_color_quantizer {
    void (*start_pass) (j_decompress_ptr cinfo, boolean is_pre_scan);
    void (*color_quantize) (j_decompress_ptr cinfo, JSAMPARRAY input_buf, JSAMPARRAY output_buf, int num_rows);
    void (*finish_pass) (j_decompress_ptr cinfo);
    void (*new_color_map) (j_decompress_ptr cinfo);
};
extern void jinit_compress_master(j_compress_ptr cinfo);
extern void jinit_c_master_control(j_compress_ptr cinfo, boolean transcode_only);
extern void jinit_c_main_controller(j_compress_ptr cinfo, boolean need_full_buffer);
extern void jinit_c_prep_controller(j_compress_ptr cinfo, boolean need_full_buffer);
extern void jinit_c_coef_controller(j_compress_ptr cinfo, boolean need_full_buffer);
extern void jinit_color_converter(j_compress_ptr cinfo);
extern void jinit_downsampler(j_compress_ptr cinfo);
extern void jinit_forward_dct(j_compress_ptr cinfo);
extern void jinit_huff_encoder(j_compress_ptr cinfo);
extern void jinit_phuff_encoder(j_compress_ptr cinfo);
extern void jinit_marker_writer(j_compress_ptr cinfo);
extern void jinit_master_decompress(j_decompress_ptr cinfo);
extern void jinit_d_main_controller(j_decompress_ptr cinfo, boolean need_full_buffer);
extern void jinit_d_coef_controller(j_decompress_ptr cinfo, boolean need_full_buffer);
extern void jinit_d_post_controller(j_decompress_ptr cinfo, boolean need_full_buffer);
extern void jinit_input_controller(j_decompress_ptr cinfo);
extern void jinit_marker_reader(j_decompress_ptr cinfo);
extern void jinit_huff_decoder(j_decompress_ptr cinfo);
extern void jinit_phuff_decoder(j_decompress_ptr cinfo);
extern void jinit_inverse_dct(j_decompress_ptr cinfo);
extern void jinit_upsampler(j_decompress_ptr cinfo);
extern void jinit_color_deconverter(j_decompress_ptr cinfo);
extern void jinit_1pass_quantizer(j_decompress_ptr cinfo);
extern void jinit_2pass_quantizer(j_decompress_ptr cinfo);
extern void jinit_merged_upsampler(j_decompress_ptr cinfo);
extern void jinit_memory_mgr(j_common_ptr cinfo);
extern long jdiv_round_up(long a, long b);
extern long jround_up(long a, long b);
extern void jcopy_sample_rows(JSAMPARRAY input_array, int source_row, JSAMPARRAY output_array, int dest_row, int num_rows, JDIMENSION num_cols);
extern void jcopy_block_row(JBLOCKROW input_row, JBLOCKROW output_row, JDIMENSION num_blocks);
extern void jzero_far(void *target, size_t bytestozero);
extern const int jpeg_zigzag_order[];
extern const int jpeg_natural_order[];
typedef enum { JMSG_NOMESSAGE, JERR_ARITH_NOTIMPL, JERR_BAD_ALIGN_TYPE, JERR_BAD_ALLOC_CHUNK, JERR_BAD_BUFFER_MODE, JERR_BAD_COMPONENT_ID, JERR_BAD_DCTSIZE, JERR_BAD_IN_COLORSPACE, JERR_BAD_J_COLORSPACE, JERR_BAD_LENGTH, JERR_BAD_LIB_VERSION, JERR_BAD_MCU_SIZE, JERR_BAD_POOL_ID, JERR_BAD_PRECISION, JERR_BAD_PROGRESSION, JERR_BAD_PROG_SCRIPT, JERR_BAD_SAMPLING, JERR_BAD_SCAN_SCRIPT, JERR_BAD_STATE, JERR_BAD_STRUCT_SIZE, JERR_BAD_VIRTUAL_ACCESS, JERR_BUFFER_SIZE, JERR_CANT_SUSPEND, JERR_CCIR601_NOTIMPL, JERR_COMPONENT_COUNT, JERR_CONVERSION_NOTIMPL, JERR_DAC_INDEX, JERR_DAC_VALUE, JERR_DHT_COUNTS, JERR_DHT_INDEX, JERR_DQT_INDEX, JERR_EMPTY_IMAGE, JERR_EMS_READ, JERR_EMS_WRITE, JERR_EOI_EXPECTED, JERR_FILE_READ, JERR_FILE_WRITE, JERR_FRACT_SAMPLE_NOTIMPL, JERR_HUFF_CLEN_OVERFLOW, JERR_HUFF_MISSING_CODE, JERR_IMAGE_TOO_BIG, JERR_INPUT_EMPTY, JERR_INPUT_EOF, JERR_MISMATCHED_QUANT_TABLE, JERR_MISSING_DATA, JERR_MODE_CHANGE, JERR_NOTIMPL, JERR_NOT_COMPILED, JERR_NO_BACKING_STORE, JERR_NO_HUFF_TABLE, JERR_NO_IMAGE, JERR_NO_QUANT_TABLE, JERR_NO_SOI, JERR_OUT_OF_MEMORY, JERR_QUANT_COMPONENTS, JERR_QUANT_FEW_COLORS, JERR_QUANT_MANY_COLORS, JERR_SOF_DUPLICATE, JERR_SOF_NO_SOS, JERR_SOF_UNSUPPORTED, JERR_SOI_DUPLICATE, JERR_SOS_NO_SOF, JERR_TFILE_CREATE, JERR_TFILE_READ, JERR_TFILE_SEEK, JERR_TFILE_WRITE, JERR_TOO_LITTLE_DATA, JERR_UNKNOWN_MARKER, JERR_VIRTUAL_BUG, JERR_WIDTH_OVERFLOW, JERR_XMS_READ, JERR_XMS_WRITE, JMSG_COPYRIGHT, JMSG_VERSION, JTRC_16BIT_TABLES, JTRC_ADOBE, JTRC_APP0, JTRC_APP14, JTRC_DAC, JTRC_DHT, JTRC_DQT, JTRC_DRI, JTRC_EMS_CLOSE, JTRC_EMS_OPEN, JTRC_EOI, JTRC_HUFFBITS, JTRC_JFIF, JTRC_JFIF_BADTHUMBNAILSIZE, JTRC_JFIF_MINOR, JTRC_JFIF_THUMBNAIL, JTRC_MISC_MARKER, JTRC_PARMLESS_MARKER, JTRC_QUANTVALS, JTRC_QUANT_3_NCOLORS, JTRC_QUANT_NCOLORS, JTRC_QUANT_SELECTED, JTRC_RECOVERY_ACTION, JTRC_RST, JTRC_SMOOTH_NOTIMPL, JTRC_SOF, JTRC_SOF_COMPONENT, JTRC_SOI, JTRC_SOS, JTRC_SOS_COMPONENT, JTRC_SOS_PARAMS, JTRC_TFILE_CLOSE, JTRC_TFILE_OPEN, JTRC_UNKNOWN_IDS, JTRC_XMS_CLOSE, JTRC_XMS_OPEN, JWRN_ADOBE_XFORM, JWRN_BOGUS_PROGRESSION, JWRN_EXTRANEOUS_DATA, JWRN_HIT_MARKER, JWRN_HUFF_BAD_CODE, JWRN_JFIF_MAJOR, JWRN_JPEG_EOF, JWRN_MUST_RESYNC, JWRN_NOT_SEQUENTIAL, JWRN_TOO_MUCH_DATA, JMSG_LASTMSGCODE } J_MESSAGE_CODE;
extern void *jpeg_get_small(j_common_ptr cinfo, size_t sizeofobject);
extern void jpeg_free_small(j_common_ptr cinfo, void *object, size_t sizeofobject);
extern void *jpeg_get_large(j_common_ptr cinfo, size_t sizeofobject);
extern void jpeg_free_large(j_common_ptr cinfo, void *object, size_t sizeofobject);
extern long jpeg_mem_available(j_common_ptr cinfo, long min_bytes_needed, long max_bytes_needed, long already_allocated);
typedef struct backing_store_struct *backing_store_ptr;
typedef struct backing_store_struct {
    void (*read_backing_store) (j_common_ptr cinfo, backing_store_ptr info, void *buffer_address, long file_offset, long byte_count);
    void (*write_backing_store) (j_common_ptr cinfo, backing_store_ptr info, void *buffer_address, long file_offset, long byte_count);
    void (*close_backing_store) (j_common_ptr cinfo, backing_store_ptr info);
    FILE *temp_file;
    char temp_name[64];
} backing_store_info;
extern void jpeg_open_backing_store(j_common_ptr cinfo, backing_store_ptr info, long total_bytes_needed);
extern long jpeg_mem_init(j_common_ptr cinfo);
extern void jpeg_mem_term(j_common_ptr cinfo);
typedef union small_pool_struct *small_pool_ptr;
typedef union small_pool_struct {
    struct {
	small_pool_ptr next;
	size_t bytes_used;
	size_t bytes_left;
    } hdr;
    double dummy;
} small_pool_hdr;
typedef union large_pool_struct *large_pool_ptr;
typedef union large_pool_struct {
    struct {
	large_pool_ptr next;
	size_t bytes_used;
	size_t bytes_left;
    } hdr;
    double dummy;
} large_pool_hdr;
typedef struct {
    struct jpeg_memory_mgr pub;
    small_pool_ptr small_list[2];
    large_pool_ptr large_list[2];
    jvirt_sarray_ptr virt_sarray_list;
    jvirt_barray_ptr virt_barray_list;
    long total_space_allocated;
    JDIMENSION last_rowsperchunk;
} my_memory_mgr;
typedef my_memory_mgr *my_mem_ptr;
struct jvirt_sarray_control {
    JSAMPARRAY mem_buffer;
    JDIMENSION rows_in_array;
    JDIMENSION samplesperrow;
    JDIMENSION maxaccess;
    JDIMENSION rows_in_mem;
    JDIMENSION rowsperchunk;
    JDIMENSION cur_start_row;
    JDIMENSION first_undef_row;
    boolean pre_zero;
    boolean dirty;
    boolean b_s_open;
    jvirt_sarray_ptr next;
    backing_store_info b_s_info;
};
struct jvirt_barray_control {
    JBLOCKARRAY mem_buffer;
    JDIMENSION rows_in_array;
    JDIMENSION blocksperrow;
    JDIMENSION maxaccess;
    JDIMENSION rows_in_mem;
    JDIMENSION rowsperchunk;
    JDIMENSION cur_start_row;
    JDIMENSION first_undef_row;
    boolean pre_zero;
    boolean dirty;
    boolean b_s_open;
    jvirt_barray_ptr next;
    backing_store_info b_s_info;
};
static void out_of_memory(j_common_ptr cinfo, int which)
{
    ((cinfo)->err->msg_code = (JERR_OUT_OF_MEMORY), (cinfo)->err->msg_parm.i[0] = (which), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
} static const size_t first_pool_slop[2] = { 1600, 16000 };
static const size_t extra_pool_slop[2] = { 0, 5000 };

static void *alloc_small(j_common_ptr cinfo, int pool_id, size_t sizeofobject)
{
    my_mem_ptr mem = (my_mem_ptr) cinfo->mem;
    small_pool_ptr hdr_ptr, prev_hdr_ptr;
    char *data_ptr;
    size_t odd_bytes, min_request, slop;
    if (sizeofobject > (size_t) (1000000000L - ((size_t) sizeof(small_pool_hdr))))
	out_of_memory(cinfo, 1);
    odd_bytes = sizeofobject % ((size_t) sizeof(double));
    if (odd_bytes > 0)
	sizeofobject += ((size_t) sizeof(double)) - odd_bytes;
    if (pool_id < 0 || pool_id >= 2)
	((cinfo)->err->msg_code = (JERR_BAD_POOL_ID), (cinfo)->err->msg_parm.i[0] = (pool_id), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    prev_hdr_ptr = ((void *) 0);
    hdr_ptr = mem->small_list[pool_id];
    while (hdr_ptr != ((void *) 0)) {
	if (hdr_ptr->hdr.bytes_left >= sizeofobject)
	    break;
	prev_hdr_ptr = hdr_ptr;
	hdr_ptr = hdr_ptr->hdr.next;
    }
    if (hdr_ptr == ((void *) 0)) {
	min_request = sizeofobject + ((size_t) sizeof(small_pool_hdr));
	if (prev_hdr_ptr == ((void *) 0))
	    slop = first_pool_slop[pool_id];
	else
	    slop = extra_pool_slop[pool_id];
	if (slop > (size_t) (1000000000L - min_request))
	    slop = (size_t) (1000000000L - min_request);
	for (;;) {
	    hdr_ptr = (small_pool_ptr) jpeg_get_small(cinfo, min_request + slop);
	    if (hdr_ptr != ((void *) 0))
		break;
	    slop /= 2;
	    if (slop < 50)
		out_of_memory(cinfo, 2);
	}
	mem->total_space_allocated += min_request + slop;
	hdr_ptr->hdr.next = ((void *) 0);
	hdr_ptr->hdr.bytes_used = 0;
	hdr_ptr->hdr.bytes_left = sizeofobject + slop;
	if (prev_hdr_ptr == ((void *) 0))
	    mem->small_list[pool_id] = hdr_ptr;
	else
	    prev_hdr_ptr->hdr.next = hdr_ptr;
    }
    data_ptr = (char *) (hdr_ptr + 1);
    data_ptr += hdr_ptr->hdr.bytes_used;
    hdr_ptr->hdr.bytes_used += sizeofobject;
    hdr_ptr->hdr.bytes_left -= sizeofobject;
    return (void *) data_ptr;
} static void *alloc_large(j_common_ptr cinfo, int pool_id, size_t sizeofobject)
{
    my_mem_ptr mem = (my_mem_ptr) cinfo->mem;
    large_pool_ptr hdr_ptr;
    size_t odd_bytes;
    if (sizeofobject > (size_t) (1000000000L - ((size_t) sizeof(large_pool_hdr))))
	out_of_memory(cinfo, 3);
    odd_bytes = sizeofobject % ((size_t) sizeof(double));
    if (odd_bytes > 0)
	sizeofobject += ((size_t) sizeof(double)) - odd_bytes;
    if (pool_id < 0 || pool_id >= 2)
	((cinfo)->err->msg_code = (JERR_BAD_POOL_ID), (cinfo)->err->msg_parm.i[0] = (pool_id), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    hdr_ptr = (large_pool_ptr) jpeg_get_large(cinfo, sizeofobject + ((size_t) sizeof(large_pool_hdr)));
    if (hdr_ptr == ((void *) 0))
	out_of_memory(cinfo, 4);
    mem->total_space_allocated += sizeofobject + ((size_t) sizeof(large_pool_hdr));
    hdr_ptr->hdr.next = mem->large_list[pool_id];
    hdr_ptr->hdr.bytes_used = sizeofobject;
    hdr_ptr->hdr.bytes_left = 0;
    mem->large_list[pool_id] = hdr_ptr;
    return (void *) (hdr_ptr + 1);
} static JSAMPARRAY alloc_sarray(j_common_ptr cinfo, int pool_id, JDIMENSION samplesperrow, JDIMENSION numrows)
{
    my_mem_ptr mem = (my_mem_ptr) cinfo->mem;
    JSAMPARRAY result;
    JSAMPROW workspace;
    JDIMENSION rowsperchunk, currow, i;
    long ltemp;
    ltemp = (1000000000L - ((size_t) sizeof(large_pool_hdr))) / ((long) samplesperrow * ((size_t) sizeof(JSAMPLE)));
    if (ltemp <= 0)
	((cinfo)->err->msg_code = (JERR_WIDTH_OVERFLOW), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    if (ltemp < (long) numrows)
	rowsperchunk = (JDIMENSION) ltemp;
    else
	rowsperchunk = numrows;
    mem->last_rowsperchunk = rowsperchunk;
    result = (JSAMPARRAY) alloc_small(cinfo, pool_id, (size_t) (numrows * ((size_t) sizeof(JSAMPROW))));
    currow = 0;
    while (currow < numrows) {
	rowsperchunk = ((rowsperchunk) < (numrows - currow) ? (rowsperchunk) : (numrows - currow));
	workspace = (JSAMPROW) alloc_large(cinfo, pool_id, (size_t) ((size_t) rowsperchunk * (size_t) samplesperrow * ((size_t) sizeof(JSAMPLE))));
	for (i = rowsperchunk; i > 0; i--) {
	    result[currow++] = workspace;
	    workspace += samplesperrow;
	}
    }
    return result;
}

static JBLOCKARRAY alloc_barray(j_common_ptr cinfo, int pool_id, JDIMENSION blocksperrow, JDIMENSION numrows)
{
    my_mem_ptr mem = (my_mem_ptr) cinfo->mem;
    JBLOCKARRAY result;
    JBLOCKROW workspace;
    JDIMENSION rowsperchunk, currow, i;
    long ltemp;
    ltemp = (1000000000L - ((size_t) sizeof(large_pool_hdr))) / ((long) blocksperrow * ((size_t) sizeof(JBLOCK)));
    if (ltemp <= 0)
	((cinfo)->err->msg_code = (JERR_WIDTH_OVERFLOW), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    if (ltemp < (long) numrows)
	rowsperchunk = (JDIMENSION) ltemp;
    else
	rowsperchunk = numrows;
    mem->last_rowsperchunk = rowsperchunk;
    result = (JBLOCKARRAY) alloc_small(cinfo, pool_id, (size_t) (numrows * ((size_t) sizeof(JBLOCKROW))));
    currow = 0;
    while (currow < numrows) {
	rowsperchunk = ((rowsperchunk) < (numrows - currow) ? (rowsperchunk) : (numrows - currow));
	workspace = (JBLOCKROW) alloc_large(cinfo, pool_id, (size_t) ((size_t) rowsperchunk * (size_t) blocksperrow * ((size_t) sizeof(JBLOCK))));
	for (i = rowsperchunk; i > 0; i--) {
	    result[currow++] = workspace;
	    workspace += blocksperrow;
	}
    }
    return result;
}

static jvirt_sarray_ptr request_virt_sarray(j_common_ptr cinfo, int pool_id, boolean pre_zero, JDIMENSION samplesperrow, JDIMENSION numrows, JDIMENSION maxaccess)
{
    my_mem_ptr mem = (my_mem_ptr) cinfo->mem;
    jvirt_sarray_ptr result;
    if (pool_id != 1)
	((cinfo)->err->msg_code = (JERR_BAD_POOL_ID), (cinfo)->err->msg_parm.i[0] = (pool_id), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    result = (jvirt_sarray_ptr) alloc_small(cinfo, pool_id, ((size_t) sizeof(struct jvirt_sarray_control)));
    result->mem_buffer = ((void *) 0);
    result->rows_in_array = numrows;
    result->samplesperrow = samplesperrow;
    result->maxaccess = maxaccess;
    result->pre_zero = pre_zero;
    result->b_s_open = 0;
    result->next = mem->virt_sarray_list;
    mem->virt_sarray_list = result;
    return result;
}

static jvirt_barray_ptr request_virt_barray(j_common_ptr cinfo, int pool_id, boolean pre_zero, JDIMENSION blocksperrow, JDIMENSION numrows, JDIMENSION maxaccess)
{
    my_mem_ptr mem = (my_mem_ptr) cinfo->mem;
    jvirt_barray_ptr result;
    if (pool_id != 1)
	((cinfo)->err->msg_code = (JERR_BAD_POOL_ID), (cinfo)->err->msg_parm.i[0] = (pool_id), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    result = (jvirt_barray_ptr) alloc_small(cinfo, pool_id, ((size_t) sizeof(struct jvirt_barray_control)));
    result->mem_buffer = ((void *) 0);
    result->rows_in_array = numrows;
    result->blocksperrow = blocksperrow;
    result->maxaccess = maxaccess;
    result->pre_zero = pre_zero;
    result->b_s_open = 0;
    result->next = mem->virt_barray_list;
    mem->virt_barray_list = result;
    return result;
}

static void realize_virt_arrays(j_common_ptr cinfo)
{
    my_mem_ptr mem = (my_mem_ptr) cinfo->mem;
    long space_per_minheight, maximum_space, avail_mem;
    long minheights, max_minheights;
    jvirt_sarray_ptr sptr;
    jvirt_barray_ptr bptr;
    space_per_minheight = 0;
    maximum_space = 0;
    for (sptr = mem->virt_sarray_list; sptr != ((void *) 0); sptr = sptr->next) {
	if (sptr->mem_buffer == ((void *) 0)) {
	    space_per_minheight += (long) sptr->maxaccess * (long) sptr->samplesperrow * ((size_t) sizeof(JSAMPLE));
	    maximum_space += (long) sptr->rows_in_array * (long) sptr->samplesperrow * ((size_t) sizeof(JSAMPLE));
	}
    }
    for (bptr = mem->virt_barray_list; bptr != ((void *) 0); bptr = bptr->next) {
	if (bptr->mem_buffer == ((void *) 0)) {
	    space_per_minheight += (long) bptr->maxaccess * (long) bptr->blocksperrow * ((size_t) sizeof(JBLOCK));
	    maximum_space += (long) bptr->rows_in_array * (long) bptr->blocksperrow * ((size_t) sizeof(JBLOCK));
	}
    }
    if (space_per_minheight <= 0)
	return;
    avail_mem = jpeg_mem_available(cinfo, space_per_minheight, maximum_space, mem->total_space_allocated);
    if (avail_mem >= maximum_space)
	max_minheights = 1000000000L;
    else {
	max_minheights = avail_mem / space_per_minheight;
	if (max_minheights <= 0)
	    max_minheights = 1;
    }
    for (sptr = mem->virt_sarray_list; sptr != ((void *) 0); sptr = sptr->next) {
	if (sptr->mem_buffer == ((void *) 0)) {
	    minheights = ((long) sptr->rows_in_array - 1L) / sptr->maxaccess + 1L;
	    if (minheights <= max_minheights) {
		sptr->rows_in_mem = sptr->rows_in_array;
	    } else {
		sptr->rows_in_mem = (JDIMENSION) (max_minheights * sptr->maxaccess);
		jpeg_open_backing_store(cinfo, &sptr->b_s_info, (long) sptr->rows_in_array * (long) sptr->samplesperrow * (long) ((size_t) sizeof(JSAMPLE)));
		sptr->b_s_open = 1;
	    }
	    sptr->mem_buffer = alloc_sarray(cinfo, 1, sptr->samplesperrow, sptr->rows_in_mem);
	    sptr->rowsperchunk = mem->last_rowsperchunk;
	    sptr->cur_start_row = 0;
	    sptr->first_undef_row = 0;
	    sptr->dirty = 0;
	}
    }
    for (bptr = mem->virt_barray_list; bptr != ((void *) 0); bptr = bptr->next) {
	if (bptr->mem_buffer == ((void *) 0)) {
	    minheights = ((long) bptr->rows_in_array - 1L) / bptr->maxaccess + 1L;
	    if (minheights <= max_minheights) {
		bptr->rows_in_mem = bptr->rows_in_array;
	    } else {
		bptr->rows_in_mem = (JDIMENSION) (max_minheights * bptr->maxaccess);
		jpeg_open_backing_store(cinfo, &bptr->b_s_info, (long) bptr->rows_in_array * (long) bptr->blocksperrow * (long) ((size_t) sizeof(JBLOCK)));
		bptr->b_s_open = 1;
	    }
	    bptr->mem_buffer = alloc_barray(cinfo, 1, bptr->blocksperrow, bptr->rows_in_mem);
	    bptr->rowsperchunk = mem->last_rowsperchunk;
	    bptr->cur_start_row = 0;
	    bptr->first_undef_row = 0;
	    bptr->dirty = 0;
	}
    }
}

//complexity is O(n) inferred by loopus
static void do_sarray_io(j_common_ptr cinfo, jvirt_sarray_ptr ptr, boolean writing)
{
    long bytesperrow, file_offset, byte_count, rows, thisrow, i;
    bytesperrow = (long) ptr->samplesperrow * ((size_t) sizeof(JSAMPLE));
    file_offset = ptr->cur_start_row * bytesperrow;
    for (i = 0; i < (long) ptr->rows_in_mem; i += ptr->rowsperchunk) {
	rows = (((long) ptr->rowsperchunk) < ((long) ptr->rows_in_mem - i) ? ((long) ptr->rowsperchunk) : ((long) ptr->rows_in_mem - i));
	thisrow = (long) ptr->cur_start_row + i;
	rows = ((rows) < ((long) ptr->first_undef_row - thisrow) ? (rows) : ((long) ptr->first_undef_row - thisrow));
	rows = ((rows) < ((long) ptr->rows_in_array - thisrow) ? (rows) : ((long) ptr->rows_in_array - thisrow));
	if (rows <= 0)
	    break;
	byte_count = rows * bytesperrow;
	if (writing)
	    (*ptr->b_s_info.write_backing_store) (cinfo, &ptr->b_s_info, (void *) ptr->mem_buffer[i], file_offset, byte_count);
	else
	    (*ptr->b_s_info.read_backing_store) (cinfo, &ptr->b_s_info, (void *) ptr->mem_buffer[i], file_offset, byte_count);
	file_offset += byte_count;
}} 
// complexity is O(n) inferred by loopus
static void do_barray_io(j_common_ptr cinfo, jvirt_barray_ptr ptr, boolean writing)
{
    long bytesperrow, file_offset, byte_count, rows, thisrow, i;
    bytesperrow = (long) ptr->blocksperrow * ((size_t) sizeof(JBLOCK));
    file_offset = ptr->cur_start_row * bytesperrow;
    for (i = 0; i < (long) ptr->rows_in_mem; i += ptr->rowsperchunk) {
	rows = (((long) ptr->rowsperchunk) < ((long) ptr->rows_in_mem - i) ? ((long) ptr->rowsperchunk) : ((long) ptr->rows_in_mem - i));
	thisrow = (long) ptr->cur_start_row + i;
	rows = ((rows) < ((long) ptr->first_undef_row - thisrow) ? (rows) : ((long) ptr->first_undef_row - thisrow));
	rows = ((rows) < ((long) ptr->rows_in_array - thisrow) ? (rows) : ((long) ptr->rows_in_array - thisrow));
	if (rows <= 0)
	    break;
	byte_count = rows * bytesperrow;
	if (writing)
	    (*ptr->b_s_info.write_backing_store) (cinfo, &ptr->b_s_info, (void *) ptr->mem_buffer[i], file_offset, byte_count);
	else
	    (*ptr->b_s_info.read_backing_store) (cinfo, &ptr->b_s_info, (void *) ptr->mem_buffer[i], file_offset, byte_count);
	file_offset += byte_count;
}} static JSAMPARRAY access_virt_sarray(j_common_ptr cinfo, jvirt_sarray_ptr ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable)
{
    JDIMENSION end_row = start_row + num_rows;
    JDIMENSION undef_row;
    if (end_row > ptr->rows_in_array || num_rows > ptr->maxaccess || ptr->mem_buffer == ((void *) 0))
	((cinfo)->err->msg_code = (JERR_BAD_VIRTUAL_ACCESS), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    if (start_row < ptr->cur_start_row || end_row > ptr->cur_start_row + ptr->rows_in_mem) {
	if (!ptr->b_s_open)
	    ((cinfo)->err->msg_code = (JERR_VIRTUAL_BUG), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	if (ptr->dirty) {
	    do_sarray_io(cinfo, ptr, 1);
	    ptr->dirty = 0;
	}
	if (start_row > ptr->cur_start_row) {
	    ptr->cur_start_row = start_row;
	} else {
	    long ltemp;
	    ltemp = (long) end_row - (long) ptr->rows_in_mem;
	    if (ltemp < 0)
		ltemp = 0;
	    ptr->cur_start_row = (JDIMENSION) ltemp;
	}
	do_sarray_io(cinfo, ptr, 0);
    }
    if (ptr->first_undef_row < end_row) {
	if (ptr->first_undef_row < start_row) {
	    if (writable)
		((cinfo)->err->msg_code = (JERR_BAD_VIRTUAL_ACCESS), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	    undef_row = start_row;
	} else {
	    undef_row = ptr->first_undef_row;
	}
	if (writable)
	    ptr->first_undef_row = end_row;
	if (ptr->pre_zero) {
	    size_t bytesperrow = (size_t) ptr->samplesperrow * ((size_t) sizeof(JSAMPLE));
	    undef_row -= ptr->cur_start_row;
	    end_row -= ptr->cur_start_row;
	    while (undef_row < end_row) {
		jzero_far((void *) ptr->mem_buffer[undef_row], bytesperrow);
		undef_row++;
	}} else {
	    if (!writable)
		((cinfo)->err->msg_code = (JERR_BAD_VIRTUAL_ACCESS), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	}
    }
    if (writable)
	ptr->dirty = 1;
    return ptr->mem_buffer + (start_row - ptr->cur_start_row);
}

static JBLOCKARRAY access_virt_barray(j_common_ptr cinfo, jvirt_barray_ptr ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable)
{
    JDIMENSION end_row = start_row + num_rows;
    JDIMENSION undef_row;
    if (end_row > ptr->rows_in_array || num_rows > ptr->maxaccess || ptr->mem_buffer == ((void *) 0))
	((cinfo)->err->msg_code = (JERR_BAD_VIRTUAL_ACCESS), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    if (start_row < ptr->cur_start_row || end_row > ptr->cur_start_row + ptr->rows_in_mem) {
	if (!ptr->b_s_open)
	    ((cinfo)->err->msg_code = (JERR_VIRTUAL_BUG), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	if (ptr->dirty) {
	    do_barray_io(cinfo, ptr, 1);
	    ptr->dirty = 0;
	}
	if (start_row > ptr->cur_start_row) {
	    ptr->cur_start_row = start_row;
	} else {
	    long ltemp;
	    ltemp = (long) end_row - (long) ptr->rows_in_mem;
	    if (ltemp < 0)
		ltemp = 0;
	    ptr->cur_start_row = (JDIMENSION) ltemp;
	}
	do_barray_io(cinfo, ptr, 0);
    }
    if (ptr->first_undef_row < end_row) {
	if (ptr->first_undef_row < start_row) {
	    if (writable)
		((cinfo)->err->msg_code = (JERR_BAD_VIRTUAL_ACCESS), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	    undef_row = start_row;
	} else {
	    undef_row = ptr->first_undef_row;
	}
	if (writable)
	    ptr->first_undef_row = end_row;
	if (ptr->pre_zero) {
	    size_t bytesperrow = (size_t) ptr->blocksperrow * ((size_t) sizeof(JBLOCK));
	    undef_row -= ptr->cur_start_row;
	    end_row -= ptr->cur_start_row;
	    while (undef_row < end_row) {
		jzero_far((void *) ptr->mem_buffer[undef_row], bytesperrow);
		undef_row++;
	}} else {
	    if (!writable)
		((cinfo)->err->msg_code = (JERR_BAD_VIRTUAL_ACCESS), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	}
    }
    if (writable)
	ptr->dirty = 1;
    return ptr->mem_buffer + (start_row - ptr->cur_start_row);
}

static void free_pool(j_common_ptr cinfo, int pool_id)
{
    my_mem_ptr mem = (my_mem_ptr) cinfo->mem;
    small_pool_ptr shdr_ptr;
    large_pool_ptr lhdr_ptr;
    size_t space_freed;
    if (pool_id < 0 || pool_id >= 2)
	((cinfo)->err->msg_code = (JERR_BAD_POOL_ID), (cinfo)->err->msg_parm.i[0] = (pool_id), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    if (pool_id == 1) {
	jvirt_sarray_ptr sptr;
	jvirt_barray_ptr bptr;
	for (sptr = mem->virt_sarray_list; sptr != ((void *) 0); sptr = sptr->next) {
	    if (sptr->b_s_open) {
		sptr->b_s_open = 0;
		(*sptr->b_s_info.close_backing_store) (cinfo, &sptr->b_s_info);
	    }
	}
	mem->virt_sarray_list = ((void *) 0);
	for (bptr = mem->virt_barray_list; bptr != ((void *) 0); bptr = bptr->next) {
	    if (bptr->b_s_open) {
		bptr->b_s_open = 0;
		(*bptr->b_s_info.close_backing_store) (cinfo, &bptr->b_s_info);
	    }
	}
	mem->virt_barray_list = ((void *) 0);
    }
    lhdr_ptr = mem->large_list[pool_id];
    mem->large_list[pool_id] = ((void *) 0);
    while (lhdr_ptr != ((void *) 0)) {
	large_pool_ptr next_lhdr_ptr = lhdr_ptr->hdr.next;
	space_freed = lhdr_ptr->hdr.bytes_used + lhdr_ptr->hdr.bytes_left + ((size_t) sizeof(large_pool_hdr));
	jpeg_free_large(cinfo, (void *) lhdr_ptr, space_freed);
	mem->total_space_allocated -= space_freed;
	lhdr_ptr = next_lhdr_ptr;
    } shdr_ptr = mem->small_list[pool_id];
    mem->small_list[pool_id] = ((void *) 0);
    while (shdr_ptr != ((void *) 0)) {
	small_pool_ptr next_shdr_ptr = shdr_ptr->hdr.next;
	space_freed = shdr_ptr->hdr.bytes_used + shdr_ptr->hdr.bytes_left + ((size_t) sizeof(small_pool_hdr));
	jpeg_free_small(cinfo, (void *) shdr_ptr, space_freed);
	mem->total_space_allocated -= space_freed;
	shdr_ptr = next_shdr_ptr;
}} static void self_destruct(j_common_ptr cinfo)
{
    int pool;
    for (pool = 2 - 1; pool >= 0; pool--) {
	free_pool(cinfo, pool);
    }
    jpeg_free_small(cinfo, (void *) cinfo->mem, ((size_t) sizeof(my_memory_mgr)));
    cinfo->mem = ((void *) 0);
    jpeg_mem_term(cinfo);
} void jinit_memory_mgr(j_common_ptr cinfo)
{
    my_mem_ptr mem;
    long max_to_use;
    int pool;
    size_t test_mac;
    cinfo->mem = ((void *) 0);
    if ((((size_t) sizeof(double)) & (((size_t) sizeof(double)) - 1)) != 0)
	((cinfo)->err->msg_code = (JERR_BAD_ALIGN_TYPE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    test_mac = (size_t) 1000000000L;
    if ((long) test_mac != 1000000000L || (1000000000L % ((size_t) sizeof(double))) != 0)
	((cinfo)->err->msg_code = (JERR_BAD_ALLOC_CHUNK), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    max_to_use = jpeg_mem_init(cinfo);
    mem = (my_mem_ptr) jpeg_get_small(cinfo, ((size_t) sizeof(my_memory_mgr)));
    if (mem == ((void *) 0)) {
	jpeg_mem_term(cinfo);
	((cinfo)->err->msg_code = (JERR_OUT_OF_MEMORY), (cinfo)->err->msg_parm.i[0] = (0), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    }
    mem->pub.alloc_small = alloc_small;
    mem->pub.alloc_large = alloc_large;
    mem->pub.alloc_sarray = alloc_sarray;
    mem->pub.alloc_barray = alloc_barray;
    mem->pub.request_virt_sarray = request_virt_sarray;
    mem->pub.request_virt_barray = request_virt_barray;
    mem->pub.realize_virt_arrays = realize_virt_arrays;
    mem->pub.access_virt_sarray = access_virt_sarray;
    mem->pub.access_virt_barray = access_virt_barray;
    mem->pub.free_pool = free_pool;
    mem->pub.self_destruct = self_destruct;
    mem->pub.max_memory_to_use = max_to_use;
    for (pool = 2 - 1; pool >= 0; pool--) {
	mem->small_list[pool] = ((void *) 0);
	mem->large_list[pool] = ((void *) 0);
    } mem->virt_sarray_list = ((void *) 0);
    mem->virt_barray_list = ((void *) 0);
    mem->total_space_allocated = ((size_t) sizeof(my_memory_mgr));
    cinfo->mem = &mem->pub; {
	char *memenv;
	if ((memenv = getenv("JPEGMEM")) != ((void *) 0)) {
	    char ch = 'x';
	    if (sscanf(memenv, "%ld%c", &max_to_use, &ch) > 0) {
		if (ch == 'm' || ch == 'M')
		    max_to_use *= 1000L;
		mem->pub.max_memory_to_use = max_to_use * 1000L;
	    }
	}
    }
}
