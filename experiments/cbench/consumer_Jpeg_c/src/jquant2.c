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
typedef UINT16 histcell;
typedef histcell *histptr;
typedef histcell hist1d[(1 << 5)];
typedef hist1d *hist2d;
typedef hist2d *hist3d;
typedef INT16 FSERROR;
typedef int LOCFSERROR;
typedef FSERROR *FSERRPTR;
typedef struct {
    struct jpeg_color_quantizer pub;
    JSAMPARRAY sv_colormap;
    int desired;
    hist3d histogram;
    boolean needs_zeroed;
    FSERRPTR fserrors;
    boolean on_odd_row;
    int *error_limiter;
} my_cquantizer;
typedef my_cquantizer *my_cquantize_ptr;
//complexity is O(n^2) inferred by loopus
static void prescan_quantize(j_decompress_ptr cinfo, JSAMPARRAY input_buf, JSAMPARRAY output_buf, int num_rows)
{
    my_cquantize_ptr cquantize = (my_cquantize_ptr) cinfo->cquantize;
    register JSAMPROW ptr;
    register histptr histp;
    register hist3d histogram = cquantize->histogram;
    int row;
    JDIMENSION col;
    JDIMENSION width = cinfo->output_width;
    for (row = 0; row < num_rows; row++) {
	ptr = input_buf[row];
	for (col = width; col > 0; col--) {
	    histp = &histogram[((int) (ptr[0])) >> (8 - 5)][((int) (ptr[1])) >> (8 - 6)][((int) (ptr[2])) >> (8 - 5)];
	    if (++(*histp) <= 0)
		(*histp)--;
	    ptr += 3;
	}
    }
}

typedef struct {
    int c0min, c0max;
    int c1min, c1max;
    int c2min, c2max;
    INT32 volume;
    long colorcount;
} box;
typedef box *boxptr;
static boxptr find_biggest_color_pop(boxptr boxlist, int numboxes)
{
    register boxptr boxp;
    register int i;
    register long maxc = 0;
    boxptr which = ((void *) 0);
    for (i = 0, boxp = boxlist; i < numboxes; i++, boxp++) {
	if (boxp->colorcount > maxc && boxp->volume > 0) {
	    which = boxp;
	    maxc = boxp->colorcount;
	}
    }
    return which;
}

static boxptr find_biggest_volume(boxptr boxlist, int numboxes)
{
    register boxptr boxp;
    register int i;
    register INT32 maxv = 0;
    boxptr which = ((void *) 0);
    for (i = 0, boxp = boxlist; i < numboxes; i++, boxp++) {
	if (boxp->volume > maxv) {
	    which = boxp;
	    maxv = boxp->volume;
	}
    }
    return which;
}
// complexity is O(n^3) inferred by loopus
static void update_box(j_decompress_ptr cinfo, boxptr boxp)
{
    my_cquantize_ptr cquantize = (my_cquantize_ptr) cinfo->cquantize;
    hist3d histogram = cquantize->histogram;
    histptr histp;
    int c0, c1, c2;
    int c0min, c0max, c1min, c1max, c2min, c2max;
    INT32 dist0, dist1, dist2;
    long ccount;
    c0min = boxp->c0min;
    c0max = boxp->c0max;
    c1min = boxp->c1min;
    c1max = boxp->c1max;
    c2min = boxp->c2min;
    c2max = boxp->c2max;
    if (c0max > c0min)
	for (c0 = c0min; c0 <= c0max; c0++)
	    for (c1 = c1min; c1 <= c1max; c1++) {
		histp = &histogram[c0][c1][c2min];
		for (c2 = c2min; c2 <= c2max; c2++)
		    if (*histp++ != 0) {
			boxp->c0min = c0min = c0;
			goto have_c0min;
		    }
	    }
  have_c0min:if (c0max > c0min)
	for (c0 = c0max; c0 >= c0min; c0--)
	    for (c1 = c1min; c1 <= c1max; c1++) {
		histp = &histogram[c0][c1][c2min];
		for (c2 = c2min; c2 <= c2max; c2++)
		    if (*histp++ != 0) {
			boxp->c0max = c0max = c0;
			goto have_c0max;
		    }
	    }
  have_c0max:if (c1max > c1min)
	for (c1 = c1min; c1 <= c1max; c1++)
	    for (c0 = c0min; c0 <= c0max; c0++) {
		histp = &histogram[c0][c1][c2min];
		for (c2 = c2min; c2 <= c2max; c2++)
		    if (*histp++ != 0) {
			boxp->c1min = c1min = c1;
			goto have_c1min;
		    }
	    }
  have_c1min:if (c1max > c1min)
	for (c1 = c1max; c1 >= c1min; c1--)
	    for (c0 = c0min; c0 <= c0max; c0++) {
		histp = &histogram[c0][c1][c2min];
		for (c2 = c2min; c2 <= c2max; c2++)
		    if (*histp++ != 0) {
			boxp->c1max = c1max = c1;
			goto have_c1max;
		    }
	    }
  have_c1max:if (c2max > c2min)
	for (c2 = c2min; c2 <= c2max; c2++)
	    for (c0 = c0min; c0 <= c0max; c0++) {
		histp = &histogram[c0][c1min][c2];
		for (c1 = c1min; c1 <= c1max; c1++, histp += (1 << 5))
		    if (*histp != 0) {
			boxp->c2min = c2min = c2;
			goto have_c2min;
		    }
	    }
  have_c2min:if (c2max > c2min)
	for (c2 = c2max; c2 >= c2min; c2--)
	    for (c0 = c0min; c0 <= c0max; c0++) {
		histp = &histogram[c0][c1min][c2];
		for (c1 = c1min; c1 <= c1max; c1++, histp += (1 << 5))
		    if (*histp != 0) {
			boxp->c2max = c2max = c2;
			goto have_c2max;
		    }
	    }
  have_c2max:dist0 = ((c0max - c0min) << (8 - 5)) * 2;
    dist1 = ((c1max - c1min) << (8 - 6)) * 3;
    dist2 = ((c2max - c2min) << (8 - 5)) * 1;
    boxp->volume = dist0 * dist0 + dist1 * dist1 + dist2 * dist2;
    ccount = 0;
    for (c0 = c0min; c0 <= c0max; c0++)
	for (c1 = c1min; c1 <= c1max; c1++) {
	    histp = &histogram[c0][c1][c2min];
	    for (c2 = c2min; c2 <= c2max; c2++, histp++)
		if (*histp != 0) {
		    ccount++;
		}
	}
    boxp->colorcount = ccount;
}

static int median_cut(j_decompress_ptr cinfo, boxptr boxlist, int numboxes, int desired_colors)
{
    int n, lb;
    int c0, c1, c2, cmax;
    register boxptr b1, b2;
    while (numboxes < desired_colors) {
	if (numboxes * 2 <= desired_colors) {
	    b1 = find_biggest_color_pop(boxlist, numboxes);
	} else {
	    b1 = find_biggest_volume(boxlist, numboxes);
	}
	if (b1 == ((void *) 0))
	    break;
	b2 = &boxlist[numboxes];
	b2->c0max = b1->c0max;
	b2->c1max = b1->c1max;
	b2->c2max = b1->c2max;
	b2->c0min = b1->c0min;
	b2->c1min = b1->c1min;
	b2->c2min = b1->c2min;
	c0 = ((b1->c0max - b1->c0min) << (8 - 5)) * 2;
	c1 = ((b1->c1max - b1->c1min) << (8 - 6)) * 3;
	c2 = ((b1->c2max - b1->c2min) << (8 - 5)) * 1;
	cmax = c1;
	n = 1;
	if (c0 > cmax) {
	    cmax = c0;
	    n = 0;
	}
	if (c2 > cmax) {
	    n = 2;
	}
	switch (n) {
	case 0:
	    lb = (b1->c0max + b1->c0min) / 2;
	    b1->c0max = lb;
	    b2->c0min = lb + 1;
	    break;
	case 1:
	    lb = (b1->c1max + b1->c1min) / 2;
	    b1->c1max = lb;
	    b2->c1min = lb + 1;
	    break;
	case 2:
	    lb = (b1->c2max + b1->c2min) / 2;
	    b1->c2max = lb;
	    b2->c2min = lb + 1;
	    break;
	}
	update_box(cinfo, b1);
	update_box(cinfo, b2);
	numboxes++;
    }
    return numboxes;
}

//complexity is O(n^3) inferred by loopus
static void compute_color(j_decompress_ptr cinfo, boxptr boxp, int icolor)
{
    my_cquantize_ptr cquantize = (my_cquantize_ptr) cinfo->cquantize;
    hist3d histogram = cquantize->histogram;
    histptr histp;
    int c0, c1, c2;
    int c0min, c0max, c1min, c1max, c2min, c2max;
    long count;
    long total = 0;
    long c0total = 0;
    long c1total = 0;
    long c2total = 0;
    c0min = boxp->c0min;
    c0max = boxp->c0max;
    c1min = boxp->c1min;
    c1max = boxp->c1max;
    c2min = boxp->c2min;
    c2max = boxp->c2max;
    for (c0 = c0min; c0 <= c0max; c0++)
	for (c1 = c1min; c1 <= c1max; c1++) {
	    histp = &histogram[c0][c1][c2min];
	    for (c2 = c2min; c2 <= c2max; c2++) {
		if ((count = *histp++) != 0) {
		    total += count;
		    c0total += ((c0 << (8 - 5)) + ((1 << (8 - 5)) >> 1)) * count;
		    c1total += ((c1 << (8 - 6)) + ((1 << (8 - 6)) >> 1)) * count;
		    c2total += ((c2 << (8 - 5)) + ((1 << (8 - 5)) >> 1)) * count;
		}
	    }
	}
    cinfo->colormap[0][icolor] = (JSAMPLE) ((c0total + (total >> 1)) / total);
    cinfo->colormap[1][icolor] = (JSAMPLE) ((c1total + (total >> 1)) / total);
    cinfo->colormap[2][icolor] = (JSAMPLE) ((c2total + (total >> 1)) / total);
}

//complexity is O(n) inferrred by loopus
static void select_colors(j_decompress_ptr cinfo, int desired_colors)
{
    boxptr boxlist;
    int numboxes;
    int i;
    boxlist = (boxptr) (*cinfo->mem->alloc_small) ((j_common_ptr) cinfo, 1, desired_colors * ((size_t) sizeof(box)));
    numboxes = 1;
    boxlist[0].c0min = 0;
    boxlist[0].c0max = 255 >> (8 - 5);
    boxlist[0].c1min = 0;
    boxlist[0].c1max = 255 >> (8 - 6);
    boxlist[0].c2min = 0;
    boxlist[0].c2max = 255 >> (8 - 5);
    update_box(cinfo, &boxlist[0]);
    numboxes = median_cut(cinfo, boxlist, numboxes, desired_colors);
    for (i = 0; i < numboxes; i++)
	compute_color(cinfo, &boxlist[i], i);
    cinfo->actual_number_of_colors = numboxes;
    ((cinfo)->err->msg_code = (JTRC_QUANT_SELECTED), (cinfo)->err->msg_parm.i[0] = (numboxes), (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (1)));
}
//complexity is O(n) inferred by loopus
static int find_nearby_colors(j_decompress_ptr cinfo, int minc0, int minc1, int minc2, JSAMPLE colorlist[])
{
    int numcolors = cinfo->actual_number_of_colors;
    int maxc0, maxc1, maxc2;
    int centerc0, centerc1, centerc2;
    int i, x, ncolors;
    INT32 minmaxdist, min_dist, max_dist, tdist;
    INT32 mindist[(255 + 1)];
    maxc0 = minc0 + ((1 << ((8 - 5) + (5 - 3))) - (1 << (8 - 5)));
    centerc0 = (minc0 + maxc0) >> 1;
    maxc1 = minc1 + ((1 << ((8 - 6) + (6 - 3))) - (1 << (8 - 6)));
    centerc1 = (minc1 + maxc1) >> 1;
    maxc2 = minc2 + ((1 << ((8 - 5) + (5 - 3))) - (1 << (8 - 5)));
    centerc2 = (minc2 + maxc2) >> 1;
    minmaxdist = 0x7FFFFFFFL;
    for (i = 0; i < numcolors; i++) {
	x = ((int) (cinfo->colormap[0][i]));
	if (x < minc0) {
	    tdist = (x - minc0) * 2;
	    min_dist = tdist * tdist;
	    tdist = (x - maxc0) * 2;
	    max_dist = tdist * tdist;
	} else if (x > maxc0) {
	    tdist = (x - maxc0) * 2;
	    min_dist = tdist * tdist;
	    tdist = (x - minc0) * 2;
	    max_dist = tdist * tdist;
	} else {
	    min_dist = 0;
	    if (x <= centerc0) {
		tdist = (x - maxc0) * 2;
		max_dist = tdist * tdist;
	    } else {
		tdist = (x - minc0) * 2;
		max_dist = tdist * tdist;
	    }
	}
	x = ((int) (cinfo->colormap[1][i]));
	if (x < minc1) {
	    tdist = (x - minc1) * 3;
	    min_dist += tdist * tdist;
	    tdist = (x - maxc1) * 3;
	    max_dist += tdist * tdist;
	} else if (x > maxc1) {
	    tdist = (x - maxc1) * 3;
	    min_dist += tdist * tdist;
	    tdist = (x - minc1) * 3;
	    max_dist += tdist * tdist;
	} else {
	    if (x <= centerc1) {
		tdist = (x - maxc1) * 3;
		max_dist += tdist * tdist;
	    } else {
		tdist = (x - minc1) * 3;
		max_dist += tdist * tdist;
	    }
	}
	x = ((int) (cinfo->colormap[2][i]));
	if (x < minc2) {
	    tdist = (x - minc2) * 1;
	    min_dist += tdist * tdist;
	    tdist = (x - maxc2) * 1;
	    max_dist += tdist * tdist;
	} else if (x > maxc2) {
	    tdist = (x - maxc2) * 1;
	    min_dist += tdist * tdist;
	    tdist = (x - minc2) * 1;
	    max_dist += tdist * tdist;
	} else {
	    if (x <= centerc2) {
		tdist = (x - maxc2) * 1;
		max_dist += tdist * tdist;
	    } else {
		tdist = (x - minc2) * 1;
		max_dist += tdist * tdist;
	    }
	}
	mindist[i] = min_dist;
	if (max_dist < minmaxdist)
	    minmaxdist = max_dist;
    }
    ncolors = 0;
    for (i = 0; i < numcolors; i++) {
	if (mindist[i] <= minmaxdist)
	    colorlist[ncolors++] = (JSAMPLE) i;
    }
    return ncolors;
}
//complexity is O(n) inferred by loopus
static void find_best_colors(j_decompress_ptr cinfo, int minc0, int minc1, int minc2, int numcolors, JSAMPLE colorlist[], JSAMPLE bestcolor[])
{
    int ic0, ic1, ic2;
    int i, icolor;
    register INT32 *bptr;
    JSAMPLE *cptr;
    INT32 dist0, dist1;
    register INT32 dist2;
    INT32 xx0, xx1;
    register INT32 xx2;
    INT32 inc0, inc1, inc2;
    INT32 bestdist[(1 << (5 - 3)) * (1 << (6 - 3)) * (1 << (5 - 3))];
    bptr = bestdist;
    for (i = (1 << (5 - 3)) * (1 << (6 - 3)) * (1 << (5 - 3)) - 1; i >= 0; i--)
	*bptr++ = 0x7FFFFFFFL;
    for (i = 0; i < numcolors; i++) {
	icolor = ((int) (colorlist[i]));
	inc0 = (minc0 - ((int) (cinfo->colormap[0][icolor]))) * 2;
	dist0 = inc0 * inc0;
	inc1 = (minc1 - ((int) (cinfo->colormap[1][icolor]))) * 3;
	dist0 += inc1 * inc1;
	inc2 = (minc2 - ((int) (cinfo->colormap[2][icolor]))) * 1;
	dist0 += inc2 * inc2;
	inc0 = inc0 * (2 * ((1 << (8 - 5)) * 2)) + ((1 << (8 - 5)) * 2) * ((1 << (8 - 5)) * 2);
	inc1 = inc1 * (2 * ((1 << (8 - 6)) * 3)) + ((1 << (8 - 6)) * 3) * ((1 << (8 - 6)) * 3);
	inc2 = inc2 * (2 * ((1 << (8 - 5)) * 1)) + ((1 << (8 - 5)) * 1) * ((1 << (8 - 5)) * 1);
	bptr = bestdist;
	cptr = bestcolor;
	xx0 = inc0;
	for (ic0 = (1 << (5 - 3)) - 1; ic0 >= 0; ic0--) {
	    dist1 = dist0;
	    xx1 = inc1;
	    for (ic1 = (1 << (6 - 3)) - 1; ic1 >= 0; ic1--) {
		dist2 = dist1;
		xx2 = inc2;
		for (ic2 = (1 << (5 - 3)) - 1; ic2 >= 0; ic2--) {
		    if (dist2 < *bptr) {
			*bptr = dist2;
			*cptr = (JSAMPLE) icolor;
		    }
		    dist2 += xx2;
		    xx2 += 2 * ((1 << (8 - 5)) * 1) * ((1 << (8 - 5)) * 1);
		    bptr++;
		    cptr++;
		}
		dist1 += xx1;
		xx1 += 2 * ((1 << (8 - 6)) * 3) * ((1 << (8 - 6)) * 3);
	    }
	    dist0 += xx0;
	    xx0 += 2 * ((1 << (8 - 5)) * 2) * ((1 << (8 - 5)) * 2);
	}
    }
}

static void fill_inverse_cmap(j_decompress_ptr cinfo, int c0, int c1, int c2)
{
    my_cquantize_ptr cquantize = (my_cquantize_ptr) cinfo->cquantize;
    hist3d histogram = cquantize->histogram;
    int minc0, minc1, minc2;
    int ic0, ic1, ic2;
    register JSAMPLE *cptr;
    register histptr cachep;
    JSAMPLE colorlist[(255 + 1)];
    int numcolors;
    JSAMPLE bestcolor[(1 << (5 - 3)) * (1 << (6 - 3)) * (1 << (5 - 3))];
    c0 >>= (5 - 3);
    c1 >>= (6 - 3);
    c2 >>= (5 - 3);
    minc0 = (c0 << ((8 - 5) + (5 - 3))) + ((1 << (8 - 5)) >> 1);
    minc1 = (c1 << ((8 - 6) + (6 - 3))) + ((1 << (8 - 6)) >> 1);
    minc2 = (c2 << ((8 - 5) + (5 - 3))) + ((1 << (8 - 5)) >> 1);
    numcolors = find_nearby_colors(cinfo, minc0, minc1, minc2, colorlist);
    find_best_colors(cinfo, minc0, minc1, minc2, numcolors, colorlist, bestcolor);
    c0 <<= (5 - 3);
    c1 <<= (6 - 3);
    c2 <<= (5 - 3);
    cptr = bestcolor;
    for (ic0 = 0; ic0 < (1 << (5 - 3)); ic0++) {
	for (ic1 = 0; ic1 < (1 << (6 - 3)); ic1++) {
	    cachep = &histogram[c0 + ic0][c1 + ic1][c2];
	    for (ic2 = 0; ic2 < (1 << (5 - 3)); ic2++) {
		*cachep++ = (histcell) (((int) (*cptr++)) + 1);
}}}} 
//complexity is O(n^2) inferred by loopus
static void pass2_no_dither(j_decompress_ptr cinfo, JSAMPARRAY input_buf, JSAMPARRAY output_buf, int num_rows)
{
    my_cquantize_ptr cquantize = (my_cquantize_ptr) cinfo->cquantize;
    hist3d histogram = cquantize->histogram;
    register JSAMPROW inptr, outptr;
    register histptr cachep;
    register int c0, c1, c2;
    int row;
    JDIMENSION col;
    JDIMENSION width = cinfo->output_width;
    for (row = 0; row < num_rows; row++) {
	inptr = input_buf[row];
	outptr = output_buf[row];
	for (col = width; col > 0; col--) {
	    c0 = ((int) (*inptr++)) >> (8 - 5);
	    c1 = ((int) (*inptr++)) >> (8 - 6);
	    c2 = ((int) (*inptr++)) >> (8 - 5);
	    cachep = &histogram[c0][c1][c2];
	    if (*cachep == 0)
		fill_inverse_cmap(cinfo, c0, c1, c2);
	    *outptr++ = (JSAMPLE) (*cachep - 1);
	}
    }
}
//complexity is O(n^2) inferred by loopus
static void pass2_fs_dither(j_decompress_ptr cinfo, JSAMPARRAY input_buf, JSAMPARRAY output_buf, int num_rows)
{
    my_cquantize_ptr cquantize = (my_cquantize_ptr) cinfo->cquantize;
    hist3d histogram = cquantize->histogram;
    register LOCFSERROR cur0, cur1, cur2;
    LOCFSERROR belowerr0, belowerr1, belowerr2;
    LOCFSERROR bpreverr0, bpreverr1, bpreverr2;
    register FSERRPTR errorptr;
    JSAMPROW inptr;
    JSAMPROW outptr;
    histptr cachep;
    int dir;
    int dir3;
    int row;
    JDIMENSION col;
    JDIMENSION width = cinfo->output_width;
    JSAMPLE *range_limit = cinfo->sample_range_limit;
    int *error_limit = cquantize->error_limiter;
    JSAMPROW colormap0 = cinfo->colormap[0];
    JSAMPROW colormap1 = cinfo->colormap[1];
    JSAMPROW colormap2 = cinfo->colormap[2];
    for (row = 0; row < num_rows; row++) {
	inptr = input_buf[row];
	outptr = output_buf[row];
	if (cquantize->on_odd_row) {
	    inptr += (width - 1) * 3;
	    outptr += width - 1;
	    dir = -1;
	    dir3 = -3;
	    errorptr = cquantize->fserrors + (width + 1) * 3;
	    cquantize->on_odd_row = 0;
	} else {
	    dir = 1;
	    dir3 = 3;
	    errorptr = cquantize->fserrors;
	    cquantize->on_odd_row = 1;
	}
	cur0 = cur1 = cur2 = 0;
	belowerr0 = belowerr1 = belowerr2 = 0;
	bpreverr0 = bpreverr1 = bpreverr2 = 0;
	for (col = width; col > 0; col--) {
	    cur0 = ((cur0 + errorptr[dir3 + 0] + 8) >> (4));
	    cur1 = ((cur1 + errorptr[dir3 + 1] + 8) >> (4));
	    cur2 = ((cur2 + errorptr[dir3 + 2] + 8) >> (4));
	    cur0 = error_limit[cur0];
	    cur1 = error_limit[cur1];
	    cur2 = error_limit[cur2];
	    cur0 += ((int) (inptr[0]));
	    cur1 += ((int) (inptr[1]));
	    cur2 += ((int) (inptr[2]));
	    cur0 = ((int) (range_limit[cur0]));
	    cur1 = ((int) (range_limit[cur1]));
	    cur2 = ((int) (range_limit[cur2]));
	    cachep = &histogram[cur0 >> (8 - 5)][cur1 >> (8 - 6)][cur2 >> (8 - 5)];
	    if (*cachep == 0)
		fill_inverse_cmap(cinfo, cur0 >> (8 - 5), cur1 >> (8 - 6), cur2 >> (8 - 5)); {
		register int pixcode = *cachep - 1;
		*outptr = (JSAMPLE) pixcode;
		cur0 -= ((int) (colormap0[pixcode]));
		cur1 -= ((int) (colormap1[pixcode]));
		cur2 -= ((int) (colormap2[pixcode]));
		} {
		    register LOCFSERROR bnexterr, delta;
		    bnexterr = cur0;
		    delta = cur0 * 2;
		    cur0 += delta;
		    errorptr[0] = (FSERROR) (bpreverr0 + cur0);
		    cur0 += delta;
		    bpreverr0 = belowerr0 + cur0;
		    belowerr0 = bnexterr;
		    cur0 += delta;
		    bnexterr = cur1;
		    delta = cur1 * 2;
		    cur1 += delta;
		    errorptr[1] = (FSERROR) (bpreverr1 + cur1);
		    cur1 += delta;
		    bpreverr1 = belowerr1 + cur1;
		    belowerr1 = bnexterr;
		    cur1 += delta;
		    bnexterr = cur2;
		    delta = cur2 * 2;
		    cur2 += delta;
		    errorptr[2] = (FSERROR) (bpreverr2 + cur2);
		    cur2 += delta;
		    bpreverr2 = belowerr2 + cur2;
		    belowerr2 = bnexterr;
		    cur2 += delta;
		} inptr += dir3;
		outptr += dir;
		errorptr += dir3;
	} errorptr[0] = (FSERROR) bpreverr0;
	errorptr[1] = (FSERROR) bpreverr1;
	errorptr[2] = (FSERROR) bpreverr2;
}} static void init_error_limit(j_decompress_ptr cinfo)
{
    my_cquantize_ptr cquantize = (my_cquantize_ptr) cinfo->cquantize;
    int *table;
    int in, out;
    table = (int *) (*cinfo->mem->alloc_small) ((j_common_ptr) cinfo, 1, (255 * 2 + 1) * ((size_t) sizeof(int)));
    table += 255;
    cquantize->error_limiter = table;
    out = 0;
    for (in = 0; in < ((255 + 1) / 16); in++, out++) {
	table[in] = out;
	table[-in] = -out;
    }
    for (; in < ((255 + 1) / 16) * 3; in++, out += (in & 1) ? 0 : 1) {
	table[in] = out;
	table[-in] = -out;
    }
    for (; in <= 255; in++) {
	table[in] = out;
	table[-in] = -out;
    }
}

static void finish_pass1(j_decompress_ptr cinfo)
{
    my_cquantize_ptr cquantize = (my_cquantize_ptr) cinfo->cquantize;
    cinfo->colormap = cquantize->sv_colormap;
    select_colors(cinfo, cquantize->desired);
    cquantize->needs_zeroed = 1;
} static void finish_pass2(j_decompress_ptr cinfo)
{
} static void start_pass_2_quant(j_decompress_ptr cinfo, boolean is_pre_scan)
{
    my_cquantize_ptr cquantize = (my_cquantize_ptr) cinfo->cquantize;
    hist3d histogram = cquantize->histogram;
    int i;
    if (cinfo->dither_mode != JDITHER_NONE)
	cinfo->dither_mode = JDITHER_FS;
    if (is_pre_scan) {
	cquantize->pub.color_quantize = prescan_quantize;
	cquantize->pub.finish_pass = finish_pass1;
	cquantize->needs_zeroed = 1;
    } else {
	if (cinfo->dither_mode == JDITHER_FS)
	    cquantize->pub.color_quantize = pass2_fs_dither;
	else
	    cquantize->pub.color_quantize = pass2_no_dither;
	cquantize->pub.finish_pass = finish_pass2;
	i = cinfo->actual_number_of_colors;
	if (i < 1)
	    ((cinfo)->err->msg_code = (JERR_QUANT_FEW_COLORS), (cinfo)->err->msg_parm.i[0] = (1), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	if (i > (255 + 1))
	    ((cinfo)->err->msg_code = (JERR_QUANT_MANY_COLORS), (cinfo)->err->msg_parm.i[0] = ((255 + 1)), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	if (cinfo->dither_mode == JDITHER_FS) {
	    size_t arraysize = (size_t) ((cinfo->output_width + 2) * (3 * ((size_t) sizeof(FSERROR))));
	    if (cquantize->fserrors == ((void *) 0))
		cquantize->fserrors = (FSERRPTR) (*cinfo->mem->alloc_large) ((j_common_ptr) cinfo, 1, arraysize);
	    jzero_far((void *) cquantize->fserrors, arraysize);
	    if (cquantize->error_limiter == ((void *) 0))
		init_error_limit(cinfo);
	    cquantize->on_odd_row = 0;
	}
    } if (cquantize->needs_zeroed) {
	for (i = 0; i < (1 << 5); i++) {
	    jzero_far((void *) histogram[i], (1 << 6) * (1 << 5) * ((size_t) sizeof(histcell)));
	}
	cquantize->needs_zeroed = 0;
    }
}

static void new_color_map_2_quant(j_decompress_ptr cinfo)
{
    my_cquantize_ptr cquantize = (my_cquantize_ptr) cinfo->cquantize;
    cquantize->needs_zeroed = 1;
} void jinit_2pass_quantizer(j_decompress_ptr cinfo)
{
    my_cquantize_ptr cquantize;
    int i;
    cquantize = (my_cquantize_ptr) (*cinfo->mem->alloc_small) ((j_common_ptr) cinfo, 1, ((size_t) sizeof(my_cquantizer)));
    cinfo->cquantize = (struct jpeg_color_quantizer *) cquantize;
    cquantize->pub.start_pass = start_pass_2_quant;
    cquantize->pub.new_color_map = new_color_map_2_quant;
    cquantize->fserrors = ((void *) 0);
    cquantize->error_limiter = ((void *) 0);
    if (cinfo->out_color_components != 3)
	((cinfo)->err->msg_code = (JERR_NOTIMPL), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    cquantize->histogram = (hist3d) (*cinfo->mem->alloc_small) ((j_common_ptr) cinfo, 1, (1 << 5) * ((size_t) sizeof(hist2d)));
    for (i = 0; i < (1 << 5); i++) {
	cquantize->histogram[i] = (hist2d) (*cinfo->mem->alloc_large) ((j_common_ptr) cinfo, 1, (1 << 6) * (1 << 5) * ((size_t) sizeof(histcell)));
    }
    cquantize->needs_zeroed = 1;
    if (cinfo->enable_2pass_quant) {
	int desired = cinfo->desired_number_of_colors;
	if (desired < 8)
	    ((cinfo)->err->msg_code = (JERR_QUANT_FEW_COLORS), (cinfo)->err->msg_parm.i[0] = (8), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	if (desired > (255 + 1))
	    ((cinfo)->err->msg_code = (JERR_QUANT_MANY_COLORS), (cinfo)->err->msg_parm.i[0] = ((255 + 1)), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	cquantize->sv_colormap = (*cinfo->mem->alloc_sarray) ((j_common_ptr) cinfo, 1, (JDIMENSION) desired, (JDIMENSION) 3);
	cquantize->desired = desired;
    } else
	cquantize->sv_colormap = ((void *) 0);
    if (cinfo->dither_mode != JDITHER_NONE)
	cinfo->dither_mode = JDITHER_FS;
    if (cinfo->dither_mode == JDITHER_FS) {
	cquantize->fserrors = (FSERRPTR) (*cinfo->mem->alloc_large) ((j_common_ptr) cinfo, 1, (size_t) ((cinfo->output_width + 2) * (3 * ((size_t) sizeof(FSERROR)))));
	init_error_limit(cinfo);
    }
}
