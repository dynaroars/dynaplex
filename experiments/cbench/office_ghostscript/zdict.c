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
extern ref ref_language_level;
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
typedef enum { pt_full_ref = 0, pt_executable_operator = 2, pt_integer = 3, pt_unused1 = 4, pt_unused2 = 5, pt_literal_name = 6, pt_executable_name = 7 } packed_type;
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
int zdict(register os_ptr op)
{
    if (!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_integer)))
	return (check_type_failed(&*op));
    if (op->value.intval < 0)
	return ((-15));
    return dict_create((uint) op->value.intval, op);
}

static int zmaxlength(register os_ptr op)
{
    if (!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_dictionary)))
	return (check_type_failed(&*op));
    if (!(((&*(&(&*op)->value.pdict->values))->tas.type_attrs) & (0x20)))
	return ((-7));
    ((op)->value.intval = (dict_maxlength(op)), ((op)->tas.type_attrs = ((t_integer) << 8) + (0)));
    return 0;
}

int zbegin(register os_ptr op)
{
    if (!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_dictionary)))
	return (check_type_failed(&*op));
    if (!(((&*(&(&*op)->value.pdict->values))->tas.type_attrs) & (0x20)))
	return ((-7));
    if ((d_stack.p) == (d_stack.top))
	return ((-3));
    ++(d_stack.p);
    (*((d_stack.p)) = *(op));
    dict_set_top();
    ((o_stack.p) -= (1));
    return 0;
}

int zend(register os_ptr op)
{
    if (((&d_stack)->p + 1 - (&d_stack)->bot + (&d_stack)->extension_used) == min_dstack_size) {
	return ((-4));
    }
    while ((d_stack.p) == (d_stack.bot)) {
	ref_stack_pop_block(&d_stack);
    }
    (d_stack.p)--;
    dict_set_top();
    return 0;
}

int zop_def(register os_ptr op)
{
    register os_ptr op1 = op - 1;
    ref *pvslot;
    switch ((((const byte *) &((op1)->tas.type_attrs))[1])) {
    case t_name:{
	    uint nidx = name_index(op1);
	    uint htemp;
	    if (((dtop_keys[htemp = (((nidx)) & ((dtop_npairs) - 1)) + 1] == ((ref_packed) (pt_literal_name) << 13) + (nidx)) ? ((pvslot) = dtop_values + (htemp), 1) : 0)) {
		if (((int) (avm_space) (((op)->tas.type_attrs) & (((1 << 2) - 1) << 2)) <= dsspace))
		    goto ra;
	    }
	    break;
	}
    case t_null:
	return ((-20));
    case t__invalid:
	return ((-17));
    }
    if (!((int) (avm_space) (((op)->tas.type_attrs) & (((1 << 2) - 1) << 2)) <= dsspace)) {
	int code;
	if (!(((&*(&(&*(d_stack.p))->value.pdict->values))->tas.type_attrs) & (0x10)))
	    return ((-7));
	if (((&gs_imemory)->save_level > 0))
	    return ((-7));
	if ((d_stack.p)->value.pdict != (&ref_systemdict)->value.pdict) {
	    int index;
	    ref elt[2];
	    if (!(((&*(&(&*(&ref_systemdict))->value.pdict->values))->tas.type_attrs) & (0x10)))
		return ((-7));
	    for (index = dict_first((&ref_systemdict)); (index = dict_next((&ref_systemdict), index, &elt[0])) >= 0;)
		if (((((const byte *) &((&elt[1])->tas.type_attrs))[1]) == (t_dictionary)) && elt[1].value.pdict == (d_stack.p)->value.pdict)
		    break;
	    if (index < 0)
		return ((-7));
	}
	switch (code = dict_find((d_stack.p), op1, &pvslot)) {
	case 1:
	    goto ra;
	default:
	    return code;
	case (-2):
	    if (!dict_auto_expand)
		return ((-2));
	    code = dict_grow((d_stack.p));
	    if (code < 0)
		return code;
	case 0:;
	}
	{
	    uint space = (avm_space) ((((d_stack.p))->tas.type_attrs) & (((1 << 2) - 1) << 2));
	    (((d_stack.p))->tas.type_attrs = (((d_stack.p))->tas.type_attrs & ~((((1 << 2) - 1) << 2))) | ((uint) avm_local));
	    code = dict_put((d_stack.p), op1, op);
	    (((d_stack.p))->tas.type_attrs = (((d_stack.p))->tas.type_attrs & ~((((1 << 2) - 1) << 2))) | ((uint) space));
	    return code;
	}
    }
    if (dict_find((d_stack.p), op1, &pvslot) <= 0)
	return dict_put((d_stack.p), op1, op);
  ra:(((void) ((((((pvslot)->tas.type_attrs) & ((&gs_imemory)->test_mask)) == 0) ? alloc_save_change((&gs_imemory), &(d_stack.p)->value.pdict->values, (ref_packed *) (pvslot), "dict_put(value)") : 0))), ((void) ((((pvslot)->value = (op)->value, (pvslot)->tas = (op)->tas), ((pvslot)->tas.type_attrs |= ((&gs_imemory)->new_mask))))));
    return 0;
}

int zdef(os_ptr op)
{
    int code = zop_def(op);
    if (code >= 0) {
	((o_stack.p) -= (2));
    }
    return code;
}

static int zload(register os_ptr op)
{
    ref *pvalue;
    switch ((((const byte *) &((op)->tas.type_attrs))[1])) {
    case t_name:
	if ((pvalue = dict_find_name_by_index(name_index(op))) == 0)
	    return ((-21));
	(*(op) = *(pvalue));
	return 0;
    case t_null:
	return ((-20));
    case t__invalid:
	return ((-17));
    default:{
	    uint size = ref_stack_count(&d_stack);
	    uint i;
	    for (i = 0; i < size; i++) {
		ref *dp = ref_stack_index(&d_stack, i);
		if (!(((&*(&(&*dp)->value.pdict->values))->tas.type_attrs) & (0x20)))
		    return ((-7));
		if (dict_find(dp, op, &pvalue) > 0) {
		    (*(op) = *(pvalue));
		    return 0;
		}
	    }
	    return ((-21));
	}
    }
}

static int zundef(register os_ptr op)
{
    if (!((((const byte *) &((&op[-1])->tas.type_attrs))[1]) == (t_dictionary)))
	return (check_type_failed(&op[-1]));
    if (!(((&*(&(&op[-1])->value.pdict->values))->tas.type_attrs) & (0x10)))
	return ((-7));
    dict_undef(op - 1, op);
    ((o_stack.p) -= (2));
    return 0;
}

static int zknown(register os_ptr op)
{
    register os_ptr op1 = op - 1;
    ref *pvalue;
    if (!((((const byte *) &((&*op1)->tas.type_attrs))[1]) == (t_dictionary)))
	return (check_type_failed(&*op1));
    if (!(((&*(&(&*op1)->value.pdict->values))->tas.type_attrs) & (0x20)))
	return ((-7));
    ((op1)->value.boolval = ((dict_find(op1, op, &pvalue) > 0 ? 1 : 0)), ((op1)->tas.type_attrs = ((t_boolean) << 8) + (0)));
    ((o_stack.p) -= (1));
    return 0;
}

int zwhere(register os_ptr op)
{
    if (op < (o_stack.bot) + ((1) - 1))
	return ((-17)); {
	ref_stack_block *pblock_ = (ref_stack_block *) (&d_stack)->current.value.refs;
	ref *bot = (&d_stack)->bot;
	uint size = (&d_stack)->p + 1 - (&d_stack)->bot;
	for (;;) { {
		const ref *pdref = bot + size;
		ref *pvalue;
		while (pdref-- > bot) {
		    if (!(((&*(&(&*pdref)->value.pdict->values))->tas.type_attrs) & (0x20)))
			return ((-7));
		    if (dict_find(pdref, op, &pvalue) > 0) {
			do {
			    if ((op += (1)) > (o_stack.top)) {
				o_stack.requested = (1);
				return ((-16));
			    } else
				(o_stack.p) = op;
			} while (0);
			(*(op - 1) = *(pdref));
			((op)->value.boolval = (1), ((op)->tas.type_attrs = ((t_boolean) << 8) + (0)));
			return 0;
		    }
		}
	}
	pblock_ = (ref_stack_block *) pblock_->next.value.refs;
	if (pblock_ == 0)
	    break;
	    bot = pblock_->used.value.refs;
	    size = ((&pblock_->used)->tas.rsize);
	}
	}
	((op)->value.boolval = (0), ((op)->tas.type_attrs = ((t_boolean) << 8) + (0)));
	return 0;
}

int zcopy_dict(register os_ptr op)
{
    os_ptr op1 = op - 1;
    int code;
    if (!((((const byte *) &((&*op1)->tas.type_attrs))[1]) == (t_dictionary)))
	return (check_type_failed(&*op1));
    if (!(((&*(&(&*op1)->value.pdict->values))->tas.type_attrs) & (0x20)))
	return ((-7));
    if (!(((&*(&(&*op)->value.pdict->values))->tas.type_attrs) & (0x10)))
	return ((-7));
    if (!dict_auto_expand && (dict_length(op) != 0 || dict_maxlength(op) < dict_length(op1)))
	return ((-15));
    code = dict_copy_entries(op1, op, ((bool) 0));
    if (code < 0)
	return code;
    if (!((int) ref_language_level.value.intval == 2))
	(((&(op)->value.pdict->values))->tas.type_attrs = (((&(op)->value.pdict->values))->tas.type_attrs & ~(0x10)) | (((&(op1)->value.pdict->values))->tas.type_attrs & (0x10)));
    (*(op1) = *(op));
    ((o_stack.p) -= (1));
    return 0;
}

static int zcurrentdict(register os_ptr op)
{
    do {
	if ((op += (1)) > (o_stack.top)) {
	    o_stack.requested = (1);
	    return ((-16));
	} else
	    (o_stack.p) = op;
    } while (0);
    (*(op) = *((d_stack.p)));
    return 0;
}

static int zcountdictstack(register os_ptr op)
{
    uint count = ref_stack_count(&d_stack);
    do {
	if ((op += (1)) > (o_stack.top)) {
	    o_stack.requested = (1);
	    return ((-16));
	} else
	    (o_stack.p) = op;
    } while (0);
    if (!((int) ref_language_level.value.intval == 2))
	count--;
    ((op)->value.intval = (count), ((op)->tas.type_attrs = ((t_integer) << 8) + (0)));
    return 0;
}

static int zdictstack(register os_ptr op)
{
    uint count = ref_stack_count(&d_stack);
    if (!(((&*op)->tas.type_attrs & ((((1 << 6) - (1)) << 8) + (0x10))) == (((t_array) << 8) + (0x10))))
	return ((!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_array)) ? check_type_failed(&*op) : (-7)));
    if (!((int) ref_language_level.value.intval == 2))
	count--;
    return ref_stack_store(&d_stack, op, count, 0, 0, ((bool) 1), "dictstack");
}

static int zcleardictstack(os_ptr op)
{
    while (zend(op) >= 0);
    return 0;
}

static int zdictcopynew(register os_ptr op)
{
    os_ptr op1 = op - 1;
    int code;
    if (!((((const byte *) &((&*op1)->tas.type_attrs))[1]) == (t_dictionary)))
	return (check_type_failed(&*op1));
    if (!(((&*(&(&*op1)->value.pdict->values))->tas.type_attrs) & (0x20)))
	return ((-7));
    if (!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_dictionary)))
	return (check_type_failed(&*op));
    if (!(((&*(&(&*op)->value.pdict->values))->tas.type_attrs) & (0x10)))
	return ((-7));
    if (!dict_auto_expand)
	return ((-21));
    code = dict_copy_entries(op1, op, ((bool) 1));
    if (code < 0)
	return code;
    (*(op1) = *(op));
    ((o_stack.p) -= (1));
    return 0;
}
// complexity is O(n) inferred by loopus
static int zdicttomark(register os_ptr op)
{
    uint count2 = ref_stack_counttomark(&o_stack);
    ref rdict;
    int code;
    uint idx;
    if (count2 == 0)
	return ((-24));
    count2--;
    if ((count2 & 1) != 0)
	return ((-15));
    code = dict_create(count2 >> 1, &rdict);
    if (code < 0)
	return code;
    for (idx = 0; idx < count2; idx += 2) {
	code = dict_put(&rdict, ref_stack_index(&o_stack, idx + 1), ref_stack_index(&o_stack, idx));
	if (code < 0) {
	    return code;
	}
    }
    ref_stack_pop(&o_stack, count2);
    (*((o_stack.p)) = *(&rdict));
    return code;
}

static int zforceput(register os_ptr op)
{
    os_ptr odp = op - 2;
    int code;
    if (!((((const byte *) &((&*odp)->tas.type_attrs))[1]) == (t_dictionary)))
	return (check_type_failed(&*odp));
    if (odp->value.pdict == (&ref_systemdict)->value.pdict) {
	uint space = (avm_space) (((odp)->tas.type_attrs) & (((1 << 2) - 1) << 2));
	((odp)->tas.type_attrs = ((odp)->tas.type_attrs & ~((((1 << 2) - 1) << 2))) | ((uint) avm_local));
	code = dict_put(odp, op - 1, op);
	((odp)->tas.type_attrs = ((odp)->tas.type_attrs & ~((((1 << 2) - 1) << 2))) | ((uint) space));
    } else
	code = dict_put(odp, op - 1, op);
    if (code < 0)
	return code;
    ((o_stack.p) -= (3));
    return 0;
}

static int zknownget(register os_ptr op)
{
    register os_ptr op1 = op - 1;
    ref *pvalue;
    if (!((((const byte *) &((&*op1)->tas.type_attrs))[1]) == (t_dictionary)))
	return (check_type_failed(&*op1));
    if (!(((&*(&(&*op1)->value.pdict->values))->tas.type_attrs) & (0x20)))
	return ((-7));
    if (dict_find(op1, op, &pvalue) <= 0) {
	((op1)->value.boolval = (0), ((op1)->tas.type_attrs = ((t_boolean) << 8) + (0)));
	((o_stack.p) -= (1));
    } else {
	(*(op1) = *(pvalue));
	((op)->value.boolval = (1), ((op)->tas.type_attrs = ((t_boolean) << 8) + (0)));
    }
    return 0;
}

static int zknownundef(register os_ptr op)
{
    os_ptr op1 = op - 1;
    int code;
    if (!((((const byte *) &((&*op1)->tas.type_attrs))[1]) == (t_dictionary)))
	return (check_type_failed(&*op1));
    if (!(((&*(&(&*op1)->value.pdict->values))->tas.type_attrs) & (0x10)))
	return ((-7));
    code = dict_undef(op1, op);
    ((op1)->value.boolval = (code == 0), ((op1)->tas.type_attrs = ((t_boolean) << 8) + (0)));
    ((o_stack.p) -= (1));
    return 0;
}

static int zsetmaxlength(register os_ptr op)
{
    os_ptr op1 = op - 1;
    uint new_size;
    int code;
    if (!((((const byte *) &((&*op1)->tas.type_attrs))[1]) == (t_dictionary)))
	return (check_type_failed(&*op1));
    if (!(((&*(&(&*op1)->value.pdict->values))->tas.type_attrs) & (0x10)))
	return ((-7));
    if (!((((const byte *) &((&*op)->tas.type_attrs))[1]) == (t_integer)))
	return (check_type_failed(&*op));
    if (op->value.intval < 0)
	return ((-15));
    new_size = (uint) op->value.intval;
    if (dict_length(op - 1) > new_size)
	return ((-2));
    code = dict_resize(op - 1, new_size);
    if (code >= 0)
	((o_stack.p) -= (2));
    return code;
}

const op_def *zdict_op_defs(void)
{
    static const op_def op_defs_[] = { {"0cleardictstack", zcleardictstack}, {"1begin", zbegin}, {"0countdictstack", zcountdictstack}, {"0currentdict", zcurrentdict}, {"2def", zdef}, {"1dict", zdict}, {"0dictstack", zdictstack}, {"0end", zend}, {"2known", zknown}, {"1load", zload}, {"1maxlength", zmaxlength}, {"2.undef", zundef}, {"1where", zwhere}, {"2.dictcopynew", zdictcopynew}, {"1.dicttomark", zdicttomark}, {"3.forceput", zforceput}, {"2.knownget", zknownget}, {"1.knownundef", zknownundef}, {"2.setmaxlength", zsetmaxlength}, {(char *) 0, (op_proc_p) 0} };
    return op_defs_;
}
 