  #include <stddef.h>
// complexity is O(n) inffered by loopus
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
__extension__; typedef struct {
    long long int quot;
    long long int rem;
} lldiv_t;
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
__extension__; typedef signed long long int __int64_t;
__extension__ ;typedef unsigned long long int __uint64_t;
__extension__; typedef long long int __quad_t;
__extension__;typedef unsigned long long int __u_quad_t;
__extension__; typedef __u_quad_t __dev_t;
__extension__; typedef unsigned int __uid_t;
__extension__; typedef unsigned int __gid_t;
__extension__; typedef unsigned long int __ino_t;
__extension__; typedef __u_quad_t __ino64_t;
__extension__; typedef unsigned int __mode_t;
__extension__; typedef unsigned int __nlink_t;
__extension__; typedef long int __off_t;
__extension__; typedef __quad_t __off64_t;
__extension__; typedef int __pid_t;
__extension__; typedef struct {
    int __val[2];
} __fsid_t;
__extension__; typedef long int __clock_t;
__extension__; typedef unsigned long int __rlim_t;
__extension__; typedef __u_quad_t __rlim64_t;
__extension__; typedef unsigned int __id_t;
__extension__; typedef long int __time_t;
__extension__; typedef unsigned int __useconds_t;
__extension__; typedef long int __suseconds_t;
__extension__; typedef int __daddr_t;
__extension__; typedef long int __swblk_t;
__extension__; typedef int __key_t;
__extension__; typedef int __clockid_t;
__extension__; typedef void *__timer_t;
__extension__; typedef long int __blksize_t;
__extension__; typedef long int __blkcnt_t;
__extension__; typedef __quad_t __blkcnt64_t;
__extension__; typedef unsigned long int __fsblkcnt_t;
__extension__; typedef __u_quad_t __fsblkcnt64_t;
__extension__; typedef unsigned long int __fsfilcnt_t;
__extension__; typedef __u_quad_t __fsfilcnt64_t;
__extension__; typedef int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
__extension__;typedef int __intptr_t;
__extension__;typedef unsigned int __socklen_t;
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
typedef int int8_t; 
typedef int int16_t;
typedef int int32_t;
typedef int int64_t;
typedef unsigned int u_int8_t;
typedef unsigned int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned int u_int64_t;
typedef int register_t ;
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
extern unsigned int gnu_dev_major(unsigned long long int __dev);
 extern unsigned int gnu_dev_minor(unsigned long long int __dev);
extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor);
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
    long long int __align;
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
struct random_data {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
};
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
typedef int _G_int16_t;
typedef int _G_int32_t ;
typedef unsigned int _G_uint16_t;
typedef unsigned int _G_uint32_t;
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
   
    boolean is_decompressor;
    int global_state;
};
typedef struct jpeg_common_struct *j_common_ptr;
typedef struct jpeg_compress_struct *j_compress_ptr;
typedef struct jpeg_decompress_struct *j_decompress_ptr;
struct jpeg_compress_struct {
    
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
    struct jpeg_inverse_dct *idct;
    struct jpeg_upsampler *upsample;
    struct jpeg_color_deconverter *cconvert;
    struct jpeg_color_quantizer *cquantize;
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
struct jpeg_d_main_controller {
    void (*start_pass) (j_decompress_ptr cinfo, J_BUF_MODE pass_mode);
    void (*process_data) (j_decompress_ptr cinfo, JSAMPARRAY output_buf, JDIMENSION * out_row_ctr, JDIMENSION out_rows_avail);
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
typedef int DCTELEM;
typedef void (*forward_DCT_method_ptr) (DCTELEM * data);
typedef void (*float_DCT_method_ptr) (float *data);
typedef int ISLOW_MULT_TYPE;
typedef int IFAST_MULT_TYPE;
typedef float FLOAT_MULT_TYPE;
extern void jpeg_fdct_islow(DCTELEM * data);
extern void jpeg_fdct_ifast(DCTELEM * data);
extern void jpeg_fdct_float(float *data);
extern void jpeg_idct_islow(j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col);
extern void jpeg_idct_ifast(j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col);
extern void jpeg_idct_float(j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col);
extern void jpeg_idct_4x4(j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col);
extern void jpeg_idct_2x2(j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col);
extern void jpeg_idct_1x1(j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col);
typedef struct {
    struct jpeg_inverse_dct pub;
    int cur_method[10];
} my_idct_controller;
typedef my_idct_controller *my_idct_ptr;
typedef union {
    ISLOW_MULT_TYPE islow_array[64];
    IFAST_MULT_TYPE ifast_array[64];
    FLOAT_MULT_TYPE float_array[64];
} multiplier_table;
static void start_pass(j_decompress_ptr cinfo)
{
    my_idct_ptr idct = (my_idct_ptr) cinfo->idct;
    int ci, i;
    jpeg_component_info *compptr;
    int method = 0;
    inverse_DCT_method_ptr method_ptr = ((void *) 0);
    JQUANT_TBL *qtbl;
    for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
	switch (compptr->DCT_scaled_size) {
	case 1:
	    method_ptr = jpeg_idct_1x1;
	    method = JDCT_ISLOW;
	    break;
	case 2:
	    method_ptr = jpeg_idct_2x2;
	    method = JDCT_ISLOW;
	    break;
	case 4:
	    method_ptr = jpeg_idct_4x4;
	    method = JDCT_ISLOW;
	    break;
	case 8:
	    switch (cinfo->dct_method) {
	    case JDCT_ISLOW:
		method_ptr = jpeg_idct_islow;
		method = JDCT_ISLOW;
		break;
	    case JDCT_IFAST:
		method_ptr = jpeg_idct_ifast;
		method = JDCT_IFAST;
		break;
	    case JDCT_FLOAT:
		method_ptr = jpeg_idct_float;
		method = JDCT_FLOAT;
		break;
	    default:
		((cinfo)->err->msg_code = (JERR_NOT_COMPILED), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
		break;
	    }
	    break;
	default:
	    ((cinfo)->err->msg_code = (JERR_BAD_DCTSIZE), (cinfo)->err->msg_parm.i[0] = (compptr->DCT_scaled_size), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	    break;
	}
	idct->pub.inverse_DCT[ci] = method_ptr;
	if (!compptr->component_needed || idct->cur_method[ci] == method)
	    continue;
	qtbl = compptr->quant_table;
	if (qtbl == ((void *) 0))
	    continue;
	idct->cur_method[ci] = method;
	switch (method) {
	case JDCT_ISLOW:{
		ISLOW_MULT_TYPE *ismtbl = (ISLOW_MULT_TYPE *) compptr->dct_table;
		for (i = 0; i < 64; i++) {
		    ismtbl[i] = (ISLOW_MULT_TYPE) qtbl->quantval[i];
		}
	    }
	    break;
	case JDCT_IFAST:{
		IFAST_MULT_TYPE *ifmtbl = (IFAST_MULT_TYPE *) compptr->dct_table;
		static const INT16 aanscales[64] = { 16384, 22725, 21407, 19266, 16384, 12873, 8867, 4520, 22725, 31521, 29692, 26722, 22725, 17855, 12299, 6270, 21407, 29692, 27969, 25172, 21407, 16819, 11585, 5906, 19266, 26722, 25172, 22654, 19266, 15137, 10426, 5315, 16384, 22725, 21407, 19266, 16384, 12873, 8867, 4520, 12873, 17855, 16819, 15137, 12873, 10114, 6967, 3552, 8867, 12299, 11585, 10426, 8867, 6967, 4799, 2446, 4520, 6270, 5906, 5315, 4520, 3552, 2446, 1247 };
		for (i = 0; i < 64; i++) {
		    ifmtbl[i] = (IFAST_MULT_TYPE) ((((((INT32) qtbl->quantval[i]) * ((INT32) aanscales[i]))) + (((INT32) 1) << ((14 - 2) - 1))) >> (14 - 2));
		}
	    }
	    break;
	case JDCT_FLOAT:{
		FLOAT_MULT_TYPE *fmtbl = (FLOAT_MULT_TYPE *) compptr->dct_table;
		int row, col;
		static const double aanscalefactor[8] = { 1.0, 1.387039845, 1.306562965, 1.175875602, 1.0, 0.785694958, 0.541196100, 0.275899379 };
		i = 0;
		for (row = 0; row < 8; row++) {
		    for (col = 0; col < 8; col++) {
			fmtbl[i] = (FLOAT_MULT_TYPE) ((double) qtbl->quantval[i] * aanscalefactor[row] * aanscalefactor[col]);
			i++;
	    }}} break;
	default:
	    ((cinfo)->err->msg_code = (JERR_NOT_COMPILED), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	    break;
	}
    }
}

void jinit_inverse_dct(j_decompress_ptr cinfo)
{
    my_idct_ptr idct;
    int ci;
    jpeg_component_info *compptr;
    idct = (my_idct_ptr) (*cinfo->mem->alloc_small) ((j_common_ptr) cinfo, 1, ((size_t) sizeof(my_idct_controller)));
    cinfo->idct = (struct jpeg_inverse_dct *) idct;
    idct->pub.start_pass = start_pass;
    for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
	compptr->dct_table = (*cinfo->mem->alloc_small) ((j_common_ptr) cinfo, 1, ((size_t) sizeof(multiplier_table)));
	memset((void *) (compptr->dct_table), 0, (size_t) (((size_t) sizeof(multiplier_table))));
	idct->cur_method[ci] = -1;
    }
}
 