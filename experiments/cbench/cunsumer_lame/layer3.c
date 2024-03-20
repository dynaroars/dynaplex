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
struct frame {
    int stereo;
    int jsbound;
    int single;
    int lsf;
    int mpeg25;
    int header_change;
    int lay;
    int error_protection;
    int bitrate_index;
    int sampling_frequency;
    int padding;
    int extension;
    int mode;
    int mode_ext;
    int copyright;
    int original;
    int emphasis;
    int framesize;
};
struct parameter {
    int quiet;
    int tryresync;
    int verbose;
    int checkrange;
};
extern unsigned int getbits(int);
extern unsigned int getbits_fast(int);
extern int set_pointer(long);
extern unsigned char *wordpointer;
extern int bitindex;
extern void make_decode_tables(long scaleval);
extern int do_layer3(struct frame *fr, unsigned char *, int *);
extern int decode_header(struct frame *fr, unsigned long newhead);
struct gr_info_s {
    int scfsi;
    unsigned part2_3_length;
    unsigned big_values;
    unsigned scalefac_compress;
    unsigned block_type;
    unsigned mixed_block_flag;
    unsigned table_select[3];
    unsigned subblock_gain[3];
    unsigned maxband[3];
    unsigned maxbandl;
    unsigned maxb;
    unsigned region1start;
    unsigned region2start;
    unsigned preflag;
    unsigned scalefac_scale;
    unsigned count1table_select;
    double *full_gain[3];
    double *pow2gain;
};
struct III_sideinfo {
    unsigned main_data_begin;
    unsigned private_bits;
    struct {
	struct gr_info_s gr[2];
    } ch[2];
};
extern int synth_1to1(double *, int, unsigned char *, int *);
extern int synth_1to1_8bit(double *, int, unsigned char *, int *);
extern int synth_1to1_mono(double *, unsigned char *, int *);
extern int synth_1to1_mono2stereo(double *, unsigned char *, int *);
extern int synth_1to1_8bit_mono(double *, unsigned char *, int *);
extern int synth_1to1_8bit_mono2stereo(double *, unsigned char *, int *);
extern int synth_2to1(double *, int, unsigned char *, int *);
extern int synth_2to1_8bit(double *, int, unsigned char *, int *);
extern int synth_2to1_mono(double *, unsigned char *, int *);
extern int synth_2to1_mono2stereo(double *, unsigned char *, int *);
extern int synth_2to1_8bit_mono(double *, unsigned char *, int *);
extern int synth_2to1_8bit_mono2stereo(double *, unsigned char *, int *);
extern int synth_4to1(double *, int, unsigned char *, int *);
extern int synth_4to1_8bit(double *, int, unsigned char *, int *);
extern int synth_4to1_mono(double *, unsigned char *, int *);
extern int synth_4to1_mono2stereo(double *, unsigned char *, int *);
extern int synth_4to1_8bit_mono(double *, unsigned char *, int *);
extern int synth_4to1_8bit_mono2stereo(double *, unsigned char *, int *);
extern int synth_ntom(double *, int, unsigned char *, int *);
extern int synth_ntom_8bit(double *, int, unsigned char *, int *);
extern int synth_ntom_mono(double *, unsigned char *, int *);
extern int synth_ntom_mono2stereo(double *, unsigned char *, int *);
extern int synth_ntom_8bit_mono(double *, unsigned char *, int *);
extern int synth_ntom_8bit_mono2stereo(double *, unsigned char *, int *);
extern void rewindNbits(int bits);
extern int hsstell(void);
extern int get_songlen(struct frame *fr, int no);
extern void init_layer3(int);
extern void init_layer2(void);
extern void make_decode_tables(long scale);
extern void make_conv16to8_table(int);
extern void dct64(double *, double *, double *);
extern void synth_ntom_set_step(long, long);
extern unsigned char *conv16to8;
extern long freqs[9];
extern double muls[27][64];
extern double decwin[512 + 32];
extern double *pnts[5];
extern struct parameter param;
struct buf {
    unsigned char *pnt;
    long size;
    long pos;
    struct buf *next;
    struct buf *prev;
};
struct framebuf {
    struct buf *buf;
    long pos;
    struct frame *next;
    struct frame *prev;
};
struct mpstr {
    struct buf *head, *tail;
    int bsize;
    int framesize;
    int fsizeold;
    struct frame fr;
    unsigned char bsspace[2][1792 + 512];
    double hybrid_block[2][2][32 * 18];
    int hybrid_blc[2];
    unsigned long header;
    int bsnum;
    double synth_buffs[2][2][0x110];
    int synth_bo;
};
int InitMP3(struct mpstr *mp);
int decodeMP3(struct mpstr *mp, char *inmemory, int inmemsize, char *outmemory, int outmemsize, int *done);
void ExitMP3(struct mpstr *mp);
struct newhuff {
    unsigned int linbits;
    short *table;
};
static short tab0[] = { 0 };
static short tab1[] = { -5, -3, -1, 17, 1, 16, 0 };
static short tab2[] = { -15, -11, -9, -5, -3, -1, 34, 2, 18, -1, 33, 32, 17, -1, 1, 16, 0 };
static short tab3[] = { -13, -11, -9, -5, -3, -1, 34, 2, 18, -1, 33, 32, 16, 17, -1, 1, 0 };
static short tab5[] = { -29, -25, -23, -15, -7, -5, -3, -1, 51, 35, 50, 49, -3, -1, 19, 3, -1, 48, 34, -3, -1, 18, 33, -1, 2, 32, 17, -1, 1, 16, 0 };
static short tab6[] = { -25, -19, -13, -9, -5, -3, -1, 51, 3, 35, -1, 50, 48, -1, 19, 49, -3, -1, 34, 2, 18, -3, -1, 33, 32, 1, -1, 17, -1, 16, 0 };
static short tab7[] = { -69, -65, -57, -39, -29, -17, -11, -7, -3, -1, 85, 69, -1, 84, 83, -1, 53, 68, -3, -1, 37, 82, 21, -5, -1, 81, -1, 5, 52, -1, 80, -1, 67, 51, -5, -3, -1, 36, 66, 20, -1, 65, 64, -11, -7, -3, -1, 4, 35, -1, 50, 3, -1, 19, 49, -3, -1, 48, 34, 18, -5, -1, 33, -1, 2, 32, 17, -1, 1, 16, 0 };
static short tab8[] = { -65, -63, -59, -45, -31, -19, -13, -7, -5, -3, -1, 85, 84, 69, 83, -3, -1, 53, 68, 37, -3, -1, 82, 5, 21, -5, -1, 81, -1, 52, 67, -3, -1, 80, 51, 36, -5, -3, -1, 66, 20, 65, -3, -1, 4, 64, -1, 35, 50, -9, -7, -3, -1, 19, 49, -1, 3, 48, 34, -1, 2, 32, -1, 18, 33, 17, -3, -1, 1, 16, 0 };
static short tab9[] = { -63, -53, -41, -29, -19, -11, -5, -3, -1, 85, 69, 53, -1, 83, -1, 84, 5, -3, -1, 68, 37, -1, 82, 21, -3, -1, 81, 52, -1, 67, -1, 80, 4, -7, -3, -1, 36, 66, -1, 51, 64, -1, 20, 65, -5, -3, -1, 35, 50, 19, -1, 49, -1, 3, 48, -5, -3, -1, 34, 2, 18, -1, 33, 32, -3, -1, 17, 1, -1, 16, 0 };
static short tab10[] = { -125, -121, -111, -83, -55, -35, -21, -13, -7, -3, -1, 119, 103, -1, 118, 87, -3, -1, 117, 102, 71, -3, -1, 116, 86, -1, 101, 55, -9, -3, -1, 115, 70, -3, -1, 85, 84, 99, -1, 39, 114, -11, -5, -3, -1, 100, 7, 112, -1, 98, -1, 69, 53, -5, -1, 6, -1, 83, 68, 23, -17, -5, -1, 113, -1, 54, 38, -5, -3, -1, 37, 82, 21, -1, 81, -1, 52, 67, -3, -1, 22, 97, -1, 96, -1, 5, 80, -19, -11, -7, -3, -1, 36, 66, -1, 51, 4, -1, 20, 65, -3, -1, 64, 35, -1, 50, 3, -3, -1, 19, 49, -1, 48, 34, -7, -3, -1, 18, 33, -1, 2, 32, 17, -1, 1, 16, 0 };
static short tab11[] = { -121, -113, -89, -59, -43, -27, -17, -7, -3, -1, 119, 103, -1, 118, 117, -3, -1, 102, 71, -1, 116, -1, 87, 85, -5, -3, -1, 86, 101, 55, -1, 115, 70, -9, -7, -3, -1, 69, 84, -1, 53, 83, 39, -1, 114, -1, 100, 7, -5, -1, 113, -1, 23, 112, -3, -1, 54, 99, -1, 96, -1, 68, 37, -13, -7, -5, -3, -1, 82, 5, 21, 98, -3, -1, 38, 6, 22, -5, -1, 97, -1, 81, 52, -5, -1, 80, -1, 67, 51, -1, 36, 66, -15, -11, -7, -3, -1, 20, 65, -1, 4, 64, -1, 35, 50, -1, 19, 49, -5, -3, -1, 3, 48, 34, 33, -5, -1, 18, -1, 2, 32, 17, -3, -1, 1, 16, 0 };
static short tab12[] = { -115, -99, -73, -45, -27, -17, -9, -5, -3, -1, 119, 103, 118, -1, 87, 117, -3, -1, 102, 71, -1, 116, 101, -3, -1, 86, 55, -3, -1, 115, 85, 39, -7, -3, -1, 114, 70, -1, 100, 23, -5, -1, 113, -1, 7, 112, -1, 54, 99, -13, -9, -3, -1, 69, 84, -1, 68, -1, 6, 5, -1, 38, 98, -5, -1, 97, -1, 22, 96, -3, -1, 53, 83, -1, 37, 82, -17, -7, -3, -1, 21, 81, -1, 52, 67, -5, -3, -1, 80, 4, 36, -1, 66, 20, -3, -1, 51, 65, -1, 35, 50, -11, -7, -5, -3, -1, 64, 3, 48, 19, -1, 49, 34, -1, 18, 33, -7, -5, -3, -1, 2, 32, 0, 17, -1, 1, 16 };
static short tab13[] = { -509, -503, -475, -405, -333, -265, -205, -153, -115, -83, -53, -35, -21, -13, -9, -7, -5, -3, -1, 254, 252, 253, 237, 255, -1, 239, 223, -3, -1, 238, 207, -1, 222, 191, -9, -3, -1, 251, 206, -1, 220, -1, 175, 233, -1, 236, 221, -9, -5, -3, -1, 250, 205, 190, -1, 235, 159, -3, -1, 249, 234, -1, 189, 219, -17, -9, -3, -1, 143, 248, -1, 204, -1, 174, 158, -5, -1, 142, -1, 127, 126, 247, -5, -1, 218, -1, 173, 188, -3, -1, 203, 246, 111, -15, -7, -3, -1, 232, 95, -1, 157, 217, -3, -1, 245, 231, -1, 172, 187, -9, -3, -1, 79, 244, -3, -1, 202, 230, 243, -1, 63, -1, 141, 216, -21, -9, -3, -1, 47, 242, -3, -1, 110, 156, 15, -5, -3, -1, 201, 94, 171, -3, -1, 125, 215, 78, -11, -5, -3, -1, 200, 214, 62, -1, 185, -1, 155, 170, -1, 31, 241, -23, -13, -5, -1, 240, -1, 186, 229, -3, -1, 228, 140, -1, 109, 227, -5, -1, 226, -1, 46, 14, -1, 30, 225, -15, -7, -3, -1, 224, 93, -1, 213, 124, -3, -1, 199, 77, -1, 139, 184, -7, -3, -1, 212, 154, -1, 169, 108, -1, 198, 61, -37, -21, -9, -5, -3, -1, 211, 123, 45, -1, 210, 29, -5, -1, 183, -1, 92, 197, -3, -1, 153, 122, 195, -7, -5, -3, -1, 167, 151, 75, 209, -3, -1, 13, 208, -1, 138, 168, -11, -7, -3, -1, 76, 196, -1, 107, 182, -1, 60, 44, -3, -1, 194, 91, -3, -1, 181, 137, 28, -43, -23, -11, -5, -1, 193, -1, 152, 12, -1, 192, -1, 180, 106, -5, -3, -1, 166, 121, 59, -1, 179, -1, 136, 90, -11, -5, -1, 43, -1, 165, 105, -1, 164, -1, 120, 135, -5, -1, 148, -1, 119, 118, 178, -11, -3, -1, 27, 177, -3, -1, 11, 176, -1, 150, 74, -7, -3, -1, 58, 163, -1, 89, 149, -1, 42, 162, -47, -23, -9, -3, -1, 26, 161, -3, -1, 10, 104, 160, -5, -3, -1, 134, 73, 147, -3, -1, 57, 88, -1, 133, 103, -9, -3, -1, 41, 146, -3, -1, 87, 117, 56, -5, -1, 131, -1, 102, 71, -3, -1, 116, 86, -1, 101, 115, -11, -3, -1, 25, 145, -3, -1, 9, 144, -1, 72, 132, -7, -5, -1, 114, -1, 70, 100, 40, -1, 130, 24, -41, -27, -11, -5, -3, -1, 55, 39, 23, -1, 113, -1, 85, 7, -7, -3, -1, 112, 54, -1, 99, 69, -3, -1, 84, 38, -1, 98, 53, -5, -1, 129, -1, 8, 128, -3, -1, 22, 97, -1, 6, 96, -13, -9, -5, -3, -1, 83, 68, 37, -1, 82, 5, -1, 21, 81, -7, -3, -1, 52, 67, -1, 80, 36, -3, -1, 66, 51, 20, -19, -11, -5, -1, 65, -1, 4, 64, -3, -1, 35, 50, 19, -3, -1, 49, 3, -1, 48, 34, -3, -1, 18, 33, -1, 2, 32, -3, -1, 17, 1, 16, 0 };
static short tab15[] = { -495, -445, -355, -263, -183, -115, -77, -43, -27, -13, -7, -3, -1, 255, 239, -1, 254, 223, -1, 238, -1, 253, 207, -7, -3, -1, 252, 222, -1, 237, 191, -1, 251, -1, 206, 236, -7, -3, -1, 221, 175, -1, 250, 190, -3, -1, 235, 205, -1, 220, 159, -15, -7, -3, -1, 249, 234, -1, 189, 219, -3, -1, 143, 248, -1, 204, 158, -7, -3, -1, 233, 127, -1, 247, 173, -3, -1, 218, 188, -1, 111, -1, 174, 15, -19, -11, -3, -1, 203, 246, -3, -1, 142, 232, -1, 95, 157, -3, -1, 245, 126, -1, 231, 172, -9, -3, -1, 202, 187, -3, -1, 217, 141, 79, -3, -1, 244, 63, -1, 243, 216, -33, -17, -9, -3, -1, 230, 47, -1, 242, -1, 110, 240, -3, -1, 31, 241, -1, 156, 201, -7, -3, -1, 94, 171, -1, 186, 229, -3, -1, 125, 215, -1, 78, 228, -15, -7, -3, -1, 140, 200, -1, 62, 109, -3, -1, 214, 227, -1, 155, 185, -7, -3, -1, 46, 170, -1, 226, 30, -5, -1, 225, -1, 14, 224, -1, 93, 213, -45, -25, -13, -7, -3, -1, 124, 199, -1, 77, 139, -1, 212, -1, 184, 154, -7, -3, -1, 169, 108, -1, 198, 61, -1, 211, 210, -9, -5, -3, -1, 45, 13, 29, -1, 123, 183, -5, -1, 209, -1, 92, 208, -1, 197, 138, -17, -7, -3, -1, 168, 76, -1, 196, 107, -5, -1, 182, -1, 153, 12, -1, 60, 195, -9, -3, -1, 122, 167, -1, 166, -1, 192, 11, -1, 194, -1, 44, 91, -55, -29, -15, -7, -3, -1, 181, 28, -1, 137, 152, -3, -1, 193, 75, -1, 180, 106, -5, -3, -1, 59, 121, 179, -3, -1, 151, 136, -1, 43, 90, -11, -5, -1, 178, -1, 165, 27, -1, 177, -1, 176, 105, -7, -3, -1, 150, 74, -1, 164, 120, -3, -1, 135, 58, 163, -17, -7, -3, -1, 89, 149, -1, 42, 162, -3, -1, 26, 161, -3, -1, 10, 160, 104, -7, -3, -1, 134, 73, -1, 148, 57, -5, -1, 147, -1, 119, 9, -1, 88, 133, -53, -29, -13, -7, -3, -1, 41, 103, -1, 118, 146, -1, 145, -1, 25, 144, -7, -3, -1, 72, 132, -1, 87, 117, -3, -1, 56, 131, -1, 102, 71, -7, -3, -1, 40, 130, -1, 24, 129, -7, -3, -1, 116, 8, -1, 128, 86, -3, -1, 101, 55, -1, 115, 70, -17, -7, -3, -1, 39, 114, -1, 100, 23, -3, -1, 85, 113, -3, -1, 7, 112, 54, -7, -3, -1, 99, 69, -1, 84, 38, -3, -1, 98, 22, -3, -1, 6, 96, 53, -33, -19, -9, -5, -1, 97, -1, 83, 68, -1, 37, 82, -3, -1, 21, 81, -3, -1, 5, 80, 52, -7, -3, -1, 67, 36, -1, 66, 51, -1, 65, -1, 20, 4, -9, -3, -1, 35, 50, -3, -1, 64, 3, 19, -3, -1, 49, 48, 34, -9, -7, -3, -1, 18, 33, -1, 2, 32, 17, -3, -1, 1, 16, 0 };
static short tab16[] = { -509, -503, -461, -323, -103, -37, -27, -15, -7, -3, -1, 239, 254, -1, 223, 253, -3, -1, 207, 252, -1, 191, 251, -5, -1, 175, -1, 250, 159, -3, -1, 249, 248, 143, -7, -3, -1, 127, 247, -1, 111, 246, 255, -9, -5, -3, -1, 95, 245, 79, -1, 244, 243, -53, -1, 240, -1, 63, -29, -19, -13, -7, -5, -1, 206, -1, 236, 221, 222, -1, 233, -1, 234, 217, -1, 238, -1, 237, 235, -3, -1, 190, 205, -3, -1, 220, 219, 174, -11, -5, -1, 204, -1, 173, 218, -3, -1, 126, 172, 202, -5, -3, -1, 201, 125, 94, 189, 242, -93, -5, -3, -1, 47, 15, 31, -1, 241, -49, -25, -13, -5, -1, 158, -1, 188, 203, -3, -1, 142, 232, -1, 157, 231, -7, -3, -1, 187, 141, -1, 216, 110, -1, 230, 156, -13, -7, -3, -1, 171, 186, -1, 229, 215, -1, 78, -1, 228, 140, -3, -1, 200, 62, -1, 109, -1, 214, 155, -19, -11, -5, -3, -1, 185, 170, 225, -1, 212, -1, 184, 169, -5, -1, 123, -1, 183, 208, 227, -7, -3, -1, 14, 224, -1, 93, 213, -3, -1, 124, 199, -1, 77, 139, -75, -45, -27, -13, -7, -3, -1, 154, 108, -1, 198, 61, -3, -1, 92, 197, 13, -7, -3, -1, 138, 168, -1, 153, 76, -3, -1, 182, 122, 60, -11, -5, -3, -1, 91, 137, 28, -1, 192, -1, 152, 121, -1, 226, -1, 46, 30, -15, -7, -3, -1, 211, 45, -1, 210, 209, -5, -1, 59, -1, 151, 136, 29, -7, -3, -1, 196, 107, -1, 195, 167, -1, 44, -1, 194, 181, -23, -13, -7, -3, -1, 193, 12, -1, 75, 180, -3, -1, 106, 166, 179, -5, -3, -1, 90, 165, 43, -1, 178, 27, -13, -5, -1, 177, -1, 11, 176, -3, -1, 105, 150, -1, 74, 164, -5, -3, -1, 120, 135, 163, -3, -1, 58, 89, 42, -97, -57, -33, -19, -11, -5, -3, -1, 149, 104, 161, -3, -1, 134, 119, 148, -5, -3, -1, 73, 87, 103, 162, -5, -1, 26, -1, 10, 160, -3, -1, 57, 147, -1, 88, 133, -9, -3, -1, 41, 146, -3, -1, 118, 9, 25, -5, -1, 145, -1, 144, 72, -3, -1, 132, 117, -1, 56, 131, -21, -11, -5, -3, -1, 102, 40, 130, -3, -1, 71, 116, 24, -3, -1, 129, 128, -3, -1, 8, 86, 55, -9, -5, -1, 115, -1, 101, 70, -1, 39, 114, -5, -3, -1, 100, 85, 7, 23, -23, -13, -5, -1, 113, -1, 112, 54, -3, -1, 99, 69, -1, 84, 38, -3, -1, 98, 22, -1, 97, -1, 6, 96, -9, -5, -1, 83, -1, 53, 68, -1, 37, 82, -1, 81, -1, 21, 5, -33, -23, -13, -7, -3, -1, 52, 67, -1, 80, 36, -3, -1, 66, 51, 20, -5, -1, 65, -1, 4, 64, -1, 35, 50, -3, -1, 19, 49, -3, -1, 3, 48, 34, -3, -1, 18, 33, -1, 2, 32, -3, -1, 17, 1, 16, 0 };
static short tab24[] = { -451, -117, -43, -25, -15, -7, -3, -1, 239, 254, -1, 223, 253, -3, -1, 207, 252, -1, 191, 251, -5, -1, 250, -1, 175, 159, -1, 249, 248, -9, -5, -3, -1, 143, 127, 247, -1, 111, 246, -3, -1, 95, 245, -1, 79, 244, -71, -7, -3, -1, 63, 243, -1, 47, 242, -5, -1, 241, -1, 31, 240, -25, -9, -1, 15, -3, -1, 238, 222, -1, 237, 206, -7, -3, -1, 236, 221, -1, 190, 235, -3, -1, 205, 220, -1, 174, 234, -15, -7, -3, -1, 189, 219, -1, 204, 158, -3, -1, 233, 173, -1, 218, 188, -7, -3, -1, 203, 142, -1, 232, 157, -3, -1, 217, 126, -1, 231, 172, 255, -235, -143, -77, -45, -25, -15, -7, -3, -1, 202, 187, -1, 141, 216, -5, -3, -1, 14, 224, 13, 230, -5, -3, -1, 110, 156, 201, -1, 94, 186, -9, -5, -1, 229, -1, 171, 125, -1, 215, 228, -3, -1, 140, 200, -3, -1, 78, 46, 62, -15, -7, -3, -1, 109, 214, -1, 227, 155, -3, -1, 185, 170, -1, 226, 30, -7, -3, -1, 225, 93, -1, 213, 124, -3, -1, 199, 77, -1, 139, 184, -31, -15, -7, -3, -1, 212, 154, -1, 169, 108, -3, -1, 198, 61, -1, 211, 45, -7, -3, -1, 210, 29, -1, 123, 183, -3, -1, 209, 92, -1, 197, 138, -17, -7, -3, -1, 168, 153, -1, 76, 196, -3, -1, 107, 182, -3, -1, 208, 12, 60, -7, -3, -1, 195, 122, -1, 167, 44, -3, -1, 194, 91, -1, 181, 28, -57, -35, -19, -7, -3, -1, 137, 152, -1, 193, 75, -5, -3, -1, 192, 11, 59, -3, -1, 176, 10, 26, -5, -1, 180, -1, 106, 166, -3, -1, 121, 151, -3, -1, 160, 9, 144, -9, -3, -1, 179, 136, -3, -1, 43, 90, 178, -7, -3, -1, 165, 27, -1, 177, 105, -1, 150, 164, -17, -9, -5, -3, -1, 74, 120, 135, -1, 58, 163, -3, -1, 89, 149, -1, 42, 162, -7, -3, -1, 161, 104, -1, 134, 119, -3, -1, 73, 148, -1, 57, 147, -63, -31, -15, -7, -3, -1, 88, 133, -1, 41, 103, -3, -1, 118, 146, -1, 25, 145, -7, -3, -1, 72, 132, -1, 87, 117, -3, -1, 56, 131, -1, 102, 40, -17, -7, -3, -1, 130, 24, -1, 71, 116, -5, -1, 129, -1, 8, 128, -1, 86, 101, -7, -5, -1, 23, -1, 7, 112, 115, -3, -1, 55, 39, 114, -15, -7, -3, -1, 70, 100, -1, 85, 113, -3, -1, 54, 99, -1, 69, 84, -7, -3, -1, 38, 98, -1, 22, 97, -5, -3, -1, 6, 96, 53, -1, 83, 68, -51, -37, -23, -15, -9, -3, -1, 37, 82, -1, 21, -1, 5, 80, -1, 81, -1, 52, 67, -3, -1, 36, 66, -1, 51, 20, -9, -5, -1, 65, -1, 4, 64, -1, 35, 50, -1, 19, 49, -7, -5, -3, -1, 3, 48, 34, 18, -1, 33, -1, 2, 32, -3, -1, 17, 1, -1, 16, 0 };
static short tab_c0[] = { -29, -21, -13, -7, -3, -1, 11, 15, -1, 13, 14, -3, -1, 7, 5, 9, -3, -1, 6, 3, -1, 10, 12, -3, -1, 2, 1, -1, 4, 8, 0 };
static short tab_c1[] = { -15, -7, -3, -1, 15, 14, -1, 13, 12, -3, -1, 11, 10, -1, 9, 8, -7, -3, -1, 7, 6, -1, 5, 4, -3, -1, 3, 2, -1, 1, 0 };
static struct newhuff ht[] = { {0, tab0}, {0, tab1}, {0, tab2}, {0, tab3}, {0, tab0}, {0, tab5}, {0, tab6}, {0, tab7}, {0, tab8}, {0, tab9}, {0, tab10}, {0, tab11}, {0, tab12}, {0, tab13}, {0, tab0}, {0, tab15}, {1, tab16}, {2, tab16}, {3, tab16}, {4, tab16}, {6, tab16}, {8, tab16}, {10, tab16}, {13, tab16}, {4, tab24}, {5, tab24}, {6, tab24}, {7, tab24}, {8, tab24}, {9, tab24}, {11, tab24}, {13, tab24} };
static struct newhuff htc[] = { {0, tab_c0}, {0, tab_c1} };

extern struct mpstr *gmp;
static double ispow[8207];
static double aa_ca[8], aa_cs[8];
static double COS1[12][6];
static double win[4][36];
static double win1[4][36];
static double gainpow2[256 + 118 + 4];
static double COS9[9];
static double COS6_1, COS6_2;
static double tfcos36[9];
static double tfcos12[3];
struct bandInfoStruct {
    short longIdx[23];
    short longDiff[22];
    short shortIdx[14];
    short shortDiff[13];
};
int longLimit[9][23];
int shortLimit[9][14];
struct bandInfoStruct bandInfo[9] = { {{0, 4, 8, 12, 16, 20, 24, 30, 36, 44, 52, 62, 74, 90, 110, 134, 162, 196, 238, 288, 342, 418, 576}, {4, 4, 4, 4, 4, 4, 6, 6, 8, 8, 10, 12, 16, 20, 24, 28, 34, 42, 50, 54, 76, 158}, {0, 4 * 3, 8 * 3, 12 * 3, 16 * 3, 22 * 3, 30 * 3, 40 * 3, 52 * 3, 66 * 3, 84 * 3, 106 * 3, 136 * 3, 192 * 3}, {4, 4, 4, 4, 6, 8, 10, 12, 14, 18, 22, 30, 56}}, {{0, 4, 8, 12, 16, 20, 24, 30, 36, 42, 50, 60, 72, 88, 106, 128, 156, 190, 230, 276, 330, 384, 576}, {4, 4, 4, 4, 4, 4, 6, 6, 6, 8, 10, 12, 16, 18, 22, 28, 34, 40, 46, 54, 54, 192}, {0, 4 * 3, 8 * 3, 12 * 3, 16 * 3, 22 * 3, 28 * 3, 38 * 3, 50 * 3, 64 * 3, 80 * 3, 100 * 3, 126 * 3, 192 * 3}, {4, 4, 4, 4, 6, 6, 10, 12, 14, 16, 20, 26, 66}}, {{0, 4, 8, 12, 16, 20, 24, 30, 36, 44, 54, 66, 82, 102, 126, 156, 194, 240, 296, 364, 448, 550, 576}, {4, 4, 4, 4, 4, 4, 6, 6, 8, 10, 12, 16, 20, 24, 30, 38, 46, 56, 68, 84, 102, 26}, {0, 4 * 3, 8 * 3, 12 * 3, 16 * 3, 22 * 3, 30 * 3, 42 * 3, 58 * 3, 78 * 3, 104 * 3, 138 * 3, 180 * 3, 192 * 3}, {4, 4, 4, 4, 6, 8, 12, 16, 20, 26, 34, 42, 12}}, {{0, 6, 12, 18, 24, 30, 36, 44, 54, 66, 80, 96, 116, 140, 168, 200, 238, 284, 336, 396, 464, 522, 576}, {6, 6, 6, 6, 6, 6, 8, 10, 12, 14, 16, 20, 24, 28, 32, 38, 46, 52, 60, 68, 58, 54}, {0, 4 * 3, 8 * 3, 12 * 3, 18 * 3, 24 * 3, 32 * 3, 42 * 3, 56 * 3, 74 * 3, 100 * 3, 132 * 3, 174 * 3, 192 * 3}, {4, 4, 4, 6, 6, 8, 10, 14, 18, 26, 32, 42, 18}}, {{0, 6, 12, 18, 24, 30, 36, 44, 54, 66, 80, 96, 114, 136, 162, 194, 232, 278, 332, 394, 464, 540, 576}, {6, 6, 6, 6, 6, 6, 8, 10, 12, 14, 16, 18, 22, 26, 32, 38, 46, 52, 64, 70, 76, 36}, {0, 4 * 3, 8 * 3, 12 * 3, 18 * 3, 26 * 3, 36 * 3, 48 * 3, 62 * 3, 80 * 3, 104 * 3, 136 * 3, 180 * 3, 192 * 3}, {4, 4, 4, 6, 8, 10, 12, 14, 18, 24, 32, 44, 12}}, {{0, 6, 12, 18, 24, 30, 36, 44, 54, 66, 80, 96, 116, 140, 168, 200, 238, 284, 336, 396, 464, 522, 576}, {6, 6, 6, 6, 6, 6, 8, 10, 12, 14, 16, 20, 24, 28, 32, 38, 46, 52, 60, 68, 58, 54}, {0, 4 * 3, 8 * 3, 12 * 3, 18 * 3, 26 * 3, 36 * 3, 48 * 3, 62 * 3, 80 * 3, 104 * 3, 134 * 3, 174 * 3, 192 * 3}, {4, 4, 4, 6, 8, 10, 12, 14, 18, 24, 30, 40, 18}}, {{0, 6, 12, 18, 24, 30, 36, 44, 54, 66, 80, 96, 116, 140, 168, 200, 238, 284, 336, 396, 464, 522, 576}, {6, 6, 6, 6, 6, 6, 8, 10, 12, 14, 16, 20, 24, 28, 32, 38, 46, 52, 60, 68, 58, 54}, {0, 12, 24, 36, 54, 78, 108, 144, 186, 240, 312, 402, 522, 576}, {4, 4, 4, 6, 8, 10, 12, 14, 18, 24, 30, 40, 18}}, {{0, 6, 12, 18, 24, 30, 36, 44, 54, 66, 80, 96, 116, 140, 168, 200, 238, 284, 336, 396, 464, 522, 576}, {6, 6, 6, 6, 6, 6, 8, 10, 12, 14, 16, 20, 24, 28, 32, 38, 46, 52, 60, 68, 58, 54}, {0, 12, 24, 36, 54, 78, 108, 144, 186, 240, 312, 402, 522, 576}, {4, 4, 4, 6, 8, 10, 12, 14, 18, 24, 30, 40, 18}}, {{0, 12, 24, 36, 48, 60, 72, 88, 108, 132, 160, 192, 232, 280, 336, 400, 476, 566, 568, 570, 572, 574, 576}, {12, 12, 12, 12, 12, 12, 16, 20, 24, 28, 32, 40, 48, 56, 64, 76, 90, 2, 2, 2, 2, 2}, {0, 24, 48, 72, 108, 156, 216, 288, 372, 480, 486, 492, 498, 576}, {8, 8, 8, 12, 16, 20, 24, 28, 36, 2, 2, 2, 26}}, };

static int mapbuf0[9][152];
static int mapbuf1[9][156];
static int mapbuf2[9][44];
static int *map[9][3];
static int *mapend[9][3];
static unsigned int n_slen2[512];
static unsigned int i_slen2[256];
static double tan1_1[16], tan2_1[16], tan1_2[16], tan2_2[16];
static double pow1_1[2][16], pow2_1[2][16], pow1_2[2][16], pow2_2[2][16];
static unsigned int get1bit(void)
{
    unsigned char rval;
    rval = *wordpointer << bitindex;
    bitindex++;
    wordpointer += (bitindex >> 3);
    bitindex &= 7;
    return rval >> 7;
}

void init_layer3(int down_sample_sblimit)
{
    int i, j, k, l;
    for (i = -256; i < 118 + 4; i++)
	gainpow2[i + 256] = pow((double) 2.0, -0.25 * (double) (i + 210));
    for (i = 0; i < 8207; i++)
	ispow[i] = pow((double) i, (double) 4.0 / 3.0);
    for (i = 0; i < 8; i++) {
	static double Ci[8] = { -0.6, -0.535, -0.33, -0.185, -0.095, -0.041, -0.0142, -0.0037 };
	double sq = sqrt(1.0 + Ci[i] * Ci[i]);
	aa_cs[i] = 1.0 / sq;
	aa_ca[i] = Ci[i] / sq;
    } for (i = 0; i < 18; i++) {
	win[0][i] = win[1][i] = 0.5 * sin(3.14159265358979323846 / 72.0 * (double) (2 * (i + 0) + 1)) / cos(3.14159265358979323846 * (double) (2 * (i + 0) + 19) / 72.0);
	win[0][i + 18] = win[3][i + 18] = 0.5 * sin(3.14159265358979323846 / 72.0 * (double) (2 * (i + 18) + 1)) / cos(3.14159265358979323846 * (double) (2 * (i + 18) + 19) / 72.0);
    } for (i = 0; i < 6; i++) {
	win[1][i + 18] = 0.5 / cos(3.14159265358979323846 * (double) (2 * (i + 18) + 19) / 72.0);
	win[3][i + 12] = 0.5 / cos(3.14159265358979323846 * (double) (2 * (i + 12) + 19) / 72.0);
	win[1][i + 24] = 0.5 * sin(3.14159265358979323846 / 24.0 * (double) (2 * i + 13)) / cos(3.14159265358979323846 * (double) (2 * (i + 24) + 19) / 72.0);
	win[1][i + 30] = win[3][i] = 0.0;
	win[3][i + 6] = 0.5 * sin(3.14159265358979323846 / 24.0 * (double) (2 * i + 1)) / cos(3.14159265358979323846 * (double) (2 * (i + 6) + 19) / 72.0);
    } for (i = 0; i < 9; i++)
	COS9[i] = cos(3.14159265358979323846 / 18.0 * (double) i);
    for (i = 0; i < 9; i++)
	tfcos36[i] = 0.5 / cos(3.14159265358979323846 * (double) (i * 2 + 1) / 36.0);
    for (i = 0; i < 3; i++)
	tfcos12[i] = 0.5 / cos(3.14159265358979323846 * (double) (i * 2 + 1) / 12.0);
    COS6_1 = cos(3.14159265358979323846 / 6.0 * (double) 1);
    COS6_2 = cos(3.14159265358979323846 / 6.0 * (double) 2);
    for (i = 0; i < 12; i++) {
	win[2][i] = 0.5 * sin(3.14159265358979323846 / 24.0 * (double) (2 * i + 1)) / cos(3.14159265358979323846 * (double) (2 * i + 7) / 24.0);
	for (j = 0; j < 6; j++)
	    COS1[i][j] = cos(3.14159265358979323846 / 24.0 * (double) ((2 * i + 7) * (2 * j + 1)));
    } for (j = 0; j < 4; j++) {
	static int len[4] = { 36, 36, 12, 36 };
	for (i = 0; i < len[j]; i += 2)
	    win1[j][i] = +win[j][i];
	for (i = 1; i < len[j]; i += 2)
	    win1[j][i] = -win[j][i];
    }
    for (i = 0; i < 16; i++) {
	double t = tan((double) i * 3.14159265358979323846 / 12.0);
	tan1_1[i] = t / (1.0 + t);
	tan2_1[i] = 1.0 / (1.0 + t);
	tan1_2[i] = 1.41421356237309504880 * t / (1.0 + t);
	tan2_2[i] = 1.41421356237309504880 / (1.0 + t);
	for (j = 0; j < 2; j++) {
	    double base = pow(2.0, -0.25 * (j + 1.0));
	    double p1 = 1.0, p2 = 1.0;
	    if (i > 0) {
		if (i & 1)
		    p1 = pow(base, (i + 1.0) * 0.5);
		else
		    p2 = pow(base, i * 0.5);
	    }
	    pow1_1[j][i] = p1;
	    pow2_1[j][i] = p2;
	    pow1_2[j][i] = 1.41421356237309504880 * p1;
	    pow2_2[j][i] = 1.41421356237309504880 * p2;
	}
    }
    for (j = 0; j < 9; j++) {
	struct bandInfoStruct *bi = &bandInfo[j];
	int *mp;
	int cb, lwin;
	short *bdf;
	mp = map[j][0] = mapbuf0[j];
	bdf = bi->longDiff;
	for (i = 0, cb = 0; cb < 8; cb++, i += *bdf++) {
	    *mp++ = (*bdf) >> 1;
	    *mp++ = i;
	    *mp++ = 3;
	    *mp++ = cb;
	}
	bdf = bi->shortDiff + 3;
	for (cb = 3; cb < 13; cb++) {
	    int l = (*bdf++) >> 1;
	    for (lwin = 0; lwin < 3; lwin++) {
		*mp++ = l;
		*mp++ = i + lwin;
		*mp++ = lwin;
		*mp++ = cb;
	    }
	    i += 6 * l;
	}
	mapend[j][0] = mp;
	mp = map[j][1] = mapbuf1[j];
	bdf = bi->shortDiff + 0;
	for (i = 0, cb = 0; cb < 13; cb++) {
	    int l = (*bdf++) >> 1;
	    for (lwin = 0; lwin < 3; lwin++) {
		*mp++ = l;
		*mp++ = i + lwin;
		*mp++ = lwin;
		*mp++ = cb;
	    }
	    i += 6 * l;
	}
	mapend[j][1] = mp;
	mp = map[j][2] = mapbuf2[j];
	bdf = bi->longDiff;
	for (cb = 0; cb < 22; cb++) {
	    *mp++ = (*bdf++) >> 1;
	    *mp++ = cb;
	}
	mapend[j][2] = mp;
    }
    for (j = 0; j < 9; j++) {
	for (i = 0; i < 23; i++) {
	    longLimit[j][i] = (bandInfo[j].longIdx[i] - 1 + 8) / 18 + 1;
	    if (longLimit[j][i] > (down_sample_sblimit))
		longLimit[j][i] = down_sample_sblimit;
	}
	for (i = 0; i < 14; i++) {
	    shortLimit[j][i] = (bandInfo[j].shortIdx[i] - 1) / 18 + 1;
	    if (shortLimit[j][i] > (down_sample_sblimit))
		shortLimit[j][i] = down_sample_sblimit;
	}
    }
    for (i = 0; i < 5; i++) {
	for (j = 0; j < 6; j++) {
	    for (k = 0; k < 6; k++) {
		int n = k + j * 6 + i * 36;
		i_slen2[n] = i | (j << 3) | (k << 6) | (3 << 12);
    }}} for (i = 0; i < 4; i++) {
	for (j = 0; j < 4; j++) {
	    for (k = 0; k < 4; k++) {
		int n = k + j * 4 + i * 16;
		i_slen2[n + 180] = i | (j << 3) | (k << 6) | (4 << 12);
    }}} for (i = 0; i < 4; i++) {
	for (j = 0; j < 3; j++) {
	    int n = j + i * 3;
	    i_slen2[n + 244] = i | (j << 3) | (5 << 12);
	    n_slen2[n + 500] = i | (j << 3) | (2 << 12) | (1 << 15);
    }} for (i = 0; i < 5; i++) {
	for (j = 0; j < 5; j++) {
	    for (k = 0; k < 4; k++) {
		for (l = 0; l < 4; l++) {
		    int n = l + k * 4 + j * 16 + i * 80;
		    n_slen2[n] = i | (j << 3) | (k << 6) | (l << 9) | (0 << 12);
    }}}} for (i = 0; i < 5; i++) {
	for (j = 0; j < 5; j++) {
	    for (k = 0; k < 4; k++) {
		int n = k + j * 4 + i * 20;
		n_slen2[n + 400] = i | (j << 3) | (k << 6) | (1 << 12);
}}}} 
//complexity is O(n) inferred by loopus
static void III_get_side_info_1(struct III_sideinfo *si, int stereo, int ms_stereo, long sfreq, int single)
{
    int ch, gr;
    int powdiff = (single == 3) ? 4 : 0;
    si->main_data_begin = getbits(9);
    if (stereo == 1)
	si->private_bits = getbits_fast(5);
    else
	si->private_bits = getbits_fast(3);
    for (ch = 0; ch < stereo; ch++) {
	si->ch[ch].gr[0].scfsi = -1;
	si->ch[ch].gr[1].scfsi = getbits_fast(4);
    }
    for (gr = 0; gr < 2; gr++) {
	for (ch = 0; ch < stereo; ch++) {
	    register struct gr_info_s *gr_info = &(si->ch[ch].gr[gr]);
	    gr_info->part2_3_length = getbits(12);
	    gr_info->big_values = getbits_fast(9);
	    if (gr_info->big_values > 288) {
		fprintf(stderr, "big_values too large!\n");
		gr_info->big_values = 288;
	    }
	    {
		unsigned int qss = getbits_fast(8);
		gr_info->pow2gain = gainpow2 + 256 - qss + powdiff;
	    } if (ms_stereo)
		gr_info->pow2gain += 2;
	    gr_info->scalefac_compress = getbits_fast(4);
	    if (get1bit()) {
		int i;
		gr_info->block_type = getbits_fast(2);
		gr_info->mixed_block_flag = get1bit();
		gr_info->table_select[0] = getbits_fast(5);
		gr_info->table_select[1] = getbits_fast(5);
		gr_info->table_select[2] = 0;
		for (i = 0; i < 3; i++) {
		    unsigned int sbg = (getbits_fast(3) << 3);
		    gr_info->full_gain[i] = gr_info->pow2gain + sbg;
		} if (gr_info->block_type == 0) {
		    fprintf(stderr, "Blocktype == 0 and window-switching == 1 not allowed.\n");
		    exit(1);
		}
		gr_info->region1start = 36 >> 1;
		gr_info->region2start = 576 >> 1;
	    } else {
		int i, r0c, r1c;
		for (i = 0; i < 3; i++)
		    gr_info->table_select[i] = getbits_fast(5);
		r0c = getbits_fast(4);
		r1c = getbits_fast(3);
		gr_info->region1start = bandInfo[sfreq].longIdx[r0c + 1] >> 1;
		gr_info->region2start = bandInfo[sfreq].longIdx[r0c + 1 + r1c + 1] >> 1;
		gr_info->block_type = 0;
		gr_info->mixed_block_flag = 0;
	    }
	    gr_info->preflag = get1bit();
	    gr_info->scalefac_scale = get1bit();
	    gr_info->count1table_select = get1bit();
	}
    }
}
//complexity is O(n) inferred by loopus
static void III_get_side_info_2(struct III_sideinfo *si, int stereo, int ms_stereo, long sfreq, int single)
{
    int ch;
    int powdiff = (single == 3) ? 4 : 0;
    si->main_data_begin = getbits(8);
    if (stereo == 1)
	si->private_bits = get1bit();
    else
	si->private_bits = getbits_fast(2);
    for (ch = 0; ch < stereo; ch++) {
	register struct gr_info_s *gr_info = &(si->ch[ch].gr[0]);
	unsigned int qss;
	gr_info->part2_3_length = getbits(12);
	gr_info->big_values = getbits_fast(9);
	if (gr_info->big_values > 288) {
	    fprintf(stderr, "big_values too large!\n");
	    gr_info->big_values = 288;
	}
	qss = getbits_fast(8);
	gr_info->pow2gain = gainpow2 + 256 - qss + powdiff;
	if (ms_stereo)
	    gr_info->pow2gain += 2;
	gr_info->scalefac_compress = getbits(9);
	if (get1bit()) {
	    int i;
	    gr_info->block_type = getbits_fast(2);
	    gr_info->mixed_block_flag = get1bit();
	    gr_info->table_select[0] = getbits_fast(5);
	    gr_info->table_select[1] = getbits_fast(5);
	    gr_info->table_select[2] = 0;
	    for (i = 0; i < 3; i++) {
		unsigned int sbg = (getbits_fast(3) << 3);
		gr_info->full_gain[i] = gr_info->pow2gain + sbg;
	    } if (gr_info->block_type == 0) {
		fprintf(stderr, "Blocktype == 0 and window-switching == 1 not allowed.\n");
		exit(1);
	    }
	    if (gr_info->block_type == 2)
		gr_info->region1start = 36 >> 1;
	    else if (sfreq == 8)
		gr_info->region1start = 108 >> 1;
	    else
		gr_info->region1start = 54 >> 1;
	    gr_info->region2start = 576 >> 1;
	} else {
	    int i, r0c, r1c;
	    for (i = 0; i < 3; i++)
		gr_info->table_select[i] = getbits_fast(5);
	    r0c = getbits_fast(4);
	    r1c = getbits_fast(3);
	    gr_info->region1start = bandInfo[sfreq].longIdx[r0c + 1] >> 1;
	    gr_info->region2start = bandInfo[sfreq].longIdx[r0c + 1 + r1c + 1] >> 1;
	    gr_info->block_type = 0;
	    gr_info->mixed_block_flag = 0;
	}
	gr_info->scalefac_scale = get1bit();
	gr_info->count1table_select = get1bit();
    }
}

static int III_get_scale_factors_1(int *scf, struct gr_info_s *gr_info)
{
    static unsigned char slen[2][16] = { {0, 0, 0, 0, 3, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4}, {0, 1, 2, 3, 0, 1, 2, 3, 1, 2, 3, 1, 2, 3, 2, 3} };
    int numbits;
    int num0 = slen[0][gr_info->scalefac_compress];
    int num1 = slen[1][gr_info->scalefac_compress];
    if (gr_info->block_type == 2) {
	int i = 18;
	numbits = (num0 + num1) * 18;
	if (gr_info->mixed_block_flag) {
	    for (i = 8; i; i--)
		*scf++ = getbits_fast(num0);
	    i = 9;
	    numbits -= num0;
	}
	for (; i; i--)
	    *scf++ = getbits_fast(num0);
	for (i = 18; i; i--)
	    *scf++ = getbits_fast(num1);
	*scf++ = 0;
	*scf++ = 0;
	*scf++ = 0;
    } else {
	int i;
	int scfsi = gr_info->scfsi;
	if (scfsi < 0) {
	    for (i = 11; i; i--)
		*scf++ = getbits_fast(num0);
	    for (i = 10; i; i--)
		*scf++ = getbits_fast(num1);
	    numbits = (num0 + num1) * 10 + num0;
	} else {
	    numbits = 0;
	    if (!(scfsi & 0x8)) {
		for (i = 6; i; i--)
		    *scf++ = getbits_fast(num0);
		numbits += num0 * 6;
	    } else {
		scf += 6;
	    }
	    if (!(scfsi & 0x4)) {
		for (i = 5; i; i--)
		    *scf++ = getbits_fast(num0);
		numbits += num0 * 5;
	    } else {
		scf += 5;
	    }
	    if (!(scfsi & 0x2)) {
		for (i = 5; i; i--)
		    *scf++ = getbits_fast(num1);
		numbits += num1 * 5;
	    } else {
		scf += 5;
	    }
	    if (!(scfsi & 0x1)) {
		for (i = 5; i; i--)
		    *scf++ = getbits_fast(num1);
		numbits += num1 * 5;
	    } else {
		scf += 5;
	    }
	}
	*scf++ = 0;
    }
    return numbits;
}

static int III_get_scale_factors_2(int *scf, struct gr_info_s *gr_info, int i_stereo)
{
    unsigned char *pnt;
    int i, j;
    unsigned int slen;
    int n = 0;
    int numbits = 0;
    static unsigned char stab[3][6][4] = { {{6, 5, 5, 5}, {6, 5, 7, 3}, {11, 10, 0, 0}, {7, 7, 7, 0}, {6, 6, 6, 3}, {8, 8, 5, 0}}, {{9, 9, 9, 9}, {9, 9, 12, 6}, {18, 18, 0, 0}, {12, 12, 12, 0}, {12, 9, 9, 6}, {15, 12, 9, 0}}, {{6, 9, 9, 9}, {6, 9, 12, 6}, {15, 18, 0, 0}, {6, 15, 12, 0}, {6, 12, 9, 6}, {6, 18, 9, 0}} };
    if (i_stereo)
	slen = i_slen2[gr_info->scalefac_compress >> 1];
    else
	slen = n_slen2[gr_info->scalefac_compress];
    gr_info->preflag = (slen >> 15) & 0x1;
    n = 0;
    if (gr_info->block_type == 2) {
	n++;
	if (gr_info->mixed_block_flag)
	    n++;
    }
    pnt = stab[n][(slen >> 12) & 0x7];
    for (i = 0; i < 4; i++) {
	int num = slen & 0x7;
	slen >>= 3;
	if (num) {
	    for (j = 0; j < (int) (pnt[i]); j++)
		*scf++ = getbits_fast(num);
	    numbits += pnt[i] * num;
	} else {
	    for (j = 0; j < (int) (pnt[i]); j++)
		*scf++ = 0;
    }} n = (n << 1) + 1;
    for (i = 0; i < n; i++)
	*scf++ = 0;
    return numbits;
}
static int pretab1[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 3, 3, 3, 2, 0 };
static int pretab2[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

static int III_dequantize_sample(double xr[32][18], int *scf, struct gr_info_s *gr_info, int sfreq, int part2bits)
{
    int shift = 1 + gr_info->scalefac_scale;
    double *xrpnt = (double *) xr;
    int l[3], l3;
    int part2remain = gr_info->part2_3_length - part2bits;
    int *me; {
	int bv = gr_info->big_values;
	int region1 = gr_info->region1start;
	int region2 = gr_info->region2start;
	l3 = ((576 >> 1) - bv) >> 1;
	if (bv <= region1) {
	    l[0] = bv;
	    l[1] = 0;
	    l[2] = 0;
	} else {
	    l[0] = region1;
	    if (bv <= region2) {
		l[1] = bv - l[0];
		l[2] = 0;
	    } else {
		l[1] = region2 - l[0];
		l[2] = bv - region2;
	    }
	}
    }
    if (gr_info->block_type == 2) {
	int i, max[4];
	int step = 0, lwin = 0, cb = 0;
	register double v = 0.0;
	register int *m, mc;
	if (gr_info->mixed_block_flag) {
	    max[3] = -1;
	    max[0] = max[1] = max[2] = 2;
	    m = map[sfreq][0];
	    me = mapend[sfreq][0];
	} else {
	    max[0] = max[1] = max[2] = max[3] = -1;
	    m = map[sfreq][1];
	    me = mapend[sfreq][1];
	}
	mc = 0;
	for (i = 0; i < 2; i++) {
	    int lp = l[i];
	    struct newhuff *h = ht + gr_info->table_select[i];
	    for (; lp; lp--, mc--) {
		register int x, y;
		if ((!mc)) {
		    mc = *m++;
		    xrpnt = ((double *) xr) + (*m++);
		    lwin = *m++;
		    cb = *m++;
		    if (lwin == 3) {
			v = gr_info->pow2gain[(*scf++) << shift];
			step = 1;
		    } else {
			v = gr_info->full_gain[lwin][(*scf++) << shift];
			step = 3;
		    }
		}
		{
		    register short *val = h->table;
		    while ((y = *val++) < 0) {
			if (get1bit())
			    val -= y;
			part2remain--;
		    }
		    x = y >> 4;
		    y &= 0xf;
		}
		if (x == 15) {
		    max[lwin] = cb;
		    part2remain -= h->linbits + 1;
		    x += getbits(h->linbits);
		    if (get1bit())
			*xrpnt = -ispow[x] * v;
		    else
			*xrpnt = ispow[x] * v;
		} else if (x) {
		    max[lwin] = cb;
		    if (get1bit())
			*xrpnt = -ispow[x] * v;
		    else
			*xrpnt = ispow[x] * v;
		    part2remain--;
		} else
		    *xrpnt = 0.0;
		xrpnt += step;
		if (y == 15) {
		    max[lwin] = cb;
		    part2remain -= h->linbits + 1;
		    y += getbits(h->linbits);
		    if (get1bit())
			*xrpnt = -ispow[y] * v;
		    else
			*xrpnt = ispow[y] * v;
		} else if (y) {
		    max[lwin] = cb;
		    if (get1bit())
			*xrpnt = -ispow[y] * v;
		    else
			*xrpnt = ispow[y] * v;
		    part2remain--;
		} else
		    *xrpnt = 0.0;
		xrpnt += step;
	    }
	}
	for (; l3 && (part2remain > 0); l3--) {
	    struct newhuff *h = htc + gr_info->count1table_select;
	    register short *val = h->table, a;
	    while ((a = *val++) < 0) {
		part2remain--;
		if (part2remain < 0) {
		    part2remain++;
		    a = 0;
		    break;
		}
		if (get1bit())
		    val -= a;
	    }
	    for (i = 0; i < 4; i++) {
		if (!(i & 1)) {
		    if (!mc) {
			mc = *m++;
			xrpnt = ((double *) xr) + (*m++);
			lwin = *m++;
			cb = *m++;
			if (lwin == 3) {
			    v = gr_info->pow2gain[(*scf++) << shift];
			    step = 1;
			} else {
			    v = gr_info->full_gain[lwin][(*scf++) << shift];
			    step = 3;
			}
		    }
		    mc--;
		}
		if ((a & (0x8 >> i))) {
		    max[lwin] = cb;
		    part2remain--;
		    if (part2remain < 0) {
			part2remain++;
			break;
		    }
		    if (get1bit())
			*xrpnt = -v;
		    else
			*xrpnt = v;
		} else
		    *xrpnt = 0.0;
		xrpnt += step;
	    }
	}
	while (m < me) {
	    if (!mc) {
		mc = *m++;
		xrpnt = ((double *) xr) + *m++;
		if ((*m++) == 3)
		    step = 1;
		else
		    step = 3;
		m++;
	    }
	    mc--;
	    *xrpnt = 0.0;
	    xrpnt += step;
	    *xrpnt = 0.0;
	    xrpnt += step;
	}
	gr_info->maxband[0] = max[0] + 1;
	gr_info->maxband[1] = max[1] + 1;
	gr_info->maxband[2] = max[2] + 1;
	gr_info->maxbandl = max[3] + 1; {
	    int rmax = max[0] > max[1] ? max[0] : max[1];
	    rmax = (rmax > max[2] ? rmax : max[2]) + 1;
	    gr_info->maxb = rmax ? shortLimit[sfreq][rmax] : longLimit[sfreq][max[3] + 1];
    }} else {
	int *pretab = gr_info->preflag ? pretab1 : pretab2;
	int i, max = -1;
	int cb = 0;
	register int *m = map[sfreq][2];
	register double v = 0.0;
	register int mc = 0;
	for (i = 0; i < 3; i++) {
	    int lp = l[i];
	    struct newhuff *h = ht + gr_info->table_select[i];
	    for (; lp; lp--, mc--) {
		int x, y;
		if (!mc) {
		    mc = *m++;
		    v = gr_info->pow2gain[((*scf++) + (*pretab++)) << shift];
		    cb = *m++;
		}
		{
		    register short *val = h->table;
		    while ((y = *val++) < 0) {
			if (get1bit())
			    val -= y;
			part2remain--;
		    }
		    x = y >> 4;
		    y &= 0xf;
		}
		if (x == 15) {
		    max = cb;
		    part2remain -= h->linbits + 1;
		    x += getbits(h->linbits);
		    if (get1bit())
			*xrpnt++ = -ispow[x] * v;
		    else
			*xrpnt++ = ispow[x] * v;
		} else if (x) {
		    max = cb;
		    if (get1bit())
			*xrpnt++ = -ispow[x] * v;
		    else
			*xrpnt++ = ispow[x] * v;
		    part2remain--;
		} else
		    *xrpnt++ = 0.0;
		if (y == 15) {
		    max = cb;
		    part2remain -= h->linbits + 1;
		    y += getbits(h->linbits);
		    if (get1bit())
			*xrpnt++ = -ispow[y] * v;
		    else
			*xrpnt++ = ispow[y] * v;
		} else if (y) {
		    max = cb;
		    if (get1bit())
			*xrpnt++ = -ispow[y] * v;
		    else
			*xrpnt++ = ispow[y] * v;
		    part2remain--;
		} else
		    *xrpnt++ = 0.0;
	    }
	}
	for (; l3 && (part2remain > 0); l3--) {
	    struct newhuff *h = htc + gr_info->count1table_select;
	    register short *val = h->table, a;
	    while ((a = *val++) < 0) {
		part2remain--;
		if (part2remain < 0) {
		    part2remain++;
		    a = 0;
		    break;
		}
		if (get1bit())
		    val -= a;
	    }
	    for (i = 0; i < 4; i++) {
		if (!(i & 1)) {
		    if (!mc) {
			mc = *m++;
			cb = *m++;
			v = gr_info->pow2gain[((*scf++) + (*pretab++)) << shift];
		    }
		    mc--;
		}
		if ((a & (0x8 >> i))) {
		    max = cb;
		    part2remain--;
		    if (part2remain < 0) {
			part2remain++;
			break;
		    }
		    if (get1bit())
			*xrpnt++ = -v;
		    else
			*xrpnt++ = v;
		} else
		    *xrpnt++ = 0.0;
	    }
	}
	for (i = (&xr[32][0] - xrpnt) >> 1; i; i--) {
	    *xrpnt++ = 0.0;
	    *xrpnt++ = 0.0;
	}
	gr_info->maxbandl = max + 1;
	gr_info->maxb = longLimit[sfreq][gr_info->maxbandl];
    }
    while (part2remain > 16) {
	getbits(16);
	part2remain -= 16;
    }
    if (part2remain > 0)
	getbits(part2remain);
    else if (part2remain < 0) {
	fprintf(stderr, "mpg123: Can't rewind stream by %d bits!\n", -part2remain);
	return 1;
    }
    return 0;
}

static void III_i_stereo(double xr_buf[2][32][18], int *scalefac, struct gr_info_s *gr_info, int sfreq, int ms_stereo, int lsf)
{
    double (*xr)[32 * 18] = (double (*)[32 * 18]) xr_buf;
    struct bandInfoStruct *bi = &bandInfo[sfreq];
    double *tab1, *tab2;
    if (lsf) {
	int p = gr_info->scalefac_compress & 0x1;
	if (ms_stereo) {
	    tab1 = pow1_2[p];
	    tab2 = pow2_2[p];
	} else {
	    tab1 = pow1_1[p];
	    tab2 = pow2_1[p];
	}
    } else {
	if (ms_stereo) {
	    tab1 = tan1_2;
	    tab2 = tan2_2;
	} else {
	    tab1 = tan1_1;
	    tab2 = tan2_1;
	}
    }
    if (gr_info->block_type == 2) {
	int lwin, do_l = 0;
	if (gr_info->mixed_block_flag)
	    do_l = 1;
	for (lwin = 0; lwin < 3; lwin++) {
	    int is_p, sb, idx, sfb = gr_info->maxband[lwin];
	    if (sfb > 3)
		do_l = 0;
	    for (; sfb < 12; sfb++) {
		is_p = scalefac[sfb * 3 + lwin - gr_info->mixed_block_flag];
		if (is_p != 7) {
		    double t1, t2;
		    sb = bi->shortDiff[sfb];
		    idx = bi->shortIdx[sfb] + lwin;
		    t1 = tab1[is_p];
		    t2 = tab2[is_p];
		    for (; sb > 0; sb--, idx += 3) {
			double v = xr[0][idx];
			xr[0][idx] = v * t1;
			xr[1][idx] = v * t2;
		}}
	    } is_p = scalefac[11 * 3 + lwin - gr_info->mixed_block_flag];
	    sb = bi->shortDiff[12];
	    idx = bi->shortIdx[12] + lwin;
	    if (is_p != 7) {
		double t1, t2;
		t1 = tab1[is_p];
		t2 = tab2[is_p];
		for (; sb > 0; sb--, idx += 3) {
		    double v = xr[0][idx];
		    xr[0][idx] = v * t1;
		    xr[1][idx] = v * t2;
	    }}
	} if (do_l) {
	    int sfb = gr_info->maxbandl;
	    int idx = bi->longIdx[sfb];
	    for (; sfb < 8; sfb++) {
		int sb = bi->longDiff[sfb];
		int is_p = scalefac[sfb];
		if (is_p != 7) {
		    double t1, t2;
		    t1 = tab1[is_p];
		    t2 = tab2[is_p];
		    for (; sb > 0; sb--, idx++) {
			double v = xr[0][idx];
			xr[0][idx] = v * t1;
			xr[1][idx] = v * t2;
		}} else
		    idx += sb;
	    }
	}
    } else {
	int sfb = gr_info->maxbandl;
	int is_p, idx = bi->longIdx[sfb];
	for (; sfb < 21; sfb++) {
	    int sb = bi->longDiff[sfb];
	    is_p = scalefac[sfb];
	    if (is_p != 7) {
		double t1, t2;
		t1 = tab1[is_p];
		t2 = tab2[is_p];
		for (; sb > 0; sb--, idx++) {
		    double v = xr[0][idx];
		    xr[0][idx] = v * t1;
		    xr[1][idx] = v * t2;
	    }} else
		idx += sb;
	}
	is_p = scalefac[20];
	if (is_p != 7) {
	    int sb;
	    double t1 = tab1[is_p], t2 = tab2[is_p];
	    for (sb = bi->longDiff[21]; sb > 0; sb--, idx++) {
		double v = xr[0][idx];
		xr[0][idx] = v * t1;
		xr[1][idx] = v * t2;
	}}
}} static void III_antialias(double xr[32][18], struct gr_info_s *gr_info)
{
    int sblim;
    if (gr_info->block_type == 2) {
	if (!gr_info->mixed_block_flag)
	    return;
	sblim = 1;
    } else {
	sblim = gr_info->maxb - 1;
    }
    {
	int sb;
	double *xr1 = (double *) xr[1];
	for (sb = sblim; sb; sb--, xr1 += 10) {
	    int ss;
	    double *cs = aa_cs, *ca = aa_ca;
	    double *xr2 = xr1;
	    for (ss = 7; ss >= 0; ss--) {
		register double bu = *--xr2, bd = *xr1;
		*xr2 = (bu * (*cs)) - (bd * (*ca));
		*xr1++ = (bd * (*cs++)) + (bu * (*ca++));
}}}} static void dct36(double *inbuf, double *o1, double *o2, double *wintab, double *tsbuf)
{ {
	register double *in = inbuf;
	in[17] += in[16];
	in[16] += in[15];
	in[15] += in[14];
	in[14] += in[13];
	in[13] += in[12];
	in[12] += in[11];
	in[11] += in[10];
	in[10] += in[9];
	in[9] += in[8];
	in[8] += in[7];
	in[7] += in[6];
	in[6] += in[5];
	in[5] += in[4];
	in[4] += in[3];
	in[3] += in[2];
	in[2] += in[1];
	in[1] += in[0];
	in[17] += in[15];
	in[15] += in[13];
	in[13] += in[11];
	in[11] += in[9];
	in[9] += in[7];
	in[7] += in[5];
	in[5] += in[3];
	in[3] += in[1]; {
	    register const double *c = COS9;
	    register double *out2 = o2;
	    register double *w = wintab;
	    register double *out1 = o1;
	    register double *ts = tsbuf;
	    double ta33, ta66, tb33, tb66;
	    ta33 = in[2 * 3 + 0] * c[3];
	    ta66 = in[2 * 6 + 0] * c[6];
	    tb33 = in[2 * 3 + 1] * c[3];
	    tb66 = in[2 * 6 + 1] * c[6]; {
		double tmp1a, tmp2a, tmp1b, tmp2b;
		tmp1a = in[2 * 1 + 0] * c[1] + ta33 + in[2 * 5 + 0] * c[5] + in[2 * 7 + 0] * c[7];
		tmp1b = in[2 * 1 + 1] * c[1] + tb33 + in[2 * 5 + 1] * c[5] + in[2 * 7 + 1] * c[7];
		tmp2a = in[2 * 0 + 0] + in[2 * 2 + 0] * c[2] + in[2 * 4 + 0] * c[4] + ta66 + in[2 * 8 + 0] * c[8];
		tmp2b = in[2 * 0 + 1] + in[2 * 2 + 1] * c[2] + in[2 * 4 + 1] * c[4] + tb66 + in[2 * 8 + 1] * c[8]; {
		    double sum0, sum1;
		    sum0 = tmp1a + tmp2a;
		    sum1 = (tmp1b + tmp2b) * tfcos36[(0)]; {
			double tmp;
			out2[9 + (0)] = (tmp = sum0 + sum1) * w[27 + (0)];
			out2[8 - (0)] = tmp * w[26 - (0)];
		    } sum0 -= sum1;
		    ts[32 * (8 - (0))] = out1[8 - (0)] + sum0 * w[8 - (0)];
		    ts[32 * (9 + (0))] = out1[9 + (0)] + sum0 * w[9 + (0)];;
		}; {
		    double sum0, sum1;
		    sum0 = tmp2a - tmp1a;
		    sum1 = (tmp2b - tmp1b) * tfcos36[(8)]; {
			double tmp;
			out2[9 + (8)] = (tmp = sum0 + sum1) * w[27 + (8)];
			out2[8 - (8)] = tmp * w[26 - (8)];
		    } sum0 -= sum1;
		    ts[32 * (8 - (8))] = out1[8 - (8)] + sum0 * w[8 - (8)];
		    ts[32 * (9 + (8))] = out1[9 + (8)] + sum0 * w[9 + (8)];;
		};
	    } {
		double tmp1a, tmp2a, tmp1b, tmp2b;
		tmp1a = (in[2 * 1 + 0] - in[2 * 5 + 0] - in[2 * 7 + 0]) * c[3];
		tmp1b = (in[2 * 1 + 1] - in[2 * 5 + 1] - in[2 * 7 + 1]) * c[3];
		tmp2a = (in[2 * 2 + 0] - in[2 * 4 + 0] - in[2 * 8 + 0]) * c[6] - in[2 * 6 + 0] + in[2 * 0 + 0];
		tmp2b = (in[2 * 2 + 1] - in[2 * 4 + 1] - in[2 * 8 + 1]) * c[6] - in[2 * 6 + 1] + in[2 * 0 + 1]; {
		    double sum0, sum1;
		    sum0 = tmp1a + tmp2a;
		    sum1 = (tmp1b + tmp2b) * tfcos36[(1)]; {
			double tmp;
			out2[9 + (1)] = (tmp = sum0 + sum1) * w[27 + (1)];
			out2[8 - (1)] = tmp * w[26 - (1)];
		    } sum0 -= sum1;
		    ts[32 * (8 - (1))] = out1[8 - (1)] + sum0 * w[8 - (1)];
		    ts[32 * (9 + (1))] = out1[9 + (1)] + sum0 * w[9 + (1)];;
		}; {
		    double sum0, sum1;
		    sum0 = tmp2a - tmp1a;
		    sum1 = (tmp2b - tmp1b) * tfcos36[(7)]; {
			double tmp;
			out2[9 + (7)] = (tmp = sum0 + sum1) * w[27 + (7)];
			out2[8 - (7)] = tmp * w[26 - (7)];
		    } sum0 -= sum1;
		    ts[32 * (8 - (7))] = out1[8 - (7)] + sum0 * w[8 - (7)];
		    ts[32 * (9 + (7))] = out1[9 + (7)] + sum0 * w[9 + (7)];;
		};
	    } {
		double tmp1a, tmp2a, tmp1b, tmp2b;
		tmp1a = in[2 * 1 + 0] * c[5] - ta33 - in[2 * 5 + 0] * c[7] + in[2 * 7 + 0] * c[1];
		tmp1b = in[2 * 1 + 1] * c[5] - tb33 - in[2 * 5 + 1] * c[7] + in[2 * 7 + 1] * c[1];
		tmp2a = in[2 * 0 + 0] - in[2 * 2 + 0] * c[8] - in[2 * 4 + 0] * c[2] + ta66 + in[2 * 8 + 0] * c[4];
		tmp2b = in[2 * 0 + 1] - in[2 * 2 + 1] * c[8] - in[2 * 4 + 1] * c[2] + tb66 + in[2 * 8 + 1] * c[4]; {
		    double sum0, sum1;
		    sum0 = tmp1a + tmp2a;
		    sum1 = (tmp1b + tmp2b) * tfcos36[(2)]; {
			double tmp;
			out2[9 + (2)] = (tmp = sum0 + sum1) * w[27 + (2)];
			out2[8 - (2)] = tmp * w[26 - (2)];
		    } sum0 -= sum1;
		    ts[32 * (8 - (2))] = out1[8 - (2)] + sum0 * w[8 - (2)];
		    ts[32 * (9 + (2))] = out1[9 + (2)] + sum0 * w[9 + (2)];;
		}; {
		    double sum0, sum1;
		    sum0 = tmp2a - tmp1a;
		    sum1 = (tmp2b - tmp1b) * tfcos36[(6)]; {
			double tmp;
			out2[9 + (6)] = (tmp = sum0 + sum1) * w[27 + (6)];
			out2[8 - (6)] = tmp * w[26 - (6)];
		    } sum0 -= sum1;
		    ts[32 * (8 - (6))] = out1[8 - (6)] + sum0 * w[8 - (6)];
		    ts[32 * (9 + (6))] = out1[9 + (6)] + sum0 * w[9 + (6)];;
		};
	    } {
		double tmp1a, tmp2a, tmp1b, tmp2b;
		tmp1a = in[2 * 1 + 0] * c[7] - ta33 + in[2 * 5 + 0] * c[1] - in[2 * 7 + 0] * c[5];
		tmp1b = in[2 * 1 + 1] * c[7] - tb33 + in[2 * 5 + 1] * c[1] - in[2 * 7 + 1] * c[5];
		tmp2a = in[2 * 0 + 0] - in[2 * 2 + 0] * c[4] + in[2 * 4 + 0] * c[8] + ta66 - in[2 * 8 + 0] * c[2];
		tmp2b = in[2 * 0 + 1] - in[2 * 2 + 1] * c[4] + in[2 * 4 + 1] * c[8] + tb66 - in[2 * 8 + 1] * c[2]; {
		    double sum0, sum1;
		    sum0 = tmp1a + tmp2a;
		    sum1 = (tmp1b + tmp2b) * tfcos36[(3)]; {
			double tmp;
			out2[9 + (3)] = (tmp = sum0 + sum1) * w[27 + (3)];
			out2[8 - (3)] = tmp * w[26 - (3)];
		    } sum0 -= sum1;
		    ts[32 * (8 - (3))] = out1[8 - (3)] + sum0 * w[8 - (3)];
		    ts[32 * (9 + (3))] = out1[9 + (3)] + sum0 * w[9 + (3)];;
		}; {
		    double sum0, sum1;
		    sum0 = tmp2a - tmp1a;
		    sum1 = (tmp2b - tmp1b) * tfcos36[(5)]; {
			double tmp;
			out2[9 + (5)] = (tmp = sum0 + sum1) * w[27 + (5)];
			out2[8 - (5)] = tmp * w[26 - (5)];
		    } sum0 -= sum1;
		    ts[32 * (8 - (5))] = out1[8 - (5)] + sum0 * w[8 - (5)];
		    ts[32 * (9 + (5))] = out1[9 + (5)] + sum0 * w[9 + (5)];;
		};
	    } {
		double sum0, sum1;
		sum0 = in[2 * 0 + 0] - in[2 * 2 + 0] + in[2 * 4 + 0] - in[2 * 6 + 0] + in[2 * 8 + 0];
		sum1 = (in[2 * 0 + 1] - in[2 * 2 + 1] + in[2 * 4 + 1] - in[2 * 6 + 1] + in[2 * 8 + 1]) * tfcos36[4]; {
		    double tmp;
		    out2[9 + (4)] = (tmp = sum0 + sum1) * w[27 + (4)];
		    out2[8 - (4)] = tmp * w[26 - (4)];
		} sum0 -= sum1;
		ts[32 * (8 - (4))] = out1[8 - (4)] + sum0 * w[8 - (4)];
		ts[32 * (9 + (4))] = out1[9 + (4)] + sum0 * w[9 + (4)];;
}}}} static void dct12(double *in, double *rawout1, double *rawout2, register double *wi, register double *ts)
{ {
	double in0, in1, in2, in3, in4, in5;
	register double *out1 = rawout1;
	ts[32 * 0] = out1[0];
	ts[32 * 1] = out1[1];
	ts[32 * 2] = out1[2];
	ts[32 * 3] = out1[3];
	ts[32 * 4] = out1[4];
	ts[32 * 5] = out1[5];
	in5 = in[5 * 3];
	in5 += (in4 = in[4 * 3]);
	in4 += (in3 = in[3 * 3]);
	in3 += (in2 = in[2 * 3]);
	in2 += (in1 = in[1 * 3]);
	in1 += (in0 = in[0 * 3]);
	in5 += in3;
	in3 += in1;
	in2 *= COS6_1;
	in3 *= COS6_1; {
	    double tmp0, tmp1 = (in0 - in4); {
		double tmp2 = (in1 - in5) * tfcos12[1];
		tmp0 = tmp1 + tmp2;
		tmp1 -= tmp2;
	    } ts[(17 - 1) * 32] = out1[17 - 1] + tmp0 * wi[11 - 1];
	    ts[(12 + 1) * 32] = out1[12 + 1] + tmp0 * wi[6 + 1];
	    ts[(6 + 1) * 32] = out1[6 + 1] + tmp1 * wi[1];
	    ts[(11 - 1) * 32] = out1[11 - 1] + tmp1 * wi[5 - 1];
	} in0 += in4 * COS6_2;
	in4 = in0 + in2;
	in0 -= in2;
	in1 += in5 * COS6_2;
	in5 = (in1 + in3) * tfcos12[0];
	in1 = (in1 - in3) * tfcos12[2];
	in3 = in4 + in5;
	in4 -= in5;
	in2 = in0 + in1;
	in0 -= in1;
	ts[(17 - 0) * 32] = out1[17 - 0] + in2 * wi[11 - 0];
	ts[(12 + 0) * 32] = out1[12 + 0] + in2 * wi[6 + 0];
	ts[(12 + 2) * 32] = out1[12 + 2] + in3 * wi[6 + 2];
	ts[(17 - 2) * 32] = out1[17 - 2] + in3 * wi[11 - 2];
	ts[(6 + 0) * 32] = out1[6 + 0] + in0 * wi[0];
	ts[(11 - 0) * 32] = out1[11 - 0] + in0 * wi[5 - 0];
	ts[(6 + 2) * 32] = out1[6 + 2] + in4 * wi[2];
	ts[(11 - 2) * 32] = out1[11 - 2] + in4 * wi[5 - 2];
} in++; {
    double in0, in1, in2, in3, in4, in5;
    register double *out2 = rawout2;
    in5 = in[5 * 3];
    in5 += (in4 = in[4 * 3]);
    in4 += (in3 = in[3 * 3]);
    in3 += (in2 = in[2 * 3]);
    in2 += (in1 = in[1 * 3]);
    in1 += (in0 = in[0 * 3]);
    in5 += in3;
    in3 += in1;
    in2 *= COS6_1;
    in3 *= COS6_1; {
	double tmp0, tmp1 = (in0 - in4); {
	    double tmp2 = (in1 - in5) * tfcos12[1];
	    tmp0 = tmp1 + tmp2;
	    tmp1 -= tmp2;
	} out2[5 - 1] = tmp0 * wi[11 - 1];
	out2[0 + 1] = tmp0 * wi[6 + 1];
	ts[(12 + 1) * 32] += tmp1 * wi[1];
	ts[(17 - 1) * 32] += tmp1 * wi[5 - 1];
    } in0 += in4 * COS6_2;
    in4 = in0 + in2;
    in0 -= in2;
    in1 += in5 * COS6_2;
    in5 = (in1 + in3) * tfcos12[0];
    in1 = (in1 - in3) * tfcos12[2];
    in3 = in4 + in5;
    in4 -= in5;
    in2 = in0 + in1;
    in0 -= in1;
    out2[5 - 0] = in2 * wi[11 - 0];
    out2[0 + 0] = in2 * wi[6 + 0];
    out2[0 + 2] = in3 * wi[6 + 2];
    out2[5 - 2] = in3 * wi[11 - 2];
    ts[(12 + 0) * 32] += in0 * wi[0];
    ts[(17 - 0) * 32] += in0 * wi[5 - 0];
    ts[(12 + 2) * 32] += in4 * wi[2];
    ts[(17 - 2) * 32] += in4 * wi[5 - 2];
} in++; {
    double in0, in1, in2, in3, in4, in5;
    register double *out2 = rawout2;
    out2[12] = out2[13] = out2[14] = out2[15] = out2[16] = out2[17] = 0.0;
    in5 = in[5 * 3];
    in5 += (in4 = in[4 * 3]);
    in4 += (in3 = in[3 * 3]);
    in3 += (in2 = in[2 * 3]);
    in2 += (in1 = in[1 * 3]);
    in1 += (in0 = in[0 * 3]);
    in5 += in3;
    in3 += in1;
    in2 *= COS6_1;
    in3 *= COS6_1; {
	double tmp0, tmp1 = (in0 - in4); {
	    double tmp2 = (in1 - in5) * tfcos12[1];
	    tmp0 = tmp1 + tmp2;
	    tmp1 -= tmp2;
	} out2[11 - 1] = tmp0 * wi[11 - 1];
	out2[6 + 1] = tmp0 * wi[6 + 1];
	out2[0 + 1] += tmp1 * wi[1];
	out2[5 - 1] += tmp1 * wi[5 - 1];
    } in0 += in4 * COS6_2;
    in4 = in0 + in2;
    in0 -= in2;
    in1 += in5 * COS6_2;
    in5 = (in1 + in3) * tfcos12[0];
    in1 = (in1 - in3) * tfcos12[2];
    in3 = in4 + in5;
    in4 -= in5;
    in2 = in0 + in1;
    in0 -= in1;
    out2[11 - 0] = in2 * wi[11 - 0];
    out2[6 + 0] = in2 * wi[6 + 0];
    out2[6 + 2] = in3 * wi[6 + 2];
    out2[11 - 2] = in3 * wi[11 - 2];
    out2[0 + 0] += in0 * wi[0];
    out2[5 - 0] += in0 * wi[5 - 0];
    out2[0 + 2] += in4 * wi[2];
    out2[5 - 2] += in4 * wi[5 - 2];
}} 
//complexity is O(n) inferred by loopus
static void III_hybrid(double fsIn[32][18], double tsOut[18][32], int ch, struct gr_info_s *gr_info)
{
    double *tspnt = (double *) tsOut;
    double (*block)[2][32 * 18] = gmp->hybrid_block;
    int *blc = gmp->hybrid_blc;
    double *rawout1, *rawout2;
    int bt;
    int sb = 0; {
	int b = blc[ch];
	rawout1 = block[b][ch];
	b = -b + 1;
	rawout2 = block[b][ch];
	blc[ch] = b;
    } if (gr_info->mixed_block_flag) {
	sb = 2;
	dct36(fsIn[0], rawout1, rawout2, win[0], tspnt);
	dct36(fsIn[1], rawout1 + 18, rawout2 + 18, win1[0], tspnt + 1);
	rawout1 += 36;
	rawout2 += 36;
	tspnt += 2;
    }
    bt = gr_info->block_type;
    if (bt == 2) {
	for (; sb < gr_info->maxb; sb += 2, tspnt += 2, rawout1 += 36, rawout2 += 36) {
	    dct12(fsIn[sb], rawout1, rawout2, win[2], tspnt);
	    dct12(fsIn[sb + 1], rawout1 + 18, rawout2 + 18, win1[2], tspnt + 1);
	}
    } else {
	for (; sb < gr_info->maxb; sb += 2, tspnt += 2, rawout1 += 36, rawout2 += 36) {
	    dct36(fsIn[sb], rawout1, rawout2, win[bt], tspnt);
	    dct36(fsIn[sb + 1], rawout1 + 18, rawout2 + 18, win1[bt], tspnt + 1);
	}
    }
    for (; sb < 32; sb++, tspnt++) {
	int i;
	for (i = 0; i < 18; i++) {
	    tspnt[i * 32] = *rawout1++;
	    *rawout2++ = 0.0;
	}
    }
}

int do_layer3(struct frame *fr, unsigned char *pcm_sample, int *pcm_point)
{
    int gr, ch, ss, clip = 0;
    int scalefacs[2][39];
    struct III_sideinfo sideinfo;
    int stereo = fr->stereo;
    int single = fr->single;
    int ms_stereo, i_stereo;
    int sfreq = fr->sampling_frequency;
    int stereo1, granules;
    if (stereo == 1) {
	stereo1 = 1;
	single = 0;
    } else if (single >= 0)
	stereo1 = 1;
    else
	stereo1 = 2;
    if (fr->mode == 1) {
	ms_stereo = fr->mode_ext & 0x2;
	i_stereo = fr->mode_ext & 0x1;
    } else
	ms_stereo = i_stereo = 0;
    if (fr->lsf) {
	granules = 1;
	III_get_side_info_2(&sideinfo, stereo, ms_stereo, sfreq, single);
    } else {
	granules = 2;
	III_get_side_info_1(&sideinfo, stereo, ms_stereo, sfreq, single);
    }
    if (set_pointer(sideinfo.main_data_begin) == -1)
	return 0;
    for (gr = 0; gr < granules; gr++) {
	static double hybridIn[2][32][18];
	static double hybridOut[2][18][32]; {
	    struct gr_info_s *gr_info = &(sideinfo.ch[0].gr[gr]);
	    long part2bits;
	    if (fr->lsf)
		part2bits = III_get_scale_factors_2(scalefacs[0], gr_info, 0);
	    else {
		part2bits = III_get_scale_factors_1(scalefacs[0], gr_info);
	    }
	    if (III_dequantize_sample(hybridIn[0], scalefacs[0], gr_info, sfreq, part2bits))
		return clip;
	}
	if (stereo == 2) {
	    struct gr_info_s *gr_info = &(sideinfo.ch[1].gr[gr]);
	    long part2bits;
	    if (fr->lsf)
		part2bits = III_get_scale_factors_2(scalefacs[1], gr_info, i_stereo);
	    else {
		part2bits = III_get_scale_factors_1(scalefacs[1], gr_info);
	    }
	    if (III_dequantize_sample(hybridIn[1], scalefacs[1], gr_info, sfreq, part2bits))
		return clip;
	    if (ms_stereo) {
		int i;
		for (i = 0; i < 32 * 18; i++) {
		    double tmp0, tmp1;
		    tmp0 = ((double *) hybridIn[0])[i];
		    tmp1 = ((double *) hybridIn[1])[i];
		    ((double *) hybridIn[1])[i] = tmp0 - tmp1;
		    ((double *) hybridIn[0])[i] = tmp0 + tmp1;
	    }}
	    if (i_stereo)
		III_i_stereo(hybridIn, scalefacs[1], gr_info, sfreq, ms_stereo, fr->lsf);
	    if (ms_stereo || i_stereo || (single == 3)) {
		if (gr_info->maxb > sideinfo.ch[0].gr[gr].maxb)
		    sideinfo.ch[0].gr[gr].maxb = gr_info->maxb;
		else
		    gr_info->maxb = sideinfo.ch[0].gr[gr].maxb;
	    }
	    switch (single) {
	    case 3:{
		    register int i;
		    register double *in0 = (double *) hybridIn[0], *in1 = (double *) hybridIn[1];
		    for (i = 0; i < 18 * gr_info->maxb; i++, in0++)
			*in0 = (*in0 + *in1++);
		}
		break;
	    case 1:{
		    register int i;
		    register double *in0 = (double *) hybridIn[0], *in1 = (double *) hybridIn[1];
		    for (i = 0; i < 18 * gr_info->maxb; i++)
			*in0++ = *in1++;
		}
		break;
	    }
	}
	for (ch = 0; ch < stereo1; ch++) {
	    struct gr_info_s *gr_info = &(sideinfo.ch[ch].gr[gr]);
	    III_antialias(hybridIn[ch], gr_info);
	    III_hybrid(hybridIn[ch], hybridOut[ch], ch, gr_info);
	} for (ss = 0; ss < 18; ss++) {
	    if (single >= 0) {
		clip += synth_1to1_mono(hybridOut[0][ss], pcm_sample, pcm_point);
	    } else {
		int p1 = *pcm_point;
		clip += synth_1to1(hybridOut[0][ss], 0, pcm_sample, &p1);
		clip += synth_1to1(hybridOut[1][ss], 1, pcm_sample, pcm_point);
    }}} return clip;
}
