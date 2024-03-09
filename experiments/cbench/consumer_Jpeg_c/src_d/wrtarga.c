#include <stddef.h>
//complexity is O(n) inffered by loops
typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
typedef struct {
    int quot;
    int rem;
} div_t;
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

typedef struct jvirt_sarray_control *jvirt_sarray_ptr;
typedef struct jvirt_barray_control *jvirt_barray_ptr;

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
typedef enum { JMSG_NOMESSAGE, JERR_ARITH_NOTIMPL, JERR_BAD_ALIGN_TYPE, JERR_BAD_ALLOC_CHUNK, JERR_BAD_BUFFER_MODE, JERR_BAD_COMPONENT_ID, JERR_BAD_DCTSIZE, JERR_BAD_IN_COLORSPACE, JERR_BAD_J_COLORSPACE, JERR_BAD_LENGTH, JERR_BAD_LIB_VERSION, JERR_BAD_MCU_SIZE, JERR_BAD_POOL_ID, JERR_BAD_PRECISION, JERR_BAD_PROGRESSION, JERR_BAD_PROG_SCRIPT, JERR_BAD_SAMPLING, JERR_BAD_SCAN_SCRIPT, JERR_BAD_STATE, JERR_BAD_STRUCT_SIZE, JERR_BAD_VIRTUAL_ACCESS, JERR_BUFFER_SIZE, JERR_CANT_SUSPEND, JERR_CCIR601_NOTIMPL, JERR_COMPONENT_COUNT, JERR_CONVERSION_NOTIMPL, JERR_DAC_INDEX, JERR_DAC_VALUE, JERR_DHT_COUNTS, JERR_DHT_INDEX, JERR_DQT_INDEX, JERR_EMPTY_IMAGE, JERR_EMS_READ, JERR_EMS_WRITE, JERR_EOI_EXPECTED, JERR_FILE_READ, JERR_FILE_WRITE, JERR_FRACT_SAMPLE_NOTIMPL, JERR_HUFF_CLEN_OVERFLOW, JERR_HUFF_MISSING_CODE, JERR_IMAGE_TOO_BIG, JERR_INPUT_EMPTY, JERR_INPUT_EOF, JERR_MISMATCHED_QUANT_TABLE, JERR_MISSING_DATA, JERR_MODE_CHANGE, JERR_NOTIMPL, JERR_NOT_COMPILED, JERR_NO_BACKING_STORE, JERR_NO_HUFF_TABLE, JERR_NO_IMAGE, JERR_NO_QUANT_TABLE, JERR_NO_SOI, JERR_OUT_OF_MEMORY, JERR_QUANT_COMPONENTS, JERR_QUANT_FEW_COLORS, JERR_QUANT_MANY_COLORS, JERR_SOF_DUPLICATE, JERR_SOF_NO_SOS, JERR_SOF_UNSUPPORTED, JERR_SOI_DUPLICATE, JERR_SOS_NO_SOF, JERR_TFILE_CREATE, JERR_TFILE_READ, JERR_TFILE_SEEK, JERR_TFILE_WRITE, JERR_TOO_LITTLE_DATA, JERR_UNKNOWN_MARKER, JERR_VIRTUAL_BUG, JERR_WIDTH_OVERFLOW, JERR_XMS_READ, JERR_XMS_WRITE, JMSG_COPYRIGHT, JMSG_VERSION, JTRC_16BIT_TABLES, JTRC_ADOBE, JTRC_APP0, JTRC_APP14, JTRC_DAC, JTRC_DHT, JTRC_DQT, JTRC_DRI, JTRC_EMS_CLOSE, JTRC_EMS_OPEN, JTRC_EOI, JTRC_HUFFBITS, JTRC_JFIF, JTRC_JFIF_BADTHUMBNAILSIZE, JTRC_JFIF_MINOR, JTRC_JFIF_THUMBNAIL, JTRC_MISC_MARKER, JTRC_PARMLESS_MARKER, JTRC_QUANTVALS, JTRC_QUANT_3_NCOLORS, JTRC_QUANT_NCOLORS, JTRC_QUANT_SELECTED, JTRC_RECOVERY_ACTION, JTRC_RST, JTRC_SMOOTH_NOTIMPL, JTRC_SOF, JTRC_SOF_COMPONENT, JTRC_SOI, JTRC_SOS, JTRC_SOS_COMPONENT, JTRC_SOS_PARAMS, JTRC_TFILE_CLOSE, JTRC_TFILE_OPEN, JTRC_UNKNOWN_IDS, JTRC_XMS_CLOSE, JTRC_XMS_OPEN, JWRN_ADOBE_XFORM, JWRN_BOGUS_PROGRESSION, JWRN_EXTRANEOUS_DATA, JWRN_HIT_MARKER, JWRN_HUFF_BAD_CODE, JWRN_JFIF_MAJOR, JWRN_JPEG_EOF, JWRN_MUST_RESYNC, JWRN_NOT_SEQUENTIAL, JWRN_TOO_MUCH_DATA, JMSG_LASTMSGCODE } J_MESSAGE_CODE;
typedef enum { JMSG_FIRSTADDONCODE = 1000, JERR_BMP_BADCMAP, JERR_BMP_BADDEPTH, JERR_BMP_BADHEADER, JERR_BMP_BADPLANES, JERR_BMP_COLORSPACE, JERR_BMP_COMPRESSED, JERR_BMP_NOT, JTRC_BMP, JTRC_BMP_MAPPED, JTRC_BMP_OS2, JTRC_BMP_OS2_MAPPED, JERR_GIF_BUG, JERR_GIF_CODESIZE, JERR_GIF_COLORSPACE, JERR_GIF_IMAGENOTFOUND, JERR_GIF_NOT, JTRC_GIF, JTRC_GIF_BADVERSION, JTRC_GIF_EXTENSION, JTRC_GIF_NONSQUARE, JWRN_GIF_BADDATA, JWRN_GIF_CHAR, JWRN_GIF_ENDCODE, JWRN_GIF_NOMOREDATA, JERR_PPM_COLORSPACE, JERR_PPM_NONNUMERIC, JERR_PPM_NOT, JTRC_PGM, JTRC_PGM_TEXT, JTRC_PPM, JTRC_PPM_TEXT, JERR_TGA_BADCMAP, JERR_TGA_BADPARMS, JERR_TGA_COLORSPACE, JTRC_TGA, JTRC_TGA_GRAY, JTRC_TGA_MAPPED, JERR_BAD_CMAP_FILE, JERR_TOO_MANY_COLORS, JERR_UNGETC_FAILED, JERR_UNKNOWN_FORMAT, JERR_UNSUPPORTED_FORMAT, JMSG_LASTADDONCODE } ADDON_MESSAGE_CODE;
typedef struct cjpeg_source_struct *cjpeg_source_ptr;
struct cjpeg_source_struct {
    void (*start_input) (j_compress_ptr cinfo, cjpeg_source_ptr sinfo);
    JDIMENSION(*get_pixel_rows) (j_compress_ptr cinfo, cjpeg_source_ptr sinfo);
    void (*finish_input) (j_compress_ptr cinfo, cjpeg_source_ptr sinfo);
    FILE *input_file;
    JSAMPARRAY buffer;
    JDIMENSION buffer_height;
};
typedef struct djpeg_dest_struct *djpeg_dest_ptr;
struct djpeg_dest_struct {
    void (*start_output) (j_decompress_ptr cinfo, djpeg_dest_ptr dinfo);
    void (*put_pixel_rows) (j_decompress_ptr cinfo, djpeg_dest_ptr dinfo, JDIMENSION rows_supplied);
    void (*finish_output) (j_decompress_ptr cinfo, djpeg_dest_ptr dinfo);
    FILE *output_file;
    JSAMPARRAY buffer;
    JDIMENSION buffer_height;
};
struct cdjpeg_progress_mgr {
    struct jpeg_progress_mgr pub;
    int completed_extra_passes;
    int total_extra_passes;
    int percent_done;
};
typedef struct cdjpeg_progress_mgr *cd_progress_ptr;
extern cjpeg_source_ptr jinit_read_bmp(j_compress_ptr cinfo);
extern djpeg_dest_ptr jinit_write_bmp(j_decompress_ptr cinfo, boolean is_os2);
extern cjpeg_source_ptr jinit_read_gif(j_compress_ptr cinfo);
extern djpeg_dest_ptr jinit_write_gif(j_decompress_ptr cinfo);
extern cjpeg_source_ptr jinit_read_ppm(j_compress_ptr cinfo);
extern djpeg_dest_ptr jinit_write_ppm(j_decompress_ptr cinfo);
extern cjpeg_source_ptr jinit_read_rle(j_compress_ptr cinfo);
extern djpeg_dest_ptr jinit_write_rle(j_decompress_ptr cinfo);
extern cjpeg_source_ptr jinit_read_targa(j_compress_ptr cinfo);
extern djpeg_dest_ptr jinit_write_targa(j_decompress_ptr cinfo);
extern boolean read_quant_tables(j_compress_ptr cinfo, char *filename, int scale_factor, boolean force_baseline);
extern boolean read_scan_script(j_compress_ptr cinfo, char *filename);
extern boolean set_quant_slots(j_compress_ptr cinfo, char *arg);
extern boolean set_sample_factors(j_compress_ptr cinfo, char *arg);
extern void read_color_map(j_decompress_ptr cinfo, FILE * infile);
extern void enable_signal_catcher(j_common_ptr cinfo);
extern void start_progress_monitor(j_common_ptr cinfo, cd_progress_ptr progress);
extern void end_progress_monitor(j_common_ptr cinfo);
extern boolean keymatch(char *arg, const char *keyword, int minchars);
extern FILE *read_stdin(void);
extern FILE *write_stdout(void);
typedef struct {
    struct djpeg_dest_struct pub;
    char *iobuffer;
    JDIMENSION buffer_width;
} tga_dest_struct;
typedef tga_dest_struct *tga_dest_ptr;
static void write_header(j_decompress_ptr cinfo, djpeg_dest_ptr dinfo, int num_colors)
{
    char targaheader[18];
    memset((void *) (targaheader), 0, (size_t) (((size_t) sizeof(targaheader))));
    if (num_colors > 0) {
	targaheader[1] = 1;
	targaheader[5] = (char) (num_colors & 0xFF);
	targaheader[6] = (char) (num_colors >> 8);
	targaheader[7] = 24;
    }
    targaheader[12] = (char) (cinfo->output_width & 0xFF);
    targaheader[13] = (char) (cinfo->output_width >> 8);
    targaheader[14] = (char) (cinfo->output_height & 0xFF);
    targaheader[15] = (char) (cinfo->output_height >> 8);
    targaheader[17] = 0x20;
    if (cinfo->out_color_space == JCS_GRAYSCALE) {
	targaheader[2] = 3;
	targaheader[16] = 8;
    } else {
	if (num_colors > 0) {
	    targaheader[2] = 1;
	    targaheader[16] = 8;
	} else {
	    targaheader[2] = 2;
	    targaheader[16] = 24;
	}
    }
    if (((size_t) fwrite((const void *) (targaheader), (size_t) 1, (size_t) (18), (dinfo->output_file))) != (size_t) 18)
	((cinfo)->err->msg_code = (JERR_FILE_WRITE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
} static void put_pixel_rows(j_decompress_ptr cinfo, djpeg_dest_ptr dinfo, JDIMENSION rows_supplied)
{
    tga_dest_ptr dest = (tga_dest_ptr) dinfo;
    register JSAMPROW inptr;
    register char *outptr;
    register JDIMENSION col;
    inptr = dest->pub.buffer[0];
    outptr = dest->iobuffer;
    for (col = cinfo->output_width; col > 0; col--) {
	outptr[0] = (char) ((int) (inptr[2]));
	outptr[1] = (char) ((int) (inptr[1]));
	outptr[2] = (char) ((int) (inptr[0]));
	inptr += 3, outptr += 3;
    } (void) ((size_t) fwrite((const void *) (dest->iobuffer), (size_t) 1, (size_t) (dest->buffer_width), (dest->pub.output_file)));
} static void put_gray_rows(j_decompress_ptr cinfo, djpeg_dest_ptr dinfo, JDIMENSION rows_supplied)
{
    tga_dest_ptr dest = (tga_dest_ptr) dinfo;
    register JSAMPROW inptr;
    register char *outptr;
    register JDIMENSION col;
    inptr = dest->pub.buffer[0];
    outptr = dest->iobuffer;
    for (col = cinfo->output_width; col > 0; col--) {
	*outptr++ = (char) ((int) (*inptr++));
    } (void) ((size_t) fwrite((const void *) (dest->iobuffer), (size_t) 1, (size_t) (dest->buffer_width), (dest->pub.output_file)));
} static void put_demapped_gray(j_decompress_ptr cinfo, djpeg_dest_ptr dinfo, JDIMENSION rows_supplied)
{
    tga_dest_ptr dest = (tga_dest_ptr) dinfo;
    register JSAMPROW inptr;
    register char *outptr;
    register JSAMPROW color_map0 = cinfo->colormap[0];
    register JDIMENSION col;
    inptr = dest->pub.buffer[0];
    outptr = dest->iobuffer;
    for (col = cinfo->output_width; col > 0; col--) {
	*outptr++ = (char) ((int) (color_map0[((int) (*inptr++))]));
    } (void) ((size_t) fwrite((const void *) (dest->iobuffer), (size_t) 1, (size_t) (dest->buffer_width), (dest->pub.output_file)));
} static void start_output_tga(j_decompress_ptr cinfo, djpeg_dest_ptr dinfo)
{
    tga_dest_ptr dest = (tga_dest_ptr) dinfo;
    int num_colors, i;
    FILE *outfile;
    if (cinfo->out_color_space == JCS_GRAYSCALE) {
	write_header(cinfo, dinfo, 0);
	if (cinfo->quantize_colors)
	    dest->pub.put_pixel_rows = put_demapped_gray;
	else
	    dest->pub.put_pixel_rows = put_gray_rows;
    } else if (cinfo->out_color_space == JCS_RGB) {
	if (cinfo->quantize_colors) {
	    num_colors = cinfo->actual_number_of_colors;
	    if (num_colors > 256)
		((cinfo)->err->msg_code = (JERR_TOO_MANY_COLORS), (cinfo)->err->msg_parm.i[0] = (num_colors), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	    write_header(cinfo, dinfo, num_colors);
	    outfile = dest->pub.output_file;
	    for (i = 0; i < num_colors; i++) {
		_IO_putc(((int) (cinfo->colormap[2][i])), outfile);
		_IO_putc(((int) (cinfo->colormap[1][i])), outfile);
		_IO_putc(((int) (cinfo->colormap[0][i])), outfile);
	    } dest->pub.put_pixel_rows = put_gray_rows;
	} else {
	    write_header(cinfo, dinfo, 0);
	    dest->pub.put_pixel_rows = put_pixel_rows;
	}
    } else {
	((cinfo)->err->msg_code = (JERR_TGA_COLORSPACE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    }
}

static void finish_output_tga(j_decompress_ptr cinfo, djpeg_dest_ptr dinfo)
{
    fflush(dinfo->output_file);
    if (ferror(dinfo->output_file))
	((cinfo)->err->msg_code = (JERR_FILE_WRITE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
}

djpeg_dest_ptr jinit_write_targa(j_decompress_ptr cinfo)
{
    tga_dest_ptr dest;
    dest = (tga_dest_ptr) (*cinfo->mem->alloc_small) ((j_common_ptr) cinfo, 1, ((size_t) sizeof(tga_dest_struct)));
    dest->pub.start_output = start_output_tga;
    dest->pub.finish_output = finish_output_tga;
    jpeg_calc_output_dimensions(cinfo);
    dest->buffer_width = cinfo->output_width * cinfo->output_components;
    dest->iobuffer = (char *) (*cinfo->mem->alloc_small) ((j_common_ptr) cinfo, 1, (size_t) (dest->buffer_width * ((size_t) sizeof(char))));
    dest->pub.buffer = (*cinfo->mem->alloc_sarray) ((j_common_ptr) cinfo, 1, dest->buffer_width, (JDIMENSION) 1);
    dest->pub.buffer_height = 1;
    return (djpeg_dest_ptr) dest;
}
