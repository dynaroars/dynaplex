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
extern void __assert_fail(__const char *__assertion, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert_perror_fail(int __errnum, __const char *__file, unsigned int __line, __const char *__function) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
extern void __assert(const char *__assertion, const char *__file, int __line) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
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
typedef struct logLuvState LogLuvState;
struct logLuvState {
    int user_datafmt;
    int pixel_size;
    tidata_t *tbuf;
    short tbuflen;
    void (*tfunc) (LogLuvState *, tidata_t, int);
    TIFFVSetMethod vgetparent;
    TIFFVSetMethod vsetparent;
};
static int LogL16Decode(TIFF * tif, tidata_t op, tsize_t occ, tsample_t s)
{
    LogLuvState *sp = ((LogLuvState *) (tif)->tif_data);
    int shft, i, npixels;
    u_char *bp;
    int16 *tp;
    int16 b;
    int cc, rc;
    ((s == 0) ? (void) (0) : __assert_fail("s == 0", "tif_luv.c", 169, __PRETTY_FUNCTION__));
    ((sp != ((void *) 0)) ? (void) (0) : __assert_fail("sp != ((void*)0)", "tif_luv.c", 170, __PRETTY_FUNCTION__));
    npixels = occ / sp->pixel_size;
    if (sp->user_datafmt == 1)
	tp = (int16 *) op;
    else {
	((sp->tbuflen >= npixels) ? (void) (0) : __assert_fail("sp->tbuflen >= npixels", "tif_luv.c", 177, __PRETTY_FUNCTION__));
	tp = (int16 *) sp->tbuf;
    } _TIFFmemset((tdata_t) tp, 0, npixels * sizeof(tp[0]));
    bp = (u_char *) tif->tif_rawcp;
    cc = tif->tif_rawcc;
    for (shft = 2 * 8; (shft -= 8) >= 0;) {
	for (i = 0; i < npixels && cc > 0;)
	    if (*bp >= 128) {
		rc = *bp++ + (2 - 128);
		b = (int16) * bp++ << shft;
		cc -= 2;
		while (rc--)
		    tp[i++] |= b;
	    } else {
		rc = *bp++;
		while (--cc && rc--)
		    tp[i++] |= (int16) * bp++ << shft;
	    }
	if (i != npixels) {
	    TIFFError(tif->tif_name, "LogL16Decode: Not enough data at row %d (short %d pixels)", tif->tif_row, npixels - i);
	    tif->tif_rawcp = (tidata_t) bp;
	    tif->tif_rawcc = cc;
	    return (0);
	}
    }
    (*sp->tfunc) (sp, op, npixels);
    tif->tif_rawcp = (tidata_t) bp;
    tif->tif_rawcc = cc;
    return (1);
}
//complexity is O(n) inferreed by loopus
static int LogLuvDecode24(TIFF * tif, tidata_t op, tsize_t occ, tsample_t s)
{
    LogLuvState *sp = ((LogLuvState *) (tif)->tif_data);
    int cc, i, npixels;
    u_char *bp;
    uint32 *tp;
    ((s == 0) ? (void) (0) : __assert_fail("s == 0", "tif_luv.c", 224, __PRETTY_FUNCTION__));
    ((sp != ((void *) 0)) ? (void) (0) : __assert_fail("sp != ((void*)0)", "tif_luv.c", 225, __PRETTY_FUNCTION__));
    npixels = occ / sp->pixel_size;
    if (sp->user_datafmt == 2)
	tp = (uint32 *) op;
    else {
	((sp->tbuflen >= npixels) ? (void) (0) : __assert_fail("sp->tbuflen >= npixels", "tif_luv.c", 232, __PRETTY_FUNCTION__));
	tp = (uint32 *) sp->tbuf;
    } _TIFFmemset((tdata_t) tp, 0, npixels * sizeof(tp[0]));
    bp = (u_char *) tif->tif_rawcp;
    cc = tif->tif_rawcc;
    for (i = 0; i < npixels && cc > 0; i++) {
	tp[i] = bp[0] << 16 | bp[1] << 8 | bp[2];
	bp += 3;
	cc -= 3;
    }
    tif->tif_rawcp = (tidata_t) bp;
    tif->tif_rawcc = cc;
    if (i != npixels) {
	TIFFError(tif->tif_name, "LogLuvDecode24: Not enough data at row %d (short %d pixels)", tif->tif_row, npixels - i);
	return (0);
    }
    (*sp->tfunc) (sp, op, npixels);
    return (1);
}

static int LogLuvDecode32(TIFF * tif, tidata_t op, tsize_t occ, tsample_t s)
{
    LogLuvState *sp;
    int shft, i, npixels;
    u_char *bp;
    uint32 *tp;
    uint32 b;
    int cc, rc;
    ((s == 0) ? (void) (0) : __assert_fail("s == 0", "tif_luv.c", 269, __PRETTY_FUNCTION__));
    sp = ((LogLuvState *) (tif)->tif_data);
    ((sp != ((void *) 0)) ? (void) (0) : __assert_fail("sp != ((void*)0)", "tif_luv.c", 271, __PRETTY_FUNCTION__));
    npixels = occ / sp->pixel_size;
    if (sp->user_datafmt == 2)
	tp = (uint32 *) op;
    else {
	((sp->tbuflen >= npixels) ? (void) (0) : __assert_fail("sp->tbuflen >= npixels", "tif_luv.c", 278, __PRETTY_FUNCTION__));
	tp = (uint32 *) sp->tbuf;
    } _TIFFmemset((tdata_t) tp, 0, npixels * sizeof(tp[0]));
    bp = (u_char *) tif->tif_rawcp;
    cc = tif->tif_rawcc;
    for (shft = 4 * 8; (shft -= 8) >= 0;) {
	for (i = 0; i < npixels && cc > 0;)
	    if (*bp >= 128) {
		rc = *bp++ + (2 - 128);
		b = (uint32) * bp++ << shft;
		cc -= 2;
		while (rc--)
		    tp[i++] |= b;
	    } else {
		rc = *bp++;
		while (--cc && rc--)
		    tp[i++] |= (uint32) * bp++ << shft;
	    }
	if (i != npixels) {
	    TIFFError(tif->tif_name, "LogLuvDecode32: Not enough data at row %d (short %d pixels)", tif->tif_row, npixels - i);
	    tif->tif_rawcp = (tidata_t) bp;
	    tif->tif_rawcc = cc;
	    return (0);
	}
    }
    (*sp->tfunc) (sp, op, npixels);
    tif->tif_rawcp = (tidata_t) bp;
    tif->tif_rawcc = cc;
    return (1);
}

static int LogLuvDecodeStrip(TIFF * tif, tidata_t bp, tsize_t cc, tsample_t s)
{
    tsize_t rowlen = TIFFScanlineSize(tif);
    ((cc % rowlen == 0) ? (void) (0) : __assert_fail("cc%rowlen == 0", "tif_luv.c", 324, __PRETTY_FUNCTION__));
    while (cc && (*tif->tif_decoderow) (tif, bp, rowlen, s))
	bp += rowlen, cc -= rowlen;
    return (cc == 0);
}

static int LogLuvDecodeTile(TIFF * tif, tidata_t bp, tsize_t cc, tsample_t s)
{
    tsize_t rowlen = TIFFTileRowSize(tif);
    ((cc % rowlen == 0) ? (void) (0) : __assert_fail("cc%rowlen == 0", "tif_luv.c", 340, __PRETTY_FUNCTION__));
    while (cc && (*tif->tif_decoderow) (tif, bp, rowlen, s))
	bp += rowlen, cc -= rowlen;
    return (cc == 0);
}

static int LogL16Encode(TIFF * tif, tidata_t bp, tsize_t cc, tsample_t s)
{
    LogLuvState *sp = ((LogLuvState *) (tif)->tif_data);
    int shft, i, j, npixels;
    tidata_t op;
    int16 *tp;
    int16 b;
    int occ, rc = 0, mask, beg;
    ((s == 0) ? (void) (0) : __assert_fail("s == 0", "tif_luv.c", 359, __PRETTY_FUNCTION__));
    ((sp != ((void *) 0)) ? (void) (0) : __assert_fail("sp != ((void*)0)", "tif_luv.c", 360, __PRETTY_FUNCTION__));
    npixels = cc / sp->pixel_size;
    if (sp->user_datafmt == 1)
	tp = (int16 *) bp;
    else {
	tp = (int16 *) sp->tbuf;
	((sp->tbuflen >= npixels) ? (void) (0) : __assert_fail("sp->tbuflen >= npixels", "tif_luv.c", 367, __PRETTY_FUNCTION__));
	(*sp->tfunc) (sp, bp, npixels);
    } op = tif->tif_rawcp;
    occ = tif->tif_rawdatasize - tif->tif_rawcc;
    for (shft = 2 * 8; (shft -= 8) >= 0;)
	for (i = 0; i < npixels; i += rc) {
	    if (occ < 4) {
		tif->tif_rawcp = op;
		tif->tif_rawcc = tif->tif_rawdatasize - occ;
		if (!TIFFFlushData1(tif))
		    return (-1);
		op = tif->tif_rawcp;
		occ = tif->tif_rawdatasize - tif->tif_rawcc;
	    }
	    mask = 0xff << shft;
	    for (beg = i; beg < npixels; beg += rc) {
		b = tp[beg] & mask;
		rc = 1;
		while (rc < 127 + 2 && beg + rc < npixels && (tp[beg + rc] & mask) == b)
		    rc++;
		if (rc >= 4)
		    break;
	    }
	    if (beg - i > 1 && beg - i < 4) {
		b = tp[i] & mask;
		j = i + 1;
		while ((tp[j++] & mask) == b)
		    if (j == beg) {
			*op++ = 128 - 2 + j - i;
			*op++ = b >> shft;
			occ -= 2;
			i = beg;
			break;
		    }
	    }
	    while (i < beg) {
		if ((j = beg - i) > 127)
		    j = 127;
		if (occ < j + 3) {
		    tif->tif_rawcp = op;
		    tif->tif_rawcc = tif->tif_rawdatasize - occ;
		    if (!TIFFFlushData1(tif))
			return (-1);
		    op = tif->tif_rawcp;
		    occ = tif->tif_rawdatasize - tif->tif_rawcc;
		}
		*op++ = j;
		occ--;
		while (j--) {
		    *op++ = tp[i++] >> shft & 0xff;
		    occ--;
		}
	    }
	    if (rc >= 4) {
		*op++ = 128 - 2 + rc;
		*op++ = tp[beg] >> shft & 0xff;
		occ -= 2;
	    } else
		rc = 0;
	}
    tif->tif_rawcp = op;
    tif->tif_rawcc = tif->tif_rawdatasize - occ;
    return (0);
}

static int LogLuvEncode24(TIFF * tif, tidata_t bp, tsize_t cc, tsample_t s)
{
    LogLuvState *sp = ((LogLuvState *) (tif)->tif_data);
    int i, npixels, occ;
    tidata_t op;
    uint32 *tp;
    ((s == 0) ? (void) (0) : __assert_fail("s == 0", "tif_luv.c", 445, __PRETTY_FUNCTION__));
    ((sp != ((void *) 0)) ? (void) (0) : __assert_fail("sp != ((void*)0)", "tif_luv.c", 446, __PRETTY_FUNCTION__));
    npixels = cc / sp->pixel_size;
    if (sp->user_datafmt == 2)
	tp = (uint32 *) bp;
    else {
	tp = (uint32 *) sp->tbuf;
	((sp->tbuflen >= npixels) ? (void) (0) : __assert_fail("sp->tbuflen >= npixels", "tif_luv.c", 453, __PRETTY_FUNCTION__));
	(*sp->tfunc) (sp, bp, npixels);
    } op = tif->tif_rawcp;
    occ = tif->tif_rawdatasize - tif->tif_rawcc;
    for (i = npixels; i--;) {
	if (occ < 3) {
	    tif->tif_rawcp = op;
	    tif->tif_rawcc = tif->tif_rawdatasize - occ;
	    if (!TIFFFlushData1(tif))
		return (-1);
	    op = tif->tif_rawcp;
	    occ = tif->tif_rawdatasize - tif->tif_rawcc;
	}
	*op++ = (tidataval_t) (*tp >> 16);
	*op++ = (tidataval_t) (*tp >> 8 & 0xff);
	*op++ = (tidataval_t) (*tp++ & 0xff);
	occ -= 3;
    }
    tif->tif_rawcp = op;
    tif->tif_rawcc = tif->tif_rawdatasize - occ;
    return (0);
}

static int LogLuvEncode32(TIFF * tif, tidata_t bp, tsize_t cc, tsample_t s)
{
    LogLuvState *sp = ((LogLuvState *) (tif)->tif_data);
    int shft, i, j, npixels;
    tidata_t op;
    uint32 *tp;
    uint32 b;
    int occ, rc = 0, mask, beg;
    ((s == 0) ? (void) (0) : __assert_fail("s == 0", "tif_luv.c", 492, __PRETTY_FUNCTION__));
    ((sp != ((void *) 0)) ? (void) (0) : __assert_fail("sp != ((void*)0)", "tif_luv.c", 493, __PRETTY_FUNCTION__));
    npixels = cc / sp->pixel_size;
    if (sp->user_datafmt == 2)
	tp = (uint32 *) bp;
    else {
	tp = (uint32 *) sp->tbuf;
	((sp->tbuflen >= npixels) ? (void) (0) : __assert_fail("sp->tbuflen >= npixels", "tif_luv.c", 501, __PRETTY_FUNCTION__));
	(*sp->tfunc) (sp, bp, npixels);
    } op = tif->tif_rawcp;
    occ = tif->tif_rawdatasize - tif->tif_rawcc;
    for (shft = 4 * 8; (shft -= 8) >= 0;)
	for (i = 0; i < npixels; i += rc) {
	    if (occ < 4) {
		tif->tif_rawcp = op;
		tif->tif_rawcc = tif->tif_rawdatasize - occ;
		if (!TIFFFlushData1(tif))
		    return (-1);
		op = tif->tif_rawcp;
		occ = tif->tif_rawdatasize - tif->tif_rawcc;
	    }
	    mask = 0xff << shft;
	    for (beg = i; beg < npixels; beg += rc) {
		b = tp[beg] & mask;
		rc = 1;
		while (rc < 127 + 2 && beg + rc < npixels && (tp[beg + rc] & mask) == b)
		    rc++;
		if (rc >= 4)
		    break;
	    }
	    if (beg - i > 1 && beg - i < 4) {
		b = tp[i] & mask;
		j = i + 1;
		while ((tp[j++] & mask) == b)
		    if (j == beg) {
			*op++ = (tidataval_t) (128 - 2 + j - i);
			*op++ = (tidataval_t) (b >> shft);
			occ -= 2;
			i = beg;
			break;
		    }
	    }
	    while (i < beg) {
		if ((j = beg - i) > 127)
		    j = 127;
		if (occ < j + 3) {
		    tif->tif_rawcp = op;
		    tif->tif_rawcc = tif->tif_rawdatasize - occ;
		    if (!TIFFFlushData1(tif))
			return (-1);
		    op = tif->tif_rawcp;
		    occ = tif->tif_rawdatasize - tif->tif_rawcc;
		}
		*op++ = j;
		occ--;
		while (j--) {
		    *op++ = (tidataval_t) (tp[i++] >> shft & 0xff);
		    occ--;
		}
	    }
	    if (rc >= 4) {
		*op++ = 128 - 2 + rc;
		*op++ = (tidataval_t) (tp[beg] >> shft & 0xff);
		occ -= 2;
	    } else
		rc = 0;
	}
    tif->tif_rawcp = op;
    tif->tif_rawcc = tif->tif_rawdatasize - occ;
    return (0);
}

static int LogLuvEncodeStrip(TIFF * tif, tidata_t bp, tsize_t cc, tsample_t s)
{
    tsize_t rowlen = TIFFScanlineSize(tif);
    ((cc % rowlen == 0) ? (void) (0) : __assert_fail("cc%rowlen == 0", "tif_luv.c", 577, __PRETTY_FUNCTION__));
    while (cc && (*tif->tif_encoderow) (tif, bp, rowlen, s) == 0)
	bp += rowlen, cc -= rowlen;
    return (cc == 0);
}

static int LogLuvEncodeTile(TIFF * tif, tidata_t bp, tsize_t cc, tsample_t s)
{
    tsize_t rowlen = TIFFTileRowSize(tif);
    ((cc % rowlen == 0) ? (void) (0) : __assert_fail("cc%rowlen == 0", "tif_luv.c", 592, __PRETTY_FUNCTION__));
    while (cc && (*tif->tif_encoderow) (tif, bp, rowlen, s) == 0)
	bp += rowlen, cc -= rowlen;
    return (cc == 0);
}

static struct {
    float ustart;
    short nus, ncum;
} uv_row[163] = {
(float) 0.247663, 4, 0, (float) 0.243779, 6, 4, (float) 0.241684, 7, 10, (float) 0.237874, 9, 17, (float) 0.235906, 10, 26, (float) 0.232153, 12, 36, (float) 0.228352, 14, 48, (float) 0.226259, 15, 62, (float) 0.222371, 17, 77, (float) 0.220410, 18, 94, (float) 0.214710, 21, 112, (float) 0.212714, 22, 133, (float) 0.210721, 23, 155, (float) 0.204976, 26, 178, (float) 0.202986, 27, 204, (float) 0.199245, 29, 231, (float) 0.195525, 31, 260, (float) 0.193560, 32, 291, (float) 0.189878, 34, 323, (float) 0.186216, 36, 357, (float) 0.186216, 36, 393, (float) 0.182592, 38, 429, (float) 0.179003, 40, 467, (float) 0.175466, 42, 507, (float) 0.172001, 44, 549, (float) 0.172001, 44, 593, (float) 0.168612, 46, 637, (float) 0.168612, 46, 683, (float) 0.163575, 49, 729, (float) 0.158642, 52, 778, (float) 0.158642, 52, 830, (float) 0.158642, 52, 882, (float) 0.153815, 55, 934, (float) 0.153815, 55, 989, (float) 0.149097, 58, 1044, (float) 0.149097, 58, 1102, (float) 0.142746, 62, 1160, (float) 0.142746, 62, 1222, (float) 0.142746, 62, 1284, (float) 0.138270, 65, 1346, (float) 0.138270, 65, 1411, (float) 0.138270, 65, 1476, (float) 0.132166, 69, 1541, (float) 0.132166, 69, 1610, (float) 0.126204, 73, 1679, (float) 0.126204, 73, 1752, (float) 0.126204, 73, 1825, (float) 0.120381, 77, 1898, (float) 0.120381, 77, 1975, (float) 0.120381, 77, 2052, (float) 0.120381, 77, 2129, (float) 0.112962, 82, 2206, (float) 0.112962, 82, 2288, (float) 0.112962, 82, 2370, (float) 0.107450, 86, 2452, (float) 0.107450, 86, 2538, (float) 0.107450, 86, 2624, (float) 0.107450, 86, 2710, (float) 0.100343, 91, 2796, (float) 0.100343, 91, 2887, (float) 0.100343, 91, 2978, (float) 0.095126, 95, 3069, (float) 0.095126, 95, 3164, (float) 0.095126, 95, 3259, (float) 0.095126, 95, 3354, (float) 0.088276, 100, 3449, (float) 0.088276, 100, 3549, (float) 0.088276, 100, 3649, (float) 0.088276, 100, 3749, (float) 0.081523, 105, 3849, (float) 0.081523, 105, 3954, (float) 0.081523, 105, 4059, (float) 0.081523, 105, 4164, (float) 0.074861, 110, 4269, (float) 0.074861, 110, 4379, (float) 0.074861, 110, 4489, (float) 0.074861, 110, 4599, (float) 0.068290, 115, 4709, (float) 0.068290, 115, 4824, (float) 0.068290, 115, 4939, (float) 0.068290, 115, 5054, (float) 0.063573, 119, 5169, (float) 0.063573, 119, 5288, (float) 0.063573, 119, 5407, (float) 0.063573, 119, 5526, (float) 0.057219, 124, 5645, (float) 0.057219, 124, 5769, (float) 0.057219, 124, 5893, (float) 0.057219, 124, 6017, (float) 0.050985, 129, 6141, (float) 0.050985, 129, 6270, (float) 0.050985, 129, 6399, (float) 0.050985, 129, 6528, (float) 0.050985, 129, 6657, (float) 0.044859, 134, 6786, (float) 0.044859, 134, 6920, (float) 0.044859, 134, 7054, (float) 0.044859, 134, 7188, (float) 0.040571, 138, 7322, (float) 0.040571, 138, 7460, (float) 0.040571, 138, 7598, (float) 0.040571, 138, 7736, (float) 0.036339, 142, 7874, (float) 0.036339, 142, 8016, (float) 0.036339, 142, 8158, (float) 0.036339, 142, 8300, (float) 0.032139, 146, 8442, (float) 0.032139, 146, 8588, (float) 0.032139, 146, 8734, (float) 0.032139, 146, 8880, (float) 0.027947, 150, 9026, (float) 0.027947, 150, 9176, (float) 0.027947, 150, 9326, (float) 0.023739, 154, 9476, (float) 0.023739, 154, 9630, (float) 0.023739, 154, 9784, (float) 0.023739, 154, 9938, (float) 0.019504, 158, 10092, (float) 0.019504, 158, 10250, (float) 0.019504, 158, 10408, (float) 0.016976, 161, 10566, (float) 0.016976, 161, 10727, (float) 0.016976, 161, 10888, (float) 0.016976, 161, 11049, (float) 0.012639, 165, 11210, (float) 0.012639, 165, 11375, (float) 0.012639, 165, 11540, (float) 0.009991, 168, 11705, (float) 0.009991, 168, 11873, (float) 0.009991, 168, 12041, (float) 0.009016, 170, 12209, (float) 0.009016, 170, 12379, (float) 0.009016, 170, 12549, (float) 0.006217, 173, 12719, (float) 0.006217, 173, 12892, (float) 0.005097, 175, 13065, (float) 0.005097, 175, 13240, (float) 0.005097, 175, 13415, (float) 0.003909, 177, 13590, (float) 0.003909, 177, 13767, (float) 0.002340, 177, 13944, (float) 0.002389, 170, 14121, (float) 0.001068, 164, 14291, (float) 0.001653, 157, 14455, (float) 0.000717, 150, 14612, (float) 0.001614, 143, 14762, (float) 0.000270, 136, 14905, (float) 0.000484, 129, 15041, (float) 0.001103, 123, 15170, (float) 0.001242, 115, 15293, (float) 0.001188, 109, 15408, (float) 0.001011, 103, 15517, (float) 0.000709, 97, 15620, (float) 0.000301, 89, 15717, (float) 0.002416, 82, 15806, (float) 0.003251, 76, 15888, (float) 0.003246, 69, 15964, (float) 0.004141, 62, 16033, (float) 0.005963, 55, 16095, (float) 0.008839, 47, 16150, (float) 0.010490, 40, 16197, (float) 0.016994, 31, 16237, (float) 0.023659, 21, 16268,};

static double pix16toY(int p16)
{
    int Le = p16 & 0x7fff;
    double Y;
    if (!Le)
	return (0.);
    Y = exp(0.69314718055994530942 / 256. * (Le + .5) - 0.69314718055994530942 * 64.);
    if (p16 & 0x8000)
	return (-Y);
    return (Y);
}

static int pix16fromY(double Y)
{
    if (Y >= 1.84467e19)
	return (0x7fff);
    if (Y <= -1.84467e19)
	return (0xffff);
    if (Y > 5.43571e-20)
	return (int) (256. * (((1. / 0.69314718055994530942) * log(Y)) + 64.));
    if (Y < -5.43571e-20)
	return (~0x7fff | (int) (256. * (((1. / 0.69314718055994530942) * log(-Y)) + 64.)));
    return (0);
}

static void L16toY(LogLuvState * sp, tidata_t op, int n)
{
    int16 *l16 = (int16 *) sp->tbuf;
    float *yp = (float *) op;
    while (n-- > 0)
	*yp++ = (float) pix16toY(*l16++);
} static void L16toGry(LogLuvState * sp, tidata_t op, int n)
{
    int16 *l16 = (int16 *) sp->tbuf;
    uint8 *gp = (uint8 *) op;
    while (n-- > 0) {
	double Y = pix16toY(*l16++);
	*gp++ = (Y <= 0.) ? 0 : (Y >= 1.) ? 255 : (int) (256. * sqrt(Y));
}} static void L16fromY(LogLuvState * sp, tidata_t op, int n)
{
    int16 *l16 = (int16 *) sp->tbuf;
    float *yp = (float *) op;
    while (n-- > 0)
	*l16++ = pix16fromY(*yp++);
}

static void XYZtoRGB24(float xyz[3], uint8 rgb[3])
{
    double r, g, b;
    r = 2.690 * xyz[0] + -1.276 * xyz[1] + -0.414 * xyz[2];
    g = -1.022 * xyz[0] + 1.978 * xyz[1] + 0.044 * xyz[2];
    b = 0.061 * xyz[0] + -0.224 * xyz[1] + 1.163 * xyz[2];
    rgb[0] = (r <= 0.) ? 0 : (r >= 1.) ? 255 : (int) (256. * sqrt(r));
    rgb[1] = (g <= 0.) ? 0 : (g >= 1.) ? 255 : (int) (256. * sqrt(g));
    rgb[2] = (b <= 0.) ? 0 : (b >= 1.) ? 255 : (int) (256. * sqrt(b));
} static int uv_encode(double u, double v)
{
    register int vi, ui;
    if (v < (float) 0.016940)
	return (-1);
    vi = (int) ((v - (float) 0.016940) * (1. / (float) 0.003500));
    if (vi >= 163)
	return (-1);
    if (u < uv_row[vi].ustart)
	return (-1);
    ui = (int) ((u - uv_row[vi].ustart) * (1. / (float) 0.003500));
    if (ui >= uv_row[vi].nus)
	return (-1);
    return (uv_row[vi].ncum + ui);
}

static int uv_decode(double *up, double *vp, int c)
{
    int upper, lower;
    register int ui, vi;
    if (c < 0 || c >= 16289)
	return (-1);
    lower = 0;
    upper = 163;
    do {
	vi = (lower + upper) >> 1;
	ui = c - uv_row[vi].ncum;
	if (ui > 0)
	    lower = vi;
	else if (ui < 0)
	    upper = vi;
	else
	    break;
    } while (upper - lower > 1);
    vi = lower;
    ui = c - uv_row[vi].ncum;
    *up = uv_row[vi].ustart + (ui + .5) * (float) 0.003500;
    *vp = (float) 0.016940 + (vi + .5) * (float) 0.003500;
    return (0);
}

static void pix24toXYZ(uint32 p, float XYZ[3])
{
    int Le, Ce;
    double L, u, v, s, x, y;
    Le = p >> 14 & 0x3ff;
    if (Le == 0) {
	XYZ[0] = XYZ[1] = XYZ[2] = 0.;
	return;
    }
    L = exp(0.69314718055994530942 / 64. * (Le + .5) - 0.69314718055994530942 * 12.);
    Ce = p & 0x3fff;
    if (uv_decode(&u, &v, Ce) < 0) {
	u = 0.210526316;
	v = 0.473684211;
    }
    s = 1. / (6. * u - 16. * v + 12.);
    x = 9. * u * s;
    y = 4. * v * s;
    XYZ[0] = (float) (x / y * L);
    XYZ[1] = (float) L;
    XYZ[2] = (float) ((1. - x - y) / y * L);
} static uint32 pix24fromXYZ(float XYZ[3])
{
    int Le, Ce;
    double L, u, v, s;
    L = XYZ[1];
    if (L >= 16.)
	Le = 0x3ff;
    else if (L <= 1. / 4096.)
	Le = 0;
    else
	Le = (int) (64. * (((1. / 0.69314718055994530942) * log(L)) + 12.));
    s = XYZ[0] + 15. * XYZ[1] + 3. * XYZ[2];
    if (s == 0.) {
	u = 0.210526316;
	v = 0.473684211;
    } else {
	u = 4. * XYZ[0] / s;
	v = 9. * XYZ[1] / s;
    }
    Ce = uv_encode(u, v);
    if (Ce < 0)
	Ce = uv_encode(0.210526316, 0.473684211);
    return (Le << 14 | Ce);
}

static void Luv24toXYZ(LogLuvState * sp, tidata_t op, int n)
{
    uint32 *luv = (uint32 *) sp->tbuf;
    float *xyz = (float *) op;
    while (n-- > 0) {
	pix24toXYZ(*luv, xyz);
	xyz += 3;
	luv++;
    }
}

static void Luv24toLuv48(LogLuvState * sp, tidata_t op, int n)
{
    uint32 *luv = (uint32 *) sp->tbuf;
    int16 *luv3 = (int16 *) op;
    while (n-- > 0) {
	double u, v;
	*luv3++ = (int16) ((*luv >> 12 & 0xffd) + 13314);
	if (uv_decode(&u, &v, *luv & 0x3fff) < 0) {
	    u = 0.210526316;
	    v = 0.473684211;
	}
	*luv3++ = (int16) (u * (1L << 15));
	*luv3++ = (int16) (v * (1L << 15));
	luv++;
    }
}

static void Luv24toRGB(LogLuvState * sp, tidata_t op, int n)
{
    uint32 *luv = (uint32 *) sp->tbuf;
    uint8 *rgb = (uint8 *) op;
    while (n-- > 0) {
	float xyz[3];
	pix24toXYZ(*luv++, xyz);
	XYZtoRGB24(xyz, rgb);
	rgb += 3;
}} static void Luv24fromXYZ(LogLuvState * sp, tidata_t op, int n)
{
    uint32 *luv = (uint32 *) sp->tbuf;
    float *xyz = (float *) op;
    while (n-- > 0) {
	*luv++ = pix24fromXYZ(xyz);
	xyz += 3;
    }
}

static void Luv24fromLuv48(LogLuvState * sp, tidata_t op, int n)
{
    uint32 *luv = (uint32 *) sp->tbuf;
    int16 *luv3 = (int16 *) op;
    while (n-- > 0) {
	int Le, Ce;
	if (luv3[0] <= 0)
	    Le = 0;
	else if (luv3[0] >= (1 << 12) + 3314)
	    Le = (1 << 10) - 1;
	else
	    Le = (luv3[0] - 3314) >> 2;
	Ce = uv_encode((luv[1] + .5) / (1 << 15), (luv[2] + .5) / (1 << 15));
	if (Ce < 0)
	    Ce = uv_encode(0.210526316, 0.473684211);
	*luv++ = (uint32) Le << 14 | Ce;
	luv3 += 3;
    }
}

static void pix32toXYZ(uint32 p, float XYZ[3])
{
    double L, u, v, s, x, y;
    L = pix16toY((int) p >> 16);
    if (L == 0.) {
	XYZ[0] = XYZ[1] = XYZ[2] = 0.;
	return;
    }
    u = 1. / 410. * ((p >> 8 & 0xff) + .5);
    v = 1. / 410. * ((p & 0xff) + .5);
    s = 1. / (6. * u - 16. * v + 12.);
    x = 9. * u * s;
    y = 4. * v * s;
    XYZ[0] = (float) (x / y * L);
    XYZ[1] = (float) L;
    XYZ[2] = (float) ((1. - x - y) / y * L);
} static uint32 pix32fromXYZ(float XYZ[3])
{
    unsigned int Le, ue, ve;
    double u, v, s;
    Le = (unsigned int) pix16fromY(XYZ[1]);
    s = XYZ[0] + 15. * XYZ[1] + 3. * XYZ[2];
    if (s == 0.) {
	u = 0.210526316;
	v = 0.473684211;
    } else {
	u = 4. * XYZ[0] / s;
	v = 9. * XYZ[1] / s;
    }
    if (u <= 0.)
	ue = 0;
    else
	ue = (unsigned int) (410. * u);
    if (ue > 255)
	ue = 255;
    if (v <= 0.)
	ve = 0;
    else
	ve = (unsigned int) (410. * v);
    if (ve > 255)
	ve = 255;
    return (Le << 16 | ue << 8 | ve);
}

static void Luv32toXYZ(LogLuvState * sp, tidata_t op, int n)
{
    uint32 *luv = (uint32 *) sp->tbuf;
    float *xyz = (float *) op;
    while (n-- > 0) {
	pix32toXYZ(*luv++, xyz);
	xyz += 3;
    }
}

static void Luv32toLuv48(LogLuvState * sp, tidata_t op, int n)
{
    uint32 *luv = (uint32 *) sp->tbuf;
    int16 *luv3 = (int16 *) op;
    while (n-- > 0) {
	double u, v;
	*luv3++ = (int16) (*luv >> 16);
	u = 1. / 410. * ((*luv >> 8 & 0xff) + .5);
	v = 1. / 410. * ((*luv & 0xff) + .5);
	*luv3++ = (int16) (u * (1L << 15));
	*luv3++ = (int16) (v * (1L << 15));
	luv++;
}} static void Luv32toRGB(LogLuvState * sp, tidata_t op, int n)
{
    uint32 *luv = (uint32 *) sp->tbuf;
    uint8 *rgb = (uint8 *) op;
    while (n-- > 0) {
	float xyz[3];
	pix32toXYZ(*luv++, xyz);
	XYZtoRGB24(xyz, rgb);
	rgb += 3;
}} static void Luv32fromXYZ(LogLuvState * sp, tidata_t op, int n)
{
    uint32 *luv = (uint32 *) sp->tbuf;
    float *xyz = (float *) op;
    while (n-- > 0) {
	*luv++ = pix32fromXYZ(xyz);
	xyz += 3;
    }
}

static void Luv32fromLuv48(LogLuvState * sp, tidata_t op, int n)
{
    uint32 *luv = (uint32 *) sp->tbuf;
    int16 *luv3 = (int16 *) op;
    while (n-- > 0) {
	*luv++ = (uint32) luv3[0] << 16 | (luv3[1] * (uint32) (410. + .5) >> 7 & 0xff00) | (luv3[2] * (uint32) (410. + .5) >> 15 & 0xff);
	luv3 += 3;
    }
}

static void _logLuvNop(LogLuvState * sp, tidata_t op, int n)
{
    (void) sp;
    (void) op;
    (void) n;
} static int LogL16GuessDataFmt(TIFFDirectory * td)
{
    switch ((((td->td_bitspersample) << 6) | ((td->td_samplesperpixel) << 3) | (td->td_sampleformat))) {
    case (((32) << 6) | ((1) << 3) | (3)):
	return (0);
    case (((16) << 6) | ((1) << 3) | (4)):
    case (((16) << 6) | ((1) << 3) | (2)):
    case (((16) << 6) | ((1) << 3) | (1)):
	return (1);
    case (((8) << 6) | ((1) << 3) | (4)):
    case (((8) << 6) | ((1) << 3) | (1)):
	return (3);
    }
    return (-1);
}

static int LogL16InitState(TIFF * tif)
{
    TIFFDirectory *td = &tif->tif_dir;
    LogLuvState *sp = ((LogLuvState *) (tif)->tif_data);
    static const char module[] = "LogL16InitState";
    ((sp != ((void *) 0)) ? (void) (0) : __assert_fail("sp != ((void*)0)", "tif_luv.c", 1025, __PRETTY_FUNCTION__));
    ((td->td_photometric == 32844) ? (void) (0) : __assert_fail("td->td_photometric == 32844", "tif_luv.c", 1026, __PRETTY_FUNCTION__));
    if (sp->user_datafmt == -1)
	sp->user_datafmt = LogL16GuessDataFmt(td);
    switch (sp->user_datafmt) {
    case 0:
	sp->pixel_size = sizeof(float);
	break;
    case 1:
	sp->pixel_size = sizeof(int16);
	break;
    case 3:
	sp->pixel_size = sizeof(uint8);
	break;
    default:
	TIFFError(tif->tif_name, "No support for converting user data format to LogL");
	return (0);
    }
    sp->tbuflen = (short) (td->td_imagewidth * td->td_rowsperstrip);
    sp->tbuf = (tidata_t *) _TIFFmalloc(sp->tbuflen * sizeof(int16));
    if (sp->tbuf == ((void *) 0)) {
	TIFFError(module, "%s: No space for SGILog translation buffer", tif->tif_name);
	return (0);
    }
    return (1);
}

static int LogLuvGuessDataFmt(TIFFDirectory * td)
{
    int guess;
    switch ((((td->td_bitspersample) << 3) | (td->td_sampleformat))) {
    case (((32) << 3) | (3)):
	guess = 0;
	break;
    case (((32) << 3) | (4)):
    case (((32) << 3) | (1)):
    case (((32) << 3) | (2)):
	guess = 2;
	break;
    case (((16) << 3) | (4)):
    case (((16) << 3) | (2)):
    case (((16) << 3) | (1)):
	guess = 1;
	break;
    case (((8) << 3) | (4)):
    case (((8) << 3) | (1)):
	guess = 3;
	break;
    default:
	guess = -1;
	break;
    }
    switch (td->td_samplesperpixel) {
    case 1:
	if (guess != 2)
	    guess = -1;
	break;
    case 3:
	if (guess == 2)
	    guess = -1;
	break;
    default:
	guess = -1;
	break;
    }
    return (guess);
}

static int LogLuvInitState(TIFF * tif)
{
    TIFFDirectory *td = &tif->tif_dir;
    LogLuvState *sp = ((LogLuvState *) (tif)->tif_data);
    static const char module[] = "LogLuvInitState";
    ((sp != ((void *) 0)) ? (void) (0) : __assert_fail("sp != ((void*)0)", "tif_luv.c", 1115, __PRETTY_FUNCTION__));
    ((td->td_photometric == 32845) ? (void) (0) : __assert_fail("td->td_photometric == 32845", "tif_luv.c", 1116, __PRETTY_FUNCTION__));
    if (td->td_planarconfig != 1) {
	TIFFError(module, "SGILog compression cannot handle non-contiguous data");
	return (0);
    }
    if (sp->user_datafmt == -1)
	sp->user_datafmt = LogLuvGuessDataFmt(td);
    switch (sp->user_datafmt) {
    case 0:
	sp->pixel_size = 3 * sizeof(float);
	break;
    case 1:
	sp->pixel_size = 3 * sizeof(int16);
	break;
    case 2:
	sp->pixel_size = sizeof(uint32);
	break;
    case 3:
	sp->pixel_size = 3 * sizeof(uint8);
	break;
    default:
	TIFFError(tif->tif_name, "No support for converting user data format to LogLuv");
	return (0);
    }
    sp->tbuflen = (short) (td->td_imagewidth * td->td_rowsperstrip);
    sp->tbuf = (tidata_t *) _TIFFmalloc(sp->tbuflen * sizeof(uint32));
    if (sp->tbuf == ((void *) 0)) {
	TIFFError(module, "%s: No space for SGILog translation buffer", tif->tif_name);
	return (0);
    }
    return (1);
}

static int LogLuvSetupDecode(TIFF * tif)
{
    LogLuvState *sp = ((LogLuvState *) (tif)->tif_data);
    TIFFDirectory *td = &tif->tif_dir;
    tif->tif_postdecode = _TIFFNoPostDecode;
    switch (td->td_photometric) {
    case 32845:
	if (!LogLuvInitState(tif))
	    break;
	if (td->td_compression == 34677) {
	    tif->tif_decoderow = LogLuvDecode24;
	    switch (sp->user_datafmt) {
	    case 0:
		sp->tfunc = Luv24toXYZ;
		break;
	    case 1:
		sp->tfunc = Luv24toLuv48;
		break;
	    case 3:
		sp->tfunc = Luv24toRGB;
		break;
	    }
	} else {
	    tif->tif_decoderow = LogLuvDecode32;
	    switch (sp->user_datafmt) {
	    case 0:
		sp->tfunc = Luv32toXYZ;
		break;
	    case 1:
		sp->tfunc = Luv32toLuv48;
		break;
	    case 3:
		sp->tfunc = Luv32toRGB;
		break;
	    }
	}
	return (1);
    case 32844:
	if (!LogL16InitState(tif))
	    break;
	tif->tif_decoderow = LogL16Decode;
	switch (sp->user_datafmt) {
	case 0:
	    sp->tfunc = L16toY;
	    break;
	case 3:
	    sp->tfunc = L16toGry;
	    break;
	}
	return (1);
    default:
	TIFFError(tif->tif_name, "Inappropriate photometric interpretation %d for SGILog compression; %s", td->td_photometric, "must be either LogLUV or LogL");
	break;
    }
    return (0);
}

static int LogLuvSetupEncode(TIFF * tif)
{
    LogLuvState *sp = ((LogLuvState *) (tif)->tif_data);
    TIFFDirectory *td = &tif->tif_dir;
    switch (td->td_photometric) {
    case 32845:
	if (!LogLuvInitState(tif))
	    break;
	if (td->td_compression == 34677) {
	    tif->tif_encoderow = LogLuvEncode24;
	    switch (sp->user_datafmt) {
	    case 0:
		sp->tfunc = Luv24fromXYZ;
		break;
	    case 1:
		sp->tfunc = Luv24fromLuv48;
		break;
	    case 2:
		break;
	    default:
		goto notsupported;
	    }
	} else {
	    tif->tif_encoderow = LogLuvEncode32;
	    switch (sp->user_datafmt) {
	    case 0:
		sp->tfunc = Luv32fromXYZ;
		break;
	    case 1:
		sp->tfunc = Luv32fromLuv48;
		break;
	    case 2:
		break;
	    default:
		goto notsupported;
	    }
	}
	break;
    case 32844:
	if (!LogL16InitState(tif))
	    break;
	tif->tif_encoderow = LogL16Encode;
	switch (sp->user_datafmt) {
	case 0:
	    sp->tfunc = L16fromY;
	    break;
	case 1:
	    break;
	default:
	    goto notsupported;
	}
	break;
    default:
	TIFFError(tif->tif_name, "Inappropriate photometric interpretation %d for SGILog compression; %s", td->td_photometric, "must be either LogLUV or LogL");
	break;
    }
    return (1);
  notsupported:TIFFError(tif->tif_name, "SGILog compression supported only for %s, or raw data", td->td_photometric == 32844 ? "Y, L" : "XYZ, Luv");
    return (0);
}

static void LogLuvClose(TIFF * tif)
{
    TIFFDirectory *td = &tif->tif_dir;
    td->td_samplesperpixel = (td->td_photometric == 32844) ? 1 : 3;
    td->td_bitspersample = 16;
    td->td_sampleformat = 2;
} static void LogLuvCleanup(TIFF * tif)
{
    LogLuvState *sp = (LogLuvState *) tif->tif_data;
    if (sp) {
	if (sp->tbuf)
	    _TIFFfree(sp->tbuf);
	_TIFFfree(sp);
	tif->tif_data = ((void *) 0);
    }
} static int LogLuvVSetField(TIFF * tif, ttag_t tag, va_list ap)
{
    LogLuvState *sp = ((LogLuvState *) (tif)->tif_data);
    int bps, fmt;
    switch (tag) {
    case 65560:
	sp->user_datafmt = __builtin_va_arg(ap, int);
	switch (sp->user_datafmt) {
	case 0:
	    bps = 32, fmt = 3;
	    break;
	case 1:
	    bps = 16, fmt = 2;
	    break;
	case 2:
	    bps = 32, fmt = 1;
	    break;
	case 3:
	    bps = 8, fmt = 1;
	    break;
	default:
	    TIFFError(tif->tif_name, "Unknown data format %d for LogLuv compression", sp->user_datafmt);
	    return (0);
	}
	TIFFSetField(tif, 258, bps);
	TIFFSetField(tif, 339, fmt);
	tif->tif_tilesize = TIFFTileSize(tif);
	tif->tif_scanlinesize = TIFFScanlineSize(tif);
	return (1);
    default:
	return (*sp->vsetparent) (tif, tag, ap);
    }
}

static int LogLuvVGetField(TIFF * tif, ttag_t tag, va_list ap)
{
    LogLuvState *sp = (LogLuvState *) tif->tif_data;
    switch (tag) {
    case 65560:
	*__builtin_va_arg(ap, int *) = sp->user_datafmt;
	return (1);
    default:
	return (*sp->vgetparent) (tif, tag, ap);
    }
}
static const TIFFFieldInfo LogLuvFieldInfo[] = { {65560, 0, 0, TIFF_SHORT, 0, 1, 0, "SGILogDataFmt"} };

int TIFFInitSGILog(TIFF * tif, int scheme)
{
    static const char module[] = "TIFFInitSGILog";
    LogLuvState *sp;
    ((scheme == 34677 || scheme == 34676) ? (void) (0) : __assert_fail("scheme == 34677 || scheme == 34676", "tif_luv.c", 1386, __PRETTY_FUNCTION__));
    tif->tif_data = (tidata_t) _TIFFmalloc(sizeof(LogLuvState));
    if (tif->tif_data == ((void *) 0))
	goto bad;
    sp = (LogLuvState *) tif->tif_data;
    memset(sp, 0, sizeof(*sp));
    sp->user_datafmt = -1;
    sp->tfunc = _logLuvNop;
    tif->tif_setupdecode = LogLuvSetupDecode;
    tif->tif_decodestrip = LogLuvDecodeStrip;
    tif->tif_decodetile = LogLuvDecodeTile;
    tif->tif_setupencode = LogLuvSetupEncode;
    tif->tif_encodestrip = LogLuvEncodeStrip;
    tif->tif_encodetile = LogLuvEncodeTile;
    tif->tif_close = LogLuvClose;
    tif->tif_cleanup = LogLuvCleanup;
    _TIFFMergeFieldInfo(tif, LogLuvFieldInfo, (sizeof(LogLuvFieldInfo) / sizeof(LogLuvFieldInfo[0])));
    sp->vgetparent = tif->tif_vgetfield;
    tif->tif_vgetfield = LogLuvVGetField;
    sp->vsetparent = tif->tif_vsetfield;
    tif->tif_vsetfield = LogLuvVSetField;
    return (1);
  bad:TIFFError(module, "%s: No space for LogLuv state block", tif->tif_name);
    return (0);
}
