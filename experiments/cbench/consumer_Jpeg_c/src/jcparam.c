//complexity is O(n)inffered by loopus
typedef int ptrdiff_t;
typedef int size_t;
typedef int wchar_t;
typedef struct {
    int quot;
    int rem;
} div_t;
typedef struct {
    long int quot;
    long int rem;
} ldiv_t;
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
 typedef signed long long int __int64_t;
 typedef unsigned long long int __uint64_t;
 typedef long long int __quad_t;
 typedef unsigned long long int __u_quad_t;
 typedef __u_quad_t __dev_t;
 typedef unsigned int __uid_t;
 typedef unsigned int __gid_t;
 typedef unsigned long int __ino_t;
 typedef __u_quad_t __ino64_t;
 typedef unsigned int __mode_t;
 typedef unsigned int __nlink_t;
 typedef long int __off_t;
 typedef __quad_t __off64_t;
 typedef int __pid_t;
 typedef struct {
    int __val[2];
} __fsid_t;
 typedef long int __clock_t;
 typedef unsigned long int __rlim_t;
 typedef __u_quad_t __rlim64_t;
 typedef unsigned int __id_t;
 typedef long int __time_t;
 typedef unsigned int __useconds_t;
 typedef long int __suseconds_t;
 typedef int __daddr_t;
 typedef long int __swblk_t;
 typedef int __key_t;
 typedef int __clockid_t;
 typedef void *__timer_t;
 typedef long int __blksize_t;
 typedef long int __blkcnt_t;
 typedef __quad_t __blkcnt64_t;
 typedef unsigned long int __fsblkcnt_t;
 typedef __u_quad_t __fsblkcnt64_t;
 typedef unsigned long int __fsfilcnt_t;
 typedef __u_quad_t __fsfilcnt64_t;
 typedef int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
 typedef int __intptr_t;
 typedef unsigned int __socklen_t;
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
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
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
 union {
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
	 unsigned long long int __total_seq;
	 unsigned long long int __wakeup_seq;
	 unsigned long long int __woken_seq;
	void *__mutex;
	unsigned int __nwaiters;
	unsigned int __broadcast_seq;
    } __data;
    char __size[48];

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
struct drand48_data {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};

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
typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, size_t __n);
typedef int __io_seek_fn(void *__cookie, __off64_t * __pos, int __w);
typedef int __io_close_fn(void *__cookie);
extern int __underflow(_IO_FILE *);
extern int __uflow(_IO_FILE *);
extern int __overflow(_IO_FILE *, int);
extern int _IO_getc(_IO_FILE * __fp);
extern int _IO_putc(int __c, _IO_FILE * __fp);
extern __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn(_IO_FILE *, void *, size_t);
extern __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
typedef _G_fpos_t fpos_t;
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
typedef struct __locale_struct {
    struct locale_data *__locales[13];
    const unsigned short int *__ctype_b;
    const int *__ctype_tolower;
    const int *__ctype_toupper;
    const char *__names[13];
} *__locale_t;
typedef __locale_t locale_t;
typedef unsigned char JSAMPLE;
typedef short JCOEF;
typedef unsigned char JOCTET;
typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef short INT16;
typedef long INT32;
typedef unsigned int JDIMENSION;
typedef int boolean;
typedef JSAMPLE *JSAMPROW;
typedef JSAMPROW *JSAMPARRAY;
typedef JSAMPARRAY *JSAMPIMAGE;
typedef JCOEF JBLOCK[64];
typedef JBLOCK *JBLOCKROW;
typedef JBLOCKROW *JBLOCKARRAY;
typedef JBLOCKARRAY *JBLOCKIMAGE;
typedef JCOEF *JCOEFPTR;
typedef struct {
    UINT16 quantval[64];
    boolean sent_table;
} JQUANT_TBL;
typedef struct {
    UINT8 bits[17];
    UINT8 huffval[256];
    boolean sent_table;
} JHUFF_TBL;
typedef struct {
    int component_id;
    int component_index;
    int h_samp_factor;
    int v_samp_factor;
    int quant_tbl_no;
    int dc_tbl_no;
    int ac_tbl_no;
    JDIMENSION width_in_blocks;
    JDIMENSION height_in_blocks;
    int DCT_scaled_size;
    JDIMENSION downsampled_width;
    JDIMENSION downsampled_height;
    boolean component_needed;
    int MCU_width;
    int MCU_height;
    int MCU_blocks;
    int MCU_sample_width;
    int last_col_width;
    int last_row_height;
    JQUANT_TBL *quant_table;
    void *dct_table;
} jpeg_component_info;
typedef struct {
    int comps_in_scan;
    int component_index[4];
    int Ss, Se;
    int Ah, Al;
} jpeg_scan_info;
typedef enum { JCS_UNKNOWN, JCS_GRAYSCALE, JCS_RGB, JCS_YCbCr, JCS_CMYK, JCS_YCCK } J_COLOR_SPACE;
typedef enum { JDCT_ISLOW, JDCT_IFAST, JDCT_FLOAT } J_DCT_METHOD;
typedef enum { JDITHER_NONE, JDITHER_ORDERED, JDITHER_FS } J_DITHER_MODE;
struct jpeg_common_struct {
    struct jpeg_error_mgr *err;
    struct jpeg_memory_mgr *mem;
    struct jpeg_progress_mgr *progress;
    boolean is_decompressor;
    int global_state;
};
typedef struct jpeg_common_struct *j_common_ptr;
typedef struct jpeg_compress_struct *j_compress_ptr;
typedef struct jpeg_decompress_struct *j_decompress_ptr;
struct jpeg_compress_struct {
    struct jpeg_error_mgr *err;
    struct jpeg_memory_mgr *mem;
    struct jpeg_progress_mgr *progress;
    boolean is_decompressor;
    int global_state;
    struct jpeg_destination_mgr *dest;
    JDIMENSION image_width;
    JDIMENSION image_height;
    int input_components;
    J_COLOR_SPACE in_color_space;
    double input_gamma;
    int data_precision;
    int num_components;
    J_COLOR_SPACE jpeg_color_space;
    jpeg_component_info *comp_info;
    JQUANT_TBL *quant_tbl_ptrs[4];
    JHUFF_TBL *dc_huff_tbl_ptrs[4];
    JHUFF_TBL *ac_huff_tbl_ptrs[4];
    UINT8 arith_dc_L[16];
    UINT8 arith_dc_U[16];
    UINT8 arith_ac_K[16];
    int num_scans;
    const jpeg_scan_info *scan_info;
    boolean raw_data_in;
    boolean arith_code;
    boolean optimize_coding;
    boolean CCIR601_sampling;
    int smoothing_factor;
    J_DCT_METHOD dct_method;
    unsigned int restart_interval;
    int restart_in_rows;
    boolean write_JFIF_header;
    UINT8 density_unit;
    UINT16 X_density;
    UINT16 Y_density;
    boolean write_Adobe_marker;
    JDIMENSION next_scanline;
    boolean progressive_mode;
    int max_h_samp_factor;
    int max_v_samp_factor;
    JDIMENSION total_iMCU_rows;
    int comps_in_scan;
    jpeg_component_info *cur_comp_info[4];
    JDIMENSION MCUs_per_row;
    JDIMENSION MCU_rows_in_scan;
    int blocks_in_MCU;
    int MCU_membership[10];
    int Ss, Se, Ah, Al;
    struct jpeg_comp_master *master;
    struct jpeg_c_main_controller *main;
    struct jpeg_c_prep_controller *prep;
    struct jpeg_c_coef_controller *coef;
    struct jpeg_marker_writer *marker;
    struct jpeg_color_converter *cconvert;
    struct jpeg_downsampler *downsample;
    struct jpeg_forward_dct *fdct;
    struct jpeg_entropy_encoder *entropy;
};
struct jpeg_decompress_struct {
    struct jpeg_error_mgr *err;
    struct jpeg_memory_mgr *mem;
    struct jpeg_progress_mgr *progress;
    boolean is_decompressor;
    int global_state;
    struct jpeg_source_mgr *src;
    JDIMENSION image_width;
    JDIMENSION image_height;
    int num_components;
    J_COLOR_SPACE jpeg_color_space;
    J_COLOR_SPACE out_color_space;
    unsigned int scale_num, scale_denom;
    double output_gamma;
    boolean buffered_image;
    boolean raw_data_out;
    J_DCT_METHOD dct_method;
    boolean do_fancy_upsampling;
    boolean do_block_smoothing;
    boolean quantize_colors;
    J_DITHER_MODE dither_mode;
    boolean two_pass_quantize;
    int desired_number_of_colors;
    boolean enable_1pass_quant;
    boolean enable_external_quant;
    boolean enable_2pass_quant;
    JDIMENSION output_width;
    JDIMENSION output_height;
    int out_color_components;
    int output_components;
    int rec_outbuf_height;
    int actual_number_of_colors;
    JSAMPARRAY colormap;
    JDIMENSION output_scanline;
    int input_scan_number;
    JDIMENSION input_iMCU_row;
    int output_scan_number;
    JDIMENSION output_iMCU_row;
    int (*coef_bits)[64];
    JQUANT_TBL *quant_tbl_ptrs[4];
    JHUFF_TBL *dc_huff_tbl_ptrs[4];
    JHUFF_TBL *ac_huff_tbl_ptrs[4];
    int data_precision;
    jpeg_component_info *comp_info;
    boolean progressive_mode;
    boolean arith_code;
    UINT8 arith_dc_L[16];
    UINT8 arith_dc_U[16];
    UINT8 arith_ac_K[16];
    unsigned int restart_interval;
    boolean saw_JFIF_marker;
    UINT8 density_unit;
    UINT16 X_density;
    UINT16 Y_density;
    boolean saw_Adobe_marker;
    UINT8 Adobe_transform;
    boolean CCIR601_sampling;
    int max_h_samp_factor;
    int max_v_samp_factor;
    int min_DCT_scaled_size;
    JDIMENSION total_iMCU_rows;
    JSAMPLE *sample_range_limit;
    int comps_in_scan;
    jpeg_component_info *cur_comp_info[4];
    JDIMENSION MCUs_per_row;
    JDIMENSION MCU_rows_in_scan;
    int blocks_in_MCU;
    int MCU_membership[10];
    int Ss, Se, Ah, Al;
    int unread_marker;
    struct jpeg_decomp_master *master;
    struct jpeg_d_main_controller *main;
    struct jpeg_d_coef_controller *coef;
    struct jpeg_d_post_controller *post;
    struct jpeg_input_controller *inputctl;
    struct jpeg_marker_reader *marker;
    struct jpeg_entropy_decoder *entropy;
    struct jpeg_inverse_dct *idct;
    struct jpeg_upsampler *upsample;
    struct jpeg_color_deconverter *cconvert;
    struct jpeg_color_quantizer *cquantize;
};
struct jpeg_error_mgr {
    void (*error_exit) (j_common_ptr cinfo);
    void (*emit_message) (j_common_ptr cinfo, int msg_level);
    void (*output_message) (j_common_ptr cinfo);
    void (*format_message) (j_common_ptr cinfo, char *buffer);
    void (*reset_error_mgr) (j_common_ptr cinfo);
    int msg_code;
    union {
	int i[8];
	char s[80];
    } msg_parm;
    int trace_level;
    long num_warnings;
    const char *const *jpeg_message_table;
    int last_jpeg_message;
    const char *const *addon_message_table;
    int first_addon_message;
    int last_addon_message;
};
struct jpeg_progress_mgr {
    void (*progress_monitor) (j_common_ptr cinfo);
    long pass_counter;
    long pass_limit;
    int completed_passes;
    int total_passes;
};
struct jpeg_destination_mgr {
    JOCTET *next_output_byte;
    size_t free_in_buffer;
    void (*init_destination) (j_compress_ptr cinfo);
    boolean(*empty_output_buffer) (j_compress_ptr cinfo);
    void (*term_destination) (j_compress_ptr cinfo);
};
struct jpeg_source_mgr {
    const JOCTET *next_input_byte;
    size_t bytes_in_buffer;
    void (*init_source) (j_decompress_ptr cinfo);
    boolean(*fill_input_buffer) (j_decompress_ptr cinfo);
    void (*skip_input_data) (j_decompress_ptr cinfo, long num_bytes);
    boolean(*resync_to_restart) (j_decompress_ptr cinfo, int desired);
    void (*term_source) (j_decompress_ptr cinfo);
};
typedef struct jvirt_sarray_control *jvirt_sarray_ptr;
typedef struct jvirt_barray_control *jvirt_barray_ptr;
struct jpeg_memory_mgr {
    void *(*alloc_small) (j_common_ptr cinfo, int pool_id, size_t sizeofobject);
    void *(*alloc_large) (j_common_ptr cinfo, int pool_id, size_t sizeofobject);
    JSAMPARRAY(*alloc_sarray) (j_common_ptr cinfo, int pool_id, JDIMENSION samplesperrow, JDIMENSION numrows);
    JBLOCKARRAY(*alloc_barray) (j_common_ptr cinfo, int pool_id, JDIMENSION blocksperrow, JDIMENSION numrows);
    jvirt_sarray_ptr(*request_virt_sarray) (j_common_ptr cinfo, int pool_id, boolean pre_zero, JDIMENSION samplesperrow, JDIMENSION numrows, JDIMENSION maxaccess);
    jvirt_barray_ptr(*request_virt_barray) (j_common_ptr cinfo, int pool_id, boolean pre_zero, JDIMENSION blocksperrow, JDIMENSION numrows, JDIMENSION maxaccess);
    void (*realize_virt_arrays) (j_common_ptr cinfo);
    JSAMPARRAY(*access_virt_sarray) (j_common_ptr cinfo, jvirt_sarray_ptr ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable);
    JBLOCKARRAY(*access_virt_barray) (j_common_ptr cinfo, jvirt_barray_ptr ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable);
    void (*free_pool) (j_common_ptr cinfo, int pool_id);
    void (*self_destruct) (j_common_ptr cinfo);
    long max_memory_to_use;
};
typedef boolean(*jpeg_marker_parser_method) (j_decompress_ptr cinfo);
extern struct jpeg_error_mgr *jpeg_std_error(struct jpeg_error_mgr *err);
extern void jpeg_CreateCompress(j_compress_ptr cinfo, int version, size_t structsize);
extern void jpeg_CreateDecompress(j_decompress_ptr cinfo, int version, size_t structsize);
extern void jpeg_destroy_compress(j_compress_ptr cinfo);
extern void jpeg_destroy_decompress(j_decompress_ptr cinfo);
extern void jpeg_stdio_dest(j_compress_ptr cinfo, FILE * outfile);
extern void jpeg_stdio_src(j_decompress_ptr cinfo, FILE * infile);
extern void jpeg_set_defaults(j_compress_ptr cinfo);
extern void jpeg_set_colorspace(j_compress_ptr cinfo, J_COLOR_SPACE colorspace);
extern void jpeg_default_colorspace(j_compress_ptr cinfo);
extern void jpeg_set_quality(j_compress_ptr cinfo, int quality, boolean force_baseline);
extern void jpeg_set_linear_quality(j_compress_ptr cinfo, int scale_factor, boolean force_baseline);
extern void jpeg_add_quant_table(j_compress_ptr cinfo, int which_tbl, const unsigned int *basic_table, int scale_factor, boolean force_baseline);
extern int jpeg_quality_scaling(int quality);
extern void jpeg_simple_progression(j_compress_ptr cinfo);
extern void jpeg_suppress_tables(j_compress_ptr cinfo, boolean suppress);
extern JQUANT_TBL *jpeg_alloc_quant_table(j_common_ptr cinfo);
extern JHUFF_TBL *jpeg_alloc_huff_table(j_common_ptr cinfo);
extern void jpeg_start_compress(j_compress_ptr cinfo, boolean write_all_tables);
extern JDIMENSION jpeg_write_scanlines(j_compress_ptr cinfo, JSAMPARRAY scanlines, JDIMENSION num_lines);
extern void jpeg_finish_compress(j_compress_ptr cinfo);
extern JDIMENSION jpeg_write_raw_data(j_compress_ptr cinfo, JSAMPIMAGE data, JDIMENSION num_lines);
extern void jpeg_write_marker(j_compress_ptr cinfo, int marker, const JOCTET * dataptr, unsigned int datalen);
extern void jpeg_write_tables(j_compress_ptr cinfo);
extern int jpeg_read_header(j_decompress_ptr cinfo, boolean require_image);
extern boolean jpeg_start_decompress(j_decompress_ptr cinfo);
extern JDIMENSION jpeg_read_scanlines(j_decompress_ptr cinfo, JSAMPARRAY scanlines, JDIMENSION max_lines);
extern boolean jpeg_finish_decompress(j_decompress_ptr cinfo);
extern JDIMENSION jpeg_read_raw_data(j_decompress_ptr cinfo, JSAMPIMAGE data, JDIMENSION max_lines);
extern boolean jpeg_has_multiple_scans(j_decompress_ptr cinfo);
extern boolean jpeg_start_output(j_decompress_ptr cinfo, int scan_number);
extern boolean jpeg_finish_output(j_decompress_ptr cinfo);
extern boolean jpeg_input_complete(j_decompress_ptr cinfo);
extern void jpeg_new_colormap(j_decompress_ptr cinfo);
extern int jpeg_consume_input(j_decompress_ptr cinfo);
extern void jpeg_calc_output_dimensions(j_decompress_ptr cinfo);
extern void jpeg_set_marker_processor(j_decompress_ptr cinfo, int marker_code, jpeg_marker_parser_method routine);
extern jvirt_barray_ptr *jpeg_read_coefficients(j_decompress_ptr cinfo);
extern void jpeg_write_coefficients(j_compress_ptr cinfo, jvirt_barray_ptr * coef_arrays);
extern void jpeg_copy_critical_parameters(j_decompress_ptr srcinfo, j_compress_ptr dstinfo);
extern void jpeg_abort_compress(j_compress_ptr cinfo);
extern void jpeg_abort_decompress(j_decompress_ptr cinfo);
extern void jpeg_abort(j_common_ptr cinfo);
extern void jpeg_destroy(j_common_ptr cinfo);
extern boolean jpeg_resync_to_restart(j_decompress_ptr cinfo, int desired);
typedef enum { JBUF_PASS_THRU, JBUF_SAVE_SOURCE, JBUF_CRANK_DEST, JBUF_SAVE_AND_PASS } J_BUF_MODE;
struct jpeg_comp_master {
    void (*prepare_for_pass) (j_compress_ptr cinfo);
    void (*pass_startup) (j_compress_ptr cinfo);
    void (*finish_pass) (j_compress_ptr cinfo);
    boolean call_pass_startup;
    boolean is_last_pass;
};
struct jpeg_c_main_controller {
    void (*start_pass) (j_compress_ptr cinfo, J_BUF_MODE pass_mode);
    void (*process_data) (j_compress_ptr cinfo, JSAMPARRAY input_buf, JDIMENSION * in_row_ctr, JDIMENSION in_rows_avail);
};
struct jpeg_c_prep_controller {
    void (*start_pass) (j_compress_ptr cinfo, J_BUF_MODE pass_mode);
    void (*pre_process_data) (j_compress_ptr cinfo, JSAMPARRAY input_buf, JDIMENSION * in_row_ctr, JDIMENSION in_rows_avail, JSAMPIMAGE output_buf, JDIMENSION * out_row_group_ctr, JDIMENSION out_row_groups_avail);
};
struct jpeg_c_coef_controller {
    void (*start_pass) (j_compress_ptr cinfo, J_BUF_MODE pass_mode);
    boolean(*compress_data) (j_compress_ptr cinfo, JSAMPIMAGE input_buf);
};
struct jpeg_color_converter {
    void (*start_pass) (j_compress_ptr cinfo);
    void (*color_convert) (j_compress_ptr cinfo, JSAMPARRAY input_buf, JSAMPIMAGE output_buf, JDIMENSION output_row, int num_rows);
};
struct jpeg_downsampler {
    void (*start_pass) (j_compress_ptr cinfo);
    void (*downsample) (j_compress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION in_row_index, JSAMPIMAGE output_buf, JDIMENSION out_row_group_index);
    boolean need_context_rows;
};
struct jpeg_forward_dct {
    void (*start_pass) (j_compress_ptr cinfo);
    void (*forward_DCT) (j_compress_ptr cinfo, jpeg_component_info * compptr, JSAMPARRAY sample_data, JBLOCKROW coef_blocks, JDIMENSION start_row, JDIMENSION start_col, JDIMENSION num_blocks);
};
struct jpeg_entropy_encoder {
    void (*start_pass) (j_compress_ptr cinfo, boolean gather_statistics);
    boolean(*encode_mcu) (j_compress_ptr cinfo, JBLOCKROW * MCU_data);
    void (*finish_pass) (j_compress_ptr cinfo);
};
struct jpeg_marker_writer {
    void (*write_any_marker) (j_compress_ptr cinfo, int marker, const JOCTET * dataptr, unsigned int datalen);
    void (*write_file_header) (j_compress_ptr cinfo);
    void (*write_frame_header) (j_compress_ptr cinfo);
    void (*write_scan_header) (j_compress_ptr cinfo);
    void (*write_file_trailer) (j_compress_ptr cinfo);
    void (*write_tables_only) (j_compress_ptr cinfo);
};
struct jpeg_decomp_master {
    void (*prepare_for_output_pass) (j_decompress_ptr cinfo);
    void (*finish_output_pass) (j_decompress_ptr cinfo);
    boolean is_dummy_pass;
};
struct jpeg_input_controller {
    int (*consume_input) (j_decompress_ptr cinfo);
    void (*reset_input_controller) (j_decompress_ptr cinfo);
    void (*start_input_pass) (j_decompress_ptr cinfo);
    void (*finish_input_pass) (j_decompress_ptr cinfo);
    boolean has_multiple_scans;
    boolean eoi_reached;
};
struct jpeg_d_main_controller {
    void (*start_pass) (j_decompress_ptr cinfo, J_BUF_MODE pass_mode);
    void (*process_data) (j_decompress_ptr cinfo, JSAMPARRAY output_buf, JDIMENSION * out_row_ctr, JDIMENSION out_rows_avail);
};
struct jpeg_d_coef_controller {
    void (*start_input_pass) (j_decompress_ptr cinfo);
    int (*consume_data) (j_decompress_ptr cinfo);
    void (*start_output_pass) (j_decompress_ptr cinfo);
    int (*decompress_data) (j_decompress_ptr cinfo, JSAMPIMAGE output_buf);
    jvirt_barray_ptr *coef_arrays;
};
struct jpeg_d_post_controller {
    void (*start_pass) (j_decompress_ptr cinfo, J_BUF_MODE pass_mode);
    void (*post_process_data) (j_decompress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION * in_row_group_ctr, JDIMENSION in_row_groups_avail, JSAMPARRAY output_buf, JDIMENSION * out_row_ctr, JDIMENSION out_rows_avail);
};
struct jpeg_marker_reader {
    void (*reset_marker_reader) (j_decompress_ptr cinfo);
    int (*read_markers) (j_decompress_ptr cinfo);
    jpeg_marker_parser_method read_restart_marker;
    jpeg_marker_parser_method process_COM;
    jpeg_marker_parser_method process_APPn[16];
    boolean saw_SOI;
    boolean saw_SOF;
    int next_restart_num;
    unsigned int discarded_bytes;
};
struct jpeg_entropy_decoder {
    void (*start_pass) (j_decompress_ptr cinfo);
    boolean(*decode_mcu) (j_decompress_ptr cinfo, JBLOCKROW * MCU_data);
};
typedef void (*inverse_DCT_method_ptr) (j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col);
struct jpeg_inverse_dct {
    void (*start_pass) (j_decompress_ptr cinfo);
    inverse_DCT_method_ptr inverse_DCT[10];
};
struct jpeg_upsampler {
    void (*start_pass) (j_decompress_ptr cinfo);
    void (*upsample) (j_decompress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION * in_row_group_ctr, JDIMENSION in_row_groups_avail, JSAMPARRAY output_buf, JDIMENSION * out_row_ctr, JDIMENSION out_rows_avail);
    boolean need_context_rows;
};
struct jpeg_color_deconverter {
    void (*start_pass) (j_decompress_ptr cinfo);
    void (*color_convert) (j_decompress_ptr cinfo, JSAMPIMAGE input_buf, JDIMENSION input_row, JSAMPARRAY output_buf, int num_rows);
};
struct jpeg_color_quantizer {
    void (*start_pass) (j_decompress_ptr cinfo, boolean is_pre_scan);
    void (*color_quantize) (j_decompress_ptr cinfo, JSAMPARRAY input_buf, JSAMPARRAY output_buf, int num_rows);
    void (*finish_pass) (j_decompress_ptr cinfo);
    void (*new_color_map) (j_decompress_ptr cinfo);
};
extern void jinit_compress_master(j_compress_ptr cinfo);
extern void jinit_c_master_control(j_compress_ptr cinfo, boolean transcode_only);
extern void jinit_c_main_controller(j_compress_ptr cinfo, boolean need_full_buffer);
extern void jinit_c_prep_controller(j_compress_ptr cinfo, boolean need_full_buffer);
extern void jinit_c_coef_controller(j_compress_ptr cinfo, boolean need_full_buffer);
extern void jinit_color_converter(j_compress_ptr cinfo);
extern void jinit_downsampler(j_compress_ptr cinfo);
extern void jinit_forward_dct(j_compress_ptr cinfo);
extern void jinit_huff_encoder(j_compress_ptr cinfo);
extern void jinit_phuff_encoder(j_compress_ptr cinfo);
extern void jinit_marker_writer(j_compress_ptr cinfo);
extern void jinit_master_decompress(j_decompress_ptr cinfo);
extern void jinit_d_main_controller(j_decompress_ptr cinfo, boolean need_full_buffer);
extern void jinit_d_coef_controller(j_decompress_ptr cinfo, boolean need_full_buffer);
extern void jinit_d_post_controller(j_decompress_ptr cinfo, boolean need_full_buffer);
extern void jinit_input_controller(j_decompress_ptr cinfo);
extern void jinit_marker_reader(j_decompress_ptr cinfo);
extern void jinit_huff_decoder(j_decompress_ptr cinfo);
extern void jinit_phuff_decoder(j_decompress_ptr cinfo);
extern void jinit_inverse_dct(j_decompress_ptr cinfo);
extern void jinit_upsampler(j_decompress_ptr cinfo);
extern void jinit_color_deconverter(j_decompress_ptr cinfo);
extern void jinit_1pass_quantizer(j_decompress_ptr cinfo);
extern void jinit_2pass_quantizer(j_decompress_ptr cinfo);
extern void jinit_merged_upsampler(j_decompress_ptr cinfo);
extern void jinit_memory_mgr(j_common_ptr cinfo);
extern long jdiv_round_up(long a, long b);
extern long jround_up(long a, long b);
extern void jcopy_sample_rows(JSAMPARRAY input_array, int source_row, JSAMPARRAY output_array, int dest_row, int num_rows, JDIMENSION num_cols);
extern void jcopy_block_row(JBLOCKROW input_row, JBLOCKROW output_row, JDIMENSION num_blocks);
extern void jzero_far(void *target, size_t bytestozero);
extern const int jpeg_zigzag_order[];
extern const int jpeg_natural_order[];
typedef enum { JMSG_NOMESSAGE, JERR_ARITH_NOTIMPL, JERR_BAD_ALIGN_TYPE, JERR_BAD_ALLOC_CHUNK, JERR_BAD_BUFFER_MODE, JERR_BAD_COMPONENT_ID, JERR_BAD_DCTSIZE, JERR_BAD_IN_COLORSPACE, JERR_BAD_J_COLORSPACE, JERR_BAD_LENGTH, JERR_BAD_LIB_VERSION, JERR_BAD_MCU_SIZE, JERR_BAD_POOL_ID, JERR_BAD_PRECISION, JERR_BAD_PROGRESSION, JERR_BAD_PROG_SCRIPT, JERR_BAD_SAMPLING, JERR_BAD_SCAN_SCRIPT, JERR_BAD_STATE, JERR_BAD_STRUCT_SIZE, JERR_BAD_VIRTUAL_ACCESS, JERR_BUFFER_SIZE, JERR_CANT_SUSPEND, JERR_CCIR601_NOTIMPL, JERR_COMPONENT_COUNT, JERR_CONVERSION_NOTIMPL, JERR_DAC_INDEX, JERR_DAC_VALUE, JERR_DHT_COUNTS, JERR_DHT_INDEX, JERR_DQT_INDEX, JERR_EMPTY_IMAGE, JERR_EMS_READ, JERR_EMS_WRITE, JERR_EOI_EXPECTED, JERR_FILE_READ, JERR_FILE_WRITE, JERR_FRACT_SAMPLE_NOTIMPL, JERR_HUFF_CLEN_OVERFLOW, JERR_HUFF_MISSING_CODE, JERR_IMAGE_TOO_BIG, JERR_INPUT_EMPTY, JERR_INPUT_EOF, JERR_MISMATCHED_QUANT_TABLE, JERR_MISSING_DATA, JERR_MODE_CHANGE, JERR_NOTIMPL, JERR_NOT_COMPILED, JERR_NO_BACKING_STORE, JERR_NO_HUFF_TABLE, JERR_NO_IMAGE, JERR_NO_QUANT_TABLE, JERR_NO_SOI, JERR_OUT_OF_MEMORY, JERR_QUANT_COMPONENTS, JERR_QUANT_FEW_COLORS, JERR_QUANT_MANY_COLORS, JERR_SOF_DUPLICATE, JERR_SOF_NO_SOS, JERR_SOF_UNSUPPORTED, JERR_SOI_DUPLICATE, JERR_SOS_NO_SOF, JERR_TFILE_CREATE, JERR_TFILE_READ, JERR_TFILE_SEEK, JERR_TFILE_WRITE, JERR_TOO_LITTLE_DATA, JERR_UNKNOWN_MARKER, JERR_VIRTUAL_BUG, JERR_WIDTH_OVERFLOW, JERR_XMS_READ, JERR_XMS_WRITE, JMSG_COPYRIGHT, JMSG_VERSION, JTRC_16BIT_TABLES, JTRC_ADOBE, JTRC_APP0, JTRC_APP14, JTRC_DAC, JTRC_DHT, JTRC_DQT, JTRC_DRI, JTRC_EMS_CLOSE, JTRC_EMS_OPEN, JTRC_EOI, JTRC_HUFFBITS, JTRC_JFIF, JTRC_JFIF_BADTHUMBNAILSIZE, JTRC_JFIF_MINOR, JTRC_JFIF_THUMBNAIL, JTRC_MISC_MARKER, JTRC_PARMLESS_MARKER, JTRC_QUANTVALS, JTRC_QUANT_3_NCOLORS, JTRC_QUANT_NCOLORS, JTRC_QUANT_SELECTED, JTRC_RECOVERY_ACTION, JTRC_RST, JTRC_SMOOTH_NOTIMPL, JTRC_SOF, JTRC_SOF_COMPONENT, JTRC_SOI, JTRC_SOS, JTRC_SOS_COMPONENT, JTRC_SOS_PARAMS, JTRC_TFILE_CLOSE, JTRC_TFILE_OPEN, JTRC_UNKNOWN_IDS, JTRC_XMS_CLOSE, JTRC_XMS_OPEN, JWRN_ADOBE_XFORM, JWRN_BOGUS_PROGRESSION, JWRN_EXTRANEOUS_DATA, JWRN_HIT_MARKER, JWRN_HUFF_BAD_CODE, JWRN_JFIF_MAJOR, JWRN_JPEG_EOF, JWRN_MUST_RESYNC, JWRN_NOT_SEQUENTIAL, JWRN_TOO_MUCH_DATA, JMSG_LASTMSGCODE } J_MESSAGE_CODE;
void jpeg_add_quant_table(j_compress_ptr cinfo, int which_tbl, const unsigned int *basic_table, int scale_factor, boolean force_baseline)
{
    JQUANT_TBL **qtblptr = &cinfo->quant_tbl_ptrs[which_tbl];
    int i;
    long temp;
    if (cinfo->global_state != 100)
	((cinfo)->err->msg_code = (JERR_BAD_STATE), (cinfo)->err->msg_parm.i[0] = (cinfo->global_state), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    if (*qtblptr == ((void *) 0))
	*qtblptr = jpeg_alloc_quant_table((j_common_ptr) cinfo);
    for (i = 0; i < 64; i++) {
	temp = ((long) basic_table[i] * scale_factor + 50L) / 100L;
	if (temp <= 0L)
	    temp = 1L;
	if (temp > 32767L)
	    temp = 32767L;
	if (force_baseline && temp > 255L)
	    temp = 255L;
	(*qtblptr)->quantval[i] = (UINT16) temp;
    }
    (*qtblptr)->sent_table = 0;
}

void jpeg_set_linear_quality(j_compress_ptr cinfo, int scale_factor, boolean force_baseline)
{
    static const unsigned int std_luminance_quant_tbl[64] = { 16, 11, 10, 16, 24, 40, 51, 61, 12, 12, 14, 19, 26, 58, 60, 55, 14, 13, 16, 24, 40, 57, 69, 56, 14, 17, 22, 29, 51, 87, 80, 62, 18, 22, 37, 56, 68, 109, 103, 77, 24, 35, 55, 64, 81, 104, 113, 92, 49, 64, 78, 87, 103, 121, 120, 101, 72, 92, 95, 98, 112, 100, 103, 99 };
    static const unsigned int std_chrominance_quant_tbl[64] = { 17, 18, 24, 47, 99, 99, 99, 99, 18, 21, 26, 66, 99, 99, 99, 99, 24, 26, 56, 99, 99, 99, 99, 99, 47, 66, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99 };
    jpeg_add_quant_table(cinfo, 0, std_luminance_quant_tbl, scale_factor, force_baseline);
    jpeg_add_quant_table(cinfo, 1, std_chrominance_quant_tbl, scale_factor, force_baseline);
} int jpeg_quality_scaling(int quality)
{
    if (quality <= 0)
	quality = 1;
    if (quality > 100)
	quality = 100;
    if (quality < 50)
	quality = 5000 / quality;
    else
	quality = 200 - quality * 2;
    return quality;
}

void jpeg_set_quality(j_compress_ptr cinfo, int quality, boolean force_baseline)
{
    quality = jpeg_quality_scaling(quality);
    jpeg_set_linear_quality(cinfo, quality, force_baseline);
} static void add_huff_table(j_compress_ptr cinfo, JHUFF_TBL ** htblptr, const UINT8 * bits, const UINT8 * val)
{
    if (*htblptr == ((void *) 0))
	*htblptr = jpeg_alloc_huff_table((j_common_ptr) cinfo);
    memcpy((void *) ((*htblptr)->bits), (const void *) (bits), (size_t) (((size_t) sizeof((*htblptr)->bits))));
    memcpy((void *) ((*htblptr)->huffval), (const void *) (val), (size_t) (((size_t) sizeof((*htblptr)->huffval))));
    (*htblptr)->sent_table = 0;
}

static void std_huff_tables(j_compress_ptr cinfo)
{
    // complexity os O(n) inferred by loopus
    int main() {
        // Your code here
         j_compress_ptr cinfo = (j_compress_ptr)malloc(sizeof(struct jpeg_compress_struct));
        
        // Initialize the j_compress_struct object
        jpeg_create_compress(cinfo);
        
        // Call the functions to be tested
        static const UINT8 bits_dc_luminance[17] = { 0, 0, 1, 5, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 };
        static const UINT8 val_dc_luminance[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
        add_huff_table(cinfo, &cinfo->dc_huff_tbl_ptrs[0], bits_dc_luminance, val_dc_luminance);
        static const UINT8 bits_ac_luminance[17] = { 0, 0, 2, 1, 3, 3, 2, 4, 3, 5, 5, 4, 4, 0, 0, 1, 0x7d };
        static const UINT8 val_ac_luminance[] = { 0x01, 0x02, 0x03, 0x00, 0x04, 0x11, 0x05, 0x12, 0x21, 0x31, 0x41, 0x06, 0x13, 0x51, 0x61, 0x07, 0x22, 0x71, 0x14, 0x32, 0x81, 0x91, 0xa1, 0x08, 0x23, 0x42, 0xb1, 0xc1, 0x15, 0x52, 0xd1, 0xf0, 0x24, 0x33, 0x62, 0x72, 0x82, 0x09, 0x0a, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa };
        add_huff_table(cinfo, &cinfo->ac_huff_tbl_ptrs[0], bits_ac_luminance, val_ac_luminance);
        static const UINT8 bits_dc_chrominance[17] = { 0, 0, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 };
        static const UINT8 val_dc_chrominance[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
        add_huff_table(cinfo, &cinfo->dc_huff_tbl_ptrs[1], bits_dc_chrominance, val_dc_chrominance);
        static const UINT8 bits_ac_chrominance[17] = { 0, 0, 2, 1, 2, 4, 4, 3, 4, 7, 5, 4, 4, 0, 1, 2, 0x77 };
        static const UINT8 val_ac_chrominance[] = { 0x00, 0x01, 0x02, 0x03, 0x11, 0x04, 0x05, 0x21, 0x31, 0x06, 0x12, 0x41, 0x51, 0x07, 0x61, 0x71, 0x13, 0x22, 0x32, 0x81, 0x08, 0x14, 0x42, 0x91, 0xa1, 0xb1, 0xc1, 0x09, 0x23, 0x33, 0x52, 0xf0, 0x15, 0x62, 0x72, 0xd1, 0x0a, 0x16, 0x24, 0x34, 0xe1, 0x25, 0xf1, 0x17, 0x18, 0x19, 0x1a, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa };
        add_huff_table(cinfo, &cinfo->ac_huff_tbl_ptrs[1], bits_ac_chrominance, val_ac_chrominance);
        
        jpeg_set_defaults(cinfo);
        
        jpeg_default_colorspace(cinfo);
        
        jpeg_set_colorspace(cinfo, JCS_GRAYSCALE);
        
        jpeg_set_colorspace(cinfo, JCS_RGB);
        
        jpeg_set_colorspace(cinfo, JCS_YCbCr);
        
        jpeg_set_colorspace(cinfo, JCS_CMYK);
        
        jpeg_set_colorspace(cinfo, JCS_YCCK);
        
        jpeg_simple_progression(cinfo);
        
        // Clean up the j_compress_struct object
        jpeg_destroy_compress(cinfo);
        free(cinfo);
        
        return 0;
    }
} 