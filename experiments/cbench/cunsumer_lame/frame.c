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
extern void __assert_fail(__const char *__assertion, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert_perror_fail(int __errnum, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
struct id3_tag {
    unsigned int refcount;
    unsigned int version;
    int flags;
    int extendedflags;
    int restrictions;
    int options;
    unsigned int nframes;
    struct id3_frame **frames;
    unsigned long paddedsize;
};
enum { ID3_TAG_FLAG_UNSYNCHRONISATION = 0x80, ID3_TAG_FLAG_EXTENDEDHEADER = 0x40, ID3_TAG_FLAG_EXPERIMENTALINDICATOR = 0x20, ID3_TAG_FLAG_FOOTERPRESENT = 0x10, ID3_TAG_FLAG_KNOWNFLAGS = 0xf0 };
enum { ID3_TAG_EXTENDEDFLAG_TAGISANUPDATE = 0x40, ID3_TAG_EXTENDEDFLAG_CRCDATAPRESENT = 0x20, ID3_TAG_EXTENDEDFLAG_TAGRESTRICTIONS = 0x10, ID3_TAG_EXTENDEDFLAG_KNOWNFLAGS = 0x70 };
enum { ID3_TAG_RESTRICTION_TAGSIZE_MASK = 0xc0, ID3_TAG_RESTRICTION_TAGSIZE_128_FRAMES_1_MB = 0x00, ID3_TAG_RESTRICTION_TAGSIZE_64_FRAMES_128_KB = 0x40, ID3_TAG_RESTRICTION_TAGSIZE_32_FRAMES_40_KB = 0x80, ID3_TAG_RESTRICTION_TAGSIZE_32_FRAMES_4_KB = 0xc0 };
enum { ID3_TAG_RESTRICTION_TEXTENCODING_MASK = 0x20, ID3_TAG_RESTRICTION_TEXTENCODING_NONE = 0x00, ID3_TAG_RESTRICTION_TEXTENCODING_LATIN1_UTF8 = 0x20 };
enum { ID3_TAG_RESTRICTION_TEXTSIZE_MASK = 0x18, ID3_TAG_RESTRICTION_TEXTSIZE_NONE = 0x00, ID3_TAG_RESTRICTION_TEXTSIZE_1024_CHARS = 0x08, ID3_TAG_RESTRICTION_TEXTSIZE_128_CHARS = 0x10, ID3_TAG_RESTRICTION_TEXTSIZE_30_CHARS = 0x18 };
enum { ID3_TAG_RESTRICTION_IMAGEENCODING_MASK = 0x04, ID3_TAG_RESTRICTION_IMAGEENCODING_NONE = 0x00, ID3_TAG_RESTRICTION_IMAGEENCODING_PNG_JPEG = 0x04 };
enum { ID3_TAG_RESTRICTION_IMAGESIZE_MASK = 0x03, ID3_TAG_RESTRICTION_IMAGESIZE_NONE = 0x00, ID3_TAG_RESTRICTION_IMAGESIZE_256_256 = 0x01, ID3_TAG_RESTRICTION_IMAGESIZE_64_64 = 0x02, ID3_TAG_RESTRICTION_IMAGESIZE_64_64_EXACT = 0x03 };
enum { ID3_TAG_OPTION_UNSYNCHRONISATION = 0x0001, ID3_TAG_OPTION_COMPRESSION = 0x0002, ID3_TAG_OPTION_CRC = 0x0004, ID3_TAG_OPTION_APPENDEDTAG = 0x0010, ID3_TAG_OPTION_FILEALTERED = 0x0020, ID3_TAG_OPTION_ID3V1 = 0x0100 };
typedef unsigned char id3_byte_t;
typedef unsigned long id3_length_t;
typedef unsigned long id3_ucs4_t;
typedef unsigned char id3_latin1_t;
typedef unsigned short id3_utf16_t;
typedef signed char id3_utf8_t;
struct id3_frame {
    char id[5];
    char const *description;
    unsigned int refcount;
    int flags;
    int group_id;
    int encryption_method;
    id3_byte_t *encoded;
    id3_length_t encoded_length;
    id3_length_t decoded_length;
    unsigned int nfields;
    union id3_field *fields;
};
enum { ID3_FRAME_FLAG_TAGALTERPRESERVATION = 0x4000, ID3_FRAME_FLAG_FILEALTERPRESERVATION = 0x2000, ID3_FRAME_FLAG_READONLY = 0x1000, ID3_FRAME_FLAG_STATUSFLAGS = 0xff00, ID3_FRAME_FLAG_GROUPINGIDENTITY = 0x0040, ID3_FRAME_FLAG_COMPRESSION = 0x0008, ID3_FRAME_FLAG_ENCRYPTION = 0x0004, ID3_FRAME_FLAG_UNSYNCHRONISATION = 0x0002, ID3_FRAME_FLAG_DATALENGTHINDICATOR = 0x0001, ID3_FRAME_FLAG_FORMATFLAGS = 0x00ff, ID3_FRAME_FLAG_KNOWNFLAGS = 0x704f };
enum id3_field_type { ID3_FIELD_TYPE_TEXTENCODING, ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_LATIN1FULL, ID3_FIELD_TYPE_LATIN1LIST, ID3_FIELD_TYPE_STRING, ID3_FIELD_TYPE_STRINGFULL, ID3_FIELD_TYPE_STRINGLIST, ID3_FIELD_TYPE_LANGUAGE, ID3_FIELD_TYPE_FRAMEID, ID3_FIELD_TYPE_DATE, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_INT16, ID3_FIELD_TYPE_INT24, ID3_FIELD_TYPE_INT32, ID3_FIELD_TYPE_INT32PLUS, ID3_FIELD_TYPE_BINARYDATA };
enum id3_field_textencoding { ID3_FIELD_TEXTENCODING_ISO_8859_1 = 0x00, ID3_FIELD_TEXTENCODING_UTF_16 = 0x01, ID3_FIELD_TEXTENCODING_UTF_16BE = 0x02, ID3_FIELD_TEXTENCODING_UTF_8 = 0x03 };
union id3_field {
    enum id3_field_type type;
    struct {
	enum id3_field_type type;
	signed long value;
    } number;
    struct {
	enum id3_field_type type;
	id3_latin1_t *ptr;
    } latin1;
    struct {
	enum id3_field_type type;
	unsigned int nstrings;
	id3_latin1_t **strings;
    } latin1list;
    struct {
	enum id3_field_type type;
	id3_ucs4_t *ptr;
    } string;
    struct {
	enum id3_field_type type;
	unsigned int nstrings;
	id3_ucs4_t **strings;
    } stringlist;
    struct {
	enum id3_field_type type;
	char value[9];
    } immediate;
    struct {
	enum id3_field_type type;
	id3_byte_t *data;
	id3_length_t length;
    } binary;
};
struct id3_tag *id3_tag_new(void);
void id3_tag_delete(struct id3_tag *);
void id3_tag_clearframes(struct id3_tag *);
int id3_tag_attachframe(struct id3_tag *, struct id3_frame *);
int id3_tag_detachframe(struct id3_tag *, struct id3_frame *);
struct id3_frame *id3_tag_findframe(struct id3_tag const *, char const *, unsigned int);
signed long id3_tag_query(id3_byte_t const *, id3_length_t);
struct id3_tag *id3_tag_parse(id3_byte_t const *, id3_length_t);
id3_length_t id3_tag_render(struct id3_tag const *, id3_byte_t *);
enum id3_file_mode { ID3_FILE_MODE_READONLY = 0, ID3_FILE_MODE_READWRITE };
struct id3_file *id3_file_open(char const *, enum id3_file_mode);
struct id3_file *id3_file_fdopen(int, enum id3_file_mode);
void id3_file_close(struct id3_file *);
struct id3_tag *id3_file_tag(struct id3_file const *);
int id3_file_update(struct id3_file *);
id3_latin1_t *id3_ucs4_latin1duplicate(id3_ucs4_t const *);
id3_utf16_t *id3_ucs4_utf16duplicate(id3_ucs4_t const *);
id3_utf8_t *id3_ucs4_utf8duplicate(id3_ucs4_t const *);
void id3_ucs4_putnumber(id3_ucs4_t *, unsigned long);
unsigned long id3_ucs4_getnumber(id3_ucs4_t const *);
id3_ucs4_t const *id3_genre_name(id3_ucs4_t const *);
int id3_field_setint(union id3_field *, signed long);
int id3_field_settextencoding(union id3_field *, enum id3_field_textencoding);
int id3_field_setstrings(union id3_field *, unsigned int, id3_ucs4_t **);
int id3_field_addstring(union id3_field *, id3_ucs4_t const *);
int id3_field_setlanguage(union id3_field *, char const *);
int id3_field_setlatin1(union id3_field *, id3_latin1_t const *);
int id3_field_setfulllatin1(union id3_field *, id3_latin1_t const *);
int id3_field_setstring(union id3_field *, id3_ucs4_t const *);
int id3_field_setfullstring(union id3_field *, id3_ucs4_t const *);
int id3_field_setframeid(union id3_field *, char const *);
int id3_field_setbinarydata(union id3_field *, id3_byte_t const *, id3_length_t);
signed long id3_field_getint(union id3_field const *);
id3_ucs4_t const *id3_field_getstring(union id3_field const *);
id3_ucs4_t const *id3_field_getfullstring(union id3_field const *);
unsigned int id3_field_getnstrings(union id3_field const *);
id3_ucs4_t const *id3_field_getstrings(union id3_field const *, unsigned int index);
char const *id3_field_getframeid(union id3_field const *);
id3_byte_t const *id3_field_getbinarydata(union id3_field const *, id3_length_t *);
extern char const id3_version[];
extern char const id3_copyright[];
extern char const id3_author[];
extern char const id3_build[];
int id3_frame_validid(char const *);
struct id3_frame *id3_frame_new(char const *);
void id3_frame_delete(struct id3_frame *);
void id3_frame_addref(struct id3_frame *);
void id3_frame_delref(struct id3_frame *);
struct id3_frame *id3_frame_parse(id3_byte_t const **, id3_length_t, unsigned int);
id3_length_t id3_frame_render(struct id3_frame const *, id3_byte_t **, int);
struct id3_frametype {
    char const *id;
    unsigned int nfields;
    enum id3_field_type const *fields;
    int defaultflags;
    char const *description;
};
extern struct id3_frametype const id3_frametype_text;
extern struct id3_frametype const id3_frametype_url;
extern struct id3_frametype const id3_frametype_experimental;
extern struct id3_frametype const id3_frametype_unknown;
extern struct id3_frametype const id3_frametype_obsolete;
struct id3_frametype const *id3_frametype_lookup(register char const *, register unsigned int);
typedef int id3_compat_func_t(struct id3_frame *, char const *, id3_byte_t const *, id3_length_t);
struct id3_compat {
    char const *id;
    char const *equiv;
    id3_compat_func_t *translate;
};
struct id3_compat const *id3_compat_lookup(register char const *, register unsigned int);
int id3_compat_fixup(struct id3_tag *);
void id3_field_init(union id3_field *, enum id3_field_type);
void id3_field_finish(union id3_field *);
enum id3_field_type id3_field_type(union id3_field const *);
int id3_field_parse(union id3_field *, id3_byte_t const **, id3_length_t, enum id3_field_textencoding *);
id3_length_t id3_field_render(union id3_field const *, id3_byte_t **, enum id3_field_textencoding *, int);
id3_length_t id3_render_immediate(id3_byte_t **, char const *, unsigned int);
id3_length_t id3_render_syncsafe(id3_byte_t **, unsigned long, unsigned int);
id3_length_t id3_render_int(id3_byte_t **, signed long, unsigned int);
id3_length_t id3_render_binary(id3_byte_t **, id3_byte_t const *, id3_length_t);
id3_length_t id3_render_latin1(id3_byte_t **, id3_latin1_t const *, int);
id3_length_t id3_render_string(id3_byte_t **, id3_ucs4_t const *, enum id3_field_textencoding, int);
id3_length_t id3_render_padding(id3_byte_t **, id3_byte_t, id3_length_t);
id3_length_t id3_render_paddedstring(id3_byte_t **, id3_ucs4_t const *, id3_length_t);
signed long id3_parse_int(id3_byte_t const **, unsigned int);
unsigned long id3_parse_uint(id3_byte_t const **, unsigned int);
unsigned long id3_parse_syncsafe(id3_byte_t const **, unsigned int);
void id3_parse_immediate(id3_byte_t const **, unsigned int, char *);
id3_latin1_t *id3_parse_latin1(id3_byte_t const **, id3_length_t, int);
id3_ucs4_t *id3_parse_string(id3_byte_t const **, id3_length_t, enum id3_field_textencoding, int);
id3_byte_t *id3_parse_binary(id3_byte_t const **, id3_length_t);
id3_length_t id3_util_unsynchronise(id3_byte_t *, id3_length_t);
id3_length_t id3_util_deunsynchronise(id3_byte_t *, id3_length_t);
id3_byte_t *id3_util_compress(id3_byte_t const *, id3_length_t, id3_length_t *);
id3_byte_t *id3_util_decompress(id3_byte_t const *, id3_length_t, id3_length_t);
static int valid_idchar(char c)
{
    return (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

int id3_frame_validid(char const *id)
{
    return valid_idchar(id[0]) && valid_idchar(id[1]) && valid_idchar(id[2]) && valid_idchar(id[3]);
}

struct id3_frame *id3_frame_new(char const *id)
{
    struct id3_frametype const *frametype;
    struct id3_frame *frame;
    unsigned int i;
    if (!id3_frame_validid(id))
	return 0;
    frametype = id3_frametype_lookup(id, 4);
    if (frametype == 0) {
	switch (id[0]) {
	case 'T':
	    frametype = &id3_frametype_text;
	    break;
	case 'W':
	    frametype = &id3_frametype_url;
	    break;
	case 'X':
	case 'Y':
	case 'Z':
	    frametype = &id3_frametype_experimental;
	    break;
	default:
	    frametype = &id3_frametype_unknown;
	    if (id3_compat_lookup(id, 4))
		frametype = &id3_frametype_obsolete;
	    break;
	}
    }
    frame = malloc(sizeof(*frame) + frametype->nfields * sizeof(*frame->fields));
    if (frame) {
	frame->id[0] = id[0];
	frame->id[1] = id[1];
	frame->id[2] = id[2];
	frame->id[3] = id[3];
	frame->id[4] = 0;
	frame->description = frametype->description;
	frame->refcount = 0;
	frame->flags = frametype->defaultflags;
	frame->group_id = 0;
	frame->encryption_method = 0;
	frame->encoded = 0;
	frame->encoded_length = 0;
	frame->decoded_length = 0;
	frame->nfields = frametype->nfields;
	frame->fields = (union id3_field *) &frame[1];
	for (i = 0; i < frame->nfields; ++i)
	    id3_field_init(&frame->fields[i], frametype->fields[i]);
    }
    return frame;
}
// complexity is O(n) inferred by loopus
void id3_frame_delete(struct id3_frame *frame)
{
    if (frame->refcount == 0) {
	unsigned int i;
	for (i = 0; i < frame->nfields; ++i)
	    id3_field_finish(&frame->fields[i]);
	if (frame->encoded)
	    free(frame->encoded);
	free(frame);
    }
}

void id3_frame_addref(struct id3_frame *frame)
{
    ++frame->refcount;
} void id3_frame_delref(struct id3_frame *frame)
{
    ((frame->refcount > 0) ? (void) (0) : __assert_fail("frame->refcount > 0", "frame.c", 149, __PRETTY_FUNCTION__));
    --frame->refcount;
} static struct id3_frame *obsolete(char const *id, id3_byte_t const *data, id3_length_t length)
{
    struct id3_frame *frame;
    frame = id3_frame_new("ZOBS");
    if (frame) {
	if (id3_field_setframeid(&frame->fields[0], id) == -1 || id3_field_setbinarydata(&frame->fields[1], data, length) == -1)
	    goto fail;
    }
    if (0) {
      fail:if (frame) {
	    id3_frame_delete(frame);
	    frame = 0;
	}
    }
    return frame;
}

static struct id3_frame *unparseable(char const *id, id3_byte_t const **ptr, id3_length_t length, int flags, int group_id, int encryption_method, id3_length_t decoded_length)
{
    struct id3_frame *frame = 0;
    id3_byte_t *mem;
    mem = malloc(length ? length : 1);
    if (mem == 0)
	goto fail;
    frame = id3_frame_new(id);
    if (frame == 0)
	free(mem);
    else {
	memcpy(mem, *ptr, length);
	frame->flags = flags;
	frame->group_id = group_id;
	frame->encryption_method = encryption_method;
	frame->encoded = mem;
	frame->encoded_length = length;
	frame->decoded_length = decoded_length;
    }
    if (0) {
      fail:;
    }
    *ptr += length;
    return frame;
}
//complexity is O(n) inferreed by loopus
static int parse_data(struct id3_frame *frame, id3_byte_t const *data, id3_length_t length)
{
    enum id3_field_textencoding encoding;
    id3_byte_t const *end;
    unsigned int i;
    encoding = ID3_FIELD_TEXTENCODING_ISO_8859_1;
    end = data + length;
    for (i = 0; i < frame->nfields; ++i) {
	if (id3_field_parse(&frame->fields[i], &data, end - data, &encoding) == -1)
	    return -1;
    }
    return 0;
}

struct id3_frame *id3_frame_parse(id3_byte_t const **ptr, id3_length_t length, unsigned int version)
{
    struct id3_frame *frame = 0;
    id3_byte_t const *id, *end, *data;
    id3_length_t size, decoded_length = 0;
    int flags = 0, group_id = 0, encryption_method = 0;
    struct id3_compat const *compat = 0;
    id3_byte_t *mem = 0;
    char xid[4];
    id = *ptr;
    end = *ptr + length;
    if ((((version) >> 8) & 0xff) < 4) {
	switch ((((version) >> 8) & 0xff)) {
	case 2:
	    if (length < 6)
		goto fail;
	    compat = id3_compat_lookup(id, 3);
	    *ptr += 3;
	    size = id3_parse_uint(ptr, 3);
	    if (size > end - *ptr)
		goto fail;
	    end = *ptr + size;
	    break;
	case 3:
	    if (length < 10)
		goto fail;
	    compat = id3_compat_lookup(id, 4);
	    *ptr += 4;
	    size = id3_parse_uint(ptr, 4);
	    flags = id3_parse_uint(ptr, 2);
	    if (size > end - *ptr)
		goto fail;
	    end = *ptr + size;
	    if (flags & (ID3_FRAME_FLAG_FORMATFLAGS & ~0x00e0)) {
		frame = unparseable(id, ptr, end - *ptr, 0, 0, 0, 0);
		goto done;
	    }
	    flags = ((flags >> 1) & ID3_FRAME_FLAG_STATUSFLAGS) | ((flags >> 4) & (ID3_FRAME_FLAG_COMPRESSION | ID3_FRAME_FLAG_ENCRYPTION)) | ((flags << 1) & ID3_FRAME_FLAG_GROUPINGIDENTITY);
	    if (flags & ID3_FRAME_FLAG_COMPRESSION) {
		if (end - *ptr < 4)
		    goto fail;
		decoded_length = id3_parse_uint(ptr, 4);
	    }
	    if (flags & ID3_FRAME_FLAG_ENCRYPTION) {
		if (end - *ptr < 1)
		    goto fail;
		encryption_method = id3_parse_uint(ptr, 1);
	    }
	    if (flags & ID3_FRAME_FLAG_GROUPINGIDENTITY) {
		if (end - *ptr < 1)
		    goto fail;
		group_id = id3_parse_uint(ptr, 1);
	    }
	    break;
	default:
	    goto fail;
	}
    } else {
	if (length < 10)
	    goto fail;
	*ptr += 4;
	size = id3_parse_syncsafe(ptr, 4);
	flags = id3_parse_uint(ptr, 2);
	if (size > end - *ptr)
	    goto fail;
	end = *ptr + size;
	if (flags & (ID3_FRAME_FLAG_FORMATFLAGS & ~ID3_FRAME_FLAG_KNOWNFLAGS)) {
	    frame = unparseable(id, ptr, end - *ptr, flags, 0, 0, 0);
	    goto done;
	}
	if (flags & ID3_FRAME_FLAG_GROUPINGIDENTITY) {
	    if (end - *ptr < 1)
		goto fail;
	    group_id = id3_parse_uint(ptr, 1);
	}
	if ((flags & ID3_FRAME_FLAG_COMPRESSION) && !(flags & ID3_FRAME_FLAG_DATALENGTHINDICATOR))
	    goto fail;
	if (flags & ID3_FRAME_FLAG_ENCRYPTION) {
	    if (end - *ptr < 1)
		goto fail;
	    encryption_method = id3_parse_uint(ptr, 1);
	}
	if (flags & ID3_FRAME_FLAG_DATALENGTHINDICATOR) {
	    if (end - *ptr < 4)
		goto fail;
	    decoded_length = id3_parse_syncsafe(ptr, 4);
	}
    }
    if (compat && compat->equiv && !compat->translate)
	id = compat->equiv;
    data = *ptr;
    *ptr = end;
    if ((flags & ID3_FRAME_FLAG_UNSYNCHRONISATION) && end - data > 0) {
	mem = malloc(end - data);
	if (mem == 0)
	    goto fail;
	memcpy(mem, data, end - data);
	end = mem + id3_util_deunsynchronise(mem, end - data);
	data = mem;
    }
    if (flags & ID3_FRAME_FLAG_ENCRYPTION) {
	frame = unparseable(id, &data, end - data, flags, group_id, encryption_method, decoded_length);
	goto done;
    }
    if (flags & ID3_FRAME_FLAG_COMPRESSION) {
	id3_byte_t *decomp;
	decomp = id3_util_decompress(data, end - data, decoded_length);
	if (decomp == 0)
	    goto fail;
	if (mem)
	    free(mem);
	data = mem = decomp;
	end = data + decoded_length;
    }
    if ((((version) >> 8) & 0xff) == 2) {
	xid[0] = 'Y';
	xid[1] = id[0];
	xid[2] = id[1];
	xid[3] = id[2];
	id = xid;
	flags |= ID3_FRAME_FLAG_TAGALTERPRESERVATION | ID3_FRAME_FLAG_FILEALTERPRESERVATION;
    }
    if (compat) {
	if (compat->equiv)
	    id = compat->equiv;
	else {
	    frame = obsolete(id, data, end - data);
	    goto done;
	}
    }
    frame = id3_frame_new(id);
    if (frame) {
	frame->flags = flags;
	frame->group_id = group_id;
	if (compat && compat->translate) {
	    if (compat->translate(frame, compat->id, data, end - data) == -1)
		goto fail;
	} else {
	    if (parse_data(frame, data, end - data) == -1)
		goto fail;
	}
    }
    if (0) {
      fail:if (frame) {
	    id3_frame_delete(frame);
	    frame = 0;
	}
    }
  done:if (mem)
	free(mem);
    return frame;
}

static id3_length_t render_data(id3_byte_t ** ptr, union id3_field *fields, unsigned int length)
{
    id3_length_t size = 0;
    enum id3_field_textencoding encoding;
    unsigned int i;
    encoding = ID3_FIELD_TEXTENCODING_ISO_8859_1;
    for (i = 0; i < length; ++i)
	size += id3_field_render(&fields[i], ptr, &encoding, i < length - 1);
    return size;
}

id3_length_t id3_frame_render(struct id3_frame const *frame, id3_byte_t ** ptr, int options)
{
    id3_length_t size = 0, decoded_length, datalen;
    id3_byte_t *size_ptr = 0, *flags_ptr = 0, *data = 0;
    int flags;
    if ((frame->flags & ID3_FRAME_FLAG_TAGALTERPRESERVATION) || ((options & ID3_TAG_OPTION_FILEALTERED) && (frame->flags & ID3_FRAME_FLAG_FILEALTERPRESERVATION)))
	return 0;
    decoded_length = render_data(0, frame->fields, frame->nfields);
    if (decoded_length == 0 && frame->encoded == 0)
	return 0;
    size += id3_render_immediate(ptr, frame->id, 4);
    if (ptr)
	size_ptr = *ptr;
    size += id3_render_syncsafe(ptr, 0, 4);
    if (ptr)
	flags_ptr = *ptr;
    flags = frame->flags;
    size += id3_render_int(ptr, flags, 2);
    if (flags & (ID3_FRAME_FLAG_FORMATFLAGS & ~ID3_FRAME_FLAG_KNOWNFLAGS)) {
	size += id3_render_binary(ptr, frame->encoded, frame->encoded_length);
	if (size_ptr)
	    id3_render_syncsafe(&size_ptr, size - 10, 4);
	return size;
    }
    flags &= ID3_FRAME_FLAG_KNOWNFLAGS;
    flags &= ~ID3_FRAME_FLAG_UNSYNCHRONISATION;
    if (options & ID3_TAG_OPTION_UNSYNCHRONISATION)
	flags |= ID3_FRAME_FLAG_UNSYNCHRONISATION;
    if (!(flags & ID3_FRAME_FLAG_ENCRYPTION)) {
	flags &= ~ID3_FRAME_FLAG_COMPRESSION;
	if (options & ID3_TAG_OPTION_COMPRESSION)
	    flags |= ID3_FRAME_FLAG_COMPRESSION | ID3_FRAME_FLAG_DATALENGTHINDICATOR;
    }
    if (flags & ID3_FRAME_FLAG_GROUPINGIDENTITY)
	size += id3_render_int(ptr, frame->group_id, 1);
    if (flags & ID3_FRAME_FLAG_ENCRYPTION)
	size += id3_render_int(ptr, frame->encryption_method, 1);
    if (flags & ID3_FRAME_FLAG_DATALENGTHINDICATOR) {
	if (flags & ID3_FRAME_FLAG_ENCRYPTION)
	    decoded_length = frame->decoded_length;
	size += id3_render_syncsafe(ptr, decoded_length, 4);
    }
    if (ptr)
	data = *ptr;
    if (flags & ID3_FRAME_FLAG_ENCRYPTION)
	datalen = id3_render_binary(ptr, frame->encoded, frame->encoded_length);
    else {
	if (ptr == 0)
	    datalen = decoded_length;
	else {
	    datalen = render_data(ptr, frame->fields, frame->nfields);
	    if (flags & ID3_FRAME_FLAG_COMPRESSION) {
		id3_byte_t *comp;
		id3_length_t complen;
		comp = id3_util_compress(data, datalen, &complen);
		if (comp == 0)
		    flags &= ~ID3_FRAME_FLAG_COMPRESSION;
		else {
		    *ptr = data;
		    datalen = id3_render_binary(ptr, comp, complen);
		    free(comp);
		}
	    }
	}
    }
    if (flags & ID3_FRAME_FLAG_UNSYNCHRONISATION) {
	if (data == 0)
	    datalen *= 2;
	else {
	    id3_length_t newlen;
	    newlen = id3_util_unsynchronise(data, datalen);
	    if (newlen == datalen)
		flags &= ~ID3_FRAME_FLAG_UNSYNCHRONISATION;
	    else {
		*ptr += newlen - datalen;
		datalen = newlen;
	    }
	}
    }
    size += datalen;
    if (size_ptr)
	id3_render_syncsafe(&size_ptr, size - 10, 4);
    if (flags_ptr)
	id3_render_int(&flags_ptr, flags, 2);
    return size;
}
