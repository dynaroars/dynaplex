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
typedef struct ref_s ref;
typedef ushort ref_packed;
typedef enum { t__invalid, t_boolean, t_dictionary, t_file, t_array, t_mixedarray, t_shortarray, t_unused_array_, t_struct, t_astruct, t_fontID, t_integer, t_mark, t_name, t_null, t_operator, t_real, t_save, t_string, t_device, t_oparray, t_next_index } ref_type;
typedef struct attr_print_mask_s {
    ushort mask;
    ushort value;
    char print;
} attr_print_mask;
typedef struct dict_s dict;
typedef struct name_s name;
typedef struct stream_s stream;
typedef struct gx_device_s gx_device;
typedef struct obj_header_s obj_header_t;
typedef int (*op_proc_p) (ref *);
struct tas_s {
    ushort type_attrs;
    ushort rsize;
};
struct ref_s {
    struct tas_s tas;
    union v {
	long intval;
	ushort boolval;
	float realval;
	ulong saveid;
	byte *bytes;
	const byte *const_bytes;
	ref *refs;
	const ref *const_refs;
	name *pname;
	const name *const_pname;
	dict *pdict;
	const dict *const_pdict;
	const ref_packed *packed;
	op_proc_p opproc;
	struct stream_s *pfile;
	struct gx_device_s *pdevice;
	obj_header_t *pstruct;
    } value;
};
extern const char *gs_error_names[];
typedef enum { i_vm_foreign = 0, i_vm_system, i_vm_global, i_vm_local, i_vm_max = i_vm_local } i_vm_space;
typedef struct gs_ref_memory_s gs_ref_memory_t;
typedef union vm_spaces_s {
    gs_ref_memory_t *indexed[4];
    struct _ssn {
	gs_ref_memory_t *foreign;
	gs_ref_memory_t *system;
	gs_ref_memory_t *global;
	gs_ref_memory_t *local;
    } named;
} vm_spaces;
void gs_reclaim(vm_spaces * pspaces, bool global);
typedef enum { avm_foreign = (i_vm_foreign << 2), avm_system = (i_vm_system << 2), avm_global = (i_vm_global << 2), avm_local = (i_vm_local << 2), avm_max = avm_local } avm_space;
typedef struct gs_memory_gc_status_s {
    long vm_threshold;
    long max_vm;
    int *psignal;
    int signal_value;
    bool enabled;
    long requested;
} gs_memory_gc_status_t;
void gs_memory_gc_status(const gs_ref_memory_t *, gs_memory_gc_status_t *);
void gs_memory_set_gc_status(gs_ref_memory_t *, const gs_memory_gc_status_t *);
void ialloc_reset(gs_ref_memory_t *);
void ialloc_reset_free(gs_ref_memory_t *);
void ialloc_set_limit(gs_ref_memory_t *);
int gs_alloc_ref_array(gs_ref_memory_t * mem, ref * paref, uint attrs, uint num_refs, client_name_t cname);
int gs_resize_ref_array(gs_ref_memory_t * mem, ref * paref, uint new_num_refs, client_name_t cname);
void gs_free_ref_array(gs_ref_memory_t * mem, ref * paref, client_name_t cname);
int gs_alloc_string_ref(gs_ref_memory_t * mem, ref * psref, uint attrs, uint nbytes, client_name_t cname);
extern const gs_ptr_procs_t ptr_ref_procs;
typedef struct gs_dual_memory_s gs_dual_memory_t;
struct gs_dual_memory_s {
    gs_ref_memory_t *current;
    vm_spaces spaces;
    uint current_space;
    int save_level;
    int (*reclaim) (gs_dual_memory_t *, int);
    uint test_mask;
    uint new_mask;
};
extern gs_dual_memory_t gs_imemory;
void ialloc_init(gs_memory_t *, uint, bool);
void ialloc_reset_requested(gs_dual_memory_t *);
void ialloc_validate_spaces(const gs_dual_memory_t *);
extern uint imemory_space(gs_ref_memory_t *);
void ialloc_set_space(gs_dual_memory_t *, uint);
void debug_print_name(const ref *);
void debug_print_ref(const ref *);
void debug_dump_one_ref(const ref *);
void debug_dump_refs(const ref * from, uint size, const char *msg);
void debug_dump_array(const ref * array);
typedef struct ref_stack_s ref_stack;
void debug_dump_stack(const ref_stack * pstack, const char *msg);
typedef struct name_table_s name_table;
extern const uint name_max_string;
name_table *name_init(ulong, gs_memory_t *);
const name_table *the_name_table(void);
gs_memory_t *name_memory(void);
int name_ref(const byte * ptr, uint size, ref * pnref, int enterflag);
void name_string_ref(const ref * pnref, ref * psref);
int name_enter_string(const char *str, ref * pnref);
int name_from_string(const ref * psref, ref * pnref);
void name_invalidate_value_cache(const ref *);
uint name_index(const ref *);
name *name_index_ptr(uint nidx);
void name_index_ref(uint nidx, ref * pnref);
uint name_next_valid_index(uint);
bool name_mark_index(uint);
void *name_ref_sub_table(const ref *);
void *name_index_ptr_sub_table(uint, name *);
struct name_s {
    ushort next_index;
    unsigned foreign_string:1;
    unsigned mark:1;
    unsigned string_size:(14 - 0);
    const byte *string_bytes;
    ref *pvalue;
};
typedef struct name_sub_table_s {
    name names[(1 << (7 + (0 / 2)))];
} name_sub_table;
struct name_table_s {
    uint free;
    uint sub_next;
    uint sub_count;
    uint max_sub_count;
    gs_memory_t *memory;
    uint hash[(1024 << (0 / 2))];
    name_sub_table *sub_tables[(uint) ((0x10000 << 0) - 1) / (1 << (7 + (0 / 2))) + 1];
};
void name_unmark_all(void);
void name_trace_finish(gc_state_t *);
typedef struct alloc_save_s alloc_save_t;
void name_restore(alloc_save_t *);
typedef enum { pt_full_ref = 0, pt_executable_operator = 2, pt_integer = 3, pt_unused1 = 4, pt_unused2 = 5, pt_literal_name = 6, pt_executable_name = 7 } packed_type;
extern void alloc_save_init(gs_dual_memory_t *);
alloc_save_t *alloc_find_save(const gs_dual_memory_t *, ulong);
ulong alloc_save_state(gs_dual_memory_t *, void *);
void *alloc_save_client_data(const alloc_save_t *);
int alloc_save_level(const gs_dual_memory_t *);
alloc_save_t *alloc_save_current(const gs_dual_memory_t *);
bool alloc_is_since_save(const void *, const alloc_save_t *);
bool alloc_name_is_since_save(const ref *, const alloc_save_t *);
bool alloc_name_index_is_since_save(uint, const alloc_save_t *);
bool alloc_any_names_since_save(const alloc_save_t *);
bool alloc_restore_state_step(alloc_save_t *);
void alloc_forget_save(alloc_save_t *);
void alloc_restore_all(gs_dual_memory_t *);
int alloc_save_change(gs_dual_memory_t *, const ref * pcont, ref_packed * ptr, client_name_t cname);
int alloc_save_change(gs_dual_memory_t *, const ref * pcont, ref_packed * ptr, client_name_t cname);
int alloc_save_level(const gs_dual_memory_t *);
struct dict_s {
    ref values;
    ref keys;
    ref count;
    ref maxlength;
};
extern const uint dict_max_size;
extern bool dict_auto_expand;
int dict_create(uint maxlength, ref * pdref);
int dict_find(const ref * pdref, const ref * key, ref ** ppvalue);
int dict_find_string(const ref * pdref, const char *kstr, ref ** ppvalue);
int dict_put(ref * pdref, const ref * key, const ref * pvalue);
int dict_put_string(ref * pdref, const char *kstr, const ref * pvalue);
int dict_undef(ref * pdref, const ref * key);
uint dict_length(const ref * pdref);
uint dict_maxlength(const ref * pdref);
uint dict_max_index(const ref * pdref);
int dict_copy_entries(const ref * dfrom, ref * dto, bool new_only);
int dict_resize(ref * pdref, uint newmaxlength);
int dict_grow(ref * pdref);
int dict_unpack(ref * pdref);
int dict_first(const ref * pdref);
int dict_next(const ref * pdref, int index, ref * eltp);
int dict_value_index(const ref * pdref, const ref * pvalue);
int dict_index_entry(const ref * pdref, int index, ref * eltp);
uint dict_round_size_small(uint rsize);
uint dict_round_size_large(uint rsize);
typedef ref *s_ptr;
typedef const ref *const_s_ptr;
typedef struct ref_stack_block_s {
    ref next;
    ref used;
} ref_stack_block;
struct ref_stack_s {
    s_ptr p;
    s_ptr bot;
    s_ptr top;
    ref current;
    uint extension_size;
    uint extension_used;
    ref max_stack;
    uint requested;
    uint bot_guard;
    uint top_guard;
    uint block_size;
    uint body_size;
    ref guard_value;
    int underflow_error;
    int overflow_error;
    bool allow_expansion;
    gs_ref_memory_t *memory;
};
void ref_stack_init(ref_stack *, ref *, uint, uint, ref *, gs_ref_memory_t *);
int ref_stack_set_max_count(ref_stack *, long);
uint ref_stack_count(const ref_stack *);
ref *ref_stack_index(const ref_stack *, long);
uint ref_stack_counttomark(const ref_stack *);
int ref_stack_store(const ref_stack *, ref *, uint, uint, int, bool, client_name_t);
void ref_stack_pop(ref_stack *, uint);
int ref_stack_pop_block(ref_stack *);
int ref_stack_extend(ref_stack *, uint);
int ref_stack_push(ref_stack *, uint);
void ref_stack_cleanup(ref_stack *);
extern ref_stack d_stack;
extern ref ref_systemdict;
typedef s_ptr ds_ptr;
typedef const_s_ptr const_ds_ptr;
bool dict_is_permanent_on_dstack(const ref *);
extern uint min_dstack_size;
extern int dsspace;
extern const ref_packed *dtop_keys;
extern uint dtop_npairs;
extern ref *dtop_values;
void dict_set_top(void);
ref *dict_find_name_by_index(uint nidx);
void refcpy_to_new(ref * to, const ref * from, uint size);
int refcpy_to_old(ref * aref, uint index, const ref * from, uint size, client_name_t cname);
void refset_null(ref * to, uint size);
bool obj_eq(const ref *, const ref *);
bool obj_ident_eq(const ref *, const ref *);
int obj_cvp(const ref * op, byte * str, uint len, uint * prlen, const byte ** pchars, bool full_print);
int array_get(const ref *, long, ref *);
void packed_get(const ref_packed *, ref *);
int refs_check_space(const ref * refs, uint size, uint space);
int string_to_ref(const char *, ref *, gs_ref_memory_t *, client_name_t);
char *ref_to_string(const ref *, gs_memory_t *, client_name_t);
int num_params(const ref *, int, float *);
int real_param(const ref *, float *);
int int_param(const ref *, int, int *);
void make_reals(ref *, const float *, int);
typedef struct gs_matrix_s gs_matrix;
int read_matrix(const ref *, gs_matrix *);
int write_matrix(ref *, const gs_matrix *);
const uint dict_max_size = (((unsigned short) 0xffff + (unsigned short) 0) & (((unsigned int) 0xffffffff + (unsigned int) 0) / (uint) sizeof(ref))) - 1;
bool dict_auto_expand = ((bool) 0);
bool dict_default_pack = ((bool) 1);
int dsspace;
const ref_packed *dtop_keys;
uint dtop_npairs;
ref *dtop_values;
static int dict_create_contents(uint size, const ref * pdref, bool pack);
uint dict_round_size_small(uint rsize)
{
    return (rsize > dict_max_size ? 0 : rsize);
}

uint dict_round_size_large(uint rsize)
{
    if (rsize > ((uint) ((((unsigned short) 0xffff + (unsigned short) 0) & (((unsigned int) 0xffffffff + (unsigned int) 0) / (uint) sizeof(ref))) / 2 + 1)))
	return (rsize > dict_max_size ? 0 : rsize);
    while (rsize & (rsize - 1))
	rsize = (rsize | (rsize - 1)) + 1;
    return (rsize <= dict_max_size ? rsize : ((uint) ((((unsigned short) 0xffff + (unsigned short) 0) & (((unsigned int) 0xffffffff + (unsigned int) 0) / (uint) sizeof(ref))) / 2 + 1)));
}

int dict_create(uint size, ref * pdref)
{
    ref arr;
    int code = gs_alloc_ref_array((gs_imemory.current), &arr, (0x10 + 0x20 + 0x40), sizeof(dict) / sizeof(ref), "dict_create");
    ref dref;
    if (code < 0)
	return code;
    ((&dref)->value.pdict = ((dict *) arr.value.refs), ((&dref)->tas.type_attrs = ((t_dictionary) << 8) + (((avm_space) (((&arr)->tas.type_attrs) & (((1 << 2) - 1) << 2)) | (0x10 + 0x20 + 0x40)) | ((&gs_imemory)->new_mask))));
    code = dict_create_contents(size, &dref, dict_default_pack);
    if (code < 0)
	return code;
    *pdref = dref;
    return 0;
}

static int dict_create_unpacked_keys(uint asize, const ref * pdref)
{
    dict *pdict = pdref->value.pdict;
    uint space = (((&gs_imemory))->current_space);
    int code;
    ialloc_set_space((&gs_imemory), (avm_space) (((pdref)->tas.type_attrs) & (((1 << 2) - 1) << 2)));
    code = gs_alloc_ref_array((gs_imemory.current), &pdict->keys, (0x10 + 0x20 + 0x40), asize, "dict create unpacked keys");
    if (code >= 0) {
	ref *kp = pdict->keys.value.refs;
	((&pdict->keys)->tas.type_attrs |= ((&gs_imemory)->new_mask));
	refset_null(kp, asize);
	((kp)->tas.type_attrs |= (0x80));
    }
    ialloc_set_space((&gs_imemory), space);
    return code;
}

static int dict_create_contents(uint size, const ref * pdref, bool pack)
{
    dict *pdict = pdref->value.pdict;
    uint asize = dict_round_size_large((size == 0 ? 1 : size));
    int code;
    register uint i;
    if (asize == 0 || asize > (((unsigned short) 0xffff + (unsigned short) 0) & (((unsigned int) 0xffffffff + (unsigned int) 0) / (uint) sizeof(ref))) - 1)
	return ((-13));
    asize++;
    code = gs_alloc_ref_array((gs_imemory.current), &pdict->values, (0x10 + 0x20 + 0x40), asize, "dict_create(values)");
    if (code < 0)
	return code;
    ((&pdict->values)->tas.type_attrs |= ((&gs_imemory)->new_mask));
    refset_null(pdict->values.value.refs, asize);
    if (pack) {
	uint ksize = (asize + (sizeof(ref) / sizeof(ref_packed)) - 1) / (sizeof(ref) / sizeof(ref_packed));
	ref arr;
	ref_packed *pkp;
	ref_packed *pzp;
	code = gs_alloc_ref_array((gs_imemory.current), &arr, (0x10 + 0x20 + 0x40), ksize, "dict_create(packed keys)");
	if (code < 0)
	    return code;
	pkp = (ref_packed *) arr.value.refs;
	((&pdict->keys)->value.packed = (pkp), ((&pdict->keys)->tas.type_attrs = ((t_shortarray) << 8) + (((avm_space) (((&arr)->tas.type_attrs) & (((1 << 2) - 1) << 2)) | (0x10 + 0x20 + 0x40)) | ((&gs_imemory)->new_mask))), ((&pdict->keys)->tas.rsize = (asize)));
	for (pzp = pkp, i = 0; i < asize || i % (sizeof(ref) / sizeof(ref_packed)); pzp++, i++)
	    *pzp = (((ref_packed) (pt_integer) << 13) + 0);
	*pkp = (((ref_packed) (pt_integer) << 13) + 1);
    } else {
	int code = dict_create_unpacked_keys(asize, pdref);
	if (code < 0)
	    return code;
    }
    ((&pdict->count)->value.intval = (0), ((&pdict->count)->tas.type_attrs = ((t_integer) << 8) + ((0) | ((&gs_imemory)->new_mask))));
    ((&pdict->maxlength)->value.intval = (size), ((&pdict->maxlength)->tas.type_attrs = ((t_integer) << 8) + ((0) | ((&gs_imemory)->new_mask))));
    return 0;
}
//complexity is O(n) inferred by loopus
int dict_unpack(ref * pdref)
{
    dict *pdict = pdref->value.pdict;
    if (!((((const byte *) &((&(pdict)->keys)->tas.type_attrs))[1]) == (t_shortarray)))
	return 0; {
	uint count = ((&(pdict)->values)->tas.rsize);
	const ref_packed *okp = pdict->keys.value.packed;
	ref old_keys;
	int code;
	ref *nkp;
	old_keys = pdict->keys;
	if (((((&old_keys)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0))
	    alloc_save_change((&gs_imemory), pdref, (ref_packed *) (&pdict->keys), "dict_unpack(keys)");
	code = dict_create_unpacked_keys(count, pdref);
	if (code < 0)
	    return code;
	for (nkp = pdict->keys.value.refs; count--; okp++, nkp++)
	    if ((*(okp) >= ((ref_packed) (6) << 13))) {
		packed_get(okp, nkp);
		((nkp)->tas.type_attrs |= ((&gs_imemory)->new_mask));
	    } else if (*okp == (((ref_packed) (pt_integer) << 13) + 1))
		((nkp)->tas.type_attrs |= (0x80));
	if (!((((&old_keys)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0))
	    gs_free_ref_array((gs_imemory.current), &old_keys, "dict_unpack(old keys)");
	dict_set_top();
	}
	return 0;
}

int dict_find(const ref * pdref, const ref * pkey, ref ** ppvalue)
{
    dict *pdict = pdref->value.pdict;
    uint size = (((&(pdict)->values)->tas.rsize) - 1);
    register int etype;
    uint nidx;
    ref_packed kpack;
    uint hash;
    int ktype;
    switch ((((const byte *) &((pkey)->tas.type_attrs))[1])) {
    case t_name:
	nidx = ((pkey)->tas.rsize);
      nh:hash = (nidx);
	kpack = ((nidx) <= ((1 << 12) - 1) ? ((ref_packed) (pt_literal_name) << 13) + (nidx) : ((ref_packed) (pt_full_ref) << 13));
	ktype = t_name;
	break;
    case t_string:{
	    ref nref;
	    int code;
	    if (!(((pkey)->tas.type_attrs) & (0x20)))
		return ((-7));
	    code = name_ref(pkey->value.bytes, ((pkey)->tas.rsize), &nref, 1);
	    if (code < 0)
		return code;
	    nidx = ((&nref)->tas.rsize);
	}
	goto nh;
    case t_integer:
	hash = (uint) pkey->value.intval * 30503;
	kpack = ((ref_packed) (pt_full_ref) << 13);
	ktype = -1;
	nidx = 0;
	break;
    case t_null:
	return ((-20));
    default:
	hash = ((pkey)->tas.type_attrs >= (t_next_index << 8) ? t_operator : (((const byte *) &((pkey)->tas.type_attrs))[1])) * 99;
	kpack = ((ref_packed) (pt_full_ref) << 13);
	ktype = -1;
	nidx = 0;
    } if (((((const byte *) &((&(pdict)->keys)->tas.type_attrs))[1]) == (t_shortarray))) {
	const ref_packed *pslot = 0;
	const ref_packed *kbot = pdict->keys.value.packed;
	register const ref_packed *kp;
	for (kp = kbot + (size > ((uint) ((((unsigned short) 0xffff + (unsigned short) 0) & (((unsigned int) 0xffffffff + (unsigned int) 0) / (uint) sizeof(ref))) / 2 + 1)) ? ((hash) % (size)) : ((hash) & ((size) - 1))) + 1;; kp--) {
	    do {
	    } while (0);
	    if (*kp == kpack) {
		*ppvalue = (pdict->values.value.refs + (kp - kbot));
		return 1;
	    } else if (!(*(kp) >= ((ref_packed) (6) << 13))) {
		if (*kp == (((ref_packed) (pt_integer) << 13) + 0))
		    goto miss;
		if (kp == kbot)
		    break;
		else {
		    if (pslot == 0)
			pslot = kp;
		}
	    }
	};
	for (kp += size;; kp--) {
	    do {
	    } while (0);
	    if (*kp == kpack) {
		*ppvalue = (pdict->values.value.refs + (kp - kbot));
		return 1;
	    } else if (!(*(kp) >= ((ref_packed) (6) << 13))) {
		if (*kp == (((ref_packed) (pt_integer) << 13) + 0))
		    goto miss;
		if (kp == kbot)
		    break;
		else {
		    if (pslot == 0)
			pslot = kp;
		}
	    }
	};
	if (pslot == 0 || ((uint) ((pdict)->count.value.intval)) == ((uint) ((pdict)->maxlength.value.intval)))
	    return ((-2));
	*ppvalue = pdict->values.value.refs + (pslot - kbot);
	return 0;
      miss:if (((uint) ((pdict)->count.value.intval)) == ((uint) ((pdict)->maxlength.value.intval)))
	    return ((-2));
	if (pslot == 0)
	    pslot = kp;
	*ppvalue = pdict->values.value.refs + (pslot - kbot);
	return 0;
    } else {
	ref *kbot = pdict->keys.value.refs;
	register ref *kp;
	ref *pslot = 0;
	int wrap = 0;
	for (kp = kbot + (size > ((uint) ((((unsigned short) 0xffff + (unsigned short) 0) & (((unsigned int) 0xffffffff + (unsigned int) 0) / (uint) sizeof(ref))) / 2 + 1)) ? ((hash) % (size)) : ((hash) & ((size) - 1))) + 2;;) {
	    --kp;
	    if ((etype = (((const byte *) &((kp)->tas.type_attrs))[1])) == ktype) {
		if (((kp)->tas.rsize) == nidx) {
		    *ppvalue = pdict->values.value.refs + (kp - kbot);
		    return 1;
		}
	    } else if (etype == t_null) {
		if (kp == kbot) {
		    if (wrap++) {
			if (pslot == 0)
			    return ((-2));
			break;
		    }
		    kp += size + 1;
		} else if ((((kp)->tas.type_attrs) & (0x80))) {
		    if (pslot == 0)
			pslot = kp;
		} else
		    break;
	    } else {
		if (obj_eq(kp, pkey)) {
		    *ppvalue = pdict->values.value.refs + (kp - kbot);
		    return 1;
		}
	    }
	}
	if (((uint) ((pdict)->count.value.intval)) == ((uint) ((pdict)->maxlength.value.intval)))
	    return ((-2));
	*ppvalue = pdict->values.value.refs + ((pslot != 0 ? pslot : kp) - kbot);
	return 0;
    }
}

int dict_find_string(const ref * pdref, const char *kstr, ref ** ppvalue)
{
    int code;
    ref kname;
    if ((code = name_ref((const byte *) kstr, strlen(kstr), &kname, -1)) < 0)
	return code;
    return dict_find(pdref, &kname, ppvalue);
}
//complexity is O(n) inferred by loopus
bool dict_is_permanent_on_dstack(const ref * pdref)
{
    dict *pdict = pdref->value.pdict;
    int i;
    if (d_stack.extension_size == 0) {
	for (i = 0; i < min_dstack_size; ++i)
	    if ((d_stack.bot)[i].value.pdict == pdict)
		return ((bool) 1);
    } else {
	uint count = ref_stack_count(&d_stack);
	for (i = count - min_dstack_size; i < count; ++i)
	    if (ref_stack_index(&d_stack, i)->value.pdict == pdict)
		return ((bool) 1);
    }
    return ((bool) 0);
}

ref *dict_find_name_by_index(uint nidx)
{
    ds_ptr pdref = (d_stack.p);
    ref_packed kpack = ((nidx) <= ((1 << 12) - 1) ? ((ref_packed) (pt_literal_name) << 13) + (nidx) : ((ref_packed) (pt_full_ref) << 13));
    do {
	dict *pdict = pdref->value.pdict;
	uint size = (((&(pdict)->values)->tas.rsize) - 1);
	if (((((const byte *) &((&(pdict)->keys)->tas.type_attrs))[1]) == (t_shortarray))) {
	    const ref_packed *kbot = pdict->keys.value.packed;
	    register const ref_packed *kp;
	    for (kp = kbot + (size > ((uint) ((((unsigned short) 0xffff + (unsigned short) 0) & (((unsigned int) 0xffffffff + (unsigned int) 0) / (uint) sizeof(ref))) / 2 + 1)) ? (((nidx)) % (size)) : (((nidx)) & ((size) - 1))) + 1;; kp--) {
		do {
		} while (0);
		if (*kp == kpack) {
		    do {
		    } while (0);
		    return (pdict->values.value.refs + (kp - kbot));
		} else if (!(*(kp) >= ((ref_packed) (6) << 13))) {
		    if (*kp == (((ref_packed) (pt_integer) << 13) + 0))
			goto miss;
		    if (kp == kbot)
			break;
		    else {
			do {
			} while (0);
		    }
		}
	    };
	    for (kp += size;; kp--) {
		do {
		} while (0);
		if (*kp == kpack) {
		    do {
		    } while (0);
		    return (pdict->values.value.refs + (kp - kbot));
		} else if (!(*(kp) >= ((ref_packed) (6) << 13))) {
		    if (*kp == (((ref_packed) (pt_integer) << 13) + 0))
			break;
		    if (kp == kbot)
			break;
		    else {
			do {
			} while (0);
		    }
		}
	    };
	  miss:;
	} else {
	    ref *kbot = pdict->keys.value.refs;
	    register ref *kp;
	    int wrap = 0;
	    for (kp = kbot + (size > ((uint) ((((unsigned short) 0xffff + (unsigned short) 0) & (((unsigned int) 0xffffffff + (unsigned int) 0) / (uint) sizeof(ref))) / 2 + 1)) ? (((nidx)) % (size)) : (((nidx)) & ((size) - 1))) + 2;;) {
		--kp;
		if (((((const byte *) &((kp)->tas.type_attrs))[1]) == (t_name))) {
		    if (((kp)->tas.rsize) == nidx)
			return pdict->values.value.refs + (kp - kbot);
		} else if (((((const byte *) &((kp)->tas.type_attrs))[1]) == (t_null))) {
		    if (!(((kp)->tas.type_attrs) & (0x80)))
			break;
		    if (kp == kbot) {
			if (wrap++)
			    break;
			kp += size + 1;
		    }
		}
	    }
	}
    } while (pdref-- > (d_stack.bot));
    if (!d_stack.extension_size)
	return (ref *) 0; {
	ref key;
	uint i = (d_stack.p) + 1 - (d_stack.bot);
	uint size = ref_stack_count(&d_stack);
	ref *pvalue;
	name_index_ref(nidx, &key);
	for (; i < size; i++) {
	    if (dict_find(ref_stack_index(&d_stack, i), &key, &pvalue) > 0)
		return pvalue;
	}
	}
	return (ref *) 0;
}

int dict_put(ref * pdref, const ref * pkey, const ref * pvalue)
{
    int rcode = 0;
    int code;
    ref *pvslot;
    if ((avm_space) (((pvalue)->tas.type_attrs) & (((1 << 2) - 1) << 2)) > ((avm_space) (((pdref)->tas.type_attrs) & (((1 << 2) - 1) << 2))))
	return ((-7));
  top:if ((code = dict_find(pdref, pkey, &pvslot)) <= 0) {
	dict *pdict = pdref->value.pdict;
	ref kname;
	uint index;
	switch (code) {
	case 0:
	    break;
	case (-2):
	    if (!dict_auto_expand)
		return ((-2));
	    code = dict_grow(pdref);
	    if (code < 0)
		return code;
	    goto top;
	default:
	    return code;
	}
	index = pvslot - pdict->values.value.refs;
	if (((((const byte *) &((pkey)->tas.type_attrs))[1]) == (t_string))) {
	    int code;
	    if (!(((pkey)->tas.type_attrs) & (0x20)))
		return ((-7));
	    code = name_from_string(pkey, &kname);
	    if (code < 0)
		return code;
	    pkey = &kname;
	}
	if (((((const byte *) &((&(pdict)->keys)->tas.type_attrs))[1]) == (t_shortarray))) {
	    ref_packed *kp;
	    if (!((((const byte *) &((pkey)->tas.type_attrs))[1]) == (t_name)) || ((pkey)->tas.rsize) > ((1 << 12) - 1)) {
		int code = dict_unpack(pdref);
		if (code < 0)
		    return code;
		goto top;
	    }
	    kp = (ref_packed *) (pdict->keys.value.packed + index);
	    if (((((&pdict->keys)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0)) {
		alloc_save_change((&gs_imemory), &pdict->keys, (ref_packed *) (kp), "dict_put(key)");
	    }
	    *kp = ((ref_packed) (pt_literal_name) << 13) + ((pkey)->tas.rsize);
	} else {
	    ref *kp = pdict->keys.value.refs + index;
	    do {
	    } while (0);
	    if ((avm_space) (((pkey)->tas.type_attrs) & (((1 << 2) - 1) << 2)) > ((avm_space) (((pdref)->tas.type_attrs) & (((1 << 2) - 1) << 2))))
		return ((-7));
	    (((void) ((((((kp)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0) ? alloc_save_change((&gs_imemory), &pdict->keys, (ref_packed *) (kp), "dict_put(key)") : 0))), ((void) (((*(kp) = *(pkey)), ((kp)->tas.type_attrs |= ((&gs_imemory)->new_mask))))));
	} ((void) ((((((&pdict->count)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0) ? alloc_save_change((&gs_imemory), pdref, (ref_packed *) (&pdict->count), "dict_put(count)") : 0)));
	pdict->count.value.intval++;
	if (((((const byte *) &((pkey)->tas.type_attrs))[1]) == (t_name))) {
	    name *pname = pkey->value.pname;
	    if (pname->pvalue == ((ref *) 0) && (pdict == (&ref_systemdict)->value.pdict || dict_is_permanent_on_dstack(pdref)) && alloc_save_level((&gs_imemory)) == 0) {
		do {
		} while (0);
		pname->pvalue = pvslot;
	    } else {
		do {
		} while (0);
		pname->pvalue = ((ref *) 1);
	    }
	}
	rcode = 1;
    }
    do {
    } while (0);
    (((void) ((((((pvslot)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0) ? alloc_save_change((&gs_imemory), &pdref->value.pdict->values, (ref_packed *) (pvslot), "dict_put(value)") : 0))), ((void) (((*(pvslot) = *(pvalue)), ((pvslot)->tas.type_attrs |= ((&gs_imemory)->new_mask))))));
    return rcode;
}

int dict_put_string(ref * pdref, const char *kstr, const ref * pvalue)
{
    int code;
    ref kname;
    if ((code = name_ref((const byte *) kstr, strlen(kstr), &kname, 0)) < 0)
	return code;
    return dict_put(pdref, &kname, pvalue);
}

int dict_undef(ref * pdref, const ref * pkey)
{
    ref *pvslot;
    dict *pdict;
    uint index;
    if (dict_find(pdref, pkey, &pvslot) <= 0)
	return ((-21));
    pdict = pdref->value.pdict;
    index = pvslot - pdict->values.value.refs;
    if (((((const byte *) &((&(pdict)->keys)->tas.type_attrs))[1]) == (t_shortarray))) {
	ref_packed *pkp = (ref_packed *) (pdict->keys.value.packed + index);
	if (((((&pdict->keys)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0))
	    alloc_save_change((&gs_imemory), &pdict->keys, (ref_packed *) (pkp), "dict_undef(key)");
	if (pkp[-1] == (((ref_packed) (pt_integer) << 13) + 0))
	    *pkp = (((ref_packed) (pt_integer) << 13) + 0);
	else
	    *pkp = (((ref_packed) (pt_integer) << 13) + 1);
    } else {
	ref *kp = pdict->keys.value.refs + index;
	(((void) ((((((kp)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0) ? alloc_save_change((&gs_imemory), &pdict->keys, (ref_packed *) (kp), "dict_undef(key)") : 0))), (((kp)->tas.type_attrs = ((t_null) << 8) + (((&gs_imemory)->new_mask)))));
	if (!((((const byte *) &((kp - 1)->tas.type_attrs))[1]) == (t_null)) || (((kp - 1)->tas.type_attrs) & (0x80)))
	    ((kp)->tas.type_attrs |= (0x80));
    } ((void) ((((((&pdict->count)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0) ? alloc_save_change((&gs_imemory), pdref, (ref_packed *) (&pdict->count), "dict_undef(count)") : 0)));
    pdict->count.value.intval--;
    if (((((const byte *) &((pkey)->tas.type_attrs))[1]) == (t_name))) {
	name *pname = pkey->value.pname;
	if (((unsigned long) (pname->pvalue) > 1)) {
	    pname->pvalue = ((ref *) 0);
	}
    }
    (((void) ((((((pvslot)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0) ? alloc_save_change((&gs_imemory), &pdict->values, (ref_packed *) (pvslot), "dict_undef(value)") : 0))), (((pvslot)->tas.type_attrs = ((t_null) << 8) + (((&gs_imemory)->new_mask)))));
    return 0;
}

uint dict_length(const ref * pdref)
{
    return ((uint) ((pdref->value.pdict)->count.value.intval));
}

uint dict_maxlength(const ref * pdref)
{
    return ((uint) ((pdref->value.pdict)->maxlength.value.intval));
}

uint dict_max_index(const ref * pdref)
{
    return (((&(pdref->value.pdict)->values)->tas.rsize) - 1) - 1;
}

int dict_copy_entries(const ref * pdrfrom, ref * pdrto, bool new_only)
{
    int space = (avm_space) (((pdrto)->tas.type_attrs) & (((1 << 2) - 1) << 2));
    int index;
    ref elt[2];
    ref *pvslot;
    int code;
    if (space != avm_max) {
	index = dict_first(pdrfrom);
	while ((index = dict_next(pdrfrom, index, elt)) >= 0)
	    if (!new_only || dict_find(pdrto, &elt[0], &pvslot) <= 0) {
		if ((avm_space) (((&elt[0])->tas.type_attrs) & (((1 << 2) - 1) << 2)) > (space))
		    return ((-7));
		if ((avm_space) (((&elt[1])->tas.type_attrs) & (((1 << 2) - 1) << 2)) > (space))
		    return ((-7));
	    }
    }
    index = dict_first(pdrfrom);
    while ((index = dict_next(pdrfrom, index, elt)) >= 0) {
	if (new_only && dict_find(pdrto, &elt[0], &pvslot) > 0)
	    continue;
	if ((code = dict_put(pdrto, &elt[0], &elt[1])) < 0)
	    return code;
    }
    return 0;
}
static const ref_packed no_packed_keys[2] = { (((ref_packed) (pt_integer) << 13) + 1), (((ref_packed) (pt_integer) << 13) + 0) };

void dict_set_top(void)
{
    dict *pdict = (d_stack.p)->value.pdict;
    do {
    } while (0);
    if (((((const byte *) &((&(pdict)->keys)->tas.type_attrs))[1]) == (t_shortarray)) && ((((&((d_stack.p))->value.pdict->values))->tas.type_attrs) & (0x20))) {
	dtop_keys = pdict->keys.value.packed;
	dtop_npairs = (((&(pdict)->values)->tas.rsize) - 1);
	dtop_values = pdict->values.value.refs;
    } else {
	dtop_keys = no_packed_keys;
	dtop_npairs = 1;
    }
    if (!((((&((d_stack.p))->value.pdict->values))->tas.type_attrs) & (0x10)))
	dsspace = -1;
    else
	dsspace = (avm_space) ((((d_stack.p))->tas.type_attrs) & (((1 << 2) - 1) << 2));
}

int dict_resize(ref * pdref, uint new_size)
{
    dict *pdict = pdref->value.pdict;
    dict dnew;
    ref drto;
    int code;
    uint space;
    if (new_size < ((uint) ((pdict)->count.value.intval))) {
	if (!dict_auto_expand)
	    return ((-2));
	new_size = ((uint) ((pdict)->count.value.intval));
    }
    space = (((&gs_imemory))->current_space);
    ialloc_set_space((&gs_imemory), (avm_space) (((pdref)->tas.type_attrs) & (((1 << 2) - 1) << 2)));
    ((&drto)->value.pdict = (&dnew), ((&drto)->tas.type_attrs = ((t_dictionary) << 8) + (((avm_space) (((pdref)->tas.type_attrs) & (((1 << 2) - 1) << 2)) | (0x10 + 0x20 + 0x40)) | ((&gs_imemory)->new_mask))));
    if ((code = dict_create_contents(new_size, &drto, ((((const byte *) &((&(pdict)->keys)->tas.type_attrs))[1]) == (t_shortarray)))) < 0) {
	ialloc_set_space((&gs_imemory), space);
	return code;
    }
    ((&drto)->tas.type_attrs = ((&drto)->tas.type_attrs & ~((((1 << 2) - 1) << 2))) | ((uint) avm_local));
    dict_copy_entries(pdref, &drto, ((bool) 0));
    if (((((&pdict->values)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0))
	alloc_save_change((&gs_imemory), pdref, (ref_packed *) (&pdict->values), "dict_resize(values)");
    else
	gs_free_ref_array((gs_imemory.current), &pdict->values, "dict_resize(old values)");
    if (((((&pdict->keys)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0))
	alloc_save_change((&gs_imemory), pdref, (ref_packed *) (&pdict->keys), "dict_resize(keys)");
    else
	gs_free_ref_array((gs_imemory.current), &pdict->keys, "dict_resize(old keys)");
    (*(&pdict->keys) = *(&dnew.keys));
    (*(&pdict->values) = *(&dnew.values));
    ((void) ((((((&pdict->maxlength)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0) ? alloc_save_change((&gs_imemory), pdref, (ref_packed *) (&pdict->maxlength), "dict_resize(maxlength)") : 0)));
    ((pdict)->maxlength.value.intval = (new_size));
    ialloc_set_space((&gs_imemory), space);
    dict_set_top();
    return 0;
}

int dict_grow(ref * pdref)
{
    dict *pdict = pdref->value.pdict;
    ulong new_size = (ulong) ((uint) ((pdict)->maxlength.value.intval)) * 3 / 2 + 2;
    if (new_size > (((&(pdict)->values)->tas.rsize) - 1)) {
	int code = dict_resize(pdref, (uint) new_size);
	if (code >= 0)
	    return code;
	if ((((&(pdict)->values)->tas.rsize) - 1) < dict_max_size) {
	    code = dict_resize(pdref, dict_max_size);
	    if (code >= 0)
		return code;
	}
	if ((((&(pdict)->values)->tas.rsize) - 1) == ((uint) ((pdict)->maxlength.value.intval))) {
	    return code;
	}
	new_size = (((&(pdict)->values)->tas.rsize) - 1);
    }
    ((void) ((((((&pdict->maxlength)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0) ? alloc_save_change((&gs_imemory), pdref, (ref_packed *) (&pdict->maxlength), "dict_put(maxlength)") : 0)));
    ((pdict)->maxlength.value.intval = (new_size));
    return 0;
}

int dict_first(const ref * pdref)
{
    return (int) ((&(pdref->value.pdict)->values)->tas.rsize);
} int dict_next(const ref * pdref, int index, ref * eltp)
{
    dict *pdict = pdref->value.pdict;
    ref *vp = pdict->values.value.refs + index;
    while (vp--, --index >= 0) {
	array_get(&pdict->keys, (long) index, eltp);
	if (((((const byte *) &((eltp)->tas.type_attrs))[1]) == (t_name)) || (!((((const byte *) &((&(pdict)->keys)->tas.type_attrs))[1]) == (t_shortarray)) && !((((const byte *) &((eltp)->tas.type_attrs))[1]) == (t_null)))) {
	    eltp[1] = *vp;
	    do {
	    } while (0);
	    return index;
	}
    }
    return -1;
}

int dict_value_index(const ref * pdref, const ref * pvalue)
{
    return (int) (pvalue - pdref->value.pdict->values.value.refs - 1);
} int dict_index_entry(const ref * pdref, int index, ref * eltp)
{
    const dict *pdict = pdref->value.pdict;
    array_get(&pdict->keys, (long) (index + 1), eltp);
    if (((((const byte *) &((eltp)->tas.type_attrs))[1]) == (t_name)) || (!((((const byte *) &((&(pdict)->keys)->tas.type_attrs))[1]) == (t_shortarray)) && !((((const byte *) &((eltp)->tas.type_attrs))[1]) == (t_null)))) {
	eltp[1] = pdict->values.value.refs[index + 1];
	return 0;
    }
    return (-21);
}

void dstack_gc_cleanup(void)
{
    uint count = ref_stack_count(&d_stack);
    uint dsi;
    for (dsi = min_dstack_size; dsi > 0; --dsi) {
	const dict *pdict = ref_stack_index(&d_stack, count - dsi)->value.pdict;
	uint size = ((&(pdict)->values)->tas.rsize);
	ref *pvalue = pdict->values.value.refs;
	uint i;
	for (i = 0; i < size; ++i, ++pvalue) {
	    ref key;
	    ref *old_pvalue;
	    array_get(&pdict->keys, (long) i, &key);
	    if (((((const byte *) &((&key)->tas.type_attrs))[1]) == (t_name)) && ((unsigned long) (old_pvalue = key.value.pname->pvalue) > 1)) {
		if (old_pvalue == pvalue) {
		    do {
		    } while (0);
		    break;
		}
		key.value.pname->pvalue = pvalue;
	    }
	}
    }
}
