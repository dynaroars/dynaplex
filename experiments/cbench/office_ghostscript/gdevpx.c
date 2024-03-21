typedef unsigned char byte;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
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
typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
typedef unsigned long int ulong_;
typedef unsigned short int ushort_;
typedef unsigned int uint_;
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
typedef int bool;
typedef const char *ptr_ord_t;
typedef double floatp;
typedef const char *client_name_t;
typedef ushort bits16;
typedef uint bits32;
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
int unlink(const char *);
extern FILE *gs_stdin, *gs_stdout, *gs_stderr;
typedef ulong gs_id;
typedef struct gs_string_s {
    byte *data;
    uint size;
} gs_string;
typedef struct gs_const_string_s {
    const byte *data;
    uint size;
} gs_const_string;
typedef struct gs_point_s {
    double x, y;
} gs_point;
typedef struct gs_int_point_s {
    int x, y;
} gs_int_point;
typedef struct gs_log2_scale_point_s {
    int x, y;
} gs_log2_scale_point;
typedef struct gs_rect_s {
    gs_point p, q;
} gs_rect;
typedef struct gs_int_rect_s {
    gs_int_point p, q;
} gs_int_rect;
typedef struct gs_memory_struct_type_s gs_memory_struct_type_t;
typedef const gs_memory_struct_type_t *gs_memory_type_ptr_t;
typedef client_name_t struct_name_t;
uint gs_struct_type_size(gs_memory_type_ptr_t);
struct_name_t gs_struct_type_name(gs_memory_type_ptr_t);
typedef struct gc_state_s gc_state_t;
typedef struct gs_ptr_procs_s {
    void (*unmark) (void *, gc_state_t *);
    bool(*mark) (void *, gc_state_t *);
    void *(*reloc) (const void *, gc_state_t *);
} gs_ptr_procs_t;
typedef const gs_ptr_procs_t *gs_ptr_type_t;
extern const gs_ptr_procs_t ptr_struct_procs;
extern const gs_ptr_procs_t ptr_string_procs;
extern const gs_ptr_procs_t ptr_const_string_procs;
typedef struct gs_gc_root_s gs_gc_root_t;
struct gs_gc_root_s {
    gs_gc_root_t *next;
    gs_ptr_type_t ptype;
    void **p;
};
typedef struct gs_memory_status_s {
    ulong allocated;
    ulong used;
} gs_memory_status_t;
struct gs_memory_s;
typedef struct gs_memory_s gs_memory_t;
typedef struct gs_memory_procs_s {
    byte *(*alloc_bytes) (gs_memory_t * mem, uint nbytes, client_name_t cname);
    byte *(*alloc_bytes_immovable) (gs_memory_t * mem, uint nbytes, client_name_t cname);
    void *(*alloc_struct) (gs_memory_t * mem, gs_memory_type_ptr_t pstype, client_name_t cname);
    void *(*alloc_struct_immovable) (gs_memory_t * mem, gs_memory_type_ptr_t pstype, client_name_t cname);
    byte *(*alloc_byte_array) (gs_memory_t * mem, uint num_elements, uint elt_size, client_name_t cname);
    byte *(*alloc_byte_array_immovable) (gs_memory_t * mem, uint num_elements, uint elt_size, client_name_t cname);
    void *(*alloc_struct_array) (gs_memory_t * mem, uint num_elements, gs_memory_type_ptr_t pstype, client_name_t cname);
    void *(*alloc_struct_array_immovable) (gs_memory_t * mem, uint num_elements, gs_memory_type_ptr_t pstype, client_name_t cname);
    void *(*resize_object) (gs_memory_t * mem, void *obj, uint new_num_elements, client_name_t cname);
    uint(*object_size) (gs_memory_t * mem, const void *obj);
    gs_memory_type_ptr_t(*object_type) (gs_memory_t * mem, const void *obj);
    void (*free_object) (gs_memory_t * mem, void *data, client_name_t cname);
    byte *(*alloc_string) (gs_memory_t * mem, uint nbytes, client_name_t cname);
    byte *(*alloc_string_immovable) (gs_memory_t * mem, uint nbytes, client_name_t cname);
    byte *(*resize_string) (gs_memory_t * mem, byte * data, uint old_num, uint new_num, client_name_t cname);
    void (*free_string) (gs_memory_t * mem, byte * data, uint nbytes, client_name_t cname);
    void (*register_root) (gs_memory_t * mem, gs_gc_root_t * root, gs_ptr_type_t ptype, void **pp, client_name_t cname);
    void (*unregister_root) (gs_memory_t * mem, gs_gc_root_t * root, client_name_t cname);
    void (*status) (gs_memory_t * mem, gs_memory_status_t * status);
    void (*enable_free) (gs_memory_t * mem, bool enable);
} gs_memory_procs_t;
void gs_ignore_free_object(gs_memory_t * mem, void *data, client_name_t cname);
void gs_ignore_free_string(gs_memory_t * mem, byte * data, uint nbytes, client_name_t cname);
struct gs_memory_s {
    gs_memory_procs_t procs;
};
extern gs_memory_t gs_memory_default;
extern char gs_debug[128];
extern FILE *gs_debug_out;
extern void eprintf_program_name(FILE *, const char *);
extern void lprintf_file_and_line(FILE *, const char *, int);
void debug_dump_bytes(const byte * from, const byte * to, const char *msg);
void debug_dump_bitmap(const byte * from, uint raster, uint height, const char *msg);
void debug_print_string(const byte * str, uint len);
typedef struct gs_imager_state_s gs_imager_state;
typedef struct gs_state_s gs_state;
typedef struct obj_header_s obj_header_t;
typedef struct struct_shared_procs_s struct_shared_procs_t;
struct gs_memory_struct_type_s {
    uint ssize;
    struct_name_t sname;
    const struct_shared_procs_t *shared;
    void (*clear_marks) (void *pre, uint size);
    gs_ptr_type_t(*enum_ptrs) (void *ptr, uint size, uint index, const void **pep);
    void (*reloc_ptrs) (void *ptr, uint size, gc_state_t * gcst);
    void (*finalize) (void *ptr);
};
gs_ptr_type_t gs_no_struct_enum_ptrs(void *ptr, uint size, uint index, const void **pep);
void gs_no_struct_reloc_ptrs(void *ptr, uint size, gc_state_t * gcst);
void *gs_reloc_struct_ptr(const void *, gc_state_t *);
void gs_reloc_string(gs_string *, gc_state_t *);
void gs_reloc_const_string(gs_const_string *, gc_state_t *);
extern const gs_memory_struct_type_t st_free;
extern const gs_memory_struct_type_t st_bytes;
typedef struct gs_pattern_instance_s gs_pattern_instance;
typedef struct gs_paint_color_s {
    float values[4];
} gs_paint_color;
typedef struct gs_client_color_s {
    gs_paint_color paint;
    gs_pattern_instance *pattern;
} gs_client_color;
extern const gs_memory_struct_type_t st_client_color;
int imod(int m, int n);
int igcd(int x, int y);
typedef gs_id gx_bitmap_id;
typedef struct gx_bitmap_s {
    byte *data;
    int raster;
    gs_int_point size;
    gx_bitmap_id id;
} gx_bitmap;
typedef struct gx_tile_bitmap_s {
    byte *data;
    int raster;
    gs_int_point size;
    gx_bitmap_id id;
    ushort rep_width, rep_height;
} gx_tile_bitmap;
typedef struct gx_strip_bitmap_s {
    byte *data;
    int raster;
    gs_int_point size;
    gx_bitmap_id id;
    ushort rep_width, rep_height;
    ushort rep_shift;
    ushort shift;
} gx_strip_bitmap;
typedef struct gx_ht_tile_s gx_ht_tile;
struct gx_ht_tile_s {
    gx_strip_bitmap tiles;
    int level;
    uint index;
};
typedef unsigned long gx_color_index;
typedef struct gx_device_color_s gx_device_color;
typedef struct gx_device_halftone_s gx_device_halftone;
typedef struct gx_color_tile_s gx_color_tile;
typedef struct gx_device_color_procs_s gx_device_color_procs;
typedef const gx_device_color_procs *gx_device_color_type;
struct gx_device_color_s {
    gx_device_color_type type;
    union _c {
	gx_color_index pure;
	struct _bin {
	    const gx_device_halftone *b_ht;
	    gx_color_index color[2];
	    uint b_level;
	    gx_ht_tile *b_tile;
	} binary;
	struct _col {
	    const gx_device_halftone *c_ht;
	    byte c_base[4];
	    uint c_level[4];
	    ushort alpha;
	} colored;
	struct _pat {
	    gx_color_tile *p_tile;
	} pattern;
    } colors;
    gs_int_point phase;
    struct _mask {
	gs_client_color ccolor;
	gx_bitmap_id id;
	gx_color_tile *m_tile;
    } mask;
};
extern const gx_device_color_procs *gx_dc_type_none;
extern const gx_device_color_procs *gx_dc_type_null;
extern const gx_device_color_procs *gx_dc_type_pure;
extern const gx_device_color_procs *gx_dc_type_ht_binary;
extern const gx_device_color_procs *gx_dc_type_ht_colored;
typedef enum { gs_color_space_index_DeviceGray = 0, gs_color_space_index_DeviceRGB, gs_color_space_index_DeviceCMYK, gs_color_space_index_CIEDEFG, gs_color_space_index_CIEDEF, gs_color_space_index_CIEABC, gs_color_space_index_CIEA, gs_color_space_index_Separation, gs_color_space_index_Indexed, gs_color_space_index_Pattern } gs_color_space_index;
typedef struct gs_color_space_s gs_color_space;
extern const gs_color_space *gs_color_space_DeviceGray(void);
extern const gs_color_space *gs_color_space_DeviceRGB(void);
extern const gs_color_space *gs_color_space_DeviceCMYK(void);
typedef struct gs_cie_defg_s gs_cie_defg;
typedef struct gs_cie_def_s gs_cie_def;
typedef struct gs_cie_abc_s gs_cie_abc;
typedef struct gs_cie_a_s gs_cie_a;
typedef struct gs_separation_params_s gs_separation_params;
typedef struct gs_indexed_params_s gs_indexed_params;
typedef struct gs_color_space_type_s gs_color_space_type;
typedef struct gs_base_color_space_s {
    const gs_color_space_type *type;
    union {
	gs_cie_defg *defg;
	gs_cie_def *def;
	gs_cie_abc *abc;
	gs_cie_a *a;
    } params;
} gs_base_color_space;
typedef ulong gs_separation_name;
typedef struct gs_indexed_map_s gs_indexed_map;
struct gs_separation_params_s {
    gs_separation_name sname;
    gs_base_color_space alt_space;
    gs_indexed_map *map;
};
struct gs_indexed_params_s {
    gs_base_color_space base_space;
    int hival;
    union {
	gs_const_string table;
	gs_indexed_map *map;
    } lookup;
    bool use_proc;
};
typedef struct gs_paint_color_space_s {
    const gs_color_space_type *type;
    union {
	gs_cie_defg *defg;
	gs_cie_def *def;
	gs_cie_abc *abc;
	gs_cie_a *a;
	gs_separation_params separation;
	gs_indexed_params indexed;
    } params;
} gs_paint_color_space;
typedef struct gs_pattern_params_s {
    bool has_base_space;
    gs_paint_color_space base_space;
} gs_pattern_params;
struct gs_color_space_s {
    const gs_color_space_type *type;
    union {
	gs_cie_defg *defg;
	gs_cie_def *def;
	gs_cie_abc *abc;
	gs_cie_a *a;
	gs_separation_params separation;
	gs_indexed_params indexed;
	gs_pattern_params pattern;
    } params;
};
gs_color_space_index gs_color_space_get_index(const gs_color_space *);
int gs_color_space_num_components(const gs_color_space *);
const gs_color_space *gs_color_space_indexed_base(const gs_color_space *);
typedef enum { gs_color_select_all = -1, gs_color_select_texture = 0, gs_color_select_source = 1 } gs_color_select_t;
typedef short frac;
typedef short signed_frac;
typedef struct gx_device_s gx_device;
struct gs_color_space_type_s {
    gs_color_space_index index;
    int num_components;
    bool can_be_base_space;
    void (*init_color) (gs_client_color *, const gs_color_space *);
    const gs_color_space *(*concrete_space) (const gs_color_space *, const gs_imager_state *);
    int (*concretize_color) (const gs_client_color *, const gs_color_space *, frac *, const gs_imager_state *);
    int (*remap_concrete_color) (const frac *, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
    int (*remap_color) (const gs_client_color *, const gs_color_space *, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
    int (*install_cspace) (gs_color_space *, gs_state *);
    void (*adjust_cspace_count) (const gs_color_space *, gs_memory_t *, int);
    void (*adjust_color_count) (const gs_client_color *, const gs_color_space *, gs_memory_t *, int);
    gs_ptr_type_t(*enum_ptrs) (void *ptr, uint size, uint index, const void **pep);
    void (*reloc_ptrs) (void *ptr, uint size, gc_state_t * gcst);
};
void gx_init_paint_1(gs_client_color *, const gs_color_space *);
void gx_init_paint_3(gs_client_color *, const gs_color_space *);
void gx_init_paint_4(gs_client_color *, const gs_color_space *);
const gs_color_space *gx_no_concrete_space(const gs_color_space *, const gs_imager_state *);
const gs_color_space *gx_same_concrete_space(const gs_color_space *, const gs_imager_state *);
int gx_no_concretize_color(const gs_client_color *, const gs_color_space *, frac *, const gs_imager_state *);
int gx_default_remap_color(const gs_client_color *, const gs_color_space *, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
int gx_no_install_cspace(gs_color_space *, gs_state *);
void gx_no_adjust_cspace_count(const gs_color_space *, gs_memory_t *, int);
void gx_no_adjust_color_count(const gs_client_color *, const gs_color_space *, gs_memory_t *, int);
extern const gs_color_space_type gs_color_space_type_DeviceGray, gs_color_space_type_DeviceRGB, gs_color_space_type_DeviceCMYK;
extern const gs_memory_struct_type_t st_color_space;
struct gs_matrix_s {
    float xx, xy, yx, yy, tx, ty;
};
typedef struct gs_matrix_s gs_matrix;
void gs_make_identity(gs_matrix *);
int gs_make_translation(floatp, floatp, gs_matrix *), gs_make_scaling(floatp, floatp, gs_matrix *), gs_make_rotation(floatp, gs_matrix *);
int gs_matrix_multiply(const gs_matrix *, const gs_matrix *, gs_matrix *), gs_matrix_invert(const gs_matrix *, gs_matrix *), gs_matrix_translate(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_scale(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_rotate(const gs_matrix *, floatp, gs_matrix *);
int gs_point_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_point_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_points_bbox(const gs_point[4], gs_rect *), gs_bbox_transform_only(const gs_rect *, const gs_matrix *, gs_point[4]), gs_bbox_transform(const gs_rect *, const gs_matrix *, gs_rect *), gs_bbox_transform_inverse(const gs_rect *, const gs_matrix *, gs_rect *);
typedef enum { gs_image_format_chunky = 0, gs_image_format_component_planar = 1, gs_image_format_bit_planar = 2 } gs_image_format_t;
typedef struct gs_image_s {
    int Width;
    int Height;
    gs_matrix ImageMatrix;
    int BitsPerComponent;
    const gs_color_space *ColorSpace;
    float Decode[8];
    bool Interpolate;
    bool ImageMask;
    bool adjust;
    bool CombineWithColor;
} gs_image_t;
void gs_image_t_init_gray(gs_image_t * pim), gs_image_t_init_color(gs_image_t * pim), gs_image_t_init_mask(gs_image_t * pim, bool write_1s);
typedef enum { rop2_0 = 0, rop2_S = 0xc, rop2_D = 0xa, rop2_1 = 0xf, rop2_default = rop2_S } gs_rop2_t;
typedef enum { rop3_0 = 0, rop3_T = 0xf0, rop3_S = 0xcc, rop3_D = 0xaa, rop3_1 = 0xff, rop3_default = rop3_T | rop3_S } gs_rop3_t;
typedef uint gs_logical_operation_t;
typedef unsigned rop_operand;
typedef rop_operand(*rop_proc) (rop_operand D, rop_operand S, rop_operand T);
typedef enum { rop_usage_none = 0, rop_usage_D = 1, rop_usage_S = 2, rop_usage_DS = 3, rop_usage_T = 4, rop_usage_DT = 5, rop_usage_ST = 6, rop_usage_DST = 7 } rop_usage_t;
typedef ulong gx_xglyph;
struct gx_xfont_procs_s;
typedef struct gx_xfont_procs_s gx_xfont_procs;
struct gx_xfont_s;
typedef struct gx_xfont_s gx_xfont;
typedef unsigned short gx_color_value;
typedef long fixed;
typedef ulong ufixed;
typedef struct gs_fixed_point_s {
    fixed x, y;
} gs_fixed_point;
typedef struct gs_fixed_rect_s {
    gs_fixed_point p, q;
} gs_fixed_rect;
typedef struct gx_path_s gx_path;
typedef struct gx_clip_path_s gx_clip_path;
typedef struct gx_fill_params_s gx_fill_params;
typedef struct gx_stroke_params_s gx_stroke_params;
typedef gx_device_color gx_drawing_color;
typedef enum { go_text, go_graphics } graphics_object_type;
typedef struct gs_fixed_edge_s {
    gs_fixed_point start;
    gs_fixed_point end;
} gs_fixed_edge;
typedef struct gx_device_color_info_s {
    int num_components;
    int depth;
    gx_color_value max_gray;
    gx_color_value max_color;
    gx_color_value dither_grays;
    gx_color_value dither_colors;
} gx_device_color_info;
typedef struct gx_device_procs_s gx_device_procs;
typedef struct gx_page_device_procs_s {
    int (*install) (gx_device * dev, gs_state * pgs);
    int (*begin_page) (gx_device * dev, gs_state * pgs);
    int (*end_page) (gx_device * dev, int reason, gs_state * pgs);
} gx_page_device_procs;
int gx_default_install(gx_device * dev, gs_state * pgs);
int gx_default_begin_page(gx_device * dev, gs_state * pgs);
int gx_default_end_page(gx_device * dev, int reason, gs_state * pgs);
typedef struct gs_param_list_s gs_param_list;
struct gx_device_procs_s {
    int (*open_device) (gx_device * dev);
    void (*get_initial_matrix) (gx_device * dev, gs_matrix * pmat);
    int (*sync_output) (gx_device * dev);
    int (*output_page) (gx_device * dev, int num_copies, int flush);
    int (*close_device) (gx_device * dev);
    gx_color_index(*map_rgb_color) (gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
    int (*map_color_rgb) (gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
    int (*fill_rectangle) (gx_device * dev, int x, int y, int width, int height, gx_color_index color);
    int (*tile_rectangle) (gx_device * dev, const gx_tile_bitmap * tile, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
    int (*copy_mono) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1);
    int (*copy_color) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height);
    int (*draw_line) (gx_device * dev, int x0, int y0, int x1, int y1, gx_color_index color);
    int (*get_bits) (gx_device * dev, int y, byte * data, byte ** actual_data);
    int (*get_params) (gx_device * dev, gs_param_list * plist);
    int (*put_params) (gx_device * dev, gs_param_list * plist);
    gx_color_index(*map_cmyk_color) (gx_device * dev, gx_color_value cyan, gx_color_value magenta, gx_color_value yellow, gx_color_value black);
    gx_xfont_procs *(*get_xfont_procs) (gx_device * dev);
    gx_device *(*get_xfont_device) (gx_device * dev);
    gx_color_index(*map_rgb_alpha_color) (gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue, gx_color_value alpha);
    gx_device *(*get_page_device) (gx_device * dev);
    int (*get_alpha_bits) (gx_device * dev, graphics_object_type type);
    int (*copy_alpha) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
    int (*get_band) (gx_device * dev, int y, int *band_start);
    int (*copy_rop) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
    int (*fill_path) (gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_fill_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
    int (*stroke_path) (gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_stroke_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
    int (*fill_mask) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath);
    int (*fill_trapezoid) (gx_device * dev, const gs_fixed_edge * left, const gs_fixed_edge * right, fixed ybot, fixed ytop, bool swap_axes, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    int (*fill_parallelogram) (gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    int (*fill_triangle) (gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    int (*draw_thin_line) (gx_device * dev, fixed fx0, fixed fy0, fixed fx1, fixed fy1, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
    int (*begin_image) (gx_device * dev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * memory, void **pinfo);
    int (*image_data) (gx_device * dev, void *info, const byte ** planes, int data_x, uint raster, int height);
    int (*end_image) (gx_device * dev, void *info, bool draw_last);
    int (*strip_tile_rectangle) (gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
    int (*strip_copy_rop) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
    void (*get_clipping_box) (gx_device * dev, gs_fixed_rect * pbox);
};
typedef struct gx_device_memory_s gx_device_memory;
int gx_default_make_buffer_device(gx_device_memory *, gx_device *, gs_memory_t *, bool);
int gx_copy_mono_unaligned(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1);
int gx_copy_color_unaligned(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height);
int gx_copy_alpha_unaligned(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
struct gx_device_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
};
extern const gs_memory_struct_type_t st_device;
void gx_device_finalize(void *ptr);
gx_device *gx_device_enum_ptr(gx_device *);
gx_device *gx_device_reloc_ptr(gx_device *, gc_state_t *);
typedef gx_color_index(*dev_proc_map_rgb_color_t) (gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
typedef int (*dev_proc_map_color_rgb_t) (gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
typedef struct gx_device_forward_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
    gx_device *target;
} gx_device_forward;
extern const gs_memory_struct_type_t st_device_forward;
typedef struct gx_device_null_s gx_device_null;
struct gx_device_null_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
    gx_device *target;
};
extern gx_device_null gs_null_device;
extern const gs_memory_struct_type_t st_device_null;
void gs_make_null_device(gx_device_null *, gs_memory_t *);
uint gx_device_raster(const gx_device * dev, bool pad_to_word);
int gx_device_adjust_resolution(gx_device * dev, int actual_width, int actual_height, int fit);
void gx_device_set_margins(gx_device * dev, const float *margins, bool move_origin);
void gx_device_set_width_height(gx_device * dev, int width, int height);
void gx_device_set_resolution(gx_device * dev, floatp x_dpi, floatp y_dpi);
void gx_device_set_media_size(gx_device * dev, floatp media_width, floatp media_height);
int gx_default_open_device(gx_device * dev);
void gx_default_get_initial_matrix(gx_device * dev, gs_matrix * pmat);
void gx_upright_get_initial_matrix(gx_device * dev, gs_matrix * pmat);
int gx_default_sync_output(gx_device * dev);
int gx_default_output_page(gx_device * dev, int num_copies, int flush);
int gx_default_close_device(gx_device * dev);
gx_color_index gx_default_w_b_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_default_w_b_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
int gx_default_tile_rectangle(gx_device * dev, const gx_tile_bitmap * tile, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
int gx_default_copy_mono(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1);
int gx_default_copy_color(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height);
int gx_default_draw_line(gx_device * dev, int x0, int y0, int x1, int y1, gx_color_index color);
int gx_default_get_bits(gx_device * dev, int y, byte * data, byte ** actual_data);
int gx_default_get_params(gx_device * dev, gs_param_list * plist);
int gx_default_put_params(gx_device * dev, gs_param_list * plist);
gx_color_index gx_default_map_cmyk_color(gx_device * dev, gx_color_value cyan, gx_color_value magenta, gx_color_value yellow, gx_color_value black);
gx_xfont_procs *gx_default_get_xfont_procs(gx_device * dev);
gx_device *gx_default_get_xfont_device(gx_device * dev);
gx_color_index gx_default_map_rgb_alpha_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue, gx_color_value alpha);
gx_device *gx_default_get_page_device(gx_device * dev);
gx_device *gx_page_device_get_page_device(gx_device * dev);
int gx_default_get_alpha_bits(gx_device * dev, graphics_object_type type);
int gx_no_copy_alpha(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
int gx_default_copy_alpha(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth);
int gx_default_get_band(gx_device * dev, int y, int *band_start);
int gx_no_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
extern int (*gx_default_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_default_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_default_fill_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_fill_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gx_default_stroke_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_stroke_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gx_default_fill_mask(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath);
int gx_default_fill_trapezoid(gx_device * dev, const gs_fixed_edge * left, const gs_fixed_edge * right, fixed ybot, fixed ytop, bool swap_axes, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_default_fill_parallelogram(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_default_fill_triangle(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_default_draw_thin_line(gx_device * dev, fixed fx0, fixed fy0, fixed fx1, fixed fy1, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_default_begin_image(gx_device * dev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * memory, void **pinfo);
int gx_default_image_data(gx_device * dev, void *info, const byte ** planes, int data_x, uint raster, int height);
int gx_default_end_image(gx_device * dev, void *info, bool draw_last);
int gx_default_strip_tile_rectangle(gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
int gx_no_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
extern int (*gx_default_strip_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_default_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
void gx_default_get_clipping_box(gx_device * dev, gs_fixed_rect * pbox);
void gx_get_largest_clipping_box(gx_device * dev, gs_fixed_rect * pbox);
gx_color_index gx_default_b_w_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_default_b_w_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
gx_color_index gx_default_gray_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_default_gray_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
gx_color_index gx_default_rgb_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_default_rgb_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
gx_color_index gx_default_cmyk_map_cmyk_color(gx_device * dev, gx_color_value cyan, gx_color_value magenta, gx_color_value yellow, gx_color_value black);
void gx_forward_get_initial_matrix(gx_device * dev, gs_matrix * pmat);
int gx_forward_sync_output(gx_device * dev);
int gx_forward_output_page(gx_device * dev, int num_copies, int flush);
gx_color_index gx_forward_map_rgb_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue);
int gx_forward_map_color_rgb(gx_device * dev, gx_color_index color, gx_color_value rgb[3]);
int gx_forward_tile_rectangle(gx_device * dev, const gx_tile_bitmap * tile, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
int gx_forward_get_bits(gx_device * dev, int y, byte * data, byte ** actual_data);
int gx_forward_get_params(gx_device * dev, gs_param_list * plist);
int gx_forward_put_params(gx_device * dev, gs_param_list * plist);
gx_color_index gx_forward_map_cmyk_color(gx_device * dev, gx_color_value cyan, gx_color_value magenta, gx_color_value yellow, gx_color_value black);
gx_xfont_procs *gx_forward_get_xfont_procs(gx_device * dev);
gx_device *gx_forward_get_xfont_device(gx_device * dev);
gx_color_index gx_forward_map_rgb_alpha_color(gx_device * dev, gx_color_value red, gx_color_value green, gx_color_value blue, gx_color_value alpha);
gx_device *gx_forward_get_page_device(gx_device * dev);
int gx_forward_get_alpha_bits(gx_device * dev, graphics_object_type type);
int gx_forward_get_band(gx_device * dev, int y, int *band_start);
extern int (*gx_forward_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
int gx_forward_fill_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_fill_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gx_forward_stroke_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_stroke_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gx_forward_fill_mask(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath);
int gx_forward_fill_trapezoid(gx_device * dev, const gs_fixed_edge * left, const gs_fixed_edge * right, fixed ybot, fixed ytop, bool swap_axes, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_forward_fill_parallelogram(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_forward_fill_triangle(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_forward_draw_thin_line(gx_device * dev, fixed fx0, fixed fy0, fixed fx1, fixed fy1, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gx_forward_begin_image(gx_device * dev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * memory, void **pinfo);
int gx_forward_image_data(gx_device * dev, void *info, const byte ** planes, int data_x, uint raster, int height);
int gx_forward_end_image(gx_device * dev, void *info, bool draw_last);
int gx_forward_strip_tile_rectangle(gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y);
extern int (*gx_forward_strip_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
void gx_forward_get_clipping_box(gx_device * dev, gs_fixed_rect * pbox);
void gx_device_set_procs(gx_device *);
void gx_device_fill_in_procs(gx_device *);
void gx_device_forward_fill_in_procs(gx_device_forward *);
void gx_device_forward_color_procs(gx_device_forward *);
void gx_device_no_output(gs_state *);
void gx_set_device_only(gs_state *, gx_device *);
int gs_closedevice(gx_device *);
typedef struct gx_device_type_s {
    gs_memory_type_ptr_t stype;
    int (*initialize) (gx_device *);
} gx_device_type;
int gdev_initialize(gx_device *);
typedef enum { cpm_show, cpm_false_charpath, cpm_true_charpath, cpm_false_charboxpath, cpm_true_charboxpath } gs_char_path_mode;
typedef enum { gs_cap_butt = 0, gs_cap_round = 1, gs_cap_square = 2, gs_cap_triangle = 3 } gs_line_cap;
typedef enum { gs_join_miter = 0, gs_join_round = 1, gs_join_bevel = 2, gs_join_none = 3, gs_join_triangle = 4 } gs_line_join;
typedef struct gs_path_enum_s gs_path_enum;
typedef enum { sn_none = 0, sn_not_first = 1, sn_from_arc = 2 } segment_notes;
gx_path *gx_path_alloc(gs_memory_t *, client_name_t);
void gx_path_init(gx_path *, gs_memory_t *), gx_path_reset(gx_path *), gx_path_release(gx_path *), gx_path_share(gx_path *);
int gx_path_add_point(gx_path *, fixed, fixed), gx_path_add_relative_point(gx_path *, fixed, fixed), gx_path_add_line_notes(gx_path *, fixed, fixed, segment_notes), gx_path_add_lines_notes(gx_path *, const gs_fixed_point *, int, segment_notes), gx_path_add_rectangle(gx_path *, fixed, fixed, fixed, fixed), gx_path_add_char_path(gx_path *, gx_path *, gs_char_path_mode), gx_path_add_curve_notes(gx_path *, fixed, fixed, fixed, fixed, fixed, fixed, segment_notes), gx_path_add_partial_arc_notes(gx_path *, fixed, fixed, fixed, fixed, floatp, segment_notes), gx_path_add_path(gx_path *, gx_path *), gx_path_close_subpath_notes(gx_path *, segment_notes), gx_path_pop_close_notes(gx_path *, segment_notes);
gx_path *gx_current_path(const gs_state *);
void gx_path_assign(gx_path *, const gx_path *);
int gx_path_current_point(const gx_path *, gs_fixed_point *), gx_path_bbox(gx_path *, gs_fixed_rect *);
bool gx_path_has_curves(const gx_path *), gx_path_is_void(const gx_path *), gx_path_is_null(const gx_path *), gx_path_is_rectangle(const gx_path *, gs_fixed_rect *), gx_path_is_monotonic(const gx_path *);
typedef enum { pco_none = 0, pco_init = 1, pco_monotonize = 2, pco_accurate = 4 } gx_path_copy_options;
int gx_path_copy_reducing(const gx_path * ppath_old, gx_path * ppath_new, fixed fixed_flatness, gx_path_copy_options options);
int gx_path_expand_dashes(const gx_path *, gx_path *, const gs_imager_state *), gx_path_copy_reversed(const gx_path *, gx_path *, bool), gx_path_translate(gx_path *, fixed, fixed), gx_path_scale_exp2(gx_path *, int, int);
void gx_point_scale_exp2(gs_fixed_point *, int, int), gx_rect_scale_exp2(gs_fixed_rect *, int, int);
int gx_path_enum_init(gs_path_enum *, const gx_path *);
int gx_path_enum_next(gs_path_enum *, gs_fixed_point[3]);
segment_notes gx_path_enum_notes(const gs_path_enum *);
bool gx_path_enum_backup(gs_path_enum *);
typedef struct gx_clip_list_s gx_clip_list;
int gx_clip_to_rectangle(gs_state *, gs_fixed_rect *), gx_clip_to_path(gs_state *), gx_cpath_init(gx_clip_path *, gs_memory_t *), gx_cpath_from_rectangle(gx_clip_path *, gs_fixed_rect *, gs_memory_t *), gx_cpath_intersect(gs_state *, gx_clip_path *, gx_path *, int), gx_cpath_scale_exp2(gx_clip_path *, int, int);
void gx_cpath_release(gx_clip_path *), gx_cpath_share(gx_clip_path *);
int gx_cpath_path(gx_clip_path *, gx_path *);
bool gx_cpath_inner_box(const gx_clip_path *, gs_fixed_rect *), gx_cpath_outer_box(const gx_clip_path *, gs_fixed_rect *), gx_cpath_includes_rectangle(const gx_clip_path *, fixed, fixed, fixed, fixed);
int gx_cpath_set_outside(gx_clip_path *, bool);
bool gx_cpath_is_outside(const gx_clip_path *);
typedef struct gx_device_bbox_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
    gx_device *target;
    gs_fixed_rect bbox;
    gx_color_index white;
} gx_device_bbox;
extern const gs_memory_struct_type_t st_device_bbox;
void gx_device_bbox_init(gx_device_bbox * dev, gx_device * target);
void gx_device_bbox_bbox(gx_device_bbox * dev, gs_rect * pbbox);
typedef struct gx_dash_params_s {
    float *pattern;
    uint pattern_size;
    float offset;
    bool adapt;
    float pattern_length;
    bool init_ink_on;
    int init_index;
    float init_dist_left;
} gx_dash_params;
typedef struct gx_line_params_s {
    float half_width;
    gs_line_cap cap;
    gs_line_join join;
    float miter_limit;
    float miter_check;
    float dot_length;
    float dot_length_absolute;
    gx_dash_params dash;
} gx_line_params;
int gx_set_miter_limit(gx_line_params *, floatp);
int gx_set_dash(gx_dash_params *, const float *, uint, floatp, gs_memory_t *);
int gx_set_dot_length(gx_line_params *, floatp, bool);
typedef struct gs_matrix_fixed_s {
    float xx, xy, yx, yy, tx, ty;
    fixed tx_fixed, ty_fixed;
    bool txy_fixed_valid;
} gs_matrix_fixed;
int gs_point_transform2fixed(const gs_matrix_fixed *, floatp, floatp, gs_fixed_point *);
int gs_distance_transform2fixed(const gs_matrix_fixed *, floatp, floatp, gs_fixed_point *);
typedef struct {
    long l;
    fixed f;
} coeff1;
typedef struct {
    coeff1 xx, xy, yx, yy;
    int skewed;
    int shift;
    int max_bits;
    fixed round;
} fixed_coeff;
typedef struct gx_transfer_map_s gx_transfer_map;
typedef float (*gs_mapping_proc) (floatp, const gx_transfer_map *);
typedef struct gs_halftone_s gs_halftone;
typedef struct gx_transfer_colored_s {
    gx_transfer_map *red;
    gx_transfer_map *green;
    gx_transfer_map *blue;
    gx_transfer_map *gray;
} gx_transfer_colored;
typedef union gx_transfer_s {
    gx_transfer_map *indexed[4];
    gx_transfer_colored colored;
} gx_transfer;
struct gs_imager_state_s {
    gs_memory_t *memory;
    gx_line_params line_params;
    gs_matrix_fixed ctm;
    gs_logical_operation_t log_op;
    gx_color_value alpha;
    bool overprint;
    float flatness;
    gs_fixed_point fill_adjust;
    bool stroke_adjust;
    bool accurate_curves;
    gs_halftone *halftone;
    gs_int_point screen_phase[2];
    gx_device_halftone *dev_ht;
    struct gx_ht_cache_s *ht_cache;
    struct gs_cie_render_s *cie_render;
    gx_transfer_map *black_generation;
    gx_transfer_map *undercolor_removal;
    gx_transfer set_transfer;
    gx_transfer effective_transfer;
    struct gx_cie_joint_caches_s *cie_joint_caches;
    const struct gx_color_map_procs_s *cmap_procs;
    struct gx_pattern_cache_s *pattern_cache;
};
int gs_imager_state_initialize(gs_imager_state * pis, gs_memory_t * mem);
void gs_imager_state_release(gs_imager_state * pis);
typedef struct stream_s stream;
typedef struct stream_state_s stream_state;
typedef struct stream_template_s stream_template;
typedef struct stream_cursor_read_s {
    const byte *ptr;
    const byte *limit;
    byte *_skip;
} stream_cursor_read;
typedef struct stream_cursor_write_s {
    const byte *_skip;
    byte *ptr;
    byte *limit;
} stream_cursor_write;
typedef union stream_cursor_s {
    stream_cursor_read r;
    stream_cursor_write w;
} stream_cursor;
int s_no_report_error(stream_state *, const char *);
struct stream_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
};
extern const gs_memory_struct_type_t st_stream_state;
typedef struct {
    int (*available) (stream *, long *);
    int (*seek) (stream *, long);
    void (*reset) (stream *);
    int (*flush) (stream *);
    int (*close) (stream *);
    int (*process) (stream_state *, stream_cursor_read *, stream_cursor_write *, bool);
    int (*switch_mode) (stream *, bool);
} stream_procs;
struct stream_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    stream_cursor cursor;
    byte *cbuf;
    uint bsize;
    uint cbsize;
    short end_status;
    byte foreign;
    byte modes;
    gs_string cbuf_string;
    long position;
    stream_procs procs;
    stream *strm;
    int is_temp;
    int inline_temp;
    stream_state *state;
    ushort read_id;
    ushort write_id;
    stream *prev, *next;
    int save_count;
    FILE *file;
    uint file_modes;
    int (*save_close) (stream *);
};
int savailable(stream *, long *);
int sclose(stream *);
int sswitch(stream *, bool);
int spgetcc(stream *, bool);
int sgets(stream *, byte *, uint, uint *);
int sungetc(stream *, byte);
int spskip(stream *, long, long *);
int s_process_read_buf(stream *);
int spputc(stream *, byte);
int sputs(stream *, const byte *, uint, uint *);
int s_process_write_buf(stream *, bool);
long stell(stream *);
int spseek(stream *, long);
stream *s_alloc(gs_memory_t *, client_name_t);
stream_state *s_alloc_state(gs_memory_t *, gs_memory_type_ptr_t, client_name_t);
void sread_string(stream *, const byte *, uint), swrite_string(stream *, byte *, uint);
void sread_file(stream *, FILE *, byte *, uint), swrite_file(stream *, FILE *, byte *, uint), sappend_file(stream *, FILE *, byte *, uint);
void s_std_init(stream *, byte *, uint, const stream_procs *, int);
void s_disable(stream *);
int s_std_null(stream *);
void s_std_read_reset(stream *), s_std_write_reset(stream *);
int s_std_read_flush(stream *), s_std_write_flush(stream *), s_std_noavailable(stream *, long *), s_std_noseek(stream *, long), s_std_close(stream *), s_std_switch_mode(stream *, bool);
int s_filter_write_flush(stream *), s_filter_close(stream *);
typedef struct gx_device_vector_s gx_device_vector;
typedef enum { gx_path_type_none = 0, gx_path_type_fill = 1, gx_path_type_stroke = 2, gx_path_type_clip = 4, gx_path_type_winding_number = 0, gx_path_type_even_odd = 8, gx_path_type_rule = gx_path_type_winding_number | gx_path_type_even_odd } gx_path_type_t;
typedef enum { gx_rect_x_first, gx_rect_y_first } gx_rect_direction_t;
typedef struct gx_device_vector_procs_s {
    int (*beginpage) (gx_device_vector * vdev);
    int (*setlinewidth) (gx_device_vector * vdev, floatp width);
    int (*setlinecap) (gx_device_vector * vdev, gs_line_cap cap);
    int (*setlinejoin) (gx_device_vector * vdev, gs_line_join join);
    int (*setmiterlimit) (gx_device_vector * vdev, floatp limit);
    int (*setdash) (gx_device_vector * vdev, const float *pattern, uint count, floatp offset);
    int (*setflat) (gx_device_vector * vdev, floatp flatness);
    int (*setlogop) (gx_device_vector * vdev, gs_logical_operation_t lop, gs_logical_operation_t diff);
    int (*setfillcolor) (gx_device_vector * vdev, const gx_drawing_color * pdc);
    int (*setstrokecolor) (gx_device_vector * vdev, const gx_drawing_color * pdc);
    int (*dopath) (gx_device_vector * vdev, const gx_path * ppath, gx_path_type_t type);
    int (*dorect) (gx_device_vector * vdev, fixed x0, fixed y0, fixed x1, fixed y1, gx_path_type_t type);
    int (*beginpath) (gx_device_vector * vdev, gx_path_type_t type);
    int (*moveto) (gx_device_vector * vdev, floatp x0, floatp y0, floatp x, floatp y, bool first);
    int (*lineto) (gx_device_vector * vdev, floatp x0, floatp y0, floatp x, floatp y);
    int (*curveto) (gx_device_vector * vdev, floatp x0, floatp y0, floatp x1, floatp y1, floatp x2, floatp y2, floatp x3, floatp y3);
    int (*closepath) (gx_device_vector * vdev, floatp x0, floatp y0, floatp x_start, floatp y_start);
    int (*endpath) (gx_device_vector * vdev, gx_path_type_t type);
} gx_device_vector_procs;
int gdev_vector_setflat(gx_device_vector * vdev, floatp flatness);
int gdev_vector_dopath(gx_device_vector * vdev, const gx_path * ppath, gx_path_type_t type);
int gdev_vector_dorect(gx_device_vector * vdev, fixed x0, fixed y0, fixed x1, fixed y1, gx_path_type_t type);
struct gx_device_vector_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
    gs_memory_t *v_memory;
    const gx_device_vector_procs *vec_procs;
    char fname[80 + 1];
    FILE *file;
    stream *strm;
    byte *strmbuf;
    uint strmbuf_size;
    gs_imager_state state;
    float dash_pattern[11];
    gx_drawing_color fill_color, stroke_color;
    gs_id no_clip_path_id;
    gs_id clip_path_id;
    gs_point scale;
    bool in_page;
    gx_device_bbox *bbox_device;
    gx_color_index black, white;
};
extern const gs_memory_struct_type_t st_device_vector;
void gdev_vector_init(gx_device_vector * vdev);
void gdev_vector_reset(gx_device_vector * vdev);
int gdev_vector_open_file_bbox(gx_device_vector * vdev, uint strmbuf_size, bool bbox);
stream *gdev_vector_stream(gx_device_vector * vdev);
int gdev_vector_update_log_op(gx_device_vector * vdev, gs_logical_operation_t lop);
int gdev_vector_update_fill_color(gx_device_vector * vdev, const gx_drawing_color * pdcolor);
int gdev_vector_prepare_fill(gx_device_vector * vdev, const gs_imager_state * pis, const gx_fill_params * params, const gx_drawing_color * pdcolor);
int gdev_vector_prepare_stroke(gx_device_vector * vdev, const gs_imager_state * pis, const gx_stroke_params * params, const gx_drawing_color * pdcolor, floatp scale);
int gdev_vector_write_polygon(gx_device_vector * vdev, const gs_fixed_point * points, uint count, bool close, gx_path_type_t type);
int gdev_vector_write_rectangle(gx_device_vector * vdev, fixed x0, fixed y0, fixed x1, fixed y1, bool close, gx_rect_direction_t dir);
int gdev_vector_write_clip_path(gx_device_vector * vdev, const gx_clip_path * pcpath);
int gdev_vector_update_clip_path(gx_device_vector * vdev, const gx_clip_path * pcpath);
void gdev_vector_close_file(gx_device_vector * vdev);
typedef struct gdev_vector_image_enum_s {
    gs_memory_t *memory;
    void *default_info;
    void *bbox_info;
    int width, height;
    int num_planes;
    int bits_per_pixel;
    uint bits_per_row;
    int y;
} gdev_vector_image_enum_t;
extern const gs_memory_struct_type_t st_vector_image_enum;
int gdev_vector_begin_image(gx_device_vector * vdev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * mem, gdev_vector_image_enum_t * pie);
int gdev_vector_end_image(gx_device_vector * vdev, gdev_vector_image_enum_t * pie, bool draw_last, gx_color_index pad);
int gdev_vector_put_params(gx_device * dev, gs_param_list * plist);
int gdev_vector_get_params(gx_device * dev, gs_param_list * plist);
int gdev_vector_fill_rectangle(gx_device * dev, int x, int y, int width, int height, gx_color_index color);
int gdev_vector_fill_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_fill_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gdev_vector_stroke_path(gx_device * dev, const gs_imager_state * pis, gx_path * ppath, const gx_stroke_params * params, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath);
int gdev_vector_fill_trapezoid(gx_device * dev, const gs_fixed_edge * left, const gs_fixed_edge * right, fixed ybot, fixed ytop, bool swap_axes, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gdev_vector_fill_parallelogram(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
int gdev_vector_fill_triangle(gx_device * dev, fixed px, fixed py, fixed ax, fixed ay, fixed bx, fixed by, const gx_drawing_color * pdcolor, gs_logical_operation_t lop);
struct stream_template_s {
    gs_memory_type_ptr_t stype;
    int (*init) (stream_state *);
    int (*process) (stream_state *, stream_cursor_read *, stream_cursor_write *, bool);
    uint min_in_size;
    uint min_out_size;
    void (*release) (stream_state *);
    void (*set_defaults) (stream_state *);
    int (*reinit) (stream_state *);
};
int stream_move(stream_cursor_read *, stream_cursor_write *);
typedef enum { hex_ignore_garbage = 0, hex_ignore_whitespace = 1, hex_ignore_leading_whitespace = 2 } hex_syntax;
int s_hex_process(stream_cursor_read *, stream_cursor_write *, int *, hex_syntax);
typedef struct stream_RLE_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    bool EndOfData;
    ulong record_size;
    ulong record_left;
    int copy_left;
} stream_RLE_state;
extern const stream_template s_RLE_template;
typedef struct stream_RLD_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    bool EndOfData;
    int copy_left;
    int copy_data;
} stream_RLD_state;
extern const stream_template s_RLD_template;
typedef enum { pxaPaletteDepth = 2, pxaColorSpace, pxaNullBrush, pxaNullPen, pxaPaletteData, pxaPatternSelectID = 8, pxaGrayLevel, pxaRGBColor = 11, pxaPatternOrigin, pxaNewDestinationSize, pxaDeviceMatrix = 33, pxaDitherMatrixDataType, pxaDitherOrigin, pxaMediaDestination, pxaMediaSize, pxaMediaSource, pxaMediaType, pxaOrientation, pxaPageAngle, pxaPageOrigin, pxaPageScale, pxaROP3, pxaTxMode, pxaCustomMediaSize = 47, pxaCustomMediaSizeUnits, pxaPageCopies, pxaDitherMatrixSize, pxaDitherMatrixDepth, pxaSimplexPageMode, pxaDuplexPageMode, pxaDuplexPageSide, pxaArcDirection = 65, pxaBoundingBox, pxaDashOffset, pxaEllipseDimension, pxaEndPoint, pxaFillMode, pxaLineCapStyle, pxaLineJoinStyle, pxaMiterLength, pxaLineDashStyle, pxaPenWidth, pxaPoint, pxaNumberOfPoints, pxaSolidLine, pxaStartPoint, pxaPointType, pxaControlPoint1, pxaControlPoint2, pxaClipRegion, pxaClipMode, pxaColorDepth = 98, pxaBlockHeight, pxaColorMapping, pxaCompressMode, pxaDestinationBox, pxaDestinationSize, pxaPatternPersistence, pxaPatternDefineID, pxaSourceHeight = 107, pxaSourceWidth, pxaStartLine, pxaNumberOfScanLines = 115, pxaCommentData = 129, pxaDataOrg, pxaMeasure = 134, pxaSourceType = 136, pxaUnitsPerMeasure, pxaStreamName = 139, pxaStreamDataLength, pxaErrorReport = 143, pxaCharAngle = 161, pxaCharCode, pxaCharDataSize, pxaCharScale, pxaCharShear, pxaCharSize, pxaFontHeaderLength, pxaFontName, pxaFontFormat, pxaSymbolSet, pxaTextData, pxaCharSubModeArray, pxaXSpacingData = 175, pxaYSpacingData, pxaCharBoldValue, px_attribute_next } px_attribute_t;
typedef enum { eClockWise = 0, eCounterClockWise, pxeArcDirection_next } pxeArcDirection_t;
typedef enum { eNoSubstitution = 0, eVerticalSubstitution, pxeCharSubModeArray_next } pxeCharSubModeArray_t;
typedef enum { eNonZeroWinding = 0, eEvenOdd, pxeClipMode_next, pxeFillMode_next = pxeClipMode_next } pxeClipMode_t;
typedef enum { eInterior = 0, eExterior, pxeClipRegion_next } pxeClipRegion_t;
typedef enum { e1Bit = 0, e4Bit, e8Bit, pxeColorDepth_next } pxeColorDepth_t;
typedef enum { eDirectPixel = 0, eIndexedPixel, pxeColorMapping_next } pxeColorMapping_t;
typedef enum { eNoColorSpace = 0, eGray, eRGB, pxeColorSpace_next } pxeColorSpace_t;
typedef enum { eNoCompression = 0, eRLECompression, pxeCompressMode_next } pxeCompressMode_t;
typedef enum { eBinaryHighByteFirst = 0, eBinaryLowByteFirst, pxeDataOrg_next } pxeDataOrg_t;
typedef enum { eDefault = 0, pxeDataSource_next } pxeDataSource_t;
typedef enum { eUByte = 0, eSByte, eUInt16, eSInt16, pxeDataType_next } pxeDataType_t;
typedef enum { eDownloaded = -1, eDeviceBest = 0, pxeDitherMatrix_next } pxeDitherMatrix_t;
typedef enum { eDuplexHorizontalBinding = 0, eDuplexVerticalBinding, pxeDuplexPageMode_next } pxeDuplexPageMode_t;
typedef enum { eFrontMediaSide = 0, eBackMediaSide, pxeDuplexPageSide_next } pxeDuplexPageSide_t;
typedef enum { eNoReporting = 0, eBackChannel, eErrorPage, eBackChAndErrPage, pxeErrorReport_next } pxeErrorReport_t;
typedef pxeClipMode_t pxeFillMode_t;
typedef enum { eButtCap = 0, eRoundCap, eSquareCap, eTriangleCap, pxeLineCap_next } pxeLineCap_t;
typedef enum { eMiterJoin = 0, eRoundJoin, eBevelJoin, eNoJoin, pxeLineJoin_next } pxeLineJoin_t;
typedef enum { eInch = 0, eMillimeter, eTenthsOfAMillimeter, pxeMeasure_next } pxeMeasure_t;
typedef enum { eDefaultDestination = 0, pxeMediaDestination_next } pxeMediaDestination_t;
typedef enum { eLetterPaper = 0, eLegalPaper, eA4Paper, eExecPaper, eLedgerPaper, eA3Paper, eCOM10Envelope, eMonarchEnvelope, eC5Envelope, eDLEnvelope, eJB4Paper, eJB5Paper, eB5Envelope, eJPostcard, eJDoublePostcard, eA5Paper, pxeMediaSize_next } pxeMediaSize_t;
typedef enum { eDefaultSource = 0, eAutoSelect, eManualFeed, eMultiPurposeTray, eUpperCassette, eLowerCassette, eEnvelopeTray, pxeMediaSource_next } pxeMediaSource_t;
typedef enum { eDefaultType = 0, pxeMediaType_next } pxeMediaType_t;
typedef enum { ePortraitOrientation = 0, eLandscapeOrientation, eReversePortrait, eReverseLandscape, pxeOrientation_next } pxeOrientation_t;
typedef enum { eTempPattern = 0, ePagePattern, eSessionPattern, pxePatternPersistence_next } pxePatternPersistence_t;
typedef enum { eSimplexFrontSide = 0, pxeSimplexPageMode_next } pxeSimplexPageMode_t;
typedef enum { eOpaque = 0, eTransparent, pxeTxMode_next } pxeTxMode_t;
typedef enum { pxtNull = 0x00, pxt01, pxt02, pxt03, pxt04, pxt05, pxt06, pxt07, pxt08, pxtHT, pxtLF, pxtVT, pxtFF, pxtCR, pxt0e, pxt0f, pxt10, pxt11, pxt12, pxt13, pxt14, pxt15, pxt16, pxt17, pxt18, pxt19, pxt1a, pxt1b, pxt1c, pxt1d, pxt1e, pxt1f, pxtSpace, pxt21, pxt22, pxt23, pxt24, pxt25, pxt26, pxt_beginASCII, pxt_beginBinaryMSB, pxt_beginBinaryLSB, pxt2a, pxt2b, pxt2c, pxt2d, pxt2e, pxt2f, pxt30, pxt31, pxt32, pxt33, pxt34, pxt35, pxt36, pxt37, pxt38, pxt39, pxt3a, pxt3b, pxt3c, pxt3d, pxt3e, pxt3f, pxt40, pxtBeginSession, pxtEndSession, pxtBeginPage, pxtEndPage, pxt45, pxt46, pxtComment, pxtOpenDataSource, pxtCloseDataSource, pxt4a, pxt4b, pxt4c, pxt4d, pxt4e, pxtBeginFontHeader, pxtReadFontHeader, pxtEndFontHeader, pxtBeginChar, pxtReadChar, pxtEndChar, pxtRemoveFont, pxt56, pxt57, pxt58, pxt59, pxt5a, pxtBeginStream, pxtReadStream, pxtEndStream, pxtExecStream, pxt5f, pxtPopGS, pxtPushGS, pxtSetClipReplace, pxtSetBrushSource, pxtSetCharAngle, pxtSetCharScale, pxtSetCharShear, pxtSetClipIntersect, pxtSetClipRectangle, pxtSetClipToPage, pxtSetColorSpace, pxtSetCursor, pxtSetCursorRel, pxtSetHalftoneMethod, pxtSetFillMode, pxtSetFont, pxtSetLineDash, pxtSetLineCap, pxtSetLineJoin, pxtSetMiterLimit, pxtSetPageDefaultCTM, pxtSetPageOrigin, pxtSetPageRotation, pxtSetPageScale, pxtSetPaintTxMode, pxtSetPenSource, pxtSetPenWidth, pxtSetROP, pxtSetSourceTxMode, pxtSetCharBoldValue, pxt7e, pxtSetClipMode, pxtSetPathToClip, pxtSetCharSubMode, pxt82, pxt83, pxtCloseSubPath, pxtNewPath, pxtPaintPath, pxt87, pxt88, pxt89, pxt8a, pxt8b, pxt8c, pxt8d, pxt8e, pxt8f, pxt90, pxtArcPath, pxt92, pxtBezierPath, pxt94, pxtBezierRelPath, pxtChord, pxtChordPath, pxtEllipse, pxtEllipsePath, pxt9a, pxtLinePath, pxt9c, pxtLineRelPath, pxtPie, pxtPiePath, pxtRectangle, pxtRectanglePath, pxtRoundRectangle, pxtRoundRectanglePath, pxta4, pxta5, pxta6, pxta7, pxtText, pxtTextPath, pxtaa, pxtab, pxtac, pxtad, pxtae, pxtaf, pxtBeginImage, pxtReadImage, pxtEndImage, pxtBeginRastPattern, pxtReadRastPattern, pxtEndRastPattern, pxtBeginScan, pxtb7, pxtEndScan, pxtScanLineRel, pxtba, pxtbb, pxtbc, pxtbd, pxtbe, pxtbf, pxt_ubyte, pxt_uint16, pxt_uint32, pxt_sint16, pxt_sint32, pxt_real32, pxtc6, pxtc7, pxt_ubyte_array, pxt_uint16_array, pxt_uint32_array, pxt_sint16_array, pxt_sint32_array, pxt_real32_array, pxtce, pxtcf, pxt_ubyte_xy, pxt_uint16_xy, pxt_uint32_xy, pxt_sint16_xy, pxt_sint32_xy, pxt_real32_xy, pxtd6, pxtd7, pxtd8, pxtd9, pxtda, pxtdb, pxtdc, pxtdd, pxtde, pxtdf, pxt_ubyte_box, pxt_uint16_box, pxt_uint32_box, pxt_sint16_box, pxt_sint32_box, pxt_real32_box, pxte6, pxte7, pxte8, pxte9, pxtea, pxteb, pxtec, pxted, pxtee, pxtef, pxtf0, pxtf1, pxtf2, pxtf3, pxtf4, pxtf5, pxtf6, pxtf7, pxt_attr_ubyte, pxt_attr_uint16, pxt_dataLength, pxt_dataLengthByte, pxtfc, pxtfd, pxtfe, pxtff } px_tag_t;
typedef enum { points_none, points_lines, points_curves } point_type_t;
typedef struct gx_device_pclxl_s {
    int params_size;
    const gx_device_procs *static_procs;
    const char *dname;
    gs_memory_t *memory;
    gs_memory_type_ptr_t stype;
    bool is_open;
    int max_fill_band;
    gx_device_color_info color_info;
    int width;
    int height;
    float MediaSize[2];
    float ImagingBBox[4];
    bool ImagingBBox_set;
    float HWResolution[2];
    float MarginsHWResolution[2];
    float Margins[2];
    float HWMargins[4];
    long PageCount;
    long ShowpageCount;
    bool IgnoreNumCopies;
    gx_page_device_procs page_procs;
    gx_device_procs std_procs;
    gs_memory_t *v_memory;
    const gx_device_vector_procs *vec_procs;
    char fname[80 + 1];
    FILE *file;
    stream *strm;
    byte *strmbuf;
    uint strmbuf_size;
    gs_imager_state state;
    float dash_pattern[11];
    gx_drawing_color fill_color, stroke_color;
    gs_id no_clip_path_id;
    gs_id clip_path_id;
    gs_point scale;
    bool in_page;
    gx_device_bbox *bbox_device;
    gx_color_index black, white;
    pxeMediaSize_t media_size;
    gx_path_type_t fill_rule;
    gx_path_type_t clip_rule;
    pxeColorSpace_t color_space;
    struct pal_ {
	int size;
	byte data[256 * 3];
    } palette;
    struct pts_ {
	gs_int_point current;
	point_type_t type;
	int count;
	gs_int_point data[100];
    } points;
    struct ch_ {
	ushort table[400 * 3 / 2];
	struct cd_ {
	    gs_id id;
	    uint size;
	} data[400];
	int next_in;
	int next_out;
	int count;
	ulong used;
    } chars;
    bool font_set;
} gx_device_pclxl;
static gs_ptr_type_t device_pclxl_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    return (*st_device_vector.enum_ptrs) (vptr, size, index, pep);
}

static void device_pclxl_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{ {
	(*st_device_vector.reloc_ptrs) (vptr, size, gcst);
}} const gs_memory_struct_type_t st_device_pclxl = { sizeof(gx_device_pclxl), "gx_device_pclxl", 0, 0, device_pclxl_enum_ptrs, device_pclxl_reloc_ptrs, gx_device_finalize };

static int pclxl_open_device(gx_device * dev);
static int pclxl_output_page(gx_device * dev, int num_copies, int flush);
static int pclxl_close_device(gx_device * dev);
static int pclxl_copy_mono(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1);
static int pclxl_copy_color(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height);
static int pclxl_fill_mask(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath);
static int pclxl_begin_image(gx_device * dev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * memory, void **pinfo);
static int pclxl_image_data(gx_device * dev, void *info, const byte ** planes, int data_x, uint raster, int height);
static int pclxl_end_image(gx_device * dev, void *info, bool draw_last);
static int pclxl_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop);
gx_device_pclxl gs_pxlmono_device = { sizeof(gx_device_pclxl), 0, "pxlmono", 0, &st_device_pclxl, 0, 0, {(8 > 8 ? 3 : 1), 8, (8 > 1 ? 255 : 1), (8 > 8 ? 255 : 0), (8 > 1 ? 256 : 2), (8 > 8 ? 256 : 1)}
, 85 * 600 / 10, 110 * 600 / 10, {(((85 * 600 / 10) * 72.0 + 0.5) - 0.5) / (600), (((110 * 600 / 10) * 72.0 + 0.5) - 0.5) / (600)}
, {0, 0, 0, 0}
, 0, {600, 600}
, {600, 600}
, {0, 0}
, {0, 0, 0, 0}
, 0, 0, 0, {gx_default_install, gx_default_begin_page, gx_default_end_page}
, {pclxl_open_device, ((void *) 0), ((void *) 0), pclxl_output_page, pclxl_close_device, gx_default_gray_map_rgb_color, gx_default_gray_map_color_rgb, gdev_vector_fill_rectangle, ((void *) 0), pclxl_copy_mono, pclxl_copy_color, ((void *) 0), ((void *) 0), gdev_vector_get_params, gdev_vector_put_params, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), gx_page_device_get_page_device, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), gdev_vector_fill_path, gdev_vector_stroke_path, pclxl_fill_mask, gdev_vector_fill_trapezoid, gdev_vector_fill_parallelogram, gdev_vector_fill_triangle, ((void *) 0), pclxl_begin_image, pclxl_image_data, pclxl_end_image, ((void *) 0), pclxl_strip_copy_rop} };
gx_device_pclxl gs_pxlcolor_device = { sizeof(gx_device_pclxl), 0, "pxlcolor", 0, &st_device_pclxl, 0, 0, {(24 > 8 ? 3 : 1), 24, (24 > 1 ? 255 : 1), (24 > 8 ? 255 : 0), (24 > 1 ? 256 : 2), (24 > 8 ? 256 : 1)}
, 85 * 600 / 10, 110 * 600 / 10, {(((85 * 600 / 10) * 72.0 + 0.5) - 0.5) / (600), (((110 * 600 / 10) * 72.0 + 0.5) - 0.5) / (600)}
, {0, 0, 0, 0}
, 0, {600, 600}
, {600, 600}
, {0, 0}
, {0, 0, 0, 0}
, 0, 0, 0, {gx_default_install, gx_default_begin_page, gx_default_end_page}
, {pclxl_open_device, ((void *) 0), ((void *) 0), pclxl_output_page, pclxl_close_device, gx_default_rgb_map_rgb_color, gx_default_rgb_map_color_rgb, gdev_vector_fill_rectangle, ((void *) 0), pclxl_copy_mono, pclxl_copy_color, ((void *) 0), ((void *) 0), gdev_vector_get_params, gdev_vector_put_params, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), gx_page_device_get_page_device, ((void *) 0), ((void *) 0), ((void *) 0), ((void *) 0), gdev_vector_fill_path, gdev_vector_stroke_path, pclxl_fill_mask, gdev_vector_fill_trapezoid, gdev_vector_fill_parallelogram, gdev_vector_fill_triangle, ((void *) 0), pclxl_begin_image, pclxl_image_data, pclxl_end_image, ((void *) 0), pclxl_strip_copy_rop} };

static void put_bytes(stream * s, const byte * data, uint count)
{
    uint used;
    sputs(s, data, count, &used);
} static void put_a(stream * s, px_attribute_t a)
{
    (!((s)->cursor.w.ptr >= (s)->cursor.w.limit) ? (++((s)->cursor.w.ptr), *(s)->cursor.w.ptr = (pxt_attr_ubyte), 0) : spputc((s), (pxt_attr_ubyte)));
    (!((s)->cursor.w.ptr >= (s)->cursor.w.limit) ? (++((s)->cursor.w.ptr), *(s)->cursor.w.ptr = (a), 0) : spputc((s), (a)));
} static void put_ub(stream * s, byte b)
{
    (!((s)->cursor.w.ptr >= (s)->cursor.w.limit) ? (++((s)->cursor.w.ptr), *(s)->cursor.w.ptr = (pxt_ubyte), 0) : spputc((s), (pxt_ubyte)));
    (!((s)->cursor.w.ptr >= (s)->cursor.w.limit) ? (++((s)->cursor.w.ptr), *(s)->cursor.w.ptr = (b), 0) : spputc((s), (b)));
} static void put_s(stream * s, uint i)
{
    (!((s)->cursor.w.ptr >= (s)->cursor.w.limit) ? (++((s)->cursor.w.ptr), *(s)->cursor.w.ptr = ((byte) i), 0) : spputc((s), ((byte) i)));
    (!((s)->cursor.w.ptr >= (s)->cursor.w.limit) ? (++((s)->cursor.w.ptr), *(s)->cursor.w.ptr = ((byte) (i >> 8)), 0) : spputc((s), ((byte) (i >> 8))));
} static void put_us(stream * s, uint i)
{
    (!((s)->cursor.w.ptr >= (s)->cursor.w.limit) ? (++((s)->cursor.w.ptr), *(s)->cursor.w.ptr = (pxt_uint16), 0) : spputc((s), (pxt_uint16)));
    put_s(s, i);
} static void put_u(stream * s, uint i)
{
    if (i <= 255)
	put_ub(s, i);
    else
	put_us(s, i);
}

static void put_usp(stream * s, uint ix, uint iy)
{
    (!((s)->cursor.w.ptr >= (s)->cursor.w.limit) ? (++((s)->cursor.w.ptr), *(s)->cursor.w.ptr = (pxt_uint16_xy), 0) : spputc((s), (pxt_uint16_xy)));
    put_s(s, ix);
    put_s(s, iy);
} static void put_usq_fixed(stream * s, fixed x0, fixed y0, fixed x1, fixed y1)
{
    (!((s)->cursor.w.ptr >= (s)->cursor.w.limit) ? (++((s)->cursor.w.ptr), *(s)->cursor.w.ptr = (pxt_uint16_box), 0) : spputc((s), (pxt_uint16_box)));
    put_s(s, ((int) ((x0) >> (12))));
    put_s(s, ((int) ((y0) >> (12))));
    put_s(s, ((int) ((x1) >> (12))));
    put_s(s, ((int) ((y1) >> (12))));
} static void put_ss(stream * s, int i)
{
    (!((s)->cursor.w.ptr >= (s)->cursor.w.limit) ? (++((s)->cursor.w.ptr), *(s)->cursor.w.ptr = (pxt_sint16), 0) : spputc((s), (pxt_sint16)));
    put_s(s, (uint) i);
} static void put_ssp(stream * s, int ix, int iy)
{
    (!((s)->cursor.w.ptr >= (s)->cursor.w.limit) ? (++((s)->cursor.w.ptr), *(s)->cursor.w.ptr = (pxt_sint16_xy), 0) : spputc((s), (pxt_sint16_xy)));
    put_s(s, (uint) ix);
    put_s(s, (uint) iy);
} static void put_l(stream * s, ulong l)
{
    put_s(s, (uint) l);
    put_s(s, (uint) (l >> 16));
} static void put_r(stream * s, floatp r)
{
    int exp;
    long mantissa = (long) (frexp(r, &exp) * 0x1000000);
    if (exp < -126)
	mantissa = 0, exp = 0;
    if (mantissa < 0)
	exp += 128, mantissa = -mantissa;
    spputc(s, (byte) mantissa);
    spputc(s, (byte) (mantissa >> 8));
    spputc(s, (byte) (((exp + 127) << 7) + ((mantissa >> 16) & 0x7f)));
    spputc(s, (exp + 127) >> 1);
}

static void put_rl(stream * s, floatp r)
{
    (!((s)->cursor.w.ptr >= (s)->cursor.w.limit) ? (++((s)->cursor.w.ptr), *(s)->cursor.w.ptr = (pxt_real32), 0) : spputc((s), (pxt_real32)));
    put_r(s, r);
} static void put_data_length(stream * s, uint num_bytes)
{
    if (num_bytes > 255) {
	spputc(s, pxt_dataLength);
	put_l(s, (ulong) num_bytes);
    } else {
	spputc(s, pxt_dataLengthByte);
	spputc(s, (byte) num_bytes);
    }
}

static void pclxl_page_init(gx_device_pclxl * xdev)
{
    gdev_vector_init(((gx_device_vector *) xdev));
    xdev->in_page = ((bool) 0);
    xdev->fill_rule = gx_path_type_winding_number;
    xdev->clip_rule = gx_path_type_winding_number;
    xdev->color_space = eNoColorSpace;
    xdev->palette.size = 0;
    xdev->font_set = ((bool) 0);
} static void pclxl_set_color_space(gx_device_pclxl * xdev, pxeColorSpace_t color_space)
{
    if (xdev->color_space != color_space) {
	stream *s = gdev_vector_stream(((gx_device_vector *) xdev));
	put_ub(s, color_space);
	do {
	    static const byte ac_[] = { pxt_attr_ubyte, (pxaColorSpace), pxtSetColorSpace };
	    put_bytes(s, ac_, sizeof(ac_));
	} while (0);
	xdev->color_space = color_space;
    }
}

static void pclxl_set_color_palette(gx_device_pclxl * xdev, pxeColorSpace_t color_space, const byte * palette, uint palette_size)
{
    if (xdev->color_space != color_space || xdev->palette.size != palette_size || memcmp(xdev->palette.data, palette, palette_size)) {
	stream *s = gdev_vector_stream(((gx_device_vector *) xdev));
	static const byte csp_[] = { pxt_attr_ubyte, (pxaColorSpace), pxt_ubyte, (byte) (e8Bit), pxt_attr_ubyte, (pxaPaletteDepth), pxt_ubyte_array };
	put_ub(s, color_space);
	put_bytes(s, csp_, sizeof(csp_));
	put_u(s, palette_size);
	put_bytes(s, palette, palette_size);
	do {
	    static const byte ac_[] = { pxt_attr_ubyte, (pxaPaletteData), pxtSetColorSpace };
	    put_bytes(s, ac_, sizeof(ac_));
	} while (0);
	xdev->color_space = color_space;
	xdev->palette.size = palette_size;
	memcpy(xdev->palette.data, palette, palette_size);
    }
}

static int pclxl_set_color(gx_device_pclxl * xdev, const gx_drawing_color * pdc, px_attribute_t null_source, px_tag_t op)
{
    stream *s = gdev_vector_stream(((gx_device_vector *) xdev));
    if (((pdc)->type == gx_dc_type_pure)) {
	gx_color_index color = ((pdc)->colors.pure);
	if (xdev->color_info.num_components == 1 || ((color) >> 8 == ((color) & 0xffff))) {
	    pclxl_set_color_space(xdev, eGray);
	    (put_ub(s, (byte) color), put_a(s, pxaGrayLevel));
	} else {
	    pclxl_set_color_space(xdev, eRGB);
	    spputc(s, pxt_ubyte_array);
	    put_ub(s, 3);
	    spputc(s, (byte) (color >> 16));
	    spputc(s, (byte) (color >> 8));
	    spputc(s, (byte) color);
	    put_a(s, pxaRGBColor);
	}
    } else if (((pdc)->type == gx_dc_type_null))
	(put_ub(s, 0), put_a(s, null_source));
    else
	return ((-15));
    spputc(s, op);
    return 0;
}

static bool pclxl_can_handle_color_space(const gs_color_space * pcs)
{
    gs_color_space_index index = gs_color_space_get_index(pcs);
    if (index == gs_color_space_index_Indexed) {
	if (pcs->params.indexed.use_proc)
	    return ((bool) 0);
	index = gs_color_space_get_index(gs_color_space_indexed_base(pcs));
    }
    return !(index == gs_color_space_index_Separation || index == gs_color_space_index_Pattern);
}

static void pclxl_set_paints(gx_device_pclxl * xdev, gx_path_type_t type)
{
    stream *s = gdev_vector_stream(((gx_device_vector *) xdev));
    gx_path_type_t rule = type & gx_path_type_rule;
    if (!(type & gx_path_type_fill) && !((&xdev->fill_color)->type == gx_dc_type_null)) {
	static const byte nac_[] = { pxt_ubyte, (byte) (0), pxt_attr_ubyte, (pxaNullBrush), pxtSetBrushSource };
	put_bytes(s, nac_, sizeof(nac_));
	((&xdev->fill_color)->type = gx_dc_type_null);
	if (rule != xdev->fill_rule) {
	    put_ub(s, (rule == gx_path_type_even_odd ? eEvenOdd : eNonZeroWinding));
	    do {
		static const byte ac_[] = { pxt_attr_ubyte, (pxaFillMode), pxtSetFillMode };
		put_bytes(s, ac_, sizeof(ac_));
	    } while (0);
	    xdev->fill_rule = rule;
	}
    }
    if (!(type & gx_path_type_stroke) && !((&xdev->stroke_color)->type == gx_dc_type_null)) {
	static const byte nac_[] = { pxt_ubyte, (byte) (0), pxt_attr_ubyte, (pxaNullPen), pxtSetPenSource };
	put_bytes(s, nac_, sizeof(nac_));
	((&xdev->stroke_color)->type = gx_dc_type_null);
    }
}

static int pclxl_set_cursor(gx_device_pclxl * xdev, int x, int y)
{
    stream *s = gdev_vector_stream(((gx_device_vector *) xdev));
    put_ssp(s, x, y);
    do {
	do {
	    static const byte ac_[] = { pxt_attr_ubyte, (pxaPoint), pxtSetCursor };
	    put_bytes(s, ac_, sizeof(ac_));
	} while (0);
	return 0;
    } while (0);
}

static void put_np(stream * s, int count, pxeDataType_t dtype)
{
    (put_ub(s, count), put_a(s, pxaNumberOfPoints));
    (put_ub(s, dtype), put_a(s, pxaPointType));
} 
//complexity is O(n) inferred by loopus 
static int pclxl_flush_points(gx_device_pclxl * xdev)
{
    int count = xdev->points.count;
    if (count) {
	stream *s = gdev_vector_stream(((gx_device_vector *) xdev));
	px_tag_t op;
	int x = xdev->points.current.x, y = xdev->points.current.y;
	int uor = 0, sor = 0;
	pxeDataType_t data_type;
	int i, di;
	byte diffs[100 * 2];
	switch (xdev->points.type) {
	case points_none:
	    return 0;
	case points_lines:
	    op = pxtLinePath;
	    if (count < 3) {
		for (i = 0; i < count; ++i) {
		    put_ssp(s, xdev->points.data[i].x, xdev->points.data[i].y);
		    put_a(s, pxaEndPoint);
		    spputc(s, op);
		}
		goto zap;
	    }
	    for (i = di = 0; i < count; ++i, di += 2) {
		int dx = xdev->points.data[i].x - x;
		int dy = xdev->points.data[i].y - y;
		diffs[di] = (byte) dx;
		diffs[di + 1] = (byte) dy;
		uor |= dx | dy;
		sor |= (dx + 0x80) | (dy + 0x80);
		x += dx, y += dy;
	    } if (!(uor & ~0xff))
		data_type = eUByte;
	    else if (!(sor & ~0xff))
		data_type = eSByte;
	    else
		break;
	    op = pxtLineRelPath;
	  useb:put_np(s, count, data_type);
	    spputc(s, op);
	    put_data_length(s, count * 2);
	    put_bytes(s, diffs, count * 2);
	    goto zap;
	case points_curves:
	    op = pxtBezierPath;
	    for (i = di = 0; i < count; i += 3, di += 6) {
		int dx1 = xdev->points.data[i].x - x;
		int dy1 = xdev->points.data[i].y - y;
		int dx2 = xdev->points.data[i + 1].x - x;
		int dy2 = xdev->points.data[i + 1].y - y;
		int dx = xdev->points.data[i + 2].x - x;
		int dy = xdev->points.data[i + 2].y - y;
		diffs[di] = (byte) dx1;
		diffs[di + 1] = (byte) dy1;
		diffs[di + 2] = (byte) dx2;
		diffs[di + 3] = (byte) dy2;
		diffs[di + 4] = (byte) dx;
		diffs[di + 5] = (byte) dy;
		uor |= dx1 | dy1 | dx2 | dy2 | dx | dy;
		sor |= (dx1 + 0x80) | (dy1 + 0x80) | (dx2 + 0x80) | (dy2 + 0x80) | (dx + 0x80) | (dy + 0x80);
		x += dx, y += dy;
	    } if (!(uor & ~0xff))
		data_type = eUByte;
	    else if (!(sor & ~0xff))
		data_type = eSByte;
	    else
		break;
	    op = pxtBezierRelPath;
	    goto useb;
	default:
	    return ((-1));
	}
	put_np(s, count, eSInt16);
	spputc(s, op);
	put_data_length(s, count * 4);
	for (i = 0; i < count; ++i) {
	    put_s(s, xdev->points.data[i].x);
	    put_s(s, xdev->points.data[i].y);
	}
      zap:xdev->points.type = points_none;
	xdev->points.count = 0;
    }
    return 0;
}

static void pclxl_write_begin_image(gx_device_pclxl * xdev, uint width, uint height, uint dest_width, uint dest_height)
{
    stream *s = gdev_vector_stream(((gx_device_vector *) xdev));
    (put_us(s, width), put_a(s, pxaSourceWidth));
    (put_us(s, height), put_a(s, pxaSourceHeight));
    put_usp(s, dest_width, dest_height);
    do {
	static const byte ac_[] = { pxt_attr_ubyte, (pxaDestinationSize), pxtBeginImage };
	put_bytes(s, ac_, sizeof(ac_));
    } while (0);
}

static void pclxl_write_image_data(gx_device_pclxl * xdev, const byte * data, int data_bit, uint raster, uint width_bits, int y, int height)
{
    stream *s = gdev_vector_stream(((gx_device_vector *) xdev));
    uint width_bytes = (width_bits + 7) >> 3;
    bool compress = width_bytes >= 8;
    uint num_bytes = ((4) & ((4) - 1) ? ((width_bytes) + ((4) - 1)) / (4) * (4) : ((width_bytes) + ((4) - 1)) & -(4)) * height;
    int i;
    (put_us(s, y), put_a(s, pxaStartLine));
    (put_us(s, height), put_a(s, pxaBlockHeight));
    if (compress) {
	stream_RLE_state rlstate;
	stream_cursor_write w;
	stream_cursor_read r;
	byte *buf = (*(xdev->v_memory)->procs.alloc_bytes) (xdev->v_memory, num_bytes, "pclxl_write_image_data");
	if (buf == 0)
	    goto nc;
	((&rlstate)->EndOfData = ((bool) 1), (&rlstate)->record_size = 0);
	rlstate.EndOfData = ((bool) 0);
	((&rlstate)->record_left = ((&rlstate)->record_size == 0 ? ((&rlstate)->record_size = ((unsigned int) 0xffffffff + (unsigned int) 0)) : (&rlstate)->record_size), (&rlstate)->copy_left = 0);
	w.ptr = buf - 1;
	w.limit = w.ptr + num_bytes;
	for (i = 0; i < height; ++i) {
	    r.ptr = data + i * raster - 1;
	    r.limit = r.ptr + width_bytes;
	    if ((*s_RLE_template.process) ((stream_state *) & rlstate, &r, &w, ((bool) 0)) != 0 || r.ptr != r.limit)
		goto ncfree;
	    r.ptr = (const byte *) "\000\000\000\000\000";
	    r.limit = r.ptr + (-width_bytes & 3);
	    if ((*s_RLE_template.process) ((stream_state *) & rlstate, &r, &w, ((bool) 0)) != 0 || r.ptr != r.limit)
		goto ncfree;
	}
	r.ptr = r.limit;
	if ((*s_RLE_template.process) ((stream_state *) & rlstate, &r, &w, ((bool) 1)) != 0)
	    goto ncfree; {
	    uint count = w.ptr + 1 - buf;
	    put_ub(s, eRLECompression);
	    do {
		static const byte ac_[] = { pxt_attr_ubyte, (pxaCompressMode), pxtReadImage };
		put_bytes(s, ac_, sizeof(ac_));
	    } while (0);
	    put_data_length(s, count);
	    put_bytes(s, buf, count);
	    }
	    return;
	  ncfree:(*(xdev->v_memory)->procs.free_object) (xdev->v_memory, buf, "pclxl_write_image_data");
	  nc:;
    }
    put_ub(s, eNoCompression);
    do {
	static const byte ac_[] = { pxt_attr_ubyte, (pxaCompressMode), pxtReadImage };
	put_bytes(s, ac_, sizeof(ac_));
    } while (0);
    put_data_length(s, num_bytes);
    for (i = 0; i < height; ++i) {
	put_bytes(s, data + i * raster, width_bytes);
	put_bytes(s, (const byte *) "\000\000\000\000", -width_bytes & 3);
}} static void pclxl_write_end_image(gx_device_pclxl * xdev)
{
    spputc(xdev->strm, pxtEndImage);
} static void put_string(stream * s, const byte * data, uint len, bool wide)
{
    if (wide) {
	spputc(s, pxt_uint16_array);
	put_u(s, len);
	put_bytes(s, data, len * 2);
    } else {
	spputc(s, pxt_ubyte_array);
	put_u(s, len);
	put_bytes(s, data, len);
    }
}

static void put_us_be(stream * s, uint i)
{
    spputc(s, (byte) (i >> 8));
    spputc(s, (byte) i);
} static void pclxl_define_bitmap_font(gx_device_pclxl * xdev)
{
    stream *s = gdev_vector_stream(((gx_device_vector *) xdev));
    static const byte bfh_[] = { pxt_attr_ubyte, (pxaFontName), pxt_ubyte, (byte) (0), pxt_attr_ubyte, (pxaFontFormat), pxtBeginFontHeader, pxt_uint16, (byte) (8 + 6 + 4 + 6), (byte) ((8 + 6 + 4 + 6) >> 8), pxt_attr_ubyte, (pxaFontHeaderLength), pxtReadFontHeader, pxt_dataLengthByte, 8 + 6 + 4 + 6, 0, 0, 0, 0, 254, 0, (400 + 255) >> 8, 0, 'B', 'R', 0, 0, 0, 4 };
    static const byte efh_[] = { 0xff, 0xff, 0, 0, 0, 0, pxtEndFontHeader };
    put_bytes(s, bfh_, sizeof(bfh_));
    put_us_be(s, (uint) (xdev->HWResolution[0] + 0.5));
    put_us_be(s, (uint) (xdev->HWResolution[1] + 0.5));
    put_bytes(s, efh_, sizeof(efh_));
}

static void pclxl_set_font(gx_device_pclxl * xdev)
{
    stream *s = gdev_vector_stream(((gx_device_vector *) xdev));
    static const byte sf_[] = { pxt_attr_ubyte, (pxaFontName), pxt_ubyte, (byte) (1), pxt_attr_ubyte, (pxaCharSize), pxt_uint16, (byte) (0), (byte) ((0) >> 8), pxt_attr_ubyte, (pxaSymbolSet), pxtSetFont };
    put_bytes(s, sf_, sizeof(sf_));
}

static void pclxl_define_bitmap_char(gx_device_pclxl * xdev, uint ccode, const byte * data, uint raster, uint width_bits, uint height)
{
    stream *s = gdev_vector_stream(((gx_device_vector *) xdev));
    uint width_bytes = (width_bits + 7) >> 3;
    uint size = 10 + width_bytes * height;
    uint i;
    do {
	static const byte ac_[] = { pxt_attr_ubyte, (pxaFontName), pxtBeginChar };
	put_bytes(s, ac_, sizeof(ac_));
    } while (0);
    put_u(s, ccode);
    put_a(s, pxaCharCode);
    if (size > 0xffff) {
	spputc(s, pxt_uint32);
	put_l(s, (ulong) size);
    } else
	put_us(s, size);
    do {
	static const byte ac_[] = { pxt_attr_ubyte, (pxaCharDataSize), pxtReadChar };
	put_bytes(s, ac_, sizeof(ac_));
    } while (0);
    put_data_length(s, size);
    put_bytes(s, (const byte *) "\000\000\000\000\000\000", 6);
    put_us_be(s, width_bits);
    put_us_be(s, height);
    for (i = 0; i < height; ++i)
	put_bytes(s, data + i * raster, width_bytes);
    spputc(s, pxtEndChar);
}

static void pclxl_write_font_name(gx_device_pclxl * xdev)
{
    stream *s = gdev_vector_stream(((gx_device_vector *) xdev));
    put_string(s, (const byte *) "@", 1, ((bool) 0));
} static int pclxl_char_index(gx_device_pclxl * xdev, gs_id id)
{
    int i, i_empty = -1;
    uint ccode;
    for (i = (id * 247) % (sizeof(xdev->chars.table) / sizeof((xdev->chars.table)[0]));; i = (i == 0 ? (sizeof(xdev->chars.table) / sizeof((xdev->chars.table)[0])) : i) - 1) {
	ccode = xdev->chars.table[i];
	if (ccode == 0)
	    return (i_empty >= 0 ? i_empty : i);
	else if (ccode == 1) {
	    if (i_empty < 0)
		i_empty = i;
	    else if (i == i_empty)
		return i;
	} else if (xdev->chars.data[ccode].id == id)
	    return i;
    }
}

static void pclxl_remove_char(gx_device_pclxl * xdev, int index)
{
    uint ccode = xdev->chars.table[index];
    int i;
    if (ccode < 2)
	return;
    xdev->chars.count--;
    xdev->chars.used -= xdev->chars.data[ccode].size;
    xdev->chars.table[index] = 1;
    i = (index == 0 ? (sizeof(xdev->chars.table) / sizeof((xdev->chars.table)[0])) : index) - 1;
    if (xdev->chars.table[i] == 0) {
	for (i = index; xdev->chars.table[i] == 1; i = (i == (sizeof(xdev->chars.table) / sizeof((xdev->chars.table)[0])) - 1 ? 0 : i + 1))
	    xdev->chars.table[i] = 0;
    }
}

static int pclxl_copy_text_char(gx_device_pclxl * xdev, const byte * data, int raster, gx_bitmap_id id, int w, int h)
{
    uint width_bytes = (w + 7) >> 3;
    uint size = width_bytes * h;
    int index;
    uint ccode;
    stream *s = gdev_vector_stream(((gx_device_vector *) xdev));
    if (size > 5000)
	return -1;
    index = pclxl_char_index(xdev, id);
    if ((ccode = xdev->chars.table[index]) < 2) {
	while (xdev->chars.used + size > 500000 || xdev->chars.count >= 400 - 2) {
	    ccode = xdev->chars.next_out;
	    index = pclxl_char_index(xdev, xdev->chars.data[ccode].id);
	    pclxl_remove_char(xdev, index);
	    xdev->chars.next_out = (ccode == 400 - 1 ? 2 : ccode + 1);
	}
	index = pclxl_char_index(xdev, id);
	ccode = xdev->chars.next_in;
	xdev->chars.data[ccode].id = id;
	xdev->chars.data[ccode].size = size;
	xdev->chars.table[index] = ccode;
	xdev->chars.next_in = (ccode == 400 - 1 ? 2 : ccode + 1);
	if (!xdev->chars.count++) {
	    pclxl_write_font_name(xdev);
	    pclxl_define_bitmap_font(xdev);
	}
	if (!xdev->font_set) {
	    pclxl_write_font_name(xdev);
	    pclxl_set_font(xdev);
	    xdev->font_set = ((bool) 1);
	}
	xdev->chars.used += size;
	pclxl_write_font_name(xdev);
	pclxl_define_bitmap_char(xdev, ccode, data, raster, w, h);
    }
    {
	byte cc_bytes[2];
	cc_bytes[0] = (byte) ccode;
	cc_bytes[1] = ccode >> 8;
	put_string(s, cc_bytes, 1, cc_bytes[1] != 0);
    }
    do {
	static const byte ac_[] = { pxt_attr_ubyte, (pxaTextData), pxtText };
	put_bytes(s, ac_, sizeof(ac_));
    } while (0);
    return 0;
}

static int pclxl_beginpage(gx_device_vector * vdev)
{
    stream *s = vdev->strm; {
	static const byte page_header_1[] = { pxt_ubyte, (byte) (ePortraitOrientation), pxt_attr_ubyte, (pxaOrientation), };
	put_bytes(s, page_header_1, sizeof(page_header_1));
    }
    {
	static const struct {
	    pxeMediaSize_t ms;
	    float width, height;
	} media_sizes[] = { {
	eLetterPaper, (2550) * 1.0 / (300), (3300) * 1.0 / 300}, {
	eLegalPaper, (2550) * 1.0 / (300), (5300) * 1.0 / 300}, {
	eA4Paper, (2480) * 1.0 / (300), (3507) * 1.0 / 300}, {
	eExecPaper, (2175) * 1.0 / (300), (3150) * 1.0 / 300}, {
	eLedgerPaper, (3300) * 1.0 / (300), (5100) * 1.0 / 300}, {
	eA3Paper, (3507) * 1.0 / (300), (4960) * 1.0 / 300}, {
	eCOM10Envelope, (1237) * 1.0 / (300), (2850) * 1.0 / 300}, {
	eMonarchEnvelope, (1162) * 1.0 / (300), (2250) * 1.0 / 300}, {
	eC5Envelope, (1913) * 1.0 / (300), (2704) * 1.0 / 300}, {
	eDLEnvelope, (1299) * 1.0 / (300), (2598) * 1.0 / 300}, {
	eB5Envelope, (2078) * 1.0 / (300), (2952) * 1.0 / 300}, {
	pxeMediaSize_next}};
	float w = vdev->width / vdev->HWResolution[0], h = vdev->height / vdev->HWResolution[1];
	int i;
	pxeMediaSize_t size;
	for (i = (sizeof(media_sizes) / sizeof((media_sizes)[0])) - 2; i > 0; --i)
	    if (fabs(media_sizes[i].width - w) < 5.0 / 72 && fabs(media_sizes[i].height - h) < 5.0 / 72)
		break;
	size = media_sizes[i].ms;
	(put_ub(s, size), put_a(s, pxaMediaSize));
	if (size != ((gx_device_pclxl *) vdev)->media_size) {
	    static const byte page_header_2[] = { pxt_ubyte, (byte) (eAutoSelect), pxt_attr_ubyte, (pxaMediaSource) };
	    put_bytes(s, page_header_2, sizeof(page_header_2));
	    ((gx_device_pclxl *) vdev)->media_size = size;
	}
    }
    spputc(s, pxtBeginPage);
    return 0;
}

static int pclxl_setlinewidth(gx_device_vector * vdev, floatp width)
{
    stream *s = gdev_vector_stream(vdev);
    put_us(s, (uint) width);
    do {
	do {
	    static const byte ac_[] = { pxt_attr_ubyte, (pxaPenWidth), pxtSetPenWidth };
	    put_bytes(s, ac_, sizeof(ac_));
	} while (0);
	return 0;
    } while (0);
}

static int pclxl_setlinecap(gx_device_vector * vdev, gs_line_cap cap)
{
    stream *s = gdev_vector_stream(vdev);
    put_ub(s, (byte) cap);
    do {
	do {
	    static const byte ac_[] = { pxt_attr_ubyte, (pxaLineCapStyle), pxtSetLineCap };
	    put_bytes(s, ac_, sizeof(ac_));
	} while (0);
	return 0;
    } while (0);
}

static int pclxl_setlinejoin(gx_device_vector * vdev, gs_line_join join)
{
    stream *s = gdev_vector_stream(vdev);
    put_ub(s, (byte) join);
    do {
	do {
	    static const byte ac_[] = { pxt_attr_ubyte, (pxaLineJoinStyle), pxtSetLineJoin };
	    put_bytes(s, ac_, sizeof(ac_));
	} while (0);
	return 0;
    } while (0);
}

static int pclxl_setmiterlimit(gx_device_vector * vdev, floatp limit)
{
    stream *s = gdev_vector_stream(vdev);
    int i_limit = (int) (limit + 0.5);
    put_u(s, (((i_limit) > (1)) ? (i_limit) : (1)));
    do {
	do {
	    static const byte ac_[] = { pxt_attr_ubyte, (pxaMiterLength), pxtSetMiterLimit };
	    put_bytes(s, ac_, sizeof(ac_));
	} while (0);
	return 0;
    } while (0);
}

static int pclxl_setdash(gx_device_vector * vdev, const float *pattern, uint count, floatp offset)
{
    stream *s = gdev_vector_stream(vdev);
    if (count == 0) {
	static const byte nac_[] = { pxt_ubyte, (byte) (0), pxt_attr_ubyte, (pxaSolidLine) };
	put_bytes(s, nac_, sizeof(nac_));
    } else if (count > 255)
	return ((-13));
    else {
	uint i;
	spputc(s, pxt_real32_array);
	put_ub(s, count);
	for (i = 0; i < count; ++i)
	    put_r(s, pattern[i]);
	put_a(s, pxaLineDashStyle);
	if (offset != 0) {
	    put_rl(s, offset);
	    put_a(s, pxaDashOffset);
	}
    }
    spputc(s, pxtSetLineDash);
    return 0;
}

static int pclxl_setlogop(gx_device_vector * vdev, gs_logical_operation_t lop, gs_logical_operation_t diff)
{
    stream *s = gdev_vector_stream(vdev);
    if (diff & 0x100) {
	put_ub(s, (lop & 0x100 ? 1 : 0));
	do {
	    static const byte ac_[] = { pxt_attr_ubyte, (pxaTxMode), pxtSetSourceTxMode };
	    put_bytes(s, ac_, sizeof(ac_));
	} while (0);
    }
    if (diff & 0x200) {
	put_ub(s, (lop & 0x200 ? 1 : 0));
	do {
	    static const byte ac_[] = { pxt_attr_ubyte, (pxaTxMode), pxtSetPaintTxMode };
	    put_bytes(s, ac_, sizeof(ac_));
	} while (0);
    }
    if (((gs_rop3_t) ((diff) & 0xff))) {
	put_ub(s, ((gs_rop3_t) ((lop) & 0xff)));
	do {
	    static const byte ac_[] = { pxt_attr_ubyte, (pxaROP3), pxtSetROP };
	    put_bytes(s, ac_, sizeof(ac_));
	} while (0);
    }
    return 0;
}

static int pclxl_setfillcolor(gx_device_vector * vdev, const gx_drawing_color * pdc)
{
    return pclxl_set_color(((gx_device_pclxl *) vdev), pdc, pxaNullBrush, pxtSetBrushSource);
}

static int pclxl_setstrokecolor(gx_device_vector * vdev, const gx_drawing_color * pdc)
{
    return pclxl_set_color(((gx_device_pclxl *) vdev), pdc, pxaNullPen, pxtSetPenSource);
}

static int pclxl_dorect(gx_device_vector * vdev, fixed x0, fixed y0, fixed x1, fixed y1, gx_path_type_t type)
{
    stream *s = gdev_vector_stream(vdev);
    if (type & (gx_path_type_fill | gx_path_type_stroke)) {
	pclxl_set_paints(((gx_device_pclxl *) vdev), type);
	put_usq_fixed(s, x0, y0, x1, y1);
	do {
	    static const byte ac_[] = { pxt_attr_ubyte, (pxaBoundingBox), pxtRectangle };
	    put_bytes(s, ac_, sizeof(ac_));
	} while (0);
    }
    if (type & gx_path_type_clip) {
	static const byte cr_[] = { pxt_attr_ubyte, (pxaBoundingBox), pxt_ubyte, (byte) (eInterior), pxt_attr_ubyte, (pxaClipRegion), pxtSetClipRectangle };
	put_usq_fixed(s, x0, y0, x1, y1);
	put_bytes(s, cr_, sizeof(cr_));
    }
    return 0;
}

static int pclxl_beginpath(gx_device_vector * vdev, gx_path_type_t type)
{
    stream *s = gdev_vector_stream(vdev);
    spputc(s, pxtNewPath);
    ((gx_device_pclxl *) vdev)->points.type = points_none;
    ((gx_device_pclxl *) vdev)->points.count = 0;
    return 0;
}

static int pclxl_moveto(gx_device_vector * vdev, floatp x0, floatp y0, floatp x, floatp y, bool first)
{
    int code = pclxl_flush_points(((gx_device_pclxl *) vdev));
    if (code < 0)
	return code;
    return pclxl_set_cursor(((gx_device_pclxl *) vdev), ((gx_device_pclxl *) vdev)->points.current.x = (int) x, ((gx_device_pclxl *) vdev)->points.current.y = (int) y);
} static int pclxl_lineto(gx_device_vector * vdev, floatp x0, floatp y0, floatp x, floatp y)
{
    if (((gx_device_pclxl *) vdev)->points.type != points_lines || ((gx_device_pclxl *) vdev)->points.count >= 100) {
	if (((gx_device_pclxl *) vdev)->points.type != points_none) {
	    int code = pclxl_flush_points(((gx_device_pclxl *) vdev));
	    if (code < 0)
		return code;
	}
	((gx_device_pclxl *) vdev)->points.current.x = (int) x0;
	((gx_device_pclxl *) vdev)->points.current.y = (int) y0;
	((gx_device_pclxl *) vdev)->points.type = points_lines;
    }
    {
	gs_int_point *ppt = &((gx_device_pclxl *) vdev)->points.data[((gx_device_pclxl *) vdev)->points.count++];
	ppt->x = (int) x, ppt->y = (int) y;
    } return 0;
}

static int pclxl_curveto(gx_device_vector * vdev, floatp x0, floatp y0, floatp x1, floatp y1, floatp x2, floatp y2, floatp x3, floatp y3)
{
    if (((gx_device_pclxl *) vdev)->points.type != points_curves || ((gx_device_pclxl *) vdev)->points.count >= 100 - 2) {
	if (((gx_device_pclxl *) vdev)->points.type != points_none) {
	    int code = pclxl_flush_points(((gx_device_pclxl *) vdev));
	    if (code < 0)
		return code;
	}
	((gx_device_pclxl *) vdev)->points.current.x = (int) x0;
	((gx_device_pclxl *) vdev)->points.current.y = (int) y0;
	((gx_device_pclxl *) vdev)->points.type = points_curves;
    }
    {
	gs_int_point *ppt = &((gx_device_pclxl *) vdev)->points.data[((gx_device_pclxl *) vdev)->points.count];
	ppt->x = (int) x1, ppt->y = (int) y1, ++ppt;
	ppt->x = (int) x2, ppt->y = (int) y2, ++ppt;
	ppt->x = (int) x3, ppt->y = (int) y3;
    } ((gx_device_pclxl *) vdev)->points.count += 3;
    return 0;
}

static int pclxl_closepath(gx_device_vector * vdev, floatp x, floatp y, floatp x_start, floatp y_start)
{
    stream *s = gdev_vector_stream(vdev);
    int code = pclxl_flush_points(((gx_device_pclxl *) vdev));
    if (code < 0)
	return code;
    spputc(s, pxtCloseSubPath);
    ((gx_device_pclxl *) vdev)->points.current.x = (int) x_start;
    ((gx_device_pclxl *) vdev)->points.current.y = (int) y_start;
    return 0;
}

static int pclxl_endpath(gx_device_vector * vdev, gx_path_type_t type)
{
    stream *s = gdev_vector_stream(vdev);
    int code = pclxl_flush_points(((gx_device_pclxl *) vdev));
    gx_path_type_t rule = type & gx_path_type_rule;
    if (code < 0)
	return code;
    if (type & (gx_path_type_fill | gx_path_type_stroke)) {
	pclxl_set_paints(((gx_device_pclxl *) vdev), type);
	spputc(s, pxtPaintPath);
    }
    if (type & gx_path_type_clip) {
	static const byte scr_[] = { pxt_ubyte, (byte) (eInterior), pxt_attr_ubyte, (pxaClipRegion), pxtSetClipReplace };
	if (rule != ((gx_device_pclxl *) vdev)->clip_rule) {
	    put_ub(s, (rule == gx_path_type_even_odd ? eEvenOdd : eNonZeroWinding));
	    do {
		static const byte ac_[] = { pxt_attr_ubyte, (pxaClipMode), pxtSetClipMode };
		put_bytes(s, ac_, sizeof(ac_));
	    } while (0);
	    ((gx_device_pclxl *) vdev)->clip_rule = rule;
	}
	put_bytes(s, scr_, sizeof(scr_));
    }
    return 0;
}
static const gx_device_vector_procs pclxl_vector_procs = { pclxl_beginpage, pclxl_setlinewidth, pclxl_setlinecap, pclxl_setlinejoin, pclxl_setmiterlimit, pclxl_setdash, gdev_vector_setflat, pclxl_setlogop, pclxl_setfillcolor, pclxl_setstrokecolor, gdev_vector_dopath, pclxl_dorect, pclxl_beginpath, pclxl_moveto, pclxl_lineto, pclxl_curveto, pclxl_closepath, pclxl_endpath };

static int pclxl_open_device(gx_device * dev)
{
    int code;
    static const char *file_header = "\033%-12345X@PJL ENTER LANGUAGE = PCLXL\n) HP-PCL XL;1;1;Comment Copyright Aladdin Enterprises 1996\000\n";
    static const byte stream_header[] = { pxt_attr_ubyte, (pxaUnitsPerMeasure), pxt_ubyte, (byte) (0), pxt_attr_ubyte, (pxaMeasure), pxt_ubyte, (byte) (eBackChAndErrPage), pxt_attr_ubyte, (pxaErrorReport), pxtBeginSession, pxt_ubyte, (byte) (0), pxt_attr_ubyte, (pxaSourceType), pxt_ubyte, (byte) (eBinaryLowByteFirst), pxt_attr_ubyte, (pxaDataOrg), pxtOpenDataSource };
    ((gx_device_vector *) dev)->v_memory = dev->memory;
    ((gx_device_vector *) dev)->vec_procs = &pclxl_vector_procs;
    code = gdev_vector_open_file_bbox(((gx_device_vector *) dev), 512, ((bool) 0));
    if (code < 0)
	return code;
    pclxl_page_init(((gx_device_pclxl *) dev)); {
	stream *s = ((gx_device_vector *) dev)->strm;
	put_bytes(s, (const byte *) file_header, strlen(file_header) + 2);
	put_usp(s, (uint) (dev->HWResolution[0] + 0.5), (uint) (dev->HWResolution[1] + 0.5));
	put_bytes(s, stream_header, sizeof(stream_header));
    }
    ((gx_device_pclxl *) dev)->media_size = pxeMediaSize_next;
    memset(&((gx_device_pclxl *) dev)->chars, 0, sizeof(((gx_device_pclxl *) dev)->chars));
    ((gx_device_pclxl *) dev)->chars.next_in = ((gx_device_pclxl *) dev)->chars.next_out = 2;
    return 0;
}

static int pclxl_output_page(gx_device * dev, int num_copies, int flush)
{
    if (((gx_device_pclxl *) dev)->in_page) {
	stream *s = ((gx_device_vector *) dev)->strm;
	spputc(s, pxtEndPage);
	(*(s)->procs.flush) (s);
	pclxl_page_init(((gx_device_pclxl *) dev));
    }
    return 0;
}

static int pclxl_close_device(gx_device * dev)
{
    FILE *file = ((gx_device_vector *) dev)->file;
    if (((gx_device_pclxl *) dev)->in_page)
	fputc(pxtEndPage, file); {
	static const byte file_trailer[] = { pxtCloseDataSource, pxtEndSession, 033, '%', '-', '1', '2', '3', '4', '5', 'X' };
	fwrite(file_trailer, 1, sizeof(file_trailer), file);
	}
	gdev_vector_close_file(((gx_device_vector *) dev));
	return 0;
}
static const byte eBit_values[] = { 0, e1Bit, 0, 0, e4Bit, 0, 0, 0, e8Bit };

static int pclxl_copy_mono(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int w, int h, gx_color_index zero, gx_color_index one)
{
    int code;
    stream *s;
    gx_color_index color0 = zero, color1 = one;
    gs_logical_operation_t lop;
    byte palette[2 * 3];
    int palette_size;
    pxeColorSpace_t color_space;
    if ((x | y) < 0) {
	if (x < 0)
	    w += x, data_x -= x, x = 0;
	if (y < 0)
	    h += y, data -= y * raster, id = 0L, y = 0;
    }
    if (x > dev->width - w)
	w = dev->width - x;
    if (y > dev->height - h)
	h = dev->height - y;
    if (w <= 0 || h <= 0)
	return 0;
    code = gdev_vector_update_clip_path(((gx_device_vector *) dev), ((void *) 0));
    if (code < 0)
	return code;
    pclxl_set_cursor(((gx_device_pclxl *) dev), x, y);
    if (id != 0L && zero == ((unsigned long) (-1)) && one != ((unsigned long) (-1)) && data_x == 0) {
	gx_drawing_color dcolor;
	((&dcolor)->colors.pure = (one), (&dcolor)->type = gx_dc_type_pure);
	pclxl_setfillcolor(((gx_device_vector *) ((gx_device_pclxl *) dev)), &dcolor);
	if (pclxl_copy_text_char(((gx_device_pclxl *) dev), data, raster, id, w, h) >= 0)
	    return 0;
    }
    if (zero == ((unsigned long) (-1))) {
	if (one == ((unsigned long) (-1)))
	    return 0;
	lop = rop3_S | 0x100;
	color0 = (1 << dev->color_info.depth) - 1;
    } else if (one == ((unsigned long) (-1))) {
	lop = rop3_S | 0x100;
	color1 = (1 << dev->color_info.depth) - 1;
    } else {
	lop = rop3_S;
    }
    if (dev->color_info.num_components == 1 || (((color0) >> 8 == ((color0) & 0xffff)) && ((color1) >> 8 == ((color1) & 0xffff)))) {
	palette[0] = (byte) color0;
	palette[1] = (byte) color1;
	palette_size = 2;
	color_space = eGray;
    } else {
	palette[0] = (byte) (color0 >> 16);
	palette[1] = (byte) (color0 >> 8);
	palette[2] = (byte) color0;
	palette[3] = (byte) (color1 >> 16);
	palette[4] = (byte) (color1 >> 8);
	palette[5] = (byte) color1;
	palette_size = 6;
	color_space = eRGB;
    }
    code = gdev_vector_update_log_op(((gx_device_vector *) dev), lop);
    if (code < 0)
	return 0;
    pclxl_set_color_palette(((gx_device_pclxl *) dev), color_space, palette, palette_size);
    s = gdev_vector_stream(((gx_device_vector *) ((gx_device_pclxl *) dev))); {
	static const byte mi_[] = { pxt_ubyte, (byte) (e1Bit), pxt_attr_ubyte, (pxaColorDepth), pxt_ubyte, (byte) (eIndexedPixel), pxt_attr_ubyte, (pxaColorMapping) };
	put_bytes(s, mi_, sizeof(mi_));
    }
    pclxl_write_begin_image(((gx_device_pclxl *) dev), w, h, w, h);
    pclxl_write_image_data(((gx_device_pclxl *) dev), data, data_x, raster, w, 0, h);
    pclxl_write_end_image(((gx_device_pclxl *) dev));
    return 0;
}

static int pclxl_copy_color(gx_device * dev, const byte * base, int sourcex, int raster, gx_bitmap_id id, int x, int y, int w, int h)
{
    stream *s;
    uint source_bit;
    int code;
    if ((x | y) < 0) {
	if (x < 0)
	    w += x, sourcex -= x, x = 0;
	if (y < 0)
	    h += y, base -= y * raster, id = 0L, y = 0;
    }
    if (x > dev->width - w)
	w = dev->width - x;
    if (y > dev->height - h)
	h = dev->height - y;
    if (w <= 0 || h <= 0)
	return 0;
    code = gdev_vector_update_clip_path(((gx_device_vector *) dev), ((void *) 0));
    if (code < 0)
	return code;
    source_bit = sourcex * dev->color_info.depth;
    if ((source_bit & 7) != 0)
	return gx_default_copy_color(dev, base, sourcex, raster, id, x, y, w, h);
    gdev_vector_update_log_op(((gx_device_vector *) dev), rop3_S);
    pclxl_set_cursor(((gx_device_pclxl *) dev), x, y);
    s = gdev_vector_stream(((gx_device_vector *) ((gx_device_pclxl *) dev))); {
	static const byte ci_[] = { pxt_attr_ubyte, (pxaColorDepth), pxt_ubyte, (byte) (eDirectPixel), pxt_attr_ubyte, (pxaColorMapping) };
	put_ub(s, eBit_values[dev->color_info.depth / dev->color_info.num_components]);
	put_bytes(s, ci_, sizeof(ci_));
    }
    pclxl_write_begin_image(((gx_device_pclxl *) dev), w, h, w, h);
    pclxl_write_image_data(((gx_device_pclxl *) dev), base, source_bit, raster, w * dev->color_info.depth, 0, h);
    pclxl_write_end_image(((gx_device_pclxl *) dev));
    return 0;
}

static int pclxl_fill_mask(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int w, int h, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath)
{
    int code;
    stream *s;
    if ((x | y) < 0) {
	if (x < 0)
	    w += x, data_x -= x, x = 0;
	if (y < 0)
	    h += y, data -= y * raster, id = 0L, y = 0;
    }
    if (x > dev->width - w)
	w = dev->width - x;
    if (y > dev->height - h)
	h = dev->height - y;
    if (w <= 0 || h <= 0)
	return 0;
    if ((data_x & 7) != 0 || !((pdcolor)->type == gx_dc_type_pure) || depth > 1)
	return gx_default_fill_mask(dev, data, data_x, raster, id, x, y, w, h, pdcolor, depth, lop, pcpath);
    code = gdev_vector_update_clip_path(((gx_device_vector *) dev), pcpath);
    if (code < 0)
	return code;
    code = gdev_vector_update_fill_color(((gx_device_vector *) dev), pdcolor);
    if (code < 0)
	return 0;
    pclxl_set_cursor(((gx_device_pclxl *) dev), x, y);
    if (id != 0L && data_x == 0) {
	code = gdev_vector_update_log_op(((gx_device_vector *) dev), lop);
	if (code < 0)
	    return 0;
	if (pclxl_copy_text_char(((gx_device_pclxl *) dev), data, raster, id, w, h) >= 0)
	    return 0;
    }
    code = gdev_vector_update_log_op(((gx_device_vector *) dev), lop | rop3_S | 0x100);
    if (code < 0)
	return 0;
    pclxl_set_color_palette(((gx_device_pclxl *) dev), eGray, (const byte *) "\377\000", 2);
    s = gdev_vector_stream(((gx_device_vector *) ((gx_device_pclxl *) dev))); {
	static const byte mi_[] = { pxt_ubyte, (byte) (e1Bit), pxt_attr_ubyte, (pxaColorDepth), pxt_ubyte, (byte) (eIndexedPixel), pxt_attr_ubyte, (pxaColorMapping) };
	put_bytes(s, mi_, sizeof(mi_));
    }
    pclxl_write_begin_image(((gx_device_pclxl *) dev), w, h, w, h);
    pclxl_write_image_data(((gx_device_pclxl *) dev), data, data_x, raster, w, 0, h);
    pclxl_write_end_image(((gx_device_pclxl *) dev));
    return 0;
}

static int pclxl_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop)
{
    return 0;
}

typedef struct pclxl_image_enum_s {
    gs_memory_t *memory;
    void *default_info;
    uint bits_per_row;
    int bits_per_pixel;
    int y, h;
} pclxl_image_enum_t;
static gs_ptr_type_t pclxl_image_enum_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((pclxl_image_enum_t *) vptr)->default_info);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void pclxl_image_enum_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{;
    ((pclxl_image_enum_t *) vptr)->default_info = gs_reloc_struct_ptr((const void *) ((const pclxl_image_enum_t *) vptr)->default_info, gcst);
} static const gs_memory_struct_type_t st_pclxl_image_enum = { sizeof(pclxl_image_enum_t), "pclxl_image_enum_t", 0, 0, pclxl_image_enum_enum_ptrs, pclxl_image_enum_reloc_ptrs, 0 };

static int pclxl_begin_image(gx_device * dev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * mem, void **pinfo)
{
    const gs_color_space *pcs = pim->ColorSpace;
    pclxl_image_enum_t *pie;
    gs_matrix mat;
    int num_components;
    int bits_per_pixel;
    pie = (pclxl_image_enum_t *) (*(mem)->procs.alloc_struct) (mem, &st_pclxl_image_enum, "pclxl_begin_image");
    if (pie == 0)
	return ((-25));
    pie->memory = mem;
    *pinfo = pie;
    if (pim->ImageMask)
	bits_per_pixel = num_components = 1;
    else
	num_components = gs_color_space_num_components(pcs), bits_per_pixel = pim->BitsPerComponent * num_components;
    gs_matrix_invert(&pim->ImageMatrix, &mat);
    gs_matrix_multiply(&mat, &(*(const gs_matrix *) &(pis)->ctm), &mat);
    if (mat.xx <= 0 || mat.xy != 0 || mat.yx != 0 || mat.yy <= 0 || (pim->ImageMask ? (!((pdcolor)->type == gx_dc_type_pure) || pim->CombineWithColor) : (!pclxl_can_handle_color_space(pim->ColorSpace) || (bits_per_pixel != 1 && bits_per_pixel != 4 && bits_per_pixel != 8))) || format != gs_image_format_chunky || prect) {
	int code = gx_default_begin_image(dev, pis, pim, format, prect, pdcolor, pcpath, mem, &pie->default_info);
	if (code < 0)
	    (*(mem)->procs.free_object) (mem, pie, "pclxl_begin_image");
	return code;
    }
    pie->default_info = 0; {
	stream *s = gdev_vector_stream(((gx_device_vector *) ((gx_device_pclxl *) dev)));
	gs_logical_operation_t lop = pis->log_op;
	int code = gdev_vector_update_log_op(((gx_device_vector *) dev), (pim->ImageMask || pim->CombineWithColor ? lop : ((((lop) & (rop3_1 - rop3_T)) << 4) | ((lop) & ~rop3_T))));
	int bpc = pim->BitsPerComponent;
	int sample_max = (1 << bpc) - 1;
	byte palette[256 * 3];
	int i;
	if (code < 0)
	    return code;
	pie->bits_per_pixel = bits_per_pixel;
	pie->bits_per_row = bits_per_pixel * pim->Width;
	pie->y = 0;
	pie->h = pim->Height;
	pclxl_set_cursor(((gx_device_pclxl *) dev), (int) ((mat.tx + 0.5) / ((gx_device_pclxl *) dev)->scale.x), (int) ((mat.ty + 0.5) / ((gx_device_pclxl *) dev)->scale.y));
	for (i = 0; i < 1 << bits_per_pixel; ++i) {
	    gs_client_color cc;
	    gx_device_color devc;
	    int cv = i, j;
	    for (j = num_components - 1; j >= 0; cv >>= bpc, --j)
		cc.paint.values[j] = pim->Decode[j * 2] + (cv & sample_max) * (pim->Decode[j * 2 + 1] - pim->Decode[j * 2]) / sample_max;
	    (*pcs->type->remap_color) (&cc, pcs, &devc, pis, dev, gs_color_select_source);
	    if (!((&devc)->type == gx_dc_type_pure))
		return ((-100));
	    if (dev->color_info.num_components == 1)
		palette[i] = (byte) ((&devc)->colors.pure);
	    else {
		gx_color_index ci = ((&devc)->colors.pure);
		byte *ppal = &palette[i * 3];
		ppal[0] = (byte) (ci >> 16);
		ppal[1] = (byte) (ci >> 8);
		ppal[2] = (byte) ci;
	    }
	}
	if (dev->color_info.num_components == 1)
	    pclxl_set_color_palette(((gx_device_pclxl *) dev), eGray, palette, 1 << bits_per_pixel);
	else
	    pclxl_set_color_palette(((gx_device_pclxl *) dev), eRGB, palette, 3 << bits_per_pixel); {
	    static const byte ii_[] = { pxt_attr_ubyte, (pxaColorDepth), pxt_ubyte, (byte) (eIndexedPixel), pxt_attr_ubyte, (pxaColorMapping) };
	    put_ub(s, eBit_values[bits_per_pixel]);
	    put_bytes(s, ii_, sizeof(ii_));
	    }
	    pclxl_write_begin_image(((gx_device_pclxl *) dev), pim->Width, pim->Height, (uint) (pim->Width * mat.xx), (uint) (pim->Height * mat.yy));
    }
    return 0;
}

static int pclxl_image_data(gx_device * dev, void *info, const byte ** planes, int data_x, uint raster, int height)
{
    pclxl_image_enum_t *pie = info;
    if (pie->default_info)
	return gx_default_image_data(dev, pie->default_info, planes, data_x, raster, height);
    if (height > pie->h - pie->y)
	height = pie->h - pie->y;
    pclxl_write_image_data(((gx_device_pclxl *) dev), planes[0], data_x * pie->bits_per_pixel, raster, pie->bits_per_row, pie->y, height);
    return (pie->y += height) >= pie->h;
}

static int pclxl_end_image(gx_device * dev, void *info, bool draw_last)
{
    pclxl_image_enum_t *pie = info;
    int code = 0;
    if (pie->default_info)
	code = gx_default_end_image(dev, pie->default_info, draw_last);
    else {
	if (pie->h > pie->y) {
	    uint bytes_per_row = (pie->bits_per_row + 7) >> 3;
	    byte *row = (*(pie->memory)->procs.alloc_bytes) (pie->memory, bytes_per_row, "pclxl_end_image(fill)");
	    if (row == 0)
		return ((-25));
	    memset(row, 0, bytes_per_row);
	    for (; pie->y < pie->h; pie->y++)
		pclxl_write_image_data(((gx_device_pclxl *) dev), row, 0, bytes_per_row, pie->bits_per_row, pie->y, 1);
	    (*(pie->memory)->procs.free_object) (pie->memory, row, "pclxl_end_image(fill)");
	}
	pclxl_write_end_image(((gx_device_pclxl *) dev));
    }
    (*(pie->memory)->procs.free_object) (pie->memory, pie, "pclxl_end_image");
    return code;
}
