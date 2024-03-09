#include <stddef.h>t
ypedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
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
typedef void (*inverse_DCT_method_ptr) (j_decompress_ptr cinfo, jpeg_component_info * compptr, JCOEFPTR coef_block, JSAMPARRAY output_buf, JDIMENSION output_col);
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
extern void jinit_memory_mgr(j_common_ptr cinfo);
extern long jdiv_round_up(long a, long b);
extern long jround_up(long a, long b);
extern void jcopy_sample_rows(JSAMPARRAY input_array, int source_row, JSAMPARRAY output_array, int dest_row, int num_rows, JDIMENSION num_cols);
extern void jcopy_block_row(JBLOCKROW input_row, JBLOCKROW output_row, JDIMENSION num_blocks);
extern void jzero_far(void *target, size_t bytestozero);
extern const int jpeg_zigzag_order[];
extern const int jpeg_natural_order[];
typedef enum { JMSG_NOMESSAGE, JERR_ARITH_NOTIMPL, JERR_BAD_ALIGN_TYPE, JERR_BAD_ALLOC_CHUNK, JERR_BAD_BUFFER_MODE, JERR_BAD_COMPONENT_ID, JERR_BAD_DCTSIZE, JERR_BAD_IN_COLORSPACE, JERR_BAD_J_COLORSPACE, JERR_BAD_LENGTH, JERR_BAD_LIB_VERSION, JERR_BAD_MCU_SIZE, JERR_BAD_POOL_ID, JERR_BAD_PRECISION, JERR_BAD_PROGRESSION, JERR_BAD_PROG_SCRIPT, JERR_BAD_SAMPLING, JERR_BAD_SCAN_SCRIPT, JERR_BAD_STATE, JERR_BAD_STRUCT_SIZE, JERR_BAD_VIRTUAL_ACCESS, JERR_BUFFER_SIZE, JERR_CANT_SUSPEND, JERR_CCIR601_NOTIMPL, JERR_COMPONENT_COUNT, JERR_CONVERSION_NOTIMPL, JERR_DAC_INDEX, JERR_DAC_VALUE, JERR_DHT_COUNTS, JERR_DHT_INDEX, JERR_DQT_INDEX, JERR_EMPTY_IMAGE, JERR_EMS_READ, JERR_EMS_WRITE, JERR_EOI_EXPECTED, JERR_FILE_READ, JERR_FILE_WRITE, JERR_FRACT_SAMPLE_NOTIMPL, JERR_HUFF_CLEN_OVERFLOW, JERR_HUFF_MISSING_CODE, JERR_IMAGE_TOO_BIG, JERR_INPUT_EMPTY, JERR_INPUT_EOF, JERR_MISMATCHED_QUANT_TABLE, JERR_MISSING_DATA, JERR_MODE_CHANGE, JERR_NOTIMPL, JERR_NOT_COMPILED, JERR_NO_BACKING_STORE, JERR_NO_HUFF_TABLE, JERR_NO_IMAGE, JERR_NO_QUANT_TABLE, JERR_NO_SOI, JERR_OUT_OF_MEMORY, JERR_QUANT_COMPONENTS, JERR_QUANT_FEW_COLORS, JERR_QUANT_MANY_COLORS, JERR_SOF_DUPLICATE, JERR_SOF_NO_SOS, JERR_SOF_UNSUPPORTED, JERR_SOI_DUPLICATE, JERR_SOS_NO_SOF, JERR_TFILE_CREATE, JERR_TFILE_READ, JERR_TFILE_SEEK, JERR_TFILE_WRITE, JERR_TOO_LITTLE_DATA, JERR_UNKNOWN_MARKER, JERR_VIRTUAL_BUG, JERR_WIDTH_OVERFLOW, JERR_XMS_READ, JERR_XMS_WRITE, JMSG_COPYRIGHT, JMSG_VERSION, JTRC_16BIT_TABLES, JTRC_ADOBE, JTRC_APP0, JTRC_APP14, JTRC_DAC, JTRC_DHT, JTRC_DQT, JTRC_DRI, JTRC_EMS_CLOSE, JTRC_EMS_OPEN, JTRC_EOI, JTRC_HUFFBITS, JTRC_JFIF, JTRC_JFIF_BADTHUMBNAILSIZE, JTRC_JFIF_MINOR, JTRC_JFIF_THUMBNAIL, JTRC_MISC_MARKER, JTRC_PARMLESS_MARKER, JTRC_QUANTVALS, JTRC_QUANT_3_NCOLORS, JTRC_QUANT_NCOLORS, JTRC_QUANT_SELECTED, JTRC_RECOVERY_ACTION, JTRC_RST, JTRC_SMOOTH_NOTIMPL, JTRC_SOF, JTRC_SOF_COMPONENT, JTRC_SOI, JTRC_SOS, JTRC_SOS_COMPONENT, JTRC_SOS_PARAMS, JTRC_TFILE_CLOSE, JTRC_TFILE_OPEN, JTRC_UNKNOWN_IDS, JTRC_XMS_CLOSE, JTRC_XMS_OPEN, JWRN_ADOBE_XFORM, JWRN_BOGUS_PROGRESSION, JWRN_EXTRANEOUS_DATA, JWRN_HIT_MARKER, JWRN_HUFF_BAD_CODE, JWRN_JFIF_MAJOR, JWRN_JPEG_EOF, JWRN_MUST_RESYNC, JWRN_NOT_SEQUENTIAL, JWRN_TOO_MUCH_DATA, JMSG_LASTMSGCODE } J_MESSAGE_CODE;
typedef struct {
    struct jpeg_c_coef_controller pub;
    JDIMENSION iMCU_row_num;
    JDIMENSION mcu_ctr;
    int MCU_vert_offset;
    int MCU_rows_per_iMCU_row;
    JBLOCKROW MCU_buffer[10];
    jvirt_barray_ptr whole_image[10];
} my_coef_controller;
typedef my_coef_controller *my_coef_ptr;
static boolean compress_data(j_compress_ptr cinfo, JSAMPIMAGE input_buf);
static boolean compress_first_pass(j_compress_ptr cinfo, JSAMPIMAGE input_buf);
static boolean compress_output(j_compress_ptr cinfo, JSAMPIMAGE input_buf);
static void start_iMCU_row(j_compress_ptr cinfo)
{
    my_coef_ptr coef = (my_coef_ptr) cinfo->coef;
    if (cinfo->comps_in_scan > 1) {
	coef->MCU_rows_per_iMCU_row = 1;
    } else {
	if (coef->iMCU_row_num < (cinfo->total_iMCU_rows - 1))
	    coef->MCU_rows_per_iMCU_row = cinfo->cur_comp_info[0]->v_samp_factor;
	else
	    coef->MCU_rows_per_iMCU_row = cinfo->cur_comp_info[0]->last_row_height;
    }
    coef->mcu_ctr = 0;
    coef->MCU_vert_offset = 0;
}

static void start_pass_coef(j_compress_ptr cinfo, J_BUF_MODE pass_mode)
{
    my_coef_ptr coef = (my_coef_ptr) cinfo->coef;
    coef->iMCU_row_num = 0;
    start_iMCU_row(cinfo);
    switch (pass_mode) {
    case JBUF_PASS_THRU:
	if (coef->whole_image[0] != ((void *) 0))
	    ((cinfo)->err->msg_code = (JERR_BAD_BUFFER_MODE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	coef->pub.compress_data = compress_data;
	break;
    case JBUF_SAVE_AND_PASS:
	if (coef->whole_image[0] == ((void *) 0))
	    ((cinfo)->err->msg_code = (JERR_BAD_BUFFER_MODE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	coef->pub.compress_data = compress_first_pass;
	break;
    case JBUF_CRANK_DEST:
	if (coef->whole_image[0] == ((void *) 0))
	    ((cinfo)->err->msg_code = (JERR_BAD_BUFFER_MODE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	coef->pub.compress_data = compress_output;
	break;
    default:
	((cinfo)->err->msg_code = (JERR_BAD_BUFFER_MODE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	break;
    }
}

static boolean compress_data(j_compress_ptr cinfo, JSAMPIMAGE input_buf)
{
    my_coef_ptr coef = (my_coef_ptr) cinfo->coef;
    JDIMENSION MCU_col_num;
    JDIMENSION last_MCU_col = cinfo->MCUs_per_row - 1;
    JDIMENSION last_iMCU_row = cinfo->total_iMCU_rows - 1;
    int blkn, bi, ci, yindex, yoffset, blockcnt;
    JDIMENSION ypos, xpos;
    jpeg_component_info *compptr;
    for (yoffset = coef->MCU_vert_offset; yoffset < coef->MCU_rows_per_iMCU_row; yoffset++) {
	for (MCU_col_num = coef->mcu_ctr; MCU_col_num <= last_MCU_col; MCU_col_num++) {
	    blkn = 0;
	    for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
		compptr = cinfo->cur_comp_info[ci];
		blockcnt = (MCU_col_num < last_MCU_col) ? compptr->MCU_width : compptr->last_col_width;
		xpos = MCU_col_num * compptr->MCU_sample_width;
		ypos = yoffset * 8;
		for (yindex = 0; yindex < compptr->MCU_height; yindex++) {
		    if (coef->iMCU_row_num < last_iMCU_row || yoffset + yindex < compptr->last_row_height) {
			(*cinfo->fdct->forward_DCT) (cinfo, compptr, input_buf[ci], coef->MCU_buffer[blkn], ypos, xpos, (JDIMENSION) blockcnt);
			if (blockcnt < compptr->MCU_width) {
			    jzero_far((void *) coef->MCU_buffer[blkn + blockcnt], (compptr->MCU_width - blockcnt) * ((size_t) sizeof(JBLOCK)));
			    for (bi = blockcnt; bi < compptr->MCU_width; bi++) {
				coef->MCU_buffer[blkn + bi][0][0] = coef->MCU_buffer[blkn + bi - 1][0][0];
			    }
			}
		    } else {
			jzero_far((void *) coef->MCU_buffer[blkn], compptr->MCU_width * ((size_t) sizeof(JBLOCK)));
			for (bi = 0; bi < compptr->MCU_width; bi++) {
			    coef->MCU_buffer[blkn + bi][0][0] = coef->MCU_buffer[blkn - 1][0][0];
			}
		    }
		    blkn += compptr->MCU_width;
		    ypos += 8;
		}
	    }
	    if (!(*cinfo->entropy->encode_mcu) (cinfo, coef->MCU_buffer)) {
		coef->MCU_vert_offset = yoffset;
		coef->mcu_ctr = MCU_col_num;
		return 0;
	    }
	}
	coef->mcu_ctr = 0;
    }
    coef->iMCU_row_num++;
    start_iMCU_row(cinfo);
    return 1;
}

static boolean compress_first_pass(j_compress_ptr cinfo, JSAMPIMAGE input_buf)
{
    my_coef_ptr coef = (my_coef_ptr) cinfo->coef;
    JDIMENSION last_iMCU_row = cinfo->total_iMCU_rows - 1;
    JDIMENSION blocks_across, MCUs_across, MCUindex;
    int bi, ci, h_samp_factor, block_row, block_rows, ndummy;
    JCOEF lastDC;
    jpeg_component_info *compptr;
    JBLOCKARRAY buffer;
    JBLOCKROW thisblockrow, lastblockrow;
    for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
	buffer = (*cinfo->mem->access_virt_barray) ((j_common_ptr) cinfo, coef->whole_image[ci], coef->iMCU_row_num * compptr->v_samp_factor, (JDIMENSION) compptr->v_samp_factor, 1);
	if (coef->iMCU_row_num < last_iMCU_row)
	    block_rows = compptr->v_samp_factor;
	else {
	    block_rows = (int) (compptr->height_in_blocks % compptr->v_samp_factor);
	    if (block_rows == 0)
		block_rows = compptr->v_samp_factor;
	}
	blocks_across = compptr->width_in_blocks;
	h_samp_factor = compptr->h_samp_factor;
	ndummy = (int) (blocks_across % h_samp_factor);
	if (ndummy > 0)
	    ndummy = h_samp_factor - ndummy;
	for (block_row = 0; block_row < block_rows; block_row++) {
	    thisblockrow = buffer[block_row];
	    (*cinfo->fdct->forward_DCT) (cinfo, compptr, input_buf[ci], thisblockrow, (JDIMENSION) (block_row * 8), (JDIMENSION) 0, blocks_across);
	    if (ndummy > 0) {
		thisblockrow += blocks_across;
		jzero_far((void *) thisblockrow, ndummy * ((size_t) sizeof(JBLOCK)));
		lastDC = thisblockrow[-1][0];
		for (bi = 0; bi < ndummy; bi++) {
		    thisblockrow[bi][0] = lastDC;
		}
	    }
	}
	if (coef->iMCU_row_num == last_iMCU_row) {
	    blocks_across += ndummy;
	    MCUs_across = blocks_across / h_samp_factor;
	    for (block_row = block_rows; block_row < compptr->v_samp_factor; block_row++) {
		thisblockrow = buffer[block_row];
		lastblockrow = buffer[block_row - 1];
		jzero_far((void *) thisblockrow, (size_t) (blocks_across * ((size_t) sizeof(JBLOCK))));
		for (MCUindex = 0; MCUindex < MCUs_across; MCUindex++) {
		    lastDC = lastblockrow[h_samp_factor - 1][0];
		    for (bi = 0; bi < h_samp_factor; bi++) {
			thisblockrow[bi][0] = lastDC;
		    }
		    thisblockrow += h_samp_factor;
		    lastblockrow += h_samp_factor;
		}
	    }
	}
    }
    return compress_output(cinfo, input_buf);
}

static boolean compress_output(j_compress_ptr cinfo, JSAMPIMAGE input_buf)
{
    my_coef_ptr coef = (my_coef_ptr) cinfo->coef;
    JDIMENSION MCU_col_num;
    int blkn, ci, xindex, yindex, yoffset;
    JDIMENSION start_col;
    JBLOCKARRAY buffer[4];
    JBLOCKROW buffer_ptr;
    jpeg_component_info *compptr;
    for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
	compptr = cinfo->cur_comp_info[ci];
	buffer[ci] = (*cinfo->mem->access_virt_barray) ((j_common_ptr) cinfo, coef->whole_image[compptr->component_index], coef->iMCU_row_num * compptr->v_samp_factor, (JDIMENSION) compptr->v_samp_factor, 0);
    }
    for (yoffset = coef->MCU_vert_offset; yoffset < coef->MCU_rows_per_iMCU_row; yoffset++) {
	for (MCU_col_num = coef->mcu_ctr; MCU_col_num < cinfo->MCUs_per_row; MCU_col_num++) {
	    blkn = 0;
	    for (ci = 0; ci < cinfo->comps_in_scan; ci++) {
		compptr = cinfo->cur_comp_info[ci];
		start_col = MCU_col_num * compptr->MCU_width;
		for (yindex = 0; yindex < compptr->MCU_height; yindex++) {
		    buffer_ptr = buffer[ci][yindex + yoffset] + start_col;
		    for (xindex = 0; xindex < compptr->MCU_width; xindex++) {
			coef->MCU_buffer[blkn++] = buffer_ptr++;
		    }
		}
	    }
	    if (!(*cinfo->entropy->encode_mcu) (cinfo, coef->MCU_buffer)) {
		coef->MCU_vert_offset = yoffset;
		coef->mcu_ctr = MCU_col_num;
		return 0;
	    }
	}
	coef->mcu_ctr = 0;
    }
    coef->iMCU_row_num++;
    start_iMCU_row(cinfo);
    return 1;
}

void jinit_c_coef_controller(j_compress_ptr cinfo, boolean need_full_buffer)
{
    my_coef_ptr coef;
    coef = (my_coef_ptr) (*cinfo->mem->alloc_small) ((j_common_ptr) cinfo, 1, ((size_t) sizeof(my_coef_controller)));
    cinfo->coef = (struct jpeg_c_coef_controller *) coef;
    coef->pub.start_pass = start_pass_coef;
    if (need_full_buffer) {
	int ci;
	jpeg_component_info *compptr;
	for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components; ci++, compptr++) {
	    coef->whole_image[ci] = (*cinfo->mem->request_virt_barray) ((j_common_ptr) cinfo, 1, 0, (JDIMENSION) jround_up((long) compptr->width_in_blocks, (long) compptr->h_samp_factor), (JDIMENSION) jround_up((long) compptr->height_in_blocks, (long) compptr->v_samp_factor), (JDIMENSION) compptr->v_samp_factor);
    }} else {
	JBLOCKROW buffer;
	int i;
	buffer = (JBLOCKROW) (*cinfo->mem->alloc_large) ((j_common_ptr) cinfo, 1, 10 * ((size_t) sizeof(JBLOCK)));
	for (i = 0; i < 10; i++) {
	    coef->MCU_buffer[i] = buffer + i;
	}
	coef->whole_image[0] = ((void *) 0);
}}
