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
extern long gs_buildtime;
extern const char *gs_copyright;
extern const char *gs_product;
extern long gs_revision;
extern long gs_revisiondate;
extern long gs_serialnumber;
extern const char *gs_doc_directory;
extern const char *gs_lib_default_path;
extern const char *gs_init_file;
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
typedef struct gs_font_dir_s gs_font_dir;
typedef struct gs_font_s gs_font;
gs_font_dir *gs_font_dir_alloc(gs_memory_t *);
gs_font_dir *gs_font_dir_alloc_limits(gs_memory_t *, uint, uint, uint, uint, uint);
int gs_definefont(gs_font_dir *, gs_font *);
int gs_scalefont(gs_font_dir *, const gs_font *, floatp, gs_font **);
int gs_makefont(gs_font_dir *, const gs_font *, const gs_matrix *, gs_font **);
int gs_setfont(gs_state *, gs_font *);
gs_font *gs_currentfont(const gs_state *);
gs_font *gs_rootfont(const gs_state *);
void gs_purge_font(gs_font *);
void gs_cachestatus(const gs_font_dir *, uint[7]);
uint gs_currentcachesize(const gs_font_dir *);
int gs_setcachesize(gs_font_dir *, uint);
uint gs_currentcachelower(const gs_font_dir *);
int gs_setcachelower(gs_font_dir *, uint);
uint gs_currentcacheupper(const gs_font_dir *);
int gs_setcacheupper(gs_font_dir *, uint);
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
typedef struct gs_halftone_s gs_halftone;
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
typedef struct gx_transfer_map_s gx_transfer_map;
typedef float (*gs_mapping_proc) (floatp, const gx_transfer_map *);
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
gs_id gs_next_ids(uint count);
void memflip8x8(const byte * inp, int line_size, byte * outp, int dist);
int bytes_compare(const byte * str1, uint len1, const byte * str2, uint len2);
typedef struct string_match_params_s {
    int any_substring;
    int any_char;
    int quote_next;
    bool ignore_case;
} string_match_params;
bool string_match(const byte * str, uint len, const byte * pstr, uint plen, const string_match_params * psmp);
typedef s_ptr es_ptr;
typedef const_s_ptr const_es_ptr;
extern ref_stack e_stack;
extern ref *esfile;
void pop_estack(uint);
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
typedef struct gs_uid_s gs_uid;
int dict_bool_param(const ref * pdict, const char *kstr, bool defaultval, bool * pvalue);
int dict_int_param(const ref * pdict, const char *kstr, int minval, int maxval, int defaultval, int *pvalue);
int dict_int_null_param(const ref * pdict, const char *kstr, int minval, int maxval, int defaultval, int *pvalue);
int dict_uint_param(const ref * pdict, const char *kstr, uint minval, uint maxval, uint defaultval, uint * pvalue);
int dict_float_param(const ref * pdict, const char *kstr, floatp defaultval, float *pvalue);
int dict_int_array_param(const ref * pdict, const char *kstr, uint maxlen, int *ivec);
int dict_float_array_param(const ref * pdict, const char *kstr, uint maxlen, float *fvec, const float *defaultvec);
int dict_proc_param(const ref * pdict, const char *kstr, ref * pproc, bool defaultval);
int dict_matrix_param(const ref * pdict, const char *kstr, gs_matrix * pmat);
int dict_uid_param(const ref * pdict, gs_uid * puid, int defaultval, gs_memory_t * mem);
bool dict_check_uid_param(const ref * pdict, const gs_uid * puid);
typedef struct gs_param_list_s gs_param_list;
typedef const char *gs_param_name;
typedef struct gs_param_string_s {
    const byte *data;
    uint size;
    bool persistent;
} gs_param_string;
typedef struct gs_param_int_array_s {
    const int *data;
    uint size;
    bool persistent;
} gs_param_int_array;
typedef struct gs_param_float_array_s {
    const float *data;
    uint size;
    bool persistent;
} gs_param_float_array;
typedef struct gs_param_string_array_s {
    const gs_param_string *data;
    uint size;
    bool persistent;
} gs_param_string_array;
typedef struct gs_param_collection_s {
    gs_param_list *list;
    uint size;
} gs_param_collection;
typedef gs_param_collection gs_param_dict;
typedef gs_param_collection gs_param_array;
typedef struct gs_param_list_procs_s {
    int (*xmit_null) (gs_param_list *, gs_param_name);
    int (*xmit_bool) (gs_param_list *, gs_param_name, bool *);
    int (*xmit_int) (gs_param_list *, gs_param_name, int *);
    int (*xmit_long) (gs_param_list *, gs_param_name, long *);
    int (*xmit_float) (gs_param_list *, gs_param_name, float *);
    int (*xmit_string) (gs_param_list *, gs_param_name, gs_param_string *);
    int (*xmit_name) (gs_param_list *, gs_param_name, gs_param_string *);
    int (*xmit_int_array) (gs_param_list *, gs_param_name, gs_param_int_array *);
    int (*xmit_float_array) (gs_param_list *, gs_param_name, gs_param_float_array *);
    int (*xmit_string_array) (gs_param_list *, gs_param_name, gs_param_string_array *);
    int (*xmit_name_array) (gs_param_list *, gs_param_name, gs_param_string_array *);
    int (*begin_xmit_dict) (gs_param_list *, gs_param_name, gs_param_dict *, bool);
    int (*end_xmit_dict) (gs_param_list *, gs_param_name, gs_param_dict *);
    bool(*requested) (const gs_param_list *, gs_param_name);
    int (*get_policy) (gs_param_list *, gs_param_name);
    int (*signal_error) (gs_param_list *, gs_param_name, int);
    int (*commit) (gs_param_list *);
} gs_param_list_procs;
struct gs_param_list_s {
    const gs_param_list_procs *procs;
};
typedef struct gs_c_param_s gs_c_param;
typedef struct gs_c_param_list_s {
    const gs_param_list_procs *procs;
    gs_memory_t *memory;
    gs_c_param *head;
    uint count;
} gs_c_param_list;
void gs_c_param_list_write(gs_c_param_list *, gs_memory_t *);
void gs_c_param_list_read(gs_c_param_list *);
void gs_c_param_list_release(gs_c_param_list *);
typedef struct iparam_loc_s {
    ref *pvalue;
    int *presult;
} iparam_loc;
typedef struct iparam_list_s iparam_list;
struct iparam_list_s {
    const gs_param_list_procs *procs;
    union {
	struct {
	    int (*read) (iparam_list *, const ref *, iparam_loc *);
	    ref policies;
	    bool require_all;
	} r;
	struct {
	    int (*write) (iparam_list *, const ref *, const ref *);
	    ref wanted;
	} w;
    } u;
    int *results;
    uint count;
    bool int_keys;
};
typedef struct dict_param_list_s {
    const gs_param_list_procs *procs;
    union {
	struct {
	    int (*read) (iparam_list *, const ref *, iparam_loc *);
	    ref policies;
	    bool require_all;
	} r;
	struct {
	    int (*write) (iparam_list *, const ref *, const ref *);
	    ref wanted;
	} w;
    } u;
    int *results;
    uint count;
    bool int_keys;
    ref dict;
} dict_param_list;
typedef struct array_param_list_s {
    const gs_param_list_procs *procs;
    union {
	struct {
	    int (*read) (iparam_list *, const ref *, iparam_loc *);
	    ref policies;
	    bool require_all;
	} r;
	struct {
	    int (*write) (iparam_list *, const ref *, const ref *);
	    ref wanted;
	} w;
    } u;
    int *results;
    uint count;
    bool int_keys;
    ref *bot;
    ref *top;
} array_param_list;
typedef struct stack_param_list_s {
    const gs_param_list_procs *procs;
    union {
	struct {
	    int (*read) (iparam_list *, const ref *, iparam_loc *);
	    ref policies;
	    bool require_all;
	} r;
	struct {
	    int (*write) (iparam_list *, const ref *, const ref *);
	    ref wanted;
	} w;
    } u;
    int *results;
    uint count;
    bool int_keys;
    ref_stack *pstack;
    uint skip;
} stack_param_list;
int dict_param_list_read(dict_param_list *, const ref *, const ref *, bool);
int dict_param_list_write(dict_param_list *, ref *, const ref *);
int array_param_list_read(array_param_list *, ref *, uint, const ref *, bool);
int stack_param_list_read(stack_param_list *, ref_stack *, uint, const ref *, bool);
int stack_param_list_write(stack_param_list *, ref_stack *, const ref *);
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
typedef struct password_s {
    uint size;
    byte data[64];
} password;
extern password SystemParamsPassword;
int param_read_password(gs_param_list *, const char *, password *);
int param_write_password(gs_param_list *, const char *, const password *);
int param_check_password(gs_param_list *, const password *);
int alloc_save_change(gs_dual_memory_t *, const ref * pcont, ref_packed * ptr, client_name_t cname);
int alloc_save_level(const gs_dual_memory_t *);
extern gs_font_dir *ifont_dir;
extern int set_vm_reclaim(long);
extern int set_vm_threshold(long);
static password StartJobPassword = { 0, {0} };
password SystemParamsPassword = { 0, {0} };

typedef struct param_def_s {
    const char *pname;
} param_def;
typedef struct long_param_def_s {
    const char *pname;
    long min_value, max_value;
    long (*current) (void);
    int (*set) (long);
} long_param_def;
typedef struct bool_param_def_s {
    const char *pname;
     bool(*current) (void);
    int (*set) (bool);
} bool_param_def;
typedef struct string_param_def_s {
    const char *pname;
    void (*current) (gs_param_string *);
    int (*set) (gs_param_string *);
} string_param_def;
typedef struct param_set_s {
    const long_param_def *long_defs;
    uint long_count;
    const bool_param_def *bool_defs;
    uint bool_count;
    const string_param_def *string_defs;
    uint string_count;
} param_set;
static int setparams(gs_param_list *, const param_set *);
static int currentparams(os_ptr, const param_set *);
static int currentparam1(os_ptr, const param_set *);
static int zcheckpassword(register os_ptr op)
{
    ref params[2];
    array_param_list list;
    int result = 0;
    int code = name_ref((const byte *) "Password", 8, &params[0], 0);
    if (code < 0)
	return code;
    params[1] = *op;
    array_param_list_read(&list, params, 2, ((void *) 0), ((bool) 0));
    if (param_check_password(((gs_param_list *) & list), &StartJobPassword) == 0)
	result = 1;
    if (param_check_password(((gs_param_list *) & list), &SystemParamsPassword) == 0)
	result = 2;
    (*(((gs_memory_t *) (gs_imemory.current)))->procs.free_object) (((gs_memory_t *) (gs_imemory.current)), (&list)->results, "iparam_list_release");
    ((op)->value.intval = (result), ((op)->tas.type_attrs = ((t_integer) << 8) + (0)));
    return 0;
}

static long current_BuildTime(void)
{
    return gs_buildtime;
}

static long current_MaxFontCache(void)
{
    return gs_currentcachesize(ifont_dir);
}

static int set_MaxFontCache(long val)
{
    return gs_setcachesize(ifont_dir, (uint) (val < 0 ? 0 : val > ((unsigned int) 0xffffffff + (unsigned int) 0) ? ((unsigned int) 0xffffffff + (unsigned int) 0) : val));
} static long current_CurFontCache(void)
{
    uint cstat[7];
    gs_cachestatus(ifont_dir, cstat);
    return cstat[0];
}

static long current_MaxGlobalVM(void)
{
    gs_memory_gc_status_t stat;
    gs_memory_gc_status((gs_imemory.spaces.named.global), &stat);
    return stat.max_vm;
}

static int set_MaxGlobalVM(long val)
{
    gs_memory_gc_status_t stat;
    gs_memory_gc_status((gs_imemory.spaces.named.global), &stat);
    stat.max_vm = (((val) > (0)) ? (val) : (0));
    gs_memory_set_gc_status((gs_imemory.spaces.named.global), &stat);
    return 0;
}

static long current_Revision(void)
{
    return gs_revision;
}
static const long_param_def system_long_params[] = { {"BuildTime", 0, (~(-1L << ((1 << 2) * 8 - 1))), current_BuildTime, ((void *) 0)}, {"MaxFontCache", 0, (~(-1L << ((1 << 2) * 8 - 1))), current_MaxFontCache, set_MaxFontCache}, {"CurFontCache", 0, (~(-1L << ((1 << 2) * 8 - 1))), current_CurFontCache, ((void *) 0)}, {"Revision", 0, (~(-1L << ((1 << 2) * 8 - 1))), current_Revision, ((void *) 0)}, {"MaxGlobalVM", 0, (~(-1L << ((1 << 2) * 8 - 1))), current_MaxGlobalVM, set_MaxGlobalVM} };

static bool current_ByteOrder(void)
{
    return !0;
}
static const bool_param_def system_bool_params[] = { {"ByteOrder", current_ByteOrder, ((void *) 0)} };

static void current_RealFormat(gs_param_string * pval)
{
    static const char *rfs = "IEEE";
    pval->data = (const byte *) rfs;
    pval->size = strlen(rfs);
    pval->persistent = ((bool) 1);
} static const string_param_def system_string_params[] = { {"RealFormat", current_RealFormat, ((void *) 0)} };
static const param_set system_param_set = { system_long_params, (sizeof(system_long_params) / sizeof((system_long_params)[0])), system_bool_params, (sizeof(system_bool_params) / sizeof((system_bool_params)[0])), system_string_params, (sizeof(system_string_params) / sizeof((system_string_params)[0])) };

static int zsetsystemparams(register os_ptr op)
{
    int code;
    dict_param_list list;
    password pass;
    if (!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_dictionary)))
	return (check_type_failed(&*op));
    code = dict_param_list_read(&list, op, ((void *) 0), ((bool) 0));
    if (code < 0)
	return code;
    code = param_check_password(((gs_param_list *) & list), &SystemParamsPassword);
    if (code != 0) {
	if (code > 0)
	    code = ((-7));
	goto out;
    }
    code = param_read_password(((gs_param_list *) & list), "StartJobPassword", &pass);
    switch (code) {
    default:
	goto out;
    case 1:
	break;
    case 0:
	StartJobPassword = pass;
    }
    code = param_read_password(((gs_param_list *) & list), "SystemParamsPassword", &pass);
    switch (code) {
    default:
	goto out;
    case 1:
	break;
    case 0:
	SystemParamsPassword = pass;
    }
    code = setparams(((gs_param_list *) & list), &system_param_set);
  out:(*(((gs_memory_t *) (gs_imemory.current)))->procs.free_object) (((gs_memory_t *) (gs_imemory.current)), (&list)->results, "iparam_list_release");
    if (code < 0)
	return code;
    ((o_stack.p) -= (1));
    return 0;
}

static int zcurrentsystemparams(os_ptr op)
{
    return currentparams(op, &system_param_set);
}

static int zgetsystemparam(os_ptr op)
{
    return currentparam1(op, &system_param_set);
}

static long current_JobTimeout(void)
{
    return 0;
}

static int set_JobTimeout(long val)
{
    return 0;
}

static long current_MaxFontItem(void)
{
    return gs_currentcacheupper(ifont_dir);
}

static int set_MaxFontItem(long val)
{
    return gs_setcacheupper(ifont_dir, val);
}

static long current_MinFontCompress(void)
{
    return gs_currentcachelower(ifont_dir);
}

static int set_MinFontCompress(long val)
{
    return gs_setcachelower(ifont_dir, val);
}

static long current_MaxOpStack(void)
{
    return (uint) ((&o_stack)->max_stack.value.intval);
}

static int set_MaxOpStack(long val)
{
    return ref_stack_set_max_count(&o_stack, val);
}

static long current_MaxDictStack(void)
{
    return (uint) ((&d_stack)->max_stack.value.intval);
}

static int set_MaxDictStack(long val)
{
    return ref_stack_set_max_count(&d_stack, val);
}

static long current_MaxExecStack(void)
{
    return (uint) ((&e_stack)->max_stack.value.intval);
}

static int set_MaxExecStack(long val)
{
    return ref_stack_set_max_count(&e_stack, val);
}

static long current_MaxLocalVM(void)
{
    gs_memory_gc_status_t stat;
    gs_memory_gc_status((gs_imemory.spaces.named.local), &stat);
    return stat.max_vm;
}

static int set_MaxLocalVM(long val)
{
    gs_memory_gc_status_t stat;
    gs_memory_gc_status((gs_imemory.spaces.named.local), &stat);
    stat.max_vm = (((val) > (0)) ? (val) : (0));
    gs_memory_set_gc_status((gs_imemory.spaces.named.local), &stat);
    return 0;
}

static long current_VMReclaim(void)
{
    gs_memory_gc_status_t gstat, lstat;
    gs_memory_gc_status((gs_imemory.spaces.named.global), &gstat);
    gs_memory_gc_status((gs_imemory.spaces.named.local), &lstat);
    return (!gstat.enabled ? -2 : !lstat.enabled ? -1 : 0);
}

static long current_VMThreshold(void)
{
    gs_memory_gc_status_t stat;
    gs_memory_gc_status((gs_imemory.spaces.named.local), &stat);
    return stat.vm_threshold;
}

static long current_MinScreenLevels(void)
{
    return gs_currentminscreenlevels();
}

static int set_MinScreenLevels(long val)
{
    gs_setminscreenlevels((uint) val);
    return 0;
}
static const long_param_def user_long_params[] = { {"JobTimeout", 0, (~(-1L << ((1 << 2) * 8 - 1))), current_JobTimeout, set_JobTimeout}, {"MaxFontItem", 0, (~(-1L << ((1 << 2) * 8 - 1))), current_MaxFontItem, set_MaxFontItem}, {"MinFontCompress", 0, (~(-1L << ((1 << 2) * 8 - 1))), current_MinFontCompress, set_MinFontCompress}, {"MaxOpStack", 0, (~(-1L << ((1 << 2) * 8 - 1))), current_MaxOpStack, set_MaxOpStack}, {"MaxDictStack", 0, (~(-1L << ((1 << 2) * 8 - 1))), current_MaxDictStack, set_MaxDictStack}, {"MaxExecStack", 0, (~(-1L << ((1 << 2) * 8 - 1))), current_MaxExecStack, set_MaxExecStack}, {"MaxLocalVM", 0, (~(-1L << ((1 << 2) * 8 - 1))), current_MaxLocalVM, set_MaxLocalVM}, {"VMReclaim", -2, 0, current_VMReclaim, set_vm_reclaim}, {"VMThreshold", 0, (~(-1L << ((1 << 2) * 8 - 1))), current_VMThreshold, set_vm_threshold}, {"WaitTimeout", 0, (~(-1L << ((1 << 2) * 8 - 1))), current_JobTimeout, set_JobTimeout}, {"MinScreenLevels", 0, (~(-1L << ((1 << 2) * 8 - 1))), current_MinScreenLevels, set_MinScreenLevels} };

static bool current_AccurateScreens(void)
{
    return gs_currentaccuratescreens();
}

static int set_AccurateScreens(bool val)
{
    gs_setaccuratescreens(val);
    return 0;
}
static const bool_param_def user_bool_params[] = { {"AccurateScreens", current_AccurateScreens, set_AccurateScreens} };

static void current_JobName(gs_param_string * pval)
{
    pval->data = 0;
    pval->size = 0;
    pval->persistent = ((bool) 1);
} static int set_JobName(gs_param_string * val)
{
    return 0;
}
static const string_param_def user_string_params[] = { {"JobName", current_JobName, set_JobName} };
static const param_set user_param_set = { user_long_params, (sizeof(user_long_params) / sizeof((user_long_params)[0])), user_bool_params, (sizeof(user_bool_params) / sizeof((user_bool_params)[0])), user_string_params, (sizeof(user_string_params) / sizeof((user_string_params)[0])) };

static int zsetuserparams(register os_ptr op)
{
    dict_param_list list;
    int code;
    if (!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_dictionary)))
	return (check_type_failed(&*op));
    code = dict_param_list_read(&list, op, ((void *) 0), ((bool) 0));
    if (code < 0)
	return code;
    code = setparams((gs_param_list *) & list, &user_param_set);
    (*(((gs_memory_t *) (gs_imemory.current)))->procs.free_object) (((gs_memory_t *) (gs_imemory.current)), (&list)->results, "iparam_list_release");
    if (code < 0)
	return code;
    ((o_stack.p) -= (1));
    return 0;
}

static int zcurrentuserparams(os_ptr op)
{
    return currentparams(op, &user_param_set);
}

static int zgetuserparam(os_ptr op)
{
    return currentparam1(op, &user_param_set);
}

const op_def *zusparam_op_defs(void)
{
    static const op_def op_defs_[] = { {"0.currentsystemparams", zcurrentsystemparams}, {"0.currentuserparams", zcurrentuserparams}, {"1.getsystemparam", zgetsystemparam}, {"1.getuserparam", zgetuserparam}, {"level2dict", 0}, {"1.checkpassword", zcheckpassword}, {"1setsystemparams", zsetsystemparams}, {"1setuserparams", zsetuserparams}, {(char *) 0, (op_proc_p) 0} };
    return op_defs_;
}
// complexity is O(n) inferred by loopus 
static int setparams(gs_param_list * plist, const param_set * pset)
{
    int i, code;
    for (i = 0; i < pset->long_count; i++) {
	const long_param_def *pdef = &pset->long_defs[i];
	long val;
	if (pdef->set == ((void *) 0))
	    continue;
	code = (*(plist)->procs->xmit_long) (plist, pdef->pname, &val);
	switch (code) {
	default:
	    return code;
	case 1:
	    break;
	case 0:
	    if (val < pdef->min_value || val > pdef->max_value)
		return ((-15));
	    code = (*pdef->set) (val);
	    if (code < 0)
		return code;
	}
    }
    for (i = 0; i < pset->bool_count; i++) {
	const bool_param_def *pdef = &pset->bool_defs[i];
	bool val;
	if (pdef->set == ((void *) 0))
	    continue;
	code = (*(plist)->procs->xmit_bool) (plist, pdef->pname, &val);
	if (code == 0)
	    code = (*pdef->set) (val);
	if (code < 0)
	    return code;
    }
    return 0;
}
//complexity is O(n) inferred by loopus
static int current_param_list(os_ptr op, const param_set * pset, const ref * psref)
{
    stack_param_list list;
    int i;
    stack_param_list_write(&list, &o_stack, ((void *) 0));
    for (i = 0; i < pset->long_count; i++) {
	const char *pname = pset->long_defs[i].pname;
	if ((psref == 0 || !bytes_compare((const byte *) pname, strlen(pname), psref->value.const_bytes, ((psref)->tas.rsize)))) {
	    long val = (*pset->long_defs[i].current) ();
	    int code = (*(((gs_param_list *) & list))->procs->xmit_long) (((gs_param_list *) & list), pname, &val);
	    if (code < 0)
		return code;
	}
    }
    for (i = 0; i < pset->bool_count; i++) {
	const char *pname = pset->bool_defs[i].pname;
	if ((psref == 0 || !bytes_compare((const byte *) pname, strlen(pname), psref->value.const_bytes, ((psref)->tas.rsize)))) {
	    bool val = (*pset->bool_defs[i].current) ();
	    int code = (*(((gs_param_list *) & list))->procs->xmit_bool) (((gs_param_list *) & list), pname, &val);
	    if (code < 0)
		return code;
	}
    }
    for (i = 0; i < pset->string_count; i++) {
	const char *pname = pset->string_defs[i].pname;
	if ((psref == 0 || !bytes_compare((const byte *) pname, strlen(pname), psref->value.const_bytes, ((psref)->tas.rsize)))) {
	    gs_param_string val;
	    int code;
	    (*pset->string_defs[i].current) (&val);
	    code = (*(((gs_param_list *) & list))->procs->xmit_string) (((gs_param_list *) & list), pname, &val);
	    if (code < 0)
		return code;
	}
    }
    return 0;
}

static int currentparams(os_ptr op, const param_set * pset)
{
    return current_param_list(op, pset, ((void *) 0));
} static int currentparam1(os_ptr op, const param_set * pset)
{
    ref sref;
    int code;
    if (!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_name)))
	return (check_type_failed(&*op));
    if ((o_stack.top) - (o_stack.p) < (2)) {
	o_stack.requested = (2);
	return ((-16));
    };
    name_string_ref((const ref *) op, &sref);
    code = current_param_list(op, pset, &sref);
    if (code < 0)
	return code;
    if ((o_stack.p) == op)
	return ((-21));
    (*(op) = *(op + 2));
    ((o_stack.p) -= (2));
    return code;
}
