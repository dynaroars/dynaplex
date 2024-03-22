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
extern char gs_debug[128];
extern FILE *gs_debug_out;
extern void eprintf_program_name(FILE *, const char *);
extern void lprintf_file_and_line(FILE *, const char *, int);
void debug_dump_bytes(const byte * from, const byte * to, const char *msg);
void debug_dump_bitmap(const byte * from, uint raster, uint height, const char *msg);
void debug_print_string(const byte * str, uint len);
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
typedef hce_code cfe_run;
extern const cfe_run cf_run_eol;
extern const cfe_run cf_white_termination[64];
extern const cfe_run cf_white_make_up[41];
extern const cfe_run cf_black_termination[64];
extern const cfe_run cf_black_make_up[41];
extern const cfe_run cf_uncompressed[6];
extern const cfe_run cf_uncompressed_exit[10];
extern const cfe_run cf1_run_uncompressed;
extern const cfe_run cf2_run_pass;
extern const cfe_run cf2_run_vertical[7];
extern const cfe_run cf2_run_horizontal;
extern const cfe_run cf2_run_uncompressed;
extern const cfe_run cf2_run_eol_1d;
extern const cfe_run cf2_run_eol_2d;
typedef hcd_code cfd_node;
extern const cfd_node cf_white_decode[];
extern const cfd_node cf_black_decode[];
extern const cfd_node cf_2d_decode[];
extern const cfd_node cf_uncompressed_decode[];
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
static gs_ptr_type_t cfd_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((stream_CFD_state *) vptr)->lbuf);
	    return (&ptr_struct_procs);
	} while (0);
    case 1:
	do {
	    *pep = (const void *) (((stream_CFD_state *) vptr)->lprev);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void cfd_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{;
    ((stream_CFD_state *) vptr)->lbuf = gs_reloc_struct_ptr((const void *) ((const stream_CFD_state *) vptr)->lbuf, gcst);
    ((stream_CFD_state *) vptr)->lprev = gs_reloc_struct_ptr((const void *) ((const stream_CFD_state *) vptr)->lprev, gcst);
} static const gs_memory_struct_type_t st_CFD_state = { sizeof(stream_CFD_state), "CCITTFaxDecode state", 0, 0, cfd_enum_ptrs, cfd_reloc_ptrs, 0 };

static void s_CFD_set_defaults(register stream_state * st)
{
    (((((stream_CFD_state *) st))->Uncompressed = ((bool) 0), (((stream_CFD_state *) st))->K = 0, (((stream_CFD_state *) st))->EndOfLine = ((bool) 0), (((stream_CFD_state *) st))->EncodedByteAlign = ((bool) 0), (((stream_CFD_state *) st))->Columns = 1728, (((stream_CFD_state *) st))->Rows = 0, (((stream_CFD_state *) st))->EndOfBlock = ((bool) 1), (((stream_CFD_state *) st))->BlackIs1 = ((bool) 0), (((stream_CFD_state *) st))->DamagedRowsBeforeError = 0, (((stream_CFD_state *) st))->FirstBitLowOrder = ((bool) 0), (((stream_CFD_state *) st))->DecodedByteAlign = 1), (((stream_CFD_state *) st))->DamagedRowsBeforeError = 0);
} static int s_CFD_init(stream_state * st)
{
    int raster = ((stream_CFD_state *) st)->raster = ((((stream_CFD_state *) st)->DecodedByteAlign) & ((((stream_CFD_state *) st)->DecodedByteAlign) - 1) ? (((((stream_CFD_state *) st)->Columns + 7) >> 3) + ((((stream_CFD_state *) st)->DecodedByteAlign) - 1)) / (((stream_CFD_state *) st)->DecodedByteAlign) * (((stream_CFD_state *) st)->DecodedByteAlign) : (((((stream_CFD_state *) st)->Columns + 7) >> 3) + ((((stream_CFD_state *) st)->DecodedByteAlign) - 1)) & -(((stream_CFD_state *) st)->DecodedByteAlign));
    byte white = (((stream_CFD_state *) st)->BlackIs1 ? 0 : 0xff);
    ((((stream_CFD_state *) st))->bits = 0, (((stream_CFD_state *) st))->bits_left = 0);
    ((stream_CFD_state *) st)->lbuf = (*(st->memory)->procs.alloc_bytes) (st->memory, raster + 4, "CFD lbuf");
    ((stream_CFD_state *) st)->lprev = 0;
    if (((stream_CFD_state *) st)->lbuf == 0)
	return ((int) (-2));
    if (((stream_CFD_state *) st)->K != 0) {
	((stream_CFD_state *) st)->lprev = (*(st->memory)->procs.alloc_bytes) (st->memory, raster + 4, "CFD lprev");
	if (((stream_CFD_state *) st)->lprev == 0)
	    return ((int) (-2));
	memset(((stream_CFD_state *) st)->lbuf, white, raster);
	((stream_CFD_state *) st)->lbuf[raster] = 0xa0;
    }
    ((stream_CFD_state *) st)->k_left = (((((stream_CFD_state *) st)->K) < (0)) ? (((stream_CFD_state *) st)->K) : (0));
    ((stream_CFD_state *) st)->run_color = 0;
    ((stream_CFD_state *) st)->damaged_rows = 0;
    ((stream_CFD_state *) st)->skipping_damage = ((bool) 0);
    ((stream_CFD_state *) st)->cbit = 0;
    ((stream_CFD_state *) st)->uncomp_run = 0;
    ((stream_CFD_state *) st)->rows_left = (((stream_CFD_state *) st)->Rows <= 0 || ((stream_CFD_state *) st)->EndOfBlock ? -1 : ((stream_CFD_state *) st)->Rows + 1);
    ((stream_CFD_state *) st)->rpos = ((stream_CFD_state *) st)->wpos = raster - 1;
    ((stream_CFD_state *) st)->eol_count = 0;
    ((stream_CFD_state *) st)->invert = white;
    return 0;
}

static void s_CFD_release(stream_state * st)
{
    (*(st->memory)->procs.free_object) (st->memory, ((stream_CFD_state *) st)->lprev, "CFD lprev(close)");
    (*(st->memory)->procs.free_object) (st->memory, ((stream_CFD_state *) st)->lbuf, "CFD lbuf(close)");
}
//complexitty is O(n) inferred by loopus
 static int cf_decode_eol(stream_CFD_state *, stream_cursor_read *);

static int cf_decode_1d(stream_CFD_state *, stream_cursor_read *);
static int cf_decode_2d(stream_CFD_state *, stream_cursor_read *);
static int cf_decode_uncompressed(stream_CFD_state *, stream_cursor_read *);
static int s_CFD_process(stream_state * st, stream_cursor_read * pr, stream_cursor_write * pw, bool last)
{
    int wstop = ((stream_CFD_state *) st)->raster - 1;
    int eol_count = ((stream_CFD_state *) st)->eol_count;
    int k_left = ((stream_CFD_state *) st)->k_left;
    int rows_left = ((stream_CFD_state *) st)->rows_left;
    int status = 0;
  top:if (((stream_CFD_state *) st)->skipping_damage) {
	register const byte *p;
	const byte *rlimit;
	uint bits;
	int bits_left;
	int skip;
	status = 0;
	do {
	    switch ((skip = cf_decode_eol(((stream_CFD_state *) st), pr))) {
	    default:
		p = pr->ptr, rlimit = pr->limit, bits = ((stream_CFD_state *) st)->bits, bits_left = ((stream_CFD_state *) st)->bits_left;
		(bits_left -= (-skip));
		pr->ptr = p -= (bits_left >> 3), ((stream_CFD_state *) st)->bits = bits >>= (bits_left & ~7), ((stream_CFD_state *) st)->bits_left = bits_left &= 7;
		continue;
	    case 0:
		goto out;
	    case 1:{
		    p = pr->ptr, rlimit = pr->limit, bits = ((stream_CFD_state *) st)->bits, bits_left = ((stream_CFD_state *) st)->bits_left;
		    bits_left += 12;
		    pr->ptr = p -= (bits_left >> 3), ((stream_CFD_state *) st)->bits = bits >>= (bits_left & ~7), ((stream_CFD_state *) st)->bits_left = bits_left &= 7;
		}
		((stream_CFD_state *) st)->skipping_damage = ((bool) 0);
	    }
	} while (((stream_CFD_state *) st)->skipping_damage);
	((stream_CFD_state *) st)->damaged_rows++;
    }
    if (((stream_CFD_state *) st)->wpos == wstop && ((stream_CFD_state *) st)->cbit <= (-((stream_CFD_state *) st)->Columns & 7) && (k_left == 0 ? !(((stream_CFD_state *) st)->run_color & ~1) : ((stream_CFD_state *) st)->run_color == 0)) {
	if (((stream_CFD_state *) st)->rpos < ((stream_CFD_state *) st)->wpos) {
	    stream_cursor_read cr;
	    cr.ptr = ((stream_CFD_state *) st)->lbuf + ((stream_CFD_state *) st)->rpos;
	    cr.limit = ((stream_CFD_state *) st)->lbuf + ((stream_CFD_state *) st)->wpos;
	    status = stream_move(&cr, pw);
	    ((stream_CFD_state *) st)->rpos = cr.ptr - ((stream_CFD_state *) st)->lbuf;
	    if (status)
		goto out;
	}
	if (rows_left > 0 && --rows_left == 0) {
	    status = ((int) (-1));
	    goto out;
	}
	if (((stream_CFD_state *) st)->K != 0) {
	    byte *prev_bits = ((stream_CFD_state *) st)->lprev;
	    ((stream_CFD_state *) st)->lprev = ((stream_CFD_state *) st)->lbuf;
	    ((stream_CFD_state *) st)->lbuf = prev_bits;
	    if (((stream_CFD_state *) st)->K > 0)
		k_left = (k_left == 0 ? ((stream_CFD_state *) st)->K : k_left) - 1;
	}
	((stream_CFD_state *) st)->rpos = ((stream_CFD_state *) st)->wpos = -1;
	((stream_CFD_state *) st)->eol_count = eol_count = 0;
	((stream_CFD_state *) st)->cbit = 0;
	((stream_CFD_state *) st)->invert = (((stream_CFD_state *) st)->BlackIs1 ? 0 : 0xff);
	memset(((stream_CFD_state *) st)->lbuf, ((stream_CFD_state *) st)->invert, wstop + 1);
	((stream_CFD_state *) st)->run_color = 0;
	if (((stream_CFD_state *) st)->EncodedByteAlign & !((stream_CFD_state *) st)->EndOfLine)
	    ((stream_CFD_state *) st)->bits_left &= ~7;
    }
    if (((stream_CFD_state *) st)->wpos < 0) {
	while ((status = cf_decode_eol(((stream_CFD_state *) st), pr)) > 0) {
	    do {
	    } while (0);
	    if (((stream_CFD_state *) st)->K > 0) {
		register const byte *p;
		const byte *rlimit;
		uint bits;
		int bits_left;
		p = pr->ptr, rlimit = pr->limit, bits = ((stream_CFD_state *) st)->bits, bits_left = ((stream_CFD_state *) st)->bits_left;
		if (bits_left < 1) {
		    if (rlimit - p < 3) {
			int c;
			if (p < rlimit)
			    c = *++p;
			else
			    goto out;
			if (((stream_CFD_state *) st)->FirstBitLowOrder)
			    c = byte_reverse_bits[c];
			bits = (bits << 8) + c, bits_left += 8;
		    } else {
			if (((stream_CFD_state *) st)->FirstBitLowOrder)
			    bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
			else
			    bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
			bits_left += 24, p += 3;
		    }
		};
		k_left = (((bits >> (bits_left - (1))) & ((1 << (1)) - 1)) ? 0 : 1);
		(bits_left -= (1));
		pr->ptr = p -= (bits_left >> 3), ((stream_CFD_state *) st)->bits = bits >>= (bits_left & ~7), ((stream_CFD_state *) st)->bits_left = bits_left &= 7;
	    }
	    ++eol_count;
	    if (((stream_CFD_state *) st)->EndOfBlock) {
		if (eol_count == (((stream_CFD_state *) st)->K < 0 ? 2 : 6)) {
		    status = ((int) (-1));
		    goto out;
		}
	    } else
		break;
	}
	if (status == 0)
	    goto out;
	switch (eol_count) {
	case 0:
	    if (((stream_CFD_state *) st)->EndOfLine) {
		status = ((int) (-2));
		goto check;
	    }
	case 1:
	    break;
	default:
	    status = ((int) (-2));
	    goto check;
	}
    }
    if (k_left < 0) {
	do {
	} while (0);
	status = cf_decode_2d(((stream_CFD_state *) st), pr);
    } else if (k_left == 0) {
	do {
	} while (0);
	status = cf_decode_1d(((stream_CFD_state *) st), pr);
    } else {
	do {
	} while (0);
	status = cf_decode_2d(((stream_CFD_state *) st), pr);
    }
    do {
    } while (0);
  check:switch (status) {
    case 1:
	goto top;
    case ((int) (-2)):
	if (((stream_CFD_state *) st)->damaged_rows >= ((stream_CFD_state *) st)->DamagedRowsBeforeError || !(((stream_CFD_state *) st)->EndOfLine && ((stream_CFD_state *) st)->K >= 0))
	    break; {
	    ((stream_CFD_state *) st)->wpos = wstop;
	    ((stream_CFD_state *) st)->cbit = -((stream_CFD_state *) st)->Columns & 7;
	    ((stream_CFD_state *) st)->run_color = 0;
	    }
	    ((stream_CFD_state *) st)->skipping_damage = ((bool) 1);
	    goto top;
    default:
	    ((stream_CFD_state *) st)->damaged_rows = 0;
    }
  out:((stream_CFD_state *) st)->k_left = k_left;
    ((stream_CFD_state *) st)->rows_left = rows_left;
    ((stream_CFD_state *) st)->eol_count = eol_count;
    return status;
}

static int cf_decode_eol(stream_CFD_state * ss, stream_cursor_read * pr)
{
    register const byte *p;
    const byte *rlimit;
    uint bits;
    int bits_left;
    int zeros;
    int look_ahead;
    p = pr->ptr, rlimit = pr->limit, bits = ss->bits, bits_left = ss->bits_left;
    for (zeros = 0; zeros < 12 - 1; zeros++) {
	if (bits_left < 1) {
	    if (rlimit - p < 3) {
		int c;
		if (p < rlimit)
		    c = *++p;
		else
		    goto out;
		if (ss->FirstBitLowOrder)
		    c = byte_reverse_bits[c];
		bits = (bits << 8) + c, bits_left += 8;
	    } else {
		if (ss->FirstBitLowOrder)
		    bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
		else
		    bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
		bits_left += 24, p += 3;
	    }
	};
	if (((bits >> (bits_left - (1))) & ((1 << (1)) - 1)))
	    return -(zeros + 1);
	(bits_left -= (1));
    }
    look_ahead = (ss->K > 0 ? 2 : 1);
    for (;;) {
	if (bits_left < look_ahead) {
	    if (rlimit - p < 3) {
		int c;
		if (p < rlimit)
		    c = *++p;
		else
		    goto back;
		if (ss->FirstBitLowOrder)
		    c = byte_reverse_bits[c];
		bits = (bits << 8) + c, bits_left += 8;
	    } else {
		if (ss->FirstBitLowOrder)
		    bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
		else
		    bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
		bits_left += 24, p += 3;
	    }
	};
	if (((bits >> (bits_left - (1))) & ((1 << (1)) - 1)))
	    break;
	(bits_left -= (1));
    }
    (bits_left -= (1));
    pr->ptr = p -= (bits_left >> 3), ss->bits = bits >>= (bits_left & ~7), ss->bits_left = bits_left &= 7;
    return 1;
  back:bits &= (1 << bits_left) - 1;
    bits_left += 12 - 1;
    pr->ptr = p -= (bits_left >> 3), ss->bits = bits >>= (bits_left & ~7), ss->bits_left = bits_left &= 7;
  out:return 0;
}

static int cf_decode_1d(stream_CFD_state * ss, stream_cursor_read * pr)
{
    register const byte *p;
    const byte *rlimit;
    uint bits;
    int bits_left;
    register byte *q;
    int qbit;
    byte black_byte = (ss->BlackIs1 ? 0xff : 0);
    int end_bit = -ss->Columns & 7;
    byte *stop = ss->lbuf - 1 + ss->raster;
    int run_color = ss->run_color;
    int status;
    int bcnt;
    p = pr->ptr, rlimit = pr->limit, bits = ss->bits, bits_left = ss->bits_left, q = ss->lbuf + ss->wpos, qbit = ss->cbit;
    do {
    } while (0);
    if (ss->run_color > 0)
	goto db;
    else
	goto dw;
  top:run_color = 0;
    if ((q >= stop && (qbit <= end_bit || q > stop)))
	goto done;
  dw:{
	const cfd_node *np;
	int clen;
	if (bits_left < 8) {
	    if (rlimit - p < 3) {
		int c;
		if (p < rlimit)
		    c = *++p;
		else
		    goto out0;
		if (ss->FirstBitLowOrder)
		    c = byte_reverse_bits[c];
		bits = (bits << 8) + c, bits_left += 8;
	    } else {
		if (ss->FirstBitLowOrder)
		    bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
		else
		    bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
		bits_left += 24, p += 3;
	    }
	};
	np = &cf_white_decode[((bits >> (bits_left - (8))) & ((1 << (8)) - 1))];
	if ((clen = np->code_length) > 8) {;
	    if (!(bits_left >= (clen) || rlimit - p > ((clen) - bits_left - 1) >> 3))
		goto out0;
	    clen -= 8;
	    (bits_left -= (8));
	    if (bits_left < clen) {
		if (rlimit - p < 3) {
		    int c;
		    if (p < rlimit)
			c = *++p;
		    else
			goto out0;
		    if (ss->FirstBitLowOrder)
			c = byte_reverse_bits[c];
		    bits = (bits << 8) + c, bits_left += 8;
		} else {
		    if (ss->FirstBitLowOrder)
			bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
		    else
			bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
		    bits_left += 24, p += 3;
		}
	    };
	    np = &cf_white_decode[np->value + ((bits >> (bits_left - (clen))) & byte_right_mask[clen])];
	    do {
	    } while (0);
	    (bits_left -= (np->code_length));
	} else {
	    do {
	    } while (0);
	    (bits_left -= (clen));
	}
	bcnt = np->value;
    };
    if (bcnt < 0) {
	switch (bcnt) {
	case (-3):
	    pr->ptr = p -= (bits_left >> 3), ss->bits = bits >>= (bits_left & ~7), ss->bits_left = bits_left &= 7, ss->wpos = q - ss->lbuf, ss->cbit = qbit;
	    bcnt = cf_decode_uncompressed(ss, pr);
	    if (bcnt < 0)
		return bcnt;
	    p = pr->ptr, rlimit = pr->limit, bits = ss->bits, bits_left = ss->bits_left, q = ss->lbuf + ss->wpos, qbit = ss->cbit;
	    if (bcnt)
		goto db;
	    else
		goto dw;
	default:
	    status = ((int) (-2));
	    goto out;
	}
    }
    if ((qbit -= bcnt) < 0) {
	q -= qbit >> 3, qbit &= 7;
	if (bcnt >= 64)
	    goto dwx;
    };
    if ((q >= stop && (qbit <= end_bit || q > stop))) {
	run_color = 0;
	goto done;
    }
    run_color = 1;
  db:{
	const cfd_node *np;
	int clen;
	if (bits_left < 7) {
	    if (rlimit - p < 3) {
		int c;
		if (p < rlimit)
		    c = *++p;
		else
		    goto out1;
		if (ss->FirstBitLowOrder)
		    c = byte_reverse_bits[c];
		bits = (bits << 8) + c, bits_left += 8;
	    } else {
		if (ss->FirstBitLowOrder)
		    bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
		else
		    bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
		bits_left += 24, p += 3;
	    }
	};
	np = &cf_black_decode[((bits >> (bits_left - (7))) & ((1 << (7)) - 1))];
	if ((clen = np->code_length) > 7) {;
	    if (!(bits_left >= (clen) || rlimit - p > ((clen) - bits_left - 1) >> 3))
		goto out1;
	    clen -= 7;
	    (bits_left -= (7));
	    if (bits_left < clen) {
		if (rlimit - p < 3) {
		    int c;
		    if (p < rlimit)
			c = *++p;
		    else
			goto out1;
		    if (ss->FirstBitLowOrder)
			c = byte_reverse_bits[c];
		    bits = (bits << 8) + c, bits_left += 8;
		} else {
		    if (ss->FirstBitLowOrder)
			bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
		    else
			bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
		    bits_left += 24, p += 3;
		}
	    };
	    np = &cf_black_decode[np->value + ((bits >> (bits_left - (clen))) & byte_right_mask[clen])];
	    do {
	    } while (0);
	    (bits_left -= (np->code_length));
	} else {
	    do {
	    } while (0);
	    (bits_left -= (clen));
	}
	bcnt = np->value;
    };
    if (bcnt < 0) {
	status = ((int) (-2));
	goto out;
    }
    if (bcnt > qbit) {
	*q++ ^= (1 << qbit) - 1;
	bcnt -= qbit;
	switch (bcnt >> 3) {
	case 7:
	    if (bcnt + qbit >= 64)
		goto idb;
	    *q++ = black_byte;
	case 6:
	    *q++ = black_byte;
	case 5:
	    *q++ = black_byte;
	case 4:
	    *q++ = black_byte;
	case 3:
	    *q++ = black_byte;
	case 2:
	    *q++ = black_byte;
	case 1:
	    *q = black_byte;
	    bcnt &= 7;
	    if (!bcnt) {
		qbit = 0;
		break;
	    }
	    q++;
	case 0:
	    qbit = 8 - bcnt;
	    *q ^= 0xff << qbit;
	    break;
	default:
	  idb:memset(q, black_byte, bcnt >> 3);
	    q += bcnt >> 3;
	    bcnt &= 7;
	    if (!bcnt)
		qbit = 0, q--;
	    else
		qbit = 8 - bcnt, *q ^= 0xff << qbit;
	    goto dbx;
	}
    } else
	qbit -= bcnt, *q ^= ((1 << bcnt) - 1) << qbit;
    goto top;
  dwx:run_color = -1;
    goto dw;
  dbx:run_color = 2;
    goto db;
  done:if (q > stop || qbit < end_bit)
	status = ((int) (-2));
    else
	status = 1;
  out:pr->ptr = p -= (bits_left >> 3), ss->bits = bits >>= (bits_left & ~7), ss->bits_left = bits_left &= 7, ss->wpos = q - ss->lbuf, ss->cbit = qbit;
    ss->run_color = run_color;
    do {
    } while (0);
    return status;
  out0:status = 0;
    goto out;
  out1:status = 0;
    goto out;
}

static int cf_decode_2d(stream_CFD_state * ss, stream_cursor_read * pr)
{
    register const byte *p;
    const byte *rlimit;
    uint bits;
    int bits_left;
    register byte *q;
    int qbit;
    byte invert_white = (ss->BlackIs1 ? 0 : 0xff);
    byte black_byte = ~invert_white;
    byte invert = ss->invert;
    int end_count = -ss->Columns & 7;
    uint raster = ss->raster;
    byte *q0 = ss->lbuf;
    byte *prev_q01 = ss->lprev + 1;
    byte *endptr = q0 - 1 + raster;
    int init_count = raster << 3;
    register int count;
    int rlen;
    int status;
    p = pr->ptr, rlimit = pr->limit, bits = ss->bits, bits_left = ss->bits_left, q = ss->lbuf + ss->wpos, qbit = ss->cbit;
    count = ((endptr - q) << 3) + qbit;
    endptr[1] = 0xa0;
    do {
    } while (0);
    switch (ss->run_color) {
    case -2:
	ss->run_color = 0;
	goto hww;
    case -1:
	ss->run_color = 0;
	goto hbw;
    case 1:
	ss->run_color = 0;
	goto hwb;
    case 2:
	ss->run_color = 0;
	goto hbb;
    }
  top:if (count <= end_count) {
	status = (count < end_count ? ((int) (-2)) : 1);
	goto out;
    }
    do {
    } while (0);
    if (bits_left < 3) {
	if (rlimit - p < 3) {
	    int c;
	    if (p < rlimit)
		c = *++p;
	    else
		goto out0;
	    if (ss->FirstBitLowOrder)
		c = byte_reverse_bits[c];
	    bits = (bits << 8) + c, bits_left += 8;
	} else {
	    if (ss->FirstBitLowOrder)
		bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
	    else
		bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
	    bits_left += 24, p += 3;
	}
    };
    switch (((bits >> (bits_left - (3))) & ((1 << (3)) - 1))) {
    default:
	(bits_left -= (1));
	rlen = ((sizeof(cf2_run_vertical) / sizeof((cf2_run_vertical)[0])) / 2);
	break;
    case 2:
	(bits_left -= (3));
	rlen = ((sizeof(cf2_run_vertical) / sizeof((cf2_run_vertical)[0])) / 2) + 1;
	break;
    case 3:
	(bits_left -= (3));
	rlen = ((sizeof(cf2_run_vertical) / sizeof((cf2_run_vertical)[0])) / 2) - 1;
	break;
    case 1:
	(bits_left -= (3));
	if (invert == invert_white)
	    goto hww;
	else
	    goto hbb;
    case 0:{
	    const cfd_node *np;
	    int clen;
	    if (bits_left < 7) {
		if (rlimit - p < 3) {
		    int c;
		    if (p < rlimit)
			c = *++p;
		    else
			goto out0;
		    if (ss->FirstBitLowOrder)
			c = byte_reverse_bits[c];
		    bits = (bits << 8) + c, bits_left += 8;
		} else {
		    if (ss->FirstBitLowOrder)
			bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
		    else
			bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
		    bits_left += 24, p += 3;
		}
	    };
	    np = &cf_2d_decode[((bits >> (bits_left - (7))) & ((1 << (7)) - 1))];
	    if ((clen = np->code_length) > 7) {;
		if (!(bits_left >= (clen) || rlimit - p > ((clen) - bits_left - 1) >> 3))
		    goto out0;
		clen -= 7;
		(bits_left -= (7));
		if (bits_left < clen) {
		    if (rlimit - p < 3) {
			int c;
			if (p < rlimit)
			    c = *++p;
			else
			    goto out0;
			if (ss->FirstBitLowOrder)
			    c = byte_reverse_bits[c];
			bits = (bits << 8) + c, bits_left += 8;
		    } else {
			if (ss->FirstBitLowOrder)
			    bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
			else
			    bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
			bits_left += 24, p += 3;
		    }
		};
		np = &cf_2d_decode[np->value + ((bits >> (bits_left - (clen))) & byte_right_mask[clen])];
		do {
		} while (0);
		(bits_left -= (np->code_length));
	    } else {
		do {
		} while (0);
		(bits_left -= (clen));
	    }
	    rlen = np->value;
	};
	if (rlen < 0)
	    switch (rlen) {
	    case (-4):
		break;
	    case (-3):{
		    int which;
		    pr->ptr = p -= (bits_left >> 3), ss->bits = bits >>= (bits_left & ~7), ss->bits_left = bits_left &= 7, ss->wpos = q - ss->lbuf, ss->cbit = qbit;
		    which = cf_decode_uncompressed(ss, pr);
		    if (which < 0) {
			status = which;
			goto out;
		    }
		    p = pr->ptr, rlimit = pr->limit, bits = ss->bits, bits_left = ss->bits_left, q = ss->lbuf + ss->wpos, qbit = ss->cbit;
		    invert = (which ? ~invert_white : invert_white);
		}
		goto top;
	    default:
		status = ((int) (-2));
		goto out;
	    }
    }
    {
	int prev_count = count;
	byte prev_data;
	int dlen;
	static const byte count_bit[8] = { 0x80, 1, 2, 4, 8, 0x10, 0x20, 0x40 };
	byte *prev_q = prev_q01 + (q - q0);
	int plen;
	if (!(count & 7))
	    prev_q++;
	prev_data = prev_q[-1] ^ invert;
	if ((prev_data & count_bit[prev_count & 7]) && (prev_count < init_count || invert != invert_white)) {
	    do {
	    } while (0); {
		if ((plen = byte_bit_run_length_neg[prev_count & 7][prev_data]) >= 8) {
		    if (invert == 0)
			for (;; prev_q += 4, plen += 32) {
			    if (prev_q[0] != 0xff) {
				prev_data = prev_q[0];
				prev_q += 1;
				plen -= 8;
				break;
			    }
			    if (prev_q[1] != 0xff) {
				prev_data = prev_q[1];
				prev_q += 2;
				break;
			    }
			    if (prev_q[2] != 0xff) {
				prev_data = prev_q[2];
				prev_q += 3;
				plen += 8;
				break;
			    }
			    if (prev_q[3] != 0xff) {
				prev_data = prev_q[3];
				prev_q += 4;
				plen += 16;
				break;
			    }
		    } else
			for (;; prev_q += 4, plen += 32) {
			    if (prev_q[0]) {
				prev_data = (byte) ~ prev_q[0];
				prev_q += 1;
				plen -= 8;
				break;
			    }
			    if (prev_q[1]) {
				prev_data = (byte) ~ prev_q[1];
				prev_q += 2;
				break;
			    }
			    if (prev_q[2]) {
				prev_data = (byte) ~ prev_q[2];
				prev_q += 3;
				plen += 8;
				break;
			    }
			    if (prev_q[3]) {
				prev_data = (byte) ~ prev_q[3];
				prev_q += 4;
				plen += 16;
				break;
			    }
			}
		    plen += byte_bit_run_length_0[prev_data];
		}
		prev_count -= plen;
	    };
	    if (prev_count < end_count)
		prev_count = end_count;
	    do {
	    } while (0);
	}
	if (prev_count != end_count) {
	    do {
	    } while (0); {
		if ((plen = byte_bit_run_length_neg[prev_count & 7][prev_data ^ 0xff]) >= 8) {
		    if (invert == 0) {
			if (prev_q[0]) {
			    prev_data = prev_q[0];
			    prev_q += 1;
			    plen -= 8;
			} else if (prev_q[1]) {
			    prev_data = prev_q[1];
			    prev_q += 2;
			} else {
			    while (!(prev_q[2] | prev_q[3] | prev_q[4] | prev_q[5]))
				prev_q += 4, plen += 32;
			    if (prev_q[2]) {
				prev_data = prev_q[2];
				prev_q += 3;
				plen += 8;
			    } else if (prev_q[3]) {
				prev_data = prev_q[3];
				prev_q += 4;
				plen += 16;
			    } else if (prev_q[4]) {
				prev_data = prev_q[4];
				prev_q += 5;
				plen += 24;
			    } else {
				prev_data = prev_q[5];
				prev_q += 6;
				plen += 32;
			    }
			}
		    } else {
			if (prev_q[0] != 0xff) {
			    prev_data = (byte) ~ prev_q[0];
			    prev_q += 1;
			    plen -= 8;
			} else if (prev_q[1] != 0xff) {
			    prev_data = (byte) ~ prev_q[1];
			    prev_q += 2;
			} else {
			    while ((prev_q[2] & prev_q[3] & prev_q[4] & prev_q[5]) == 0xff)
				prev_q += 4, plen += 32;
			    if (prev_q[2] != 0xff) {
				prev_data = (byte) ~ prev_q[2];
				prev_q += 3;
				plen += 8;
			    } else if (prev_q[3] != 0xff) {
				prev_data = (byte) ~ prev_q[3];
				prev_q += 4;
				plen += 16;
			    } else if (prev_q[4] != 0xff) {
				prev_data = (byte) ~ prev_q[4];
				prev_q += 5;
				plen += 24;
			    } else {
				prev_data = (byte) ~ prev_q[5];
				prev_q += 6;
				plen += 32;
			    }
			}
		    }
		    plen += byte_bit_run_length_0[prev_data ^ 0xff];
		}
		prev_count -= plen;
	    };
	    if (prev_count < end_count)
		prev_count = end_count;
	    do {
	    } while (0);
	}
	if (rlen == (-4)) {
	    if (prev_count != end_count) {
		do {
		} while (0); {
		    if ((plen = byte_bit_run_length_neg[prev_count & 7][prev_data]) >= 8) {
			if (invert == 0)
			    for (;; prev_q += 4, plen += 32) {
				if (prev_q[0] != 0xff) {
				    prev_data = prev_q[0];
				    prev_q += 1;
				    plen -= 8;
				    break;
				}
				if (prev_q[1] != 0xff) {
				    prev_data = prev_q[1];
				    prev_q += 2;
				    break;
				}
				if (prev_q[2] != 0xff) {
				    prev_data = prev_q[2];
				    prev_q += 3;
				    plen += 8;
				    break;
				}
				if (prev_q[3] != 0xff) {
				    prev_data = prev_q[3];
				    prev_q += 4;
				    plen += 16;
				    break;
				}
			} else
			    for (;; prev_q += 4, plen += 32) {
				if (prev_q[0]) {
				    prev_data = (byte) ~ prev_q[0];
				    prev_q += 1;
				    plen -= 8;
				    break;
				}
				if (prev_q[1]) {
				    prev_data = (byte) ~ prev_q[1];
				    prev_q += 2;
				    break;
				}
				if (prev_q[2]) {
				    prev_data = (byte) ~ prev_q[2];
				    prev_q += 3;
				    plen += 8;
				    break;
				}
				if (prev_q[3]) {
				    prev_data = (byte) ~ prev_q[3];
				    prev_q += 4;
				    plen += 16;
				    break;
				}
			    }
			plen += byte_bit_run_length_0[prev_data];
		    }
		    prev_count -= plen;
		};
		if (prev_count < end_count)
		    prev_count = end_count;
	    }
	    do {
	    } while (0);
	} else {
	    prev_count += rlen - ((sizeof(cf2_run_vertical) / sizeof((cf2_run_vertical)[0])) / 2);
	    do {
	    } while (0);
	}
	if (invert == invert_white) {
	    q = endptr - (prev_count >> 3);
	    qbit = prev_count & 7;
	} else {
	    dlen = count - prev_count;
	    if (dlen > qbit) {
		*q++ ^= (1 << qbit) - 1;
		dlen -= qbit;
		switch (dlen >> 3) {
		case 7:
		    if (dlen + qbit >= 64)
			goto idd;
		    *q++ = black_byte;
		case 6:
		    *q++ = black_byte;
		case 5:
		    *q++ = black_byte;
		case 4:
		    *q++ = black_byte;
		case 3:
		    *q++ = black_byte;
		case 2:
		    *q++ = black_byte;
		case 1:
		    *q = black_byte;
		    dlen &= 7;
		    if (!dlen) {
			qbit = 0;
			break;
		    }
		    q++;
		case 0:
		    qbit = 8 - dlen;
		    *q ^= 0xff << qbit;
		    break;
		default:
		  idd:memset(q, black_byte, dlen >> 3);
		    q += dlen >> 3;
		    dlen &= 7;
		    if (!dlen)
			qbit = 0, q--;
		    else
			qbit = 8 - dlen, *q ^= 0xff << qbit;
		    do {
		    } while (0);
		}
	    } else
		qbit -= dlen, *q ^= ((1 << dlen) - 1) << qbit;
	}
	count = prev_count;
	if (rlen >= 0)
	    invert = ~invert;
    }
    goto top;
  out:pr->ptr = p -= (bits_left >> 3), ss->bits = bits >>= (bits_left & ~7), ss->bits_left = bits_left &= 7, ss->wpos = q - ss->lbuf, ss->cbit = qbit;
    ss->invert = invert;
    return status;
  out0:status = 0;
    goto out;
  hww:{
	const cfd_node *np;
	int clen;
	if (bits_left < 8) {
	    if (rlimit - p < 3) {
		int c;
		if (p < rlimit)
		    c = *++p;
		else
		    goto outww;
		if (ss->FirstBitLowOrder)
		    c = byte_reverse_bits[c];
		bits = (bits << 8) + c, bits_left += 8;
	    } else {
		if (ss->FirstBitLowOrder)
		    bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
		else
		    bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
		bits_left += 24, p += 3;
	    }
	};
	np = &cf_white_decode[((bits >> (bits_left - (8))) & ((1 << (8)) - 1))];
	if ((clen = np->code_length) > 8) {;
	    if (!(bits_left >= (clen) || rlimit - p > ((clen) - bits_left - 1) >> 3))
		goto outww;
	    clen -= 8;
	    (bits_left -= (8));
	    if (bits_left < clen) {
		if (rlimit - p < 3) {
		    int c;
		    if (p < rlimit)
			c = *++p;
		    else
			goto outww;
		    if (ss->FirstBitLowOrder)
			c = byte_reverse_bits[c];
		    bits = (bits << 8) + c, bits_left += 8;
		} else {
		    if (ss->FirstBitLowOrder)
			bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
		    else
			bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
		    bits_left += 24, p += 3;
		}
	    };
	    np = &cf_white_decode[np->value + ((bits >> (bits_left - (clen))) & byte_right_mask[clen])];
	    do {
	    } while (0);
	    (bits_left -= (np->code_length));
	} else {
	    do {
	    } while (0);
	    (bits_left -= (clen));
	}
	rlen = np->value;
    };
    if ((count -= rlen) < end_count) {
	status = ((int) (-2));
	goto out;
    }
    if ((qbit -= rlen) < 0) {
	q -= qbit >> 3, qbit &= 7;
	if (rlen >= 64)
	    goto hww;
    };
  hwb:{
	const cfd_node *np;
	int clen;
	if (bits_left < 7) {
	    if (rlimit - p < 3) {
		int c;
		if (p < rlimit)
		    c = *++p;
		else
		    goto outwb;
		if (ss->FirstBitLowOrder)
		    c = byte_reverse_bits[c];
		bits = (bits << 8) + c, bits_left += 8;
	    } else {
		if (ss->FirstBitLowOrder)
		    bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
		else
		    bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
		bits_left += 24, p += 3;
	    }
	};
	np = &cf_black_decode[((bits >> (bits_left - (7))) & ((1 << (7)) - 1))];
	if ((clen = np->code_length) > 7) {;
	    if (!(bits_left >= (clen) || rlimit - p > ((clen) - bits_left - 1) >> 3))
		goto outwb;
	    clen -= 7;
	    (bits_left -= (7));
	    if (bits_left < clen) {
		if (rlimit - p < 3) {
		    int c;
		    if (p < rlimit)
			c = *++p;
		    else
			goto outwb;
		    if (ss->FirstBitLowOrder)
			c = byte_reverse_bits[c];
		    bits = (bits << 8) + c, bits_left += 8;
		} else {
		    if (ss->FirstBitLowOrder)
			bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
		    else
			bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
		    bits_left += 24, p += 3;
		}
	    };
	    np = &cf_black_decode[np->value + ((bits >> (bits_left - (clen))) & byte_right_mask[clen])];
	    do {
	    } while (0);
	    (bits_left -= (np->code_length));
	} else {
	    do {
	    } while (0);
	    (bits_left -= (clen));
	}
	rlen = np->value;
    };
    if ((count -= rlen) < end_count) {
	status = ((int) (-2));
	goto out;
    }
    if (rlen > qbit) {
	*q++ ^= (1 << qbit) - 1;
	rlen -= qbit;
	switch (rlen >> 3) {
	case 7:
	    if (rlen + qbit >= 64)
		goto ihwb;
	    *q++ = black_byte;
	case 6:
	    *q++ = black_byte;
	case 5:
	    *q++ = black_byte;
	case 4:
	    *q++ = black_byte;
	case 3:
	    *q++ = black_byte;
	case 2:
	    *q++ = black_byte;
	case 1:
	    *q = black_byte;
	    rlen &= 7;
	    if (!rlen) {
		qbit = 0;
		break;
	    }
	    q++;
	case 0:
	    qbit = 8 - rlen;
	    *q ^= 0xff << qbit;
	    break;
	default:
	  ihwb:memset(q, black_byte, rlen >> 3);
	    q += rlen >> 3;
	    rlen &= 7;
	    if (!rlen)
		qbit = 0, q--;
	    else
		qbit = 8 - rlen, *q ^= 0xff << qbit;
	    goto hwb;
	}
    } else
	qbit -= rlen, *q ^= ((1 << rlen) - 1) << qbit;
    goto top;
  outww:ss->run_color = -2;
    goto out0;
  outwb:ss->run_color = 1;
    goto out0;
  hbb:{
	const cfd_node *np;
	int clen;
	if (bits_left < 7) {
	    if (rlimit - p < 3) {
		int c;
		if (p < rlimit)
		    c = *++p;
		else
		    goto outbb;
		if (ss->FirstBitLowOrder)
		    c = byte_reverse_bits[c];
		bits = (bits << 8) + c, bits_left += 8;
	    } else {
		if (ss->FirstBitLowOrder)
		    bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
		else
		    bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
		bits_left += 24, p += 3;
	    }
	};
	np = &cf_black_decode[((bits >> (bits_left - (7))) & ((1 << (7)) - 1))];
	if ((clen = np->code_length) > 7) {;
	    if (!(bits_left >= (clen) || rlimit - p > ((clen) - bits_left - 1) >> 3))
		goto outbb;
	    clen -= 7;
	    (bits_left -= (7));
	    if (bits_left < clen) {
		if (rlimit - p < 3) {
		    int c;
		    if (p < rlimit)
			c = *++p;
		    else
			goto outbb;
		    if (ss->FirstBitLowOrder)
			c = byte_reverse_bits[c];
		    bits = (bits << 8) + c, bits_left += 8;
		} else {
		    if (ss->FirstBitLowOrder)
			bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
		    else
			bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
		    bits_left += 24, p += 3;
		}
	    };
	    np = &cf_black_decode[np->value + ((bits >> (bits_left - (clen))) & byte_right_mask[clen])];
	    do {
	    } while (0);
	    (bits_left -= (np->code_length));
	} else {
	    do {
	    } while (0);
	    (bits_left -= (clen));
	}
	rlen = np->value;
    };
    if ((count -= rlen) < end_count) {
	status = ((int) (-2));
	goto out;
    }
    if (rlen > qbit) {
	*q++ ^= (1 << qbit) - 1;
	rlen -= qbit;
	switch (rlen >> 3) {
	case 7:
	    if (rlen + qbit >= 64)
		goto ihbb;
	    *q++ = black_byte;
	case 6:
	    *q++ = black_byte;
	case 5:
	    *q++ = black_byte;
	case 4:
	    *q++ = black_byte;
	case 3:
	    *q++ = black_byte;
	case 2:
	    *q++ = black_byte;
	case 1:
	    *q = black_byte;
	    rlen &= 7;
	    if (!rlen) {
		qbit = 0;
		break;
	    }
	    q++;
	case 0:
	    qbit = 8 - rlen;
	    *q ^= 0xff << qbit;
	    break;
	default:
	  ihbb:memset(q, black_byte, rlen >> 3);
	    q += rlen >> 3;
	    rlen &= 7;
	    if (!rlen)
		qbit = 0, q--;
	    else
		qbit = 8 - rlen, *q ^= 0xff << qbit;
	    goto hbb;
	}
    } else
	qbit -= rlen, *q ^= ((1 << rlen) - 1) << qbit;
  hbw:{
	const cfd_node *np;
	int clen;
	if (bits_left < 8) {
	    if (rlimit - p < 3) {
		int c;
		if (p < rlimit)
		    c = *++p;
		else
		    goto outbw;
		if (ss->FirstBitLowOrder)
		    c = byte_reverse_bits[c];
		bits = (bits << 8) + c, bits_left += 8;
	    } else {
		if (ss->FirstBitLowOrder)
		    bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
		else
		    bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
		bits_left += 24, p += 3;
	    }
	};
	np = &cf_white_decode[((bits >> (bits_left - (8))) & ((1 << (8)) - 1))];
	if ((clen = np->code_length) > 8) {;
	    if (!(bits_left >= (clen) || rlimit - p > ((clen) - bits_left - 1) >> 3))
		goto outbw;
	    clen -= 8;
	    (bits_left -= (8));
	    if (bits_left < clen) {
		if (rlimit - p < 3) {
		    int c;
		    if (p < rlimit)
			c = *++p;
		    else
			goto outbw;
		    if (ss->FirstBitLowOrder)
			c = byte_reverse_bits[c];
		    bits = (bits << 8) + c, bits_left += 8;
		} else {
		    if (ss->FirstBitLowOrder)
			bits = (bits << 24) + ((uint) byte_reverse_bits[p[1]] << 16) + ((uint) byte_reverse_bits[p[2]] << 8) + byte_reverse_bits[p[3]];
		    else
			bits = (bits << 24) + ((uint) p[1] << 16) + ((uint) p[2] << 8) + p[3];
		    bits_left += 24, p += 3;
		}
	    };
	    np = &cf_white_decode[np->value + ((bits >> (bits_left - (clen))) & byte_right_mask[clen])];
	    do {
	    } while (0);
	    (bits_left -= (np->code_length));
	} else {
	    do {
	    } while (0);
	    (bits_left -= (clen));
	}
	rlen = np->value;
    };
    if ((count -= rlen) < end_count) {
	status = ((int) (-2));
	goto out;
    }
    if ((qbit -= rlen) < 0) {
	q -= qbit >> 3, qbit &= 7;
	if (rlen >= 64)
	    goto hbw;
    };
    goto top;
  outbb:ss->run_color = 2;
    goto out0;
  outbw:ss->run_color = -1;
    goto out0;
}

static int cf_decode_uncompressed(stream_CFD_state * ss, stream_cursor_read * pr)
{
    return ((int) (-2));
} const stream_template s_CFD_template = { &st_CFD_state, s_CFD_init, s_CFD_process, 1, 1, s_CFD_release, s_CFD_set_defaults };
