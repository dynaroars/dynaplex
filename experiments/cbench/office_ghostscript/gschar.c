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
typedef long fixed;
typedef ulong ufixed;
typedef struct gs_fixed_point_s {
    fixed x, y;
} gs_fixed_point;
typedef struct gs_fixed_rect_s {
    gs_fixed_point p, q;
} gs_fixed_rect;
int imod(int m, int n);
int igcd(int x, int y);
struct gs_matrix_s {
    float xx, xy, yx, yy, tx, ty;
};
typedef struct gs_matrix_s gs_matrix;
void gs_make_identity(gs_matrix *);
int gs_make_translation(floatp, floatp, gs_matrix *), gs_make_scaling(floatp, floatp, gs_matrix *), gs_make_rotation(floatp, gs_matrix *);
int gs_matrix_multiply(const gs_matrix *, const gs_matrix *, gs_matrix *), gs_matrix_invert(const gs_matrix *, gs_matrix *), gs_matrix_translate(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_scale(const gs_matrix *, floatp, floatp, gs_matrix *), gs_matrix_rotate(const gs_matrix *, floatp, gs_matrix *);
int gs_point_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_point_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform(floatp, floatp, const gs_matrix *, gs_point *), gs_distance_transform_inverse(floatp, floatp, const gs_matrix *, gs_point *), gs_points_bbox(const gs_point[4], gs_rect *), gs_bbox_transform_only(const gs_rect *, const gs_matrix *, gs_point[4]), gs_bbox_transform(const gs_rect *, const gs_matrix *, gs_rect *), gs_bbox_transform_inverse(const gs_rect *, const gs_matrix *, gs_rect *);
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
typedef enum { cpm_show, cpm_false_charpath, cpm_true_charpath, cpm_false_charboxpath, cpm_true_charboxpath } gs_char_path_mode;
typedef enum { gs_color_select_all = -1, gs_color_select_texture = 0, gs_color_select_source = 1 } gs_color_select_t;
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
typedef enum { rop2_0 = 0, rop2_S = 0xc, rop2_D = 0xa, rop2_1 = 0xf, rop2_default = rop2_S } gs_rop2_t;
typedef enum { rop3_0 = 0, rop3_T = 0xf0, rop3_S = 0xcc, rop3_D = 0xaa, rop3_1 = 0xff, rop3_default = rop3_T | rop3_S } gs_rop3_t;
typedef uint gs_logical_operation_t;
typedef unsigned rop_operand;
typedef rop_operand(*rop_proc) (rop_operand D, rop_operand S, rop_operand T);
typedef enum { rop_usage_none = 0, rop_usage_D = 1, rop_usage_S = 2, rop_usage_DS = 3, rop_usage_T = 4, rop_usage_DT = 5, rop_usage_ST = 6, rop_usage_DST = 7 } rop_usage_t;
typedef struct gx_device_s gx_device;
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
typedef unsigned short gx_color_value;
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
gs_state *gs_state_alloc(gs_memory_t *);
int gs_state_free(gs_state *);
int gs_gsave(gs_state *), gs_grestore(gs_state *), gs_grestoreall(gs_state *);
gs_state *gs_gstate(gs_state *);
gs_state *gs_state_copy(gs_state *, gs_memory_t *);
int gs_copygstate(gs_state *, const gs_state *), gs_currentgstate(gs_state *, const gs_state *), gs_setgstate(gs_state *, const gs_state *);
int gs_initgraphics(gs_state *);
typedef struct gx_device_memory_s gx_device_memory;
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
int gs_initmatrix(gs_state *), gs_defaultmatrix(const gs_state *, gs_matrix *), gs_currentmatrix(const gs_state *, gs_matrix *), gs_setmatrix(gs_state *, const gs_matrix *), gs_translate(gs_state *, floatp, floatp), gs_scale(gs_state *, floatp, floatp), gs_rotate(gs_state *, floatp), gs_concat(gs_state *, const gs_matrix *);
int gs_setdefaultmatrix(gs_state *, const gs_matrix *), gs_currentcharmatrix(gs_state *, gs_matrix *, bool), gs_setcharmatrix(gs_state *, const gs_matrix *), gs_settocharmatrix(gs_state *);
int gs_transform(gs_state *, floatp, floatp, gs_point *), gs_dtransform(gs_state *, floatp, floatp, gs_point *), gs_itransform(gs_state *, floatp, floatp, gs_point *), gs_idtransform(gs_state *, floatp, floatp, gs_point *);
int gs_imager_setmatrix(gs_imager_state *, const gs_matrix *);
int gs_imager_idtransform(const gs_imager_state *, floatp, floatp, gs_point *);
int gx_translate_to_fixed(gs_state *, fixed, fixed);
int gx_scale_char_matrix(gs_state *, int, int);
int gx_matrix_to_fixed_coeff(const gs_matrix *, fixed_coeff *, int);
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
typedef ulong gs_char;
typedef ulong gs_glyph;
typedef bool(*gs_glyph_mark_proc_t) (gs_glyph glyph, void *proc_data);
typedef const char *(*gs_proc_glyph_name_t) (gs_glyph, uint *);
typedef gs_glyph(*gs_proc_known_encode_t) (gs_char, int);
typedef struct gx_xfont_callbacks_s {
    const char *(*glyph_name) (gs_glyph, uint *);
    gs_glyph(*known_encode) (gs_char, int);
} gx_xfont_callbacks;
typedef struct gs_show_enum_s gs_show_enum;
gs_show_enum *gs_show_enum_alloc(gs_memory_t *, gs_state *, client_name_t);
void gs_show_enum_release(gs_show_enum *, gs_memory_t *);
int gs_show_init(gs_show_enum *, gs_state *, const char *), gs_show_n_init(gs_show_enum *, gs_state *, const char *, uint), gs_ashow_init(gs_show_enum *, gs_state *, floatp, floatp, const char *), gs_ashow_n_init(gs_show_enum *, gs_state *, floatp, floatp, const char *, uint), gs_widthshow_init(gs_show_enum *, gs_state *, floatp, floatp, gs_char, const char *), gs_widthshow_n_init(gs_show_enum *, gs_state *, floatp, floatp, gs_char, const char *, uint), gs_awidthshow_init(gs_show_enum *, gs_state *, floatp, floatp, gs_char, floatp, floatp, const char *), gs_awidthshow_n_init(gs_show_enum *, gs_state *, floatp, floatp, gs_char, floatp, floatp, const char *, uint), gs_kshow_init(gs_show_enum *, gs_state *, const char *), gs_kshow_n_init(gs_show_enum *, gs_state *, const char *, uint), gs_xyshow_init(gs_show_enum *, gs_state *, const char *), gs_xyshow_n_init(gs_show_enum *, gs_state *, const char *, uint), gs_glyphshow_init(gs_show_enum *, gs_state *, gs_glyph), gs_cshow_init(gs_show_enum *, gs_state *, const char *), gs_cshow_n_init(gs_show_enum *, gs_state *, const char *, uint), gs_stringwidth_init(gs_show_enum *, gs_state *, const char *), gs_stringwidth_n_init(gs_show_enum *, gs_state *, const char *, uint), gs_charpath_init(gs_show_enum *, gs_state *, const char *, bool), gs_charpath_n_init(gs_show_enum *, gs_state *, const char *, uint, bool), gs_glyphpath_init(gs_show_enum *, gs_state *, gs_glyph, bool), gs_charboxpath_init(gs_show_enum *, gs_state *, const char *, bool), gs_charboxpath_n_init(gs_show_enum *, gs_state *, const char *, uint, bool);
int gs_show_next(gs_show_enum *);
gs_char gs_show_current_char(const gs_show_enum *), gs_kshow_previous_char(const gs_show_enum *), gs_kshow_next_char(const gs_show_enum *);
gs_font *gs_show_current_font(const gs_show_enum *);
gs_glyph gs_show_current_glyph(const gs_show_enum *);
int gs_show_current_width(const gs_show_enum *, gs_point *);
void gs_show_width(const gs_show_enum *, gs_point *);
gs_char_path_mode gs_show_in_charpath(const gs_show_enum *);
int gs_setcachedevice(gs_show_enum *, gs_state *, const float *);
int gs_setcachedevice2(gs_show_enum *, gs_state *, const float *);
int gs_setcharwidth(gs_show_enum *, gs_state *, floatp, floatp);
bool gs_show_width_only(const gs_show_enum *);
typedef struct cached_char_s cached_char;
typedef struct cached_fm_pair_s cached_fm_pair;
typedef struct gx_font_stack_item_s {
    gs_font *font;
    uint index;
} gx_font_stack_item;
typedef struct gx_font_stack_s {
    int depth;
    gx_font_stack_item items[1 + 5];
} gx_font_stack;
typedef enum { sws_none, sws_cache, sws_no_cache, sws_cache_width_only } show_width_status;
struct gs_show_enum_s {
    gs_state *pgs;
    int level;
    gs_const_string str;
    float wcx, wcy;
    gs_char wchr;
    float ax, ay;
    bool add;
    int do_kern;
    bool slow_show;
    gs_char_path_mode charpath_flag;
    gs_state *show_gstate;
    int stringwidth_flag;
    int can_cache;
    gs_int_rect ibox;
    gs_int_rect obox;
    int ftx, fty;
    gs_glyph(*encode_char) (gs_show_enum *, gs_font *, gs_char *);
    gs_log2_scale_point log2_suggested_scale;
    gx_device_memory *dev_cache;
    gx_device_memory *dev_cache2;
    gx_device_null *dev_null;
    uint index;
    gs_char current_char;
    gs_glyph current_glyph;
    gs_fixed_point wxy;
    gs_fixed_point origin;
    cached_char *cc;
    gs_point width;
    show_width_status width_status;
    gs_log2_scale_point log2_current_scale;
    gx_font_stack fstack;
    int (*continue_proc) (gs_show_enum *);
};
typedef struct gs_font_dir_s gs_font_dir;
cached_char *gx_alloc_char_bits(gs_font_dir *, gx_device_memory *, gx_device_memory *, ushort, ushort, const gs_log2_scale_point *, int);
void gx_open_cache_device(gx_device_memory *, cached_char *);
void gx_free_cached_char(gs_font_dir *, cached_char *);
void gx_add_cached_char(gs_font_dir *, gx_device_memory *, cached_char *, cached_fm_pair *, const gs_log2_scale_point *);
void gx_add_char_bits(gs_font_dir *, cached_char *, const gs_log2_scale_point *);
cached_char *gx_lookup_cached_char(const gs_font *, const cached_fm_pair *, gs_glyph, int, int);
cached_char *gx_lookup_xfont_char(const gs_state *, cached_fm_pair *, gs_char, gs_glyph, const gx_xfont_callbacks *, int);
int gx_image_cached_char(gs_show_enum *, cached_char *);
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
typedef struct gs_uid_s gs_uid;
struct gs_uid_s {
    long id;
    long *xvalues;
};
bool uid_equal(const gs_uid *, const gs_uid *);
typedef struct gs_font_procs_s {
    int (*init_fstack) (gs_show_enum *, gs_font *);
    int (*next_char) (gs_show_enum *, gs_char *);
    gs_glyph(*encode_char) (gs_show_enum *, gs_font *, gs_char *);
    int (*build_char) (gs_show_enum *, gs_state *, gs_font *, gs_char, gs_glyph);
    gx_xfont_callbacks callbacks;
    int (*define_font) (gs_font_dir *, gs_font *);
    int (*make_font) (gs_font_dir *, const gs_font *, const gs_matrix *, gs_font **);
    int (*next_glyph) (gs_show_enum *, gs_char *, gs_glyph *);
} gs_font_procs;
int gs_default_init_fstack(gs_show_enum *, gs_font *);
int gs_default_next_char(gs_show_enum *, gs_char *);
gs_glyph gs_no_encode_char(gs_show_enum *, gs_font *, gs_char *);
int gs_no_build_char(gs_show_enum *, gs_state *, gs_font *, gs_char, gs_glyph);
int gs_no_define_font(gs_font_dir *, gs_font *);
int gs_no_make_font(gs_font_dir *, const gs_font *, const gs_matrix *, gs_font **);
int gs_base_make_font(gs_font_dir *, const gs_font *, const gs_matrix *, gs_font **);
int gs_default_next_glyph(gs_show_enum *, gs_char *, gs_glyph *);
typedef enum { ft_composite = 0, ft_encrypted = 1, ft_user_defined = 3, ft_disk_based = 4, ft_CID_encrypted = 9, ft_CID_user_defined = 10, ft_CID_TrueType = 11, ft_TrueType = 42 } font_type;
typedef enum { fbit_use_outlines = 0, fbit_use_bitmaps = 1, fbit_transform_bitmaps = 2 } fbit_type;
typedef struct gs_font_name_s {
    byte chars[47 + 1];
    uint size;
} gs_font_name;
struct gs_font_s {
    gs_font *next, *prev;
    gs_memory_t *memory;
    gs_font_dir *dir;
    gs_font *base;
    void *client_data;
    gs_matrix FontMatrix;
    font_type FontType;
    bool BitmapWidths;
    fbit_type ExactSize, InBetweenSize, TransformedChar;
    int WMode;
    int PaintType;
    float StrokeWidth;
    gs_font_procs procs;
    gs_font_name key_name, font_name;
};
extern const gs_memory_struct_type_t st_gs_font;
void gs_font_finalize(void *ptr);
extern const gs_memory_struct_type_t st_gs_font_ptr_element;
typedef struct gs_font_base_s gs_font_base;
struct gs_font_base_s {
    gs_font *next, *prev;
    gs_memory_t *memory;
    gs_font_dir *dir;
    gs_font *base;
    void *client_data;
    gs_matrix FontMatrix;
    font_type FontType;
    bool BitmapWidths;
    fbit_type ExactSize, InBetweenSize, TransformedChar;
    int WMode;
    int PaintType;
    float StrokeWidth;
    gs_font_procs procs;
    gs_font_name key_name, font_name;
    gs_rect FontBBox;
    gs_uid UID;
    int encoding_index;
    int nearest_encoding_index;
};
extern const gs_memory_struct_type_t st_gs_font_base;
typedef enum { fmap_8_8 = 2, fmap_escape = 3, fmap_1_7 = 4, fmap_9_7 = 5, fmap_SubsVector = 6, fmap_double_escape = 7, fmap_shift = 8, fmap_CMap = 9 } fmap_type;
typedef struct gs_cmap_s gs_cmap;
typedef struct gs_type0_data_s {
    fmap_type FMapType;
    byte EscChar, ShiftIn, ShiftOut;
    gs_const_string SubsVector;
    uint subs_size;
    uint subs_width;
    uint *Encoding;
    uint encoding_size;
    gs_font **FDepVector;
    uint fdep_size;
    const gs_cmap *CMap;
} gs_type0_data;
typedef struct gs_font_type0_s {
    gs_font *next, *prev;
    gs_memory_t *memory;
    gs_font_dir *dir;
    gs_font *base;
    void *client_data;
    gs_matrix FontMatrix;
    font_type FontType;
    bool BitmapWidths;
    fbit_type ExactSize, InBetweenSize, TransformedChar;
    int WMode;
    int PaintType;
    float StrokeWidth;
    gs_font_procs procs;
    gs_font_name key_name, font_name;
    gs_type0_data data;
} gs_font_type0;
extern const gs_memory_struct_type_t st_gs_font_type0;
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
struct cached_fm_pair_s {
    gs_font *font;
    gs_uid UID;
    uint hash;
    float mxx, mxy, myx, myy;
    int num_chars;
    bool xfont_tried;
    gx_xfont *xfont;
    gs_memory_t *memory;
    uint index;
};
typedef struct fm_pair_cache_s {
    uint msize, mmax;
    cached_fm_pair *mdata;
    uint mnext;
} fm_pair_cache;
typedef gx_bits_cache_chunk char_cache_chunk;
typedef gx_cached_bits_head cached_char_head;
struct cached_char_s {
    gx_cached_bits_head head;
    ushort width, height, shift;
    ushort raster;
    gx_bitmap_id id;
    cached_fm_pair *pair;
    gs_glyph code;
    byte wmode;
    char_cache_chunk *chunk;
    uint loc;
    uint pair_index;
    gx_xglyph xglyph;
    gs_fixed_point wxy;
    gs_fixed_point offset;
};
typedef struct char_cache_s {
    gx_bits_cache_chunk *chunks;
    uint cnext;
    uint bsize;
    uint csize;
    gs_memory_t *memory;
    cached_char **table;
    uint table_mask;
    uint bmax;
    uint cmax;
    uint bspace;
    uint lower;
    uint upper;
    gs_glyph_mark_proc_t mark_glyph;
    void *mark_glyph_data;
} char_cache;
struct gs_font_dir_s {
    gs_font *orig_fonts;
    gs_font *scaled_fonts;
    uint ssize, smax;
    fm_pair_cache fmcache;
    char_cache ccache;
    uint enum_index;
    uint enum_offset;
};
int gx_char_cache_alloc(gs_memory_t *, gs_font_dir *, uint, uint, uint, uint);
void gx_char_cache_init(gs_font_dir *);
void gx_purge_selected_cached_chars(gs_font_dir *, bool(*)(cached_char *, void *), void *);
cached_fm_pair *gx_lookup_fm_pair(gs_font *, const gs_state *);
cached_fm_pair *gx_add_fm_pair(gs_font_dir *, gs_font *, const gs_uid *, const gs_state *);
void gx_lookup_xfont(const gs_state *, cached_fm_pair *, int);
void gs_purge_fm_pair(gs_font_dir *, cached_fm_pair *, int);
typedef struct gs_path_enum_s gs_path_enum;
int gs_newpath(gs_state *), gs_moveto(gs_state *, floatp, floatp), gs_rmoveto(gs_state *, floatp, floatp), gs_lineto(gs_state *, floatp, floatp), gs_rlineto(gs_state *, floatp, floatp), gs_arc(gs_state *, floatp, floatp, floatp, floatp, floatp), gs_arcn(gs_state *, floatp, floatp, floatp, floatp, floatp), gs_arc_add(gs_state *, bool, floatp, floatp, floatp, floatp, floatp, bool), gs_arcto(gs_state *, floatp, floatp, floatp, floatp, floatp, float[4]), gs_curveto(gs_state *, floatp, floatp, floatp, floatp, floatp, floatp), gs_rcurveto(gs_state *, floatp, floatp, floatp, floatp, floatp, floatp), gs_closepath(gs_state *);
int gs_upmergepath(gs_state *);
int gs_currentpoint(const gs_state *, gs_point *), gs_upathbbox(gs_state *, gs_rect *, bool), gs_dashpath(gs_state *), gs_flattenpath(gs_state *), gs_reversepath(gs_state *), gs_strokepath(gs_state *);
gs_path_enum *gs_path_enum_alloc(gs_memory_t *, client_name_t);
int gs_path_enum_init(gs_path_enum *, const gs_state *);
int gs_path_enum_next(gs_path_enum *, gs_point[3]);
void gs_path_enum_cleanup(gs_path_enum *);
int gs_clippath(gs_state *), gs_initclip(gs_state *), gs_clip(gs_state *), gs_eoclip(gs_state *);
int gs_setclipoutside(gs_state *, bool);
bool gs_currentclipoutside(const gs_state *);
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
static gs_ptr_type_t show_enum_enum_ptrs(void *ptr, uint size, uint index, const void **pep);

//complexity is O(n) inferred by loopus
static void show_enum_reloc_ptrs(void *ptr, uint size, gc_state_t * gcst);
static const gs_memory_struct_type_t st_gs_show_enum = { sizeof(gs_show_enum), "gs_show_enum", 0, 0, show_enum_enum_ptrs, show_enum_reloc_ptrs, 0 };

static gs_ptr_type_t show_enum_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:{
	    if (index > ((gs_show_enum *) vptr)->fstack.depth + 6)
		return 0;
	    do {
		*pep = (const void *) (((gs_show_enum *) vptr)->fstack.items[index - 6].font);
		return (&ptr_struct_procs);
	    } while (0);
	}
    case 0:
	do {
	    *pep = (const void *) (((gs_show_enum *) vptr)->pgs);
	    return (&ptr_struct_procs);
	} while (0);
    case 1:
	do {
	    *pep = (const void *) &((gs_show_enum *) vptr)->str;
	    return (&ptr_const_string_procs);
	} while (0);
    case 2:
	do {
	    *pep = (const void *) (((gs_show_enum *) vptr)->show_gstate);
	    return (&ptr_struct_procs);
	} while (0);
    case 3:
	do {
	    *pep = (const void *) (((gs_show_enum *) vptr)->dev_cache);
	    return (&ptr_struct_procs);
	} while (0);
    case 4:
	do {
	    *pep = (const void *) (((gs_show_enum *) vptr)->dev_cache2);
	    return (&ptr_struct_procs);
	} while (0);
    case 5:
	do {
	    *pep = (const void *) (((gs_show_enum *) vptr)->dev_null);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void show_enum_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{ {
	int i;
	((gs_show_enum *) vptr)->pgs = gs_reloc_struct_ptr((const void *) ((const gs_show_enum *) vptr)->pgs, gcst);
	gs_reloc_const_string(&((gs_show_enum *) vptr)->str, gcst);
	((gs_show_enum *) vptr)->show_gstate = gs_reloc_struct_ptr((const void *) ((const gs_show_enum *) vptr)->show_gstate, gcst);
	((gs_show_enum *) vptr)->dev_cache = gs_reloc_struct_ptr((const void *) ((const gs_show_enum *) vptr)->dev_cache, gcst);
	((gs_show_enum *) vptr)->dev_cache2 = gs_reloc_struct_ptr((const void *) ((const gs_show_enum *) vptr)->dev_cache2, gcst);
	((gs_show_enum *) vptr)->dev_null = gs_reloc_struct_ptr((const void *) ((const gs_show_enum *) vptr)->dev_null, gcst);
	for (i = 0; i <= ((gs_show_enum *) vptr)->fstack.depth; i++)
	    ((gs_show_enum *) vptr)->fstack.items[i].font = gs_reloc_struct_ptr((const void *) ((const gs_show_enum *) vptr)->fstack.items[i].font, gcst);
}} static int continue_kshow(gs_show_enum *);

static int continue_show(gs_show_enum *);
static int continue_show_update(gs_show_enum *);
static int show_setup(gs_show_enum *, gs_state *, const char *, bool);
static void show_set_scale(gs_show_enum *);
static int show_cache_setup(gs_show_enum *);
static int show_state_setup(gs_show_enum *);
static int show_origin_setup(gs_state *, fixed, fixed, gs_char_path_mode);
static int stringwidth_setup(gs_show_enum *, gs_state *, const char *);
int gs_no_build_char(gs_show_enum * penum, gs_state * pgs, gs_font * pfont, gs_char chr, gs_glyph glyph)
{
    return 1;
}

gs_glyph gs_no_encode_char(gs_show_enum * penum, gs_font * pfont, gs_char * pchr)
{
    return ((gs_glyph) 0x7fffffff);
}

gs_show_enum *gs_show_enum_alloc(gs_memory_t * mem, gs_state * pgs, client_name_t cname)
{
    gs_show_enum *penum = (gs_show_enum *) (*(mem)->procs.alloc_struct) (mem, &st_gs_show_enum, cname);
    if (penum == 0)
	return 0;
    penum->pgs = pgs;
    penum->str.data = 0;
    penum->str.size = 0;
    penum->dev_cache = 0;
    penum->dev_cache2 = 0;
    penum->dev_null = 0;
    penum->fstack.depth = -1;
    return penum;
}

void gs_show_enum_release(gs_show_enum * penum, gs_memory_t * emem)
{
    gs_state *pgs = penum->pgs;
    gs_memory_t *mem = pgs->memory;
    penum->cc = 0;
    if (penum->dev_cache2 != 0) {
	(*(mem)->procs.free_object) (mem, penum->dev_cache2, "gs_show_enum_release(dev_cache2)");
	penum->dev_cache2 = 0;
    }
    if (penum->dev_cache != 0) {
	(*(mem)->procs.free_object) (mem, penum->dev_cache, "gs_show_enum_release(dev_cache)");
	penum->dev_cache = 0;
    }
    if (penum->dev_null != 0) {
	(*(mem)->procs.free_object) (mem, penum->dev_null, "gs_show_enum_release(dev_null)");
	penum->dev_null = 0;
    }
    if (emem != 0)
	(*(emem)->procs.free_object) (emem, penum, "gs_show_enum_release(enum)");
}

int gs_show_n_init(register gs_show_enum * penum, gs_state * pgs, const char *str, uint size)
{
    penum->str.size = size;
    penum->slow_show = ((bool) 0);
    return show_setup(penum, pgs, str, ((bool) 1));
}

int gs_show_init(gs_show_enum * penum, gs_state * pgs, const char *str)
{
    return gs_show_n_init(penum, pgs, str, strlen(str));
}

int gs_ashow_n_init(register gs_show_enum * penum, gs_state * pgs, floatp ax, floatp ay, const char *str, uint size)
{
    int code;
    penum->str.size = size;
    code = show_setup(penum, pgs, str, ((bool) 1));
    penum->add = ((bool) 1), penum->ax = ax, penum->ay = ay, penum->slow_show = ((bool) 1);
    return code;
}

int gs_ashow_init(gs_show_enum * penum, gs_state * pgs, floatp ax, floatp ay, const char *str)
{
    return gs_ashow_n_init(penum, pgs, ax, ay, str, strlen(str));
}

int gs_widthshow_n_init(register gs_show_enum * penum, gs_state * pgs, floatp cx, floatp cy, gs_char chr, const char *str, uint size)
{
    int code;
    penum->str.size = size;
    code = show_setup(penum, pgs, str, ((bool) 1));
    penum->wchr = chr, penum->wcx = cx, penum->wcy = cy, penum->slow_show = ((bool) 1);
    return code;
}

int gs_widthshow_init(gs_show_enum * penum, gs_state * pgs, floatp cx, floatp cy, gs_char chr, const char *str)
{
    return gs_widthshow_n_init(penum, pgs, cx, cy, chr, str, strlen(str));
}

int gs_awidthshow_n_init(register gs_show_enum * penum, gs_state * pgs, floatp cx, floatp cy, gs_char chr, floatp ax, floatp ay, const char *str, uint size)
{
    int code;
    penum->str.size = size;
    code = show_setup(penum, pgs, str, ((bool) 1));
    penum->add = ((bool) 1), penum->ax = ax, penum->ay = ay, penum->slow_show = ((bool) 1);
    penum->wchr = chr, penum->wcx = cx, penum->wcy = cy, penum->slow_show = ((bool) 1);
    return code;
}

int gs_awidthshow_init(gs_show_enum * penum, gs_state * pgs, floatp cx, floatp cy, gs_char chr, floatp ax, floatp ay, const char *str)
{
    return gs_awidthshow_n_init(penum, pgs, cx, cy, chr, ax, ay, str, strlen(str));
}

int gs_kshow_n_init(register gs_show_enum * penum, gs_state * pgs, const char *str, uint size)
{
    int code;
    if (pgs->font->FontType == ft_composite)
	return ((-10));
    penum->str.size = size;
    code = show_setup(penum, pgs, str, ((bool) 1));
    penum->do_kern = 1;
    penum->slow_show = ((bool) 1);
    return code;
}

int gs_kshow_init(gs_show_enum * penum, gs_state * pgs, const char *str)
{
    return gs_kshow_n_init(penum, pgs, str, strlen(str));
}

int gs_xyshow_n_init(register gs_show_enum * penum, gs_state * pgs, const char *str, uint size)
{
    int code;
    penum->str.size = size;
    code = show_setup(penum, pgs, str, ((bool) 1));
    penum->do_kern = -1;
    penum->slow_show = ((bool) 1);
    return code;
}

int gs_xyshow_init(gs_show_enum * penum, gs_state * pgs, const char *str)
{
    return gs_xyshow_n_init(penum, pgs, str, strlen(str));
}

static int setup_glyph(gs_show_enum *, gs_state *, gs_glyph);
static gs_glyph gs_glyphshow_encode_char(gs_show_enum *, gs_font *, gs_char *);
int gs_glyphshow_init(gs_show_enum * penum, gs_state * pgs, gs_glyph glyph)
{
    return setup_glyph(penum, pgs, glyph);
}

int gs_glyphpath_init(gs_show_enum * penum, gs_state * pgs, gs_glyph glyph, bool stroke_path)
{
    int code = setup_glyph(penum, pgs, glyph);
    penum->charpath_flag = (stroke_path ? cpm_true_charpath : cpm_false_charpath);
    penum->can_cache = -1;
    do {
    } while (0);
    return code;
}

static int setup_glyph(gs_show_enum * penum, gs_state * pgs, gs_glyph glyph)
{
    int code;
    if (pgs->font->FontType == ft_composite)
	return ((-10));
    penum->str.size = 1;
    penum->slow_show = ((bool) 0);
    code = show_setup(penum, pgs, "\000", ((bool) 1));
    penum->current_glyph = glyph;
    penum->encode_char = gs_glyphshow_encode_char;
    return code;
}

static gs_glyph gs_glyphshow_encode_char(gs_show_enum * penum, gs_font * pfont, gs_char * pchr)
{
    *pchr = ((gs_char) ~ 0L);
    return penum->current_glyph;
}

int gs_cshow_n_init(register gs_show_enum * penum, gs_state * pgs, const char *str, uint size)
{
    int code;
    penum->str.size = size;
    code = show_setup(penum, pgs, str, ((bool) 0));
    penum->do_kern = -1;
    penum->stringwidth_flag = -1;
    penum->slow_show = ((bool) 1);
    return code;
}

int gs_cshow_init(gs_show_enum * penum, gs_state * pgs, const char *str)
{
    return gs_cshow_n_init(penum, pgs, str, strlen(str));
}

int gs_stringwidth_n_init(gs_show_enum * penum, gs_state * pgs, const char *str, uint size)
{
    penum->str.size = size;
    return stringwidth_setup(penum, pgs, str);
}

int gs_stringwidth_init(gs_show_enum * penum, gs_state * pgs, const char *str)
{
    return gs_stringwidth_n_init(penum, pgs, str, strlen(str));
}

static int stringwidth_setup(gs_show_enum * penum, gs_state * pgs, const char *str)
{
    int code = (penum->slow_show = ((bool) 0), show_setup(penum, pgs, str, ((bool) 0)));
    gs_memory_t *mem = pgs->memory;
    gx_device_null *dev_null;
    if (code < 0)
	return code;
    dev_null = (gx_device_null *) (*(mem)->procs.alloc_struct) (mem, &st_device_null, "stringwidth_setup(dev_null)");
    if (dev_null == 0)
	return ((-25));
    penum->stringwidth_flag = 1;
    if ((code = gs_gsave(pgs)) < 0)
	return code;
    penum->level = pgs->level;
    gs_make_null_device(dev_null, mem);
    dev_null->target = ((pgs)->device);
    pgs->device = (gx_device *) dev_null;
    pgs->ctm_default_set = ((bool) 0);
    penum->dev_null = dev_null;
    gs_newpath(pgs);
    gx_translate_to_fixed(pgs, 0L, 0L);
    return gx_path_add_point(pgs->path, 0L, 0L);
}

int gs_charpath_n_init(gs_show_enum * penum, gs_state * pgs, const char *str, uint size, bool stroke_path)
{
    int code;
    penum->str.size = size;
    code = show_setup(penum, pgs, str, ((bool) 0));
    penum->charpath_flag = (stroke_path ? cpm_true_charpath : cpm_false_charpath);
    penum->can_cache = -1;
    do {
    } while (0);
    return code;
}

int gs_charpath_init(gs_show_enum * penum, gs_state * pgs, const char *str, bool stroke_path)
{
    return gs_charpath_n_init(penum, pgs, str, strlen(str), stroke_path);
}

int gs_charboxpath_n_init(gs_show_enum * penum, gs_state * pgs, const char *str, uint size, bool use_boxes)
{
    int code;
    penum->str.size = size;
    code = show_setup(penum, pgs, str, ((bool) 0));
    penum->charpath_flag = (use_boxes ? cpm_true_charboxpath : cpm_false_charboxpath);
    penum->can_cache = 0;
    do {
    } while (0);
    return code;
}

int gs_charboxpath_init(gs_show_enum * penum, gs_state * pgs, const char *str, bool stroke_path)
{
    return gs_charboxpath_n_init(penum, pgs, str, strlen(str), stroke_path);
}

static int set_cache_device(gs_show_enum *, gs_state *, const float *);
int gs_setcachedevice(gs_show_enum * penum, gs_state * pgs, const float *pw)
{
    int code = gs_setcharwidth(penum, pgs, pw[0], pw[1]);
    if (code < 0)
	return code;
    return set_cache_device(penum, pgs, pw + 2);
}

int gs_setcachedevice2(gs_show_enum * penum, gs_state * pgs, const float *pw2)
{
    int code;
    if (gs_rootfont(pgs)->WMode) {
	float vx = pw2[8], vy = pw2[9];
	gs_fixed_point pvxy, dvxy;
	cached_char *cc;
	if ((code = gs_point_transform2fixed(&pgs->ctm, -vx, -vy, &pvxy)) < 0 || (code = gs_distance_transform2fixed(&pgs->ctm, vx, vy, &dvxy)) < 0 || (code = gs_setcharwidth(penum, pgs, pw2[6], pw2[7])) < 0)
	    return code;
	gx_translate_to_fixed(pgs, pvxy.x, pvxy.y);
	code = set_cache_device(penum, pgs, pw2 + 2);
	if (code != 1)
	    return code;
	cc = penum->cc;
	cc->offset.x += dvxy.x;
	cc->offset.y += dvxy.y;
    } else {
	code = gs_setcharwidth(penum, pgs, pw2[0], pw2[1]);
	if (code < 0)
	    return code;
	code = set_cache_device(penum, pgs, pw2 + 2);
    }
    return code;
}

static int set_cache_device(register gs_show_enum * penum, gs_state * pgs, const float *pb)
{
    float llx = pb[0], lly = pb[1], urx = pb[2], ury = pb[3];
    gs_glyph glyph;
    if (pgs->in_cachedevice)
	return 0;
    pgs->in_cachedevice = 1;
    glyph = gs_show_current_glyph(penum);
    if (glyph == ((gs_glyph) 0x7fffffff))
	return 0;
    if (penum->can_cache <= 0 || !pgs->char_tm_valid) {
	do {
	} while (0);
	return 0;
    }
    {
	const gs_font *pfont = pgs->font;
	gs_font_dir *dir = pfont->dir;
	gx_device *dev = ((pgs)->device);
	int alpha_bits = (*((dev)->std_procs.get_alpha_bits)) (dev, go_text);
	gs_log2_scale_point log2_scale;
	static const fixed max_cdim[3] = { ((1L << 12) << ((1 << 1) * 8 - 0)) - ((1L << 12) >> 0) * 3, ((1L << 12) << ((1 << 1) * 8 - 1)) - ((1L << 12) >> 1) * 3, ((1L << 12) << ((1 << 1) * 8 - 2)) - ((1L << 12) >> 2) * 3 };
	ushort iwidth, iheight;
	cached_char *cc;
	gs_fixed_rect clip_box;
	int code;
	gs_fixed_point cll, clr, cul, cur, cdim;
	if ((code = gs_distance_transform2fixed(&pgs->ctm, llx, lly, &cll)) < 0 || (code = gs_distance_transform2fixed(&pgs->ctm, llx, ury, &clr)) < 0 || (code = gs_distance_transform2fixed(&pgs->ctm, urx, lly, &cul)) < 0 || (code = gs_distance_transform2fixed(&pgs->ctm, urx, ury, &cur)) < 0)
	    return code; {
	    fixed ctemp;
	    if ((cll.x) > (cur.x))
		ctemp = cll.x, cll.x = cur.x, cur.x = ctemp;
	    if ((cll.y) > (cur.y))
		ctemp = cll.y, cll.y = cur.y, cur.y = ctemp;
	    if ((clr.x) > (cul.x))
		ctemp = clr.x, clr.x = cul.x, cul.x = ctemp;
	    if ((clr.y) > (cul.y))
		ctemp = clr.y, clr.y = cul.y, cul.y = ctemp;
	    }
	    if (clr.x < cll.x)
		cll.x = clr.x, cur.x = cul.x;
	if (clr.y < cll.y)
	    cll.y = clr.y, cur.y = cul.y;
	cdim.x = cur.x - cll.x;
	cdim.y = cur.y - cll.y;
	show_set_scale(penum);
	log2_scale.x = penum->log2_suggested_scale.x;
	log2_scale.y = penum->log2_suggested_scale.y;
	if (alpha_bits > 1) {
	    int more_bits = alpha_bits - (log2_scale.x + log2_scale.y);
	    if (more_bits > 0) {
		if (log2_scale.x <= log2_scale.y) {
		    log2_scale.x += (more_bits + 1) >> 1;
		    log2_scale.y += more_bits >> 1;
		} else {
		    log2_scale.x += more_bits >> 1;
		    log2_scale.y += (more_bits + 1) >> 1;
		}
	    }
	} else if (pfont->PaintType == 2) {
	    log2_scale.x = log2_scale.y = 0;
	}
	if (cdim.x > max_cdim[log2_scale.x] || cdim.y > max_cdim[log2_scale.y])
	    return 0;
	iwidth = ((ushort) ((int) ((cdim.x) >> (12))) + 2) << log2_scale.x;
	iheight = ((ushort) ((int) ((cdim.y) >> (12))) + 2) << log2_scale.y;
	do {
	} while (0);
	if (penum->dev_cache == 0) {
	    code = show_cache_setup(penum);
	    if (code < 0)
		return code;
	}
	cc = gx_alloc_char_bits(dir, penum->dev_cache, (iwidth > 80000 / iheight && (1 << (log2_scale.x + log2_scale.y)) > alpha_bits ? penum->dev_cache2 : ((void *) 0)), iwidth, iheight, &log2_scale, alpha_bits);
	if (cc == 0)
	    return 0;
	cc->offset.x = (((-cll.x) + ((1 << 12) - 1)) & (-1L << 12));
	cc->offset.y = (((-cll.y) + ((1 << 12) - 1)) & (-1L << 12));
	do {
	} while (0);
	if ((code = gs_gsave(pgs)) < 0) {
	    gx_free_cached_char(dir, cc);
	    return code;
	}
	penum->cc = cc;
	cc->code = glyph;
	cc->wmode = gs_rootfont(pgs)->WMode;
	cc->wxy = penum->wxy;
	pgs->device = (gx_device *) penum->dev_cache;
	pgs->ctm_default_set = ((bool) 0);
	gx_translate_to_fixed(pgs, cc->offset.x << log2_scale.x, cc->offset.y << log2_scale.y);
	if ((log2_scale.x | log2_scale.y) != 0)
	    gx_scale_char_matrix(pgs, 1 << log2_scale.x, 1 << log2_scale.y);
	penum->dev_cache->initial_matrix = (*(const gs_matrix *) &(pgs)->ctm);
	penum->log2_current_scale.x = log2_scale.x;
	penum->log2_current_scale.y = log2_scale.y;
	clip_box.p.x = clip_box.p.y = 0;
	clip_box.q.x = ((fixed) (iwidth) << 12);
	clip_box.q.y = ((fixed) (iheight) << 12);
	if ((code = gx_clip_to_rectangle(pgs, &clip_box)) < 0)
	    return code;
	gx_set_device_color_1(pgs);
	pgs->in_cachedevice = 2;
    }
    penum->width_status = sws_cache;
    return 1;
}

int gs_setcharwidth(register gs_show_enum * penum, gs_state * pgs, floatp wx, floatp wy)
{
    int code;
    if (penum->width_status != sws_none)
	return ((-21));
    if ((code = gs_distance_transform2fixed(&pgs->ctm, wx, wy, &penum->wxy)) < 0)
	return code;
    if (penum->cc != 0) {
	penum->cc->wxy = penum->wxy;
	penum->width_status = sws_cache_width_only;
    } else {
	penum->width_status = sws_no_cache;
    }
    return (penum->stringwidth_flag != 0 ? 1 : 0);
}

int gs_show_next(gs_show_enum * penum)
{
    return (*penum->continue_proc) (penum);
}

static int show_update(gs_show_enum * penum);
static int show_move(gs_show_enum * penum);
static int show_proceed(gs_show_enum * penum);
static int show_finish(gs_show_enum * penum);
static int continue_show_update(register gs_show_enum * penum)
{
    int code = show_update(penum);
    if (code < 0)
	return code;
    code = show_move(penum);
    if (code != 0)
	return code;
    return show_proceed(penum);
}

static int continue_show(register gs_show_enum * penum)
{
    return show_proceed(penum);
}

static int continue_kshow(register gs_show_enum * penum)
{
    int code = show_state_setup(penum);
    if (code < 0)
	return code;
    return show_proceed(penum);
}

static int show_update(register gs_show_enum * penum)
{
    register gs_state *pgs = penum->pgs;
    cached_char *cc = penum->cc;
    int code;
    switch (penum->width_status) {
    case sws_none:
	penum->wxy.x = penum->wxy.y = 0;
	break;
    case sws_cache:
	switch (pgs->level - penum->level) {
	default:
	    return ((-10));
	case 2:
	    code = gs_grestore(pgs);
	    if (code < 0)
		return code;
	case 1:;
	}
	gx_add_cached_char(pgs->font->dir, penum->dev_cache, cc, gx_lookup_fm_pair(pgs->font, pgs), &penum->log2_current_scale);
	if (penum->stringwidth_flag != 0 || penum->charpath_flag != cpm_show)
	    break;
    case sws_cache_width_only:
	code = gs_grestore(pgs);
	if (code < 0)
	    return code;
	code = (*((pgs)->dev_color)->type->load) ((pgs)->dev_color, (const gs_imager_state *) (pgs), (pgs)->device, gs_color_select_texture);
	if (code < 0)
	    return code;
	return gx_image_cached_char(penum, cc);
    case sws_no_cache:;
    }
    if (penum->charpath_flag != cpm_show) {
	code = gx_path_add_point(pgs->show_gstate->path, penum->origin.x, penum->origin.y);
	if (code < 0)
	    return code;
    }
    return gs_grestore(pgs);
}

static int show_fast_move(gs_state * pgs, gs_fixed_point * pwxy)
{
    int code = (!(((pgs->path)->state_flags & (psf_position_valid + psf_outside_range)) == psf_position_valid) || pgs->path->bbox_set ? gx_path_add_relative_point(pgs->path, pwxy->x, pwxy->y) : (pgs->path->position.x += pwxy->x, pgs->path->position.y += pwxy->y, ((pgs->path)->state_flags = (pgs->path)->start_flags = psf_last_moveto), 0));
    if (code == (-13) && pgs->clamp_coordinates)
	code = 0;
    return code;
}

static int show_move(register gs_show_enum * penum)
{
    register gs_state *pgs = penum->pgs;
    if (penum->do_kern < 0) {
	penum->continue_proc = continue_show;
	return 3;
    }
    if (penum->add)
	gs_rmoveto(pgs, penum->ax, penum->ay);
    if (penum->wchr != ((gs_char) ~ 0L)) {
	gs_char chr = penum->current_char;
	int fdepth = penum->fstack.depth;
	if (fdepth > 0) {
	    uint fidx = penum->fstack.items[fdepth].index;
	    switch (((gs_font_type0 *) (penum->fstack.items[fdepth - 1].font))->data.FMapType) {
	    case fmap_1_7:
	    case fmap_9_7:
		chr += fidx << 7;
		break;
	    default:
		chr += fidx << 8;
	    }
	}
	if (chr == penum->wchr)
	    gs_rmoveto(pgs, penum->wcx, penum->wcy);
    }
    {
	int code = show_fast_move(pgs, &penum->wxy);
	if (code < 0)
	    return code;
    }
    if (penum->do_kern && penum->index < penum->str.size) {
	penum->continue_proc = continue_kshow;
	return 2;
    }
    return 0;
}

static int show_proceed(register gs_show_enum * penum)
{
    register gs_state *pgs = penum->pgs;
    gs_font *pfont;
    cached_fm_pair *pair = 0;
    gs_font *rfont = gs_rootfont(pgs);
    int wmode = rfont->WMode;
    int (*next_char) (gs_show_enum *, gs_char *) = rfont->procs.next_char;
    int (*next_glyph) (gs_show_enum *, gs_char *, gs_glyph *) = rfont->procs.next_glyph;
    gs_char chr;
    gs_glyph glyph;
    int code;
    cached_char *cc;
    gx_device *dev = ((pgs)->device);
    int alpha_bits = (*((dev)->std_procs.get_alpha_bits)) (dev, go_text);
    if (penum->charpath_flag == cpm_show && !penum->stringwidth_flag) {
	code = (*((pgs)->dev_color)->type->load) ((pgs)->dev_color, (const gs_imager_state *) (pgs), (pgs)->device, gs_color_select_texture);
	if (code < 0)
	    return code;
    }
  more:pfont = (penum->fstack.depth < 0 ? pgs->font : penum->fstack.items[penum->fstack.depth].font);
    if (penum->can_cache >= 0) {
	for (;;) {
	    switch ((code = (next_char == 0 ? (*next_glyph) (penum, &chr, &glyph) : (*(&glyph) = ((gs_glyph) 0x7fffffff), (*next_char) (penum, &chr))))) {
	    default:
		return code;
	    case 2:
		return show_finish(penum);
	    case 1:
		pfont = penum->fstack.items[penum->fstack.depth].font;
		pgs->char_tm_valid = ((bool) 0);
		show_state_setup(penum);
		pair = 0;
	    case 0:
		penum->current_char = chr;
		if (glyph == ((gs_glyph) 0x7fffffff)) {
		    glyph = (*penum->encode_char) (penum, pfont, &chr);
		    penum->current_char = chr;
		    if (glyph == ((gs_glyph) 0x7fffffff)) {
			cc = 0;
			goto no_cache;
		    }
		}
		if (pair == 0)
		    pair = gx_lookup_fm_pair(pfont, pgs);
		cc = gx_lookup_cached_char(pfont, pair, glyph, wmode, alpha_bits);
		if (cc == 0) {
		    if (pfont->ExactSize == fbit_use_outlines || pfont->PaintType == 2)
			goto no_cache;
		    if (pfont->BitmapWidths) {
			cc = gx_lookup_xfont_char(pgs, pair, chr, glyph, &pfont->procs.callbacks, wmode);
			if (cc == 0)
			    goto no_cache;
		    } else {
			if (penum->stringwidth_flag != 0 || penum->charpath_flag != cpm_show)
			    goto no_cache;
			cc = gx_lookup_xfont_char(pgs, pair, chr, glyph, &pfont->procs.callbacks, wmode);
			goto no_cache;
		    }
		}
		if (penum->charpath_flag != cpm_show) {
		    gx_path box_path;
		    gs_fixed_point pt;
		    fixed llx, lly, urx, ury;
		    code = gx_path_current_point(pgs->path, &pt);
		    if (code < 0)
			return code;
		    llx = (((pt.x - cc->offset.x) + ((1 << 12) >> 1)) & (-1L << 12)) + ((fixed) (penum->ftx) << 12);
		    lly = (((pt.y - cc->offset.y) + ((1 << 12) >> 1)) & (-1L << 12)) + ((fixed) (penum->fty) << 12);
		    urx = llx + ((fixed) (cc->width) << 12), ury = lly + ((fixed) (cc->height) << 12);
		    gx_path_init(&box_path, pgs->memory);
		    code = gx_path_add_rectangle(&box_path, llx, lly, urx, ury);
		    if (code >= 0)
			code = gx_path_add_char_path(pgs->show_gstate->path, &box_path, penum->charpath_flag);
		    if (code >= 0)
			code = gx_path_add_point(pgs->path, pt.x, pt.y);
		    gx_path_release(&box_path);
		    if (code < 0)
			return code;
		} else if (!penum->stringwidth_flag) {
		    code = gx_image_cached_char(penum, cc);
		    if (code < 0)
			return code;
		    else if (code > 0) {
			cc = 0;
			goto no_cache;
		    }
		}
		if (penum->slow_show) {
		    penum->wxy.x = cc->wxy.x;
		    penum->wxy.y = cc->wxy.y;
		    code = show_move(penum);
		} else
		    code = show_fast_move(pgs, &cc->wxy);
		if (code) {
		    penum->current_glyph = glyph;
		    return code;
		}
	    }
	}
    } else {
	switch ((code = (next_char == 0 ? (*next_glyph) (penum, &chr, &glyph) : (*(&glyph) = ((gs_glyph) 0x7fffffff), (*next_char) (penum, &chr))))) {
	default:
	    return code;
	case 2:
	    return show_finish(penum);
	case 1:
	    pfont = penum->fstack.items[penum->fstack.depth].font;
	    show_state_setup(penum);
	case 0:;
	}
	penum->current_char = chr;
	if (glyph != ((gs_glyph) 0x7fffffff)) {
	    glyph = (*penum->encode_char) (penum, pfont, &chr);
	    penum->current_char = chr;
	}
	cc = 0;
    }
  no_cache:penum->current_glyph = glyph;
    if ((code = gs_gsave(pgs)) < 0)
	return code;
    pgs->font = pfont;
    pgs->in_cachedevice = 0;
    penum->log2_current_scale.x = penum->log2_current_scale.y = 0;
    pgs->in_charpath = penum->charpath_flag;
    pgs->show_gstate = (penum->show_gstate == pgs ? pgs->saved : penum->show_gstate);
    pgs->stroke_adjust = ((bool) 0); {
	gs_fixed_point cpt;
	gx_path *ppath = pgs->path;
	if ((code = (!(((ppath)->state_flags & psf_position_valid) != 0) ? ((-14)) : ((&cpt)->x = ppath->position.x, (&cpt)->y = ppath->position.y, 0))) < 0)
	    goto rret;
	penum->origin.x = cpt.x;
	penum->origin.y = cpt.y;
	gs_currentcharmatrix(pgs, ((void *) 0), ((bool) 1));
	if (pgs->ctm.txy_fixed_valid && pgs->char_tm.txy_fixed_valid) {
	    fixed tx = pgs->ctm.tx_fixed;
	    fixed ty = pgs->ctm.ty_fixed;
	    gs_settocharmatrix(pgs);
	    cpt.x += pgs->ctm.tx_fixed - tx;
	    cpt.y += pgs->ctm.ty_fixed - ty;
	} else {
	    double tx = pgs->ctm.tx;
	    double ty = pgs->ctm.ty;
	    double fpx, fpy;
	    gs_settocharmatrix(pgs);
	    fpx = ((cpt.x) * (1.0 / (1 << 12))) + (pgs->ctm.tx - tx);
	    fpy = ((cpt.y) * (1.0 / (1 << 12))) + (pgs->ctm.ty - ty);
	    if (!(((fpx) >= -2.0 * (1L << (((sizeof(fixed) * 8 - 12)) - 2)) && (fpx) < 2.0 * (1L << (((sizeof(fixed) * 8 - 12)) - 2))) && ((fpy) >= -2.0 * (1L << (((sizeof(fixed) * 8 - 12)) - 2)) && (fpy) < 2.0 * (1L << (((sizeof(fixed) * 8 - 12)) - 2))))) {
		(code = (-13));
		goto rret;
	    }
	    cpt.x = ((fixed) ((fpx) * (float) (1 << 12)));
	    cpt.y = ((fixed) ((fpy) * (float) (1 << 12)));
	} gs_newpath(pgs);
	code = show_origin_setup(pgs, cpt.x, cpt.y, penum->charpath_flag);
	if (code < 0)
	    goto rret;
    }
    penum->width_status = sws_none;
    penum->continue_proc = continue_show_update;
    penum->cc = cc;
    code = (*pfont->procs.build_char) (penum, pgs, pfont, chr, glyph);
    if (code < 0) {
	((void) ((code)));
	goto rret;
    }
    if (code == 0) {
	code = show_update(penum);
	if (code < 0)
	    goto rret;
	code = show_move(penum);
	if (code)
	    return code;
	goto more;
    }
    if (penum->dev_cache == 0) {
	code = show_cache_setup(penum);
	if (code < 0)
	    goto rret;
    }
    return 1;
  rret:gs_grestore(pgs);
    return code;
}

static int show_finish(gs_show_enum * penum)
{
    gs_state *pgs = penum->pgs;
    int code, rcode;
    gs_show_enum_release(penum, ((void *) 0));
    if (penum->stringwidth_flag <= 0)
	return 0;
    code = gs_currentpoint(pgs, &penum->width);
    rcode = gs_grestore(pgs);
    return (code < 0 ? code : rcode);
}

gs_char gs_show_current_char(const gs_show_enum * penum)
{
    return penum->current_char;
}

gs_glyph gs_show_current_glyph(const gs_show_enum * penum)
{
    return penum->current_glyph;
}

int gs_show_current_width(const gs_show_enum * penum, gs_point * ppt)
{
    return gs_idtransform(penum->pgs, ((penum->wxy.x) * (1.0 / (1 << 12))), ((penum->wxy.y) * (1.0 / (1 << 12))), ppt);
}

gs_char gs_kshow_previous_char(const gs_show_enum * penum)
{
    return penum->current_char;
}

gs_char gs_kshow_next_char(const gs_show_enum * penum)
{
    return penum->str.data[penum->index];
}

gs_font *gs_show_current_font(const gs_show_enum * penum)
{
    return (penum->fstack.depth < 0 ? penum->pgs->font : penum->fstack.items[penum->fstack.depth].font);
}

gs_char_path_mode gs_show_in_charpath(const gs_show_enum * penum)
{
    return penum->charpath_flag;
}

void gs_show_width(const gs_show_enum * penum, gs_point * ppt)
{
    *ppt = penum->width;
} bool gs_show_width_only(const gs_show_enum * penum)
{
    return ((penum->stringwidth_flag != 0 || penum->cc != 0) && penum->pgs->level == penum->level + 1);
}

static int show_setup(register gs_show_enum * penum, gs_state * pgs, const char *str, bool propagate_charpath)
{
    int code;
    gs_font *pfont;
    if (!(((pgs)->dev_color)->type != (&gx_dc_procs_none))) {
	int code_dc = gx_remap_color(pgs);
	if (code_dc != 0)
	    return code_dc;
    };
    pfont = pgs->font;
    penum->pgs = pgs;
    penum->level = pgs->level;
    penum->str.data = (const byte *) str;
    penum->wchr = ((gs_char) ~ 0L);
    penum->add = ((bool) 0);
    penum->do_kern = 0;
    penum->charpath_flag = (propagate_charpath ? pgs->in_charpath : cpm_show);
    penum->stringwidth_flag = 0;
    penum->dev_cache = 0;
    penum->dev_cache2 = 0;
    penum->dev_null = 0;
    penum->index = 0;
    penum->cc = 0;
    penum->continue_proc = continue_show;
    code = (*pfont->procs.init_fstack) (penum, pfont);
    if (code < 0)
	return code;
    penum->can_cache = (penum->charpath_flag == cpm_show ? 1 : -1);
    code = show_state_setup(penum);
    if (code < 0)
	return code;
    penum->show_gstate = (propagate_charpath && (pgs->in_charpath != 0) ? pgs->show_gstate : pgs);
    return 0;
}

static int show_state_setup(gs_show_enum * penum)
{
    gs_state *pgs = penum->pgs;
    const gs_font *pfont;
    if (penum->fstack.depth <= 0) {
	pfont = pgs->font;
	gs_currentcharmatrix(pgs, ((void *) 0), 1);
    } else {
	gs_matrix mat;
	const gx_font_stack_item *pfsi = &penum->fstack.items[penum->fstack.depth];
	pfont = pfsi->font;
	gs_matrix_multiply(&pfont->FontMatrix, &pfsi[-1].font->FontMatrix, &mat);
	gs_setcharmatrix(pgs, &mat);
    } if ((penum->can_cache >= 0)) {
	gs_fixed_rect cbox;
	gx_cpath_inner_box(pgs->clip_path, &cbox);
	penum->ibox.p.x = ((int) ((cbox.p.x) >> (12)));
	penum->ibox.p.y = ((int) ((cbox.p.y) >> (12)));
	penum->ibox.q.x = ((int) (((cbox.q.x) + ((1 << 12) - 1)) >> (12)));
	penum->ibox.q.y = ((int) (((cbox.q.y) + ((1 << 12) - 1)) >> (12)));
	gx_cpath_outer_box(pgs->clip_path, &cbox);
	penum->obox.p.x = ((int) ((cbox.p.x) >> (12)));
	penum->obox.p.y = ((int) ((cbox.p.y) >> (12)));
	penum->obox.q.x = ((int) (((cbox.q.x) + ((1 << 12) - 1)) >> (12)));
	penum->obox.q.y = ((int) (((cbox.q.y) + ((1 << 12) - 1)) >> (12)));
	if (pgs->ctm.txy_fixed_valid && pgs->char_tm.txy_fixed_valid) {
	    penum->ftx = (int) ((long) ((pgs->char_tm.tx_fixed - pgs->ctm.tx_fixed) >> (12)));
	    penum->fty = (int) ((long) ((pgs->char_tm.ty_fixed - pgs->ctm.ty_fixed) >> (12)));
	} else {
	    double fdx = pgs->char_tm.tx - pgs->ctm.tx;
	    double fdy = pgs->char_tm.ty - pgs->ctm.ty;
	    if (!(((fdx) >= -2.0 * (1L << ((((1 << 2) * 8 - 1)) - 2)) && (fdx) < 2.0 * (1L << ((((1 << 2) * 8 - 1)) - 2))) && ((fdy) >= -2.0 * (1L << ((((1 << 2) * 8 - 1)) - 2)) && (fdy) < 2.0 * (1L << ((((1 << 2) * 8 - 1)) - 2)))))
		return ((-13));
	    penum->ftx = (int) fdx;
	    penum->fty = (int) fdy;
    }}
    penum->encode_char = pfont->procs.encode_char;
    return 0;
}

static void show_set_scale(gs_show_enum * penum)
{
    const gs_state *pgs = penum->pgs;
    if (penum->charpath_flag == cpm_show && !penum->stringwidth_flag && ((pgs->path)->first_subpath == 0) && (((pgs->char_tm.xy) == 0.0 && (pgs->char_tm.yx) == 0.0) || ((pgs->char_tm.xx) == 0.0 && (pgs->char_tm.yy) == 0.0))) {
	const gs_font_base *pfont = (gs_font_base *) pgs->font;
	gs_fixed_point extent;
	int code = gs_distance_transform2fixed(&pgs->char_tm, pfont->FontBBox.q.x - pfont->FontBBox.p.x, pfont->FontBBox.q.y - pfont->FontBBox.p.y, &extent);
	if (code >= 0) {
	    int sx = (extent.x == 0 ? 0 : ((extent.x) < 0 ? -(extent.x) : (extent.x)) < ((fixed) (25) << 12) ? 2 : ((extent.x) < 0 ? -(extent.x) : (extent.x)) < ((fixed) (60) << 12) ? 1 : 0);
	    int sy = (extent.y == 0 ? 0 : ((extent.y) < 0 ? -(extent.y) : (extent.y)) < ((fixed) (25) << 12) ? 2 : ((extent.y) < 0 ? -(extent.y) : (extent.y)) < ((fixed) (60) << 12) ? 1 : 0);
	    if (sx == 0 && sy != 0)
		sx = 1;
	    else if (sy == 0 && sx != 0)
		sy = 1;
	    penum->log2_suggested_scale.x = sx;
	    penum->log2_suggested_scale.y = sy;
	    return;
	}
    }
    penum->log2_suggested_scale.x = penum->log2_suggested_scale.y = 0;
}

static int show_cache_setup(gs_show_enum * penum)
{
    gs_state *pgs = penum->pgs;
    gs_memory_t *mem = pgs->memory;
    gx_device_memory *dev = (gx_device_memory *) (*(mem)->procs.alloc_struct) (mem, &st_device_memory, "show_cache_setup(dev_cache)");
    gx_device_memory *dev2 = (gx_device_memory *) (*(mem)->procs.alloc_struct) (mem, &st_device_memory, "show_cache_setup(dev_cache2)");
    if (dev == 0 || dev2 == 0) {
	(*(mem)->procs.free_object) (mem, dev2, "show_cache_setup(dev_cache2)");
	(*(mem)->procs.free_object) (mem, dev, "show_cache_setup(dev_cache)");
	return ((-25));
    }
    gs_make_mem_mono_device(dev, mem, ((pgs)->device));
    penum->dev_cache = dev;
    penum->dev_cache2 = dev2;
    *dev2 = *dev;
    return 0;
}

static int show_origin_setup(gs_state * pgs, fixed cpt_x, fixed cpt_y, gs_char_path_mode charpath_flag)
{
    if (charpath_flag == cpm_show) {
	cpt_x = (((cpt_x) + ((1 << 12) >> 1)) & (-1L << 12));
	cpt_y = (((cpt_y) + ((1 << 12) >> 1)) & (-1L << 12));
    }
    return gx_translate_to_fixed(pgs, cpt_x, cpt_y);
}

int gs_default_init_fstack(gs_show_enum * penum, gs_font * pfont)
{
    penum->fstack.depth = -1;
    return 0;
}

int gs_default_next_char(gs_show_enum * penum, gs_char * pchr)
{
    gs_glyph ignore_glyph;
    return gs_default_next_glyph(penum, pchr, &ignore_glyph);
}

int gs_default_next_glyph(gs_show_enum * penum, gs_char * pchr, gs_glyph * pglyph)
{
    if (penum->index == penum->str.size)
	return 2;
    *pchr = penum->str.data[penum->index++];
    *pglyph = ((gs_glyph) 0x7fffffff);
    return 0;
}
