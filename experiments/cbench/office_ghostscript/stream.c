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
static int sreadbuf(stream *, stream_cursor_write *);
static int swritebuf(stream *, stream_cursor_read *, bool);
static void stream_compact(stream *, bool);
static gs_ptr_type_t stream_enum_ptrs(void *ptr, uint size, uint index, const void **pep);
static void stream_reloc_ptrs(void *ptr, uint size, gc_state_t * gcst);
static void stream_finalize(void *ptr);
static const gs_memory_struct_type_t st_stream = { sizeof(stream), "stream", 0, 0, stream_enum_ptrs, stream_reloc_ptrs, stream_finalize };
const gs_memory_struct_type_t st_stream_state = { sizeof(stream_state), "stream_state", 0, 0, 0, 0, 0 };

static gs_ptr_type_t stream_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	if (((stream *) vptr)->foreign)
	    do {
		*pep = (const void *) (((void *) 0));
		return (&ptr_struct_procs);
	    } while (0);
	else if (((stream *) vptr)->cbuf_string.data != 0)
	    do {
		*pep = (const void *) &((stream *) vptr)->cbuf_string;
		return (&ptr_string_procs);
	    } while (0);
	else
	    do {
		*pep = (const void *) (((stream *) vptr)->cbuf);
		return (&ptr_struct_procs);
	    } while (0);
    case 1:
	do {
	    *pep = (const void *) (((stream *) vptr)->strm);
	    return (&ptr_struct_procs);
	} while (0);
    case 2:
	do {
	    *pep = (const void *) (((stream *) vptr)->prev);
	    return (&ptr_struct_procs);
	} while (0);
    case 3:
	do {
	    *pep = (const void *) (((stream *) vptr)->next);
	    return (&ptr_struct_procs);
	} while (0);
    case 4:
	do {
	    *pep = (const void *) (((stream *) vptr)->state);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void stream_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{ {
	byte *cbuf_old = ((stream *) vptr)->cbuf;
	if (cbuf_old != 0 && !((stream *) vptr)->foreign) {
	    long reloc;
	    if (((stream *) vptr)->cbuf_string.data != 0) {
		gs_reloc_string(&((stream *) vptr)->cbuf_string, gcst);
		((stream *) vptr)->cbuf = ((stream *) vptr)->cbuf_string.data;
	    } else
		((stream *) vptr)->cbuf = gs_reloc_struct_ptr((const void *) ((const stream *) vptr)->cbuf, gcst);
	    reloc = cbuf_old - ((stream *) vptr)->cbuf;
	    ((stream *) vptr)->cursor.r.ptr -= reloc;
	    ((stream *) vptr)->cursor.r.limit -= reloc;
	    ((stream *) vptr)->cursor.w.limit -= reloc;
	}
	((stream *) vptr)->strm = gs_reloc_struct_ptr((const void *) ((const stream *) vptr)->strm, gcst);
	((stream *) vptr)->prev = gs_reloc_struct_ptr((const void *) ((const stream *) vptr)->prev, gcst);
	((stream *) vptr)->next = gs_reloc_struct_ptr((const void *) ((const stream *) vptr)->next, gcst);
	((stream *) vptr)->state = gs_reloc_struct_ptr((const void *) ((const stream *) vptr)->state, gcst);
}} static void stream_finalize(void *vptr)
{
    do {
    } while (0);
    if (((((stream *) vptr))->modes != 0) && !((stream *) vptr)->is_temp && ((stream *) vptr)->file != 0) {
	((stream *) vptr)->cbuf = 0;
	((stream *) vptr)->cbuf_string.data = 0;
	sclose(((stream *) vptr));
    }
}
static const stream_template s_no_template = { &st_stream_state, 0, 0, 1, 1, 0 };

stream *s_alloc(gs_memory_t * mem, client_name_t cname)
{
    stream *s = (stream *) (*(mem)->procs.alloc_struct) (mem, &st_stream, cname);
    do {
    } while (0);
    if (s == 0)
	return 0;
    s->memory = mem;
    s->report_error = s_no_report_error;
    s->prev = s->next = 0;
    return s;
}

stream_state *s_alloc_state(gs_memory_t * mem, gs_memory_type_ptr_t stype, client_name_t cname)
{
    stream_state *st = (stream_state *) (*(mem)->procs.alloc_struct) (mem, stype, cname);
    do {
    } while (0);
    if (st == 0)
	return 0;
    st->memory = mem;
    st->report_error = s_no_report_error;
    return st;
}

int s_no_init(stream_state * st)
{
    return 0;
}

void s_std_init(register stream * s, byte * ptr, uint len, const stream_procs * pp, int modes)
{
    s->template = &s_no_template;
    s->cbuf = ptr;
    s->cursor.r.ptr = s->cursor.r.limit = s->cursor.w.ptr = ptr - 1;
    s->cursor.w.limit = ptr - 1 + len;
    s->end_status = 0;
    s->foreign = 0;
    s->modes = modes;
    s->cbuf_string.data = 0;
    s->position = 0;
    s->bsize = s->cbsize = len;
    s->strm = 0;
    s->is_temp = 0;
    s->procs = *pp;
    s->state = (stream_state *) s;
    s->file = 0;
    do {
    } while (0);
}

int s_std_null(stream * s)
{
    return 0;
}

void s_std_read_reset(stream * s)
{
    s->cursor.r.ptr = s->cursor.r.limit = s->cbuf - 1;
} void s_std_write_reset(stream * s)
{
    s->cursor.w.ptr = s->cbuf - 1;
} int s_std_read_flush(stream * s)
{
    while (1) {
	s->cursor.r.ptr = s->cursor.r.limit = s->cbuf - 1;
	if (s->end_status)
	    break;
	s_process_read_buf(s);
    }
    return (s->end_status == ((int) (-1)) ? 0 : s->end_status);
} int s_std_write_flush(stream * s)
{
    return s_process_write_buf(s, ((bool) 0));
}

int s_std_noavailable(stream * s, long *pl)
{
    *pl = -1;
    return 0;
}

int s_std_noseek(stream * s, long pos)
{
    return ((int) (-2));
} int s_std_close(stream * s)
{
    return 0;
}

int s_std_switch_mode(stream * s, bool writing)
{
    return ((int) (-2));
} void s_disable(register stream * s)
{
    s->cbuf = 0;
    s->bsize = 0;
    s->end_status = ((int) (-1));
    s->modes = 0;
    s->cbuf_string.data = 0;
    s->cursor.r.ptr = s->cursor.r.limit = 0;
    s->cursor.w.limit = 0;
    s->procs.close = s_std_null;
    s->strm = 0;
    s->state = (stream_state *) s;
    s->template = &s_no_template;
    do {
    } while (0);
}

int s_filter_write_flush(register stream * s)
{
    int status = s_process_write_buf(s, ((bool) 0));
    if (status != 0)
	return status;
    return (*(s->strm)->procs.flush) (s->strm);
}

int s_filter_close(register stream * s)
{
    if ((((s)->modes & 2) != 0)) {
	int status = s_process_write_buf(s, ((bool) 1));
	if (status != 0 && status != ((int) (-1)))
	    return status;
    }
    return s_std_close(s);
}

int s_no_report_error(stream_state * st, const char *str)
{
    return 0;
}

int savailable(stream * s, long *pl)
{
    return (*(s)->procs.available) (s, pl);
}

long stell(stream * s)
{
    const byte *ptr = ((((s)->modes & 2) != 0) ? s->cursor.w.ptr : s->cursor.r.ptr);
    return (ptr == 0 ? 0 : ptr + 1 - s->cbuf) + s->position;
}

int spseek(stream * s, long pos)
{
    do {
    } while (0);
    return (*(s)->procs.seek) (s, pos);
}

int sswitch(register stream * s, bool writing)
{
    if (s->procs.switch_mode == 0)
	return ((int) (-2));
    return (*s->procs.switch_mode) (s, writing);
}

int sclose(register stream * s)
{
    stream_state *st;
    int code = (*s->procs.close) (s);
    if (code < 0)
	return code;
    st = s->state;
    if (st != 0) {
	void (*release) (stream_state *) = st->template->release;
	if (release != 0)
	    (*release) (st);
	if (st != (stream_state *) s && st->memory != 0)
	    (*(st->memory)->procs.free_object) (st->memory, st, "s_std_close");
	s->state = (stream_state *) s;
    }
    s_disable(s);
    return code;
}

int spgetcc(register stream * s, bool close_on_eof)
{
    int status, left;
    int min_left = (s->strm == 0 && s->end_status != ((int) (-4)) ? 0 : 1);
    while (status = s->end_status, left = s->cursor.r.limit - s->cursor.r.ptr, left <= min_left && status >= 0)
	s_process_read_buf(s);
    if (left <= min_left && (left == 0 || (status != ((int) (-1)) && status != ((int) (-2))))) {
	stream_compact(s, ((bool) 1));
	if (status == ((int) (-1)) && close_on_eof) {
	    status = sclose(s);
	    if (status == 0)
		status = ((int) (-1));
	    s->end_status = status;
	}
	return status;
    }
    return *++(s->cursor.r.ptr);
}

int spputc(register stream * s, byte b)
{
    for (;;) {
	if (s->end_status)
	    return s->end_status;
	if (!((s)->cursor.w.ptr >= (s)->cursor.w.limit)) {
	    *++(s->cursor.w.ptr) = b;
	    return b;
	}
	s_process_write_buf(s, ((bool) 0));
    }
}

int sungetc(register stream * s, byte c)
{
    if (!(((s)->modes & 1) != 0) || s->cursor.r.ptr < s->cbuf || *(s->cursor.r.ptr) != c)
	return ((int) (-2));
    s->cursor.r.ptr--;
    return 0;
}

int sgets(stream * s, byte * buf, uint nmax, uint * pn)
{
    stream_cursor_write cw;
    int status = 0;
    int min_left = (s->strm == 0 && s->end_status != ((int) (-4)) ? 0 : 1);
    cw.ptr = buf - 1;
    cw.limit = cw.ptr + nmax;
    while (cw.ptr < cw.limit) {
	int left;
	if ((left = s->cursor.r.limit - s->cursor.r.ptr) > min_left) {
	    s->cursor.r.limit -= min_left;
	    stream_move(&s->cursor.r, &cw);
	    s->cursor.r.limit += min_left;
	} else {
	    uint wanted = cw.limit - cw.ptr;
	    int c;
	    stream_state *st;
	    if (wanted >= s->bsize >> 2 && (st = s->state) != 0 && wanted >= st->template->min_out_size && s->end_status == 0 && left == 0) {
		byte *wptr = cw.ptr;
		cw.limit -= min_left;
		status = sreadbuf(s, &cw);
		cw.limit += min_left;
		s->position += cw.ptr - wptr;
		if (status != 1 || cw.ptr == cw.limit)
		    break;
	    }
	    c = spgetcc(s, ((bool) 1));
	    if (c < 0) {
		status = c;
		break;
	    }
	    *++(cw.ptr) = c;
	}
    }
    *pn = cw.ptr + 1 - buf;
    return (status >= 0 ? 0 : status);
}
//complexity is O(n) inferred by loopus
int sputs(register stream * s, const byte * str, uint wlen, uint * pn)
{
    uint len = wlen;
    int status = s->end_status;
    if (status >= 0)
	while (len > 0) {
	    uint count = s->cursor.w.limit - s->cursor.w.ptr;
	    if (count > 0) {
		if (count > len)
		    count = len;
		memcpy(s->cursor.w.ptr + 1, str, count);
		s->cursor.w.ptr += count;
		str += count;
		len -= count;
	    } else {
		byte ch = *str++;
		status = (!((s)->cursor.w.ptr >= (s)->cursor.w.limit) ? (++((s)->cursor.w.ptr), *(s)->cursor.w.ptr = (ch), 0) : spputc((s), (ch)));
		if (status < 0)
		    break;
		len--;
	    }
	}
    *pn = wlen - len;
    return (status >= 0 ? 0 : status);
}

int spskip(register stream * s, long nskip, long *pskipped)
{
    long n = nskip;
    int min_left;
    if (nskip < 0 || !(((s)->modes & 1) != 0)) {
	*pskipped = 0;
	return ((int) (-2));
    }
    if ((((s)->modes & 4) != 0)) {
	long pos = stell(s);
	int code = spseek(s, (long) (pos + n));
	*pskipped = stell(s) - pos;
	return code;
    }
    min_left = (s->strm == 0 && s->end_status != ((int) (-4)) ? 0 : 1);
    while (((s)->cursor.r.limit - (s)->cursor.r.ptr) < n + min_left) {
	int code;
	n -= ((s)->cursor.r.limit - (s)->cursor.r.ptr);
	s->cursor.r.ptr = s->cursor.r.limit;
	if (s->end_status) {
	    *pskipped = nskip - n;
	    return s->end_status;
	}
	code = ((int) ((s)->cursor.r.limit - (s)->cursor.r.ptr > 1 ? (++((s)->cursor.r.ptr), (int) *(s)->cursor.r.ptr) : spgetcc(s, ((bool) 1))));
	if (code < 0) {
	    *pskipped = nskip - n;
	    return code;
	}
	--n;
    }
    s->cursor.r.ptr += n;
    *pskipped = nskip;
    return 0;
}

int s_process_read_buf(stream * s)
{
    int status;
    stream_compact(s, ((bool) 0));
    status = sreadbuf(s, &s->cursor.w);
    s->end_status = (status >= 0 ? 0 : status);
    return 0;
}

int s_process_write_buf(stream * s, bool last)
{
    int status = swritebuf(s, &s->cursor.r, last);
    stream_compact(s, ((bool) 0));
    if (status >= 0)
	status = 0;
    s->end_status = status;
    return status;
}

static int sreadbuf(stream * s, stream_cursor_write * pbuf)
{
    stream *prev = 0;
    stream *curr = s;
    int status;
    for (;;) {
	stream *strm;
	for (;;) {
	    stream_cursor_read cr;
	    stream_cursor_read *pr;
	    stream_cursor_write *pw;
	    bool eof;
	    strm = curr->strm;
	    if (strm == 0) {
		cr.ptr = 0, cr.limit = 0;
		pr = &cr;
		eof = ((bool) 0);
	    } else {
		pr = &strm->cursor.r;
		eof = strm->end_status == ((int) (-1));
	    } pw = (prev == 0 ? pbuf : &curr->cursor.w);
	    do {
	    } while (0);
	    status = (*curr->procs.process) (curr->state, pr, pw, eof);
	    do {
	    } while (0);
	    if (strm == 0 || status != 0)
		break;
	    status = strm->end_status;
	    if (status < 0)
		break; {
		stream *ahead = curr->strm;
		curr->strm = prev;
		prev = curr;
		curr = ahead;
		};
		stream_compact(curr, ((bool) 0));
	}
	if (strm != 0 && status == ((int) (-1)) && curr->cursor.r.ptr >= curr->cursor.r.limit) {
	    int cstat = sclose(curr);
	    if (cstat != 0)
		status = cstat;
	}
	curr->end_status = (status >= 0 ? 0 : status);
	if (prev == 0)
	    return status; {
	    stream *back = prev->strm;
	    prev->strm = curr;
	    curr = prev;
	    prev = back;
	    };
    }
}

static int swritebuf(stream * s, stream_cursor_read * pbuf, bool last)
{
    stream *prev = 0;
    stream *curr = s;
    int depth = 0;
    int status;
    for (;;) {
	for (;;) {
	    stream *strm = curr->strm;
	    stream_cursor_write cw;
	    stream_cursor_read *pr;
	    stream_cursor_write *pw;
	    bool end = last && (prev == 0 || (depth <= 1 && prev->end_status == ((int) (-1))));
	    if (strm == 0)
		cw.ptr = 0, cw.limit = 0, pw = &cw;
	    else
		pw = &strm->cursor.w;
	    if (prev == 0)
		pr = pbuf;
	    else
		pr = &curr->cursor.r;
	    do {
	    } while (0);
	    status = curr->end_status;
	    if (status < 0)
		break;
	    status = (*curr->procs.process) (curr->state, pr, pw, end);
	    do {
	    } while (0);
	    if (status == 0 && end)
		status = ((int) (-1));
	    if (status == ((int) (-1)) || status == ((int) (-2)))
		curr->end_status = status;
	    if (strm == 0 || (status < 0 && status != ((int) (-1))))
		break;
	    if (status == 1)
		end = ((bool) 0);
	    else {
		if (!end || !strm->is_temp)
		    break;
	    }
	    status = strm->end_status;
	    if (status < 0)
		break; {
		stream *ahead = curr->strm;
		curr->strm = prev;
		prev = curr;
		curr = ahead;
		};
		stream_compact(curr, ((bool) 0));
		if (!curr->is_temp)
		    ++depth;
	}
	curr->end_status = (status >= 0 ? 0 : status);
	if (status < 0 || prev == 0) {
	    while (prev) { {
		    stream *back = prev->strm;
		    prev->strm = curr;
		    curr = prev;
		    prev = back;
	    };
	    curr->end_status = (status >= 0 ? 0 : status);
	    }
	    return status;
	}
	{
	    stream *back = prev->strm;
	    prev->strm = curr;
	    curr = prev;
	    prev = back;
	};
	if (!curr->is_temp)
	    --depth;
    }
}

int stream_move(stream_cursor_read * pr, stream_cursor_write * pw)
{
    uint rcount = pr->limit - pr->ptr;
    uint wcount = pw->limit - pw->ptr;
    uint count;
    int status;
    if (rcount <= wcount)
	count = rcount, status = 0;
    else
	count = wcount, status = 1;
    memmove(pw->ptr + 1, pr->ptr + 1, count);
    pr->ptr += count;
    pw->ptr += count;
    return status;
}

static void stream_compact(stream * s, bool always)
{
    if (s->cursor.r.ptr >= s->cbuf && (always || s->end_status >= 0)) {
	uint dist = s->cursor.r.ptr + 1 - s->cbuf;
	memmove(s->cbuf, s->cursor.r.ptr + 1, (uint) (s->cursor.r.limit - s->cursor.r.ptr));
	s->cursor.r.ptr = s->cbuf - 1;
	s->cursor.r.limit -= dist;
	s->position += dist;
    }
}

static int s_string_available(stream *, long *), s_string_read_seek(stream *, long), s_string_write_seek(stream *, long), s_string_read_process(stream_state *, stream_cursor_read *, stream_cursor_write *, bool), s_string_write_process(stream_state *, stream_cursor_read *, stream_cursor_write *, bool);
void sread_string(register stream * s, const byte * ptr, uint len)
{
    static const stream_procs p = { s_string_available, s_string_read_seek, s_std_read_reset, s_std_read_flush, s_std_null, s_string_read_process };
    s_std_init(s, (byte *) ptr, len, &p, 1 + 4);
    s->cbuf_string.data = (byte *) ptr;
    s->cbuf_string.size = len;
    s->end_status = ((int) (-1));
    s->cursor.r.limit = s->cursor.w.limit;
} static int s_string_available(stream * s, long *pl)
{
    *pl = ((s)->cursor.r.limit - (s)->cursor.r.ptr);
    if (*pl == 0)
	*pl = -1;
    return 0;
}

static int s_string_read_seek(register stream * s, long pos)
{
    if (pos < 0 || pos > s->bsize)
	return ((int) (-2));
    s->cursor.r.ptr = s->cbuf + pos - 1;
    return 0;
}

void swrite_string(register stream * s, byte * ptr, uint len)
{
    static const stream_procs p = { s_std_noavailable, s_string_write_seek, s_std_write_reset, s_std_null, s_std_null, s_string_write_process };
    s_std_init(s, ptr, len, &p, 2 + 4);
    s->cbuf_string.data = ptr;
    s->cbuf_string.size = len;
} static int s_string_write_seek(register stream * s, long pos)
{
    if (pos < 0 || pos > s->bsize)
	return ((int) (-2));
    s->cursor.w.ptr = s->cbuf + pos - 1;
    return 0;
}

static int s_string_read_process(stream_state * st, stream_cursor_read * ignore_pr, stream_cursor_write * pw, bool last)
{
    return ((int) (-1));
} static int s_string_write_process(stream_state * st, stream_cursor_read * pr, stream_cursor_write * ignore_pw, bool last)
{
    return (last ? ((int) (-1)) : ((int) (-2)));
}
