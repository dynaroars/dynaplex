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
extern const byte byte_reverse_bits[256];
extern const byte byte_right_mask[9];
extern const byte byte_count_bits[256];
extern const byte byte_bit_run_length_0[256], byte_bit_run_length_1[256], byte_bit_run_length_2[256], byte_bit_run_length_3[256], byte_bit_run_length_4[256], byte_bit_run_length_5[256], byte_bit_run_length_6[256], byte_bit_run_length_7[256];
extern const byte *byte_bit_run_length[8];
extern const byte *byte_bit_run_length_neg[8];
typedef enum { rop2_0 = 0, rop2_S = 0xc, rop2_D = 0xa, rop2_1 = 0xf, rop2_default = rop2_S } gs_rop2_t;
typedef enum { rop3_0 = 0, rop3_T = 0xf0, rop3_S = 0xcc, rop3_D = 0xaa, rop3_1 = 0xff, rop3_default = rop3_T | rop3_S } gs_rop3_t;
typedef uint gs_logical_operation_t;
typedef unsigned rop_operand;
typedef rop_operand(*rop_proc) (rop_operand D, rop_operand S, rop_operand T);
typedef enum { rop_usage_none = 0, rop_usage_D = 1, rop_usage_S = 2, rop_usage_DS = 3, rop_usage_T = 4, rop_usage_DT = 5, rop_usage_ST = 6, rop_usage_DST = 7 } rop_usage_t;
typedef enum { gs_color_select_all = -1, gs_color_select_texture = 0, gs_color_select_source = 1 } gs_color_select_t;
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
struct gs_matrix_s {
    float xx, xy, yx, yy, tx, ty;
};
typedef struct gs_matrix_s gs_matrix;
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
typedef struct gs_param_list_s gs_param_list;
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
typedef struct gx_device_memory_s gx_device_memory;
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
typedef struct gx_clip_rect_s gx_clip_rect;
struct gx_clip_rect_s {
    gx_clip_rect *next, *prev;
    int ymin, ymax;
    int xmin, xmax;
    byte to_visit;
};
extern const gs_memory_struct_type_t st_clip_rect;
typedef struct gx_clip_list_s gx_clip_list;
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
int (*gx_default_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop) = gx_no_copy_rop;
int (*gx_forward_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop) = gx_no_copy_rop;
int (*gx_default_strip_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop) = gx_no_strip_copy_rop;
int (*gx_forward_strip_copy_rop_proc) (gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop) = gx_no_strip_copy_rop;
void gx_device_fill_in_procs(register gx_device * dev)
{
    gx_device_set_procs(dev);
    if (((dev)->std_procs.open_device) == 0)
	((dev)->std_procs.open_device = (gx_default_open_device));
    if (((dev)->std_procs.get_initial_matrix) == 0)
	((dev)->std_procs.get_initial_matrix = (gx_default_get_initial_matrix));
    if (((dev)->std_procs.sync_output) == 0)
	((dev)->std_procs.sync_output = (gx_default_sync_output));
    if (((dev)->std_procs.output_page) == 0)
	((dev)->std_procs.output_page = (gx_default_output_page));
    if (((dev)->std_procs.close_device) == 0)
	((dev)->std_procs.close_device = (gx_default_close_device));
    if (((dev)->std_procs.map_rgb_color) == 0)
	((dev)->std_procs.map_rgb_color = (gx_default_w_b_map_rgb_color));
    if (((dev)->std_procs.map_color_rgb) == 0)
	((dev)->std_procs.map_color_rgb = (gx_default_w_b_map_color_rgb));
    if (((dev)->std_procs.tile_rectangle) == 0)
	((dev)->std_procs.tile_rectangle = (gx_default_tile_rectangle));
    if (((dev)->std_procs.copy_mono) == 0)
	((dev)->std_procs.copy_mono = (gx_default_copy_mono));
    if (((dev)->std_procs.copy_color) == 0)
	((dev)->std_procs.copy_color = (gx_default_copy_color));
    if (((dev)->std_procs.draw_line) == 0)
	((dev)->std_procs.draw_line = (gx_default_draw_line));
    if (((dev)->std_procs.get_bits) == 0)
	((dev)->std_procs.get_bits = (gx_default_get_bits));
    if (((dev)->std_procs.get_params) == 0)
	((dev)->std_procs.get_params = (gx_default_get_params));
    if (((dev)->std_procs.put_params) == 0)
	((dev)->std_procs.put_params = (gx_default_put_params));
    if (((dev)->std_procs.map_cmyk_color) == 0)
	((dev)->std_procs.map_cmyk_color = (gx_default_map_cmyk_color));
    if (((dev)->std_procs.get_xfont_procs) == 0)
	((dev)->std_procs.get_xfont_procs = (gx_default_get_xfont_procs));
    if (((dev)->std_procs.get_xfont_device) == 0)
	((dev)->std_procs.get_xfont_device = (gx_default_get_xfont_device));
    if (((dev)->std_procs.map_rgb_alpha_color) == 0)
	((dev)->std_procs.map_rgb_alpha_color = (gx_default_map_rgb_alpha_color));
    if (((dev)->std_procs.get_page_device) == 0)
	((dev)->std_procs.get_page_device = (gx_default_get_page_device));
    if (((dev)->std_procs.get_alpha_bits) == 0)
	((dev)->std_procs.get_alpha_bits = (gx_default_get_alpha_bits));
    if (((dev)->std_procs.copy_alpha) == 0)
	((dev)->std_procs.copy_alpha = (gx_default_copy_alpha));
    if (((dev)->std_procs.get_band) == 0)
	((dev)->std_procs.get_band = (gx_default_get_band));
    if (((dev)->std_procs.copy_rop) == 0)
	((dev)->std_procs.copy_rop = (gx_default_copy_rop_proc));
    if (((dev)->std_procs.fill_path) == 0)
	((dev)->std_procs.fill_path = (gx_default_fill_path));
    if (((dev)->std_procs.stroke_path) == 0)
	((dev)->std_procs.stroke_path = (gx_default_stroke_path));
    if (((dev)->std_procs.fill_mask) == 0)
	((dev)->std_procs.fill_mask = (gx_default_fill_mask));
    if (((dev)->std_procs.fill_trapezoid) == 0)
	((dev)->std_procs.fill_trapezoid = (gx_default_fill_trapezoid));
    if (((dev)->std_procs.fill_parallelogram) == 0)
	((dev)->std_procs.fill_parallelogram = (gx_default_fill_parallelogram));
    if (((dev)->std_procs.fill_triangle) == 0)
	((dev)->std_procs.fill_triangle = (gx_default_fill_triangle));
    if (((dev)->std_procs.draw_thin_line) == 0)
	((dev)->std_procs.draw_thin_line = (gx_default_draw_thin_line));
    if (((dev)->std_procs.begin_image) == 0)
	((dev)->std_procs.begin_image = (gx_default_begin_image));
    if (((dev)->std_procs.image_data) == 0)
	((dev)->std_procs.image_data = (gx_default_image_data));
    if (((dev)->std_procs.end_image) == 0)
	((dev)->std_procs.end_image = (gx_default_end_image));
    if (((dev)->std_procs.strip_tile_rectangle) == 0)
	((dev)->std_procs.strip_tile_rectangle = (gx_default_strip_tile_rectangle));
    if (((dev)->std_procs.strip_copy_rop) == 0)
	((dev)->std_procs.strip_copy_rop = (gx_default_strip_copy_rop_proc));
    if (((dev)->std_procs.get_clipping_box) == 0)
	((dev)->std_procs.get_clipping_box = (gx_default_get_clipping_box));
}

int gx_default_open_device(gx_device * dev)
{
    return 0;
}

void gx_default_get_initial_matrix(gx_device * dev, register gs_matrix * pmat)
{
    pmat->xx = dev->HWResolution[0] / 72.0;
    pmat->xy = 0;
    pmat->yx = 0;
    pmat->yy = dev->HWResolution[1] / -72.0;
    pmat->tx = 0;
    pmat->ty = dev->height;
} void gx_upright_get_initial_matrix(gx_device * dev, register gs_matrix * pmat)
{
    pmat->xx = dev->HWResolution[0] / 72.0;
    pmat->xy = 0;
    pmat->yx = 0;
    pmat->yy = dev->HWResolution[1] / 72.0;
    pmat->tx = 0;
    pmat->ty = 0;
} int gx_default_sync_output(gx_device * dev)
{
    return 0;
}

int gx_default_output_page(gx_device * dev, int num_copies, int flush)
{
    return (*((dev)->std_procs.sync_output)) (dev);
}

int gx_default_close_device(gx_device * dev)
{
    return 0;
}

int gx_default_tile_rectangle(gx_device * dev, const gx_tile_bitmap * tile, int x, int y, int w, int h, gx_color_index color0, gx_color_index color1, int px, int py)
{
    gx_strip_bitmap tiles;
    *(gx_tile_bitmap *) & tiles = *tile;
    tiles.shift = tiles.rep_shift = 0;
    return (*((dev)->std_procs.strip_tile_rectangle)) (dev, &tiles, x, y, w, h, color0, color1, px, py);
}

int gx_default_copy_mono(gx_device * dev, const byte * data, int dx, int raster, gx_bitmap_id id, int x, int y, int w, int h, gx_color_index zero, gx_color_index one)
{
    bool invert;
    gx_color_index color;
    gx_device_color devc;
    if ((x | y) < 0) {
	if (x < 0)
	    w += x, dx -= x, x = 0;
	if (y < 0)
	    h += y, data -= y * raster, id = 0L, y = 0;
    }
    if (x > dev->width - w)
	w = dev->width - x;
    if (y > dev->height - h)
	h = dev->height - y;
    if (w <= 0 || h <= 0)
	return 0;
    if (one != ((unsigned long) (-1))) {
	invert = ((bool) 0);
	color = one;
	if (zero != ((unsigned long) (-1))) {
	    int code = (*((dev)->std_procs.fill_rectangle)) (dev, x, y, w, h, zero);
	    if (code < 0)
		return code;
	}
    } else {
	invert = ((bool) 1);
	color = zero;
    }
    ((&devc)->colors.pure = (color), (&devc)->type = (&gx_dc_procs_pure));
    return gx_dc_default_fill_masked(&devc, data, dx, raster, id, x, y, w, h, dev, rop3_T, invert);
}
//complexity is O(n^2) inferred by loopus
int gx_default_copy_color(gx_device * dev, const byte * data, int dx, int raster, gx_bitmap_id id, int x, int y, int w, int h)
{
    int depth = dev->color_info.depth;
    byte mask;
    int (*fill) (gx_device * dev, int x, int y, int width, int height, gx_color_index color);
    const byte *row;
    int iy;
    if (depth == 1)
	return (*((dev)->std_procs.copy_mono)) (dev, data, dx, raster, id, x, y, w, h, (gx_color_index) 0, (gx_color_index) 1);
    if ((x | y) < 0) {
	if (x < 0)
	    w += x, dx -= x, x = 0;
	if (y < 0)
	    h += y, data -= y * raster, id = 0L, y = 0;
    }
    if (x > dev->width - w)
	w = dev->width - x;
    if (y > dev->height - h)
	h = dev->height - y;
    if (w <= 0 || h <= 0)
	return 0;
    fill = ((dev)->std_procs.fill_rectangle);
    mask = (byte) ((1 << depth) - 1);
    for (row = data, iy = 0; iy < h; row += raster, ++iy) {
	int ix;
	gx_color_index c0 = ((unsigned long) (-1));
	const byte *ptr = row + ((dx * depth) >> 3);
	int i0;
	for (i0 = ix = 0; ix < w; ++ix) {
	    gx_color_index color;
	    if (depth >= 8) {
		color = *ptr++;
		switch (depth) {
		case 32:
		    color = (color << 8) + *ptr++;
		case 24:
		    color = (color << 8) + *ptr++;
		case 16:
		    color = (color << 8) + *ptr++;
		}
	    } else {
		uint dbit = (-(ix + dx + 1) * depth) & 7;
		color = (*ptr >> dbit) & mask;
		if (dbit == 0)
		    ptr++;
	    }
	    if (color != c0) {
		if (ix > i0) {
		    int code = (*fill) (dev, i0 + x, iy + y, ix - i0, 1, c0);
		    if (code < 0)
			return code;
		}
		c0 = color;
		i0 = ix;
	    }
	}
	if (ix > i0) {
	    int code = (*fill) (dev, i0 + x, iy + y, ix - i0, 1, c0);
	    if (code < 0)
		return code;
	}
    }
    return 0;
}

int gx_default_get_bits(gx_device * dev, int y, byte * data, byte ** actual_data)
{
    return ((-1));
}

gx_xfont_procs *gx_default_get_xfont_procs(gx_device * dev)
{
    return ((void *) 0);
} gx_device *gx_default_get_xfont_device(gx_device * dev)
{
    return dev;
}

gx_device *gx_default_get_page_device(gx_device * dev)
{
    return ((void *) 0);
} gx_device *gx_page_device_get_page_device(gx_device * dev)
{
    return dev;
}

int gx_default_get_alpha_bits(gx_device * dev, graphics_object_type type)
{
    return 1;
}

int gx_no_copy_alpha(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth)
{
    return ((-1));
}

int gx_default_copy_alpha(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth)
{
    if (depth == 1)
	return (*((dev)->std_procs.copy_mono)) (dev, data, data_x, raster, id, x, y, width, height, ((unsigned long) (-1)), color); {
	const byte *row;
	gs_memory_t *mem = &gs_memory_default;
	int bpp = dev->color_info.depth;
	uint in_size = gx_device_raster(dev, ((bool) 0));
	byte *lin;
	uint out_size;
	byte *lout;
	int code = 0;
	gx_color_value color_rgb[3];
	int ry;
	if ((x | y) < 0) {
	    if (x < 0)
		width += x, data_x -= x, x = 0;
	    if (y < 0)
		height += y, data -= y * raster, id = 0L, y = 0;
	}
	if (x > dev->width - width)
	    width = dev->width - x;
	if (y > dev->height - height)
	    height = dev->height - y;
	if (width <= 0 || height <= 0)
	    return 0;
	row = data;
	out_size = ((uint) (((width * bpp + ((1 << 2) * 8 - 1)) >> (2 + 3)) << 2));
	lin = (*(mem)->procs.alloc_bytes) (mem, in_size, "copy_alpha(lin)");
	lout = (*(mem)->procs.alloc_bytes) (mem, out_size, "copy_alpha(lout)");
	if (lin == 0 || lout == 0) {
	    code = ((-25));
	    goto out;
	}
	(*((dev)->std_procs.map_color_rgb)) (dev, color, color_rgb);
	for (ry = y; ry < y + height; row += raster, ++ry) {
	    byte *line;
	    int sx, rx;
	    byte *l_dst = (lout);
	    uint l_bits = 0;
	    int l_shift = 8 - (bpp);
	    int l_xprev = (x);
	    code = (*((dev)->std_procs.get_bits)) (dev, ry, lin, &line);
	    if (code < 0)
		break;
	    for (sx = data_x, rx = x; sx < data_x + width; ++sx, ++rx) {
		gx_color_index previous = ((unsigned long) (-1));
		gx_color_index composite;
		int alpha2, alpha;
		if (depth == 2)
		    alpha = ((row[sx >> 2] >> ((3 - (sx & 3)) << 1)) & 3) * 5;
		else
		    alpha2 = row[sx >> 1], alpha = (sx & 1 ? alpha2 & 0xf : alpha2 >> 4);
	      blend:if (alpha == 15) {
		    composite = color;
		} else {
		    if (previous == ((unsigned long) (-1))) {
			if (bpp < 8) {
			    const uint bit = rx * bpp;
			    const byte *src = line + (bit >> 3);
			    previous = (*src >> (8 - (bit + bpp))) & ((1 << bpp) - 1);
			} else {
			    const byte *src = line + (rx * (bpp >> 3));
			    previous = 0;
			    switch (bpp >> 3) {
			    case 4:
				previous += (gx_color_index) * src++ << 24;
			    case 3:
				previous += (gx_color_index) * src++ << 16;
			    case 2:
				previous += (gx_color_index) * src++ << 8;
			    case 1:
				previous += *src++;
			    }
			}
		    }
		    if (alpha == 0) {
			composite = previous;
		    } else {
			gx_color_value rgb[3];
			(*((dev)->std_procs.map_color_rgb)) (dev, previous, rgb);
			rgb[0] = (rgb[0]) + (((int) (color_rgb[0]) - (int) (rgb[0])) * (alpha) / (15));
			rgb[1] = (rgb[1]) + (((int) (color_rgb[1]) - (int) (rgb[1])) * (alpha) / (15));
			rgb[2] = (rgb[2]) + (((int) (color_rgb[2]) - (int) (rgb[2])) * (alpha) / (15));
			composite = (*((dev)->std_procs.map_rgb_color)) (dev, rgb[0], rgb[1], rgb[2]);
			if (composite == ((unsigned long) (-1))) {
			    if (alpha == 7)
				++alpha;
			    alpha = (alpha & 8) | (alpha >> 1);
			    goto blend;
			}
		    }
		}
		switch ((bpp) >> 3) {
		case 0:
		    l_bits += (uint) ((composite) << l_shift);
		    if ((l_shift -= (bpp)) < 0)
			*l_dst++ = (byte) l_bits, l_bits = 0, l_shift += 8;
		    break;
		case 4:
		    *l_dst++ = (byte) ((composite) >> 24);
		case 3:
		    *l_dst++ = (byte) ((composite) >> 16);
		case 2:
		    *l_dst++ = (byte) ((composite) >> 8);
		case 1:
		    *l_dst++ = (byte) (composite);
		};
	    }
	    if ((rx) > l_xprev) {
		int code;
		if (l_shift != 8 - (bpp))
		    *l_dst = (byte) l_bits;
		code = (*((dev)->std_procs.copy_color)) (dev, lout, l_xprev - (x), raster, 0L, l_xprev, ry, (rx) - l_xprev, 1);
		if (code < 0)
		    return code;
	    };
	}
      out:(*(mem)->procs.free_object) (mem, lout, "copy_alpha(lout)");
	(*(mem)->procs.free_object) (mem, lin, "copy_alpha(lin)");
	return code;
	}
}

int gx_default_get_band(gx_device * dev, int y, int *band_start)
{
    return 0;
}

int gx_no_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop)
{
    return ((-1));
}

int gx_default_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_tile_bitmap * texture, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop)
{
    return (*gx_default_copy_rop_proc) (dev, sdata, sourcex, sraster, id, scolors, texture, tcolors, x, y, width, height, phase_x, phase_y, lop);
}

int gx_default_fill_mask(gx_device * orig_dev, const byte * data, int dx, int raster, gx_bitmap_id id, int x, int y, int w, int h, const gx_drawing_color * pdcolor, int depth, gs_logical_operation_t lop, const gx_clip_path * pcpath)
{
    gx_device *dev;
    gx_device_clip cdev;
    gx_color_index colors[2];
    gx_strip_bitmap *tile;
    if (((pdcolor)->type == (&gx_dc_procs_pure))) {
	tile = 0;
	colors[0] = ((unsigned long) (-1));
	colors[1] = ((pdcolor)->colors.pure);
    } else if (((pdcolor)->type == (&gx_dc_procs_ht_binary))) {
	tile = (&(pdcolor)->colors.binary.b_tile->tiles);
	colors[0] = ((pdcolor)->colors.binary.color[0]);
	colors[1] = ((pdcolor)->colors.binary.color[1]);
    } else
	return ((-1));
    if (pcpath != 0) {
	gx_make_clip_path_device(&cdev, pcpath);
	cdev.target = orig_dev;
	dev = (gx_device *) & cdev;
	(*((dev)->std_procs.open_device)) (dev);
    } else
	dev = orig_dev;
    if (depth > 1) {
	return (*((dev)->std_procs.copy_alpha)) (dev, data, dx, raster, id, x, y, w, h, colors[1], depth);
    }
    if (lop != (rop3_default | (((bool) 0) ? 0x100 : 0) | (((bool) 0) ? 0x200 : 0) | (0 << 10))) {
	gx_color_index scolors[2];
	scolors[0] = (*((dev)->std_procs.map_rgb_color)) (dev, ((gx_color_value) ((1L << (sizeof(gx_color_value) * 8)) - 1)), ((gx_color_value) ((1L << (sizeof(gx_color_value) * 8)) - 1)), ((gx_color_value) ((1L << (sizeof(gx_color_value) * 8)) - 1)));
	scolors[1] = (*((dev)->std_procs.map_rgb_color)) (dev, (gx_color_value) 0, (gx_color_value) 0, (gx_color_value) 0);
	if (tile == 0)
	    colors[0] = colors[1];
	return (*((dev)->std_procs.strip_copy_rop)) (dev, data, dx, raster, id, scolors, tile, colors, x, y, w, h, ((pdcolor)->phase).x, ((pdcolor)->phase).y, lop | 0x100);
    }
    if (tile == 0) {
	return (*((dev)->std_procs.copy_mono)) (dev, data, dx, raster, id, x, y, w, h, ((unsigned long) (-1)), colors[1]);
    }
    if ((x | y) < 0) {
	if (x < 0)
	    w += x, dx -= x, x = 0;
	if (y < 0)
	    h += y, data -= y * raster, id = 0L, y = 0;
    }
    if (x > orig_dev->width - w)
	w = orig_dev->width - x;
    if (y > orig_dev->height - h)
	h = orig_dev->height - y;
    if (w <= 0 || h <= 0)
	return 0; {
	int (*tile_proc) (gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y) = ((dev)->std_procs.strip_tile_rectangle);
	const byte *row = data + (dx >> 3);
	int dx_bit = dx & 7;
	int wdx = w + dx_bit;
	int iy;
	for (row = data, iy = 0; iy < h; row += raster, iy++) {
	    int ix;
	    for (ix = dx_bit; ix < wdx;) {
		int i0;
		uint b;
		uint len;
		int code;
		b = row[ix >> 3];
		len = byte_bit_run_length[ix & 7][b ^ 0xff];
		if (len) {
		    ix += ((len - 1) & 7) + 1;
		    continue;
		}
		i0 = ix;
		for (;;) {
		    b = row[ix >> 3];
		    len = byte_bit_run_length[ix & 7][b];
		    if (!len)
			break;
		    ix += ((len - 1) & 7) + 1;
		    if (ix >= wdx) {
			ix = wdx;
			break;
		    }
		    if (len < 8)
			break;
		}
		code = (*tile_proc) (dev, tile, i0 - dx_bit + x, iy + y, ix - i0, 1, colors[0], colors[1], ((pdcolor)->phase).x, ((pdcolor)->phase).y);
		if (code < 0)
		    return code;
	    }
	}
	}
	return 0;
}

int gx_default_strip_tile_rectangle(gx_device * dev, const gx_strip_bitmap * tiles, int x, int y, int w, int h, gx_color_index color0, gx_color_index color1, int px, int py)
{
    int width = tiles->size.x;
    int height = tiles->size.y;
    int raster = tiles->raster;
    int rwidth = tiles->rep_width;
    int rheight = tiles->rep_height;
    int shift = tiles->shift;
    int xoff = (shift == 0 ? px : px + (y + py) / rheight * tiles->rep_shift);
    int irx = ((rwidth & (rwidth - 1)) == 0 ? (x + xoff) & (rwidth - 1) : (x + xoff) % rwidth);
    int ry = ((rheight & (rheight - 1)) == 0 ? (y + py) & (rheight - 1) : (y + py) % rheight);
    int icw = width - irx;
    int ch = height - ry;
    byte *row = tiles->data + ry * raster;
    int (*proc_mono) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1);
    int (*proc_color) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height);
    int code;
    if (((dev)->std_procs.tile_rectangle) != gx_default_tile_rectangle) {
	if (shift == 0) {
	    int (*tile_proc) (gx_device * dev, const gx_tile_bitmap * tile, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1, int phase_x, int phase_y) = ((dev)->std_procs.tile_rectangle);
	    int code;
	    ((dev)->std_procs.tile_rectangle = (gx_default_tile_rectangle));
	    code = (*tile_proc) (dev, (const gx_tile_bitmap *) tiles, x, y, w, h, color0, color1, px, py);
	    ((dev)->std_procs.tile_rectangle = (tile_proc));
	    return code;
	}
    }
    if (color0 == ((unsigned long) (-1)) && color1 == ((unsigned long) (-1)))
	proc_color = ((dev)->std_procs.copy_color);
    else
	proc_color = 0, proc_mono = ((dev)->std_procs.copy_mono);
    if (ch >= h) {
	if (icw >= w) {
	    code = (proc_color != 0 ? (*proc_color) (dev, row, irx, raster, 0L, x, y, w, h) : (*proc_mono) (dev, row, irx, raster, 0L, x, y, w, h, color0, color1));
	    if (code < 0)
		return (code);
	    do {
	    } while (0);
	} else {
	    int ex = x + w;
	    int fex = ex - width;
	    int cx = x + icw;
	    code = (proc_color != 0 ? (*proc_color) (dev, row, irx, raster, 0L, x, y, icw, h) : (*proc_mono) (dev, row, irx, raster, 0L, x, y, icw, h, color0, color1));
	    if (code < 0)
		return (code);
	    do {
	    } while (0);
	    while (cx <= fex) {
		code = (proc_color != 0 ? (*proc_color) (dev, row, 0, raster, 0L, cx, y, width, h) : (*proc_mono) (dev, row, 0, raster, 0L, cx, y, width, h, color0, color1));
		if (code < 0)
		    return (code);
		do {
		} while (0);
		cx += width;
	    }
	    if (cx < ex) {
		code = (proc_color != 0 ? (*proc_color) (dev, row, 0, raster, 0L, cx, y, ex - cx, h) : (*proc_mono) (dev, row, 0, raster, 0L, cx, y, ex - cx, h, color0, color1));
		if (code < 0)
		    return (code);
		do {
		} while (0);
	    }
	}
    } else if (icw >= w && shift == 0) {
	int ey = y + h;
	int fey = ey - height;
	int cy = y + ch;
	code = (proc_color != 0 ? (*proc_color) (dev, row, irx, raster, 0L, x, y, w, ch) : (*proc_mono) (dev, row, irx, raster, 0L, x, y, w, ch, color0, color1));
	if (code < 0)
	    return (code);
	do {
	} while (0);
	row = tiles->data;
	do {
	    ch = (cy > fey ? ey - cy : height);
	    code = (proc_color != 0 ? (*proc_color) (dev, row, irx, raster, 0L, x, cy, w, ch) : (*proc_mono) (dev, row, irx, raster, 0L, x, cy, w, ch, color0, color1));
	    if (code < 0)
		return (code);
	    do {
	    } while (0);
	} while ((cy += ch) < ey);
    } else {
	int ex = x + w, ey = y + h;
	int fex = ex - width, fey = ey - height;
	int cx, cy;
	for (cy = y;;) {
	    if (icw >= w) {
		code = (proc_color != 0 ? (*proc_color) (dev, row, irx, raster, 0L, x, cy, w, ch) : (*proc_mono) (dev, row, irx, raster, 0L, x, cy, w, ch, color0, color1));
		if (code < 0)
		    return (code);
		do {
		} while (0);
	    } else {
		code = (proc_color != 0 ? (*proc_color) (dev, row, irx, raster, 0L, x, cy, icw, ch) : (*proc_mono) (dev, row, irx, raster, 0L, x, cy, icw, ch, color0, color1));
		if (code < 0)
		    return (code);
		do {
		} while (0);
		cx = x + icw;
		while (cx <= fex) {
		    code = (proc_color != 0 ? (*proc_color) (dev, row, 0, raster, 0L, cx, cy, width, ch) : (*proc_mono) (dev, row, 0, raster, 0L, cx, cy, width, ch, color0, color1));
		    if (code < 0)
			return (code);
		    do {
		    } while (0);
		    cx += width;
		}
		if (cx < ex) {
		    code = (proc_color != 0 ? (*proc_color) (dev, row, 0, raster, 0L, cx, cy, ex - cx, ch) : (*proc_mono) (dev, row, 0, raster, 0L, cx, cy, ex - cx, ch, color0, color1));
		    if (code < 0)
			return (code);
		    do {
		    } while (0);
		}
	    }
	    if ((cy += ch) >= ey)
		break;
	    ch = (cy > fey ? ey - cy : height);
	    if ((irx += shift) >= rwidth)
		irx -= rwidth;
	    icw = width - irx;
	    row = tiles->data;
	}
    }
    return 0;
}

int gx_no_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop)
{
    return ((-1));
}

int gx_default_strip_copy_rop(gx_device * dev, const byte * sdata, int sourcex, uint sraster, gx_bitmap_id id, const gx_color_index * scolors, const gx_strip_bitmap * textures, const gx_color_index * tcolors, int x, int y, int width, int height, int phase_x, int phase_y, gs_logical_operation_t lop)
{
    return (*gx_default_strip_copy_rop_proc) (dev, sdata, sourcex, sraster, id, scolors, textures, tcolors, x, y, width, height, phase_x, phase_y, lop);
}

void gx_default_get_clipping_box(gx_device * dev, gs_fixed_rect * pbox)
{
    pbox->p.x = 0;
    pbox->p.y = 0;
    pbox->q.x = ((fixed) (dev->width) << 12);
    pbox->q.y = ((fixed) (dev->height) << 12);
} void gx_get_largest_clipping_box(gx_device * dev, gs_fixed_rect * pbox)
{
    pbox->p.x = (-1L << ((1 << 2) * 8 - 1));
    pbox->p.y = (-1L << ((1 << 2) * 8 - 1));
    pbox->q.x = (~(-1L << ((1 << 2) * 8 - 1)));
    pbox->q.y = (~(-1L << ((1 << 2) * 8 - 1)));
} int gx_default_make_buffer_device(gx_device_memory * mdev, gx_device * target, gs_memory_t * mem, bool for_band)
{
    const gx_device_memory *mdproto = gdev_mem_device_for_bits(target->color_info.depth);
    if (mdproto == 0)
	return ((-15));
    if (target == (gx_device *) mdev)
	mdev->std_procs = mdproto->std_procs;
    else
	gs_make_mem_device(mdev, mdproto, mem, (for_band ? 1 : 0), (target == (gx_device *) mdev ? 0 : target));
    return 0;
}

int gx_default_install(gx_device * dev, gs_state * pgs)
{
    return 0;
}

int gx_default_begin_page(gx_device * dev, gs_state * pgs)
{
    return 0;
}

int gx_default_end_page(gx_device * dev, int reason, gs_state * pgs)
{
    return (reason != 2 ? 1 : 0);
}

int gx_copy_mono_unaligned(gx_device * dev, const byte * data, int dx, int raster, gx_bitmap_id id, int x, int y, int w, int h, gx_color_index zero, gx_color_index one)
{
    int (*copy_mono) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color0, gx_color_index color1) = ((dev)->std_procs.copy_mono);
    uint offset = ((uint) (((const char *) (data) - (const char *) 0) & (((1 << 2)) - 1)));
    int step = raster & ((1 << 2) - 1);
    data -= offset;
    dx += offset << 3;
    if (!step) {
	return (*copy_mono) (dev, data, dx, raster, id, x, y, w, h, zero, one);
    }
    {
	const byte *p = data;
	int d = dx;
	int code = 0;
	int i;
	for (i = 0; i < h && code >= 0; ++i, p += raster - step, d += step << 3)
	    code = (*copy_mono) (dev, p, d, raster, 0L, x, y + i, w, 1, zero, one);
	return code;
    }
}

int gx_copy_color_unaligned(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height)
{
    int (*copy_color) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height) = ((dev)->std_procs.copy_color);
    int depth = dev->color_info.depth;
    uint offset = (uint) (data - (const byte *) 0) & ((1 << 2) - 1);
    int step = raster & ((1 << 2) - 1);
    if (depth == 24)
	offset += (offset % 3) * ((1 << 2) * (3 - ((1 << 2) % 3)));
    data -= offset;
    data_x += (offset << 3) / depth;
    if (!step) {
	return (*copy_color) (dev, data, data_x, raster, id, x, y, width, height);
    }
    {
	const byte *p = data;
	int d = data_x;
	int dstep = (step << 3) / depth;
	int code = 0;
	int i;
	for (i = 0; i < height && code >= 0; ++i, p += raster - step, d += dstep)
	    code = (*copy_color) (dev, p, d, raster, 0L, x, y + i, width, 1);
	return code;
    }
}

int gx_copy_alpha_unaligned(gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth)
{
    int (*copy_alpha) (gx_device * dev, const byte * data, int data_x, int raster, gx_bitmap_id id, int x, int y, int width, int height, gx_color_index color, int depth) = ((dev)->std_procs.copy_alpha);
    uint offset = (uint) (data - (const byte *) 0) & ((1 << 2) - 1);
    int step = raster & ((1 << 2) - 1);
    data -= offset;
    data_x += (offset << 3) / depth;
    if (!step) {
	return (*copy_alpha) (dev, data, data_x, raster, id, x, y, width, height, color, depth);
    }
    {
	const byte *p = data;
	int d = data_x;
	int dstep = (step << 3) / depth;
	int code = 0;
	int i;
	for (i = 0; i < height && code >= 0; ++i, p += raster - step, d += dstep)
	    code = (*copy_alpha) (dev, p, d, raster, 0L, x, y + i, width, 1, color, depth);
	return code;
    }
}
