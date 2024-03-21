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
extern int dprintf(int __fd, __const char *__restrict __fmt, ...) __attribute__ ((__format__(__printf__, 2, 3)));
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
extern __ssize_t getline(char **__restrict __lineptr, size_t * __restrict __n, FILE * __restrict __stream);
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
typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
extern int access(__const char *__name, int __type) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int faccessat(int __fd, __const char *__file, int __type, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern __off_t lseek(int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__));
extern int close(int __fd);
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
extern ssize_t write(int __fd, __const void *__buf, size_t __n);
extern int pipe(int __pipedes[2]) __attribute__ ((__nothrow__));
extern unsigned int alarm(unsigned int __seconds) __attribute__ ((__nothrow__));
extern unsigned int sleep(unsigned int __seconds);
extern __useconds_t ualarm(__useconds_t __value, __useconds_t __interval) __attribute__ ((__nothrow__));
extern int usleep(__useconds_t __useconds);
extern int pause(void);
extern int chown(__const char *__file, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fchown(int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__));
extern int lchown(__const char *__file, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fchownat(int __fd, __const char *__file, __uid_t __owner, __gid_t __group, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int chdir(__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fchdir(int __fd) __attribute__ ((__nothrow__));
extern char *getcwd(char *__buf, size_t __size) __attribute__ ((__nothrow__));
extern char *getwd(char *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1))) __attribute__ ((__deprecated__));
extern int dup(int __fd) __attribute__ ((__nothrow__));
extern int dup2(int __fd, int __fd2) __attribute__ ((__nothrow__));
extern char **__environ;
extern int execve(__const char *__path, char *__const __argv[], char *__const __envp[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int fexecve(int __fd, char *__const __argv[], char *__const __envp[]) __attribute__ ((__nothrow__));
extern int execv(__const char *__path, char *__const __argv[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int execle(__const char *__path, __const char *__arg, ...) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int execl(__const char *__path, __const char *__arg, ...) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int execvp(__const char *__file, char *__const __argv[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int execlp(__const char *__file, __const char *__arg, ...) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int nice(int __inc) __attribute__ ((__nothrow__));
extern void _exit(int __status) __attribute__ ((__noreturn__));
enum { _PC_LINK_MAX, _PC_MAX_CANON, _PC_MAX_INPUT, _PC_NAME_MAX, _PC_PATH_MAX, _PC_PIPE_BUF, _PC_CHOWN_RESTRICTED, _PC_NO_TRUNC, _PC_VDISABLE, _PC_SYNC_IO, _PC_ASYNC_IO, _PC_PRIO_IO, _PC_SOCK_MAXBUF, _PC_FILESIZEBITS, _PC_REC_INCR_XFER_SIZE, _PC_REC_MAX_XFER_SIZE, _PC_REC_MIN_XFER_SIZE, _PC_REC_XFER_ALIGN, _PC_ALLOC_SIZE_MIN, _PC_SYMLINK_MAX, _PC_2_SYMLINKS };
enum { _SC_ARG_MAX, _SC_CHILD_MAX, _SC_CLK_TCK, _SC_NGROUPS_MAX, _SC_OPEN_MAX, _SC_STREAM_MAX, _SC_TZNAME_MAX, _SC_JOB_CONTROL, _SC_SAVED_IDS, _SC_REALTIME_SIGNALS, _SC_PRIORITY_SCHEDULING, _SC_TIMERS, _SC_ASYNCHRONOUS_IO, _SC_PRIORITIZED_IO, _SC_SYNCHRONIZED_IO, _SC_FSYNC, _SC_MAPPED_FILES, _SC_MEMLOCK, _SC_MEMLOCK_RANGE, _SC_MEMORY_PROTECTION, _SC_MESSAGE_PASSING, _SC_SEMAPHORES, _SC_SHARED_MEMORY_OBJECTS, _SC_AIO_LISTIO_MAX, _SC_AIO_MAX, _SC_AIO_PRIO_DELTA_MAX, _SC_DELAYTIMER_MAX, _SC_MQ_OPEN_MAX, _SC_MQ_PRIO_MAX, _SC_VERSION, _SC_PAGESIZE, _SC_RTSIG_MAX, _SC_SEM_NSEMS_MAX, _SC_SEM_VALUE_MAX, _SC_SIGQUEUE_MAX, _SC_TIMER_MAX, _SC_BC_BASE_MAX, _SC_BC_DIM_MAX, _SC_BC_SCALE_MAX, _SC_BC_STRING_MAX, _SC_COLL_WEIGHTS_MAX, _SC_EQUIV_CLASS_MAX, _SC_EXPR_NEST_MAX, _SC_LINE_MAX, _SC_RE_DUP_MAX, _SC_CHARCLASS_NAME_MAX, _SC_2_VERSION, _SC_2_C_BIND, _SC_2_C_DEV, _SC_2_FORT_DEV, _SC_2_FORT_RUN, _SC_2_SW_DEV, _SC_2_LOCALEDEF, _SC_PII, _SC_PII_XTI, _SC_PII_SOCKET, _SC_PII_INTERNET, _SC_PII_OSI, _SC_POLL, _SC_SELECT, _SC_UIO_MAXIOV, _SC_IOV_MAX = _SC_UIO_MAXIOV, _SC_PII_INTERNET_STREAM, _SC_PII_INTERNET_DGRAM, _SC_PII_OSI_COTS, _SC_PII_OSI_CLTS, _SC_PII_OSI_M, _SC_T_IOV_MAX, _SC_THREADS, _SC_THREAD_SAFE_FUNCTIONS, _SC_GETGR_R_SIZE_MAX, _SC_GETPW_R_SIZE_MAX, _SC_LOGIN_NAME_MAX, _SC_TTY_NAME_MAX, _SC_THREAD_DESTRUCTOR_ITERATIONS, _SC_THREAD_KEYS_MAX, _SC_THREAD_STACK_MIN, _SC_THREAD_THREADS_MAX, _SC_THREAD_ATTR_STACKADDR, _SC_THREAD_ATTR_STACKSIZE, _SC_THREAD_PRIORITY_SCHEDULING, _SC_THREAD_PRIO_INHERIT, _SC_THREAD_PRIO_PROTECT, _SC_THREAD_PROCESS_SHARED, _SC_NPROCESSORS_CONF, _SC_NPROCESSORS_ONLN, _SC_PHYS_PAGES, _SC_AVPHYS_PAGES, _SC_ATEXIT_MAX, _SC_PASS_MAX, _SC_XOPEN_VERSION, _SC_XOPEN_XCU_VERSION, _SC_XOPEN_UNIX, _SC_XOPEN_CRYPT, _SC_XOPEN_ENH_I18N, _SC_XOPEN_SHM, _SC_2_CHAR_TERM, _SC_2_C_VERSION, _SC_2_UPE, _SC_XOPEN_XPG2, _SC_XOPEN_XPG3, _SC_XOPEN_XPG4, _SC_CHAR_BIT, _SC_CHAR_MAX, _SC_CHAR_MIN, _SC_INT_MAX, _SC_INT_MIN, _SC_LONG_BIT, _SC_WORD_BIT, _SC_MB_LEN_MAX, _SC_NZERO, _SC_SSIZE_MAX, _SC_SCHAR_MAX, _SC_SCHAR_MIN, _SC_SHRT_MAX, _SC_SHRT_MIN, _SC_UCHAR_MAX, _SC_UINT_MAX, _SC_ULONG_MAX, _SC_USHRT_MAX, _SC_NL_ARGMAX, _SC_NL_LANGMAX, _SC_NL_MSGMAX, _SC_NL_NMAX, _SC_NL_SETMAX, _SC_NL_TEXTMAX, _SC_XBS5_ILP32_OFF32, _SC_XBS5_ILP32_OFFBIG, _SC_XBS5_LP64_OFF64, _SC_XBS5_LPBIG_OFFBIG, _SC_XOPEN_LEGACY, _SC_XOPEN_REALTIME, _SC_XOPEN_REALTIME_THREADS, _SC_ADVISORY_INFO, _SC_BARRIERS, _SC_BASE, _SC_C_LANG_SUPPORT, _SC_C_LANG_SUPPORT_R, _SC_CLOCK_SELECTION, _SC_CPUTIME, _SC_THREAD_CPUTIME, _SC_DEVICE_IO, _SC_DEVICE_SPECIFIC, _SC_DEVICE_SPECIFIC_R, _SC_FD_MGMT, _SC_FIFO, _SC_PIPE, _SC_FILE_ATTRIBUTES, _SC_FILE_LOCKING, _SC_FILE_SYSTEM, _SC_MONOTONIC_CLOCK, _SC_MULTI_PROCESS, _SC_SINGLE_PROCESS, _SC_NETWORKING, _SC_READER_WRITER_LOCKS, _SC_SPIN_LOCKS, _SC_REGEXP, _SC_REGEX_VERSION, _SC_SHELL, _SC_SIGNALS, _SC_SPAWN, _SC_SPORADIC_SERVER, _SC_THREAD_SPORADIC_SERVER, _SC_SYSTEM_DATABASE, _SC_SYSTEM_DATABASE_R, _SC_TIMEOUTS, _SC_TYPED_MEMORY_OBJECTS, _SC_USER_GROUPS, _SC_USER_GROUPS_R, _SC_2_PBS, _SC_2_PBS_ACCOUNTING, _SC_2_PBS_LOCATE, _SC_2_PBS_MESSAGE, _SC_2_PBS_TRACK, _SC_SYMLOOP_MAX, _SC_STREAMS, _SC_2_PBS_CHECKPOINT, _SC_V6_ILP32_OFF32, _SC_V6_ILP32_OFFBIG, _SC_V6_LP64_OFF64, _SC_V6_LPBIG_OFFBIG, _SC_HOST_NAME_MAX, _SC_TRACE, _SC_TRACE_EVENT_FILTER, _SC_TRACE_INHERIT, _SC_TRACE_LOG, _SC_LEVEL1_ICACHE_SIZE, _SC_LEVEL1_ICACHE_ASSOC, _SC_LEVEL1_ICACHE_LINESIZE, _SC_LEVEL1_DCACHE_SIZE, _SC_LEVEL1_DCACHE_ASSOC, _SC_LEVEL1_DCACHE_LINESIZE, _SC_LEVEL2_CACHE_SIZE, _SC_LEVEL2_CACHE_ASSOC, _SC_LEVEL2_CACHE_LINESIZE, _SC_LEVEL3_CACHE_SIZE, _SC_LEVEL3_CACHE_ASSOC, _SC_LEVEL3_CACHE_LINESIZE, _SC_LEVEL4_CACHE_SIZE, _SC_LEVEL4_CACHE_ASSOC, _SC_LEVEL4_CACHE_LINESIZE, _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50, _SC_RAW_SOCKETS, _SC_V7_ILP32_OFF32, _SC_V7_ILP32_OFFBIG, _SC_V7_LP64_OFF64, _SC_V7_LPBIG_OFFBIG, _SC_SS_REPL_MAX, _SC_TRACE_EVENT_NAME_MAX, _SC_TRACE_NAME_MAX, _SC_TRACE_SYS_MAX, _SC_TRACE_USER_EVENT_MAX, _SC_XOPEN_STREAMS, _SC_THREAD_ROBUST_PRIO_INHERIT, _SC_THREAD_ROBUST_PRIO_PROTECT };
enum { _CS_PATH, _CS_V6_WIDTH_RESTRICTED_ENVS, _CS_GNU_LIBC_VERSION, _CS_GNU_LIBPTHREAD_VERSION, _CS_V5_WIDTH_RESTRICTED_ENVS, _CS_V7_WIDTH_RESTRICTED_ENVS, _CS_LFS_CFLAGS = 1000, _CS_LFS_LDFLAGS, _CS_LFS_LIBS, _CS_LFS_LINTFLAGS, _CS_LFS64_CFLAGS, _CS_LFS64_LDFLAGS, _CS_LFS64_LIBS, _CS_LFS64_LINTFLAGS, _CS_XBS5_ILP32_OFF32_CFLAGS = 1100, _CS_XBS5_ILP32_OFF32_LDFLAGS, _CS_XBS5_ILP32_OFF32_LIBS, _CS_XBS5_ILP32_OFF32_LINTFLAGS, _CS_XBS5_ILP32_OFFBIG_CFLAGS, _CS_XBS5_ILP32_OFFBIG_LDFLAGS, _CS_XBS5_ILP32_OFFBIG_LIBS, _CS_XBS5_ILP32_OFFBIG_LINTFLAGS, _CS_XBS5_LP64_OFF64_CFLAGS, _CS_XBS5_LP64_OFF64_LDFLAGS, _CS_XBS5_LP64_OFF64_LIBS, _CS_XBS5_LP64_OFF64_LINTFLAGS, _CS_XBS5_LPBIG_OFFBIG_CFLAGS, _CS_XBS5_LPBIG_OFFBIG_LDFLAGS, _CS_XBS5_LPBIG_OFFBIG_LIBS, _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS, _CS_POSIX_V6_ILP32_OFF32_CFLAGS, _CS_POSIX_V6_ILP32_OFF32_LDFLAGS, _CS_POSIX_V6_ILP32_OFF32_LIBS, _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS, _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS, _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS, _CS_POSIX_V6_ILP32_OFFBIG_LIBS, _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS, _CS_POSIX_V6_LP64_OFF64_CFLAGS, _CS_POSIX_V6_LP64_OFF64_LDFLAGS, _CS_POSIX_V6_LP64_OFF64_LIBS, _CS_POSIX_V6_LP64_OFF64_LINTFLAGS, _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS, _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS, _CS_POSIX_V6_LPBIG_OFFBIG_LIBS, _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS, _CS_POSIX_V7_ILP32_OFF32_CFLAGS, _CS_POSIX_V7_ILP32_OFF32_LDFLAGS, _CS_POSIX_V7_ILP32_OFF32_LIBS, _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS, _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS, _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS, _CS_POSIX_V7_ILP32_OFFBIG_LIBS, _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS, _CS_POSIX_V7_LP64_OFF64_CFLAGS, _CS_POSIX_V7_LP64_OFF64_LDFLAGS, _CS_POSIX_V7_LP64_OFF64_LIBS, _CS_POSIX_V7_LP64_OFF64_LINTFLAGS, _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS, _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS, _CS_POSIX_V7_LPBIG_OFFBIG_LIBS, _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS };
extern long int pathconf(__const char *__path, int __name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern long int fpathconf(int __fd, int __name) __attribute__ ((__nothrow__));
extern long int sysconf(int __name) __attribute__ ((__nothrow__));
extern size_t confstr(int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__));
extern __pid_t getpid(void) __attribute__ ((__nothrow__));
extern __pid_t getppid(void) __attribute__ ((__nothrow__));
extern __pid_t getpgrp(void) __attribute__ ((__nothrow__));
extern __pid_t __getpgid(__pid_t __pid) __attribute__ ((__nothrow__));
extern int setpgid(__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__));
extern int setpgrp(void) __attribute__ ((__nothrow__));
extern __pid_t setsid(void) __attribute__ ((__nothrow__));
extern __uid_t getuid(void) __attribute__ ((__nothrow__));
extern __uid_t geteuid(void) __attribute__ ((__nothrow__));
extern __gid_t getgid(void) __attribute__ ((__nothrow__));
extern __gid_t getegid(void) __attribute__ ((__nothrow__));
extern int getgroups(int __size, __gid_t __list[]) __attribute__ ((__nothrow__));
extern int setuid(__uid_t __uid) __attribute__ ((__nothrow__));
extern int setreuid(__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__));
extern int seteuid(__uid_t __uid) __attribute__ ((__nothrow__));
extern int setgid(__gid_t __gid) __attribute__ ((__nothrow__));
extern int setregid(__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__));
extern int setegid(__gid_t __gid) __attribute__ ((__nothrow__));
extern __pid_t fork(void) __attribute__ ((__nothrow__));
extern __pid_t vfork(void) __attribute__ ((__nothrow__));
extern char *ttyname(int __fd) __attribute__ ((__nothrow__));
extern int ttyname_r(int __fd, char *__buf, size_t __buflen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int isatty(int __fd) __attribute__ ((__nothrow__));
extern int ttyslot(void) __attribute__ ((__nothrow__));
extern int link(__const char *__from, __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int linkat(int __fromfd, __const char *__from, int __tofd, __const char *__to, int __flags) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 4)));
extern int symlink(__const char *__from, __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern ssize_t readlink(__const char *__restrict __path, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 2)));
extern int symlinkat(__const char *__from, int __tofd, __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1, 3)));
extern ssize_t readlinkat(int __fd, __const char *__restrict __path, char *__restrict __buf, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2, 3)));
extern int unlink(__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int unlinkat(int __fd, __const char *__name, int __flag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(2)));
extern int rmdir(__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern __pid_t tcgetpgrp(int __fd) __attribute__ ((__nothrow__));
extern int tcsetpgrp(int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__));
extern char *getlogin(void);
extern int getlogin_r(char *__name, size_t __name_len) __attribute__ ((__nonnull__(1)));
extern int setlogin(__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern char *optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern int getopt(int ___argc, char *const *___argv, const char *__shortopts) __attribute__ ((__nothrow__));
extern int gethostname(char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sethostname(__const char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int sethostid(long int __id) __attribute__ ((__nothrow__));
extern int getdomainname(char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int setdomainname(__const char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int vhangup(void) __attribute__ ((__nothrow__));
extern int revoke(__const char *__file) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int profil(unsigned short int *__sample_buffer, size_t __size, size_t __offset, unsigned int __scale) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int acct(__const char *__name) __attribute__ ((__nothrow__));
extern char *getusershell(void) __attribute__ ((__nothrow__));
extern void endusershell(void) __attribute__ ((__nothrow__));
extern void setusershell(void) __attribute__ ((__nothrow__));
extern int daemon(int __nochdir, int __noclose) __attribute__ ((__nothrow__));
extern int chroot(__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern char *getpass(__const char *__prompt) __attribute__ ((__nonnull__(1)));
extern int fsync(int __fd);
extern long int gethostid(void);
extern void sync(void) __attribute__ ((__nothrow__));
extern int getpagesize(void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int getdtablesize(void) __attribute__ ((__nothrow__));
extern int truncate(__const char *__file, __off_t __length) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__(1)));
extern int ftruncate(int __fd, __off_t __length) __attribute__ ((__nothrow__));
extern int brk(void *__addr) __attribute__ ((__nothrow__));
extern void *sbrk(intptr_t __delta) __attribute__ ((__nothrow__));
extern long int syscall(long int __sysno, ...) __attribute__ ((__nothrow__));
extern int lockf(int __fd, int __cmd, __off_t __len);
extern int fdatasync(int __fildes);
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
struct flock {
    short int l_type;
    short int l_whence;
    __off_t l_start;
    __off_t l_len;
    __pid_t l_pid;
};
extern int fcntl(int __fd, int __cmd, ...);
extern int open(__const char *__file, int __oflag, ...) __attribute__ ((__nonnull__(1)));
extern int openat(int __fd, __const char *__file, int __oflag, ...) __attribute__ ((__nonnull__(2)));
extern int openat64(int __fd, __const char *__file, int __oflag, ...) __attribute__ ((__nonnull__(2)));
extern int creat(__const char *__file, __mode_t __mode) __attribute__ ((__nonnull__(1)));
extern int posix_fadvise(int __fd, __off_t __offset, __off_t __len, int __advise) __attribute__ ((__nothrow__));
extern int posix_fallocate(int __fd, __off_t __offset, __off_t __len);
typedef double dblparam_t;
typedef signed char int8;
typedef unsigned char uint8;
typedef short int16;
typedef unsigned short uint16;
typedef int int32;
typedef unsigned int uint32;
enum TIFFIgnoreSense { TIS_STORE, TIS_EXTRACT, TIS_EMPTY };
typedef struct {
    uint16 tiff_magic;
    uint16 tiff_version;
    uint32 tiff_diroff;
} TIFFHeader;
typedef struct {
    uint16 tdir_tag;
    uint16 tdir_type;
    uint32 tdir_count;
    uint32 tdir_offset;
} TIFFDirEntry;
typedef enum { TIFF_NOTYPE = 0, TIFF_BYTE = 1, TIFF_ASCII = 2, TIFF_SHORT = 3, TIFF_LONG = 4, TIFF_RATIONAL = 5, TIFF_SBYTE = 6, TIFF_UNDEFINED = 7, TIFF_SSHORT = 8, TIFF_SLONG = 9, TIFF_SRATIONAL = 10, TIFF_FLOAT = 11, TIFF_DOUBLE = 12 } TIFFDataType;
typedef struct tiff TIFF;
typedef uint32 ttag_t;
typedef uint16 tdir_t;
typedef uint16 tsample_t;
typedef uint32 tstrip_t;
typedef uint32 ttile_t;
typedef int32 tsize_t;
typedef void *tdata_t;
typedef int32 toff_t;
typedef void *thandle_t;
typedef unsigned char TIFFRGBValue;
typedef struct _TIFFRGBAImage TIFFRGBAImage;
typedef void (*tileContigRoutine) (TIFFRGBAImage *, uint32 *, uint32, uint32, uint32, uint32, int32, int32, unsigned char *);
typedef void (*tileSeparateRoutine) (TIFFRGBAImage *, uint32 *, uint32, uint32, uint32, uint32, int32, int32, unsigned char *, unsigned char *, unsigned char *, unsigned char *);
typedef struct {
    TIFFRGBValue *clamptab;
    int *Cr_r_tab;
    int *Cb_b_tab;
    int32 *Cr_g_tab;
    int32 *Cb_g_tab;
    float coeffs[3];
} TIFFYCbCrToRGB;
struct _TIFFRGBAImage {
    TIFF *tif;
    int stoponerr;
    int isContig;
    int alpha;
    uint32 width;
    uint32 height;
    uint16 bitspersample;
    uint16 samplesperpixel;
    uint16 orientation;
    uint16 photometric;
    uint16 *redcmap;
    uint16 *greencmap;
    uint16 *bluecmap;
    int (*get) (TIFFRGBAImage *, uint32 *, uint32, uint32);
    union {
	void (*any) (TIFFRGBAImage *);
	tileContigRoutine contig;
	tileSeparateRoutine separate;
    } put;
    TIFFRGBValue *Map;
    uint32 **BWmap;
    uint32 **PALmap;
    TIFFYCbCrToRGB *ycbcr;
    int row_offset;
    int col_offset;
};
typedef int (*TIFFInitMethod) (TIFF *, int);
typedef struct {
    char *name;
    uint16 scheme;
    TIFFInitMethod init;
} TIFFCodec;
typedef void (*TIFFErrorHandler) (const char *, const char *, va_list);
typedef tsize_t(*TIFFReadWriteProc) (thandle_t, tdata_t, tsize_t);
typedef toff_t(*TIFFSeekProc) (thandle_t, toff_t, int);
typedef int (*TIFFCloseProc) (thandle_t);
typedef toff_t(*TIFFSizeProc) (thandle_t);
typedef int (*TIFFMapFileProc) (thandle_t, tdata_t *, toff_t *);
typedef void (*TIFFUnmapFileProc) (thandle_t, tdata_t, toff_t);
typedef void (*TIFFExtendProc) (TIFF *);
extern const char *TIFFGetVersion(void);
extern const TIFFCodec *TIFFFindCODEC(uint16);
extern TIFFCodec *TIFFRegisterCODEC(uint16, const char *, TIFFInitMethod);
extern void TIFFUnRegisterCODEC(TIFFCodec *);
extern tdata_t _TIFFmalloc(tsize_t);
extern tdata_t _TIFFrealloc(tdata_t, tsize_t);
extern void _TIFFmemset(tdata_t, int, tsize_t);
extern void _TIFFmemcpy(tdata_t, const tdata_t, tsize_t);
extern int _TIFFmemcmp(const tdata_t, const tdata_t, tsize_t);
extern void _TIFFfree(tdata_t);
extern void TIFFClose(TIFF *);
extern int TIFFFlush(TIFF *);
extern int TIFFFlushData(TIFF *);
extern int TIFFGetField(TIFF *, ttag_t, ...);
extern int TIFFVGetField(TIFF *, ttag_t, va_list);
extern int TIFFGetFieldDefaulted(TIFF *, ttag_t, ...);
extern int TIFFVGetFieldDefaulted(TIFF *, ttag_t, va_list);
extern int TIFFReadDirectory(TIFF *);
extern tsize_t TIFFScanlineSize(TIFF *);
extern tsize_t TIFFRasterScanlineSize(TIFF *);
extern tsize_t TIFFStripSize(TIFF *);
extern tsize_t TIFFVStripSize(TIFF *, uint32);
extern tsize_t TIFFTileRowSize(TIFF *);
extern tsize_t TIFFTileSize(TIFF *);
extern tsize_t TIFFVTileSize(TIFF *, uint32);
extern uint32 TIFFDefaultStripSize(TIFF *, uint32);
extern void TIFFDefaultTileSize(TIFF *, uint32 *, uint32 *);
extern int TIFFFileno(TIFF *);
extern int TIFFGetMode(TIFF *);
extern int TIFFIsTiled(TIFF *);
extern int TIFFIsByteSwapped(TIFF *);
extern int TIFFIsUpSampled(TIFF *);
extern int TIFFIsMSB2LSB(TIFF *);
extern uint32 TIFFCurrentRow(TIFF *);
extern tdir_t TIFFCurrentDirectory(TIFF *);
extern tdir_t TIFFNumberOfDirectories(TIFF *);
extern uint32 TIFFCurrentDirOffset(TIFF *);
extern tstrip_t TIFFCurrentStrip(TIFF *);
extern ttile_t TIFFCurrentTile(TIFF *);
extern int TIFFReadBufferSetup(TIFF *, tdata_t, tsize_t);
extern int TIFFWriteBufferSetup(TIFF *, tdata_t, tsize_t);
extern int TIFFLastDirectory(TIFF *);
extern int TIFFSetDirectory(TIFF *, tdir_t);
extern int TIFFSetSubDirectory(TIFF *, uint32);
extern int TIFFUnlinkDirectory(TIFF *, tdir_t);
extern int TIFFSetField(TIFF *, ttag_t, ...);
extern int TIFFVSetField(TIFF *, ttag_t, va_list);
extern int TIFFWriteDirectory(TIFF *);
extern int TIFFReassignTagToIgnore(enum TIFFIgnoreSense, int);
extern void TIFFPrintDirectory(TIFF *, FILE *, long);
extern int TIFFReadScanline(TIFF *, tdata_t, uint32, tsample_t);
extern int TIFFWriteScanline(TIFF *, tdata_t, uint32, tsample_t);
extern int TIFFReadRGBAImage(TIFF *, uint32, uint32, uint32 *, int);
extern int TIFFReadRGBAStrip(TIFF *, tstrip_t, uint32 *);
extern int TIFFReadRGBATile(TIFF *, uint32, uint32, uint32 *);
extern int TIFFRGBAImageOK(TIFF *, char[1024]);
extern int TIFFRGBAImageBegin(TIFFRGBAImage *, TIFF *, int, char[1024]);
extern int TIFFRGBAImageGet(TIFFRGBAImage *, uint32 *, uint32, uint32);
extern void TIFFRGBAImageEnd(TIFFRGBAImage *);
extern TIFF *TIFFOpen(const char *, const char *);
extern TIFF *TIFFFdOpen(int, const char *, const char *);
extern TIFF *TIFFClientOpen(const char *, const char *, thandle_t, TIFFReadWriteProc, TIFFReadWriteProc, TIFFSeekProc, TIFFCloseProc, TIFFSizeProc, TIFFMapFileProc, TIFFUnmapFileProc);
extern const char *TIFFFileName(TIFF *);
extern void TIFFError(const char *, const char *, ...);
extern void TIFFWarning(const char *, const char *, ...);
extern TIFFErrorHandler TIFFSetErrorHandler(TIFFErrorHandler);
extern TIFFErrorHandler TIFFSetWarningHandler(TIFFErrorHandler);
extern TIFFExtendProc TIFFSetTagExtender(TIFFExtendProc);
extern ttile_t TIFFComputeTile(TIFF *, uint32, uint32, uint32, tsample_t);
extern int TIFFCheckTile(TIFF *, uint32, uint32, uint32, tsample_t);
extern ttile_t TIFFNumberOfTiles(TIFF *);
extern tsize_t TIFFReadTile(TIFF *, tdata_t, uint32, uint32, uint32, tsample_t);
extern tsize_t TIFFWriteTile(TIFF *, tdata_t, uint32, uint32, uint32, tsample_t);
extern tstrip_t TIFFComputeStrip(TIFF *, uint32, tsample_t);
extern tstrip_t TIFFNumberOfStrips(TIFF *);
extern tsize_t TIFFReadEncodedStrip(TIFF *, tstrip_t, tdata_t, tsize_t);
extern tsize_t TIFFReadRawStrip(TIFF *, tstrip_t, tdata_t, tsize_t);
extern tsize_t TIFFReadEncodedTile(TIFF *, ttile_t, tdata_t, tsize_t);
extern tsize_t TIFFReadRawTile(TIFF *, ttile_t, tdata_t, tsize_t);
extern tsize_t TIFFWriteEncodedStrip(TIFF *, tstrip_t, tdata_t, tsize_t);
extern tsize_t TIFFWriteRawStrip(TIFF *, tstrip_t, tdata_t, tsize_t);
extern tsize_t TIFFWriteEncodedTile(TIFF *, ttile_t, tdata_t, tsize_t);
extern tsize_t TIFFWriteRawTile(TIFF *, ttile_t, tdata_t, tsize_t);
extern void TIFFSetWriteOffset(TIFF *, toff_t);
extern void TIFFSwabShort(uint16 *);
extern void TIFFSwabLong(uint32 *);
extern void TIFFSwabDouble(double *);
extern void TIFFSwabArrayOfShort(uint16 *, unsigned long);
extern void TIFFSwabArrayOfLong(uint32 *, unsigned long);
extern void TIFFSwabArrayOfDouble(double *, unsigned long);
extern void TIFFReverseBits(unsigned char *, unsigned long);
extern const unsigned char *TIFFGetBitRevTable(int);
typedef struct {
    u_long td_fieldsset[3];
    uint32 td_imagewidth, td_imagelength, td_imagedepth;
    uint32 td_tilewidth, td_tilelength, td_tiledepth;
    uint32 td_subfiletype;
    uint16 td_bitspersample;
    uint16 td_sampleformat;
    uint16 td_compression;
    uint16 td_photometric;
    uint16 td_threshholding;
    uint16 td_fillorder;
    uint16 td_orientation;
    uint16 td_samplesperpixel;
    uint32 td_rowsperstrip;
    uint16 td_minsamplevalue, td_maxsamplevalue;
    double td_sminsamplevalue, td_smaxsamplevalue;
    float td_xresolution, td_yresolution;
    uint16 td_resolutionunit;
    uint16 td_planarconfig;
    float td_xposition, td_yposition;
    uint16 td_pagenumber[2];
    uint16 *td_colormap[3];
    uint16 td_halftonehints[2];
    uint16 td_extrasamples;
    uint16 *td_sampleinfo;
    double td_stonits;
    char *td_documentname;
    char *td_artist;
    char *td_datetime;
    char *td_hostcomputer;
    char *td_imagedescription;
    char *td_make;
    char *td_model;
    char *td_software;
    char *td_pagename;
    tstrip_t td_stripsperimage;
    tstrip_t td_nstrips;
    uint32 *td_stripoffset;
    uint32 *td_stripbytecount;
    uint16 td_nsubifd;
    uint32 *td_subifd;
    float *td_ycbcrcoeffs;
    uint16 td_ycbcrsubsampling[2];
    uint16 td_ycbcrpositioning;
    float *td_whitepoint;
    float *td_primarychromas;
    float *td_refblackwhite;
    uint16 *td_transferfunction[3];
    uint16 td_inkset;
    uint16 td_ninks;
    uint16 td_dotrange[2];
    int td_inknameslen;
    char *td_inknames;
    char *td_targetprinter;
    uint32 td_profileLength;
    void *td_profileData;
    uint32 td_photoshopLength;
    void *td_photoshopData;
    uint32 td_richtiffiptcLength;
    void *td_richtiffiptcData;
    uint32 td_imagefullwidth, td_imagefulllength;
    char *td_textureformat;
    char *td_wrapmodes;
    float td_fovcot;
    float *td_matrixWorldToScreen;
    float *td_matrixWorldToCamera;
} TIFFDirectory;
typedef struct {
    ttag_t field_tag;
    short field_readcount;
    short field_writecount;
    TIFFDataType field_type;
    u_short field_bit;
    u_char field_oktochange;
    u_char field_passcount;
    char *field_name;
} TIFFFieldInfo;
extern const int tiffDataWidth[];
extern void _TIFFSetupFieldInfo(TIFF *);
extern void _TIFFMergeFieldInfo(TIFF *, const TIFFFieldInfo[], int);
extern void _TIFFPrintFieldInfo(TIFF *, FILE *);
extern const TIFFFieldInfo *_TIFFFindFieldInfo(TIFF *, ttag_t, TIFFDataType);
extern const TIFFFieldInfo *_TIFFFieldWithTag(TIFF *, ttag_t);
extern TIFFDataType _TIFFSampleToTagType(TIFF *);
typedef unsigned char tidataval_t;
typedef tidataval_t *tidata_t;
typedef void (*TIFFVoidMethod) (TIFF *);
typedef int (*TIFFBoolMethod) (TIFF *);
typedef int (*TIFFPreMethod) (TIFF *, tsample_t);
typedef int (*TIFFCodeMethod) (TIFF *, tidata_t, tsize_t, tsample_t);
typedef int (*TIFFSeekMethod) (TIFF *, uint32);
typedef void (*TIFFPostMethod) (TIFF *, tidata_t, tsize_t);
typedef int (*TIFFVSetMethod) (TIFF *, ttag_t, va_list);
typedef int (*TIFFVGetMethod) (TIFF *, ttag_t, va_list);
typedef void (*TIFFPrintMethod) (TIFF *, FILE *, long);
typedef uint32(*TIFFStripMethod) (TIFF *, uint32);
typedef void (*TIFFTileMethod) (TIFF *, uint32 *, uint32 *);
struct tiff {
    char *tif_name;
    int tif_fd;
    int tif_mode;
    uint32 tif_flags;
    toff_t tif_diroff;
    toff_t tif_nextdiroff;
    TIFFDirectory tif_dir;
    TIFFHeader tif_header;
    tidata_t tif_clientdir;
    const int *tif_typeshift;
    const long *tif_typemask;
    uint32 tif_row;
    tdir_t tif_curdir;
    tstrip_t tif_curstrip;
    toff_t tif_curoff;
    toff_t tif_dataoff;
    uint16 tif_nsubifd;
    toff_t tif_subifdoff;
    uint32 tif_col;
    ttile_t tif_curtile;
    tsize_t tif_tilesize;
    TIFFBoolMethod tif_setupdecode;
    TIFFPreMethod tif_predecode;
    TIFFBoolMethod tif_setupencode;
    TIFFPreMethod tif_preencode;
    TIFFBoolMethod tif_postencode;
    TIFFCodeMethod tif_decoderow;
    TIFFCodeMethod tif_encoderow;
    TIFFCodeMethod tif_decodestrip;
    TIFFCodeMethod tif_encodestrip;
    TIFFCodeMethod tif_decodetile;
    TIFFCodeMethod tif_encodetile;
    TIFFVoidMethod tif_close;
    TIFFSeekMethod tif_seek;
    TIFFVoidMethod tif_cleanup;
    TIFFStripMethod tif_defstripsize;
    TIFFTileMethod tif_deftilesize;
    tidata_t tif_data;
    tsize_t tif_scanlinesize;
    tsize_t tif_scanlineskew;
    tidata_t tif_rawdata;
    tsize_t tif_rawdatasize;
    tidata_t tif_rawcp;
    tsize_t tif_rawcc;
    tidata_t tif_base;
    toff_t tif_size;
    TIFFMapFileProc tif_mapproc;
    TIFFUnmapFileProc tif_unmapproc;
    thandle_t tif_clientdata;
    TIFFReadWriteProc tif_readproc;
    TIFFReadWriteProc tif_writeproc;
    TIFFSeekProc tif_seekproc;
    TIFFCloseProc tif_closeproc;
    TIFFSizeProc tif_sizeproc;
    TIFFPostMethod tif_postdecode;
    TIFFFieldInfo **tif_fieldinfo;
    int tif_nfields;
    TIFFVSetMethod tif_vsetfield;
    TIFFVGetMethod tif_vgetfield;
    TIFFPrintMethod tif_printdir;
};
extern int _TIFFgetMode(const char *, const char *);
extern int _TIFFNoRowEncode(TIFF *, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoStripEncode(TIFF *, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoTileEncode(TIFF *, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoRowDecode(TIFF *, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoStripDecode(TIFF *, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoTileDecode(TIFF *, tidata_t, tsize_t, tsample_t);
extern void _TIFFNoPostDecode(TIFF *, tidata_t, tsize_t);
extern int _TIFFNoPreCode(TIFF *, tsample_t);
extern int _TIFFNoSeek(TIFF *, uint32);
extern void _TIFFSwab16BitData(TIFF *, tidata_t, tsize_t);
extern void _TIFFSwab32BitData(TIFF *, tidata_t, tsize_t);
extern void _TIFFSwab64BitData(TIFF *, tidata_t, tsize_t);
extern int TIFFFlushData1(TIFF *);
extern void TIFFFreeDirectory(TIFF *);
extern int TIFFDefaultDirectory(TIFF *);
extern int TIFFSetCompressionScheme(TIFF *, int);
extern int TIFFSetDefaultCompressionState(TIFF *);
extern uint32 _TIFFDefaultStripSize(TIFF *, uint32);
extern void _TIFFDefaultTileSize(TIFF *, uint32 *, uint32 *);
extern void _TIFFsetByteArray(void **, void *, long);
extern void _TIFFsetString(char **, char *);
extern void _TIFFsetShortArray(uint16 **, uint16 *, long);
extern void _TIFFsetLongArray(uint32 **, uint32 *, long);
extern void _TIFFsetFloatArray(float **, float *, long);
extern void _TIFFsetDoubleArray(double **, double *, long);
extern void _TIFFprintAscii(FILE *, const char *);
extern void _TIFFprintAsciiTag(FILE *, const char *, const char *);
extern TIFFErrorHandler _TIFFwarningHandler;
extern TIFFErrorHandler _TIFFerrorHandler;
extern int TIFFInitDumpMode(TIFF *, int);
extern int TIFFInitPackBits(TIFF *, int);
extern int TIFFInitCCITTRLE(TIFF *, int), TIFFInitCCITTRLEW(TIFF *, int);
extern int TIFFInitCCITTFax3(TIFF *, int), TIFFInitCCITTFax4(TIFF *, int);
extern int TIFFInitThunderScan(TIFF *, int);
extern int TIFFInitNeXT(TIFF *, int);
extern int TIFFInitLZW(TIFF *, int);
extern int TIFFInitSGILog(TIFF *, int);
extern TIFFCodec _TIFFBuiltinCODECS[];
void _TIFFsetByteArray(void **vpp, void *vp, long n)
{
    if (*vpp)
	_TIFFfree(*vpp), *vpp = 0;
    if (vp && (*vpp = (void *) _TIFFmalloc(n)))
	_TIFFmemcpy(*vpp, vp, n);
} void _TIFFsetString(char **cpp, char *cp)
{
    _TIFFsetByteArray((void **) cpp, (void *) cp, (long) (strlen(cp) + 1));
} void _TIFFsetNString(char **cpp, char *cp, long n)
{
    _TIFFsetByteArray((void **) cpp, (void *) cp, n);
} void _TIFFsetShortArray(uint16 ** wpp, uint16 * wp, long n)
{
    _TIFFsetByteArray((void **) wpp, (void *) wp, n * sizeof(uint16));
}

void _TIFFsetLongArray(uint32 ** lpp, uint32 * lp, long n)
{
    _TIFFsetByteArray((void **) lpp, (void *) lp, n * sizeof(uint32));
}

void _TIFFsetFloatArray(float **fpp, float *fp, long n)
{
    _TIFFsetByteArray((void **) fpp, (void *) fp, n * sizeof(float));
} void _TIFFsetDoubleArray(double **dpp, double *dp, long n)
{
    _TIFFsetByteArray((void **) dpp, (void *) dp, n * sizeof(double));
} 
//complexity is O(n) inferred by loopus
static int setExtraSamples(TIFFDirectory * td, va_list ap, int *v)
{
    uint16 *va;
    int i;
    *v = __builtin_va_arg(ap, int);
    if ((uint16) * v > td->td_samplesperpixel)
	return (0);
    va = __builtin_va_arg(ap, uint16 *);
    if (*v > 0 && va == ((void *) 0))
	return (0);
    for (i = 0; i < *v; i++)
	if (va[i] > 2)
	    return (0);
    td->td_extrasamples = (uint16) * v;
    _TIFFsetShortArray(&td->td_sampleinfo, va, td->td_extrasamples);
    return (1);
}
//complexity is O(n) inferred by loopus
static int checkInkNamesString(TIFF * tif, int slen, const char *s)
{
    TIFFDirectory *td = &tif->tif_dir;
    int i = td->td_samplesperpixel;
    if (slen > 0) {
	const char *ep = s + slen;
	const char *cp = s;
	for (; i > 0; i--) {
	    for (; *cp != '\0'; cp++)
		if (cp >= ep)
		    goto bad;
	    cp++;
	}
	return (cp - s);
    }
  bad:TIFFError("TIFFSetField", "%s: Invalid InkNames value; expecting %d names, found %d", tif->tif_name, td->td_samplesperpixel, td->td_samplesperpixel - i);
    return (0);
}
//complexity is O(n) inferred by loopus
static int _TIFFVSetField(TIFF * tif, ttag_t tag, va_list ap)
{
    TIFFDirectory *td = &tif->tif_dir;
    int status = 1;
    uint32 v32;
    int i, v;
    double d;
    char *s;
    switch (tag) {
    case 254:
	td->td_subfiletype = __builtin_va_arg(ap, uint32);
	break;
    case 256:
	td->td_imagewidth = __builtin_va_arg(ap, uint32);
	break;
    case 257:
	td->td_imagelength = __builtin_va_arg(ap, uint32);
	break;
    case 258:
	td->td_bitspersample = (uint16) __builtin_va_arg(ap, int);
	if (tif->tif_flags & 0x0080) {
	    if (td->td_bitspersample == 16)
		tif->tif_postdecode = _TIFFSwab16BitData;
	    else if (td->td_bitspersample == 32)
		tif->tif_postdecode = _TIFFSwab32BitData;
	    else if (td->td_bitspersample == 64)
		tif->tif_postdecode = _TIFFSwab64BitData;
	}
	break;
    case 259:
	v = __builtin_va_arg(ap, int) & 0xffff;
	if ((((tif)->tif_dir.td_fieldsset[(7) / 32]) & (((u_long) 1L) << ((7) & 0x1f)))) {
	    if (td->td_compression == v)
		break;
	    (*tif->tif_cleanup) (tif);
	    tif->tif_flags &= ~0x0020;
	}
	if (!tif->tif_mode == 00) {
	    if (v == 5) {
		TIFFError(tif->tif_name, "LZW compression no longer supported due to Unisys patent enforcement");
		v = 1;
	    }
	}
	if ((status = TIFFSetCompressionScheme(tif, v)) != 0)
	    td->td_compression = v;
	break;
    case 262:
	td->td_photometric = (uint16) __builtin_va_arg(ap, int);
	break;
    case 263:
	td->td_threshholding = (uint16) __builtin_va_arg(ap, int);
	break;
    case 266:
	v = __builtin_va_arg(ap, int);
	if (v != 2 && v != 1)
	    goto badvalue;
	td->td_fillorder = (uint16) v;
	break;
    case 269:
	_TIFFsetString(&td->td_documentname, __builtin_va_arg(ap, char *));
	break;
    case 315:
	_TIFFsetString(&td->td_artist, __builtin_va_arg(ap, char *));
	break;
    case 306:
	_TIFFsetString(&td->td_datetime, __builtin_va_arg(ap, char *));
	break;
    case 316:
	_TIFFsetString(&td->td_hostcomputer, __builtin_va_arg(ap, char *));
	break;
    case 270:
	_TIFFsetString(&td->td_imagedescription, __builtin_va_arg(ap, char *));
	break;
    case 271:
	_TIFFsetString(&td->td_make, __builtin_va_arg(ap, char *));
	break;
    case 272:
	_TIFFsetString(&td->td_model, __builtin_va_arg(ap, char *));
	break;
    case 305:
	_TIFFsetString(&td->td_software, __builtin_va_arg(ap, char *));
	break;
    case 274:
	v = __builtin_va_arg(ap, int);
	if (v < 1 || 8 < v) {
	    TIFFWarning(tif->tif_name, "Bad value %ld for \"%s\" tag ignored", v, _TIFFFieldWithTag(tif, tag)->field_name);
	} else
	    td->td_orientation = (uint16) v;
	break;
    case 277:
	v = __builtin_va_arg(ap, int);
	if (v == 0)
	    goto badvalue;
	td->td_samplesperpixel = (uint16) v;
	break;
    case 278:
	v32 = __builtin_va_arg(ap, uint32);
	if (v32 == 0)
	    goto badvalue32;
	td->td_rowsperstrip = v32;
	if (!(((tif)->tif_dir.td_fieldsset[(2) / 32]) & (((u_long) 1L) << ((2) & 0x1f)))) {
	    td->td_tilelength = v32;
	    td->td_tilewidth = td->td_imagewidth;
	}
	break;
    case 280:
	td->td_minsamplevalue = (uint16) __builtin_va_arg(ap, int);
	break;
    case 281:
	td->td_maxsamplevalue = (uint16) __builtin_va_arg(ap, int);
	break;
    case 340:
	td->td_sminsamplevalue = (double) __builtin_va_arg(ap, dblparam_t);
	break;
    case 341:
	td->td_smaxsamplevalue = (double) __builtin_va_arg(ap, dblparam_t);
	break;
    case 282:
	td->td_xresolution = (float) __builtin_va_arg(ap, dblparam_t);
	break;
    case 283:
	td->td_yresolution = (float) __builtin_va_arg(ap, dblparam_t);
	break;
    case 284:
	v = __builtin_va_arg(ap, int);
	if (v != 1 && v != 2)
	    goto badvalue;
	td->td_planarconfig = (uint16) v;
	break;
    case 285:
	_TIFFsetString(&td->td_pagename, __builtin_va_arg(ap, char *));
	break;
    case 286:
	td->td_xposition = (float) __builtin_va_arg(ap, dblparam_t);
	break;
    case 287:
	td->td_yposition = (float) __builtin_va_arg(ap, dblparam_t);
	break;
    case 296:
	v = __builtin_va_arg(ap, int);
	if (v < 1 || 3 < v)
	    goto badvalue;
	td->td_resolutionunit = (uint16) v;
	break;
    case 297:
	td->td_pagenumber[0] = (uint16) __builtin_va_arg(ap, int);
	td->td_pagenumber[1] = (uint16) __builtin_va_arg(ap, int);
	break;
    case 321:
	td->td_halftonehints[0] = (uint16) __builtin_va_arg(ap, int);
	td->td_halftonehints[1] = (uint16) __builtin_va_arg(ap, int);
	break;
    case 320:
	v32 = (uint32) (1L << td->td_bitspersample);
	_TIFFsetShortArray(&td->td_colormap[0], __builtin_va_arg(ap, uint16 *), v32);
	_TIFFsetShortArray(&td->td_colormap[1], __builtin_va_arg(ap, uint16 *), v32);
	_TIFFsetShortArray(&td->td_colormap[2], __builtin_va_arg(ap, uint16 *), v32);
	break;
    case 338:
	if (!setExtraSamples(td, ap, &v))
	    goto badvalue;
	break;
    case 32995:
	td->td_extrasamples = (uint16) (__builtin_va_arg(ap, int) != 0);
	if (td->td_extrasamples) {
	    uint16 sv = 1;
	    _TIFFsetShortArray(&td->td_sampleinfo, &sv, 1);
	}
	break;
    case 322:
	v32 = __builtin_va_arg(ap, uint32);
	if (v32 % 16) {
	    if (tif->tif_mode != 00)
		goto badvalue32;
	    TIFFWarning(tif->tif_name, "Nonstandard tile width %d, convert file", v32);
	}
	td->td_tilewidth = v32;
	tif->tif_flags |= 0x0400;
	break;
    case 323:
	v32 = __builtin_va_arg(ap, uint32);
	if (v32 % 16) {
	    if (tif->tif_mode != 00)
		goto badvalue32;
	    TIFFWarning(tif->tif_name, "Nonstandard tile length %d, convert file", v32);
	}
	td->td_tilelength = v32;
	tif->tif_flags |= 0x0400;
	break;
    case 32998:
	v32 = __builtin_va_arg(ap, uint32);
	if (v32 == 0)
	    goto badvalue32;
	td->td_tiledepth = v32;
	break;
    case 32996:
	v = __builtin_va_arg(ap, int);
	switch (v) {
	case 0:
	    v = 4;
	    break;
	case 1:
	    v = 2;
	    break;
	case 2:
	    v = 1;
	    break;
	case 3:
	    v = 3;
	    break;
	default:
	    goto badvalue;
	}
	td->td_sampleformat = (uint16) v;
	break;
    case 339:
	v = __builtin_va_arg(ap, int);
	if (v < 1 || 4 < v)
	    goto badvalue;
	td->td_sampleformat = (uint16) v;
	break;
    case 32997:
	td->td_imagedepth = __builtin_va_arg(ap, uint32);
	break;
    case 37439:
	d = __builtin_va_arg(ap, dblparam_t);
	if (d <= 0.)
	    goto badvaluedbl;
	td->td_stonits = d;
	break;
    case 33300:
	td->td_imagefullwidth = __builtin_va_arg(ap, uint32);
	break;
    case 33301:
	td->td_imagefulllength = __builtin_va_arg(ap, uint32);
	break;
    case 33302:
	_TIFFsetString(&td->td_textureformat, __builtin_va_arg(ap, char *));
	break;
    case 33303:
	_TIFFsetString(&td->td_wrapmodes, __builtin_va_arg(ap, char *));
	break;
    case 33304:
	td->td_fovcot = (float) __builtin_va_arg(ap, dblparam_t);
	break;
    case 33305:
	_TIFFsetFloatArray(&td->td_matrixWorldToScreen, __builtin_va_arg(ap, float *), 16);
	break;
    case 33306:
	_TIFFsetFloatArray(&td->td_matrixWorldToCamera, __builtin_va_arg(ap, float *), 16);
	break;
    case 330:
	if ((tif->tif_flags & 0x2000) == 0) {
	    td->td_nsubifd = (uint16) __builtin_va_arg(ap, int);
	    _TIFFsetLongArray(&td->td_subifd, __builtin_va_arg(ap, uint32 *), (long) td->td_nsubifd);
	} else {
	    TIFFError(tif->tif_name, "Sorry, cannot nest SubIFDs");
	    status = 0;
	}
	break;
    case 529:
	_TIFFsetFloatArray(&td->td_ycbcrcoeffs, __builtin_va_arg(ap, float *), 3);
	break;
    case 531:
	td->td_ycbcrpositioning = (uint16) __builtin_va_arg(ap, int);
	break;
    case 530:
	td->td_ycbcrsubsampling[0] = (uint16) __builtin_va_arg(ap, int);
	td->td_ycbcrsubsampling[1] = (uint16) __builtin_va_arg(ap, int);
	break;
    case 318:
	_TIFFsetFloatArray(&td->td_whitepoint, __builtin_va_arg(ap, float *), 2);
	break;
    case 319:
	_TIFFsetFloatArray(&td->td_primarychromas, __builtin_va_arg(ap, float *), 6);
	break;
    case 301:
	v = (td->td_samplesperpixel - td->td_extrasamples) > 1 ? 3 : 1;
	for (i = 0; i < v; i++)
	    _TIFFsetShortArray(&td->td_transferfunction[i], __builtin_va_arg(ap, uint16 *), 1L << td->td_bitspersample);
	break;
    case 532:
	_TIFFsetFloatArray(&td->td_refblackwhite, __builtin_va_arg(ap, float *), 6);
	break;
    case 332:
	td->td_inkset = (uint16) __builtin_va_arg(ap, int);
	break;
    case 336:
	td->td_dotrange[0] = (uint16) __builtin_va_arg(ap, int);
	td->td_dotrange[1] = (uint16) __builtin_va_arg(ap, int);
	break;
    case 333:
	i = __builtin_va_arg(ap, int);
	s = __builtin_va_arg(ap, char *);
	i = checkInkNamesString(tif, i, s);
	status = i > 0;
	if (i > 0) {
	    _TIFFsetNString(&td->td_inknames, s, i);
	    td->td_inknameslen = i;
	}
	break;
    case 334:
	td->td_ninks = (uint16) __builtin_va_arg(ap, int);
	break;
    case 337:
	_TIFFsetString(&td->td_targetprinter, __builtin_va_arg(ap, char *));
	break;
    case 34675:
	td->td_profileLength = (uint32) __builtin_va_arg(ap, uint32);
	_TIFFsetByteArray(&td->td_profileData, __builtin_va_arg(ap, void *), td->td_profileLength);
	break;
    case 34377:
	td->td_photoshopLength = (uint32) __builtin_va_arg(ap, uint32);
	_TIFFsetByteArray(&td->td_photoshopData, __builtin_va_arg(ap, void *), td->td_photoshopLength);
	break;
    case 33723:
	td->td_richtiffiptcLength = (uint32) __builtin_va_arg(ap, uint32);
	_TIFFsetLongArray((uint32 **) & td->td_richtiffiptcData, __builtin_va_arg(ap, uint32 *), td->td_richtiffiptcLength);
	break;
    default:
	TIFFError("TIFFSetField", "%s: Invalid %stag \"%s\" (not supported by codec)", tif->tif_name, (tag > 0xffff) ? "pseduo-" : "", _TIFFFieldWithTag(tif, tag)->field_name);
	status = 0;
	break;
    }
    if (status) {
	(((tif)->tif_dir.td_fieldsset[(_TIFFFieldWithTag(tif, tag)->field_bit) / 32]) |= (((u_long) 1L) << ((_TIFFFieldWithTag(tif, tag)->field_bit) & 0x1f)));
	tif->tif_flags |= 0x0008;
    }
    __builtin_va_end(ap);
    return (status);
  badvalue:TIFFError(tif->tif_name, "%d: Bad value for \"%s\"", v, _TIFFFieldWithTag(tif, tag)->field_name);
    __builtin_va_end(ap);
    return (0);
  badvalue32:TIFFError(tif->tif_name, "%ld: Bad value for \"%s\"", v32, _TIFFFieldWithTag(tif, tag)->field_name);
    __builtin_va_end(ap);
    return (0);
  badvaluedbl:TIFFError(tif->tif_name, "%f: Bad value for \"%s\"", d, _TIFFFieldWithTag(tif, tag)->field_name);
    __builtin_va_end(ap);
    return (0);
}

static int OkToChangeTag(TIFF * tif, ttag_t tag)
{
    const TIFFFieldInfo *fip = _TIFFFindFieldInfo(tif, tag, TIFF_NOTYPE);
    if (!fip) {
	TIFFError("TIFFSetField", "%s: Unknown %stag %u", tif->tif_name, (tag > 0xffff) ? "pseudo-" : "", tag);
	return (0);
    }
    if (tag != 257 && (tif->tif_flags & 0x0040) && !fip->field_oktochange) {
	TIFFError("TIFFSetField", "%s: Cannot modify tag \"%s\" while writing", tif->tif_name, fip->field_name);
	return (0);
    }
    return (1);
}

int TIFFSetField(TIFF * tif, ttag_t tag, ...)
{
    va_list ap;
    int status;
    __builtin_va_start(ap, tag);
    status = TIFFVSetField(tif, tag, ap);
    __builtin_va_end(ap);
    return (status);
}

int TIFFVSetField(TIFF * tif, ttag_t tag, va_list ap)
{
    return OkToChangeTag(tif, tag) ? (*tif->tif_vsetfield) (tif, tag, ap) : 0;
}

static int _TIFFVGetField(TIFF * tif, ttag_t tag, va_list ap)
{
    TIFFDirectory *td = &tif->tif_dir;
    switch (tag) {
    case 254:
	*__builtin_va_arg(ap, uint32 *) = td->td_subfiletype;
	break;
    case 256:
	*__builtin_va_arg(ap, uint32 *) = td->td_imagewidth;
	break;
    case 257:
	*__builtin_va_arg(ap, uint32 *) = td->td_imagelength;
	break;
    case 258:
	*__builtin_va_arg(ap, uint16 *) = td->td_bitspersample;
	break;
    case 259:
	*__builtin_va_arg(ap, uint16 *) = td->td_compression;
	break;
    case 262:
	*__builtin_va_arg(ap, uint16 *) = td->td_photometric;
	break;
    case 263:
	*__builtin_va_arg(ap, uint16 *) = td->td_threshholding;
	break;
    case 266:
	*__builtin_va_arg(ap, uint16 *) = td->td_fillorder;
	break;
    case 269:
	*__builtin_va_arg(ap, char **) = td->td_documentname;
	break;
    case 315:
	*__builtin_va_arg(ap, char **) = td->td_artist;
	break;
    case 306:
	*__builtin_va_arg(ap, char **) = td->td_datetime;
	break;
    case 316:
	*__builtin_va_arg(ap, char **) = td->td_hostcomputer;
	break;
    case 270:
	*__builtin_va_arg(ap, char **) = td->td_imagedescription;
	break;
    case 271:
	*__builtin_va_arg(ap, char **) = td->td_make;
	break;
    case 272:
	*__builtin_va_arg(ap, char **) = td->td_model;
	break;
    case 305:
	*__builtin_va_arg(ap, char **) = td->td_software;
	break;
    case 274:
	*__builtin_va_arg(ap, uint16 *) = td->td_orientation;
	break;
    case 277:
	*__builtin_va_arg(ap, uint16 *) = td->td_samplesperpixel;
	break;
    case 278:
	*__builtin_va_arg(ap, uint32 *) = td->td_rowsperstrip;
	break;
    case 280:
	*__builtin_va_arg(ap, uint16 *) = td->td_minsamplevalue;
	break;
    case 281:
	*__builtin_va_arg(ap, uint16 *) = td->td_maxsamplevalue;
	break;
    case 340:
	*__builtin_va_arg(ap, double *) = td->td_sminsamplevalue;
	break;
    case 341:
	*__builtin_va_arg(ap, double *) = td->td_smaxsamplevalue;
	break;
    case 282:
	*__builtin_va_arg(ap, float *) = td->td_xresolution;
	break;
    case 283:
	*__builtin_va_arg(ap, float *) = td->td_yresolution;
	break;
    case 284:
	*__builtin_va_arg(ap, uint16 *) = td->td_planarconfig;
	break;
    case 286:
	*__builtin_va_arg(ap, float *) = td->td_xposition;
	break;
    case 287:
	*__builtin_va_arg(ap, float *) = td->td_yposition;
	break;
    case 285:
	*__builtin_va_arg(ap, char **) = td->td_pagename;
	break;
    case 296:
	*__builtin_va_arg(ap, uint16 *) = td->td_resolutionunit;
	break;
    case 297:
	*__builtin_va_arg(ap, uint16 *) = td->td_pagenumber[0];
	*__builtin_va_arg(ap, uint16 *) = td->td_pagenumber[1];
	break;
    case 321:
	*__builtin_va_arg(ap, uint16 *) = td->td_halftonehints[0];
	*__builtin_va_arg(ap, uint16 *) = td->td_halftonehints[1];
	break;
    case 320:
	*__builtin_va_arg(ap, uint16 **) = td->td_colormap[0];
	*__builtin_va_arg(ap, uint16 **) = td->td_colormap[1];
	*__builtin_va_arg(ap, uint16 **) = td->td_colormap[2];
	break;
    case 273:
    case 324:
	*__builtin_va_arg(ap, uint32 **) = td->td_stripoffset;
	break;
    case 279:
    case 325:
	*__builtin_va_arg(ap, uint32 **) = td->td_stripbytecount;
	break;
    case 32995:
	*__builtin_va_arg(ap, uint16 *) = (td->td_extrasamples == 1 && td->td_sampleinfo[0] == 1);
	break;
    case 338:
	*__builtin_va_arg(ap, uint16 *) = td->td_extrasamples;
	*__builtin_va_arg(ap, uint16 **) = td->td_sampleinfo;
	break;
    case 322:
	*__builtin_va_arg(ap, uint32 *) = td->td_tilewidth;
	break;
    case 323:
	*__builtin_va_arg(ap, uint32 *) = td->td_tilelength;
	break;
    case 32998:
	*__builtin_va_arg(ap, uint32 *) = td->td_tiledepth;
	break;
    case 32996:
	switch (td->td_sampleformat) {
	case 1:
	    *__builtin_va_arg(ap, uint16 *) = 2;
	    break;
	case 2:
	    *__builtin_va_arg(ap, uint16 *) = 1;
	    break;
	case 3:
	    *__builtin_va_arg(ap, uint16 *) = 3;
	    break;
	case 4:
	    *__builtin_va_arg(ap, uint16 *) = 0;
	    break;
	}
	break;
    case 339:
	*__builtin_va_arg(ap, uint16 *) = td->td_sampleformat;
	break;
    case 32997:
	*__builtin_va_arg(ap, uint32 *) = td->td_imagedepth;
	break;
    case 37439:
	*__builtin_va_arg(ap, double *) = td->td_stonits;
	break;
    case 330:
	*__builtin_va_arg(ap, uint16 *) = td->td_nsubifd;
	*__builtin_va_arg(ap, uint32 **) = td->td_subifd;
	break;
    case 529:
	*__builtin_va_arg(ap, float **) = td->td_ycbcrcoeffs;
	break;
    case 531:
	*__builtin_va_arg(ap, uint16 *) = td->td_ycbcrpositioning;
	break;
    case 530:
	*__builtin_va_arg(ap, uint16 *) = td->td_ycbcrsubsampling[0];
	*__builtin_va_arg(ap, uint16 *) = td->td_ycbcrsubsampling[1];
	break;
    case 318:
	*__builtin_va_arg(ap, float **) = td->td_whitepoint;
	break;
    case 319:
	*__builtin_va_arg(ap, float **) = td->td_primarychromas;
	break;
    case 301:
	*__builtin_va_arg(ap, uint16 **) = td->td_transferfunction[0];
	if (td->td_samplesperpixel - td->td_extrasamples > 1) {
	    *__builtin_va_arg(ap, uint16 **) = td->td_transferfunction[1];
	    *__builtin_va_arg(ap, uint16 **) = td->td_transferfunction[2];
	}
	break;
    case 532:
	*__builtin_va_arg(ap, float **) = td->td_refblackwhite;
	break;
    case 332:
	*__builtin_va_arg(ap, uint16 *) = td->td_inkset;
	break;
    case 336:
	*__builtin_va_arg(ap, uint16 *) = td->td_dotrange[0];
	*__builtin_va_arg(ap, uint16 *) = td->td_dotrange[1];
	break;
    case 333:
	*__builtin_va_arg(ap, char **) = td->td_inknames;
	break;
    case 334:
	*__builtin_va_arg(ap, uint16 *) = td->td_ninks;
	break;
    case 337:
	*__builtin_va_arg(ap, char **) = td->td_targetprinter;
	break;
    case 34675:
	*__builtin_va_arg(ap, uint32 *) = td->td_profileLength;
	*__builtin_va_arg(ap, void **) = td->td_profileData;
	break;
    case 34377:
	*__builtin_va_arg(ap, uint32 *) = td->td_photoshopLength;
	*__builtin_va_arg(ap, void **) = td->td_photoshopData;
	break;
    case 33723:
	*__builtin_va_arg(ap, uint32 *) = td->td_richtiffiptcLength;
	*__builtin_va_arg(ap, void **) = td->td_richtiffiptcData;
	break;
    case 33300:
	*__builtin_va_arg(ap, uint32 *) = td->td_imagefullwidth;
	break;
    case 33301:
	*__builtin_va_arg(ap, uint32 *) = td->td_imagefulllength;
	break;
    case 33302:
	*__builtin_va_arg(ap, char **) = td->td_textureformat;
	break;
    case 33303:
	*__builtin_va_arg(ap, char **) = td->td_wrapmodes;
	break;
    case 33304:
	*__builtin_va_arg(ap, float *) = td->td_fovcot;
	break;
    case 33305:
	*__builtin_va_arg(ap, float **) = td->td_matrixWorldToScreen;
	break;
    case 33306:
	*__builtin_va_arg(ap, float **) = td->td_matrixWorldToCamera;
	break;
    default:
	TIFFError("TIFFGetField", "%s: Invalid %stag \"%s\" (not supported by codec)", tif->tif_name, (tag > 0xffff) ? "pseudo-" : "", _TIFFFieldWithTag(tif, tag)->field_name);
	break;
    }
    return (1);
}

int TIFFGetField(TIFF * tif, ttag_t tag, ...)
{
    int status;
    va_list ap;
    __builtin_va_start(ap, tag);
    status = TIFFVGetField(tif, tag, ap);
    __builtin_va_end(ap);
    return (status);
}

int TIFFVGetField(TIFF * tif, ttag_t tag, va_list ap)
{
    const TIFFFieldInfo *fip = _TIFFFindFieldInfo(tif, tag, TIFF_NOTYPE);
    return (fip && ((tag > 0xffff) || (((tif)->tif_dir.td_fieldsset[(fip->field_bit) / 32]) & (((u_long) 1L) << ((fip->field_bit) & 0x1f)))) ? (*tif->tif_vgetfield) (tif, tag, ap) : 0);
}

void TIFFFreeDirectory(TIFF * tif)
{
    register TIFFDirectory *td = &tif->tif_dir; {
	if (td->td_colormap[0]) {
	    _TIFFfree(td->td_colormap[0]);
	    td->td_colormap[0] = 0;
	}
    }; {
	if (td->td_colormap[1]) {
	    _TIFFfree(td->td_colormap[1]);
	    td->td_colormap[1] = 0;
	}
    }; {
	if (td->td_colormap[2]) {
	    _TIFFfree(td->td_colormap[2]);
	    td->td_colormap[2] = 0;
	}
    }; {
	if (td->td_documentname) {
	    _TIFFfree(td->td_documentname);
	    td->td_documentname = 0;
	}
    }; {
	if (td->td_artist) {
	    _TIFFfree(td->td_artist);
	    td->td_artist = 0;
	}
    }; {
	if (td->td_datetime) {
	    _TIFFfree(td->td_datetime);
	    td->td_datetime = 0;
	}
    }; {
	if (td->td_hostcomputer) {
	    _TIFFfree(td->td_hostcomputer);
	    td->td_hostcomputer = 0;
	}
    }; {
	if (td->td_imagedescription) {
	    _TIFFfree(td->td_imagedescription);
	    td->td_imagedescription = 0;
	}
    }; {
	if (td->td_make) {
	    _TIFFfree(td->td_make);
	    td->td_make = 0;
	}
    }; {
	if (td->td_model) {
	    _TIFFfree(td->td_model);
	    td->td_model = 0;
	}
    }; {
	if (td->td_software) {
	    _TIFFfree(td->td_software);
	    td->td_software = 0;
	}
    }; {
	if (td->td_pagename) {
	    _TIFFfree(td->td_pagename);
	    td->td_pagename = 0;
	}
    }; {
	if (td->td_sampleinfo) {
	    _TIFFfree(td->td_sampleinfo);
	    td->td_sampleinfo = 0;
	}
    }; {
	if (td->td_subifd) {
	    _TIFFfree(td->td_subifd);
	    td->td_subifd = 0;
	}
    }; {
	if (td->td_ycbcrcoeffs) {
	    _TIFFfree(td->td_ycbcrcoeffs);
	    td->td_ycbcrcoeffs = 0;
	}
    }; {
	if (td->td_inknames) {
	    _TIFFfree(td->td_inknames);
	    td->td_inknames = 0;
	}
    }; {
	if (td->td_targetprinter) {
	    _TIFFfree(td->td_targetprinter);
	    td->td_targetprinter = 0;
	}
    }; {
	if (td->td_whitepoint) {
	    _TIFFfree(td->td_whitepoint);
	    td->td_whitepoint = 0;
	}
    }; {
	if (td->td_primarychromas) {
	    _TIFFfree(td->td_primarychromas);
	    td->td_primarychromas = 0;
	}
    }; {
	if (td->td_refblackwhite) {
	    _TIFFfree(td->td_refblackwhite);
	    td->td_refblackwhite = 0;
	}
    }; {
	if (td->td_transferfunction[0]) {
	    _TIFFfree(td->td_transferfunction[0]);
	    td->td_transferfunction[0] = 0;
	}
    }; {
	if (td->td_transferfunction[1]) {
	    _TIFFfree(td->td_transferfunction[1]);
	    td->td_transferfunction[1] = 0;
	}
    }; {
	if (td->td_transferfunction[2]) {
	    _TIFFfree(td->td_transferfunction[2]);
	    td->td_transferfunction[2] = 0;
	}
    }; {
	if (td->td_profileData) {
	    _TIFFfree(td->td_profileData);
	    td->td_profileData = 0;
	}
    }; {
	if (td->td_photoshopData) {
	    _TIFFfree(td->td_photoshopData);
	    td->td_photoshopData = 0;
	}
    }; {
	if (td->td_richtiffiptcData) {
	    _TIFFfree(td->td_richtiffiptcData);
	    td->td_richtiffiptcData = 0;
	}
    }; {
	if (td->td_stripoffset) {
	    _TIFFfree(td->td_stripoffset);
	    td->td_stripoffset = 0;
	}
    }; {
	if (td->td_stripbytecount) {
	    _TIFFfree(td->td_stripbytecount);
	    td->td_stripbytecount = 0;
	}
    }; {
	if (td->td_textureformat) {
	    _TIFFfree(td->td_textureformat);
	    td->td_textureformat = 0;
	}
    }; {
	if (td->td_wrapmodes) {
	    _TIFFfree(td->td_wrapmodes);
	    td->td_wrapmodes = 0;
	}
    }; {
	if (td->td_matrixWorldToScreen) {
	    _TIFFfree(td->td_matrixWorldToScreen);
	    td->td_matrixWorldToScreen = 0;
	}
    }; {
	if (td->td_matrixWorldToCamera) {
	    _TIFFfree(td->td_matrixWorldToCamera);
	    td->td_matrixWorldToCamera = 0;
	}
    };
}

static TIFFExtendProc _TIFFextender = (TIFFExtendProc) ((void *) 0);
TIFFExtendProc TIFFSetTagExtender(TIFFExtendProc extender)
{
    TIFFExtendProc prev = _TIFFextender;
    _TIFFextender = extender;
    return (prev);
}

int TIFFDefaultDirectory(TIFF * tif)
{
    register TIFFDirectory *td = &tif->tif_dir;
    _TIFFSetupFieldInfo(tif);
    _TIFFmemset(td, 0, sizeof(*td));
    td->td_fillorder = 1;
    td->td_bitspersample = 1;
    td->td_threshholding = 1;
    td->td_orientation = 1;
    td->td_samplesperpixel = 1;
    td->td_rowsperstrip = (uint32) - 1;
    td->td_tilewidth = (uint32) - 1;
    td->td_tilelength = (uint32) - 1;
    td->td_tiledepth = 1;
    td->td_resolutionunit = 2;
    td->td_sampleformat = 4;
    td->td_imagedepth = 1;
    td->td_ycbcrsubsampling[0] = 2;
    td->td_ycbcrsubsampling[1] = 2;
    td->td_ycbcrpositioning = 1;
    td->td_inkset = 1;
    td->td_ninks = 4;
    tif->tif_postdecode = _TIFFNoPostDecode;
    tif->tif_vsetfield = _TIFFVSetField;
    tif->tif_vgetfield = _TIFFVGetField;
    tif->tif_printdir = ((void *) 0);
    if (_TIFFextender)
	(*_TIFFextender) (tif);
    (void) TIFFSetField(tif, 259, 1);
    tif->tif_flags &= ~0x0008;
    return (1);
}

static int TIFFAdvanceDirectory(TIFF * tif, uint32 * nextdir, toff_t * off)
{
    static const char module[] = "TIFFAdvanceDirectory";
    uint16 dircount;
    if ((((tif)->tif_flags & 0x0800) != 0)) {
	tsize_t poff = *nextdir;
	if (((tsize_t) (poff + sizeof(uint16))) > tif->tif_size) {
	    TIFFError(module, "%s: Error fetching directory count", tif->tif_name);
	    return (0);
	}
	_TIFFmemcpy(&dircount, tif->tif_base + poff, sizeof(uint16));
	if (tif->tif_flags & 0x0080)
	    TIFFSwabShort(&dircount);
	poff += sizeof(uint16) + dircount * sizeof(TIFFDirEntry);
	if (off != ((void *) 0))
	    *off = poff;
	if (((tsize_t) (poff + sizeof(uint32))) > tif->tif_size) {
	    TIFFError(module, "%s: Error fetching directory link", tif->tif_name);
	    return (0);
	}
	_TIFFmemcpy(nextdir, tif->tif_base + poff, sizeof(uint32));
	if (tif->tif_flags & 0x0080)
	    TIFFSwabLong(nextdir);
	return (1);
    } else {
	if (!(((*(tif)->tif_seekproc) ((tif)->tif_clientdata, (toff_t) ((toff_t) * nextdir), 0)) == (toff_t) * nextdir) || !(((*(tif)->tif_readproc) ((tif)->tif_clientdata, (tdata_t) & dircount, (tsize_t) sizeof(uint16))) == (tsize_t) sizeof(uint16))) {
	    TIFFError(module, "%s: Error fetching directory count", tif->tif_name);
	    return (0);
	}
	if (tif->tif_flags & 0x0080)
	    TIFFSwabShort(&dircount);
	if (off != ((void *) 0))
	    *off = ((*(tif)->tif_seekproc) ((tif)->tif_clientdata, (toff_t) (dircount * sizeof(TIFFDirEntry)), 1));
	else
	    (void) ((*(tif)->tif_seekproc) ((tif)->tif_clientdata, (toff_t) (dircount * sizeof(TIFFDirEntry)), 1));
	if (!(((*(tif)->tif_readproc) ((tif)->tif_clientdata, (tdata_t) nextdir, (tsize_t) sizeof(uint32))) == (tsize_t) sizeof(uint32))) {
	    TIFFError(module, "%s: Error fetching directory link", tif->tif_name);
	    return (0);
	}
	if (tif->tif_flags & 0x0080)
	    TIFFSwabLong(nextdir);
	return (1);
    }
}

tdir_t TIFFNumberOfDirectories(TIFF * tif)
{
    uint32 nextdir = tif->tif_header.tiff_diroff;
    tdir_t n = 0;
    while (nextdir != 0 && TIFFAdvanceDirectory(tif, &nextdir, ((void *) 0)))
	n++;
    return (n);
}

int TIFFSetDirectory(TIFF * tif, tdir_t dirn)
{
    uint32 nextdir;
    tdir_t n;
    nextdir = tif->tif_header.tiff_diroff;
    for (n = dirn; n > 0 && nextdir != 0; n--)
	if (!TIFFAdvanceDirectory(tif, &nextdir, ((void *) 0)))
	    return (0);
    tif->tif_nextdiroff = nextdir;
    tif->tif_curdir = (dirn - n) - 1;
    return (TIFFReadDirectory(tif));
}

int TIFFSetSubDirectory(TIFF * tif, uint32 diroff)
{
    tif->tif_nextdiroff = diroff;
    return (TIFFReadDirectory(tif));
}

uint32 TIFFCurrentDirOffset(TIFF * tif)
{
    return (tif->tif_diroff);
}

int TIFFLastDirectory(TIFF * tif)
{
    return (tif->tif_nextdiroff == 0);
}

int TIFFUnlinkDirectory(TIFF * tif, tdir_t dirn)
{
    static const char module[] = "TIFFUnlinkDirectory";
    uint32 nextdir;
    toff_t off;
    tdir_t n;
    if (tif->tif_mode == 00) {
	TIFFError(module, "Can not unlink directory in read-only file");
	return (0);
    }
    nextdir = tif->tif_header.tiff_diroff;
    off = sizeof(uint16) + sizeof(uint16);
    for (n = dirn - 1; n > 0; n--) {
	if (nextdir == 0) {
	    TIFFError(module, "Directory %d does not exist", dirn);
	    return (0);
	}
	if (!TIFFAdvanceDirectory(tif, &nextdir, &off))
	    return (0);
    }
    if (!TIFFAdvanceDirectory(tif, &nextdir, ((void *) 0)))
	return (0);
    (void) ((*(tif)->tif_seekproc) ((tif)->tif_clientdata, (toff_t) (off), 0));
    if (tif->tif_flags & 0x0080)
	TIFFSwabLong(&nextdir);
    if (!(((*(tif)->tif_writeproc) ((tif)->tif_clientdata, (tdata_t) & nextdir, (tsize_t) sizeof(uint32))) == (tsize_t) sizeof(uint32))) {
	TIFFError(module, "Error writing directory link");
	return (0);
    }
    (*tif->tif_cleanup) (tif);
    if ((tif->tif_flags & 0x0200) && tif->tif_rawdata) {
	_TIFFfree(tif->tif_rawdata);
	tif->tif_rawdata = ((void *) 0);
	tif->tif_rawcc = 0;
    }
    tif->tif_flags &= ~(0x0040 | 0x0010 | 0x1000);
    TIFFFreeDirectory(tif);
    TIFFDefaultDirectory(tif);
    tif->tif_diroff = 0;
    tif->tif_nextdiroff = 0;
    tif->tif_curoff = 0;
    tif->tif_row = (uint32) - 1;
    tif->tif_curstrip = (tstrip_t) - 1;
    return (1);
}
//complexity is O(n) inferred by loopus
int TIFFReassignTagToIgnore(enum TIFFIgnoreSense task, int TIFFtagID)
{
    static int TIFFignoretags[(32 * 3 - 1)];
    static int tagcount = 0;
    int i;
    int j;
    switch (task) {
    case TIS_STORE:
	if (tagcount < ((32 * 3 - 1) - 1)) {
	    for (j = 0; j < tagcount; ++j) {
		if (TIFFignoretags[j] == TIFFtagID)
		    return (1);
	    }
	    TIFFignoretags[tagcount++] = TIFFtagID;
	    return (1);
	}
	break;
    case TIS_EXTRACT:
	for (i = 0; i < tagcount; ++i) {
	    if (TIFFignoretags[i] == TIFFtagID)
		return (1);
	}
	break;
    case TIS_EMPTY:
	tagcount = 0;
	return (1);
	break;
    default:
	break;
    }
    return (0);
}
