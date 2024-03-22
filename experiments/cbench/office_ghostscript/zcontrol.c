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
extern const char *gs_error_names[];
typedef struct gs_ref_memory_s gs_ref_memory_t;
typedef ref *s_ptr;
typedef const ref *const_s_ptr;
typedef struct ref_stack_block_s {
    ref next;
    ref used;
} ref_stack_block;
typedef struct ref_stack_s ref_stack;
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
typedef s_ptr os_ptr;
typedef const_s_ptr const_os_ptr;
extern ref_stack o_stack;
typedef struct {
    const char *oname;
    op_proc_p proc;
} op_def;
typedef const op_def *op_def_ptr;
ushort op_find_index(const ref *);
extern const op_def **op_def_table;
extern uint op_def_count;
typedef struct op_array_table_s {
    ref table;
    ushort *nx_table;
    uint count;
    uint base_index;
    uint attrs;
    ref *root_p;
} op_array_table;
extern op_array_table op_array_table_global, op_array_table_local;
void op_index_ref(uint, ref *);
int zadd(os_ptr);
int zdef(os_ptr);
int zdup(os_ptr);
int zexch(os_ptr);
int zif(os_ptr);
int zifelse(os_ptr);
int zindex(os_ptr);
int zpop(os_ptr);
int zroll(os_ptr);
int zsub(os_ptr);
int zflush(os_ptr);
int zflushpage(os_ptr);
int zsave(os_ptr);
int zrestore(os_ptr);
int zgsave(os_ptr);
int zgrestore(os_ptr);
int zcopy_gstate(os_ptr);
int zcurrentgstate(os_ptr);
int zgrestoreall(os_ptr);
int zgstate(os_ptr);
int zreadonly(os_ptr);
int zsetdevice(os_ptr);
int zsetgstate(os_ptr);
int zimage(os_ptr);
int zimagemask(os_ptr);
int zwhere(os_ptr);
int zarray(os_ptr);
int zdict(os_ptr);
int zpackedarray(os_ptr);
int zstring(os_ptr);
int zclosepath(os_ptr);
int zcurveto(os_ptr);
int zlineto(os_ptr);
int zmoveto(os_ptr);
int zrcurveto(os_ptr);
int zrlineto(os_ptr);
int zrmoveto(os_ptr);
int zcvx(os_ptr);
int zexec(os_ptr);
int zfor(os_ptr);
int zbegin(os_ptr);
int zcleartomark(os_ptr);
int zend(os_ptr);
int zclosefile(os_ptr);
int zsetfont(os_ptr);
int zcurrentdevice(os_ptr);
int ztoken(os_ptr);
int ztokenexec(os_ptr);
int zwrite(os_ptr);
int check_proc_failed(const ref *);
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
int check_type_failed(const ref *);
typedef s_ptr es_ptr;
typedef const_s_ptr const_es_ptr;
extern ref_stack e_stack;
extern ref *esfile;
void pop_estack(uint);
int zget_stdin(stream **);
int zget_stdout(stream **);
int zget_stderr(stream **);
extern bool gs_stdin_is_interactive;
extern stream *invalid_file_entry;
int file_switch_to_read(const ref *);
int file_switch_to_write(const ref *);
extern const uint file_default_buffer_size;
FILE *lib_fopen(const char *);
int lib_file_open(const char *, uint, byte *, uint, uint *, ref *);
int file_read_string(const byte *, uint, ref *);
int filter_open(const char *, uint, ref *, const stream_procs *, const stream_template *, const stream_state *);
void make_stream_file(ref *, stream *, const char *);
int file_close_finish(stream *);
int file_close_disable(stream *);
int file_close_file(stream *);
int file_close(ref *);
stream *file_alloc_stream(gs_memory_t *, client_name_t);
void file_save(void);
int zreadline_from(stream *, byte *, uint, uint *, bool *);
typedef enum { pt_full_ref = 0, pt_executable_operator = 2, pt_integer = 3, pt_unused1 = 4, pt_unused2 = 5, pt_literal_name = 6, pt_executable_name = 7 } packed_type;
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
int read_matrix(const ref *, gs_matrix *);
int write_matrix(ref *, const gs_matrix *);
typedef enum { i_vm_foreign = 0, i_vm_system, i_vm_global, i_vm_local, i_vm_max = i_vm_local } i_vm_space;
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
int alloc_save_change(gs_dual_memory_t *, const ref * pcont, ref_packed * ptr, client_name_t cname);
int alloc_save_level(const gs_dual_memory_t *);
extern void make_invalid_file(ref *);
static int no_cleanup(os_ptr);
static uint count_to_stopped(long);
static int cond_continue(os_ptr);
static int zcond(register os_ptr op)
{
    es_ptr ep = (e_stack.p);
    if (!(((op)->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0))) == (((t_array) << 8) + (0))))
	return (check_type_failed(op));
    if (!(((&*op)->tas.type_attrs) & (0x40)))
	return ((-7));
    if ((((op)->tas.rsize) & 1) != 0)
	return ((-15));
    if (((op)->tas.rsize) == 0)
	return zpop(op);
    if ((e_stack.p) > (e_stack.top) - (3)) {
	int es_code_ = ref_stack_extend(&e_stack, 3);
	if (es_code_ < 0)
	    return es_code_;
    };
    (e_stack.p) = ep += 3;
    (*(ep - 2) = *(op));
    ((ep - 1)->value.opproc = (cond_continue), ((ep - 1)->tas.type_attrs = ((t_operator) << 8) + (0x80)), ((ep - 1)->tas.rsize = (0)));
    array_get(op, 0L, ep);
    if (((((e_stack.p))->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x80))) == (((t_file) << 8) + (0x80))))
	(esfile = ((e_stack.p)));
    ((o_stack.p) -= (1));
    return 5;
}

static int cond_continue(register os_ptr op)
{
    es_ptr ep = (e_stack.p);
    int code;
    if (!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_boolean)))
	return (check_type_failed(&*op));
    if (op->value.boolval) {
	array_get(ep, 1L, ep);
	if (((((e_stack.p))->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x80))) == (((t_file) << 8) + (0x80))))
	    (esfile = ((e_stack.p)));
	code = 14;
    } else if (((ep)->tas.rsize) > 2) {
	const ref_packed *elts = ep->value.packed;
	if ((e_stack.p) > (e_stack.top) - (2)) {
	    int es_code_ = ref_stack_extend(&e_stack, 2);
	    if (es_code_ < 0)
		return es_code_;
	};
	((ep)->tas.rsize -= (2));
	elts = ((*(const ref_packed *) (elts) >= ((ref_packed) (2) << 13)) ? elts + 1 : elts + (sizeof(ref) / sizeof(ref_packed)));
	elts = ((*(const ref_packed *) (elts) >= ((ref_packed) (2) << 13)) ? elts + 1 : elts + (sizeof(ref) / sizeof(ref_packed)));
	ep->value.packed = elts;
	array_get(ep, 0L, ep + 2);
	((ep + 1)->value.opproc = (cond_continue), ((ep + 1)->tas.type_attrs = ((t_operator) << 8) + (0x80)), ((ep + 1)->tas.rsize = (0)));
	(e_stack.p) = ep + 2;
	if (((((e_stack.p))->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x80))) == (((t_file) << 8) + (0x80))))
	    (esfile = ((e_stack.p)));
	code = 5;
    } else {
	(e_stack.p) = ep - 1;
	code = 14;
    }
    ((o_stack.p) -= (1));
    return code;
}

int zexec(register os_ptr op)
{
    if (op < (o_stack.bot) + ((1) - 1))
	return ((-17));
    if (!(((op)->tas.type_attrs) & (0x80)))
	return 0;
    if ((e_stack.p) > (e_stack.top) - (1)) {
	int es_code_ = ref_stack_extend(&e_stack, 1);
	if (es_code_ < 0)
	    return es_code_;
    };
    ++(e_stack.p);
    (*((e_stack.p)) = *(op));
    if (((((e_stack.p))->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x80))) == (((t_file) << 8) + (0x80))))
	(esfile = ((e_stack.p)));
    ((o_stack.p) -= (1));
    return 5;
}
//complexity is O(n) inferred by loopus
int zexecn(register os_ptr op)
{
    uint n, i;
    es_ptr esp_orig;
    if (!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_integer)))
	return (check_type_failed(&*op));
    if ((ulong) (*op).value.intval > (((unsigned int) 0xffffffff + (unsigned int) 0) - 1))
	return ((-15));
    n = (uint) op->value.intval;
    if (op < (o_stack.bot) + ((n + 1) - 1))
	return ((-17));
    if ((e_stack.p) > (e_stack.top) - (n)) {
	int es_code_ = ref_stack_extend(&e_stack, n);
	if (es_code_ < 0)
	    return es_code_;
    };
    esp_orig = (e_stack.p);
    for (i = 0; i < n; ++i) {
	const ref *rp = ref_stack_index(&o_stack, (long) (i + 1));
	switch ((((const byte *) &((rp)->tas.type_attrs))[1])) {
	case t_dictionary:
	case t_file:
	case t_array:
	case t_mixedarray:
	case t_shortarray:
	case t_astruct:
	case t_string:
	case t_device:
	    if (!(((rp)->tas.type_attrs) & (0x40)) && (((rp)->tas.type_attrs) & (0x80))) {
		(e_stack.p) = esp_orig;
		return ((-7));
	    }
	default:
	    do {
	    } while (0);
	}
	if (!(((rp)->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x80))) == (((t_null) << 8) + (0x80)))) {
	    ++(e_stack.p);
	    (*((e_stack.p)) = *(rp));
	}
    }
    if (((((e_stack.p))->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x80))) == (((t_file) << 8) + (0x80))))
	(esfile = ((e_stack.p)));
    ((o_stack.p) -= (n + 1));
    return 5;
}

static int zsuperexec(os_ptr op)
{
    return zexec(op);
}

int zif(register os_ptr op)
{
    if (!((((const byte *) &((&op[-1])->tas.type_attrs))[1]) == (t_boolean)))
	return (check_type_failed(&op[-1]));
    if (!(((&*op)->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0x40 + 0x80))) == (((t_array) << 8) + (0x40 + 0x80))))
	return (check_proc_failed(&*op));;
    if (op[-1].value.boolval) {
	if ((e_stack.p) > (e_stack.top) - (1)) {
	    int es_code_ = ref_stack_extend(&e_stack, 1);
	    if (es_code_ < 0)
		return es_code_;
	};
	++(e_stack.p);
	(*((e_stack.p)) = *(op));
	if (((((e_stack.p))->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x80))) == (((t_file) << 8) + (0x80))))
	    (esfile = ((e_stack.p)));
    }
    ((o_stack.p) -= (2));
    return 5;
}

int zifelse(register os_ptr op)
{
    if (!((((const byte *) &((&op[-2])->tas.type_attrs))[1]) == (t_boolean)))
	return (check_type_failed(&op[-2]));
    if (!(((&op[-1])->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0x40 + 0x80))) == (((t_array) << 8) + (0x40 + 0x80))))
	return (check_proc_failed(&op[-1]));;
    if (!(((&*op)->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0x40 + 0x80))) == (((t_array) << 8) + (0x40 + 0x80))))
	return (check_proc_failed(&*op));;
    if ((e_stack.p) > (e_stack.top) - (1)) {
	int es_code_ = ref_stack_extend(&e_stack, 1);
	if (es_code_ < 0)
	    return es_code_;
    };
    ++(e_stack.p);
    if (op[-2].value.boolval) {
	(*((e_stack.p)) = *(op - 1));
    } else {
	(*((e_stack.p)) = *(op));
    }
    if (((((e_stack.p))->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x80))) == (((t_file) << 8) + (0x80))))
	(esfile = ((e_stack.p)));
    ((o_stack.p) -= (3));
    return 5;
}

static int for_pos_int_continue(os_ptr), for_neg_int_continue(os_ptr), for_real_continue(os_ptr);
int zfor(register os_ptr op)
{
    register es_ptr ep;
    if ((e_stack.p) > (e_stack.top) - (7)) {
	int es_code_ = ref_stack_extend(&e_stack, 7);
	if (es_code_ < 0)
	    return es_code_;
    };
    ep = (e_stack.p) + 6;
    if (!(((&*op)->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0x40 + 0x80))) == (((t_array) << 8) + (0x40 + 0x80))))
	return (check_proc_failed(&*op));;
    if (((((const byte *) &((op - 3)->tas.type_attrs))[1]) == (t_integer)) && ((((const byte *) &((op - 2)->tas.type_attrs))[1]) == (t_integer))) {
	((ep - 4)->value.intval = (op[-3].value.intval), ((ep - 4)->tas.type_attrs = ((t_integer) << 8) + (0)));
	((ep - 3)->value.intval = (op[-2].value.intval), ((ep - 3)->tas.type_attrs = ((t_integer) << 8) + (0)));
	switch ((((const byte *) &((op - 1)->tas.type_attrs))[1])) {
	case t_integer:
	    ((ep - 2)->value.intval = (op[-1].value.intval), ((ep - 2)->tas.type_attrs = ((t_integer) << 8) + (0)));
	    break;
	case t_real:
	    ((ep - 2)->value.intval = ((long) op[-1].value.realval), ((ep - 2)->tas.type_attrs = ((t_integer) << 8) + (0)));
	    break;
	default:
	    return (check_type_failed(op - 1));
	}
	if (ep[-3].value.intval >= 0)
	    ((ep)->value.opproc = (for_pos_int_continue), ((ep)->tas.type_attrs = ((t_operator) << 8) + (0x80)), ((ep)->tas.rsize = (0)));
	else
	    ((ep)->value.opproc = (for_neg_int_continue), ((ep)->tas.type_attrs = ((t_operator) << 8) + (0x80)), ((ep)->tas.rsize = (0)));
    } else {
	float params[3];
	int code;
	if ((code = num_params(op - 1, 3, params)) < 0)
	    return code;
	((ep - 4)->value.realval = (params[0]), ((ep - 4)->tas.type_attrs = ((t_real) << 8) + (0)));
	((ep - 3)->value.realval = (params[1]), ((ep - 3)->tas.type_attrs = ((t_real) << 8) + (0)));
	((ep - 2)->value.realval = (params[2]), ((ep - 2)->tas.type_attrs = ((t_real) << 8) + (0)));
	((ep)->value.opproc = (for_real_continue), ((ep)->tas.type_attrs = ((t_operator) << 8) + (0x80)), ((ep)->tas.rsize = (0)));
    }
    ((ep - 5)->value.opproc = (no_cleanup), ((ep - 5)->tas.type_attrs = ((t_null) << 8) + (0x80)), ((ep - 5)->tas.rsize = (2)));
    (*(ep - 1) = *(op));
    (e_stack.p) = ep;
    ((o_stack.p) -= (4));
    return 5;
}

static int for_pos_int_continue(register os_ptr op)
{
    register es_ptr ep = (e_stack.p);
    long var = ep[-3].value.intval;
    if (var > ep[-1].value.intval) {
	(e_stack.p) -= 5;
	return 14;
    }
    do {
	if ((op += (1)) > (o_stack.top)) {
	    o_stack.requested = (1);
	    return ((-16));
	} else
	    (o_stack.p) = op;
    } while (0);
    ((op)->value.intval = (var), ((op)->tas.type_attrs = ((t_integer) << 8) + (0)));
    ep[-3].value.intval = var + ep[-2].value.intval;
    ((ep + 2)->value = (ep)->value, (ep + 2)->tas = (ep)->tas);
    (e_stack.p) = ep + 2;
    return 5;
}

static int for_neg_int_continue(register os_ptr op)
{
    register es_ptr ep = (e_stack.p);
    long var = ep[-3].value.intval;
    if (var < ep[-1].value.intval) {
	(e_stack.p) -= 5;
	return 14;
    }
    do {
	if ((op += (1)) > (o_stack.top)) {
	    o_stack.requested = (1);
	    return ((-16));
	} else
	    (o_stack.p) = op;
    } while (0);
    ((op)->value.intval = (var), ((op)->tas.type_attrs = ((t_integer) << 8) + (0)));
    ep[-3].value.intval = var + ep[-2].value.intval;
    (*(ep + 2) = *(ep));
    (e_stack.p) = ep + 2;
    return 5;
}

static int for_real_continue(register os_ptr op)
{
    es_ptr ep = (e_stack.p);
    float var = ep[-3].value.realval;
    float incr = ep[-2].value.realval;
    if (incr >= 0 ? (var > ep[-1].value.realval) : (var < ep[-1].value.realval)) {
	(e_stack.p) -= 5;
	return 14;
    }
    do {
	if ((op += (1)) > (o_stack.top)) {
	    o_stack.requested = (1);
	    return ((-16));
	} else
	    (o_stack.p) = op;
    } while (0);
    (*(op) = *(ep - 3));
    ep[-3].value.realval = var + incr;
    (e_stack.p) = ep + 2;
    (*(ep + 2) = *(ep));
    return 5;
}

static int for_fraction_continue(os_ptr);
int zfor_fraction(register os_ptr op)
{
    int code = zfor(op);
    if (code < 0)
	return code;
    (((e_stack.p))->value.opproc = (for_fraction_continue), (((e_stack.p))->tas.type_attrs = ((t_operator) << 8) + (0x80)), (((e_stack.p))->tas.rsize = (0)));
    return code;
}

static int for_fraction_continue(register os_ptr op)
{
    register es_ptr ep = (e_stack.p);
    int code = for_pos_int_continue(op);
    if (code != 5)
	return code;
    (((o_stack.p))->value.realval = ((float) (o_stack.p)->value.intval / ep[-1].value.intval), (((o_stack.p))->tas.type_attrs = ((t_real) << 8) + (0)));
    return code;
}

static int repeat_continue(os_ptr);
static int zrepeat(register os_ptr op)
{
    if (!((((const byte *) &((&op[-1])->tas.type_attrs))[1]) == (t_integer)))
	return (check_type_failed(&op[-1]));
    if (!(((&*op)->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0x40 + 0x80))) == (((t_array) << 8) + (0x40 + 0x80))))
	return (check_proc_failed(&*op));;
    if (op[-1].value.intval < 0)
	return ((-15));
    if ((e_stack.p) > (e_stack.top) - (5)) {
	int es_code_ = ref_stack_extend(&e_stack, 5);
	if (es_code_ < 0)
	    return es_code_;
    };
    (++(e_stack.p), (((e_stack.p))->value.opproc = (no_cleanup), (((e_stack.p))->tas.type_attrs = ((t_null) << 8) + (0x80)), (((e_stack.p))->tas.rsize = (2))));
    *++(e_stack.p) = op[-1];
    *++(e_stack.p) = *op;
    (((e_stack.p) + 1)->value.opproc = (repeat_continue), (((e_stack.p) + 1)->tas.type_attrs = ((t_operator) << 8) + (0x80)), (((e_stack.p) + 1)->tas.rsize = (0)));
    ((o_stack.p) -= (2));
    return repeat_continue(op - 2);
}

static int repeat_continue(register os_ptr op)
{
    es_ptr ep = (e_stack.p);
    if (--(ep[-1].value.intval) >= 0) {
	(e_stack.p) += 2;
	(*((e_stack.p)) = *(ep));
	return 5;
    } else {
	(e_stack.p) -= 3;
	return 14;
    }
}

static int loop_continue(os_ptr);
static int zloop(register os_ptr op)
{
    if (!(((&*op)->tas.type_attrs & ((((1 << 6) - (4)) << 8) + (0x40 + 0x80))) == (((t_array) << 8) + (0x40 + 0x80))))
	return (check_proc_failed(&*op));;
    if ((e_stack.p) > (e_stack.top) - (4)) {
	int es_code_ = ref_stack_extend(&e_stack, 4);
	if (es_code_ < 0)
	    return es_code_;
    };
    (++(e_stack.p), (((e_stack.p))->value.opproc = (no_cleanup), (((e_stack.p))->tas.type_attrs = ((t_null) << 8) + (0x80)), (((e_stack.p))->tas.rsize = (2))));
    *++(e_stack.p) = *op;
    (((e_stack.p) + 1)->value.opproc = (loop_continue), (((e_stack.p) + 1)->tas.type_attrs = ((t_operator) << 8) + (0x80)), (((e_stack.p) + 1)->tas.rsize = (0)));
    ((o_stack.p) -= (1));
    return loop_continue(op - 1);
}

static int loop_continue(register os_ptr op)
{
    register es_ptr ep = (e_stack.p);
    (*(ep + 2) = *(ep));
    (e_stack.p) = ep + 2;
    return 5;
}

static int zexit(register os_ptr op)
{
    uint scanned = 0; {
	ref_stack_block *pblock_ = (ref_stack_block *) (&e_stack)->current.value.refs;
	ref *ep = (&e_stack)->bot;
	uint used = (&e_stack)->p + 1 - (&e_stack)->bot;
	for (;;) { {
		uint count = used;
		ep += used - 1;
		for (; count; count--, ep--)
		    if ((((ep)->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x80))) == (((t_null) << 8) + (0x80))))
			switch (((ep)->tas.rsize)) {
			case 2:
			    pop_estack(scanned + (used - count + 1));
			    return 14;
			case 3:
			    return ((-8));
			}
		scanned += used;
	}
	pblock_ = (ref_stack_block *) pblock_->next.value.refs;
	if (pblock_ == 0)
	    break;
	    ep = pblock_->used.value.refs;
	    used = ((&pblock_->used)->tas.rsize);
	}
    }
    return ((-8));
}

static int stopped_push(register os_ptr op)
{
    do {
	if ((op += (1)) > (o_stack.top)) {
	    o_stack.requested = (1);
	    return ((-16));
	} else
	    (o_stack.p) = op;
    } while (0);
    *op = (e_stack.p)[-1];
    (e_stack.p) -= 3;
    return 14;
}

static int zstop(register os_ptr op)
{
    uint count = count_to_stopped(1L);
    if (count) {
	if ((o_stack.top) - (o_stack.p) < (2)) {
	    o_stack.requested = (2);
	    return ((-16));
	};
	pop_estack(count);
	op = (o_stack.p);
	do {
	    if ((op += (1)) > (o_stack.top)) {
		o_stack.requested = (1);
		return ((-16));
	    } else
		(o_stack.p) = op;
	} while (0);
	((op)->value.boolval = (1), ((op)->tas.type_attrs = ((t_boolean) << 8) + (0)));
	return 14;
    }
    return ((-8));
}

static int zzstop(register os_ptr op)
{
    uint count;
    if (!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_integer)))
	return (check_type_failed(&*op));
    count = count_to_stopped(op->value.intval);
    if (count) {
	ref save_result;
	if (op < (o_stack.bot) + ((2) - 1))
	    return ((-17));
	save_result = op[-1];
	((o_stack.p) -= (2));
	pop_estack(count);
	op = (o_stack.p);
	do {
	    if ((op += (1)) > (o_stack.top)) {
		o_stack.requested = (1);
		return ((-16));
	    } else
		(o_stack.p) = op;
	} while (0);
	*op = save_result;
	return 14;
    }
    return ((-8));
}

static int zstopped(register os_ptr op)
{
    if (op < (o_stack.bot) + ((1) - 1))
	return ((-17));
    if ((e_stack.p) > (e_stack.top) - (5)) {
	int es_code_ = ref_stack_extend(&e_stack, 5);
	if (es_code_ < 0)
	    return es_code_;
    };
    (++(e_stack.p), (((e_stack.p))->value.opproc = (no_cleanup), (((e_stack.p))->tas.type_attrs = ((t_null) << 8) + (0x80)), (((e_stack.p))->tas.rsize = (3))));
    ++(e_stack.p);
    (((e_stack.p))->value.boolval = (0), (((e_stack.p))->tas.type_attrs = ((t_boolean) << 8) + (0)));
    ++(e_stack.p);
    (((e_stack.p))->value.intval = (1), (((e_stack.p))->tas.type_attrs = ((t_integer) << 8) + (0)));
    (++(e_stack.p), (((e_stack.p))->value.opproc = (stopped_push), (((e_stack.p))->tas.type_attrs = ((t_operator) << 8) + (0x80)), (((e_stack.p))->tas.rsize = (0))));
    *++(e_stack.p) = *op;
    if (((((e_stack.p))->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x80))) == (((t_file) << 8) + (0x80))))
	(esfile = ((e_stack.p)));
    ((o_stack.p) -= (1));
    return 5;
}

static int zzstopped(register os_ptr op)
{
    if (!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_integer)))
	return (check_type_failed(&*op));
    if (op < (o_stack.bot) + ((3) - 1))
	return ((-17));
    if ((e_stack.p) > (e_stack.top) - (5)) {
	int es_code_ = ref_stack_extend(&e_stack, 5);
	if (es_code_ < 0)
	    return es_code_;
    };
    (++(e_stack.p), (((e_stack.p))->value.opproc = (no_cleanup), (((e_stack.p))->tas.type_attrs = ((t_null) << 8) + (0x80)), (((e_stack.p))->tas.rsize = (3))));
    *++(e_stack.p) = op[-1];
    *++(e_stack.p) = *op;
    (++(e_stack.p), (((e_stack.p))->value.opproc = (stopped_push), (((e_stack.p))->tas.type_attrs = ((t_operator) << 8) + (0x80)), (((e_stack.p))->tas.rsize = (0))));
    *++(e_stack.p) = op[-2];
    if (((((e_stack.p))->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x80))) == (((t_file) << 8) + (0x80))))
	(esfile = ((e_stack.p)));
    ((o_stack.p) -= (3));
    return 5;
}

static int zinstopped(register os_ptr op)
{
    uint count;
    if (!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_integer)))
	return (check_type_failed(&*op));
    count = count_to_stopped(op->value.intval);
    if (count) {
	do {
	    if ((op += (1)) > (o_stack.top)) {
		o_stack.requested = (1);
		return ((-16));
	    } else
		(o_stack.p) = op;
	} while (0);
	op[-1] = *ref_stack_index(&e_stack, count - 2);
	((op)->value.boolval = (1), ((op)->tas.type_attrs = ((t_boolean) << 8) + (0)));
    } else
	((op)->value.boolval = (0), ((op)->tas.type_attrs = ((t_boolean) << 8) + (0)));
    return 0;
}

static int zcountexecstack(register os_ptr op)
{
    do {
	if ((op += (1)) > (o_stack.top)) {
	    o_stack.requested = (1);
	    return ((-16));
	} else
	    (o_stack.p) = op;
    } while (0);
    ((op)->value.intval = (ref_stack_count(&e_stack)), ((op)->tas.type_attrs = ((t_integer) << 8) + (0)));
    return 0;
}

static int execstack_continue(os_ptr);
static int zexecstack(register os_ptr op)
{
    uint depth = ref_stack_count(&e_stack);
    if (!(((&*op)->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x10))) == (((t_array) << 8) + (0x10))))
	return ((!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_array)) ? check_type_failed(&*op) : (-7)));
    if (depth > ((op)->tas.rsize))
	return ((-15));
    if ((e_stack.p) > (e_stack.top) - (1)) {
	int es_code_ = ref_stack_extend(&e_stack, 1);
	if (es_code_ < 0)
	    return es_code_;
    };
    ((op)->tas.rsize = ((uint) depth));
    (++(e_stack.p), (((e_stack.p))->value.opproc = (execstack_continue), (((e_stack.p))->tas.type_attrs = ((t_operator) << 8) + (0x80)), (((e_stack.p))->tas.rsize = (0))));
    return 5;
}
//complexity is O(n) inferred by loopus
static int execstack_continue(register os_ptr op)
{
    int code = ref_stack_store(&e_stack, op, ((op)->tas.rsize), 0, 0, ((bool) 1), "execstack");
    uint asize = ((op)->tas.rsize);
    uint i;
    ref *rp;
    if (code < 0)
	return code;
    for (i = 0, rp = op->value.refs; i < asize; i++, rp++)
	switch ((((const byte *) &((rp)->tas.type_attrs))[1])) {
	case t_operator:{
		uint opidx = (((rp)->tas.rsize) == 0 ? op_find_index(rp) : ((rp)->tas.rsize));
		if (opidx == 0 || ((op_def_table[opidx])->oname[1] == '%'))
		    ((rp)->tas.type_attrs &= ~(0x80));
		break;
	    }
	case t_struct:
	case t_astruct:{
		const char *tname = ((const char *) gs_struct_type_name((*(((gs_memory_t *) (gs_imemory.current)))->procs.object_type) (((gs_memory_t *) (gs_imemory.current)), rp->value.pstruct)));
		((rp)->value.const_bytes = ((const byte *) tname), ((rp)->tas.type_attrs = ((t_string) << 8) + ((0x20 + 0x40) | avm_foreign)), ((rp)->tas.rsize = (strlen(tname))));
		break;
	    }
	}
    return 0;
}

static int zneedinput(register os_ptr op)
{
    return (-106);
}

static int zquit(register os_ptr op)
{
    if (op < (o_stack.bot) + ((2) - 1))
	return ((-17));
    if (!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_integer)))
	return (check_type_failed(&*op));
    return (-101);
}

static ref *zget_current_file(void);
static int zcurrentfile(register os_ptr op)
{
    ref *fp;
    do {
	if ((op += (1)) > (o_stack.top)) {
	    o_stack.requested = (1);
	    return ((-16));
	} else
	    (o_stack.p) = op;
    } while (0);
    if (esfile != 0) {
	(*(op) = *(esfile));
    } else if ((fp = zget_current_file()) == 0) {
	make_invalid_file(op);
    } else {
	(*(op) = *(fp));
	(esfile = (fp));
    }
    ((op)->tas.type_attrs &= ~(0x80));
    return 0;
}

static ref *zget_current_file(void)
{ {
	ref_stack_block *pblock_ = (ref_stack_block *) (&e_stack)->current.value.refs;
	ref *ep = (&e_stack)->bot;
	uint used = (&e_stack)->p + 1 - (&e_stack)->bot;
	for (;;) { {
		uint count = used;
		ep += used - 1;
		for (; count; count--, ep--)
		    if ((((ep)->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x80))) == (((t_file) << 8) + (0x80))))
			return ep;
	}
	pblock_ = (ref_stack_block *) pblock_->next.value.refs;
	if (pblock_ == 0)
	    break;
	    ep = pblock_->used.value.refs;
	    used = ((&pblock_->used)->tas.rsize);
	}
}
return 0;
}

const op_def *zcontrol_op_defs(void)
{
    static const op_def op_defs_[] = { {"1.cond", zcond}, {"0countexecstack", zcountexecstack}, {"0currentfile", zcurrentfile}, {"1exec", zexec}, {"1.execn", zexecn}, {"0execstack", zexecstack}, {"0exit", zexit}, {"2if", zif}, {"3ifelse", zifelse}, {"0.instopped", zinstopped}, {"0.needinput", zneedinput}, {"4for", zfor}, {"1loop", zloop}, {"2.quit", zquit}, {"2repeat", zrepeat}, {"0stop", zstop}, {"1.stop", zzstop}, {"1stopped", zstopped}, {"2.stopped", zzstopped}, {"1%cond_continue", cond_continue}, {"0%execstack_continue", execstack_continue}, {"0%for_pos_int_continue", for_pos_int_continue}, {"0%for_neg_int_continue", for_neg_int_continue}, {"0%for_real_continue", for_real_continue}, {"4%for_fraction", zfor_fraction}, {"0%for_fraction_continue", for_fraction_continue}, {"0%loop_continue", loop_continue}, {"0%repeat_continue", repeat_continue}, {"0%stopped_push", stopped_push}, {"internaldict", 0}, {"1superexec", zsuperexec}, {(char *) 0, (op_proc_p) 0} };
    return op_defs_;
}

static int no_cleanup(os_ptr op)
{
    return 0;
}

static uint count_to_stopped(long mask)
{
    uint scanned = 0; {
	ref_stack_block *pblock_ = (ref_stack_block *) (&e_stack)->current.value.refs;
	ref *ep = (&e_stack)->bot;
	uint used = (&e_stack)->p + 1 - (&e_stack)->bot;
	for (;;) { {
		uint count = used;
		ep += used - 1;
		for (; count; count--, ep--)
		    if ((((ep)->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x80))) == (((t_null) << 8) + (0x80))) && ((ep)->tas.rsize) == 3 && (ep[2].value.intval & mask) != 0)
			return scanned + (used - count + 1);
		scanned += used;
	}
	pblock_ = (ref_stack_block *) pblock_->next.value.refs;
	if (pblock_ == 0)
	    break;
	    ep = pblock_->used.value.refs;
	    used = ((&pblock_->used)->tas.rsize);
	}
    }
    return 0;
}

void pop_estack(uint count)
{
    uint idx = 0;
    uint popped = 0;
    (esfile = 0);
    for (; idx < count; idx++) {
	ref *ep = ref_stack_index(&e_stack, idx - popped);
	if ((((ep)->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x80))) == (((t_null) << 8) + (0x80)))) {
	    ref_stack_pop(&e_stack, idx + 1 - popped);
	    popped = idx + 1;
	    (*((ep)->value.opproc)) ((o_stack.p));
	}
    }
    ref_stack_pop(&e_stack, count - popped);
}
