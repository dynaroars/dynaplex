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
struct gs_matrix_s {
    float xx, xy, yx, yy, tx, ty;
};
typedef struct gs_matrix_s gs_matrix;
void gs_make_identity(gs_matrix *);
int gs_make_translation(floatp, floatp, gs_matrix *), gs_make_scaling(floatp, floatp, gs_matrix *), gs_make_rotation(floatp, gs_matrix *);
int gs_matrix_multiply(const gs_matrix *, const gs_matrix *, gs_matrix *), gs_matrix_invert(const gs_matrix *, gs_matrix *), gs_matrix_translate(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_scale(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_rotate(const gs_matrix *, floatp, gs_matrix *);
int gs_point_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_point_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_points_bbox(const gs_point[4], gs_rect *), gs_bbox_transform_only(const gs_rect *, const gs_matrix *, gs_point[4]), gs_bbox_transform(const gs_rect *, const gs_matrix *, gs_rect *), gs_bbox_transform_inverse(const gs_rect *, const gs_matrix *, gs_rect *);
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
typedef struct gs_pattern_instance_s gs_pattern_instance;
typedef struct gs_paint_color_s {
    float values[4];
} gs_paint_color;
typedef struct gs_client_color_s {
    gs_paint_color paint;
    gs_pattern_instance *pattern;
} gs_client_color;
extern const gs_memory_struct_type_t st_client_color;
typedef enum { gs_color_select_all = -1, gs_color_select_texture = 0, gs_color_select_source = 1 } gs_color_select_t;
typedef short frac;
typedef short signed_frac;
typedef struct gx_device_color_s gx_device_color;
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
typedef struct gs_uid_s gs_uid;
struct gs_uid_s {
    long id;
    long *xvalues;
};
bool uid_equal(const gs_uid *, const gs_uid *);
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
const gs_color_space *gs_currentcolorspace(const gs_state *);
int gs_setcolorspace(gs_state *, gs_color_space *);
const gs_client_color *gs_currentcolor(const gs_state *);
int gs_setcolor(gs_state *, const gs_client_color *);
typedef struct gs_cie_render_s gs_cie_render;
const gs_cie_render *gs_currentcolorrendering(const gs_state *);

//complexity is O(n) inferred by loopus
int gs_setcolorrendering(gs_state *, gs_cie_render *);
typedef struct gs_client_pattern_s {
    gs_uid uid;
    int PaintType;
    int TilingType;
    gs_rect BBox;
    float XStep;
    float YStep;
    int (*PaintProc) (const gs_client_color *, gs_state *);
    void *client_data;
} gs_client_pattern;
int gs_makepattern(gs_client_color *, const gs_client_pattern *, const gs_matrix *, gs_state *, gs_memory_t *);
int gs_setpattern(gs_state *, const gs_client_color *);
int gs_setpatternspace(gs_state *);
const gs_client_pattern *gs_getpattern(const gs_client_color *);
int gs_makebitmappattern(gs_client_color *, const gx_tile_bitmap *, bool, gs_state *, gs_memory_t *);
typedef struct rc_header_s rc_header;
struct rc_header_s {
    long ref_count;
    gs_memory_t *memory;
    void (*free) (gs_memory_t *, void *, client_name_t);
};
void rc_free_struct_only(gs_memory_t *, void *, client_name_t);
typedef long fixed;
typedef ulong ufixed;
typedef struct gs_fixed_point_s {
    fixed x, y;
} gs_fixed_point;
typedef struct gs_fixed_rect_s {
    gs_fixed_point p, q;
} gs_fixed_rect;
typedef struct gx_color_lookup_table_s {
    int n;
    int dims[4];
    int m;
    const gs_const_string *table;
} gx_color_lookup_table;
void gx_color_interpolate_nearest(const fixed * pi, const gx_color_lookup_table * pclt, frac * pv);
void gx_color_interpolate_linear(const fixed * pi, const gx_color_lookup_table * pclt, frac * pv);
typedef float cie_cached_value;
typedef struct gs_vector3_s {
    float u, v, w;
} gs_vector3;
typedef struct gs_matrix3_s {
    gs_vector3 cu, cv, cw;
    bool is_identity;
} gs_matrix3;
typedef struct gs_range_s {
    float rmin, rmax;
} gs_range;
typedef struct gs_range3_s {
    gs_range ranges[3];
} gs_range3;
typedef struct gs_range4_s {
    gs_range ranges[4];
} gs_range4;
typedef struct gs_cie_common_s gs_cie_common;
typedef struct gs_cie_abc_s gs_cie_abc_common;
typedef struct gs_cie_wbsd_s gs_cie_wbsd;
typedef float (*gs_cie_a_proc) (floatp, const gs_cie_a *);
typedef float (*gs_cie_abc_proc) (floatp, const gs_cie_abc *);
typedef struct gs_cie_abc_proc3_s {
    gs_cie_abc_proc procs[3];
} gs_cie_abc_proc3;
typedef float (*gs_cie_def_proc) (floatp, const gs_cie_def *);
typedef struct gs_cie_def_proc3_s {
    gs_cie_def_proc procs[3];
} gs_cie_def_proc3;
typedef float (*gs_cie_defg_proc) (floatp, const gs_cie_defg *);
typedef struct gs_cie_defg_proc4_s {
    gs_cie_defg_proc procs[4];
} gs_cie_defg_proc4;
typedef float (*gs_cie_common_proc) (floatp, const gs_cie_common *);
typedef struct gs_cie_common_proc3_s {
    gs_cie_common_proc procs[3];
} gs_cie_common_proc3;
typedef float (*gs_cie_render_proc) (floatp, const gs_cie_render *);
typedef struct gs_cie_render_proc3_s {
    gs_cie_render_proc procs[3];
} gs_cie_render_proc3;
typedef float (*gs_cie_transform_proc) (floatp, const gs_cie_wbsd *, const gs_cie_render *);
typedef struct gs_cie_transform_proc3_s {
    gs_cie_transform_proc procs[3];
} gs_cie_transform_proc3;
typedef frac(*gs_cie_render_table_proc) (byte, const gs_cie_render *);
typedef struct gs_cie_render_table_procs_s {
    gs_cie_render_table_proc procs[4];
} gs_cie_render_table_procs;
typedef struct gs_cie_wb_s {
    gs_vector3 WhitePoint;
    gs_vector3 BlackPoint;
} gs_cie_wb;
typedef struct cie_cache_params_s {
    bool is_identity;
    float base, factor;
} cie_cache_params;
typedef struct gx_cie_cache_s {
    cie_cache_params params;
    float values[(1 << 9)];
} cie_cache_floats;
typedef union gx_cie_scalar_cache_s {
    cie_cache_floats floats;
    struct _scf {
	cie_cache_params params;
	frac values[(1 << 9)];
    } fracs;
    struct _sci {
	cie_cache_params params;
	int values[(1 << 9)];
    } ints;
} gx_cie_scalar_cache;
typedef struct cie_cached_vector3_s {
    cie_cached_value u, v, w;
} cie_cached_vector3;
typedef struct cie_vector_cache_params_s {
    bool is_identity;
    cie_cached_value base, factor, limit;
} cie_vector_cache_params;
typedef struct cie_cache_vectors_s {
    cie_vector_cache_params params;
    cie_cached_vector3 values[(1 << 9)];
} cie_cache_vectors;
typedef union gx_cie_vector_cache_s {
    cie_cache_floats floats;
    cie_cache_vectors vecs;
} gx_cie_vector_cache;
struct gs_cie_common_s {
    gs_range3 RangeLMN;
    gs_cie_common_proc3 DecodeLMN;
    gs_matrix3 MatrixLMN;
    gs_cie_wb points;
    struct {
	gx_cie_scalar_cache DecodeLMN[3];
    } caches;
};
struct gs_cie_a_s {
    gs_cie_common common;
    rc_header rc;
    gs_range RangeA;
    gs_cie_a_proc DecodeA;
    gs_vector3 MatrixA;
    struct {
	gx_cie_vector_cache DecodeA;
    } caches;
};
struct gs_cie_abc_s {
    gs_cie_common common;
    rc_header rc;
    gs_range3 RangeABC;
    gs_cie_abc_proc3 DecodeABC;
    gs_matrix3 MatrixABC;
    struct {
	bool skipABC;
	gx_cie_vector_cache DecodeABC[3];
    } caches;
};
struct gs_cie_def_s {
    gs_cie_abc_common abc;
    rc_header rc;
    gs_range3 RangeDEF;
    gs_cie_def_proc3 DecodeDEF;
    gs_range3 RangeHIJ;
    gx_color_lookup_table Table;
    struct {
	gx_cie_scalar_cache DecodeDEF[3];
    } caches;
};
struct gs_cie_defg_s {
    gs_cie_abc_common abc;
    rc_header rc;
    gs_range4 RangeDEFG;
    gs_cie_defg_proc4 DecodeDEFG;
    gs_range4 RangeHIJK;
    gx_color_lookup_table Table;
    struct {
	gx_cie_scalar_cache DecodeDEFG[4];
    } caches;
};
extern const gs_range3 Range3_default;
extern const gs_range4 Range4_default;
extern const gs_cie_defg_proc4 DecodeDEFG_default;
extern const gs_cie_def_proc3 DecodeDEF_default;
extern const gs_cie_abc_proc3 DecodeABC_default;
extern const gs_cie_common_proc3 DecodeLMN_default;
extern const gs_matrix3 Matrix3_default;
extern const gs_range RangeA_default;
extern const gs_cie_a_proc DecodeA_default;
extern const gs_vector3 MatrixA_default;
extern const gs_vector3 BlackPoint_default;
extern const gs_cie_render_proc3 Encode_default;
extern const gs_cie_transform_proc3 TransformPQR_default;
extern const gs_cie_render_table_procs RenderTableT_default;
struct gs_cie_wbsd_s {
    struct {
	gs_vector3 xyz, pqr;
    } ws, bs, wd, bd;
};
struct gs_cie_render_s {
    rc_header rc;
    gs_cie_wb points;
    gs_matrix3 MatrixPQR;
    gs_range3 RangePQR;
    gs_cie_transform_proc3 TransformPQR;
    gs_matrix3 MatrixLMN;
    gs_cie_render_proc3 EncodeLMN;
    gs_range3 RangeLMN;
    gs_matrix3 MatrixABC;
    gs_cie_render_proc3 EncodeABC;
    gs_range3 RangeABC;
    struct {
	gx_color_lookup_table lookup;
	gs_cie_render_table_procs T;
    } RenderTable;
    gs_range3 DomainLMN;
    gs_range3 DomainABC;
    gs_matrix3 MatrixABCEncode;
    cie_cached_value EncodeABC_base[3];
    gs_matrix3 MatrixPQR_inverse_LMN;
    gs_vector3 wdpqr, bdpqr;
    struct {
	gx_cie_vector_cache EncodeLMN[3];
	gx_cie_scalar_cache EncodeABC[3];
	gx_cie_scalar_cache RenderTableT[4];
	bool RenderTableT_is_identity;
    } caches;
};
extern const gs_memory_struct_type_t st_const_string_element;
typedef struct gx_cie_joint_caches_s {
    rc_header rc;
    bool skipLMN;
    gx_cie_vector_cache DecodeLMN[3];
    gs_cie_wbsd points_sd;
    gs_matrix3 MatrixLMN_PQR;
    bool skipPQR;
    gx_cie_vector_cache TransformPQR[3];
} gx_cie_joint_caches;
typedef struct gs_for_loop_params_s {
    float init, step, limit;
} gs_for_loop_params;
void gs_cie_cache_init(cie_cache_params *, gs_for_loop_params *, const gs_range *, client_name_t);
void gs_cie_cache_to_fracs(gx_cie_scalar_cache *);
void gs_cie_abc_complete(gs_cie_abc *);
void gs_cie_a_complete(gs_cie_a *);
int gs_cie_render_init(gs_cie_render *);
int gs_cie_render_complete(gs_cie_render *);
gx_cie_joint_caches *gx_currentciecaches(gs_state *);
const gs_cie_common *gs_cie_cs_common(gs_state *);
void gs_cie_cs_complete(gs_state *, bool);
int imod(int m, int n);
int igcd(int x, int y);
typedef struct gx_ht_tile_s gx_ht_tile;
struct gx_ht_tile_s {
    gx_strip_bitmap tiles;
    int level;
    uint index;
};
typedef unsigned long gx_color_index;
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
typedef struct gx_transfer_map_s gx_transfer_map;
typedef float (*gs_mapping_proc) (floatp, const gx_transfer_map *);
struct gx_transfer_map_s {
    rc_header rc;
    gs_mapping_proc proc;
    gs_id id;
    frac values[(1 << 8)];
};
extern const gs_memory_struct_type_t st_transfer_map;
frac gx_color_frac_map(frac, const frac *);
float gs_mapped_transfer(floatp, const gx_transfer_map *);
struct gx_color_map_procs_s {
    void (*map_gray) (frac, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
    void (*map_rgb) (frac, frac, frac, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
    void (*map_cmyk) (frac, frac, frac, frac, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
};
typedef struct gx_color_map_procs_s gx_color_map_procs;
const gx_color_map_procs *gx_device_cmap_procs(const gx_device *);
void gx_set_cmap_procs(gs_imager_state *, const gx_device *);
typedef enum { cpm_show, cpm_false_charpath, cpm_true_charpath, cpm_false_charboxpath, cpm_true_charboxpath } gs_char_path_mode;
typedef struct gx_rop_source_s {
    const byte *sdata;
    int sourcex;
    uint sraster;
    gx_bitmap_id id;
    gx_color_index scolors[2];
    bool use_scolors;
} gx_rop_source_t;
extern const gx_rop_source_t gx_rop_no_source_0;
struct gx_device_color_procs_s {
    int (*load) (gx_device_color * pdevc, const gs_imager_state * pis, gx_device * dev, gs_color_select_t select);
    int (*fill_rectangle) (const gx_device_color * pdevc, int x, int y, int w, int h, gx_device * dev, gs_logical_operation_t lop, const gx_rop_source_t * source);
    int (*fill_masked) (const gx_device_color * pdevc, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int w, int h, gx_device * dev, gs_logical_operation_t lop, bool invert);
    gs_ptr_type_t(*enum_ptrs) (void *ptr, uint size, uint index, const void **pep);
    void (*reloc_ptrs) (void *ptr, uint size, gc_state_t * gcst);
};
int gx_dc_default_fill_masked(const gx_device_color * pdevc, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int w, int h, gx_device * dev, gs_logical_operation_t lop, bool invert);
extern const gs_memory_struct_type_t st_device_color;
extern const gx_device_color_procs gx_dc_procs_none, gx_dc_procs_null, gx_dc_procs_pure, gx_dc_procs_ht_binary, gx_dc_procs_ht_colored;
void gx_set_device_color_1(gs_state * pgs);
int gx_remap_color(gs_state *);
typedef enum { gs_cap_butt = 0, gs_cap_round = 1, gs_cap_square = 2, gs_cap_triangle = 3 } gs_line_cap;
typedef enum { gs_join_miter = 0, gs_join_round = 1, gs_join_bevel = 2, gs_join_none = 3, gs_join_triangle = 4 } gs_line_join;
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
gs_state *gs_state_alloc(gs_memory_t *);
int gs_state_free(gs_state *);
int gs_gsave(gs_state *), gs_grestore(gs_state *), gs_grestoreall(gs_state *);
gs_state *gs_gstate(gs_state *);
gs_state *gs_state_copy(gs_state *, gs_memory_t *);
int gs_copygstate(gs_state *, const gs_state *), gs_currentgstate(gs_state *, const gs_state *), gs_setgstate(gs_state *, const gs_state *);
int gs_initgraphics(gs_state *);
int gs_flushpage(gs_state *);
int gs_copypage(gs_state *);
int gs_output_page(gs_state *, int, int);
int gs_copyscanlines(gx_device *, int, byte *, uint, int *, uint *);
const gx_device *gs_getdevice(int);
int gs_copydevice(gx_device **, const gx_device *, gs_memory_t *);
int gs_makewordimagedevice(gx_device ** pnew_dev, const gs_matrix * pmat, uint width, uint height, const byte * colors, int num_colors, bool word_oriented, bool page_device, gs_memory_t * mem);
int gs_initialize_wordimagedevice(gx_device_memory * new_dev, const gs_matrix * pmat, uint width, uint height, const byte * colors, int colors_size, bool word_oriented, bool page_device, gs_memory_t * mem);
void gs_nulldevice(gs_state *);
int gs_setdevice(gs_state *, gx_device *);
int gs_setdevice_no_erase(gs_state *, gx_device *);
gx_device *gs_currentdevice(const gs_state *);
const char *gs_devicename(const gx_device *);
void gs_deviceinitialmatrix(gx_device *, gs_matrix *);
int gs_getdeviceparams(gx_device *, gs_param_list *);
int gs_putdeviceparams(gx_device *, gs_param_list *);
int gs_closedevice(gx_device *);
int gs_setlinewidth(gs_state *, floatp);
float gs_currentlinewidth(const gs_state *);
int gs_setlinecap(gs_state *, gs_line_cap);
gs_line_cap gs_currentlinecap(const gs_state *);
int gs_setlinejoin(gs_state *, gs_line_join);
gs_line_join gs_currentlinejoin(const gs_state *);
int gs_setmiterlimit(gs_state *, floatp);
float gs_currentmiterlimit(const gs_state *);
int gs_setdash(gs_state *, const float *, uint, floatp);
uint gs_currentdash_length(const gs_state *);
const float *gs_currentdash_pattern(const gs_state *);
float gs_currentdash_offset(const gs_state *);
int gs_setflat(gs_state *, floatp);
float gs_currentflat(const gs_state *);
int gs_setstrokeadjust(gs_state *, bool);
bool gs_currentstrokeadjust(const gs_state *);
void gs_setaccuratecurves(gs_state *, bool);
bool gs_currentaccuratecurves(const gs_state *);
void gs_setdashadapt(gs_state *, bool);
bool gs_currentdashadapt(const gs_state *);
int gs_setdotlength(gs_state *, floatp, bool);
float gs_currentdotlength(const gs_state *);
bool gs_currentdotlength_absolute(const gs_state *);
int gs_imager_setflat(gs_imager_state *, floatp);
bool gs_imager_currentdashadapt(const gs_imager_state *);
bool gs_imager_currentaccuratecurves(const gs_imager_state *);
int gs_setgray(gs_state *, floatp);
float gs_currentgray(const gs_state *);
int gs_setrgbcolor(gs_state *, floatp, floatp, floatp), gs_currentrgbcolor(const gs_state *, float[3]), gs_setalpha(gs_state *, floatp);
float gs_currentalpha(const gs_state *);
int gs_setnullcolor(gs_state *);
int gs_settransfer(gs_state *, gs_mapping_proc), gs_settransfer_remap(gs_state *, gs_mapping_proc, bool);
gs_mapping_proc gs_currenttransfer(const gs_state *);
typedef struct gs_screen_halftone_s {
    float frequency;
    float angle;
    float (*spot_function) (floatp, floatp);
    float actual_frequency;
    float actual_angle;
} gs_screen_halftone;
typedef struct gs_colorscreen_halftone_s {
    union _css {
	gs_screen_halftone indexed[4];
	struct _csc {
	    gs_screen_halftone red, green, blue, gray;
	} colored;
    } screens;
} gs_colorscreen_halftone;
int gs_setscreen(gs_state *, gs_screen_halftone *);
int gs_currentscreen(const gs_state *, gs_screen_halftone *);
int gs_currentscreenlevels(const gs_state *);
typedef struct gs_screen_enum_s gs_screen_enum;
gs_screen_enum *gs_screen_enum_alloc(gs_memory_t *, client_name_t);
int gs_screen_init(gs_screen_enum *, gs_state *, gs_screen_halftone *);
int gs_screen_currentpoint(gs_screen_enum *, gs_point *);
int gs_screen_next(gs_screen_enum *, floatp);
int gs_screen_install(gs_screen_enum *);
int gs_setscreenphase(gs_state *, int, int, gs_color_select_t);
int gs_currentscreenphase(const gs_state *, gs_int_point *, gs_color_select_t);
int gx_imager_setscreenphase(gs_imager_state *, int, int, gs_color_select_t);
int gs_setfilladjust(gs_state *, floatp, floatp);
int gs_currentfilladjust(const gs_state *, gs_point *);
void gs_setlimitclamp(gs_state *, bool);
bool gs_currentlimitclamp(const gs_state *);
gs_memory_t *gs_state_memory(const gs_state *);
gs_state *gs_state_saved(const gs_state *);
gs_state *gs_state_swap_saved(gs_state *, gs_state *);
gs_memory_t *gs_state_swap_memory(gs_state *, gs_memory_t *);
typedef void *(*gs_state_alloc_proc_t) (gs_memory_t * mem);
typedef int (*gs_state_copy_proc_t) (void *to, const void *from);
typedef void (*gs_state_free_proc_t) (void *old, gs_memory_t * mem);
typedef enum { copy_for_gsave, copy_for_grestore, copy_for_gstate, copy_for_setgstate, copy_for_copygstate, copy_for_currentgstate } gs_state_copy_reason_t;
typedef int (*gs_state_copy_for_proc_t) (void *to, void *from, gs_state_copy_reason_t reason);
typedef struct gs_state_client_procs_s {
    gs_state_alloc_proc_t alloc;
    gs_state_copy_proc_t copy;
    gs_state_free_proc_t free;
    gs_state_copy_for_proc_t copy_for;
} gs_state_client_procs;
void gs_state_set_client(gs_state *, void *, const gs_state_client_procs *);
void *gs_state_client_data(const gs_state *);
typedef struct gs_font_s gs_font;
typedef struct gs_state_contents_s gs_state_contents;
struct gs_state_s {
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
    gs_state *saved;
    gs_state_contents *contents;
    gs_matrix ctm_inverse;
    bool ctm_inverse_valid;
    gs_matrix ctm_default;
    bool ctm_default_set;
    struct gx_path_s *path;
    struct gx_clip_path_s *clip_path;
    int clip_rule;
    bool clamp_coordinates;
    struct gs_color_space_s *color_space;
    struct gs_client_color_s *ccolor;
    gx_device_color *dev_color;
    gs_font *font;
    gs_font *root_font;
    gs_matrix_fixed char_tm;
    bool char_tm_valid;
    byte in_cachedevice;
    gs_char_path_mode in_charpath;
    gs_state *show_gstate;
    int level;
    gx_device *device;
    void *client_data;
    gs_state_client_procs client_procs;
};
static void cie_joint_caches_init(gx_cie_joint_caches *, const gs_cie_common *, const gs_cie_render *);
static void cie_joint_caches_complete(gx_cie_joint_caches *, const gs_cie_common *, const gs_cie_render *);
static void cie_mult3(const gs_vector3 *, const gs_matrix3 *, gs_vector3 *);
static void cie_matrix_mult3(const gs_matrix3 *, const gs_matrix3 *, gs_matrix3 *);
static void cie_invert3(const gs_matrix3 *, gs_matrix3 *);
static void cie_matrix_init(gs_matrix3 *);
static const gs_memory_struct_type_t st_joint_caches = { sizeof(gx_cie_joint_caches), "gx_cie_joint_caches", 0, 0, 0, 0, 0 };

static gs_ptr_type_t const_string_enum_ptrs(void *ptr, uint size, uint index, const void **pep);
static void const_string_reloc_ptrs(void *ptr, uint size, gc_state_t * gcst);
static const gs_memory_struct_type_t st_const_string = { sizeof(gs_const_string), "gs_const_string", 0, 0, const_string_enum_ptrs, const_string_reloc_ptrs, 0 };

static gs_ptr_type_t const_string_elt_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    uint count = size / (uint) sizeof(gs_const_string);
    if (count == 0)
	return 0;
    return (*st_const_string.enum_ptrs) ((char *) vptr + (index % count) * sizeof(gs_const_string), sizeof(gs_const_string), index / count, pep);
}

static void const_string_elt_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{ {
	uint count = size / (uint) sizeof(gs_const_string);
	for (; count; count--, vptr = (char *) vptr + sizeof(gs_const_string))
	    (*st_const_string.reloc_ptrs) (vptr, sizeof(gs_const_string), gcst);
}
}
const gs_memory_struct_type_t st_const_string_element = { sizeof(gs_const_string), "gs_const_string[]", 0, 0, const_string_elt_enum_ptrs, const_string_elt_reloc_ptrs, 0 };

static gs_ptr_type_t const_string_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	*pep = (void *) ((gs_const_string *) vptr);
	return (&ptr_const_string_procs);
    }
}

static void const_string_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{ {
	gs_reloc_const_string(((gs_const_string *) vptr), gcst);
}} static const gs_color_space *gx_concrete_space_CIE(const gs_color_space *, const gs_imager_state *);

static int gx_concretize_CIEDEFG(const gs_client_color *, const gs_color_space *, frac *, const gs_imager_state *);
static int gx_install_CIEDEFG(gs_color_space *, gs_state *);
static void gx_adjust_cspace_CIEDEFG(const gs_color_space *, gs_memory_t *, int);
static gs_ptr_type_t gx_enum_ptrs_CIEDEFG(void *ptr, uint size, uint index, const void **pep);
static void gx_reloc_ptrs_CIEDEFG(void *ptr, uint size, gc_state_t * gcst);
static int gx_concretize_CIEDEF(const gs_client_color *, const gs_color_space *, frac *, const gs_imager_state *);
static int gx_install_CIEDEF(gs_color_space *, gs_state *);
static void gx_adjust_cspace_CIEDEF(const gs_color_space *, gs_memory_t *, int);
static gs_ptr_type_t gx_enum_ptrs_CIEDEF(void *ptr, uint size, uint index, const void **pep);
static void gx_reloc_ptrs_CIEDEF(void *ptr, uint size, gc_state_t * gcst);
static int gx_remap_CIEABC(const gs_client_color *, const gs_color_space *, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
static int gx_concretize_CIEABC(const gs_client_color *, const gs_color_space *, frac *, const gs_imager_state *);
static int gx_install_CIEABC(gs_color_space *, gs_state *);
static void gx_adjust_cspace_CIEABC(const gs_color_space *, gs_memory_t *, int);
static gs_ptr_type_t gx_enum_ptrs_CIEABC(void *ptr, uint size, uint index, const void **pep);
static void gx_reloc_ptrs_CIEABC(void *ptr, uint size, gc_state_t * gcst);
static int gx_concretize_CIEA(const gs_client_color *, const gs_color_space *, frac *, const gs_imager_state *);
static int gx_install_CIEA(gs_color_space *, gs_state *);
static void gx_adjust_cspace_CIEA(const gs_color_space *, gs_memory_t *, int);
static gs_ptr_type_t gx_enum_ptrs_CIEA(void *ptr, uint size, uint index, const void **pep);
static void gx_reloc_ptrs_CIEA(void *ptr, uint size, gc_state_t * gcst);
const gs_color_space_type gs_color_space_type_CIEDEFG = { gs_color_space_index_CIEDEFG, 3, ((bool) 1), gx_init_paint_3, gx_concrete_space_CIE, gx_concretize_CIEDEFG, ((void *) 0), gx_default_remap_color, gx_install_CIEDEFG, gx_adjust_cspace_CIEDEFG, gx_no_adjust_color_count, gx_enum_ptrs_CIEDEFG, gx_reloc_ptrs_CIEDEFG }, gs_color_space_type_CIEDEF = {
gs_color_space_index_CIEDEF, 3, ((bool) 1), gx_init_paint_3, gx_concrete_space_CIE, gx_concretize_CIEDEF, ((void *) 0), gx_default_remap_color, gx_install_CIEDEF, gx_adjust_cspace_CIEDEF, gx_no_adjust_color_count, gx_enum_ptrs_CIEDEF, gx_reloc_ptrs_CIEDEF}, gs_color_space_type_CIEABC = {
gs_color_space_index_CIEABC, 3, ((bool) 1), gx_init_paint_3, gx_concrete_space_CIE, gx_concretize_CIEABC, ((void *) 0), gx_remap_CIEABC, gx_install_CIEABC, gx_adjust_cspace_CIEABC, gx_no_adjust_color_count, gx_enum_ptrs_CIEABC, gx_reloc_ptrs_CIEABC}, gs_color_space_type_CIEA = {
gs_color_space_index_CIEA, 1, ((bool) 1), gx_init_paint_1, gx_concrete_space_CIE, gx_concretize_CIEA, ((void *) 0), gx_default_remap_color, gx_install_CIEA, gx_adjust_cspace_CIEA, gx_no_adjust_color_count, gx_enum_ptrs_CIEA, gx_reloc_ptrs_CIEA};

static gs_ptr_type_t gx_enum_ptrs_CIEDEFG(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((gs_color_space *) vptr)->params.defg);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void gx_reloc_ptrs_CIEDEFG(void *vptr, uint size, gc_state_t * gcst)
{ {
	((gs_color_space *) vptr)->params.defg = gs_reloc_struct_ptr((const void *) ((const gs_color_space *) vptr)->params.defg, gcst);
}} static gs_ptr_type_t gx_enum_ptrs_CIEDEF(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((gs_color_space *) vptr)->params.def);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void gx_reloc_ptrs_CIEDEF(void *vptr, uint size, gc_state_t * gcst)
{ {
	((gs_color_space *) vptr)->params.def = gs_reloc_struct_ptr((const void *) ((const gs_color_space *) vptr)->params.def, gcst);
}} static gs_ptr_type_t gx_enum_ptrs_CIEABC(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((gs_color_space *) vptr)->params.abc);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void gx_reloc_ptrs_CIEABC(void *vptr, uint size, gc_state_t * gcst)
{ {
	((gs_color_space *) vptr)->params.abc = gs_reloc_struct_ptr((const void *) ((const gs_color_space *) vptr)->params.abc, gcst);
}} static gs_ptr_type_t gx_enum_ptrs_CIEA(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((gs_color_space *) vptr)->params.a);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void gx_reloc_ptrs_CIEA(void *vptr, uint size, gc_state_t * gcst)
{ {
	((gs_color_space *) vptr)->params.a = gs_reloc_struct_ptr((const void *) ((const gs_color_space *) vptr)->params.a, gcst);
}} static float a_identity(floatp in, const gs_cie_a * pcie)
{
    return in;
}

static float abc_identity(floatp in, const gs_cie_abc * pcie)
{
    return in;
}

static float def_identity(floatp in, const gs_cie_def * pcie)
{
    return in;
}

static float defg_identity(floatp in, const gs_cie_defg * pcie)
{
    return in;
}

static float common_identity(floatp in, const gs_cie_common * pcie)
{
    return in;
}

static float render_identity(floatp in, const gs_cie_render * pcie)
{
    return in;
}

static float tpqr_identity(floatp in, const gs_cie_wbsd * pwbsd, const gs_cie_render * pcie)
{
    return in;
}

static frac render_table_identity(byte in, const gs_cie_render * pcie)
{
    return ((frac) (((frac) (in) << (15 - (8))) + ((in) >> ((8) * 2 - 15)) - ((in) >> ((8) - 3))));
}
const gs_range3 Range3_default = { {{0, 1}, {0, 1}, {0, 1}} };
const gs_range4 Range4_default = { {{0, 1}, {0, 1}, {0, 1}, {0, 1}} };
const gs_cie_defg_proc4 DecodeDEFG_default = { {defg_identity, defg_identity, defg_identity, defg_identity} };
const gs_cie_def_proc3 DecodeDEF_default = { {def_identity, def_identity, def_identity} };
const gs_cie_abc_proc3 DecodeABC_default = { {abc_identity, abc_identity, abc_identity} };
const gs_cie_common_proc3 DecodeLMN_default = { {common_identity, common_identity, common_identity} };
const gs_matrix3 Matrix3_default = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1}, 1 };
const gs_range RangeA_default = { 0, 1 };

const gs_cie_a_proc DecodeA_default = a_identity;
const gs_vector3 MatrixA_default = { 1, 1, 1 };
const gs_vector3 BlackPoint_default = { 0, 0, 0 };
const gs_cie_render_proc3 Encode_default = { {render_identity, render_identity, render_identity} };
const gs_cie_transform_proc3 TransformPQR_default = { {tpqr_identity, tpqr_identity, tpqr_identity} };
const gs_cie_render_table_procs RenderTableT_default = { {render_table_identity, render_table_identity, render_table_identity, render_table_identity} };

static void gx_adjust_cspace_CIEDEFG(const gs_color_space * pcs, gs_memory_t * mem, int delta)
{
    do {
	if ((pcs->params.defg) != 0 && !((pcs->params.defg)->rc.ref_count += delta)) {
	    (*(pcs->params.defg)->rc.free) ((pcs->params.defg)->rc.memory, (void *) (pcs->params.defg), "gx_adjust_cspace_CIEDEFG");
	    do {
	    } while (0);
	}
    } while (0);
}

static void gx_adjust_cspace_CIEDEF(const gs_color_space * pcs, gs_memory_t * mem, int delta)
{
    do {
	if ((pcs->params.def) != 0 && !((pcs->params.def)->rc.ref_count += delta)) {
	    (*(pcs->params.def)->rc.free) ((pcs->params.def)->rc.memory, (void *) (pcs->params.def), "gx_adjust_cspace_CIEDEF");
	    do {
	    } while (0);
	}
    } while (0);
}

static void gx_adjust_cspace_CIEABC(const gs_color_space * pcs, gs_memory_t * mem, int delta)
{
    do {
	if ((pcs->params.abc) != 0 && !((pcs->params.abc)->rc.ref_count += delta)) {
	    (*(pcs->params.abc)->rc.free) ((pcs->params.abc)->rc.memory, (void *) (pcs->params.abc), "gx_adjust_cspace_CIEABC");
	    do {
	    } while (0);
	}
    } while (0);
}

static void gx_adjust_cspace_CIEA(const gs_color_space * pcs, gs_memory_t * mem, int delta)
{
    do {
	if ((pcs->params.a) != 0 && !((pcs->params.a)->rc.ref_count += delta)) {
	    (*(pcs->params.a)->rc.free) ((pcs->params.a)->rc.memory, (void *) (pcs->params.a), "gx_adjust_cspace_CIEA");
	    do {
	    } while (0);
	}
    } while (0);
}

static int cie_load_common_cache(gs_cie_common *, gs_state *, client_name_t);
static void cie_cache_mult(gx_cie_vector_cache *, const gs_vector3 *, const cie_cache_floats *);
static bool cie_cache_mult3(gx_cie_vector_cache *, const gs_matrix3 *);
static int gx_install_CIEDEFG(gs_color_space * pcs, gs_state * pgs)
{
    return ((-21));
}

static int gx_install_CIEDEF(gs_color_space * pcs, gs_state * pgs)
{
    return ((-21));
}

static int gx_install_CIEABC(gs_color_space * pcs, gs_state * pgs)
{
    gs_cie_abc *pcie = pcs->params.abc;
    cie_matrix_init(&pcie->MatrixABC); {
	int i, j;
	gs_for_loop_params lp[3];
	gs_cie_cache_init(&(pcie->caches.DecodeABC)->floats.params, &(lp)[0], &(pcie->RangeABC.ranges)[0], "DecodeABC");
	gs_cie_cache_init(&(pcie->caches.DecodeABC)[1].floats.params, &(lp)[1], &(pcie->RangeABC.ranges)[1], "DecodeABC");
	gs_cie_cache_init(&(pcie->caches.DecodeABC)[2].floats.params, &(lp)[2], &(pcie->RangeABC.ranges)[2], "DecodeABC");
	for (i = 0; i < (1 << 9); i++)
	    for (j = 0; j < 3; lp[j].init += lp[j].step, j++)
		pcie->caches.DecodeABC[j].floats.values[i] = (*(&pcie->DecodeABC)->procs[j]) (lp[j].init, pcie);
    };
    gs_cie_abc_complete(pcie);
    return cie_load_common_cache(&pcie->common, pgs, "gx_install_CIEABC");
}

static int gx_install_CIEA(gs_color_space * pcs, gs_state * pgs)
{
    gs_cie_a *pcie = pcs->params.a;
    int i;
    gs_for_loop_params lp;
    float in;
    gs_cie_cache_init(&pcie->caches.DecodeA.floats.params, &lp, &pcie->RangeA, "DecodeA");
    for (i = 0, in = lp.init; i < (1 << 9); in += lp.step, i++)
	pcie->caches.DecodeA.floats.values[i] = (*pcie->DecodeA) (in, pcie);
    gs_cie_a_complete(pcie);
    return cie_load_common_cache(&pcie->common, pgs, "gx_install_CIEA");
}

static int cie_load_common_cache(gs_cie_common * pcie, gs_state * pgs, client_name_t cname)
{
    gx_cie_joint_caches *pjc;
    cie_matrix_init(&pcie->MatrixLMN); {
	int i, j;
	gs_for_loop_params lp[3];
	gs_cie_cache_init(&(pcie->caches.DecodeLMN)->floats.params, &(lp)[0], &(pcie->RangeLMN.ranges)[0], "DecodeLMN");
	gs_cie_cache_init(&(pcie->caches.DecodeLMN)[1].floats.params, &(lp)[1], &(pcie->RangeLMN.ranges)[1], "DecodeLMN");
	gs_cie_cache_init(&(pcie->caches.DecodeLMN)[2].floats.params, &(lp)[2], &(pcie->RangeLMN.ranges)[2], "DecodeLMN");
	for (i = 0; i < (1 << 9); i++)
	    for (j = 0; j < 3; lp[j].init += lp[j].step, j++)
		pcie->caches.DecodeLMN[j].floats.values[i] = (*(&pcie->DecodeLMN)->procs[j]) (lp[j].init, pcie);
    }
    if (pgs->cie_render == 0)
	return 0;
    pjc = gx_currentciecaches(pgs);
    if (pjc == 0)
	return ((-25));
    cie_joint_caches_init(pjc, pcie, pgs->cie_render);
    cie_joint_caches_complete(pjc, pcie, pgs->cie_render);
    return 0;
}

void gs_cie_abc_complete(gs_cie_abc * pcie)
{
    pcie->caches.skipABC = cie_cache_mult3(pcie->caches.DecodeABC, &pcie->MatrixABC);
} void gs_cie_a_complete(gs_cie_a * pcie)
{
    cie_cache_mult(&pcie->caches.DecodeA, &pcie->MatrixA, &pcie->caches.DecodeA.floats);
} static void cie_cache_mult(gx_cie_vector_cache * pcache, const gs_vector3 * pvec, const cie_cache_floats * pcf)
{
    int i;
    cie_vector_cache_params params;
    params.is_identity = pcf->params.is_identity;
    params.base = (pcf->params.base);
    params.factor = (pcf->params.factor);
    params.limit = (((1 << 9) - 1) / pcf->params.factor + pcf->params.base);
    for (i = (1 << 9); --i >= 0;) {
	float f = pcf->values[i];
	pcache->vecs.values[i].u = (f * pvec->u);
	pcache->vecs.values[i].v = (f * pvec->v);
	pcache->vecs.values[i].w = (f * pvec->w);
    } pcache->vecs.params = params;
} static bool cie_cache_mult3(gx_cie_vector_cache * pc, const gs_matrix3 * pmat)
{
    cie_cache_mult(pc, &pmat->cu, &pc->floats);
    cie_cache_mult(pc + 1, &pmat->cv, &pc[1].floats);
    cie_cache_mult(pc + 2, &pmat->cw, &pc[2].floats);
    return pmat->is_identity & pc[0].vecs.params.is_identity & pc[1].vecs.params.is_identity & pc[2].vecs.params.is_identity;
}
//complexity is O(n) inferred by loopus
int gs_setcolorrendering(gs_state * pgs, gs_cie_render * pcie)
{
    int code = gs_cie_render_init(pcie);
    if (code < 0)
	return code;
    do {
	if ((pgs->cie_render) != (pcie)) {
	    do {
		if ((pgs->cie_render) != 0 && !((pgs->cie_render)->rc.ref_count += -1)) {
		    (*(pgs->cie_render)->rc.free) ((pgs->cie_render)->rc.memory, (void *) (pgs->cie_render), "gs_setcolorrendering");
		    do {
		    } while (0);
		}
	    } while (0);
	    (pgs->cie_render) = (pcie);
	    do {
		if ((pgs->cie_render) != 0)
		    (pgs->cie_render)->rc.ref_count++;
	    } while (0);
	}
    } while (0); {
	int i, j;
	gs_for_loop_params lp[3];
	gs_cie_cache_init(&(pcie->caches.EncodeLMN)->floats.params, &(lp)[0], &(pcie->DomainLMN.ranges)[0], "EncodeLMN");
	gs_cie_cache_init(&(pcie->caches.EncodeLMN)[1].floats.params, &(lp)[1], &(pcie->DomainLMN.ranges)[1], "EncodeLMN");
	gs_cie_cache_init(&(pcie->caches.EncodeLMN)[2].floats.params, &(lp)[2], &(pcie->DomainLMN.ranges)[2], "EncodeLMN");
	for (i = 0; i < (1 << 9); i++)
	    for (j = 0; j < 3; lp[j].init += lp[j].step, j++)
		pcie->caches.EncodeLMN[j].floats.values[i] = (*(&pcie->EncodeLMN)->procs[j]) (lp[j].init, pcie);
    }; {
	int i, j;
	gs_for_loop_params lp[3];
	gs_cie_cache_init(&(pcie->caches.EncodeABC)->floats.params, &(lp)[0], &(pcie->DomainABC.ranges)[0], "EncodeABC");
	gs_cie_cache_init(&(pcie->caches.EncodeABC)[1].floats.params, &(lp)[1], &(pcie->DomainABC.ranges)[1], "EncodeABC");
	gs_cie_cache_init(&(pcie->caches.EncodeABC)[2].floats.params, &(lp)[2], &(pcie->DomainABC.ranges)[2], "EncodeABC");
	for (i = 0; i < (1 << 9); i++)
	    for (j = 0; j < 3; lp[j].init += lp[j].step, j++)
		pcie->caches.EncodeABC[j].floats.values[i] = (*(&pcie->EncodeABC)->procs[j]) (lp[j].init, pcie);
    };
    if (pcie->RenderTable.lookup.table != 0) {
	int i, j, m = pcie->RenderTable.lookup.m;
	gs_for_loop_params flp;
	for (j = 0; j < m; j++)
	    gs_cie_cache_init(&pcie->caches.RenderTableT[j].fracs.params, &flp, &Range3_default.ranges[0], "RenderTableT");
	for (i = 0; i < 256; i++)
	    for (j = 0; j < m; j++)
		pcie->caches.RenderTableT[j].fracs.values[i] = (*pcie->RenderTable.T.procs[j]) ((byte) i, pcie);
    }
    code = gs_cie_render_complete(pcie);
    if (code < 0)
	return code;
    gs_cie_cs_complete(pgs, ((bool) 1));
    (((pgs)->dev_color)->type = (&gx_dc_procs_none));
    return code;
}

const gs_cie_render *gs_currentcolorrendering(const gs_state * pgs)
{
    return pgs->cie_render;
}

gx_cie_joint_caches *gx_currentciecaches(gs_state * pgs)
{
    do {
	if ((pgs->cie_joint_caches) == 0 || (pgs->cie_joint_caches)->rc.ref_count > 1 || (pgs->cie_joint_caches)->rc.memory != (pgs->memory)) {
	    gx_cie_joint_caches *new;
	    do {
		if (((new) = (gx_cie_joint_caches *) (*(pgs->memory)->procs.alloc_struct) (pgs->memory, &st_joint_caches, "gx_currentciecaches")) == 0) {
		    return 0;
		} else {
		    (new)->rc.ref_count = 1;
		    (new)->rc.memory = pgs->memory;
		    (new)->rc.free = rc_free_struct_only;
		}
	    } while (0);
	    if (pgs->cie_joint_caches)
		(pgs->cie_joint_caches)->rc.ref_count--;
	    (pgs->cie_joint_caches) = new;
	}
    } while (0);
    return pgs->cie_joint_caches;
}

void gs_cie_cache_init(cie_cache_params * pcache, gs_for_loop_params * pflp, const gs_range * domain, client_name_t cname)
{
    double a = domain->rmin, b = domain->rmax;
    double R = b - a;
    double delta;
    if (a < 0 && b >= 0) {
	double x = -((1 << 9) - 1) * a / R;
	double Kb = floor(x);
	double Ka = ceil(x) - ((1 << 9) - 1);
	if (Kb == 0 || (Ka != 0 && -b / Ka < -a / Kb))
	    R = -((1 << 9) - 1) * b / Ka, a = b - R;
	else
	    R = -((1 << 9) - 1) * a / Kb, b = a + R;
    }
    delta = R / ((1 << 9) - 1);
    pcache->base = a;
    pcache->factor = (delta == 0 ? 0 : ((1 << 9) - 1) / R);
    do {
    } while (0);
    pflp->init = a;
    pflp->step = delta;
    pflp->limit = b + delta / 2;
}

static void cie_transform_range3(const gs_range3 *, const gs_matrix3 *, gs_range3 *);
int gs_cie_render_init(gs_cie_render * pcie)
{
    gs_matrix3 PQR_inverse;
    cie_matrix_init(&pcie->MatrixLMN);
    cie_matrix_init(&pcie->MatrixABC);
    cie_matrix_init(&pcie->MatrixPQR);
    cie_invert3(&pcie->MatrixPQR, &PQR_inverse);
    cie_matrix_mult3(&pcie->MatrixLMN, &PQR_inverse, &pcie->MatrixPQR_inverse_LMN);
    cie_transform_range3(&pcie->RangePQR, &pcie->MatrixPQR_inverse_LMN, &pcie->DomainLMN);
    cie_transform_range3(&pcie->RangeLMN, &pcie->MatrixABC, &pcie->DomainABC);
    cie_mult3(&pcie->points.WhitePoint, &pcie->MatrixPQR, &pcie->wdpqr);
    cie_mult3(&pcie->points.BlackPoint, &pcie->MatrixPQR, &pcie->bdpqr);
    return 0;
}

static void cie_transform_range(const gs_range3 * in, floatp mu, floatp mv, floatp mw, gs_range * out)
{
    float umin = mu * in->ranges[0].rmin, umax = mu * in->ranges[0].rmax;
    float vmin = mv * in->ranges[1].rmin, vmax = mv * in->ranges[1].rmax;
    float wmin = mw * in->ranges[2].rmin, wmax = mw * in->ranges[2].rmax;
    float temp;
    if (umin > umax)
	temp = umin, umin = umax, umax = temp;
    if (vmin > vmax)
	temp = vmin, vmin = vmax, vmax = temp;
    if (wmin > wmax)
	temp = wmin, wmin = wmax, wmax = temp;
    out->rmin = umin + vmin + wmin;
    out->rmax = umax + vmax + wmax;
}

static void cie_transform_range3(const gs_range3 * in, const gs_matrix3 * mat, gs_range3 * out)
{
    cie_transform_range(in, mat->cu.u, mat->cv.u, mat->cw.u, &out->ranges[0]);
    cie_transform_range(in, mat->cu.v, mat->cv.v, mat->cw.v, &out->ranges[1]);
    cie_transform_range(in, mat->cu.w, mat->cv.w, mat->cw.w, &out->ranges[2]);
} static void cie_cache_restrict(cie_cache_floats *, const gs_range *);

int gs_cie_render_complete(gs_cie_render * pcie)
{
    cie_cache_restrict(&(pcie->caches.EncodeLMN)[0].floats, &(&pcie->RangeLMN)->ranges[0]);
    cie_cache_restrict(&(pcie->caches.EncodeLMN)[1].floats, &(&pcie->RangeLMN)->ranges[1]);
    cie_cache_restrict(&(pcie->caches.EncodeLMN)[2].floats, &(&pcie->RangeLMN)->ranges[2]);
    cie_cache_restrict(&(pcie->caches.EncodeABC)[0].floats, &(&pcie->RangeABC)->ranges[0]);
    cie_cache_restrict(&(pcie->caches.EncodeABC)[1].floats, &(&pcie->RangeABC)->ranges[1]);
    cie_cache_restrict(&(pcie->caches.EncodeABC)[2].floats, &(&pcie->RangeABC)->ranges[2]);
    pcie->MatrixABCEncode = pcie->MatrixABC; {
	int c;
	double f;
	for (c = 0; c < 3; c++) {
	    gx_cie_scalar_cache *pcache = &pcie->caches.EncodeABC[c];
	    if (pcie->RenderTable.lookup.table == 0) {
		cie_cache_restrict(&pcache->floats, &Range3_default.ranges[0]);
		gs_cie_cache_to_fracs(pcache);
		pcache->fracs.params.is_identity = ((bool) 0);
	    } else {
		int i;
		int n = pcie->RenderTable.lookup.dims[c];
		const gs_range *prange = pcie->RangeABC.ranges + c;
		for (i = (1 << 9); --i >= 0;) {
		    float v = (pcache->floats.values[i] - prange->rmin) * (n - 1) / (prange->rmax - prange->rmin);
		    int itemp;
		    do {
		    } while (0);
		    pcache->ints.values[i] = ((uint) (itemp = (int) (v * (1 << ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))))) >= ((n) << ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) ? (itemp < 0 ? 0 : ((n) << ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) - 1) : itemp);
		} pcache->ints.params = pcache->floats.params;
		pcache->ints.params.is_identity = ((bool) 0);
	}} f = pcie->caches.EncodeABC[0].floats.params.factor;
	pcie->MatrixABCEncode.cu.u *= f;
	pcie->MatrixABCEncode.cv.u *= f;
	pcie->MatrixABCEncode.cw.u *= f;
	pcie->EncodeABC_base[0] = (pcie->caches.EncodeABC[0].floats.params.base * f);
	f = pcie->caches.EncodeABC[1].floats.params.factor;
	pcie->MatrixABCEncode.cu.v *= f;
	pcie->MatrixABCEncode.cv.v *= f;
	pcie->MatrixABCEncode.cw.v *= f;
	pcie->EncodeABC_base[1] = (pcie->caches.EncodeABC[1].floats.params.base * f);
	f = pcie->caches.EncodeABC[2].floats.params.factor;
	pcie->MatrixABCEncode.cu.w *= f;
	pcie->MatrixABCEncode.cv.w *= f;
	pcie->MatrixABCEncode.cw.w *= f;
	pcie->EncodeABC_base[2] = (pcie->caches.EncodeABC[2].floats.params.base * f);
	pcie->MatrixABCEncode.is_identity = 0;
    } cie_cache_mult3(pcie->caches.EncodeLMN, &pcie->MatrixABCEncode);
    return 0;
}

static void cie_cache_restrict(cie_cache_floats * pcache, const gs_range * prange)
{
    int i;
    for (i = 0; i < (1 << 9); i++)
	if ((pcache->values[i]) < (*prange).rmin)
	    pcache->values[i] = (*prange).rmin;
	else if ((pcache->values[i]) > (*prange).rmax)
	    pcache->values[i] = (*prange).rmax;
}

void gs_cie_cache_to_fracs(gx_cie_scalar_cache * pcache)
{
    int i;
    for (i = 0; i < (1 << 9); ++i)
	pcache->fracs.values[i] = ((frac) (((pcache->floats.values[i]) + 0.5 / ((float) ((frac) 0x7ff8))) * ((float) ((frac) 0x7ff8))));
    pcache->fracs.params = pcache->floats.params;
} const gs_cie_common *gs_cie_cs_common(gs_state * pgs)
{
    const gs_color_space *pcs = pgs->color_space;
  sw:switch (pcs->type->index) {
    case gs_color_space_index_CIEABC:
	return &pcs->params.abc->common;
    case gs_color_space_index_CIEA:
	return &pcs->params.a->common;
    case gs_color_space_index_Separation:
	pcs = (const gs_color_space *) &pcs->params.separation.alt_space;
	goto sw;
    case gs_color_space_index_Indexed:
	pcs = gs_color_space_indexed_base(pcs);
	goto sw;
    case gs_color_space_index_Pattern:
    default:
	return 0;
    }
}

void gs_cie_cs_complete(gs_state * pgs, bool init)
{
    const gs_cie_common *common = gs_cie_cs_common(pgs);
    if (common) {
	if (init)
	    cie_joint_caches_init(pgs->cie_joint_caches, common, pgs->cie_render);
	cie_joint_caches_complete(pgs->cie_joint_caches, common, pgs->cie_render);
    }
}

static void cie_joint_caches_init(gx_cie_joint_caches * pjc, const gs_cie_common * pcie, const gs_cie_render * pcier)
{
    pjc->points_sd.ws.xyz = pcie->points.WhitePoint;
    cie_mult3(&pjc->points_sd.ws.xyz, &pcier->MatrixPQR, &pjc->points_sd.ws.pqr);
    pjc->points_sd.bs.xyz = pcie->points.BlackPoint;
    cie_mult3(&pjc->points_sd.bs.xyz, &pcier->MatrixPQR, &pjc->points_sd.bs.pqr);
    pjc->points_sd.wd.xyz = pcier->points.WhitePoint;
    pjc->points_sd.wd.pqr = pcier->wdpqr;
    pjc->points_sd.bd.xyz = pcier->points.BlackPoint;
    pjc->points_sd.bd.pqr = pcier->bdpqr;
    cie_matrix_mult3(&pcier->MatrixPQR, &pcie->MatrixLMN, &pjc->MatrixLMN_PQR); {
	int i, j;
	gs_for_loop_params lp[3];
	gs_cie_cache_init(&(pjc->TransformPQR)->floats.params, &(lp)[0], &(pcier->RangePQR.ranges)[0], "TransformPQR");
	gs_cie_cache_init(&(pjc->TransformPQR)[1].floats.params, &(lp)[1], &(pcier->RangePQR.ranges)[1], "TransformPQR");
	gs_cie_cache_init(&(pjc->TransformPQR)[2].floats.params, &(lp)[2], &(pcier->RangePQR.ranges)[2], "TransformPQR");
	for (i = 0; i < (1 << 9); i++)
	    for (j = 0; j < 3; lp[j].init += lp[j].step, j++)
		pjc->TransformPQR[j].floats.values[i] = (*pcier->TransformPQR.procs[j]) (lp[j].init, &pjc->points_sd, pcier);
    }
}

static void cie_joint_caches_complete(gx_cie_joint_caches * pjc, const gs_cie_common * pcie, const gs_cie_render * pcier)
{
    int j;
    cie_cache_restrict(&(pjc->TransformPQR)[0].floats, &(&pcier->RangePQR)->ranges[0]);
    cie_cache_restrict(&(pjc->TransformPQR)[1].floats, &(&pcier->RangePQR)->ranges[1]);
    cie_cache_restrict(&(pjc->TransformPQR)[2].floats, &(&pcier->RangePQR)->ranges[2]);
    for (j = 0; j < 3; j++)
	cie_cache_mult(&pjc->DecodeLMN[j], &pjc->MatrixLMN_PQR.cu + j, &pcie->caches.DecodeLMN[j].floats);
    pjc->skipLMN = pjc->MatrixLMN_PQR.is_identity & pjc->DecodeLMN[0].vecs.params.is_identity & pjc->DecodeLMN[1].vecs.params.is_identity & pjc->DecodeLMN[2].vecs.params.is_identity;
    pjc->skipPQR = cie_cache_mult3(pjc->TransformPQR, &pcier->MatrixPQR_inverse_LMN);
}

static int cie_remap_finish(const cie_cached_vector3 *, frac *, const gs_imager_state *);
static void cie_lookup_mult3(cie_cached_vector3 *, const gx_cie_vector_cache *);
static const gs_color_space *gx_concrete_space_CIE(const gs_color_space * pcs, const gs_imager_state * pis)
{
    const gs_cie_render *pcie = pis->cie_render;
    if (pcie == 0 || pcie->RenderTable.lookup.table == 0 || pcie->RenderTable.lookup.m == 3)
	return gs_color_space_DeviceRGB();
    else
	return gs_color_space_DeviceCMYK();
}

static int gx_concretize_CIEDEFG(const gs_client_color * pc, const gs_color_space * pcs, frac * pconc, const gs_imager_state * pis)
{
    return ((-21));
}

static int gx_concretize_CIEDEF(const gs_client_color * pc, const gs_color_space * pcs, frac * pconc, const gs_imager_state * pis)
{
    return ((-21));
}

static int gx_remap_CIEABC(const gs_client_color * pc, const gs_color_space * pcs, gx_device_color * pdc, const gs_imager_state * pis, gx_device * dev, gs_color_select_t select)
{
    frac conc[4];
    const gs_cie_abc *pcie = pcs->params.abc;
    cie_cached_vector3 vec3;
    do {
    } while (0);
    vec3.u = (pc->paint.values[0]);
    vec3.v = (pc->paint.values[1]);
    vec3.w = (pc->paint.values[2]);
    if (!pcie->caches.skipABC)
	cie_lookup_mult3(&vec3, &pcie->caches.DecodeABC[0]);
    switch (cie_remap_finish(&vec3, conc, pis)) {
    case 3:
	do {
	} while (0);
	(*pis->cmap_procs->map_rgb) (conc[0], conc[1], conc[2], pdc, pis, dev, select);
	return 0;
    case 4:
	do {
	} while (0);
	(*pis->cmap_procs->map_cmyk) (conc[0], conc[1], conc[2], conc[3], pdc, pis, dev, select);
	return 0;
    }
    return ((-1));
}

static int gx_concretize_CIEABC(const gs_client_color * pc, const gs_color_space * pcs, frac * pconc, const gs_imager_state * pis)
{
    const gs_cie_abc *pcie = pcs->params.abc;
    cie_cached_vector3 vec3;
    do {
    } while (0);
    vec3.u = (pc->paint.values[0]);
    vec3.v = (pc->paint.values[1]);
    vec3.w = (pc->paint.values[2]);
    if (!pcie->caches.skipABC)
	cie_lookup_mult3(&vec3, &pcie->caches.DecodeABC[0]);
    cie_remap_finish(&vec3, pconc, pis);
    return 0;
}

static int gx_concretize_CIEA(const gs_client_color * pc, const gs_color_space * pcs, frac * pconc, const gs_imager_state * pis)
{
    const gs_cie_a *pcie = pcs->params.a;
    cie_cached_value a = (pc->paint.values[0]);
    cie_cached_vector3 vlmn;
    do {
    } while (0);
    vlmn = ((&pcie->caches.DecodeA)->vecs.values[((a) <= (&pcie->caches.DecodeA)->vecs.params.base ? 0 : (a) >= (&pcie->caches.DecodeA)->vecs.params.limit ? ((1 << 9) - 1) << (0) : ((int) (((((a) - (&pcie->caches.DecodeA)->vecs.params.base)) * ((&pcie->caches.DecodeA)->vecs.params.factor)) * (1L << (0)))))]);
    return cie_remap_finish(&vlmn, pconc, pis);
}

static int cie_remap_finish(const cie_cached_vector3 * plmn, frac * pconc, const gs_imager_state * pis)
{
    const gs_cie_render *pcie = pis->cie_render;
    const gx_cie_joint_caches *pjc = pis->cie_joint_caches;
    const gs_const_string *table;
    cie_cached_vector3 vec3;
    int tabc[3];
    if (pcie == 0) {
	pconc[0] = pconc[1] = pconc[2] = ((frac) 0);
	return 3;
    }
    vec3 = *plmn;
    if (!pjc->skipLMN)
	cie_lookup_mult3(&vec3, &pjc->DecodeLMN[0]);
    if (!pjc->skipPQR)
	cie_lookup_mult3(&vec3, &pjc->TransformPQR[0]);
    cie_lookup_mult3(&vec3, &pcie->caches.EncodeLMN[0]);
    if ((uint) (tabc[0] = (int) (((int) ((vec3.u - pcie->EncodeABC_base[0]) * (1L << (((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))))))) >= ((1 << 9) << ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))))
	tabc[0] = (tabc[0] < 0 ? 0 : ((1 << 9) << ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) - 1);
    if ((uint) (tabc[1] = (int) (((int) ((vec3.v - pcie->EncodeABC_base[1]) * (1L << (((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))))))) >= ((1 << 9) << ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))))
	tabc[1] = (tabc[1] < 0 ? 0 : ((1 << 9) << ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) - 1);
    if ((uint) (tabc[2] = (int) (((int) ((vec3.w - pcie->EncodeABC_base[2]) * (1L << (((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))))))) >= ((1 << 9) << ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))))
	tabc[2] = (tabc[2] < 0 ? 0 : ((1 << 9) << ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) - 1);
    table = pcie->RenderTable.lookup.table;
    if (table == 0) {
	pconc[0] = ((pcie->caches.EncodeABC[0].fracs.values)[((tabc[0]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))] + (frac) (((long) ((pcie->caches.EncodeABC[0].fracs.values)[((tabc[0]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) + 1] - (pcie->caches.EncodeABC[0].fracs.values)[((tabc[0]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))]) * ((int) (tabc[0]) & ((1 << ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) - 1))) >> (((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))));
	pconc[1] = ((pcie->caches.EncodeABC[1].fracs.values)[((tabc[1]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))] + (frac) (((long) ((pcie->caches.EncodeABC[1].fracs.values)[((tabc[1]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) + 1] - (pcie->caches.EncodeABC[1].fracs.values)[((tabc[1]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))]) * ((int) (tabc[1]) & ((1 << ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) - 1))) >> (((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))));
	pconc[2] = ((pcie->caches.EncodeABC[2].fracs.values)[((tabc[2]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))] + (frac) (((long) ((pcie->caches.EncodeABC[2].fracs.values)[((tabc[2]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) + 1] - (pcie->caches.EncodeABC[2].fracs.values)[((tabc[2]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))]) * ((int) (tabc[2]) & ((1 << ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) - 1))) >> (((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))));
	return 3;
    } else {
	int m = pcie->RenderTable.lookup.m;
	fixed rfix[3];
	rfix[0] = (((pcie->caches.EncodeABC[0].ints.values)[((tabc[0]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))] + (frac) (((long) ((pcie->caches.EncodeABC[0].ints.values)[((tabc[0]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) + 1] - (pcie->caches.EncodeABC[0].ints.values)[((tabc[0]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))]) * ((int) (tabc[0]) & ((1 << ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) - 1))) >> (((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))))) << (12 - ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))));
	rfix[1] = (((pcie->caches.EncodeABC[1].ints.values)[((tabc[1]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))] + (frac) (((long) ((pcie->caches.EncodeABC[1].ints.values)[((tabc[1]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) + 1] - (pcie->caches.EncodeABC[1].ints.values)[((tabc[1]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))]) * ((int) (tabc[1]) & ((1 << ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) - 1))) >> (((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))))) << (12 - ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))));
	rfix[2] = (((pcie->caches.EncodeABC[2].ints.values)[((tabc[2]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))] + (frac) (((long) ((pcie->caches.EncodeABC[2].ints.values)[((tabc[2]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) + 1] - (pcie->caches.EncodeABC[2].ints.values)[((tabc[2]) >> ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10)))]) * ((int) (tabc[2]) & ((1 << ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))) - 1))) >> (((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))))) << (12 - ((((1 << 2) * 8 - 9 - 2) < (10)) ? ((1 << 2) * 8 - 9 - 2) : (10))));
	do {
	} while (0);
	gx_color_interpolate_linear(rfix, &pcie->RenderTable.lookup, pconc);
	do {
	} while (0);
	if (!pcie->caches.RenderTableT_is_identity) {
	    pconc[0] = pcie->caches.RenderTableT[0].fracs.values[((uint) ((((pconc[0]) >> (15 - 3)) + (pconc[0])) >> (15 - (9))))];
	    pconc[1] = pcie->caches.RenderTableT[1].fracs.values[((uint) ((((pconc[1]) >> (15 - 3)) + (pconc[1])) >> (15 - (9))))];
	    pconc[2] = pcie->caches.RenderTableT[2].fracs.values[((uint) ((((pconc[2]) >> (15 - 3)) + (pconc[2])) >> (15 - (9))))];
	    if (m > 3)
		pconc[3] = pcie->caches.RenderTableT[3].fracs.values[((uint) ((((pconc[3]) >> (15 - 3)) + (pconc[3])) >> (15 - (9))))];
	}
	return m;
    }
}

static void cie_mult3(const gs_vector3 * in, register const gs_matrix3 * mat, gs_vector3 * out)
{
    do {
    } while (0);
    do {
    } while (0); {
	float u = in->u, v = in->v, w = in->w;
	out->u = (u * mat->cu.u) + (v * mat->cv.u) + (w * mat->cw.u);
	out->v = (u * mat->cu.v) + (v * mat->cv.v) + (w * mat->cw.v);
	out->w = (u * mat->cu.w) + (v * mat->cv.w) + (w * mat->cw.w);
    }
    do {
    } while (0);
}

static void cie_matrix_mult3(const gs_matrix3 * ma, const gs_matrix3 * mb, gs_matrix3 * mc)
{
    do {
    } while (0);
    do {
    } while (0);
    cie_mult3(&mb->cu, ma, &mc->cu);
    cie_mult3(&mb->cv, ma, &mc->cv);
    cie_mult3(&mb->cw, ma, &mc->cw);
    cie_matrix_init(mc);
    do {
    } while (0);
}

static void cie_invert3(register const gs_matrix3 * in, register gs_matrix3 * out)
{
    double coA = in->cv.v * in->cw.w - in->cw.v * in->cv.w;
    double coB = in->cw.v * in->cu.w - in->cu.v * in->cw.w;
    double coC = in->cu.v * in->cv.w - in->cv.v * in->cu.w;
    double det = in->cu.u * coA + in->cv.u * coB + in->cw.u * coC;
    do {
    } while (0);
    out->cu.u = coA / det;
    out->cu.v = coB / det;
    out->cu.w = coC / det;
    out->cv.u = (in->cw.u * in->cv.w - in->cv.u * in->cw.w) / det;
    out->cv.v = (in->cu.u * in->cw.w - in->cw.u * in->cu.w) / det;
    out->cv.w = (in->cv.u * in->cu.w - in->cu.u * in->cv.w) / det;
    out->cw.u = (in->cv.u * in->cw.v - in->cw.u * in->cv.v) / det;
    out->cw.v = (in->cw.u * in->cu.v - in->cu.u * in->cw.v) / det;
    out->cw.w = (in->cu.u * in->cv.v - in->cv.u * in->cu.v) / det;
    do {
    } while (0);
    out->is_identity = in->is_identity;
}

static void cie_lookup_mult3(cie_cached_vector3 * pvec, const gx_cie_vector_cache * pc)
{
    const cie_cached_vector3 *pu = &((pc)->vecs.values[((pvec->u) <= (pc)->vecs.params.base ? 0 : (pvec->u) >= (pc)->vecs.params.limit ? ((1 << 9) - 1) << (0) : ((int) (((((pvec->u) - (pc)->vecs.params.base)) * ((pc)->vecs.params.factor)) * (1L << (0)))))]);
    const cie_cached_vector3 *pv = &((pc + 1)->vecs.values[((pvec->v) <= (pc + 1)->vecs.params.base ? 0 : (pvec->v) >= (pc + 1)->vecs.params.limit ? ((1 << 9) - 1) << (0) : ((int) (((((pvec->v) - (pc + 1)->vecs.params.base)) * ((pc + 1)->vecs.params.factor)) * (1L << (0)))))]);
    const cie_cached_vector3 *pw = &((pc + 2)->vecs.values[((pvec->w) <= (pc + 2)->vecs.params.base ? 0 : (pvec->w) >= (pc + 2)->vecs.params.limit ? ((1 << 9) - 1) << (0) : ((int) (((((pvec->w) - (pc + 2)->vecs.params.base)) * ((pc + 2)->vecs.params.factor)) * (1L << (0)))))]);
    pvec->u = pu->u + pv->u + pw->u;
    pvec->v = pu->v + pv->v + pw->v;
    pvec->w = pu->w + pv->w + pw->w;
} static void cie_matrix_init(register gs_matrix3 * mat)
{
    mat->is_identity = mat->cu.u == 1.0 && ((mat->cu.v) == 0.0 && (mat->cu.w) == 0.0) && mat->cv.v == 1.0 && ((mat->cv.u) == 0.0 && (mat->cv.w) == 0.0) && mat->cw.w == 1.0 && ((mat->cw.u) == 0.0 && (mat->cw.v) == 0.0);
}
