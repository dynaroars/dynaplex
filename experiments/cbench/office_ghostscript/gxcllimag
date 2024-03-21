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
int imod(int m, int n);
int igcd(int x, int y);
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
typedef struct gx_device_s gx_device;
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
struct gx_device_memory_s {
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
    gs_matrix initial_matrix;
    uint raster;
    bool foreign_bits;
    byte *base;
    byte **line_ptrs;
    gs_memory_t *bitmap_memory;
    gs_const_string palette;
    struct _c24 {
	gx_color_index rgb;
	bits32 rgbr, gbrg, brgb;
    } color24;
    gs_log2_scale_point log2_scale;
    int log2_alpha_bits;
    int mapped_x;
    int mapped_y;
    int mapped_height;
    int mapped_start;
    gx_color_index save_color;
};
extern const gs_memory_struct_type_t st_device_memory;
ulong gdev_mem_data_size(const gx_device_memory *, int, int);
int gdev_mem_max_height(const gx_device_memory *, int, ulong);
const gx_device_memory *gdev_mem_device_for_bits(int);
const gx_device_memory *gdev_mem_word_device_for_bits(int);
void gs_make_mem_mono_device(gx_device_memory * mdev, gs_memory_t * mem, gx_device * target);
void gs_make_mem_device(gx_device_memory * mdev, const gx_device_memory * mdproto, gs_memory_t * mem, int page_device, gx_device * target);
void gs_make_mem_abuf_device(gx_device_memory * adev, gs_memory_t * mem, gx_device * target, const gs_log2_scale_point * pscale, int alpha_bits, int mapped_x);
void gs_make_mem_alpha_device(gx_device_memory * adev, gs_memory_t * mem, gx_device * target, int alpha_bits);
void gdev_mem_mono_set_inverted(gx_device_memory * mdev, bool black_is_1);
bool gs_device_is_memory(const gx_device *);
bool gs_device_is_abuf(const gx_device *);
typedef struct gx_cached_bits_head_s {
    uint size;
    uint depth;
} gx_cached_bits_head;
typedef struct gx_cached_bits_s {
    gx_cached_bits_head head;
    ushort width, height, shift;
    ushort raster;
    gx_bitmap_id id;
} gx_cached_bits;
typedef struct gx_bits_cache_chunk_s gx_bits_cache_chunk;
struct gx_bits_cache_chunk_s {
    gx_bits_cache_chunk *next;
    byte *data;
    uint size;
    uint allocated;
};
typedef struct gx_bits_cache_s {
    gx_bits_cache_chunk *chunks;
    uint cnext;
    uint bsize;
    uint csize;
} gx_bits_cache;
void gx_bits_cache_init(gx_bits_cache *, gx_bits_cache_chunk *);
void gx_bits_cache_chunk_init(gx_bits_cache_chunk *, byte *, uint);
int gx_bits_cache_alloc(gx_bits_cache *, ulong, gx_cached_bits_head **);
void gx_bits_cache_shorten(gx_bits_cache *, gx_cached_bits_head *, uint, gx_bits_cache_chunk *);
void gx_bits_cache_free(gx_bits_cache *, gx_cached_bits_head *, gx_bits_cache_chunk *);
typedef void *clist_file_ptr;
int clist_fopen(char *fname, const char *fmode, clist_file_ptr * pcf, gs_memory_t * mem, bool ok_to_compress);
int clist_fclose(clist_file_ptr cf, const char *fname, bool delete);
int clist_unlink(const char *fname);
long clist_space_available(long requested);
int clist_fwrite_chars(const void *data, uint len, clist_file_ptr cf);
int clist_fread_chars(void *data, uint len, clist_file_ptr cf);
int clist_ferror_code(clist_file_ptr cf);
long clist_ftell(clist_file_ptr cf);
void clist_rewind(clist_file_ptr cf, bool discard_data, const char *fname);
int clist_fseek(clist_file_ptr cf, long offset, int mode, const char *fname);
typedef enum { gs_color_select_all = -1, gs_color_select_texture = 0, gs_color_select_source = 1 } gs_color_select_t;
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
typedef struct gx_band_params_s {
    int BandWidth;
    int BandHeight;
    long BandBufferSpace;
} gx_band_params;
typedef struct gx_band_page_info_s {
    char cfname[60];
    clist_file_ptr cfile;
    char bfname[60];
    clist_file_ptr bfile;
    uint tile_cache_size;
    long bfile_end_pos;
    gx_band_params band_params;
} gx_band_page_info;
typedef struct gx_saved_page_s {
    gx_device device;
    char dname[8 + 1];
    gx_band_page_info info;
    int num_copies;
} gx_saved_page;
typedef struct gx_placed_page_s {
    gx_saved_page *page;
    gs_int_point offset;
} gx_placed_page;
typedef struct {
    ulong offset;
} tile_hash;
typedef struct {
    gx_cached_bits_head head;
    ushort width, height, shift;
    ushort raster;
    gx_bitmap_id id;
    byte x_reps, y_reps;
    ushort rep_shift;
    ushort index;
    ushort num_bands;
} tile_slot;
typedef struct cmd_prefix_s cmd_prefix;
struct cmd_prefix_s {
    cmd_prefix *next;
    uint size;
};
typedef struct cmd_list_s {
    cmd_prefix *head, *tail;
} cmd_list;
extern const gs_imager_state clist_imager_state_initial;
typedef struct gx_clist_state_s gx_clist_state;
typedef struct gx_device_clist_writer_s {
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
    int (*make_buffer_device) (gx_device_memory *, gx_device *, gs_memory_t *, bool);
    byte *data;
    uint data_size;
    gx_band_params band_params;
    gx_bits_cache_chunk chunk;
    gx_bits_cache bits;
    uint tile_hash_mask;
    uint tile_band_mask_size;
    tile_hash *tile_table;
    int ymin, ymax;
    gx_band_page_info page_info;
    int nbands;
    int error_code;
    gx_clist_state *states;
    byte *cbuf;
    byte *cnext;
    byte *cend;
    cmd_list *ccl;
    cmd_list band_range_list;
    int band_range_min, band_range_max;
    uint tile_max_size;
    uint tile_max_count;
    gx_strip_bitmap tile_params;
    int tile_depth;
    int tile_known_min, tile_known_max;
    gs_imager_state imager_state;
    float dash_pattern[11];
    const gx_clip_path *clip_path;
    gs_id clip_path_id;
    byte color_space;
    gs_indexed_params indexed_params;
    gs_id transfer_ids[4];
    gs_id black_generation_id;
    gs_id undercolor_removal_id;
    gs_id device_halftone_id;
    bool in_image;
} gx_device_clist_writer;
typedef struct gx_device_clist_reader_s {
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
    int (*make_buffer_device) (gx_device_memory *, gx_device *, gs_memory_t *, bool);
    byte *data;
    uint data_size;
    gx_band_params band_params;
    gx_bits_cache_chunk chunk;
    gx_bits_cache bits;
    uint tile_hash_mask;
    uint tile_band_mask_size;
    tile_hash *tile_table;
    int ymin, ymax;
    gx_band_page_info page_info;
    int nbands;
    const gx_placed_page *pages;
    int num_pages;
} gx_device_clist_reader;
typedef union gx_device_clist_s {
    struct _clc {
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
	int (*make_buffer_device) (gx_device_memory *, gx_device *, gs_memory_t *, bool);
	byte *data;
	uint data_size;
	gx_band_params band_params;
	gx_bits_cache_chunk chunk;
	gx_bits_cache bits;
	uint tile_hash_mask;
	uint tile_band_mask_size;
	tile_hash *tile_table;
	int ymin, ymax;
	gx_band_page_info page_info;
	int nbands;
    } common;
    gx_device_clist_reader reader;
    gx_device_clist_writer writer;
} gx_device_clist;
extern gx_device_procs gs_clist_device_procs;
int clist_finish_page(gx_device * dev, bool flush);
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
int gs_setcolorscreen(gs_state *, gs_colorscreen_halftone *);
int gs_currentcolorscreen(gs_state *, gs_colorscreen_halftone *);
int gs_sethalftone(gs_state *, gs_halftone *);
int gs_sethalftone_allocated(gs_state *, gs_halftone *);
int gs_currenthalftone(gs_state *, gs_halftone *);
typedef struct rc_header_s rc_header;
struct rc_header_s {
    long ref_count;
    gs_memory_t *memory;
    void (*free) (gs_memory_t *, void *, client_name_t);
};
void rc_free_struct_only(gs_memory_t *, void *, client_name_t);
typedef enum { ht_type_none, ht_type_screen, ht_type_colorscreen, ht_type_spot, ht_type_threshold, ht_type_multiple, ht_type_multiple_colorscreen } gs_halftone_type;
typedef struct gs_spot_halftone_s {
    gs_screen_halftone screen;
    bool accurate_screens;
    gs_mapping_proc transfer;
} gs_spot_halftone;
typedef struct gs_threshold_halftone_s {
    int width;
    int height;
    gs_const_string thresholds;
    gs_mapping_proc transfer;
} gs_threshold_halftone;
typedef enum { gs_ht_separation_Default, gs_ht_separation_Gray, gs_ht_separation_Red, gs_ht_separation_Green, gs_ht_separation_Blue, gs_ht_separation_Cyan, gs_ht_separation_Magenta, gs_ht_separation_Yellow, gs_ht_separation_Black } gs_ht_separation_name;
typedef struct gs_halftone_component_s {
    gs_ht_separation_name cname;
    gs_halftone_type type;
    union {
	gs_spot_halftone spot;
	gs_threshold_halftone threshold;
    } params;
} gs_halftone_component;
extern const gs_memory_struct_type_t st_halftone_component;
extern const gs_memory_struct_type_t st_ht_component_element;
typedef struct gs_multiple_halftone_s {
    gs_halftone_component *components;
    uint num_comp;
} gs_multiple_halftone;
struct gs_halftone_s {
    gs_halftone_type type;
    rc_header rc;
    union {
	gs_screen_halftone screen;
	gs_colorscreen_halftone colorscreen;
	gs_spot_halftone spot;
	gs_threshold_halftone threshold;
	gs_multiple_halftone multiple;
    } params;
};
extern const gs_memory_struct_type_t st_halftone;
void gs_setaccuratescreens(bool);
bool gs_currentaccuratescreens(void);
int gs_screen_init_memory(gs_screen_enum *, gs_state *, gs_screen_halftone *, bool, gs_memory_t *);
void gs_setminscreenlevels(uint);
uint gs_currentminscreenlevels(void);
typedef struct gx_ht_cell_params_s {
    short M, N, R;
    short M1, N1, R1;
    ulong C;
    short D, D1;
    uint W, W1;
    int S;
} gx_ht_cell_params_t;
void gx_compute_cell_values(gx_ht_cell_params_t *);
typedef uint ht_mask_t;
typedef struct gx_ht_bit_s {
    uint offset;
    ht_mask_t mask;
} gx_ht_bit;
typedef ht_mask_t ht_sample_t;
typedef struct gx_ht_cache_s gx_ht_cache;
typedef struct gx_ht_order_s {
    gx_ht_cell_params_t params;
    ushort width;
    ushort height;
    ushort raster;
    ushort shift;
    ushort orig_height;
    ushort orig_shift;
    uint full_height;
    uint num_levels;
    uint num_bits;
    uint *levels;
    gx_ht_bit *bits;
    gx_ht_cache *cache;
    gx_transfer_map *transfer;
} gx_ht_order;
extern const gs_memory_struct_type_t st_ht_order;
typedef struct gx_ht_order_component_s {
    gx_ht_order corder;
    gs_ht_separation_name cname;
} gx_ht_order_component;
extern const gs_memory_struct_type_t st_ht_order_component_element;
struct gx_device_halftone_s {
    gx_ht_order order;
    rc_header rc;
    gs_id id;
    gx_ht_order_component *components;
    uint num_comp;
    uint color_indices[4];
    int lcm_width, lcm_height;
};
extern const gs_memory_struct_type_t st_device_halftone;
void gx_device_halftone_release(gx_device_halftone * pdht, gs_memory_t * mem);
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
extern const byte byte_reverse_bits[256];
extern const byte byte_right_mask[9];
extern const byte byte_count_bits[256];
extern const byte byte_bit_run_length_0[256], byte_bit_run_length_1[256], byte_bit_run_length_2[256], byte_bit_run_length_3[256], byte_bit_run_length_4[256], byte_bit_run_length_5[256], byte_bit_run_length_6[256], byte_bit_run_length_7[256];
extern const byte *byte_bit_run_length[8];
extern const byte *byte_bit_run_length_neg[8];
typedef struct hc_definition_s {
    ushort *counts;
    uint num_counts;
    ushort *values;
    uint num_values;
} hc_definition;
typedef struct stream_hc_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    bool FirstBitLowOrder;
    uint bits;
    int bits_left;
} stream_hc_state;
typedef struct hce_code_s {
    ushort code;
    ushort code_length;
} hce_code;
typedef struct hce_table_s {
    uint count;
    hce_code *codes;
} hce_table;
void hc_put_code_proc(bool, byte *, uint);
byte *hc_put_last_bits_proc(stream_hc_state *, byte *, uint, int);
typedef struct hcd_code_s {
    short value;
    ushort code_length;
} hcd_code;
typedef struct hcd_table_s {
    uint count;
    uint initial_bits;
    hcd_code *codes;
} hcd_table;
typedef struct stream_CF_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    bool FirstBitLowOrder;
    uint bits;
    int bits_left;
    bool Uncompressed;
    int K;
    bool EndOfLine;
    bool EncodedByteAlign;
    int Columns;
    int Rows;
    bool EndOfBlock;
    bool BlackIs1;
    int DamagedRowsBeforeError;
    int DecodedByteAlign;
    uint raster;
    byte *lbuf;
    byte *lprev;
    int k_left;
    int run_color;
    int damaged_rows;
    bool skipping_damage;
} stream_CF_state;
typedef struct stream_CFE_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    bool FirstBitLowOrder;
    uint bits;
    int bits_left;
    bool Uncompressed;
    int K;
    bool EndOfLine;
    bool EncodedByteAlign;
    int Columns;
    int Rows;
    bool EndOfBlock;
    bool BlackIs1;
    int DamagedRowsBeforeError;
    int DecodedByteAlign;
    uint raster;
    byte *lbuf;
    byte *lprev;
    int k_left;
    int run_color;
    int damaged_rows;
    bool skipping_damage;
    int max_line_bytes;
    int max_run2_bytes;
    int max_run3_bytes;
    int count;
    int run_count;
    int copy_count;
    bool new_line;
} stream_CFE_state;
extern const stream_template s_CFE_template;
typedef struct stream_CFD_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    bool FirstBitLowOrder;
    uint bits;
    int bits_left;
    bool Uncompressed;
    int K;
    bool EndOfLine;
    bool EncodedByteAlign;
    int Columns;
    int Rows;
    bool EndOfBlock;
    bool BlackIs1;
    int DamagedRowsBeforeError;
    int DecodedByteAlign;
    uint raster;
    byte *lbuf;
    byte *lprev;
    int k_left;
    int run_color;
    int damaged_rows;
    bool skipping_damage;
    int cbit;
    int rows_left;
    int rpos;
    int wpos;
    int eol_count;
    byte invert;
    int uncomp_run;
    int uncomp_left;
    int uncomp_exit;
} stream_CFD_state;
extern const stream_template s_CFD_template;
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
typedef enum { cmd_op_misc = 0x00, cmd_opv_end_run = 0x00, cmd_opv_set_tile_size = 0x01, cmd_opv_set_tile_phase = 0x02, cmd_opv_set_tile_bits = 0x03, cmd_opv_set_bits = 0x04, cmd_opv_set_tile_color = 0x05, cmd_opv_set_misc = 0x06, cmd_opv_enable_lop = 0x07, cmd_opv_disable_lop = 0x08, cmd_opv_set_ht_order = 0x09, cmd_opv_set_ht_data = 0x0a, cmd_opv_end_page = 0x0b, cmd_opv_delta2_color0 = 0x0c, cmd_opv_delta2_color1 = 0x0d, cmd_opv_set_copy_color = 0x0e, cmd_opv_set_copy_alpha = 0x0f, cmd_op_set_color0 = 0x10, cmd_op_set_color1 = 0x20, cmd_op_fill_rect = 0x30, cmd_op_fill_rect_short = 0x40, cmd_op_fill_rect_tiny = 0x50, cmd_op_tile_rect = 0x60, cmd_op_tile_rect_short = 0x70, cmd_op_tile_rect_tiny = 0x80, cmd_op_copy_mono = 0x90, cmd_op_copy_color_alpha = 0xa0, cmd_op_delta_tile_index = 0xb0, cmd_op_set_tile_index = 0xc0 } gx_cmd_op;
typedef struct {
    int x, y, width, height;
} gx_cmd_rect;
typedef struct {
    byte dx, dwidth, dy, dheight;
} gx_cmd_rect_short;
typedef struct {
    unsigned dx:4;
    unsigned dy:4;
} gx_cmd_rect_tiny;
uint clist_bitmap_bytes(uint width_bits, uint height, int compression_mask, uint * width_bytes, uint * raster);
typedef struct cmd_block_s {
    int band_min, band_max;
    long pos;
} cmd_block;
struct gx_clist_state_s {
    gx_color_index colors[2];
    uint tile_index;
    gx_bitmap_id tile_id;
    gs_int_point tile_phase;
    gx_color_index tile_colors[2];
    gx_cmd_rect rect;
    gs_logical_operation_t lop;
    short lop_enabled;
    short clip_enabled;
    ushort color_is_alpha;
    ushort known;
    cmd_list list;
    ulong cost;
};
byte *cmd_put_list_op(gx_device_clist_writer * cldev, cmd_list * pcl, uint size);
byte *cmd_put_range_op(gx_device_clist_writer * cldev, int band_min, int band_max, uint size);
int clist_end_page(gx_device_clist_writer *);
int cmd_size_w(uint);
byte *cmd_put_w(uint, byte *);
typedef struct {
    byte set_op;
    byte delta2_op;
    bool tile_color;
} clist_select_color_t;
extern const clist_select_color_t clist_select_color0, clist_select_color1, clist_select_tile_color0, clist_select_tile_color1;
int cmd_put_color(gx_device_clist_writer * cldev, gx_clist_state * pcls, const clist_select_color_t * select, gx_color_index color, gx_color_index * pcolor);
int cmd_set_tile_colors(gx_device_clist_writer * cldev, gx_clist_state * pcls, gx_color_index color0, gx_color_index color1);
int cmd_set_tile_phase(gx_device_clist_writer * cldev, gx_clist_state * pcls, int px, int py);
int cmd_put_enable_lop(gx_device_clist_writer *, gx_clist_state *, int);
extern byte cmd_opvar_enable_clip, cmd_opvar_disable_clip;
int cmd_put_enable_clip(gx_device_clist_writer *, gx_clist_state *, int);
int cmd_set_lop(gx_device_clist_writer *, gx_clist_state *, gs_logical_operation_t);
int cmd_write_rect_cmd(gx_device_clist_writer * cldev, gx_clist_state * pcls, int op, int x, int y, int width, int height);
int cmd_put_bits(gx_device_clist_writer * cldev, gx_clist_state * pcls, const byte * data, uint width_bits, uint height, uint raster, int op_size, int compression_mask, byte ** pdp, uint * psize);
typedef enum { cmd_map_transfer = 0, cmd_map_transfer_0, cmd_map_transfer_1, cmd_map_transfer_2, cmd_map_transfer_3, cmd_map_ht_transfer, cmd_map_black_generation, cmd_map_undercolor_removal } cmd_map_index;
int cmd_put_color_map(gx_device_clist_writer * cldev, cmd_map_index map_index, const gx_transfer_map * map, gs_id * pid);
int clist_change_tile(gx_device_clist_writer * cldev, gx_clist_state * pcls, const gx_strip_bitmap * tiles, int depth);
int clist_change_bits(gx_device_clist_writer * cldev, gx_clist_state * pcls, const gx_strip_bitmap * tiles, int depth);
int cmd_put_halftone(gx_device_clist_writer * cldev, const gx_device_halftone * pdht, gs_halftone_type type);
typedef enum { cmd_dc_type_pure = 0, cmd_dc_type_ht = 1, cmd_dc_type_color = 2 } cmd_dc_type;
typedef enum { cmd_op_misc2 = 0xd0, cmd_opv_set_flatness = 0xd0, cmd_opv_set_fill_adjust = 0xd1, cmd_opv_set_ctm = 0xd2, cmd_opv_set_line_width = 0xd3, cmd_opv_set_misc2 = 0xd4, cmd_opv_set_miter_limit = 0xd5, cmd_opv_set_dash = 0xd6, cmd_opv_enable_clip = 0xd7, cmd_opv_disable_clip = 0xd8, cmd_opv_begin_clip = 0xd9, cmd_opv_end_clip = 0xda, cmd_opv_set_color_space = 0xdb, cmd_opv_begin_image = 0xdc, cmd_opv_image_data = 0xdd, cmd_opv_set_color = 0xde, cmd_op_segment = 0xe0, cmd_opv_rmoveto = 0xe0, cmd_opv_rlineto = 0xe1, cmd_opv_hlineto = 0xe2, cmd_opv_vlineto = 0xe3, cmd_opv_rrcurveto = 0xe4, cmd_opv_hvcurveto = 0xe5, cmd_opv_vhcurveto = 0xe6, cmd_opv_nrcurveto = 0xe7, cmd_opv_rncurveto = 0xe8, cmd_opv_rmlineto = 0xe9, cmd_opv_rm2lineto = 0xea, cmd_opv_rm3lineto = 0xeb, cmd_opv_vqcurveto = 0xec, cmd_opv_hqcurveto = 0xed, cmd_opv_closepath = 0xee, cmd_op_path = 0xf0, cmd_opv_fill = 0xf0, cmd_opv_htfill = 0xf1, cmd_opv_colorfill = 0xf2, cmd_opv_eofill = 0xf3, cmd_opv_hteofill = 0xf4, cmd_opv_coloreofill = 0xf5, cmd_opv_stroke = 0xf6, cmd_opv_htstroke = 0xf7, cmd_opv_colorstroke = 0xf8 } gx_cmd_xop;
static const byte clist_segment_op_num_operands[] = { 2, 2, 1, 1, 6, 4, 4, 4, 4, 4, 6, 6, 2, 2, 0 };

int cmd_put_drawing_color(gx_device_clist_writer * cldev, gx_clist_state * pcls, const gx_drawing_color * pdcolor);
void cmd_clear_known(gx_device_clist_writer * cldev, uint known);
int cmd_write_unknown(gx_device_clist_writer * cldev, gx_clist_state * pcls, uint must_know);
bool cmd_check_clip_path(gx_device_clist_writer * cldev, const gx_clip_path * pcpath);
byte *cmd_for_matrix(byte * cbuf, const gs_matrix * pmat);
typedef short frac;
typedef short signed_frac;
struct gx_transfer_map_s {
    rc_header rc;
    gs_mapping_proc proc;
    gs_id id;
    frac values[(1 << 8)];
};
extern const gs_memory_struct_type_t st_transfer_map;
frac gx_color_frac_map(frac, const frac *);
float gs_mapped_transfer(floatp, const gx_transfer_map *);
static bool USE_HL_IMAGES = ((bool) 1);
static int cmd_put_color_mapping(gx_device_clist_writer * cldev, const gs_imager_state * pis, bool write_rgb_to_cmyk);
static int clist_fill_mask(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath);
static int clist_begin_image(gx_device * dev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * memory, void **pinfo);
static int clist_image_data(gx_device * dev, void *info, const byte ** planes, int data_x, uint raster, int height);
static int clist_end_image(gx_device * dev, void *info, bool draw_last);
void gs_climag_init(gs_memory_t * mem)
{
    gs_clist_device_procs.fill_mask = clist_fill_mask;
    gs_clist_device_procs.begin_image = clist_begin_image;
    gs_clist_device_procs.image_data = clist_image_data;
    gs_clist_device_procs.end_image = clist_end_image;
} static int clist_fill_mask(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath)
{
    const byte *orig_data = data;
    int orig_data_x = data_x;
    int orig_x = x;
    int orig_width = width;
    int orig_height = height;
    int log2_depth = depth >> 1;
    int y0;
    int data_x_bit;
    byte copy_op = (depth > 1 ? cmd_op_copy_color_alpha : ((pdcolor)->type == gx_dc_type_pure) ? cmd_op_copy_mono : cmd_op_copy_mono + 4);
    if ((x | y) < 0) {
	if (x < 0)
	    width += x, data_x -= x, x = 0;
	if (y < 0)
	    height += y, data -= y * raster, id = 0L, y = 0;
    }
    if (x > dev->width - width)
	width = dev->width - x;
    if (y > dev->height - height)
	height = dev->height - y;
    if (width <= 0 || height <= 0)
	return 0;
    y0 = y;
    if (cmd_check_clip_path((&((gx_device_clist *) dev)->writer), pcpath))
	cmd_clear_known((&((gx_device_clist *) dev)->writer), (1 << 8));
    data_x_bit = data_x << log2_depth; {
	int yend = y + height;
	int band_height = (&((gx_device_clist *) dev)->writer)->page_info.band_params.BandHeight;
	do {
	    int band = y / band_height;
	    gx_clist_state *pcls = (&((gx_device_clist *) dev)->writer)->states + band;
	    int band_end = (band + 1) * band_height;
	    height = (((band_end) < (yend)) ? (band_end) : (yend)) - y; {
		int dx = (data_x_bit & 7) >> log2_depth;
		const byte *row = data + (y - y0) * raster + (data_x_bit >> 3);
		int code;
		if (lop == (rop3_default | (((bool) 0) ? 0x100 : 0) | (((bool) 0) ? 0x200 : 0) | (0 << 10))) {
		    if ((pcls)->lop_enabled == ((0) ^ 1) && cmd_put_enable_lop((&((gx_device_clist *) dev)->writer), pcls, 0) < 0)
			return ((&((gx_device_clist *) dev)->writer))->error_code;
		} else {
		    if (lop != pcls->lop) {
			code = cmd_set_lop((&((gx_device_clist *) dev)->writer), pcls, lop);
			if (code < 0)
			    return code;
		    }
		    if ((pcls)->lop_enabled == ((1) ^ 1) && cmd_put_enable_lop((&((gx_device_clist *) dev)->writer), pcls, 1) < 0)
			return ((&((gx_device_clist *) dev)->writer))->error_code;
		}
		if (depth > 1 && !pcls->color_is_alpha) {
		    byte *dp;
		    do {
			if ((dp = cmd_put_list_op((&((gx_device_clist *) dev)->writer), &(pcls)->list, 1)) == 0)
			    return ((&((gx_device_clist *) dev)->writer))->error_code;
			*dp = (cmd_opv_set_copy_alpha);
		    } while (0);
		    pcls->color_is_alpha = 1;
		}
		if (~(pcls)->known & ((1 << 8))) {
		    int code = cmd_write_unknown((&((gx_device_clist *) dev)->writer), pcls, (1 << 8));
		    if (code < 0)
			return code;
		};
		if ((pcls)->clip_enabled == ((pcpath != ((void *) 0)) ^ 1) && cmd_put_enable_clip((&((gx_device_clist *) dev)->writer), pcls, pcpath != ((void *) 0)) < 0)
		    return ((&((gx_device_clist *) dev)->writer))->error_code;
		code = cmd_put_drawing_color((&((gx_device_clist *) dev)->writer), pcls, pdcolor);
		if (code < 0)
		    return code;
		if (id != 0L && ((pdcolor)->type == gx_dc_type_pure) && lop == (rop3_default | (((bool) 0) ? 0x100 : 0) | (((bool) 0) ? 0x200 : 0) | (0 << 10))) {
		    ulong offset_temp;
		    if (!((pcls)->tile_id == (id) && (offset_temp = (&((gx_device_clist *) dev)->writer)->tile_table[(pcls)->tile_index].offset) != 0 && ((tile_slot *) ((&((gx_device_clist *) dev)->writer)->data + offset_temp))->id == (id))) {
			gx_strip_bitmap tile;
			tile.data = (byte *) orig_data;
			tile.raster = raster;
			tile.size.x = tile.rep_width = orig_width;
			tile.size.y = tile.rep_height = orig_height;
			tile.rep_shift = tile.shift = 0;
			tile.id = id;
			if (clist_change_bits((&((gx_device_clist *) dev)->writer), pcls, &tile, depth) < 0) {
			    goto copy;
			}
		    }
		    {
			gx_cmd_rect rect;
			int rsize;
			byte op = copy_op + 8;
			byte *dp;
			rect.x = orig_x, rect.y = y0;
			rect.width = orig_width, rect.height = yend - y0;
			rsize = 1 + ((!((((rect).x) | ((rect).y)) & ~0x7f)) ? 2 : cmd_size_w((uint) ((rect).x)) + cmd_size_w((uint) ((rect).y)));
			if (orig_data_x) {
			    int dx_msb = orig_data_x >> 5;
			    do {
				if ((dp = cmd_put_list_op((&((gx_device_clist *) dev)->writer), &(pcls)->list, 2 + cmd_size_w(dx_msb))) == 0)
				    return ((&((gx_device_clist *) dev)->writer))->error_code;
				*dp = (cmd_opv_set_misc);
			    } while (0);
			    if (dx_msb) {
				dp[1] = (1 << 6) + 0x20 + (orig_data_x & 0x1f);
				cmd_put_w(dx_msb, dp + 2);
			    } else
				dp[1] = (1 << 6) + orig_data_x;
			}
			do {
			    if ((dp = cmd_put_list_op((&((gx_device_clist *) dev)->writer), &(pcls)->list, rsize)) == 0)
				return ((&((gx_device_clist *) dev)->writer))->error_code;
			    *dp = (op);
			} while (0);
			dp++;
			((!((((rect).x) | ((rect).y)) & ~0x7f)) ? (dp[0] = ((rect).x), dp[1] = ((rect).y), dp += 2) : (dp = cmd_put_w((uint) ((rect).y), cmd_put_w((uint) ((rect).x), dp))));
			pcls->rect = rect;
			goto end;
		    }
		}
	      copy:code = gx_default_fill_mask(dev, row, dx, raster, (y == y0 && height == orig_height && dx == orig_data_x ? id : 0L), x, y, width, height, pdcolor, depth, lop, ((void *) 0));
		if (code < 0)
		    return code;
	      end:;
	    }
	} while ((y += height) < yend);
    }
    return 0;
}

typedef struct clist_image_enum_s {
    gs_memory_t *memory;
    gs_image_t image;
    gx_drawing_color dcolor;
    gs_int_rect rect;
    const gs_imager_state *pis;
    const gx_clip_path *pcpath;
    void *default_info;
    bool multi;
    int num_planes;
    int bits_per_pixel;
    gs_matrix matrix;
    bool uses_color;
    byte color_space;
    int ymin, ymax;
    int y;
} clist_image_enum;
static gs_ptr_type_t clist_image_enum_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((clist_image_enum *) vptr)->default_info);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void clist_image_enum_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{;
    ((clist_image_enum *) vptr)->default_info = gs_reloc_struct_ptr((const void *) ((const clist_image_enum *) vptr)->default_info, gcst);
} static const gs_memory_struct_type_t st_clist_image_enum = { sizeof(clist_image_enum), "clist_image_enum", 0, 0, clist_image_enum_enum_ptrs, clist_image_enum_reloc_ptrs, 0 };

static void image_band_box(gx_device * dev, const clist_image_enum * pie, int y, int h, gs_int_rect * pbox);
static int cmd_image_data(gx_device_clist_writer * cldev, gx_clist_state * pcls, const byte * data, int data_x, uint raster, uint bytes_per_row, int h);
static bool image_matrix_ok_to_band(const gs_matrix * pmat)
{
    double t;
    if ((((pmat)->xy) == 0.0 && ((pmat)->yx) == 0.0) || (((pmat)->xx) == 0.0 && ((pmat)->yy) == 0.0))
	return ((bool) 1);
    t = (fabs(pmat->xx) + fabs(pmat->yy)) / (fabs(pmat->xy) + fabs(pmat->yx));
    return (t < 0.2 || t > 5);
}

static int clist_begin_image(gx_device * dev, const gs_imager_state * pis, const gs_image_t * pim, gs_image_format_t format, const gs_int_rect * prect, const gx_drawing_color * pdcolor, const gx_clip_path * pcpath, gs_memory_t * mem, void **pinfo)
{
    clist_image_enum *pie;
    int base_index;
    bool indexed;
    int num_components;
    bool uses_color;
    gs_matrix mat;
    int code;
    pie = (clist_image_enum *) (*(mem)->procs.alloc_struct_immovable) (mem, &st_clist_image_enum, "clist_begin_image");
    if (pie == 0)
	return ((-25));
    pie->memory = mem;
    *pinfo = pie;
    if (pim->ImageMask) {
	base_index = gs_color_space_index_DeviceGray;
	indexed = ((bool) 0);
	num_components = 1;
	uses_color = ((bool) 1);
    } else {
	const gs_color_space *pcs = pim->ColorSpace;
	base_index = gs_color_space_get_index(pcs);
	if (base_index == gs_color_space_index_Indexed) {
	    const gs_color_space *pbcs = gs_color_space_indexed_base(pcs);
	    indexed = ((bool) 1);
	    base_index = gs_color_space_get_index(pbcs);
	    num_components = 1;
	} else {
	    indexed = ((bool) 0);
	    num_components = gs_color_space_num_components(pcs);
	}
	uses_color = pim->CombineWithColor && (((((pis->log_op) << 4) ^ (pis->log_op)) & rop3_T) != 0);
    }
    if (!USE_HL_IMAGES || (&((gx_device_clist *) dev)->writer)->in_image || base_index > gs_color_space_index_DeviceCMYK || indexed || (uses_color && !((pdcolor)->type == gx_dc_type_pure)) || (format != gs_image_format_chunky && (num_components > 1 || (format == gs_image_format_bit_planar && pim->BitsPerComponent > 1))) || pim->Interpolate || (code = gs_matrix_invert(&pim->ImageMatrix, &mat)) < 0 || (code = gs_matrix_multiply(&mat, &(*(const gs_matrix *) &(pis)->ctm), &mat)) < 0 || !image_matrix_ok_to_band(&mat) || cmd_put_color_mapping((gx_device_clist_writer *) dev, pis, (dev->color_info.num_components == 4 && base_index == gs_color_space_index_DeviceRGB)) < 0) {
	int code = gx_default_begin_image(dev, pis, pim, format, prect, pdcolor, pcpath, mem, &pie->default_info);
	if (code < 0)
	    (*(mem)->procs.free_object) (mem, pie, "clist_begin_image");
	return code;
    }
    pie->default_info = 0;
    pie->image = *pim;
    pie->dcolor = *pdcolor;
    if (prect)
	pie->rect = *prect;
    else {
	pie->rect.p.x = 0, pie->rect.p.y = 0;
	pie->rect.q.x = pim->Width, pie->rect.q.y = pim->Height;
    }
    pie->pis = pis;
    pie->pcpath = pcpath;
    pie->multi = (format != gs_image_format_chunky);
    pie->num_planes = (pie->multi ? num_components : 1);
    pie->bits_per_pixel = pim->BitsPerComponent * num_components / pie->num_planes;
    pie->matrix = mat;
    pie->uses_color = uses_color;
    pie->color_space = (base_index << 4) | (indexed ? (pim->ColorSpace->params.indexed.use_proc ? 12 : 8) : 0);
    pie->y = pie->rect.p.y; {
	uint unknown = 0;
	if ((&((gx_device_clist *) dev)->writer)->imager_state.ctm.xx != pis->ctm.xx || (&((gx_device_clist *) dev)->writer)->imager_state.ctm.xy != pis->ctm.xy || (&((gx_device_clist *) dev)->writer)->imager_state.ctm.yx != pis->ctm.yx || (&((gx_device_clist *) dev)->writer)->imager_state.ctm.yy != pis->ctm.yy || (&((gx_device_clist *) dev)->writer)->imager_state.ctm.tx != pis->ctm.tx || (&((gx_device_clist *) dev)->writer)->imager_state.ctm.ty != pis->ctm.ty) {
	    unknown |= (1 << 2);
	    (&((gx_device_clist *) dev)->writer)->imager_state.ctm = pis->ctm;
	}
	if ((&((gx_device_clist *) dev)->writer)->color_space != pie->color_space || (((&((gx_device_clist *) dev)->writer)->color_space & 8) != 0 && (&((gx_device_clist *) dev)->writer)->indexed_params.hival != pie->image.ColorSpace->params.indexed.hival)) {
	    unknown |= (1 << 9);
	    (&((gx_device_clist *) dev)->writer)->color_space = pie->color_space;
	    if ((&((gx_device_clist *) dev)->writer)->color_space & 8)
		(&((gx_device_clist *) dev)->writer)->indexed_params = pie->image.ColorSpace->params.indexed;
	}
	if (cmd_check_clip_path((&((gx_device_clist *) dev)->writer), pcpath))
	    unknown |= (1 << 8);
	if (unknown)
	    cmd_clear_known((&((gx_device_clist *) dev)->writer), unknown);
    }
    {
	gs_rect sbox, dbox;
	int y, height;
	byte cbuf[2 + 2 * ((sizeof(uint) * 8 + 6) / 7) + 14 * sizeof(float) + 4 * ((sizeof(uint) * 8 + 6) / 7)];
	byte *cp = cbuf;
	byte b;
	((!(((pim->Width) | (pim->Height)) & ~0x7f)) ? (cp[0] = (pim->Width), cp[1] = (pim->Height), cp += 2) : (cp = cmd_put_w((uint) (pim->Height), cmd_put_w((uint) (pim->Width), cp))));
	if (pim->ImageMask)
	    b = 0;
	else
	    switch (pim->BitsPerComponent) {
	    case 1:
		b = 1 << 5;
		break;
	    case 2:
		b = 2 << 5;
		break;
	    case 4:
		b = 3 << 5;
		break;
	    case 8:
		b = 4 << 5;
		break;
	    case 12:
		b = 5 << 5;
		break;
	    default:
		return ((-15));
	    }
	if (pim->Interpolate)
	    b |= 1 << 4;
	if (!(pim->ImageMatrix.xx == pim->Width && pim->ImageMatrix.xy == 0 && pim->ImageMatrix.yx == 0 && pim->ImageMatrix.yy == -pim->Height && pim->ImageMatrix.tx == 0 && pim->ImageMatrix.ty == pim->Height)) {
	    b |= 1 << 3;
	    cp = cmd_for_matrix(cp, &pim->ImageMatrix);
	}
	{
	    static const float base_decode[8] = { 0, 1, 0, 1, 0, 1, 0, 1 };
	    float indexed_decode[2];
	    const float *default_decode = base_decode;
	    int num_decode = num_components * 2;
	    int i;
	    if (indexed) {
		indexed_decode[0] = 0;
		indexed_decode[1] = (1 << pim->BitsPerComponent) - 1;
		default_decode = indexed_decode;
	    }
	    for (i = 0; i < num_decode; ++i)
		if (pim->Decode[i] != default_decode[i])
		    break;
	    if (i != num_decode) {
		byte *pdb = cp++;
		byte dflags = 0;
		b |= 1 << 2;
		for (i = 0; i < num_decode; i += 2) {
		    float u = pim->Decode[i], v = pim->Decode[i + 1];
		    dflags <<= 2;
		    if (u == 0 && v == default_decode[i + 1]);
		    else if (u == default_decode[i + 1] && v == 0)
			dflags += 1;
		    else {
			if (u != 0) {
			    dflags++;
			    memcpy(cp, &u, sizeof(float));
			    cp += sizeof(float);
			}
			dflags += 2;
			memcpy(cp, &v, sizeof(float));
			cp += sizeof(float);
		}} *pdb = dflags << (8 - num_decode);
	    }
	} if ((pim->ImageMask ? pim->adjust : pim->CombineWithColor))
	    b |= 1 << 1;
	sbox.p.x = pie->rect.p.x;
	sbox.p.y = pie->rect.p.y;
	sbox.q.x = pie->rect.q.x;
	sbox.q.y = pie->rect.q.y;
	gs_bbox_transform(&sbox, &pie->matrix, &dbox); {
	    int y0 = (int) floor(dbox.p.y - 0.01);
	    int y1 = (int) ceil(dbox.q.y + 0.01);
	    y = pie->ymin = (((y0) > (0)) ? (y0) : (0));
	    height = (pie->ymax = (((y1) < (dev->height)) ? (y1) : (dev->height))) - y;
	} {
	    int yend = y + height;
	    int band_height = (&((gx_device_clist *) dev)->writer)->page_info.band_params.BandHeight;
	    do {
		int band = y / band_height;
		gx_clist_state *pcls = (&((gx_device_clist *) dev)->writer)->states + band;
		int band_end = (band + 1) * band_height;
		height = (((band_end) < (yend)) ? (band_end) : (yend)) - y; {
		    gs_logical_operation_t lop = pis->log_op;
		    byte *dp;
		    gs_int_rect ibox;
		    byte *bp = cp;
		    byte cb = b;
		    uint len, total_len;
		    image_band_box(dev, pie, y, height, &ibox);
		    if (ibox.p.x >= ibox.q.x || ibox.p.y >= ibox.q.y)
			continue;
		    if (~(pcls)->known & ((1 << 2) | (1 << 8) | (1 << 9))) {
			int code = cmd_write_unknown((&((gx_device_clist *) dev)->writer), pcls, (1 << 2) | (1 << 8) | (1 << 9));
			if (code < 0)
			    return code;
		    };
		    if ((pcls)->clip_enabled == ((pcpath != ((void *) 0)) ^ 1) && cmd_put_enable_clip((&((gx_device_clist *) dev)->writer), pcls, pcpath != ((void *) 0)) < 0)
			return ((&((gx_device_clist *) dev)->writer))->error_code;
		    if (lop == (rop3_default | (((bool) 0) ? 0x100 : 0) | (((bool) 0) ? 0x200 : 0) | (0 << 10))) {
			if ((pcls)->lop_enabled == ((0) ^ 1) && cmd_put_enable_lop((&((gx_device_clist *) dev)->writer), pcls, 0) < 0)
			    return ((&((gx_device_clist *) dev)->writer))->error_code;
		    } else {
			if (lop != pcls->lop) {
			    code = cmd_set_lop((&((gx_device_clist *) dev)->writer), pcls, lop);
			    if (code < 0)
				return code;
			}
			if ((pcls)->lop_enabled == ((1) ^ 1) && cmd_put_enable_lop((&((gx_device_clist *) dev)->writer), pcls, 1) < 0)
			    return ((&((gx_device_clist *) dev)->writer))->error_code;
		    }
		    if (pie->uses_color) {
			code = cmd_put_drawing_color((&((gx_device_clist *) dev)->writer), pcls, &pie->dcolor);
			if (code < 0)
			    return code;
		    }
		    if (ibox.p.x != 0 || ibox.p.y != 0 || ibox.q.x != pim->Width || ibox.q.y != pim->Height) {
			cb |= 1 << 0;
			((!(((ibox.p.x) | (ibox.p.y)) & ~0x7f)) ? (bp[0] = (ibox.p.x), bp[1] = (ibox.p.y), bp += 2) : (bp = cmd_put_w((uint) (ibox.p.y), cmd_put_w((uint) (ibox.p.x), bp))));
			((!(((pim->Width - ibox.q.x) | (pim->Height - ibox.q.y)) & ~0x7f)) ? (bp[0] = (pim->Width - ibox.q.x), bp[1] = (pim->Height - ibox.q.y), bp += 2) : (bp = cmd_put_w((uint) (pim->Height - ibox.q.y), cmd_put_w((uint) (pim->Width - ibox.q.x), bp))));
		    }
		    len = bp - cbuf;
		    total_len = 2 + len;
		    do {
			if ((dp = cmd_put_list_op((&((gx_device_clist *) dev)->writer), &(pcls)->list, total_len)) == 0)
			    return ((&((gx_device_clist *) dev)->writer))->error_code;
			*dp = (cmd_opv_begin_image);
		    } while (0);
		    dp[1] = cb;
		    dp += 2;
		    memcpy(dp, cbuf, len);
		}
	    } while ((y += height) < yend);
	}
    }
    (&((gx_device_clist *) dev)->writer)->in_image = ((bool) 1);
    return 0;
}

static int clist_image_data(gx_device * dev, void *info, const byte ** planes, int data_x, uint raster, int yh)
{
    clist_image_enum *pie = info;
    gs_rect sbox, dbox;
    int y0, y1;
    int y, height;
    if (pie->default_info)
	return gx_default_image_data(dev, pie->default_info, planes, data_x, raster, yh);
    sbox.p.x = pie->rect.p.x;
    sbox.p.y = y0 = pie->y;
    sbox.q.x = pie->rect.q.x;
    sbox.q.y = y1 = pie->y += yh;
    gs_bbox_transform(&sbox, &pie->matrix, &dbox); {
	int ry0 = (int) floor(dbox.p.y - 2.0);
	int ry1 = (int) ceil(dbox.q.y + 2.0);
	int band_height = (&((gx_device_clist *) dev)->writer)->page_info.band_params.BandHeight;
	y = (((ry0) > (0)) ? (ry0) : (0)) / band_height * band_height;
	height = (((((band_height) & ((band_height) - 1) ? ((ry1) + ((band_height) - 1)) / (band_height) * (band_height) : ((ry1) + ((band_height) - 1)) & -(band_height))) < (dev->height)) ? (((band_height) & ((band_height) - 1) ? ((ry1) + ((band_height) - 1)) / (band_height) * (band_height) : ((ry1) + ((band_height) - 1)) & -(band_height))) : (dev->height)) - y;
    } {
	int yend = y + height;
	int band_height = (&((gx_device_clist *) dev)->writer)->page_info.band_params.BandHeight;
	do {
	    int band = y / band_height;
	    gx_clist_state *pcls = (&((gx_device_clist *) dev)->writer)->states + band;
	    int band_end = (band + 1) * band_height;
	    height = (((band_end) < (yend)) ? (band_end) : (yend)) - y; {
		int code; {
		    gs_int_rect ibox;
		    int bpp = pie->bits_per_pixel;
		    uint offset;
		    int iy, ih, xskip, nrows;
		    uint bytes_per_row, rows_per_cmd;
		    image_band_box(dev, pie, y, height, &ibox);
		    if (ibox.p.x >= ibox.q.x || ibox.p.y >= ibox.q.y)
			continue;
		    if (ibox.p.y < y0)
			ibox.p.y = y0;
		    if (ibox.q.y > y1)
			ibox.q.y = y1;
		    offset = (ibox.p.y - y0) * raster;
		    xskip = ibox.p.x & -(int) "\001\010\004\010\002\010\004\010"[bpp & 7];
		    offset += (xskip * bpp) >> 3;
		    xskip = ibox.p.x - xskip;
		    bytes_per_row = ((xskip + ibox.q.x - ibox.p.x) * bpp + 7) >> 3;
		    rows_per_cmd = (800 - (2 + (1 + 11) * sizeof(float))) / (((bytes_per_row) > (1)) ? (bytes_per_row) : (1));
		    if (rows_per_cmd == 0) {
			rows_per_cmd = 1;
		    }
		    for (iy = ibox.p.y, ih = ibox.q.y - ibox.p.y; ih > 0; iy += nrows, ih -= nrows, offset += raster * nrows) {
			nrows = (((ih) < (rows_per_cmd)) ? (ih) : (rows_per_cmd));
			code = cmd_image_data((&((gx_device_clist *) dev)->writer), pcls, planes[0] + offset, data_x + xskip, raster, bytes_per_row, nrows);
			if (code < 0)
			    return code;
		    }
		}
	    }
	} while ((y += height) < yend);
    }
    return pie->y >= pie->rect.q.y;
}

static int clist_end_image(gx_device * dev, void *info, bool draw_last)
{
    clist_image_enum *pie = info;
    int code;
    if (pie->default_info)
	code = gx_default_end_image(dev, pie->default_info, draw_last);
    else {
	int y = pie->ymin;
	int height = pie->ymax - y; {
	    int yend = y + height;
	    int band_height = (&((gx_device_clist *) dev)->writer)->page_info.band_params.BandHeight;
	    do {
		int band = y / band_height;
		gx_clist_state *pcls = (&((gx_device_clist *) dev)->writer)->states + band;
		int band_end = (band + 1) * band_height;
		height = (((band_end) < (yend)) ? (band_end) : (yend)) - y; {
		    gs_int_rect ibox;
		    byte *dp;
		    image_band_box(dev, pie, y, height, &ibox);
		    if (ibox.p.x >= ibox.q.x || ibox.p.y >= ibox.q.y)
			continue;
		    do {
			if ((dp = cmd_put_list_op((&((gx_device_clist *) dev)->writer), &(pcls)->list, 2)) == 0)
			    return ((&((gx_device_clist *) dev)->writer))->error_code;
			*dp = (cmd_opv_image_data);
		    } while (0);
		    dp[1] = 0;
		}
	    } while ((y += height) < yend);
	}
	code = 0;
	(&((gx_device_clist *) dev)->writer)->in_image = ((bool) 0);
    }
    (*(pie->memory)->procs.free_object) (pie->memory, pie, "clist_end_image");
    return code;
}
//complexity is O(n) inferredd by loopus
static int cmd_put_ht_order(gx_device_clist_writer * cldev, const gx_ht_order * porder, gs_ht_separation_name cname, int component)
{
    byte command[(((sizeof(long)) * 8 + 6) / 7) * 8];
    byte *cp;
    uint len;
    byte *dp;
    uint i, n;
    cp = cmd_put_w(component + 1, command);
    if (component >= 0)
	cp = cmd_put_w(cname, cp);
    cp = cmd_put_w(porder->width, cp);
    cp = cmd_put_w(porder->height, cp);
    cp = cmd_put_w(porder->raster, cp);
    cp = cmd_put_w(porder->shift, cp);
    cp = cmd_put_w(porder->num_levels, cp);
    cp = cmd_put_w(porder->num_bits, cp);
    len = cp - command;
    do {
	if ((dp = cmd_put_range_op(cldev, 0, (cldev)->nbands - 1, len + 1)) == 0)
	    return (cldev)->error_code;
	*dp = (cmd_opv_set_ht_order);
    } while (0);
    memcpy(dp + 1, command, len);
    cmd_put_color_map(cldev, cmd_map_ht_transfer, porder->transfer, ((void *) 0));
    for (i = 0; i < porder->num_levels; i += n) {
	n = porder->num_levels - i;
	if (n > ((((800 - 2) / sizeof(*porder->levels)) < (255)) ? ((800 - 2) / sizeof(*porder->levels)) : (255)))
	    n = ((((800 - 2) / sizeof(*porder->levels)) < (255)) ? ((800 - 2) / sizeof(*porder->levels)) : (255));
	do {
	    if ((dp = cmd_put_range_op(cldev, 0, (cldev)->nbands - 1, 2 + n * sizeof(*porder->levels))) == 0)
		return (cldev)->error_code;
	    *dp = (cmd_opv_set_ht_data);
	} while (0);
	dp[1] = n;
	memcpy(dp + 2, porder->levels + i, n * sizeof(*porder->levels));
    }
    for (i = 0; i < porder->num_bits; i += n) {
	n = porder->num_bits - i;
	if (n > ((((800 - 2) / sizeof(*porder->bits)) < (255)) ? ((800 - 2) / sizeof(*porder->bits)) : (255)))
	    n = ((((800 - 2) / sizeof(*porder->bits)) < (255)) ? ((800 - 2) / sizeof(*porder->bits)) : (255));
	do {
	    if ((dp = cmd_put_range_op(cldev, 0, (cldev)->nbands - 1, 2 + n * sizeof(*porder->bits))) == 0)
		return (cldev)->error_code;
	    *dp = (cmd_opv_set_ht_data);
	} while (0);
	dp[1] = n;
	memcpy(dp + 2, porder->bits + i, n * sizeof(*porder->bits));
    }
    return 0;
}
//complexity is O(n) inferred by loopus
int cmd_put_halftone(gx_device_clist_writer * cldev, const gx_device_halftone * pdht, gs_halftone_type type)
{
    uint num_comp = (pdht->components == 0 ? 0 : pdht->num_comp); {
	byte *dp;
	do {
	    if ((dp = cmd_put_range_op(cldev, 0, (cldev)->nbands - 1, 2 + cmd_size_w(num_comp))) == 0)
		return (cldev)->error_code;
	    *dp = (cmd_opv_set_misc);
	} while (0);
	dp[1] = (3 << 6) + type;
	cmd_put_w(num_comp, dp + 2);
    }
    if (num_comp == 0)
	return cmd_put_ht_order(cldev, &pdht->order, gs_ht_separation_Default, -1); {
	int i;
	for (i = num_comp; --i >= 0;) {
	    int code = cmd_put_ht_order(cldev, &pdht->components[i].corder, pdht->components[i].cname, i);
	    if (code < 0)
		return code;
	}
	}
	return 0;
}

static int cmd_put_color_mapping(gx_device_clist_writer * cldev, const gs_imager_state * pis, bool write_rgb_to_cmyk)
{
    int code;
    const gx_device_halftone *pdht = pis->dev_ht;
    if (pdht->id != cldev->device_halftone_id) {
	code = cmd_put_halftone(cldev, pdht, pis->halftone->type);
	if (code < 0)
	    return code;
	cldev->device_halftone_id = pdht->id;
    }
    if (write_rgb_to_cmyk) {
	code = cmd_put_color_map(cldev, cmd_map_black_generation, pis->black_generation, &cldev->black_generation_id);
	if (code < 0)
	    return code;
	code = cmd_put_color_map(cldev, cmd_map_undercolor_removal, pis->undercolor_removal, &cldev->undercolor_removal_id);
	if (code < 0)
	    return code;
    }
    {
	uint which = 0;
	bool all_same = ((bool) 1);
	int i;
	for (i = 0; i < (sizeof(cldev->transfer_ids) / sizeof((cldev->transfer_ids)[0])); ++i) {
	    if (pis->effective_transfer.indexed[i]->id != cldev->transfer_ids[i])
		which |= 1 << i;
	    if (pis->effective_transfer.indexed[i]->id != pis->effective_transfer.indexed[0]->id)
		all_same = ((bool) 0);
	}
	if (which == 0)
	    return 0;
	if (which == (1 << (sizeof(cldev->transfer_ids) / sizeof((cldev->transfer_ids)[0]))) - 1 && all_same) {
	    code = cmd_put_color_map(cldev, cmd_map_transfer, pis->effective_transfer.indexed[0], &cldev->transfer_ids[0]);
	    if (code < 0)
		return code;
	    for (i = 1; i < (sizeof(cldev->transfer_ids) / sizeof((cldev->transfer_ids)[0])); ++i)
		cldev->transfer_ids[i] = cldev->transfer_ids[0];
	} else
	    for (i = 0; i < (sizeof(cldev->transfer_ids) / sizeof((cldev->transfer_ids)[0])); ++i) {
		code = cmd_put_color_map(cldev, (cmd_map_index) (cmd_map_transfer_0 + i), pis->effective_transfer.indexed[i], &cldev->transfer_ids[i]);
		if (code < 0)
		    return code;
	    }
    }
    return 0;
}

static void box_merge_point(gs_int_rect * pbox, floatp x, floatp y)
{
    int t;
    if ((t = (int) floor(x)) < pbox->p.x)
	pbox->p.x = t;
    if ((t = (int) ceil(x)) > pbox->q.x)
	pbox->q.x = t;
    if ((t = (int) floor(y)) < pbox->p.y)
	pbox->p.y = t;
    if ((t = (int) ceil(y)) > pbox->q.y)
	pbox->q.y = t;
} static void image_band_box(gx_device * dev, const clist_image_enum * pie, int y, int h, gs_int_rect * pbox)
{
    fixed by0 = ((fixed) (y) << 12);
    fixed by1 = ((fixed) (y + h) << 12);
    int px = pie->rect.p.x, py = pie->rect.p.y, qx = pie->rect.q.x, qy = pie->rect.q.y;
    gs_fixed_rect cbox;
    gs_rect bbox;
    (*((dev)->std_procs.get_clipping_box)) (dev, &cbox);
    bbox.p.x = ((cbox.p.x - ((1L << 12) >> 1)) * (1.0 / (1 << 12)));
    bbox.q.x = ((cbox.q.x + ((1L << 12) >> 1)) * (1.0 / (1 << 12)));
    bbox.p.y = (((((cbox.p.y) > (by0)) ? (cbox.p.y) : (by0)) - ((1L << 12) >> 1)) * (1.0 / (1 << 12)));
    bbox.q.y = (((((cbox.q.y) < (by1)) ? (cbox.q.y) : (by1)) + ((1L << 12) >> 1)) * (1.0 / (1 << 12)));
    if ((((&pie->matrix)->xy) == 0.0 && ((&pie->matrix)->yx) == 0.0) || (((&pie->matrix)->xx) == 0.0 && ((&pie->matrix)->yy) == 0.0)) {
	gs_rect ibox;
	gs_bbox_transform_inverse(&bbox, &pie->matrix, &ibox);
	pbox->p.x = (((px) > ((int) floor(ibox.p.x))) ? (px) : ((int) floor(ibox.p.x)));
	pbox->q.x = (((qx) < ((int) ceil(ibox.q.x))) ? (qx) : ((int) ceil(ibox.q.x)));
	pbox->p.y = (((py) > ((int) floor(ibox.p.y))) ? (py) : ((int) floor(ibox.p.y)));
	pbox->q.y = (((qy) < ((int) ceil(ibox.q.y))) ? (qy) : ((int) ceil(ibox.q.y)));
    } else {
	gs_point rect[4];
	gs_point corners[5];
	int i;
	rect[0].x = rect[3].x = px;
	rect[1].x = rect[2].x = qx;
	rect[0].y = rect[1].y = py;
	rect[2].y = rect[3].y = qy;
	gs_point_transform_inverse(bbox.p.x, bbox.p.y, &pie->matrix, &corners[0]);
	gs_point_transform_inverse(bbox.q.x, bbox.p.y, &pie->matrix, &corners[1]);
	gs_point_transform_inverse(bbox.q.x, bbox.q.y, &pie->matrix, &corners[2]);
	gs_point_transform_inverse(bbox.p.x, bbox.q.y, &pie->matrix, &corners[3]);
	corners[4] = corners[0];
	pbox->p.x = qx, pbox->p.y = qy;
	pbox->q.x = px, pbox->q.y = py;
	for (i = 0; i < 4; ++i) {
	    gs_point pa, pt;
	    double dx, dy;
	    pa = rect[i];
	    gs_point_transform(pa.x, pa.y, &pie->matrix, &pt);
	    if (pt.x >= bbox.p.x && pt.x <= bbox.q.x && pt.y >= bbox.p.y && pt.y <= bbox.q.y)
		box_merge_point(pbox, pa.x, pa.y);
	    pa = corners[i];
	    if (pa.x >= px && pa.x <= qx && pa.y >= py && pa.y <= qy)
		box_merge_point(pbox, pa.x, pa.y);
	    dx = corners[i + 1].x - pa.x;
	    dy = corners[i + 1].y - pa.y;
	    if (dx != 0) {
		double t = (px - pa.x) / dx;
		do {
		} while (0);
		if ((0 <= t && t <= 1 && (t = pa.y + t * dy) >= py && t <= qy))
		    box_merge_point(pbox, (floatp) px, t);
		t = (qx - pa.x) / dx;
		do {
		} while (0);
		if ((0 <= t && t <= 1 && (t = pa.y + t * dy) >= py && t <= qy))
		    box_merge_point(pbox, (floatp) qx, t);
	    }
	    if (dy != 0) {
		double t = (py - pa.y) / dy;
		do {
		} while (0);
		if ((0 <= t && t <= 1 && (t = pa.x + t * dx) >= px && t <= qx))
		    box_merge_point(pbox, t, (floatp) py);
		t = (qy - pa.y) / dy;
		do {
		} while (0);
		if ((0 <= t && t <= 1 && (t = pa.x + t * dx) >= px && t <= qx))
		    box_merge_point(pbox, t, (floatp) qy);
	    }
	}
    }
    do {
    } while (0);
}

static int cmd_image_data(gx_device_clist_writer * cldev, gx_clist_state * pcls, const byte * data, int data_x, uint raster, uint bytes_per_row, int h)
{
    uint nbytes = bytes_per_row * h;
    uint len = 1 + ((!(((h) | (bytes_per_row)) & ~0x7f)) ? 2 : cmd_size_w((uint) (h)) + cmd_size_w((uint) (bytes_per_row))) + nbytes;
    const byte *source = data;
    byte *dp;
    int i;
    if (data_x) {
	do {
	    if ((dp = cmd_put_list_op(cldev, &(pcls)->list, 2)) == 0)
		return (cldev)->error_code;
	    *dp = (cmd_opv_set_misc);
	} while (0);
	dp[1] = (1 << 6) + (data_x & 7);
	source += ((data_x & ~7) * cldev->color_info.depth) >> 3;
    }
    do {
	if ((dp = cmd_put_list_op(cldev, &(pcls)->list, len)) == 0)
	    return (cldev)->error_code;
	*dp = (cmd_opv_image_data);
    } while (0);
    dp++;
    ((!(((h) | (bytes_per_row)) & ~0x7f)) ? (dp[0] = (h), dp[1] = (bytes_per_row), dp += 2) : (dp = cmd_put_w((uint) (bytes_per_row), cmd_put_w((uint) (h), dp))));
    for (i = 0; i < h; ++i) {
	memcpy(dp, source + i * raster, bytes_per_row);
	dp += bytes_per_row;
    }
    return 0;
}
