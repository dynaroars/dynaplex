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
void gp_init(void);
void gp_exit(int exit_status, int code);
void gp_do_exit(int exit_status);
const char *gp_strerror(int);
void gp_get_realtime(long ptm[2]);
void gp_get_usertime(long ptm[2]);
typedef struct gx_device_s gx_device;
void gp_init_console(void);
void gp_console_puts(const char *, uint);
int gp_make_console_current(gx_device *);
int gp_make_graphics_current(gx_device *);
const char *gp_getenv_display(void);
FILE *gp_open_printer(char *fname, int binary_mode);
void gp_close_printer(FILE * pfile, const char *fname);
extern const char gp_file_name_list_separator;
extern const char gp_scratch_file_name_prefix[];
extern const char gp_null_file_name[];
extern const char gp_current_directory_name[];
extern const char gp_fmode_binary_suffix[];
extern const char gp_fmode_rb[];
extern const char gp_fmode_wb[];
FILE *gp_open_scratch_file(const char *prefix, char *fname, const char *mode);
FILE *gp_fopen(const char *fname, const char *mode);
bool gp_file_name_is_absolute(const char *fname, uint len);
const char *gp_file_name_concat_string(const char *prefix, uint plen, const char *fname, uint len);
struct file_enum_s;
typedef struct file_enum_s file_enum;
file_enum *gp_enumerate_files_init(const char *pat, uint patlen, gs_memory_t * memory);
uint gp_enumerate_files_next(file_enum * pfen, char *ptr, uint maxlen);
void gp_enumerate_files_close(file_enum * pfen);
extern const bits16 mono_copy_masks[17];
extern const bits32 mono_fill_masks[33];
void bits_fill_rectangle(byte * dest, int dest_bit, uint raster, uint pattern, int width_bits, int height);
void bits_replicate_horizontally(byte * data, uint width, uint height, uint raster, uint replicated_width, uint replicated_raster);
void bits_replicate_vertically(byte * data, uint height, uint raster, uint replicated_height);
void bits_bounding_box(const byte * data, uint height, uint raster, gs_int_rect * pbox);
void bits_compress_scaled(const byte * src, int srcx, uint width, uint height, uint sraster, byte * dest, uint draster, const gs_log2_scale_point * plog2_scale, int log2_out_bits);
void bytes_fill_rectangle(byte * dest, uint raster, byte value, int width_bytes, int height);
void bytes_copy_rectangle(byte * dest, uint dest_raster, const byte * src, uint src_raster, int width_bytes, int height);
gs_state *gs_state_alloc(gs_memory_t *);
int gs_state_free(gs_state *);
int gs_gsave(gs_state *), gs_grestore(gs_state *), gs_grestoreall(gs_state *);
gs_state *gs_gstate(gs_state *);
gs_state *gs_state_copy(gs_state *, gs_memory_t *);
int gs_copygstate(gs_state *, const gs_state *), gs_currentgstate(gs_state *, const gs_state *), gs_setgstate(gs_state *, const gs_state *);
int gs_initgraphics(gs_state *);
typedef struct gx_device_memory_s gx_device_memory;
typedef struct gs_matrix_s gs_matrix;
typedef struct gs_param_list_s gs_param_list;
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
typedef enum { gs_cap_butt = 0, gs_cap_round = 1, gs_cap_square = 2, gs_cap_triangle = 3 } gs_line_cap;
typedef enum { gs_join_miter = 0, gs_join_round = 1, gs_join_bevel = 2, gs_join_none = 3, gs_join_triangle = 4 } gs_line_join;
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
typedef struct gx_transfer_map_s gx_transfer_map;
typedef float (*gs_mapping_proc) (floatp, const gx_transfer_map *);
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
typedef enum { gs_color_select_all = -1, gs_color_select_texture = 0, gs_color_select_source = 1 } gs_color_select_t;
int gs_setscreenphase(gs_state *, int, int, gs_color_select_t);
int gs_currentscreenphase(const gs_state *, gs_int_point *, gs_color_select_t);
int gx_imager_setscreenphase(gs_imager_state *, int, int, gs_color_select_t);
int gs_setfilladjust(gs_state *, floatp, floatp);
int gs_currentfilladjust(const gs_state *, gs_point *);
void gs_setlimitclamp(gs_state *, bool);
bool gs_currentlimitclamp(const gs_state *);
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
typedef enum { rop2_0 = 0, rop2_S = 0xc, rop2_D = 0xa, rop2_1 = 0xf, rop2_default = rop2_S } gs_rop2_t;
typedef enum { rop3_0 = 0, rop3_T = 0xf0, rop3_S = 0xcc, rop3_D = 0xaa, rop3_1 = 0xff, rop3_default = rop3_T | rop3_S } gs_rop3_t;
typedef uint gs_logical_operation_t;
typedef unsigned rop_operand;
typedef rop_operand(*rop_proc) (rop_operand D, rop_operand S, rop_operand T);
typedef enum { rop_usage_none = 0, rop_usage_D = 1, rop_usage_S = 2, rop_usage_DS = 3, rop_usage_T = 4, rop_usage_DT = 5, rop_usage_ST = 6, rop_usage_DST = 7 } rop_usage_t;
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
struct gs_matrix_s {
    float xx, xy, yx, yy, tx, ty;
};
void gs_make_identity(gs_matrix *);
int gs_make_translation(floatp, floatp, gs_matrix *), gs_make_scaling(floatp, floatp, gs_matrix *), gs_make_rotation(floatp, gs_matrix *);
int gs_matrix_multiply(const gs_matrix *, const gs_matrix *, gs_matrix *), gs_matrix_invert(const gs_matrix *, gs_matrix *), gs_matrix_translate(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_scale(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_rotate(const gs_matrix *, floatp, gs_matrix *);
int gs_point_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_point_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_points_bbox(const gs_point[4], gs_rect *), gs_bbox_transform_only(const gs_rect *, const gs_matrix *, gs_point[4]), gs_bbox_transform(const gs_rect *, const gs_matrix *, gs_rect *), gs_bbox_transform_inverse(const gs_rect *, const gs_matrix *, gs_rect *);
typedef struct gs_color_space_s gs_color_space;
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
int gs_initmatrix(gs_state *), gs_defaultmatrix(const gs_state *, gs_matrix *), gs_currentmatrix(const gs_state *, gs_matrix *), gs_setmatrix(gs_state *, const gs_matrix *), gs_translate(gs_state *, floatp, floatp), gs_scale(gs_state *, floatp, floatp), gs_rotate(gs_state *, floatp), gs_concat(gs_state *, const gs_matrix *);
int gs_setdefaultmatrix(gs_state *, const gs_matrix *), gs_currentcharmatrix(gs_state *, gs_matrix *, bool), gs_setcharmatrix(gs_state *, const gs_matrix *), gs_settocharmatrix(gs_state *);
int gs_transform(gs_state *, floatp, floatp, gs_point *), gs_dtransform(gs_state *, floatp, floatp, gs_point *), gs_itransform(gs_state *, floatp, floatp, gs_point *), gs_idtransform(gs_state *, floatp, floatp, gs_point *);
int gs_imager_setmatrix(gs_imager_state *, const gs_matrix *);
int gs_imager_idtransform(const gs_imager_state *, floatp, floatp, gs_point *);
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
typedef enum { gs_color_space_index_DeviceGray = 0, gs_color_space_index_DeviceRGB, gs_color_space_index_DeviceCMYK, gs_color_space_index_CIEDEFG, gs_color_space_index_CIEDEF, gs_color_space_index_CIEABC, gs_color_space_index_CIEA, gs_color_space_index_Separation, gs_color_space_index_Indexed, gs_color_space_index_Pattern } gs_color_space_index;
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
struct gx_color_map_procs_s {
    void (*map_gray) (frac, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
    void (*map_rgb) (frac, frac, frac, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
    void (*map_cmyk) (frac, frac, frac, frac, gx_device_color *, const gs_imager_state *, gx_device *, gs_color_select_t);
};
typedef struct gx_color_map_procs_s gx_color_map_procs;
const gx_color_map_procs *gx_device_cmap_procs(const gx_device *);
void gx_set_cmap_procs(gs_imager_state *, const gx_device *);
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
int gx_fill_path(gx_path * ppath, gx_device_color * pdevc, gs_state * pgs, int rule, fixed adjust_x, fixed adjust_y);
int gx_stroke_fill(gx_path * ppath, gs_state * pgs);
int gx_stroke_add(gx_path * ppath, gx_path * to_path, gs_state * pgs);
void gx_adjust_if_empty(const gs_fixed_rect *, gs_fixed_point *);
int gx_stroke_path_expansion(const gs_imager_state *, const gx_path *, gs_fixed_point *);
struct gx_fill_params_s {
    int rule;
    gs_fixed_point adjust;
    float flatness;
    bool fill_zero_width;
};
struct gx_stroke_params_s {
    float flatness;
};
int gx_stroke_path_only(gx_path * ppath, gx_path * to_path, gx_device * dev, const gs_imager_state * pis, const gx_stroke_params * params, const gx_device_color * pdevc, const gx_clip_path * pcpath);
void gx_sort_ht_order(gx_ht_bit *, uint);
int gx_ht_alloc_order(gx_ht_order * porder, uint width, uint height, uint strip_shift, uint num_levels, gs_memory_t * mem);
void gx_ht_construct_spot_order(gx_ht_order *);
void gx_ht_construct_threshold_order(gx_ht_order *, const byte *);
void gx_ht_construct_bits(gx_ht_order *);
struct gs_screen_enum_s {
    gs_halftone halftone;
    gx_ht_order order;
    gs_matrix mat;
    int x, y;
    int strip, shift;
    gs_state *pgs;
};
int gs_sethalftone_prepare(gs_state *, gs_halftone *, gx_device_halftone *);
int gs_screen_order_init_memory(gx_ht_order *, const gs_state *, gs_screen_halftone *, bool, gs_memory_t *);
int gs_screen_enum_init_memory(gs_screen_enum *, const gx_ht_order *, gs_state *, gs_screen_halftone *, gs_memory_t *);
int gx_ht_process_screen_memory(gs_screen_enum * penum, gs_state * pgs, gs_screen_halftone * phsp, bool accurate, gs_memory_t * mem);
struct gx_ht_cache_s {
    byte *bits;
    uint bits_size;
    gx_ht_tile *ht_tiles;
    uint num_tiles;
    gx_ht_order order;
    int num_cached;
    int levels_per_tile;
    gx_bitmap_id base_id;
};
extern const gx_color_value *fc_color_quo[8];
uint gx_ht_cache_default_tiles(void);
uint gx_ht_cache_default_bits(void);
gx_ht_cache *gx_ht_alloc_cache(gs_memory_t *, uint, uint);
void gx_ht_free_cache(gs_memory_t *, gx_ht_cache *);
void gx_ht_init_cache(gx_ht_cache *, const gx_ht_order *);
bool gx_check_tile_cache(const gs_imager_state *);
int gx_check_tile_size(const gs_imager_state * pis, int w, int y, int h, gs_color_select_t select, int *ppx);
gx_ht_tile *gx_render_ht(gx_ht_cache *, int);
void gx_ht_order_release(gx_ht_order * porder, gs_memory_t * mem, bool free_cache);
int gx_imager_dev_ht_install(gs_imager_state * pis, const gx_device_halftone * pdht, gs_halftone_type type, const gx_device * dev);
int gx_ht_install(gs_state *, const gs_halftone *, const gx_device_halftone *);
void gx_imager_set_effective_xfer(gs_imager_state * pis);
void gx_set_effective_transfer(gs_state * pgs);
typedef struct gx_device_ht_s {
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
    const gx_device_halftone *dev_ht;
    gs_int_point ht_phase;
    gs_int_point phase;
} gx_device_ht;
typedef enum { cpm_show, cpm_false_charpath, cpm_true_charpath, cpm_false_charboxpath, cpm_true_charboxpath } gs_char_path_mode;
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
typedef enum { s_start, s_line, s_line_close, s_curve } segment_type;
typedef struct segment_s segment;
typedef struct subpath_s subpath;
struct segment_s {
    segment *prev;
    segment *next;
    ushort type;
    ushort notes;
    gs_fixed_point pt;
};
typedef struct {
    segment *prev;
    segment *next;
    ushort type;
    ushort notes;
    gs_fixed_point pt;
} line_segment;
typedef struct {
    segment *prev;
    segment *next;
    ushort type;
    ushort notes;
    gs_fixed_point pt;
    subpath *sub;
} line_close_segment;
typedef struct {
    segment *prev;
    segment *next;
    ushort type;
    ushort notes;
    gs_fixed_point pt;
    gs_fixed_point p1, p2;
} curve_segment;
struct subpath_s {
    segment *prev;
    segment *next;
    ushort type;
    ushort notes;
    gs_fixed_point pt;
    segment *last;
    int curve_count;
    line_close_segment closer;
    char is_closed;
};
bool gx_subpath_is_rectangle(const subpath * pstart, gs_fixed_rect * pbox, const subpath ** ppnext);
int gx_curve_log2_samples(fixed, fixed, const curve_segment *, fixed);
int gx_curve_monotonic_points(fixed, fixed, fixed, fixed, double[2]);
void gx_curve_split(fixed, fixed, const curve_segment *, double, curve_segment *, curve_segment *);
int gx_flatten_sample(gx_path *, int, curve_segment *, segment_notes);
typedef struct curve_cursor_s {
    int k;
    gs_fixed_point p0;
    const curve_segment *pc;
    fixed a, b, c;
    double da, db, dc;
    bool double_set;
    int fixed_limit;
    struct ccc_ {
	fixed ky0, ky3;
	fixed xl, xd;
    } cache;
} curve_cursor;
void gx_curve_cursor_init(curve_cursor * prc, fixed x0, fixed y0, const curve_segment * pc, int k);
fixed gx_curve_x_at_y(curve_cursor * prc, fixed y);
typedef enum { psf_position_valid = 1, psf_subpath_open = 2, psf_is_drawing = 4, psf_outside_range = 8, psf_last_newpath = 0, psf_last_moveto = psf_position_valid | psf_subpath_open, psf_last_draw = psf_position_valid | psf_subpath_open | psf_is_drawing, psf_last_closepath = psf_position_valid } gx_path_state_flags;
struct gx_path_s {
    gs_memory_t *memory;
    gs_fixed_rect bbox;
    segment *box_last;
    subpath *first_subpath;
    subpath *current_subpath;
    int subpath_count;
    int curve_count;
    gs_fixed_point position;
    gs_point outside_position;
    gs_point outside_start;
    byte start_flags;
    byte state_flags;
    byte bbox_set;
    byte shares_segments;
};
extern const gs_memory_struct_type_t st_path;
struct gs_path_enum_s {
    const segment *pseg;
    const gs_state *pgs;
    const gx_path *path;
    gx_path *copied_path;
    bool moveto_done;
    segment_notes notes;
};
typedef struct gx_clip_rect_s gx_clip_rect;
struct gx_clip_rect_s {
    gx_clip_rect *next, *prev;
    int ymin, ymax;
    int xmin, xmax;
    byte to_visit;
};
extern const gs_memory_struct_type_t st_clip_rect;
struct gx_clip_list_s {
    gx_clip_rect single;
    gx_clip_rect *head;
    gx_clip_rect *tail;
    int count;
    bool outside;
};
typedef struct gx_device_clip_s {
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
    gx_clip_list list;
    gx_clip_rect *current;
    gs_int_point translation;
} gx_device_clip;
extern const gs_memory_struct_type_t st_device_clip;
void gx_make_clip_translate_device(gx_device_clip * dev, void *container, const gx_clip_list * list, int tx, int ty);
void gx_make_clip_path_device(gx_device_clip *, const gx_clip_path *);
void gx_clip_list_init(gx_clip_list *);
void gx_clip_list_free(gx_clip_list *, gs_memory_t *);
void gx_cpath_set_outer_box(gx_clip_path *);
struct gx_clip_path_s {
    gx_path path;
    int rule;
    gs_fixed_rect inner_box;
    gs_fixed_rect outer_box;
    gx_clip_list list;
    char segments_valid;
    char shares_list;
    gs_id id;
};
extern const gs_memory_struct_type_t st_clip_path;
typedef struct gx_device_cpath_accum_s {
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
    gs_memory_t *list_memory;
    gs_int_rect clip_box;
    gs_int_rect bbox;
    gx_clip_list list;
} gx_device_cpath_accum;
void gx_cpath_accum_begin(gx_device_cpath_accum * padev, gs_memory_t * mem);
void gx_cpath_accum_set_cbox(gx_device_cpath_accum * padev, const gs_fixed_rect * pbox);
int gx_cpath_accum_end(const gx_device_cpath_accum * padev, gx_clip_path * pcpath);
void gx_cpath_accum_discard(gx_device_cpath_accum * padev);
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
extern const gs_color_space_type gs_color_space_type_Indexed;
typedef struct stream_band_read_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    gx_band_page_info page_info;
    int band;
    uint left;
    cmd_block b_this;
} stream_band_read_state;
static int s_band_read_init(stream_state * st)
{
    ((stream_band_read_state *) st)->left = 0;
    ((stream_band_read_state *) st)->b_this.band_min = 0;
    ((stream_band_read_state *) st)->b_this.band_max = 0;
    ((stream_band_read_state *) st)->b_this.pos = 0;
    clist_rewind(((stream_band_read_state *) st)->page_info.bfile, ((bool) 0), ((stream_band_read_state *) st)->page_info.bfname);
    return 0;
}

static int s_band_read_process(stream_state * st, stream_cursor_read * ignore_pr, stream_cursor_write * pw, bool last)
{
    register byte *q = pw->ptr;
    byte *wlimit = pw->limit;
    clist_file_ptr cfile = ((stream_band_read_state *) st)->page_info.cfile;
    clist_file_ptr bfile = ((stream_band_read_state *) st)->page_info.bfile;
    uint left = ((stream_band_read_state *) st)->left;
    int status = 1;
    uint count;
    while ((count = wlimit - q) != 0) {
	if (left) {
	    if (count > left)
		count = left;
	    clist_fread_chars(q + 1, count, cfile);
	    if (clist_ferror_code(cfile) < 0) {
		status = ((int) (-2));
		break;
	    }
	    q += count;
	    left -= count;
	    do {
	    } while (0);
	    continue;
	}
      rb:if (((stream_band_read_state *) st)->b_this.band_min == (-1) && clist_ftell(bfile) == ((stream_band_read_state *) st)->page_info.bfile_end_pos) {
	    status = ((int) (-1));
	    break;
	}
	{
	    int bmin = ((stream_band_read_state *) st)->b_this.band_min;
	    int bmax = ((stream_band_read_state *) st)->b_this.band_max;
	    long pos = ((stream_band_read_state *) st)->b_this.pos;
	    clist_fread_chars(&((stream_band_read_state *) st)->b_this, sizeof(((stream_band_read_state *) st)->b_this), bfile);
	    if (!(((stream_band_read_state *) st)->band >= bmin && ((stream_band_read_state *) st)->band <= bmax))
		goto rb;
	    clist_fseek(cfile, pos, 0, ((stream_band_read_state *) st)->page_info.cfname);
	    left = (uint) (((stream_band_read_state *) st)->b_this.pos - pos);
	    do {
	    } while (0);
	}
    }
    pw->ptr = q;
    ((stream_band_read_state *) st)->left = left;
    return status;
}
const stream_template s_band_read_template = { &st_stream_state, s_band_read_init, s_band_read_process, 1, 800 };

static int clist_render_init(gx_device_clist *, gx_device_ht *);
static int clist_render_band(gx_device_clist_reader *, stream *, gx_device *, int, int, gs_memory_t *);
//complexity is O(n) inferred by loopus
int clist_get_bits(gx_device * dev, int y, byte * str, byte ** actual_data)
{
    gx_device *target = (&((gx_device_clist *) dev)->reader)->target;
    uint raster = gx_device_raster(target, 1);
    byte *mdata = (&((gx_device_clist *) dev)->reader)->data + (&((gx_device_clist *) dev)->reader)->page_info.tile_cache_size;
    gx_device_memory mdev;
    gx_device_ht hdev;
    gx_device *tdev = (gx_device *) & mdev;
    if ((&((gx_device_clist *) dev)->reader)->ymin < 0) {
	int code = clist_render_init((gx_device_clist *) dev, &hdev);
	if (code < 0)
	    return code;
	if (code != 0) {
	    hdev.target = tdev;
	    tdev = (gx_device *) & hdev;
	}
    }
    if (!(y >= (&((gx_device_clist *) dev)->reader)->ymin && y < (&((gx_device_clist *) dev)->reader)->ymax)) {
	int band_height = (&((gx_device_clist *) dev)->reader)->page_info.band_params.BandHeight;
	int band = y / band_height;
	const gx_placed_page *ppages = (&((gx_device_clist *) dev)->reader)->pages;
	int num_pages = (&((gx_device_clist *) dev)->reader)->num_pages;
	gx_saved_page current_page;
	gx_placed_page placed_page;
	gs_memory_t *mem = ((&((gx_device_clist *) dev)->reader)->memory != 0 ? (&((gx_device_clist *) dev)->reader)->memory : &gs_memory_default);
	stream_band_read_state rs;
	int i;
	int code;
	static const stream_procs no_procs = { s_std_noavailable, s_std_noseek, s_std_read_reset, s_std_read_flush, s_std_close, s_band_read_process };
	if (y < 0 || y > dev->height)
	    return ((-15));
	code = (*(&((gx_device_clist *) dev)->reader)->make_buffer_device) (&mdev, target, 0, ((bool) 1));
	if (code < 0)
	    return code;
	mdev.color_info = dev->color_info;
	mdev.base = mdata;
	rs.template = &s_band_read_template;
	rs.memory = 0;
	rs.band = band;
	gs_deviceinitialmatrix(target, &mdev.initial_matrix);
	mdev.width = target->width;
	mdev.height = band_height;
	mdev.raster = raster;
	(*((&mdev)->std_procs.open_device)) ((gx_device *) & mdev);
	do {
	} while (0);
	if (ppages == 0) {
	    current_page.info = (&((gx_device_clist *) dev)->reader)->page_info;
	    placed_page.page = &current_page;
	    placed_page.offset.x = placed_page.offset.y = 0;
	    ppages = &placed_page;
	    num_pages = 1;
	}
	for (i = 0; i < num_pages; ++i) {
	    const gx_placed_page *ppage = &ppages[i];
	    rs.page_info = ppage->page->info;
	    if ((rs.page_info.cfile != 0 || (code = clist_fopen(rs.page_info.cfname, gp_fmode_rb, &rs.page_info.cfile, mem, ((bool) 1))) >= 0) && (rs.page_info.bfile != 0 || (code = clist_fopen(rs.page_info.bfname, gp_fmode_rb, &rs.page_info.bfile, mem, ((bool) 0))) >= 0)) {
		stream s;
		byte sbuf[800];
		s_band_read_init((stream_state *) & rs);
		s_std_init(&s, sbuf, 800, &no_procs, 1);
		s.foreign = 1;
		s.state = (stream_state *) & rs;
		code = clist_render_band((&((gx_device_clist *) dev)->reader), &s, tdev, -ppage->offset.x, band * mdev.height, mem);
	    }
	    if (ppage->page->info.bfile == 0 && rs.page_info.bfile != 0)
		clist_fclose(rs.page_info.bfile, rs.page_info.bfname, ((bool) 0));
	    if (ppage->page->info.cfile == 0 && rs.page_info.cfile != 0)
		clist_fclose(rs.page_info.cfile, rs.page_info.cfname, ((bool) 0));
	    if (code < 0)
		break;
	}
	(&((gx_device_clist *) dev)->reader)->ymin = band * mdev.height;
	(&((gx_device_clist *) dev)->reader)->ymax = (&((gx_device_clist *) dev)->reader)->ymin + mdev.height;
	if ((&((gx_device_clist *) dev)->reader)->ymax > dev->height)
	    (&((gx_device_clist *) dev)->reader)->ymax = dev->height;
	if (code < 0)
	    return code;
    }
    {
	byte *src = mdata + (y - (&((gx_device_clist *) dev)->reader)->ymin) * raster;
	if (actual_data == 0)
	    memcpy(str, src, gx_device_raster(dev, 0));
	else
	    *actual_data = src;
    }
    return 0;
}

static int clist_render_init(gx_device_clist * dev, gx_device_ht * hdev)
{
    int code = clist_end_page(&dev->writer);
    if (code < 0)
	return code;
    (&((gx_device_clist *) dev)->reader)->ymin = (&((gx_device_clist *) dev)->reader)->ymax = 0;
    (&((gx_device_clist *) dev)->reader)->pages = 0;
    (&((gx_device_clist *) dev)->reader)->num_pages = 0;
    return 0;
}

static long cmd_get_w(const byte * p, const byte ** rp)
{
    long val = *p++ & 0x7f;
    int shift = 7;
    for (; val += (long) (*p & 0x7f) << shift, *p++ > 0x7f; shift += 7);
    *rp = p;
    return val;
}

static const byte *cmd_read_rect(int, gx_cmd_rect *, const byte *);
static const byte *cmd_read_matrix(gs_matrix *, const byte *);
static void clist_unpack_short_bits(byte *, const byte *, int, int, uint);
static int cmd_select_map(cmd_map_index, bool, gs_imager_state *, gx_ht_order *, frac **, uint *, gs_memory_t *);
static int cmd_resize_halftone(gx_device_halftone *, uint, gs_memory_t *);
static int cmd_install_ht_order(gx_ht_order *, const gx_ht_order *, gs_memory_t *);
static int clist_decode_segment(gx_path *, int, fixed[6], gs_fixed_point *, int, int, segment_notes);
static int clist_render_band(gx_device_clist_reader * cdev, stream * s, gx_device * target, int x0, int y0, gs_memory_t * mem)
{
    byte cbuf[800];
    byte *data_bits;
    register const byte *cbp;
    const byte *cb_limit;
    const byte *cb_end;
    int end_status = 0;
    int dev_depth = cdev->color_info.depth;
    int dev_depth_bytes = (dev_depth + 7) >> 3;
    gx_device *tdev;
    gx_clist_state state;
    gx_color_index *set_colors;
    tile_slot *state_slot;
    gx_strip_bitmap state_tile;
    tile_slot tile_bits;
    gs_int_point tile_phase;
    gx_path path;
    bool in_path;
    gs_fixed_point ppos;
    gx_clip_path clip_path;
    bool use_clip;
    gx_clip_path *pcpath;
    gx_device_cpath_accum clip_accum;
    gs_fixed_rect target_box;
    struct _cas {
	bool lop_enabled;
	gs_fixed_point fill_adjust;
    } clip_save;
    gs_imager_state imager_state;
    gx_device_color dev_color;
    float dash_pattern[11];
    gx_fill_params fill_params;
    gx_stroke_params stroke_params;
    gx_device_halftone dev_ht;
    gs_halftone_type halftone_type;
    gx_ht_order *porder;
    uint ht_data_index;
    gs_image_t image;
    gs_int_rect image_rect;
    gs_color_space color_space;
    const gs_color_space *pcs;
    void *image_info;
    segment_notes notes;
    int data_x;
    int code = 0;
    cb_limit = cbuf + (800 - (2 + (1 + 11) * sizeof(float)) + 1);
    cb_end = cbuf + 800;
    cbp = cb_end;
  in:tdev = target;
    set_colors = state.colors;
    use_clip = ((bool) 0);
    pcpath = ((void *) 0);
    notes = sn_none;
    data_x = 0; {
	static const gx_clist_state cls_initial = { {((unsigned long) (-1)), ((unsigned long) (-1))}, 0, 0L, {0, 0}, {((unsigned long) (-1)), ((unsigned long) (-1))}, {0, 0, 0, 0}, (rop3_default | (((bool) 0) ? 0x100 : 0) | (((bool) 0) ? 0x200 : 0) | (0 << 10)), 0, 0, 0, 0x7fff, {0, 0}, 0 };
	state = cls_initial;
    } state_tile.id = 0L;
    state_tile.shift = state_tile.rep_shift = 0;
    tile_phase.x = tile_phase.y = 0;
    gx_path_init(&path, mem);
    in_path = ((bool) 0); {
	gs_fixed_rect cbox;
	cbox.p.x = 0;
	cbox.p.y = 0;
	cbox.q.x = cdev->width;
	cbox.q.y = cdev->height;
	gx_cpath_from_rectangle(&clip_path, &cbox, mem);
    } (*((target)->std_procs.get_clipping_box)) (target, &target_box);
    imager_state = clist_imager_state_initial;
    imager_state.line_params.dash.pattern = dash_pattern;
    code = gs_imager_state_initialize(&imager_state, mem);
    if (code < 0)
	goto out;
    imager_state.halftone = 0;
    memset(&dev_ht, 0, sizeof(dev_ht));
    dev_ht.order.levels = 0;
    dev_ht.order.bits = 0;
    dev_ht.order.transfer = 0;
    dev_ht.components = 0;
    imager_state.dev_ht = &dev_ht;
    imager_state.ht_cache = 0;
    gx_set_cmap_procs(&imager_state, tdev);
    gx_imager_setscreenphase(&imager_state, -x0, -y0, gs_color_select_all);
    halftone_type = ht_type_none;
    fill_params.fill_zero_width = ((bool) 0);
    pcs = gs_color_space_DeviceGray();
    data_bits = (*(mem)->procs.alloc_bytes) (mem, 800, "clist_render_band(data_bits)");
    if (data_bits == 0) {
	code = ((-25));
	goto out;
    }
    while (code >= 0) {
	int op;
	int compress, depth, raster;
	byte *source;
	gx_color_index colors[2];
	gx_color_index *pcolor;
	gs_logical_operation_t log_op;
	tile_slot bits;
	if (cbp >= cb_limit) {
	    if (end_status < 0) {
		if (cbp == cb_end) {
		    code = (end_status == ((int) (-1)) ? 0 : ((-12)));
		    break;
		}
	    } else {
		uint nread;
		byte *cb_top = cbuf + (cb_end - cbp);
		memmove(cbuf, cbp, cb_end - cbp);
		nread = cb_end - cb_top;
		end_status = sgets(s, cb_top, nread, &nread);
		if (nread == 0) {
		    *cb_top = cmd_opv_end_run;
		    nread = 1;
		}
		cb_end = cb_top + nread;
		cb_limit = cbuf + (800 - (2 + (1 + 11) * sizeof(float)) + 1);
		if (cb_limit > cb_end)
		    cb_limit = cb_end;
		cbp = cbuf;
		do {
		} while (0);
	    }
	}
	op = *cbp++;
	switch (op >> 4) {
	case cmd_op_misc >> 4:
	    switch (op) {
	    case cmd_opv_end_run:
		do {
		} while (0);
		continue;
	    case cmd_opv_set_tile_size:{
		    uint rep_width, rep_height;
		    byte bd = *cbp++;
		    tile_bits.head.depth = (bd & 31) + 1;
		    do {
			if (*cbp < 0x80)
			    rep_width = *cbp++;
			else {
			    const byte *_cbp;
			    rep_width = cmd_get_w(cbp, &_cbp);
			    cbp = _cbp;
		    }} while (0);
		    do {
			if (*cbp < 0x80)
			    rep_height = *cbp++;
			else {
			    const byte *_cbp;
			    rep_height = cmd_get_w(cbp, &_cbp);
			    cbp = _cbp;
		    }} while (0);
		    if (bd & 0x20) {
			do {
			    if (*cbp < 0x80)
				tile_bits.x_reps = *cbp++;
			    else {
				const byte *_cbp;
				tile_bits.x_reps = cmd_get_w(cbp, &_cbp);
				cbp = _cbp;
			}} while (0);
			tile_bits.width = rep_width * tile_bits.x_reps;
		    } else {
			tile_bits.x_reps = 1, tile_bits.width = rep_width;
		    }
		    if (bd & 0x40) {
			do {
			    if (*cbp < 0x80)
				tile_bits.y_reps = *cbp++;
			    else {
				const byte *_cbp;
				tile_bits.y_reps = cmd_get_w(cbp, &_cbp);
				cbp = _cbp;
			}} while (0);
			tile_bits.height = rep_height * tile_bits.y_reps;
		    } else {
			tile_bits.y_reps = 1, tile_bits.height = rep_height;
		    }
		    if (bd & 0x80)
			do {
			    if (*cbp < 0x80)
				tile_bits.rep_shift = *cbp++;
			    else {
				const byte *_cbp;
				tile_bits.rep_shift = cmd_get_w(cbp, &_cbp);
				cbp = _cbp;
			}} while (0);
		    else
			tile_bits.rep_shift = 0;
		    do {
		    } while (0);
		    tile_bits.shift = (tile_bits.rep_shift == 0 ? 0 : (tile_bits.rep_shift * (tile_bits.height / rep_height)) % rep_width);
		    tile_bits.raster = ((uint) (((tile_bits.width * tile_bits.head.depth + ((1 << 2) * 8 - 1)) >> (2 + 3)) << 2));
		}
		continue;
	    case cmd_opv_set_tile_phase:
		do {
		    if (*cbp < 0x80)
			state.tile_phase.x = *cbp++;
		    else {
			const byte *_cbp;
			state.tile_phase.x = cmd_get_w(cbp, &_cbp);
			cbp = _cbp;
		}} while (0);
		do {
		    if (*cbp < 0x80)
			state.tile_phase.y = *cbp++;
		    else {
			const byte *_cbp;
			state.tile_phase.y = cmd_get_w(cbp, &_cbp);
			cbp = _cbp;
		}} while (0);
		do {
		} while (0);
		goto set_phase;
	    case cmd_opv_set_tile_bits:
		bits = tile_bits;
		compress = 0;
	      stb:{
		    uint rep_width = bits.width / bits.x_reps;
		    uint rep_height = bits.height / bits.y_reps;
		    uint index;
		    ulong offset;
		    uint width_bits = rep_width * bits.head.depth;
		    uint width_bytes;
		    uint bytes = clist_bitmap_bytes(width_bits, rep_height, compress | (rep_width < bits.width ? 0x200 : 0) | 0x100, &width_bytes, (uint *) & raster);
		    byte *data;
		    do {
			if (*cbp < 0x80)
			    index = *cbp++;
			else {
			    const byte *_cbp;
			    index = cmd_get_w(cbp, &_cbp);
			    cbp = _cbp;
		    }} while (0);
		    do {
			if (*cbp < 0x80)
			    offset = *cbp++;
			else {
			    const byte *_cbp;
			    offset = cmd_get_w(cbp, &_cbp);
			    cbp = _cbp;
		    }} while (0);
		    do {
		    } while (0);
		    state.tile_index = index;
		    cdev->tile_table[state.tile_index].offset = offset;
		    state_slot = (tile_slot *) (cdev->chunk.data + offset);
		    *state_slot = bits;
		    state_tile.data = data = (byte *) (state_slot + 1);
		    if (compress) {
			stream_cursor_read r;
			stream_cursor_write w;
			uint cleft = cb_end - cbp;
			if (cleft < bytes) {
			    uint nread = 800 - cleft;
			    memmove(cbuf, cbp, cleft);
			    end_status = sgets(s, cbuf + cleft, nread, &nread);
			    cb_end = cbuf + cleft + nread;
			    cb_limit = cbuf + (800 - (2 + (1 + 11) * sizeof(float)) + 1);
			    if (cb_limit > cb_end)
				cb_limit = cb_end;
			    cbp = cbuf;
			}
			r.ptr = cbp - 1;
			r.limit = cb_end - 1;
			w.ptr = data - 1;
			w.limit = w.ptr + bytes;
			switch (compress) {
			case 1:{
				stream_RLD_state sstate; {
				    ((&sstate)->EndOfData = ((bool) 1));
				    ((&sstate)->copy_left = 0);
				};
				(*s_RLD_template.process) ((stream_state *) & sstate, &r, &w, ((bool) 1));
			    }
			    break;
			case 2:{
				stream_CFD_state sstate; {
				    (*s_CFD_template.set_defaults) ((stream_state *) & sstate); {
					(&sstate)->memory = &gs_memory_default;
					(&sstate)->K = -1;
					(&sstate)->Columns = (width_bytes << 3);
					(&sstate)->EndOfBlock = ((bool) 0);
					(&sstate)->BlackIs1 = ((bool) 1);
					(&sstate)->DecodedByteAlign = (1 << 2);
				    };
				    (&sstate)->Rows = (rep_height);
				    (*s_CFD_template.init) ((stream_state *) (&sstate));
				};
				(*s_CFD_template.process) ((stream_state *) & sstate, &r, &w, ((bool) 1));
				(*s_CFD_template.release) ((stream_state *) & sstate);
			    }
			    break;
			default:
			    goto bad_op;
			}
			cbp = r.ptr + 1;
		    } else if (rep_height > 1 && width_bytes != bits.raster) {
			if (cb_end - cbp >= ((width_bytes) * (rep_height)))
			    memcpy(data, cbp, (width_bytes) * (rep_height)), cbp += (width_bytes) * (rep_height);
			else {
			    uint cleft = cb_end - cbp, rleft = ((width_bytes) * (rep_height)) - cleft;
			    memcpy(data, cbp, cleft);
			    sgets(s, data + cleft, rleft, &rleft);
			    cbp = cb_end;
			};
			clist_unpack_short_bits(data, data, width_bytes, rep_height, bits.raster);
		    } else {
			if (cb_end - cbp >= (bytes))
			    memcpy(data, cbp, bytes), cbp += bytes;
			else {
			    uint cleft = cb_end - cbp, rleft = (bytes) - cleft;
			    memcpy(data, cbp, cleft);
			    sgets(s, data + cleft, rleft, &rleft);
			    cbp = cb_end;
			};
		    }
		    if (bits.width > rep_width)
			bits_replicate_horizontally(data, rep_width * bits.head.depth, rep_height, bits.raster, bits.width * bits.head.depth, bits.raster);
		    if (bits.height > rep_height)
			bits_replicate_vertically(data, rep_height, bits.raster, bits.height);
		}
		goto stp;
	    case cmd_opv_set_bits:
		compress = *cbp & 3;
		bits.head.depth = *cbp++ >> 2;
		do {
		    if (*cbp < 0x80)
			bits.width = *cbp++;
		    else {
			const byte *_cbp;
			bits.width = cmd_get_w(cbp, &_cbp);
			cbp = _cbp;
		}} while (0);
		do {
		    if (*cbp < 0x80)
			bits.height = *cbp++;
		    else {
			const byte *_cbp;
			bits.height = cmd_get_w(cbp, &_cbp);
			cbp = _cbp;
		}} while (0);
		do {
		} while (0);
		bits.raster = ((uint) (((bits.width * bits.head.depth + ((1 << 2) * 8 - 1)) >> (2 + 3)) << 2));
		bits.x_reps = bits.y_reps = 1;
		bits.shift = bits.rep_shift = 0;
		goto stb;
	    case cmd_opv_set_tile_color:
		set_colors = state.tile_colors;
		do {
		} while (0);
		continue;
	    case cmd_opv_set_misc:{
		    uint cb = *cbp++;
		    switch (cb >> 6) {
		    case (0 << 6) >> 6:
			do {
			    if (*cbp < 0x80)
				state.lop = *cbp++;
			    else {
				const byte *_cbp;
				state.lop = cmd_get_w(cbp, &_cbp);
				cbp = _cbp;
			}} while (0);
			state.lop = (state.lop << 6) + (cb & 0x3f);
			do {
			} while (0);
			if (state.lop_enabled)
			    imager_state.log_op = state.lop;
			break;
		    case (1 << 6) >> 6:
			if (cb & 0x20)
			    do {
				if (*cbp < 0x80)
				    data_x = *cbp++;
				else {
				    const byte *_cbp;
				    data_x = cmd_get_w(cbp, &_cbp);
				    cbp = _cbp;
			    }} while (0);
			else
			    data_x = 0;
			data_x = (data_x << 5) + (cb & 0x1f);
			do {
			} while (0);
			break;
		    case (2 << 6) >> 6:{
			    frac *mdata;
			    uint count;
			    code = cmd_select_map(cb & 0x1f, cb & 0x20, &imager_state, porder, &mdata, &count, mem);
			    if (code < 0)
				goto out;
			    if (mdata) {
				if (cb_end - cbp >= (count))
				    memcpy((byte *) mdata, cbp, count), cbp += count;
				else {
				    uint cleft = cb_end - cbp, rleft = (count) - cleft;
				    memcpy((byte *) mdata, cbp, cleft);
				    sgets(s, (byte *) mdata + cleft, rleft, &rleft);
				    cbp = cb_end;
				};
			    }
			}
			gx_imager_set_effective_xfer(&imager_state);
			break;
		    case (3 << 6) >> 6:
			halftone_type = cb & 0x3f; {
			    uint num_comp;
			    do {
				if (*cbp < 0x80)
				    num_comp = *cbp++;
				else {
				    const byte *_cbp;
				    num_comp = cmd_get_w(cbp, &_cbp);
				    cbp = _cbp;
			    }} while (0);
			    do {
			    } while (0);
			    code = cmd_resize_halftone(&dev_ht, num_comp, mem);
			    if (code < 0)
				goto out;
			}
			break;
		    default:
			goto bad_op;
		    }
		}
		continue;
	    case cmd_opv_enable_lop:
		state.lop_enabled = ((bool) 1);
		imager_state.log_op = state.lop;
		do {
		} while (0);
		continue;
	    case cmd_opv_disable_lop:
		state.lop_enabled = ((bool) 0);
		imager_state.log_op = (rop3_default | (((bool) 0) ? 0x100 : 0) | (((bool) 0) ? 0x200 : 0) | (0 << 10));
		do {
		} while (0);
		continue;
	    case cmd_opv_set_ht_order:{
		    int index;
		    gx_ht_order order;
		    do {
			if (*cbp < 0x80)
			    index = *cbp++;
			else {
			    const byte *_cbp;
			    index = cmd_get_w(cbp, &_cbp);
			    cbp = _cbp;
		    }} while (0);
		    if (index == 0)
			porder = &dev_ht.order;
		    else {
			gx_ht_order_component *pcomp = &dev_ht.components[index - 1];
			do {
			    if (*cbp < 0x80)
				pcomp->cname = *cbp++;
			    else {
				const byte *_cbp;
				pcomp->cname = cmd_get_w(cbp, &_cbp);
				cbp = _cbp;
			}} while (0);
			do {
			} while (0);
			porder = &pcomp->corder;
		    }
		    order = *porder;
		    do {
			if (*cbp < 0x80)
			    order.width = *cbp++;
			else {
			    const byte *_cbp;
			    order.width = cmd_get_w(cbp, &_cbp);
			    cbp = _cbp;
		    }} while (0);
		    do {
			if (*cbp < 0x80)
			    order.height = *cbp++;
			else {
			    const byte *_cbp;
			    order.height = cmd_get_w(cbp, &_cbp);
			    cbp = _cbp;
		    }} while (0);
		    do {
			if (*cbp < 0x80)
			    order.raster = *cbp++;
			else {
			    const byte *_cbp;
			    order.raster = cmd_get_w(cbp, &_cbp);
			    cbp = _cbp;
		    }} while (0);
		    do {
			if (*cbp < 0x80)
			    order.shift = *cbp++;
			else {
			    const byte *_cbp;
			    order.shift = cmd_get_w(cbp, &_cbp);
			    cbp = _cbp;
		    }} while (0);
		    do {
			if (*cbp < 0x80)
			    order.num_levels = *cbp++;
			else {
			    const byte *_cbp;
			    order.num_levels = cmd_get_w(cbp, &_cbp);
			    cbp = _cbp;
		    }} while (0);
		    do {
			if (*cbp < 0x80)
			    order.num_bits = *cbp++;
			else {
			    const byte *_cbp;
			    order.num_bits = cmd_get_w(cbp, &_cbp);
			    cbp = _cbp;
		    }} while (0);
		    do {
		    } while (0);
		    code = cmd_install_ht_order(porder, &order, mem);
		    if (code < 0)
			goto out;
		}
		ht_data_index = 0;
		continue;
	    case cmd_opv_set_ht_data:{
		    int n = *cbp++;
		    if (ht_data_index < porder->num_levels) {
			byte *lptr = (byte *) (porder->levels + ht_data_index);
			if (cb_end - cbp >= (n * sizeof(*porder->levels)))
			    memcpy(lptr, cbp, n * sizeof(*porder->levels)), cbp += n * sizeof(*porder->levels);
			else {
			    uint cleft = cb_end - cbp, rleft = (n * sizeof(*porder->levels)) - cleft;
			    memcpy(lptr, cbp, cleft);
			    sgets(s, lptr + cleft, rleft, &rleft);
			    cbp = cb_end;
			};
		    } else {
			byte *bptr = (byte *) (porder->bits + (ht_data_index - porder->num_levels));
			if (cb_end - cbp >= (n * sizeof(*porder->bits)))
			    memcpy(bptr, cbp, n * sizeof(*porder->bits)), cbp += n * sizeof(*porder->bits);
			else {
			    uint cleft = cb_end - cbp, rleft = (n * sizeof(*porder->bits)) - cleft;
			    memcpy(bptr, cbp, cleft);
			    sgets(s, bptr + cleft, rleft, &rleft);
			    cbp = cb_end;
			};
		    }
		    ht_data_index += n;
		}
		if (porder == (dev_ht.components != 0 ? &dev_ht.components[0].corder : &dev_ht.order) && ht_data_index == porder->num_levels + porder->num_bits) {
		    uint i;
		    if (imager_state.ht_cache == 0) {
			gx_ht_cache *pcache = gx_ht_alloc_cache(mem, porder->num_levels + 2, gx_ht_cache_default_bits());
			if (pcache == 0) {
			    code = ((-25));
			    goto out;
			}
			imager_state.ht_cache = pcache;
		    }
		    for (i = 1; i < dev_ht.num_comp; ++i) {
			gx_ht_order *pco = &dev_ht.components[i].corder;
			if (!pco->cache) {
			    gx_ht_cache *pcache = gx_ht_alloc_cache(mem, 1, pco->raster * (pco->num_bits / pco->width));
			    if (pcache == 0) {
				code = ((-25));
				goto out;
			    }
			    pco->cache = pcache;
			    gx_ht_init_cache(pcache, pco);
			}
		    }
		    if (dev_ht.num_comp) {
			dev_ht.components[0].corder.cache = imager_state.ht_cache;
			dev_ht.order = dev_ht.components[0].corder;
		    }
		    gx_imager_dev_ht_install(&imager_state, &dev_ht, halftone_type, (const gx_device *) cdev);
		}
		continue;
	    case cmd_opv_end_page:
		do {
		} while (0);
		goto out;
	    case cmd_opv_delta2_color0:
		pcolor = &set_colors[0];
		goto delta2_c;
	    case cmd_opv_delta2_color1:
		pcolor = &set_colors[1];
	      delta2_c:set_colors = state.colors; {
		    gx_color_index b = ((uint) * cbp << 8) + cbp[1];
		    cbp += 2;
		    if (dev_depth > 24)
			*pcolor += ((b & 0xf000) << 12) + ((b & 0x0f00) << 8) + ((b & 0x00f0) << 4) + (b & 0x000f) - 0x08080808;
		    else
			*pcolor += ((b & 0xf800) << 5) + ((b & 0x07e0) << 3) + (b & 0x001f) - 0x00102010;
		}
		do {
		} while (0);
		continue;
	    case cmd_opv_set_copy_color:
		state.color_is_alpha = 0;
		do {
		} while (0);
		continue;
	    case cmd_opv_set_copy_alpha:
		state.color_is_alpha = 1;
		do {
		} while (0);
		continue;
	    default:
		goto bad_op;
	    }
	case cmd_op_set_color0 >> 4:
	    pcolor = &set_colors[0];
	    goto set_color;
	case cmd_op_set_color1 >> 4:
	    pcolor = &set_colors[1];
	  set_color:set_colors = state.colors;
	    switch (op & 0xf) {
	    case 0:
		break;
	    case 15:
		*pcolor = ((unsigned long) (-1));
		goto setc;
	    default:
		switch (dev_depth_bytes) {
		case 4:{
			gx_color_index b = ((gx_color_index) (op & 0xf) << 8) + *cbp++;
			*pcolor += ((b & 07000) << 15) + ((b & 0700) << 10) + ((b & 070) << 5) + (b & 7) - 0x04040404;
			goto setc;
		    }
		case 3:{
			gx_color_index b = *cbp++;
			*pcolor += ((gx_color_index) (op & 0xf) << 16) + ((b & 0xf0) << 4) + (b & 0x0f) - 0x00080808;
			goto setc;
		    }
		case 2:
		    break;
		case 1:
		    *pcolor += (gx_color_index) (op & 0xf) - 8;
		    goto setc;
		}
	    }
	    {
		gx_color_index color = 0;
		switch (dev_depth_bytes) {
		case 4:
		    color |= (gx_color_index) * cbp++ << 24;
		case 3:
		    color |= (gx_color_index) * cbp++ << 16;
		case 2:
		    color |= (gx_color_index) * cbp++ << 8;
		case 1:
		    color |= (gx_color_index) * cbp++;
		}
		*pcolor = color;
	    }
	  setc:do {
	    } while (0);
	    continue;
	case cmd_op_fill_rect >> 4:
	case cmd_op_tile_rect >> 4:
	    cbp = cmd_read_rect(op, &state.rect, cbp);
	    break;
	case cmd_op_fill_rect_short >> 4:
	case cmd_op_tile_rect_short >> 4:
	    state.rect.x += *cbp + (-128);
	    state.rect.width += cbp[1] + (-128);
	    if (op & 0xf) {
		state.rect.height += (op & 0xf) + (-8);
		cbp += 2;
	    } else {
		state.rect.y += cbp[2] + (-128);
		state.rect.height += cbp[3] + (-128);
		cbp += 4;
	    }
	    break;
	case cmd_op_fill_rect_tiny >> 4:
	case cmd_op_tile_rect_tiny >> 4:
	    if (op & 8)
		state.rect.x += state.rect.width;
	    else {
		int txy = *cbp++;
		state.rect.x += (txy >> 4) + (-8);
		state.rect.y += (txy & 0xf) + (-8);
	    } state.rect.width += (op & 7) + (-4);
	    break;
	case cmd_op_copy_mono >> 4:
	    depth = 1;
	    goto copy;
	case cmd_op_copy_color_alpha >> 4:
	    if (state.color_is_alpha) {
		if (!(op & 8))
		    depth = *cbp++;
	    } else
		depth = dev_depth;
	  copy:do {
		if (*cbp < 0x80)
		    state.rect.x = *cbp++;
		else {
		    const byte *_cbp;
		    state.rect.x = cmd_get_w(cbp, &_cbp);
		    cbp = _cbp;
	    }} while (0);
	    do {
		if (*cbp < 0x80)
		    state.rect.y = *cbp++;
		else {
		    const byte *_cbp;
		    state.rect.y = cmd_get_w(cbp, &_cbp);
		    cbp = _cbp;
	    }} while (0);
	    if (op & 8) {
		depth = state_slot->head.depth;
		state.rect.width = state_slot->width;
		state.rect.height = state_slot->height;
		raster = state_slot->raster;
		source = (byte *) (state_slot + 1);
	    } else {
		uint width_bits, width_bytes;
		uint bytes;
		do {
		    if (*cbp < 0x80)
			state.rect.width = *cbp++;
		    else {
			const byte *_cbp;
			state.rect.width = cmd_get_w(cbp, &_cbp);
			cbp = _cbp;
		}} while (0);
		do {
		    if (*cbp < 0x80)
			state.rect.height = *cbp++;
		    else {
			const byte *_cbp;
			state.rect.height = cmd_get_w(cbp, &_cbp);
			cbp = _cbp;
		}} while (0);
		width_bits = state.rect.width * depth;
		bytes = clist_bitmap_bytes(width_bits, state.rect.height, op & 3, &width_bytes, (uint *) & raster);
		if (op & 3) {
		    stream_cursor_read r;
		    stream_cursor_write w;
		    uint cleft = cb_end - cbp;
		    if (cleft < bytes) {
			uint nread = 800 - cleft;
			memmove(cbuf, cbp, cleft);
			end_status = sgets(s, cbuf + cleft, nread, &nread);
			cb_end = cbuf + cleft + nread;
			cb_limit = cbuf + (800 - (2 + (1 + 11) * sizeof(float)) + 1);
			if (cb_limit > cb_end)
			    cb_limit = cb_end;
			cbp = cbuf;
		    }
		    r.ptr = cbp - 1;
		    r.limit = cb_end - 1;
		    w.ptr = data_bits - 1;
		    w.limit = w.ptr + 800;
		    switch (op & 3) {
		    case 1:{
			    stream_RLD_state sstate; {
				((&sstate)->EndOfData = ((bool) 1));
				((&sstate)->copy_left = 0);
			    };
			    (*s_RLD_template.process) ((stream_state *) & sstate, &r, &w, ((bool) 1));
			}
			break;
		    case 2:{
			    stream_CFD_state sstate; {
				(*s_CFD_template.set_defaults) ((stream_state *) & sstate); {
				    (&sstate)->memory = &gs_memory_default;
				    (&sstate)->K = -1;
				    (&sstate)->Columns = (width_bytes << 3);
				    (&sstate)->EndOfBlock = ((bool) 0);
				    (&sstate)->BlackIs1 = ((bool) 1);
				    (&sstate)->DecodedByteAlign = (1 << 2);
				};
				(&sstate)->Rows = (state.rect.height);
				(*s_CFD_template.init) ((stream_state *) (&sstate));
			    };
			    (*s_CFD_template.process) ((stream_state *) & sstate, &r, &w, ((bool) 1));
			    (*s_CFD_template.release) ((stream_state *) & sstate);
			}
			break;
		    default:
			goto bad_op;
		    }
		    cbp = r.ptr + 1;
		    source = data_bits;
		} else if (state.rect.height > 1 && width_bytes != raster) {
		    source = data_bits;
		    if (cb_end - cbp >= ((width_bytes) * (state.rect.height)))
			memcpy(source, cbp, (width_bytes) * (state.rect.height)), cbp += (width_bytes) * (state.rect.height);
		    else {
			uint cleft = cb_end - cbp, rleft = ((width_bytes) * (state.rect.height)) - cleft;
			memcpy(source, cbp, cleft);
			sgets(s, source + cleft, rleft, &rleft);
			cbp = cb_end;
		    };
		    clist_unpack_short_bits(source, source, width_bytes, state.rect.height, raster);
		} else {
		    if (cb_end - cbp >= (bytes))
			memcpy(cbuf, cbp, bytes), cbp += bytes;
		    else {
			uint cleft = cb_end - cbp, rleft = (bytes) - cleft;
			memcpy(cbuf, cbp, cleft);
			sgets(s, cbuf + cleft, rleft, &rleft);
			cbp = cb_end;
		    };
		    source = cbuf;
		}
	    }
	    break;
	case cmd_op_delta_tile_index >> 4:
	    state.tile_index += (int) (op & 0xf) - 8;
	    goto sti;
	case cmd_op_set_tile_index >> 4:
	    state.tile_index = ((op & 0xf) << 8) + *cbp++;
	  sti:state_slot = (tile_slot *) (cdev->chunk.data + cdev->tile_table[state.tile_index].offset);
	    do {
	    } while (0);
	    state_tile.data = (byte *) (state_slot + 1);
	  stp:state_tile.size.x = state_slot->width;
	    state_tile.size.y = state_slot->height;
	    state_tile.raster = state_slot->raster;
	    state_tile.rep_width = state_tile.size.x / state_slot->x_reps;
	    state_tile.rep_height = state_tile.size.y / state_slot->y_reps;
	    state_tile.rep_shift = state_slot->rep_shift;
	    state_tile.shift = state_slot->shift;
	  set_phase:tile_phase.x = (state.tile_phase.x + x0) % state_tile.size.x;
	    tile_phase.y = (state.tile_phase.y + y0) % state_tile.size.y;
	    gx_imager_setscreenphase(&imager_state, -(state.tile_phase.x + x0), -(state.tile_phase.y + y0), gs_color_select_all);
	    continue;
	case cmd_op_misc2 >> 4:
	    switch (op) {
	    case cmd_opv_set_flatness:
		memcpy(&imager_state.flatness, cbp, sizeof(imager_state.flatness));
		cbp += sizeof(imager_state.flatness);
		do {
		} while (0);
		continue;
	    case cmd_opv_set_fill_adjust:
		memcpy(&imager_state.fill_adjust.x, cbp, sizeof(imager_state.fill_adjust.x));
		cbp += sizeof(imager_state.fill_adjust.x);
		memcpy(&imager_state.fill_adjust.y, cbp, sizeof(imager_state.fill_adjust.y));
		cbp += sizeof(imager_state.fill_adjust.y);
		do {
		} while (0);
		continue;
	    case cmd_opv_set_ctm:{
		    gs_matrix mat;
		    cbp = cmd_read_matrix(&mat, cbp);
		    mat.tx -= x0;
		    mat.ty -= y0;
		    gs_imager_setmatrix(&imager_state, &mat);
		    do {
		    } while (0);
		}
		continue;
	    case cmd_opv_set_line_width:{
		    float width;
		    memcpy(&width, cbp, sizeof(width));
		    cbp += sizeof(width);
		    do {
		    } while (0);
		    ((&imager_state.line_params)->half_width = (width) / 2);
		}
		continue;
	    case cmd_opv_set_misc2:{
		    uint cb = *cbp;
		    switch (cb >> 6) {
		    case (0 << 6) >> 6:
			imager_state.line_params.cap = (gs_line_cap) ((cb >> 3) & 7);
			imager_state.line_params.join = (gs_line_join) (cb & 7);
			do {
			} while (0);
			break;
		    case (1 << 6) >> 6:
			imager_state.accurate_curves = (cb & 4) != 0;
			imager_state.overprint = (cb & 2) != 0;
			imager_state.stroke_adjust = cb & 1;
			do {
			} while (0);
			break;
		    case (2 << 6) >> 6:
			notes = (segment_notes) (cb & 0x3f);
			do {
			} while (0);
			break;
		    default:
			goto bad_op;
		    }
		}
		cbp++;
		continue;
	    case cmd_opv_set_miter_limit:{
		    float limit;
		    memcpy(&limit, cbp, sizeof(limit));
		    cbp += sizeof(limit);
		    do {
		    } while (0);
		    gx_set_miter_limit(&imager_state.line_params, limit);
		}
		continue;
	    case cmd_opv_set_dash:{
		    int nb = *cbp++;
		    int n = nb & 0x3f;
		    float dot_length, offset;
		    memcpy(&dot_length, cbp, sizeof(dot_length));
		    cbp += sizeof(dot_length);
		    memcpy(&offset, cbp, sizeof(offset));
		    cbp += sizeof(offset);
		    memcpy(dash_pattern, cbp, n * sizeof(float));
		    gx_set_dash(&imager_state.line_params.dash, dash_pattern, n, offset, ((void *) 0));
		    ((&imager_state.line_params.dash)->adapt = ((nb & 0x80) != 0));
		    gx_set_dot_length(&imager_state.line_params, dot_length, (nb & 0x40) != 0);
		    cbp += n * sizeof(float);
		} break;
	    case cmd_opv_enable_clip:
		pcpath = (use_clip ? &clip_path : ((void *) 0));
		do {
		} while (0);
		break;
	    case cmd_opv_disable_clip:
		pcpath = ((void *) 0);
		do {
		} while (0);
		break;
	    case cmd_opv_begin_clip:
		pcpath = ((void *) 0);
		do {
		} while (0);
		gx_cpath_release(&clip_path);
		gx_cpath_accum_begin(&clip_accum, mem);
		gx_cpath_accum_set_cbox(&clip_accum, &target_box);
		tdev = (gx_device *) & clip_accum;
		clip_save.lop_enabled = state.lop_enabled;
		clip_save.fill_adjust = imager_state.fill_adjust;
		state.lop_enabled = ((bool) 0);
		imager_state.log_op = (rop3_default | (((bool) 0) ? 0x100 : 0) | (((bool) 0) ? 0x200 : 0) | (0 << 10));
		imager_state.fill_adjust.x = imager_state.fill_adjust.y = ((1L << 12) >> 1);
		break;
	    case cmd_opv_end_clip:
		do {
		} while (0);
		gx_cpath_accum_end(&clip_accum, &clip_path);
		gx_cpath_set_outside(&clip_path, *cbp++);
		tdev = target; {
		    gs_fixed_rect cbox;
		    gx_cpath_inner_box(&clip_path, &cbox);
		    use_clip = !(cbox.p.x <= target_box.p.x && cbox.q.x >= target_box.q.x && cbox.p.y <= target_box.p.y && cbox.q.y >= target_box.q.y);
		}
		pcpath = (use_clip ? &clip_path : ((void *) 0));
		state.lop_enabled = clip_save.lop_enabled;
		imager_state.log_op = (state.lop_enabled ? state.lop : (rop3_default | (((bool) 0) ? 0x100 : 0) | (((bool) 0) ? 0x200 : 0) | (0 << 10)));
		imager_state.fill_adjust = clip_save.fill_adjust;
		break;
	    case cmd_opv_set_color_space:{
		    byte b = *cbp++;
		    int index = b >> 4;
		    do {
		    } while (0);
		    switch (index) {
		    case gs_color_space_index_DeviceGray:
			pcs = gs_color_space_DeviceGray();
			break;
		    case gs_color_space_index_DeviceRGB:
			pcs = gs_color_space_DeviceRGB();
			break;
		    case gs_color_space_index_DeviceCMYK:
			pcs = gs_color_space_DeviceCMYK();
			break;
		    default:
			goto bad_op;
		    }
		    if (b & 8) {
			int num_comp = gs_color_space_num_components(pcs);
			color_space.type = &gs_color_space_type_Indexed;
			color_space.params.indexed.base_space.type = pcs->type;
			do {
			    if (*cbp < 0x80)
				color_space.params.indexed.hival = *cbp++;
			    else {
				const byte *_cbp;
				color_space.params.indexed.hival = cmd_get_w(cbp, &_cbp);
				cbp = _cbp;
			}} while (0);
			color_space.params.indexed.use_proc = (b & 4) != 0;
			pcs = &color_space;
		    }
		}
		break;
	    case cmd_opv_begin_image:{
		    byte b = *cbp++;
		    int bpci = b >> 5;
		    static const byte bpc[6] = { 1, 1, 2, 4, 8, 12 };
		    gx_drawing_color devc;
		    int num_components;
		    do {
			if (*cbp < 0x80)
			    image.Width = *cbp++;
			else {
			    const byte *_cbp;
			    image.Width = cmd_get_w(cbp, &_cbp);
			    cbp = _cbp;
		    }} while (0);
		    do {
			if (*cbp < 0x80)
			    image.Height = *cbp++;
			else {
			    const byte *_cbp;
			    image.Height = cmd_get_w(cbp, &_cbp);
			    cbp = _cbp;
		    }} while (0);
		    do {
		    } while (0);
		    if (b & (1 << 3)) {
			cbp = cmd_read_matrix(&image.ImageMatrix, cbp);
			do {
			} while (0);
		    } else {
			image.ImageMatrix.xx = image.Width;
			image.ImageMatrix.xy = 0;
			image.ImageMatrix.yx = 0;
			image.ImageMatrix.yy = -image.Height;
			image.ImageMatrix.tx = 0;
			image.ImageMatrix.ty = image.Height;
		    }
		    image.BitsPerComponent = bpc[bpci];
		    if (bpci == 0) {
			image.ColorSpace = 0;
			image.ImageMask = ((bool) 1);
			image.Decode[0] = 0;
			image.Decode[1] = 1;
			num_components = 1;
		    } else {
			image.ColorSpace = pcs;
			image.ImageMask = ((bool) 0);
			if (gs_color_space_get_index(pcs) == gs_color_space_index_Indexed) {
			    image.Decode[0] = 0;
			    image.Decode[1] = (1 << image.BitsPerComponent) - 1;
			} else {
			    static const float decode01[] = { 0, 1, 0, 1, 0, 1, 0, 1 };
			    memcpy(image.Decode, decode01, sizeof(image.Decode));
			}
			num_components = gs_color_space_num_components(pcs);
		    }
		    image.Interpolate = (b & (1 << 4)) != 0;
		    if (b & (1 << 2)) {
			byte dflags = *cbp++;
			int i;
			for (i = 0; i < num_components * 2; dflags <<= 2, i += 2)
			    switch ((dflags >> 6) & 3) {
			    case 0:
				break;
			    case 1:
				image.Decode[i] = image.Decode[i + 1];
				image.Decode[i + 1] = 0;
				break;
			    case 3:
				memcpy(&image.Decode[i], cbp, sizeof(image.Decode[i]));
				cbp += sizeof(image.Decode[i]);
			    case 2:
				memcpy(&image.Decode[i + 1], cbp, sizeof(image.Decode[i + 1]));
				cbp += sizeof(image.Decode[i + 1]);
			    }
		    }
		    image.adjust = ((bool) 0);
		    image.CombineWithColor = ((bool) 0);
		    if (b & (1 << 1)) {
			if (image.ImageMask)
			    image.adjust = ((bool) 1);
			else
			    image.CombineWithColor = ((bool) 1);
			do {
			} while (0);
		    }
		    if (b & (1 << 0)) {
			uint diff;
			do {
			    if (*cbp < 0x80)
				image_rect.p.x = *cbp++;
			    else {
				const byte *_cbp;
				image_rect.p.x = cmd_get_w(cbp, &_cbp);
				cbp = _cbp;
			}} while (0);
			do {
			    if (*cbp < 0x80)
				image_rect.p.y = *cbp++;
			    else {
				const byte *_cbp;
				image_rect.p.y = cmd_get_w(cbp, &_cbp);
				cbp = _cbp;
			}} while (0);
			do {
			    if (*cbp < 0x80)
				diff = *cbp++;
			    else {
				const byte *_cbp;
				diff = cmd_get_w(cbp, &_cbp);
				cbp = _cbp;
			}} while (0);
			image_rect.q.x = image.Width - diff;
			do {
			    if (*cbp < 0x80)
				diff = *cbp++;
			    else {
				const byte *_cbp;
				diff = cmd_get_w(cbp, &_cbp);
				cbp = _cbp;
			}} while (0);
			image_rect.q.y = image.Height - diff;
			do {
			} while (0);
		    } else {
			image_rect.p.x = 0;
			image_rect.p.y = 0;
			image_rect.q.x = image.Width;
			image_rect.q.y = image.Height;
		    }
		    do {
		    } while (0);
		    ((&devc)->colors.pure = (state.colors[1]), (&devc)->type = (&gx_dc_procs_pure));
		    code = (*((tdev)->std_procs.begin_image)) (tdev, &imager_state, &image, gs_image_format_chunky, &image_rect, &devc, pcpath, mem, &image_info);
		    if (code < 0)
			goto out;
		}
		break;
	    case cmd_opv_image_data:{
		    uint height;
		    do {
			if (*cbp < 0x80)
			    height = *cbp++;
			else {
			    const byte *_cbp;
			    height = cmd_get_w(cbp, &_cbp);
			    cbp = _cbp;
		    }} while (0);
		    if (height == 0) {
			do {
			} while (0);
			code = (*((tdev)->std_procs.end_image)) (tdev, image_info, ((bool) 1));
		    } else {
			uint bytes_per_row, nbytes;
			const byte *data;
			byte *data_on_heap = 0;
			do {
			    if (*cbp < 0x80)
				bytes_per_row = *cbp++;
			    else {
				const byte *_cbp;
				bytes_per_row = cmd_get_w(cbp, &_cbp);
				cbp = _cbp;
			}} while (0);
			do {
			} while (0);
			nbytes = bytes_per_row * height;
			if (cb_end - cbp >= nbytes) {
			    data = cbp;
			    cbp += nbytes;
			} else {
			    uint cleft = cb_end - cbp;
			    uint rleft = nbytes - cleft;
			    byte *rdata;
			    if (nbytes > cb_end - cbuf) {
				rdata = data_on_heap = (*(mem)->procs.alloc_bytes) (mem, nbytes, "clist image_data");
				if (rdata == 0) {
				    code = ((-25));
				    goto out;
				}
			    } else
				rdata = cbuf;
			    memmove(rdata, cbp, cleft);
			    sgets(s, rdata + cleft, rleft, &rleft);
			    data = rdata;
			    cbp = cb_end;
			}
			code = (*((tdev)->std_procs.image_data)) (tdev, image_info, &data, data_x, bytes_per_row, height);
			if (data_on_heap)
			    (*(mem)->procs.free_object) (mem, data_on_heap, "clist image_data");
			data_x = 0;
		    }
		}
		if (code < 0)
		    goto out;
		continue;
	    case cmd_opv_set_color:{
		    byte b = *cbp++;
		    int i;
		    switch (b >> 4) {
		    case 0:
			dev_color.colors.colored.c_base[0] = (b >> 3) & 1;
			dev_color.colors.colored.c_base[1] = (b >> 2) & 1;
			dev_color.colors.colored.c_base[2] = (b >> 1) & 1;
			dev_color.colors.colored.c_base[3] = b & 1;
			break;
		    case 1:
			dev_color.colors.colored.c_base[0] = ((b & 0xf) << 1) + (*cbp >> 7);
			dev_color.colors.colored.c_base[1] = (*cbp >> 2) & 0x1f;
			dev_color.colors.colored.c_base[2] = ((*cbp & 3) << 3) + (cbp[1] >> 5);
			dev_color.colors.colored.c_base[3] = cbp[1] & 0x1f;
			cbp += 2;
			break;
		    default:
			goto bad_op;
		    }
		    for (i = 0; i < imager_state.dev_ht->num_comp; ++i)
			do {
			    if (*cbp < 0x80)
				dev_color.colors.colored.c_level[i] = *cbp++;
			    else {
				const byte *_cbp;
				dev_color.colors.colored.c_level[i] = cmd_get_w(cbp, &_cbp);
				cbp = _cbp;
			}} while (0);
		    do {
		    } while (0);
		    ((&dev_color)->colors.colored.c_ht = (imager_state.dev_ht), (&dev_color)->colors.colored.alpha = ((unsigned short) 0xffff + (unsigned short) 0), (&dev_color)->type = (&gx_dc_procs_ht_colored));
		} continue;
	    default:
		goto bad_op;
	    }
	    continue;
	case cmd_op_segment >> 4:{
		fixed vs[6];
		int i, code;
		if (!in_path) {
		    ppos.x = ((fixed) (state.rect.x) << 12);
		    ppos.y = ((fixed) (state.rect.y) << 12);
		    do {
		    } while (0);
		    notes = sn_none;
		    in_path = ((bool) 1);
		}
		for (i = 0; i < clist_segment_op_num_operands[op & 0xf]; ++i) {
		    fixed v;
		    int b = *cbp;
		    switch (b >> 5) {
		    case 0:
		    case 1:
			vs[i++] = ((fixed) ((b ^ 0x20) - 0x20) << 13) + ((int) cbp[1] << 5) + (cbp[2] >> 3);
			do {
			} while (0);
			cbp += 2;
			v = (int) ((*cbp & 7) ^ 4) - 4;
			break;
		    case 2:
		    case 3:
			v = (b ^ 0x60) - 0x20;
			break;
		    case 4:
		    case 5:
			v = (((b ^ 0xa0) - 0x20) << 8) + (int) *++cbp;
			break;
		    case 6:
			v = (b ^ 0xd0) - 0x10;
			vs[i] = ((v << 8) + cbp[1]) << (12 - 2);
			do {
			} while (0);
			cbp += 2;
			continue;
		    default:
			v = (int) (*++cbp ^ 0x80) - 0x80;
			for (b = 0; b < sizeof(fixed) - 3; ++b)
			    v = (v << 8) + *++cbp;
			break;
		    }
		    cbp += 3;
		    vs[i] = (v << 16) + (uint) (cbp[-2] << 8) + cbp[-1];
		    do {
		    } while (0);
		}
		do {
		} while (0);
		code = clist_decode_segment(&path, op, vs, &ppos, x0, y0, notes);
		if (code < 0)
		    goto out;
	    }
	    continue;
	case cmd_op_path >> 4:{
		gx_device_color devc;
		gx_device_color *pdevc;
		gx_ht_tile ht_tile;
		do {
		} while (0);
		switch (op) {
		case cmd_opv_fill:
		    fill_params.rule = (-1);
		    goto fill_pure;
		case cmd_opv_eofill:
		    fill_params.rule = 1;
		  fill_pure:((&devc)->colors.pure = (state.colors[1]), (&devc)->type = (&gx_dc_procs_pure));
		    pdevc = &devc;
		    goto fill;
		case cmd_opv_htfill:
		    fill_params.rule = (-1);
		    goto fill_ht;
		case cmd_opv_hteofill:
		    fill_params.rule = 1;
		  fill_ht:ht_tile.tiles = state_tile;
		    ((&devc)->colors.binary.b_ht = 0, (&devc)->colors.binary.color[0] = (state.tile_colors[0]), (&devc)->colors.binary.color[1] = (state.tile_colors[1]), (&devc)->colors.binary.b_tile = (&ht_tile), (&devc)->type = (&gx_dc_procs_ht_binary));
		    pdevc = &devc;
		    pdevc->phase = tile_phase;
		    goto fill;
		case cmd_opv_colorfill:
		    fill_params.rule = (-1);
		    goto fill_color;
		case cmd_opv_coloreofill:
		    fill_params.rule = 1;
		  fill_color:pdevc = &dev_color;
		    pdevc->phase = tile_phase;
		    code = (*(pdevc)->type->load) (pdevc, &imager_state, tdev, gs_color_select_texture);
		    if (code < 0)
			break;
		  fill:fill_params.adjust = imager_state.fill_adjust;
		    fill_params.flatness = imager_state.flatness;
		    code = (*((tdev)->std_procs.fill_path)) (tdev, &imager_state, &path, &fill_params, pdevc, pcpath);
		    break;
		case cmd_opv_stroke:
		    ((&devc)->colors.pure = (state.colors[1]), (&devc)->type = (&gx_dc_procs_pure));
		    pdevc = &devc;
		    goto stroke;
		case cmd_opv_htstroke:
		    ht_tile.tiles = state_tile;
		    ((&devc)->colors.binary.b_ht = 0, (&devc)->colors.binary.color[0] = (state.tile_colors[0]), (&devc)->colors.binary.color[1] = (state.tile_colors[1]), (&devc)->colors.binary.b_tile = (&ht_tile), (&devc)->type = (&gx_dc_procs_ht_binary));
		    pdevc = &devc;
		    pdevc->phase = tile_phase;
		    goto stroke;
		case cmd_opv_colorstroke:
		    pdevc = &dev_color;
		    pdevc->phase = tile_phase;
		    code = (*(pdevc)->type->load) (pdevc, &imager_state, tdev, gs_color_select_texture);
		    if (code < 0)
			break;
		  stroke:stroke_params.flatness = imager_state.flatness;
		    code = gx_stroke_path_only(&path, (gx_path *) 0, tdev, &imager_state, &stroke_params, pdevc, pcpath);
		    break;
		default:
		    goto bad_op;
		}
	    }
	    if (in_path) {
		state.rect.x = ((int) ((ppos.x) >> (12)));
		state.rect.y = ((int) ((ppos.y) >> (12)));
		in_path = ((bool) 0);
	    }
	    gx_path_release(&path);
	    gx_path_init(&path, mem);
	    if (code < 0)
		goto out;
	    continue;
	default:
	  bad_op:(lprintf_file_and_line(gs_stderr, "gxclread.c", 1753), fprintf(gs_stderr, "Bad op %02x band y0 = %d file pos %ld buf pos %d/%d\n", op, y0, stell(s), (int) (cbp - cbuf), (int) (cb_end - cbuf))); {
		const byte *pp;
		for (pp = cbuf; pp < cb_end; pp += 10) {
		    fprintf(gs_stderr, "%4d:", (int) (pp - cbuf));
		    fprintf(gs_stderr, " %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n", pp[0], pp[1], pp[2], pp[3], pp[4], pp[5], pp[6], pp[7], pp[8], pp[9]);
	    }} code = ((-100));
	    goto out;
	}
	do {
	} while (0);
	switch (op >> 4) {
	case cmd_op_fill_rect >> 4:
	case cmd_op_fill_rect_short >> 4:
	case cmd_op_fill_rect_tiny >> 4:
	    if (!state.lop_enabled) {
		code = (*((tdev)->std_procs.fill_rectangle)) (tdev, state.rect.x - x0, state.rect.y - y0, state.rect.width, state.rect.height, state.colors[1]);
		break;
	    }
	    source = ((void *) 0);
	    data_x = 0;
	    raster = 0;
	    colors[0] = colors[1] = state.colors[1];
	    log_op = state.lop;
	    pcolor = colors;
	  do_rop:code = (*((tdev)->std_procs.strip_copy_rop)) (tdev, source, data_x, raster, 0L, pcolor, &state_tile, (state.tile_colors[0] == ((unsigned long) (-1)) && state.tile_colors[1] == ((unsigned long) (-1)) ? ((void *) 0) : state.tile_colors), state.rect.x - x0, state.rect.y - y0, state.rect.width - data_x, state.rect.height, tile_phase.x, tile_phase.y, log_op);
	    data_x = 0;
	    break;
	case cmd_op_tile_rect >> 4:
	case cmd_op_tile_rect_short >> 4:
	case cmd_op_tile_rect_tiny >> 4:
	    code = (*((tdev)->std_procs.strip_tile_rectangle)) (tdev, &state_tile, state.rect.x - x0, state.rect.y - y0, state.rect.width, state.rect.height, state.tile_colors[0], state.tile_colors[1], tile_phase.x, tile_phase.y);
	    break;
	case cmd_op_copy_mono >> 4:
	    if (state.lop_enabled) {
		pcolor = state.colors;
		log_op = state.lop;
		goto do_rop;
	    }
	    if ((op & 4) || pcpath != ((void *) 0)) {
		gx_drawing_color dcolor;
		gx_ht_tile ht_tile;
		if (op & 4) {
		    ht_tile.tiles = state_tile;
		    ((&dcolor)->colors.binary.b_ht = 0, (&dcolor)->colors.binary.color[0] = (state.tile_colors[0]), (&dcolor)->colors.binary.color[1] = (state.tile_colors[1]), (&dcolor)->colors.binary.b_tile = (&ht_tile), (&dcolor)->type = (&gx_dc_procs_ht_binary));
		    dcolor.phase = tile_phase;
		} else {
		    ((&dcolor)->colors.pure = (state.colors[1]), (&dcolor)->type = (&gx_dc_procs_pure));
		}
		code = (*((tdev)->std_procs.fill_mask)) (tdev, source, data_x, raster, 0L, state.rect.x - x0, state.rect.y - y0, state.rect.width - data_x, state.rect.height, &dcolor, 1, imager_state.log_op, pcpath);
	    } else
		code = (*((tdev)->std_procs.copy_mono)) (tdev, source, data_x, raster, 0L, state.rect.x - x0, state.rect.y - y0, state.rect.width - data_x, state.rect.height, state.colors[0], state.colors[1]);
	    data_x = 0;
	    break;
	case cmd_op_copy_color_alpha >> 4:
	    if (state.color_is_alpha) {
		code = (*((tdev)->std_procs.copy_alpha)) (tdev, source, data_x, raster, 0L, state.rect.x - x0, state.rect.y - y0, state.rect.width - data_x, state.rect.height, state.colors[1], depth);
	    } else {
		if (state.lop_enabled) {
		    pcolor = ((void *) 0);
		    log_op = state.lop;
		    goto do_rop;
		}
		code = (*((tdev)->std_procs.copy_color)) (tdev, source, data_x, raster, 0L, state.rect.x - x0, state.rect.y - y0, state.rect.width - data_x, state.rect.height);
	    }
	    data_x = 0;
	    break;
	default:
	    goto bad_op;
	}
    }
  out:gx_cpath_release(&clip_path);
    gx_path_release(&path);
    if (imager_state.ht_cache)
	gx_ht_free_cache(mem, imager_state.ht_cache);
    gx_device_halftone_release(&dev_ht, mem);
    gs_imager_state_release(&imager_state);
    (*(mem)->procs.free_object) (mem, data_bits, "clist_render_band(data_bits)");
    if (code < 0)
	return (code);
    if (cbp < cb_end || !(((s)->cursor.r.ptr >= (s)->cursor.r.limit) && (s)->end_status == ((int) (-1))))
	goto in;
    return code;
}

static void clist_unpack_short_bits(byte * dest, const byte * src, register int width_bytes, int height, uint raster)
{
    uint bytes = width_bytes * height;
    const byte *pdata = src + bytes;
    byte *udata = dest + height * raster;
    while (--height >= 0) {
	udata -= raster, pdata -= width_bytes;
	switch (width_bytes) {
	default:
	    memmove(udata, pdata, width_bytes);
	    break;
	case 6:
	    udata[5] = pdata[5];
	case 5:
	    udata[4] = pdata[4];
	case 4:
	    udata[3] = pdata[3];
	case 3:
	    udata[2] = pdata[2];
	case 2:
	    udata[1] = pdata[1];
	case 1:
	    udata[0] = pdata[0];
	case 0:;
	}
    }
}

static const byte *cmd_read_rect(int op, register gx_cmd_rect * prect, register const byte * cbp)
{
    do {
	if (*cbp < 0x80)
	    prect->x = *cbp++;
	else {
	    const byte *_cbp;
	    prect->x = cmd_get_w(cbp, &_cbp);
	    cbp = _cbp;
    }} while (0);
    if (op & 0xf)
	prect->y += ((op >> 2) & 3) - 2;
    else {
	do {
	    if (*cbp < 0x80)
		prect->y = *cbp++;
	    else {
		const byte *_cbp;
		prect->y = cmd_get_w(cbp, &_cbp);
		cbp = _cbp;
	}} while (0);
    }
    do {
	if (*cbp < 0x80)
	    prect->width = *cbp++;
	else {
	    const byte *_cbp;
	    prect->width = cmd_get_w(cbp, &_cbp);
	    cbp = _cbp;
    }} while (0);
    if (op & 0xf)
	prect->height += (op & 3) - 2;
    else {
	do {
	    if (*cbp < 0x80)
		prect->height = *cbp++;
	    else {
		const byte *_cbp;
		prect->height = cmd_get_w(cbp, &_cbp);
		cbp = _cbp;
	}} while (0);
    }
    return cbp;
}

static const byte *cmd_read_matrix(gs_matrix * pmat, const byte * cbp)
{
    byte b = *cbp++;
    float coeff[6];
    int i;
    for (i = 0; i < 4; i += 2, b <<= 2)
	if (!(b & 0xc0))
	    coeff[i] = coeff[i ^ 3] = 0.0;
	else {
	    float value;
	    memcpy(&value, cbp, sizeof(value));
	    cbp += sizeof(value);
	    coeff[i] = value;
	    switch ((b >> 6) & 3) {
	    case 1:
		coeff[i ^ 3] = value;
		break;
	    case 2:
		coeff[i ^ 3] = -value;
		break;
	    case 3:
		memcpy(&coeff[i ^ 3], cbp, sizeof(coeff[i ^ 3]));
		cbp += sizeof(coeff[i ^ 3]);
	    }
	}
    for (; i < 6; ++i, b <<= 1)
	if (b & 0x80) {
	    memcpy(&coeff[i], cbp, sizeof(coeff[i]));
	    cbp += sizeof(coeff[i]);
	} else
	    coeff[i] = 0.0;
    pmat->xx = coeff[0];
    pmat->xy = coeff[1];
    pmat->yx = coeff[2];
    pmat->yy = coeff[3];
    pmat->tx = coeff[4];
    pmat->ty = coeff[5];
    return cbp;
}

static int cmd_select_map(cmd_map_index map_index, bool load, gs_imager_state * pis, gx_ht_order * porder, frac ** pmdata, uint * pcount, gs_memory_t * mem)
{
    gx_transfer_map *map;
    gx_transfer_map **pmap;
    const char *cname;
    switch (map_index) {
    case cmd_map_transfer:
	do {
	} while (0);
	map = pis->set_transfer.colored.gray;
	pis->effective_transfer.indexed[0] = pis->effective_transfer.indexed[1] = pis->effective_transfer.indexed[2] = pis->effective_transfer.indexed[3] = map;
	break;
    case cmd_map_transfer_0:
    case cmd_map_transfer_1:
    case cmd_map_transfer_2:
    case cmd_map_transfer_3:{
	    int i = map_index - cmd_map_transfer_0;
	    do {
	    } while (0);
	    do {
		if ((pis->set_transfer.indexed[i]) == 0 || (pis->set_transfer.indexed[i])->rc.ref_count > 1 || (pis->set_transfer.indexed[i])->rc.memory != (mem)) {
		    gx_transfer_map *new;
		    do {
			if (((new) = (gx_transfer_map *) (*(mem)->procs.alloc_struct) (mem, &st_transfer_map, "cmd_select_map(transfer)")) == 0) {
			    return ((-25));
			} else {
			    (new)->rc.ref_count = 1;
			    (new)->rc.memory = mem;
			    (new)->rc.free = rc_free_struct_only;
			}
		    } while (0);
		    if (pis->set_transfer.indexed[i])
			(pis->set_transfer.indexed[i])->rc.ref_count--;
		    (pis->set_transfer.indexed[i]) = new;
		}
	    } while (0);
	    map = pis->set_transfer.indexed[i];
	    pis->effective_transfer.indexed[i] = map;
	}
	break;
    case cmd_map_ht_transfer:
	do {
	} while (0);
	pmap = &porder->transfer;
	cname = "cmd_select_map(ht transfer)";
	goto alloc;
    case cmd_map_black_generation:
	do {
	} while (0);
	pmap = &pis->black_generation;
	cname = "cmd_select_map(black generation)";
	goto alloc;
    case cmd_map_undercolor_removal:
	do {
	} while (0);
	pmap = &pis->undercolor_removal;
	cname = "cmd_select_map(undercolor removal)";
      alloc:if (!load) {
	    do {
		if ((*pmap) != 0 && !((*pmap)->rc.ref_count += -1)) {
		    (*(*pmap)->rc.free) ((*pmap)->rc.memory, (void *) (*pmap), cname);
		    (*pmap) = 0;
		}
	    } while (0);
	    *pmap = 0;
	    *pmdata = 0;
	    *pcount = 0;
	    return 0;
	}
	do {
	    if ((*pmap) == 0 || (*pmap)->rc.ref_count > 1 || (*pmap)->rc.memory != (mem)) {
		gx_transfer_map *new;
		do {
		    if (((new) = (gx_transfer_map *) (*(mem)->procs.alloc_struct) (mem, &st_transfer_map, cname)) == 0) {
			return ((-25));
		    } else {
			(new)->rc.ref_count = 1;
			(new)->rc.memory = mem;
			(new)->rc.free = rc_free_struct_only;
		    }
		} while (0);
		if (*pmap)
		    (*pmap)->rc.ref_count--;
		(*pmap) = new;
	    }
	} while (0);
	map = *pmap;
	break;
    default:
	*pmdata = 0;
	return 0;
    }
    map->proc = gs_mapped_transfer;
    *pmdata = map->values;
    *pcount = sizeof(map->values);
    return 0;
}

static int cmd_install_ht_order(gx_ht_order * porder, const gx_ht_order * pnew, gs_memory_t * mem)
{
    uint *levels = porder->levels;
    gx_ht_bit *bits = porder->bits;
    if (pnew->num_levels > porder->num_levels) {
	if (levels == 0)
	    levels = (uint *) (*(mem)->procs.alloc_byte_array) (mem, pnew->num_levels, sizeof(*levels), "ht order(levels)");
	else
	    levels = (*(mem)->procs.resize_object) (mem, levels, pnew->num_levels * sizeof(*levels), "ht order(levels)");
	if (levels == 0)
	    return ((-25));
	porder->levels = levels;
	porder->num_levels = pnew->num_levels;
    }
    if (pnew->num_bits > porder->num_bits) {
	if (bits == 0)
	    bits = (gx_ht_bit *) (*(mem)->procs.alloc_byte_array) (mem, pnew->num_bits, sizeof(*bits), "ht order(bits)");
	else
	    bits = (*(mem)->procs.resize_object) (mem, bits, pnew->num_bits * sizeof(*bits), "ht order(bits)");
	if (bits == 0)
	    return ((-25));
    }
    *porder = *pnew;
    porder->levels = levels;
    porder->bits = bits;
    porder->full_height = ((porder)->shift == 0 ? (porder)->height : (porder)->width / igcd((porder)->width, (porder)->shift) * (porder)->height);
    return 0;
}
// complexity is O(n) inferred by loopus
static int cmd_resize_halftone(gx_device_halftone * pdht, uint num_comp, gs_memory_t * mem)
{
    if (num_comp != pdht->num_comp) {
	gx_ht_order_component *pcomp;
	if (num_comp < pdht->num_comp) {
	    uint i;
	    for (i = pdht->num_comp; i-- > num_comp;)
		if (pdht->components[i].corder.bits != pdht->order.bits)
		    gx_ht_order_release(&pdht->components[i].corder, mem, ((bool) 1));
	    if (num_comp == 0) {
		(*(mem)->procs.free_object) (mem, pdht->components, "cmd_resize_halftone");
		pcomp = 0;
	    } else {
		pcomp = (*(mem)->procs.resize_object) (mem, pdht->components, num_comp, "cmd_resize_halftone");
		if (pcomp == 0) {
		    pdht->num_comp = num_comp;
		    return ((-25));
		}
	    }
	} else {
	    if (pdht->num_comp == 0)
		pcomp = (gx_ht_order_component *) (*(mem)->procs.alloc_struct_array) (mem, num_comp, &st_ht_order_component_element, "cmd_resize_halftone");
	    else
		pcomp = (*(mem)->procs.resize_object) (mem, pdht->components, num_comp, "cmd_resize_halftone");
	    if (pcomp == 0)
		return ((-25));
	    memset(&pcomp[pdht->num_comp], 0, sizeof(*pcomp) * (num_comp - pdht->num_comp));
	}
	pdht->num_comp = num_comp;
	pdht->components = pcomp;
    }
    return 0;
}

static int clist_decode_segment(gx_path * ppath, int op, fixed vs[6], gs_fixed_point * ppos, int x0, int y0, segment_notes notes)
{
    fixed px = ppos->x - ((fixed) (x0) << 12);
    fixed py = ppos->y - ((fixed) (y0) << 12);
    int code;
    switch (op) {
    case cmd_opv_rmoveto:
	code = gx_path_add_point(ppath, px += vs[0], py += vs[1]);
	break;
    case cmd_opv_rlineto:
	code = gx_path_add_line_notes(ppath, px += vs[0], py += vs[1], notes);
	break;
    case cmd_opv_hlineto:
	code = gx_path_add_line_notes(ppath, px += vs[0], py, notes);
	break;
    case cmd_opv_vlineto:
	code = gx_path_add_line_notes(ppath, px, py += vs[0], notes);
	break;
    case cmd_opv_rrcurveto:
	vs[4] += (vs[2] += vs[0]);
	vs[5] += (vs[3] += vs[1]);
      curve:code = gx_path_add_curve_notes(ppath, px + vs[0], py + vs[1], px + vs[2], py + vs[3], px + vs[4], py + vs[5], notes);
	px += vs[4], py += vs[5];
	break;
    case cmd_opv_hvcurveto:
      hvc:vs[5] = vs[2] + vs[3], vs[3] = vs[2], vs[4] = vs[2] = vs[0] + vs[1], vs[1] = 0;
	goto curve;
    case cmd_opv_vhcurveto:
      vhc:vs[4] = vs[1] + vs[3], vs[5] = vs[3] = vs[0] + vs[2], vs[2] = vs[1], vs[1] = vs[0], vs[0] = 0;
	goto curve;
    case cmd_opv_nrcurveto:
	vs[5] = vs[1] + vs[3], vs[4] = vs[0] + vs[2], vs[3] = vs[1], vs[2] = vs[0], vs[1] = vs[0] = 0;
	goto curve;
    case cmd_opv_rncurveto:
	vs[5] = vs[3] += vs[1], vs[4] = vs[2] += vs[0];
	goto curve;
    case cmd_opv_rmlineto:
	if ((code = gx_path_add_point(ppath, px += vs[0], py += vs[1])) < 0)
	    break;
	code = gx_path_add_line_notes(ppath, px += vs[2], py += vs[3], notes);
	break;
    case cmd_opv_rm2lineto:
	if ((code = gx_path_add_point(ppath, px += vs[0], py += vs[1])) < 0 || (code = gx_path_add_line_notes(ppath, px += vs[2], py += vs[3], notes)) < 0)
	    break;
	code = gx_path_add_line_notes(ppath, px += vs[4], py += vs[5], notes);
	break;
    case cmd_opv_vqcurveto:
	if ((vs[0] ^ vs[1]) < 0)
	    vs[2] = -vs[1], vs[3] = -vs[0];
	else
	    vs[2] = vs[1], vs[3] = vs[0];
	goto vhc;
    case cmd_opv_hqcurveto:
	if ((vs[0] ^ vs[1]) < 0)
	    vs[3] = -vs[0], vs[2] = vs[1], vs[1] = -vs[1];
	else
	    vs[3] = vs[0], vs[2] = vs[1];
	goto hvc;
    case cmd_opv_rm3lineto:
	if ((code = gx_path_add_point(ppath, px += vs[0], py += vs[1])) < 0 || (code = gx_path_add_line_notes(ppath, px += vs[2], py += vs[3], notes)) < 0 || (code = gx_path_add_line_notes(ppath, px += vs[4], py += vs[5], notes)) < 0)
	    break;
	code = gx_path_add_line_notes(ppath, px -= vs[2], py -= vs[3], notes);
	break;
    case cmd_opv_closepath:
	code = gx_path_close_subpath_notes(ppath, sn_none);
	gx_path_current_point(ppath, (gs_fixed_point *) vs);
	px = vs[0], py = vs[1];
	break;
    default:
	return ((-15));
    }
    ppos->x = px + ((fixed) (x0) << 12);
    ppos->y = py + ((fixed) (y0) << 12);
    return code;
}
