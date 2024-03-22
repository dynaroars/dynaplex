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
typedef struct stream_PNGP_state_s {
    const stream_template *template;
    gs_memory_t *memory;
    int (*report_error) (stream_state *, const char *);
    int Colors;
    int BitsPerComponent;
    uint Columns;
    int Predictor;
    uint row_count;
    byte end_mask;
    int bpp;
    byte *prev_row;
    int case_index;
    long row_left;
    byte prev[32];
} stream_PNGP_state;
extern const stream_template s_PNGPD_template;
extern const stream_template s_PNGPE_template;
static gs_ptr_type_t pngp_enum_ptrs(void *vptr, uint size, uint index, const void **pep)
{
    switch (index) {
    default:
	return 0;
    case 0:
	do {
	    *pep = (const void *) (((stream_PNGP_state *) vptr)->prev_row);
	    return (&ptr_struct_procs);
	} while (0);
    }
}

static void pngp_reloc_ptrs(void *vptr, uint size, gc_state_t * gcst)
{;
    ((stream_PNGP_state *) vptr)->prev_row = gs_reloc_struct_ptr((const void *) ((const stream_PNGP_state *) vptr)->prev_row, gcst);
} static const gs_memory_struct_type_t st_PNGP_state = { sizeof(stream_PNGP_state), "PNGPredictorEncode/Decode state", 0, 0, pngp_enum_ptrs, pngp_reloc_ptrs, 0 };
static const byte pngp_case_needs_prev[] = { 0, 0, 1, 1, 1, 1 };

static void s_PNGP_set_defaults(stream_state * st)
{
    ((((stream_PNGP_state *) st))->Colors = 1, (((stream_PNGP_state *) st))->BitsPerComponent = 8, (((stream_PNGP_state *) st))->Columns = 1, (((stream_PNGP_state *) st))->Predictor = 15);
} static int s_PNGP_reinit(stream_state * st)
{
    if (((stream_PNGP_state *) st)->prev_row != 0)
	memset(((stream_PNGP_state *) st)->prev_row + ((stream_PNGP_state *) st)->bpp, 0, ((stream_PNGP_state *) st)->row_count);
    ((stream_PNGP_state *) st)->row_left = 0;
    return 0;
}

static int s_pngp_init(stream_state * st, bool need_prev)
{
    int bits_per_pixel = ((stream_PNGP_state *) st)->Colors * ((stream_PNGP_state *) st)->BitsPerComponent;
    long bits_per_row = (long) bits_per_pixel * ((stream_PNGP_state *) st)->Columns;
    byte *prev_row = 0;
    ((stream_PNGP_state *) st)->row_count = (uint) ((bits_per_row + 7) >> 3);
    ((stream_PNGP_state *) st)->end_mask = (1 << (-bits_per_row & 7)) - 1;
    ((stream_PNGP_state *) st)->bpp = (bits_per_pixel + 7) >> 3;
    if (need_prev) {
	prev_row = (*(st->memory)->procs.alloc_bytes) (st->memory, ((stream_PNGP_state *) st)->bpp + ((stream_PNGP_state *) st)->row_count, "PNGPredictor prev row");
	if (prev_row == 0)
	    return ((int) (-2));
	memset(prev_row, 0, ((stream_PNGP_state *) st)->bpp);
    }
    ((stream_PNGP_state *) st)->prev_row = prev_row;
    return s_PNGP_reinit(st);
}

static int s_PNGPE_init(stream_state * st)
{
    return s_pngp_init(st, pngp_case_needs_prev[((stream_PNGP_state *) st)->Predictor - 10]);
}

static int s_PNGPD_init(stream_state * st)
{
    return s_pngp_init(st, ((bool) 1));
}

static int paeth_predictor(int a, int b, int c)
{
    int px = a + b - c;
    int pa = ((px - a) < 0 ? -(px - a) : (px - a)), pb = ((px - b) < 0 ? -(px - b) : (px - b)), pc = ((px - c) < 0 ? -(px - c) : (px - c));
    return (pa <= pb && pa <= pc ? a : pb <= pc ? b : c);
}
// complexity is O(n) inferred by loopus
static void s_pngp_process(stream_state * st, stream_cursor_write * pw, const byte * dprev, stream_cursor_read * pr, const byte * upprev, const byte * up, uint count)
{
    byte *q = pw->ptr + 1;
    const byte *p = pr->ptr + 1;
    pr->ptr += count;
    pw->ptr += count;
    ((stream_PNGP_state *) st)->row_left -= count;
    switch (((stream_PNGP_state *) st)->case_index) {
    case -10 + 10:
    case -4 + 10:
	memcpy(q, p, count);
	break;
    case -10 + 11:
	for (; count; ++q, ++dprev, ++p, --count)
	    *q = (byte) (*p - *dprev);
	break;
    case -4 + 11:
	for (; count; ++q, ++dprev, ++p, --count)
	    *q = (byte) (*p + *dprev);
	break;
    case -10 + 12:
	for (; count; ++q, ++up, ++p, --count)
	    *q = (byte) (*p - *up);
	break;
    case -4 + 12:
	for (; count; ++q, ++up, ++p, --count)
	    *q = (byte) (*p + *up);
	break;
    case -10 + 13:
	for (; count; ++q, ++dprev, ++up, ++p, --count)
	    *q = (byte) (*p - (((int) *dprev + (int) *up) >> 1));
	break;
    case -4 + 13:
	for (; count; ++q, ++dprev, ++up, ++p, --count)
	    *q = (byte) (*p + (((int) *dprev + (int) *up) >> 1));
	break;
    case -10 + 14:
	for (; count; ++q, ++dprev, ++up, ++upprev, ++p, --count)
	    *q = (byte) (*p - paeth_predictor(*dprev, *up, *upprev));
	break;
    case -4 + 14:
	for (; count; ++q, ++dprev, ++up, ++upprev, ++p, --count)
	    *q = (byte) (*p + paeth_predictor(*dprev, *up, *upprev));
	break;
    }
}

static uint s_pngp_count(const stream_state * st_const, const stream_cursor_read * pr, const stream_cursor_write * pw)
{
    uint rcount = pr->limit - pr->ptr;
    uint wcount = pw->limit - pw->ptr;
    uint row_left = ((const stream_PNGP_state *) st_const)->row_left;
    if (rcount < row_left)
	row_left = rcount;
    if (wcount < row_left)
	row_left = wcount;
    return row_left;
}

static int optimum_predictor(const stream_state * st, const stream_cursor_read * pr)
{
    return 11;
}

static int s_PNGPE_process(stream_state * st, stream_cursor_read * pr, stream_cursor_write * pw, bool last)
{
    int bpp = ((stream_PNGP_state *) st)->bpp;
    int code = 0;
    while (pr->ptr < pr->limit) {
	uint count;
	if (((stream_PNGP_state *) st)->row_left == 0) {
	    int predictor;
	    if (pw->ptr >= pw->limit) {
		code = 1;
		break;
	    }
	    predictor = (((stream_PNGP_state *) st)->Predictor == 15 ? optimum_predictor(st, pr) : ((stream_PNGP_state *) st)->Predictor);
	    *++(pw->ptr) = (byte) predictor - 10;
	    ((stream_PNGP_state *) st)->case_index = predictor + -10;
	    ((stream_PNGP_state *) st)->row_left = ((stream_PNGP_state *) st)->row_count;
	    memset(((stream_PNGP_state *) st)->prev, 0, bpp);
	    continue;
	}
	count = s_pngp_count(st, pr, pw);
	if (count == 0) {
	    code = 1;
	    break;
	}
	{
	    byte *up = ((stream_PNGP_state *) st)->prev_row + bpp + ((stream_PNGP_state *) st)->row_count - ((stream_PNGP_state *) st)->row_left;
	    uint n = (((count) < (bpp)) ? (count) : (bpp));
	    s_pngp_process(st, pw, ((stream_PNGP_state *) st)->prev, pr, up - bpp, up, n);
	    if (((stream_PNGP_state *) st)->prev_row)
		memcpy(up - bpp, ((stream_PNGP_state *) st)->prev, n);
	    if (n < bpp) {
		int prev_left = bpp - n;
		memmove(((stream_PNGP_state *) st)->prev, ((stream_PNGP_state *) st)->prev + n, prev_left);
		memcpy(((stream_PNGP_state *) st)->prev + prev_left, pr->ptr - (n - 1), n);
		break;
	    }
	    count -= bpp;
	    s_pngp_process(st, pw, pr->ptr - (bpp - 1), pr, up, up + bpp, count);
	    memcpy(((stream_PNGP_state *) st)->prev, pr->ptr - (bpp - 1), bpp);
	    if (((stream_PNGP_state *) st)->prev_row) {
		memcpy(up, pr->ptr - (bpp + count - 1), count);
		if (((stream_PNGP_state *) st)->row_left == 0)
		    memcpy(up + count, ((stream_PNGP_state *) st)->prev, bpp);
	    }
	}
    }
    return code;
}

static int s_PNGPD_process(stream_state * st, stream_cursor_read * pr, stream_cursor_write * pw, bool last)
{
    int bpp = ((stream_PNGP_state *) st)->bpp;
    int code = 0;
    while (pr->ptr < pr->limit) {
	uint count;
	if (((stream_PNGP_state *) st)->row_left == 0) {
	    int predictor = pr->ptr[1];
	    if (predictor >= 15 - 10) {
		code = ((int) (-2));
		break;
	    }
	    pr->ptr++;
	    ((stream_PNGP_state *) st)->case_index = predictor + 10 + -4;
	    ((stream_PNGP_state *) st)->row_left = ((stream_PNGP_state *) st)->row_count;
	    memset(((stream_PNGP_state *) st)->prev, 0, bpp);
	    continue;
	}
	count = s_pngp_count(st, pr, pw);
	if (count == 0) {
	    code = 1;
	    break;
	}
	{
	    byte *up = ((stream_PNGP_state *) st)->prev_row + bpp + ((stream_PNGP_state *) st)->row_count - ((stream_PNGP_state *) st)->row_left;
	    uint n = (((count) < (bpp)) ? (count) : (bpp));
	    s_pngp_process(st, pw, ((stream_PNGP_state *) st)->prev, pr, up - bpp, up, n);
	    if (((stream_PNGP_state *) st)->prev_row)
		memcpy(up - bpp, ((stream_PNGP_state *) st)->prev, n);
	    if (n < bpp) {
		int prev_left = bpp - n;
		memmove(((stream_PNGP_state *) st)->prev, ((stream_PNGP_state *) st)->prev + n, prev_left);
		memcpy(((stream_PNGP_state *) st)->prev + prev_left, pw->ptr - (n - 1), n);
		break;
	    }
	    count -= bpp;
	    s_pngp_process(st, pw, pw->ptr - (bpp - 1), pr, up, up + bpp, count);
	    memcpy(((stream_PNGP_state *) st)->prev, pw->ptr - (bpp - 1), bpp);
	    if (((stream_PNGP_state *) st)->prev_row) {
		memcpy(up, pw->ptr - (bpp + count - 1), count);
		if (((stream_PNGP_state *) st)->row_left == 0)
		    memcpy(up + count, ((stream_PNGP_state *) st)->prev, bpp);
	    }
	}
    }
    return code;
}
const stream_template s_PNGPE_template = { &st_PNGP_state, s_PNGPE_init, s_PNGPE_process, 1, 1, 0, s_PNGP_set_defaults, s_PNGP_reinit };
const stream_template s_PNGPD_template = { &st_PNGP_state, s_PNGPD_init, s_PNGPD_process, 1, 1, 0, s_PNGP_set_defaults, s_PNGP_reinit };
