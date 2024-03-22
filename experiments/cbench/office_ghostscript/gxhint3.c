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
int imod(int m, int n);
int igcd(int x, int y);
typedef long fixed;
typedef ulong ufixed;
typedef struct gs_fixed_point_s {
    fixed x, y;
} gs_fixed_point;
typedef struct gs_fixed_rect_s {
    gs_fixed_point p, q;
} gs_fixed_rect;
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
typedef ulong gs_char;
typedef ulong gs_glyph;
typedef bool(*gs_glyph_mark_proc_t) (gs_glyph glyph, void *proc_data);
typedef const char *(*gs_proc_glyph_name_t) (gs_glyph, uint *);
typedef gs_glyph(*gs_proc_known_encode_t) (gs_char, int);
typedef struct gx_xfont_callbacks_s {
    const char *(*glyph_name) (gs_glyph, uint *);
    gs_glyph(*known_encode) (gs_char, int);
} gx_xfont_callbacks;
typedef enum { cpm_show, cpm_false_charpath, cpm_true_charpath, cpm_false_charboxpath, cpm_true_charboxpath } gs_char_path_mode;
typedef struct gs_show_enum_s gs_show_enum;
typedef struct gs_font_s gs_font;
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
typedef struct gx_device_memory_s gx_device_memory;
typedef struct gx_device_null_s gx_device_null;
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
typedef struct gs_type1_data_s gs_type1_data;
typedef struct gs_font_type1_s gs_font_type1;
struct gs_type1_data_s {
    int CharstringType;
    int (*subr_proc) (gs_font_type1 *, int, bool, gs_const_string *);
    int (*seac_proc) (gs_font_type1 *, int, gs_const_string *);
    int (*push_proc) (gs_font_type1 *, const fixed *, int);
    int (*pop_proc) (gs_font_type1 *, fixed *);
    void *proc_data;
    int lenIV;
    uint subroutineNumberBias;
    uint gsubrNumberBias;
    long initialRandomSeed;
    fixed defaultWidthX;
    fixed nominalWidthX;
    int BlueFuzz;
    float BlueScale;
    float BlueShift;
    struct {
	int count;
	float values[(7) * 2];
    } BlueValues;
    float ExpansionFactor;
    bool ForceBold;
    struct {
	int count;
	float values[(7) * 2];
    } FamilyBlues;
    struct {
	int count;
	float values[(5) * 2];
    } FamilyOtherBlues;
    int LanguageGroup;
    struct {
	int count;
	float values[(5) * 2];
    } OtherBlues;
    bool RndStemUp;
    struct {
	int count;
	float values[1];
    } StdHW;
    struct {
	int count;
	float values[1];
    } StdVW;
    struct {
	int count;
	float values[12];
    } StemSnapH;
    struct {
	int count;
	float values[12];
    } StemSnapV;
    struct {
	int count;
	float values[16];
    } WeightVector;
};
struct gs_font_type1_s {
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
    gs_type1_data data;
};
extern const gs_memory_struct_type_t st_gs_font_type1;
typedef ushort crypt_state;
int gs_type1_encrypt(byte * dest, const byte * src, uint len, crypt_state * pstate);
int gs_type1_decrypt(byte * dest, const byte * src, uint len, crypt_state * pstate);
typedef struct gs_type1_state_s gs_type1_state;
typedef struct gx_path_s gx_path;
int gs_type1_interp_init(gs_type1_state * pcis, gs_imager_state * pis, gx_path * ppath, const gs_log2_scale_point * pscale, bool charpath_flag, int paint_type, gs_font_type1 * pfont);
void gs_type1_set_lsb(gs_type1_state * pcis, const gs_point * psbpt);
void gs_type1_set_width(gs_type1_state * pcis, const gs_point * pwpt);
int gs_type1_interpret(gs_type1_state *, const gs_const_string *, int *);
typedef enum { c_num1 = 32, c_pos2_0 = 247, c_pos2_1 = 248, c_pos2_2 = 249, c_pos2_3 = 250, c_neg2_0 = 251, c_neg2_1 = 252, c_neg2_2 = 253, c_neg2_3 = 254 } char_num_command;
typedef enum { c_undef0 = 0, c_undef2 = 2, c_callsubr = 10, c_return = 11, c_undoc15 = 15, c_undef17 = 17, cx_hstem = 1, cx_vstem = 3, cx_vmoveto = 4, cx_rlineto = 5, cx_hlineto = 6, cx_vlineto = 7, cx_rrcurveto = 8, cx_escape = 12, cx_endchar = 14, cx_rmoveto = 21, cx_hmoveto = 22, cx_vhcurveto = 30, cx_hvcurveto = 31, cx_num4 = 255, c1_closepath = 9, c1_hsbw = 13, c2_blend = 16, c2_hstemhm = 18, c2_hintmask = 19, c2_cntrmask = 20, c2_vstemhm = 23, c2_rcurveline = 24, c2_rlinecurve = 25, c2_vvcurveto = 26, c2_hhcurveto = 27, c2_shortint = 28, c2_callgsubr = 29 } char_command;
typedef enum { ce1_dotsection = 0, ce1_vstem3 = 1, ce1_hstem3 = 2, ce1_seac = 6, ce1_sbw = 7, ce1_div = 12, ce1_undoc15 = 15, ce1_callothersubr = 16, ce1_pop = 17, ce1_setcurrentpoint = 33 } char1_extended_command;
typedef enum { ce2_and = 3, ce2_or = 4, ce2_not = 5, ce2_store = 8, ce2_abs = 9, ce2_add = 10, ce2_sub = 11, ce2_div = 12, ce2_load = 13, ce2_neg = 14, ce2_eq = 15, ce2_drop = 18, ce2_put = 20, ce2_get = 21, ce2_ifelse = 22, ce2_random = 23, ce2_mul = 24, ce2_sqrt = 26, ce2_dup = 27, ce2_exch = 28, ce2_index = 29, ce2_roll = 30, ce2_hflex = 34, ce2_flex = 35, ce2_hflex1 = 36, ce2_flex1 = 37 } char2_extended_command;
typedef struct gs_op1_state_s {
    struct gx_path_s *ppath;
    struct gs_type1_state_s *pcis;
    fixed_coeff fc;
    gs_fixed_point co;
    gs_fixed_point p;
} gs_op1_state;
typedef gs_op1_state *is_ptr;
void accum_xy_proc(is_ptr ps, fixed dx, fixed dy);
int gs_op1_closepath(is_ptr ps);
int gs_op1_rrcurveto(is_ptr ps, fixed dx1, fixed dy1, fixed dx2, fixed dy2, fixed dx3, fixed dy3);
typedef struct pixel_scale_s {
    fixed unit;
    fixed half;
    int log2_unit;
} pixel_scale;
typedef struct point_scale_s {
    pixel_scale x, y;
} point_scale;
typedef struct {
    int count;
    fixed data[(1 + 12)];
} stem_snap_table;
typedef struct {
    int is_top_zone;
    fixed v0, v1;
    fixed flat;
} alignment_zone;
typedef struct font_hints_s {
    bool axes_swapped;
    bool x_inverted, y_inverted;
    bool use_x_hints;
    bool use_y_hints;
    point_scale scale;
    stem_snap_table snap_h;
    stem_snap_table snap_v;
    fixed blue_fuzz, blue_shift;
    bool suppress_overshoot;
    int a_zone_count;
    alignment_zone a_zones[(7 + 5)];
} font_hints;
typedef struct {
    fixed v0, v1;
    fixed dv0, dv1;
} stem_hint;
typedef struct {
    int count;
    int current;
    int replaced_count;
    stem_hint data[96];
} stem_hint_table;
typedef struct {
    const byte *ip;
    crypt_state dstate;
    gs_const_string char_string;
} ip_state;
typedef struct segment_s segment;
struct gs_type1_state_s {
    gs_font_type1 *pfont;
    gs_imager_state *pis;
    gx_path *path;
    bool charpath_flag;
    int paint_type;
    fixed_coeff fc;
    float flatness;
    point_scale scale;
    font_hints fh;
    gs_fixed_point origin;
    fixed ostack[48];
    int os_count;
    ip_state ipstack[10 + 1];
    int ips_count;
    int init_done;
    bool sb_set;
    bool width_set;
    bool have_hintmask;
    gs_fixed_point lsb;
    gs_fixed_point width;
    int seac_base;
    gs_fixed_point adxy;
    fixed asb_diff;
    gs_fixed_point position;
    int flex_path_state_flags;
    gs_fixed_point flex_points[8];
    int flex_count;
    int ignore_pops;
    int dotsection_flag;
    bool vstem3_set;
    gs_fixed_point vs_offset;
    int hints_initial;
    gs_fixed_point unmoved_start;
    segment *hint_next;
    int hints_pending;
    gs_fixed_point unmoved_end;
    stem_hint_table hstem_hints;
    stem_hint_table vstem_hints;
    fixed transient_array[32];
};
extern const gs_memory_struct_type_t st_gs_type1_state;
extern int (*gs_charstring_interpreter[3]) (gs_type1_state * pcis, const gs_const_string * str, int *pindex);
void gs_type1_finish_init(gs_type1_state * pcis, is_ptr ps);
int gs_type1_sbw(gs_type1_state * pcis, fixed sbx, fixed sby, fixed wx, fixed wy);
int gs_type1_endchar(gs_type1_state * pcis);
void reset_font_hints(font_hints *, const gs_log2_scale_point *);
void compute_font_hints(font_hints *, const gs_matrix_fixed *, const gs_log2_scale_point *, const gs_type1_data *);
void reset_stem_hints(gs_type1_state *), update_stem_hints(gs_type1_state *), type1_replace_stem_hints(gs_type1_state *), type1_apply_path_hints(gs_type1_state *, bool, gx_path *), type1_do_hstem(gs_type1_state *, fixed, fixed, const gs_matrix_fixed *), type1_do_vstem(gs_type1_state *, fixed, fixed, const gs_matrix_fixed *), type1_do_center_vstem(gs_type1_state *, fixed, fixed, const gs_matrix_fixed *);
typedef enum { gs_cap_butt = 0, gs_cap_round = 1, gs_cap_square = 2, gs_cap_triangle = 3 } gs_line_cap;
typedef enum { gs_join_miter = 0, gs_join_round = 1, gs_join_bevel = 2, gs_join_none = 3, gs_join_triangle = 4 } gs_line_join;
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
typedef struct gx_clip_path_s gx_clip_path;
typedef struct gx_clip_list_s gx_clip_list;
int gx_clip_to_rectangle(gs_state *, gs_fixed_rect *), gx_clip_to_path(gs_state *), gx_cpath_init(gx_clip_path *, gs_memory_t *), gx_cpath_from_rectangle(gx_clip_path *, gs_fixed_rect *, gs_memory_t *), gx_cpath_intersect(gs_state *, gx_clip_path *, gx_path *, int), gx_cpath_scale_exp2(gx_clip_path *, int, int);
void gx_cpath_release(gx_clip_path *), gx_cpath_share(gx_clip_path *);
int gx_cpath_path(gx_clip_path *, gx_path *);
bool gx_cpath_inner_box(const gx_clip_path *, gs_fixed_rect *), gx_cpath_outer_box(const gx_clip_path *, gs_fixed_rect *), gx_cpath_includes_rectangle(const gx_clip_path *, fixed, fixed, fixed, fixed);
int gx_cpath_set_outside(gx_clip_path *, bool);
bool gx_cpath_is_outside(const gx_clip_path *);
typedef enum { s_start, s_line, s_line_close, s_curve } segment_type;
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
static void apply_hstem_hints(gs_type1_state *, int, gs_fixed_point *), apply_vstem_hints(gs_type1_state *, int, gs_fixed_point *);
static int line_hints(const gs_type1_state * pcis, const gs_fixed_point * p0, const gs_fixed_point * p1)
{
    fixed dx = p1->x - p0->x, adx;
    fixed dy = p1->y - p0->y, ady;
    int hints;
    if (pcis->fh.axes_swapped) {
	fixed t = dx;
	dx = dy;
	dy = t;
    }
    if (pcis->fh.x_inverted)
	dx = -dx;
    if (pcis->fh.y_inverted)
	dy = -dy;
    adx = ((dx) < 0 ? -(dx) : (dx));
    ady = ((dy) < 0 ? -(dy) : (dy));
    if (dy != 0 && ((adx) <= (ady) >> 4))
	hints = (dy > 0 ? 005 : 003);
    else if (dx != 0 && ((ady) <= (adx) >> 4))
	hints = (dx < 0 ? 050 : 030);
    else
	hints = 0;
    do {
    } while (0);
    return hints;
}

static void apply_hints_at(gs_type1_state * pcis, int hints, gs_fixed_point * ppt, gs_fixed_point * pdiff)
{
    fixed px = ppt->x, py = ppt->y;
    do {
    } while (0);
    if ((hints & 001) != 0 && (pcis->vstem_hints.count & pcis->dotsection_flag) != 0) {
	apply_vstem_hints(pcis, (hints & 005) - (hints & 003), ppt);
    }
    if ((hints & 010) != 0 && (pcis->hstem_hints.count & pcis->dotsection_flag) != 0) {
	apply_hstem_hints(pcis, (hints & 030) - (hints & 050), ppt);
    }
    if (pdiff != ((void *) 0))
	pdiff->x = ppt->x - px, pdiff->y = ppt->y - py;
    do {
    } while (0);
}

static void adjust_curve_start(curve_segment * pcseg, const gs_fixed_point * pdiff)
{
    fixed dx = pdiff->x, dy = pdiff->y;
    fixed dx2 = ((dx) >> (2)), dy2 = ((dy) >> (2));
    (pcseg->p1).x += (dx), (pcseg->p1).y += (dy);
    (pcseg->p2).x += (dx2), (pcseg->p2).y += (dy2);
} static void adjust_curve_end(curve_segment * pcseg, const gs_fixed_point * pdiff)
{
    fixed dx = pdiff->x, dy = pdiff->y;
    fixed dx2 = ((dx) >> (2)), dy2 = ((dy) >> (2));
    (pcseg->p1).x += (dx2), (pcseg->p1).y += (dy2);
    (pcseg->p2).x += (dx), (pcseg->p2).y += (dy);
} static void apply_final_hint(segment * pseg_last, const gs_fixed_point * pdiff)
{
    segment *pseg;
    for (pseg = pseg_last;; pseg = pseg->prev) {
	segment *prev = pseg->prev;
	switch (pseg->type) {
	case s_curve:
	    adjust_curve_end(((curve_segment *) pseg), pdiff);
	    return;
	case s_line:
	case s_line_close:
	    if (!((((pseg->pt).x - (prev->pt).x) < 0 ? -((pseg->pt).x - (prev->pt).x) : ((pseg->pt).x - (prev->pt).x)) + (((pseg->pt).y - (prev->pt).y) < 0 ? -((pseg->pt).y - (prev->pt).y) : ((pseg->pt).y - (prev->pt).y)) < 1L * 4))
		return;
	    (prev->pt).x += ((*pdiff).x), (prev->pt).y += ((*pdiff).y);
	    break;
	default:
	    return;
	}
    }
}

void type1_apply_path_hints(gs_type1_state * pcis, bool closing, gx_path * ppath)
{
    segment *pseg = pcis->hint_next;
    segment *pnext;
    subpath *psub = ppath->current_subpath;
    int hints = pcis->hints_pending;
    gs_fixed_point diff;
    if (pseg == 0) {
	if (psub == 0)
	    return;
	if (psub->is_closed && !closing)
	    return;
	pseg = (segment *) psub;
	if (pseg->next == 0)
	    return;
	hints = 0;
	pcis->unmoved_start = psub->pt;
	pcis->unmoved_end = psub->pt;
    } else
	hints = pcis->hints_pending;
    diff.x = diff.y = 0;
    for (; (pnext = pseg->next) != 0; pseg = pnext) {
	int hints_next;
	gs_fixed_point dseg;
	switch (pnext->type) {
	case s_curve:{
		int hints_first = line_hints(pcis, &pcis->unmoved_end, &((curve_segment *) pnext)->p1) & ~hints;
		gs_fixed_point diff2;
		if (pseg == (segment *) psub)
		    pcis->hints_initial = hints_first;
		if (hints_first)
		    apply_hints_at(pcis, hints_first, &pseg->pt, &dseg);
		else
		    dseg.x = dseg.y = 0;
		diff2.x = pseg->pt.x - pcis->unmoved_end.x;
		diff2.y = pseg->pt.y - pcis->unmoved_end.y;
		hints_next = line_hints(pcis, &((curve_segment *) pnext)->p2, &pnext->pt);
		adjust_curve_start(((curve_segment *) pnext), &diff2);
		if (hints_next) {
		    apply_hints_at(pcis, hints_next, &((curve_segment *) pnext)->p2, &diff);
		    pcis->unmoved_end = pnext->pt;
		    (pnext->pt).x += ((diff).x), (pnext->pt).y += ((diff).y);
		} else
		    pcis->unmoved_end = pnext->pt;
	    }
	    break;
	case s_line_close:
	    pnext->pt = pcis->unmoved_start;
	default:
	    if (((((pcis->unmoved_end).x - (pnext->pt).x) < 0 ? -((pcis->unmoved_end).x - (pnext->pt).x) : ((pcis->unmoved_end).x - (pnext->pt).x)) + (((pcis->unmoved_end).y - (pnext->pt).y) < 0 ? -((pcis->unmoved_end).y - (pnext->pt).y) : ((pcis->unmoved_end).y - (pnext->pt).y)) < 1L * 4)) {
		hints_next = hints;
		dseg.x = dseg.y = 0;
	    } else {
		hints_next = line_hints(pcis, &pcis->unmoved_end, &pnext->pt);
		if (hints_next & ~hints)
		    apply_hints_at(pcis, hints_next & ~hints, &pseg->pt, &dseg);
		else
		    dseg.x = dseg.y = 0;
	    }
	    if (pseg == (segment *) psub)
		pcis->hints_initial = hints_next;
	    pcis->unmoved_end = pnext->pt;
	    if (hints_next)
		apply_hints_at(pcis, hints_next, &pnext->pt, ((void *) 0));
	} if (pseg->type == s_curve)
	    adjust_curve_end(((curve_segment *) pseg), &dseg);
	hints = hints_next;
    }
    if (closing) {
	fixed ctemp;
	bool closed = (pseg->type == s_line_close || (ctemp = pseg->pt.x - psub->pt.x, ((ctemp) < 0 ? -(ctemp) : (ctemp)) < ((fixed) ((0.1) * (float) (1 << 12)))) || (ctemp = pseg->pt.y - psub->pt.y, ((ctemp) < 0 ? -(ctemp) : (ctemp)) < ((fixed) ((0.1) * (float) (1 << 12)))));
	segment *pfirst = psub->next;
	int hints_first = pcis->hints_initial;
	if (closed) {
	    int do_x, do_y;
	    gs_fixed_point diff2;
	    if (pcis->fh.axes_swapped)
		do_x = 010, do_y = 001;
	    else
		do_x = 001, do_y = 010; {
		int hints_end = hints_first & ~hints;
		diff2.x = (hints_end & do_x ? psub->pt.x - pcis->unmoved_start.x : 0);
		diff2.y = (hints_end & do_y ? psub->pt.y - pcis->unmoved_start.y : 0);
		} {
		    int hints_start = hints & ~hints_first;
		    diff.x = (hints_start & do_x ? pseg->pt.x - pcis->unmoved_end.x : 0);
		    diff.y = (hints_start & do_y ? pseg->pt.y - pcis->unmoved_end.y : 0);
		} (pseg->pt).x += ((diff2).x), (pseg->pt).y += ((diff2).y);
		apply_final_hint(pseg, &diff2);
		(psub->pt).x += ((diff).x), (psub->pt).y += ((diff).y);
	} else {
	    int hints_close = line_hints(pcis, &pcis->unmoved_end, &pcis->unmoved_start);
	    hints_close &= ~(hints | hints_first);
	    if (hints_close) {
		apply_hints_at(pcis, hints_close, &pseg->pt, &diff);
		apply_final_hint(pseg, &diff);
		apply_hints_at(pcis, hints_close, &psub->pt, &diff);
	    } else
		diff.x = diff.y = 0;
	}
	if (pfirst->type == s_curve)
	    adjust_curve_start(((curve_segment *) pfirst), &diff);
	pcis->hint_next = 0;
	pcis->hints_pending = 0;
    } else {
	pcis->hint_next = pseg;
	pcis->hints_pending = hints;
    }
}
//complexity is O(n) inferred by loopus
static stem_hint *search_hints(stem_hint_table *, fixed);
static void apply_vstem_hints(gs_type1_state * pcis, int dy, gs_fixed_point * ppt)
{
    fixed *pv = (pcis->fh.axes_swapped ? &ppt->y : &ppt->x);
    stem_hint *ph = search_hints(&pcis->vstem_hints, *pv);
    if (ph != 0) {
	do {
	} while (0);
	*pv += (dy == 0 ? ((ph->dv0 + ph->dv1) >> 1) : (pcis->fh.x_inverted ? dy < 0 : dy > 0) ? ph->dv1 : ph->dv0);
	do {
	} while (0);
    }
}

static void apply_hstem_hints(gs_type1_state * pcis, int dx, gs_fixed_point * ppt)
{
    fixed *pv = (pcis->fh.axes_swapped ? &ppt->x : &ppt->y);
    stem_hint *ph = search_hints(&pcis->hstem_hints, *pv);
    if (ph != 0) {
	do {
	} while (0);
	*pv += (dx == 0 ? ((ph->dv0 + ph->dv1) >> 1) : (pcis->fh.y_inverted ? dx > 0 : dx < 0) ? ph->dv1 : ph->dv0);
	do {
	} while (0);
    }
}

static stem_hint *search_hints(stem_hint_table * psht, fixed v)
{
    stem_hint *table = &psht->data[0];
    stem_hint *ph = table + psht->current;
    if (v >= ph->v0 && v <= ph->v1)
	return ph;
    for (ph = &table[psht->count]; --ph >= table;)
	if (v >= ph->v0 && v <= ph->v1) {
	    psht->current = ph - table;
	    return ph;
	}
    return 0;
}
