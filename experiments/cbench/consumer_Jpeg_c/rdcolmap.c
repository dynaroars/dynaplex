//complexity is O(n^2 ) inferred by loopus
#include "jpeglib.h"
typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
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

static void add_map_entry(j_decompress_ptr cinfo, int R, int G, int B)
{
    JSAMPROW colormap0 = cinfo->colormap[0];
    JSAMPROW colormap1 = cinfo->colormap[1];
    JSAMPROW colormap2 = cinfo->colormap[2];
    int ncolors = cinfo->actual_number_of_colors;
    int index;
    for (index = 0; index < ncolors; index++) {
	if (((int) (colormap0[index])) == R && ((int) (colormap1[index])) == G && ((int) (colormap2[index])) == B)
	    return;
    }
    if (ncolors >= (255 + 1))
	((cinfo)->err->msg_code = (JERR_QUANT_MANY_COLORS), (cinfo)->err->msg_parm.i[0] = ((255 + 1)), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    colormap0[ncolors] = (JSAMPLE) R;
    colormap1[ncolors] = (JSAMPLE) G;
    colormap2[ncolors] = (JSAMPLE) B;
    cinfo->actual_number_of_colors++;
}

static void read_gif_map(j_decompress_ptr cinfo, FILE * infile)
{
    int header[13];
    int i, colormaplen;
    int R, G, B;
    for (i = 1; i < 13; i++) {
	if ((header[i] = _IO_getc(infile)) == (-1))
	    ((cinfo)->err->msg_code = (JERR_BAD_CMAP_FILE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    }
    if (header[1] != 'I' || header[2] != 'F')
	((cinfo)->err->msg_code = (JERR_BAD_CMAP_FILE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    if ((header[10] & 0x80) == 0)
	((cinfo)->err->msg_code = (JERR_BAD_CMAP_FILE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    colormaplen = 2 << (header[10] & 0x07);
    for (i = 0; i < colormaplen; i++) {
	R = _IO_getc(infile);
	G = _IO_getc(infile);
	B = _IO_getc(infile);
	if (R == (-1) || G == (-1) || B == (-1))
	    ((cinfo)->err->msg_code = (JERR_BAD_CMAP_FILE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	add_map_entry(cinfo, R << (8 - 8), G << (8 - 8), B << (8 - 8));
    }
}

static int pbm_getc(FILE * infile)
{
    register int ch;
    ch = _IO_getc(infile);
    if (ch == '#') {
	do {
	    ch = _IO_getc(infile);
	} while (ch != '\n' && ch != (-1));
    }
    return ch;
}

static unsigned int read_pbm_integer(j_decompress_ptr cinfo, FILE * infile)
{
    register int ch;
    register unsigned int val;
    do {
	ch = pbm_getc(infile);
	if (ch == (-1))
	    ((cinfo)->err->msg_code = (JERR_BAD_CMAP_FILE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    } while (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r');
    if (ch < '0' || ch > '9')
	((cinfo)->err->msg_code = (JERR_BAD_CMAP_FILE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    val = ch - '0';
    while ((ch = pbm_getc(infile)) >= '0' && ch <= '9') {
	val *= 10;
	val += ch - '0';
    }
    return val;
}

static void read_ppm_map(j_decompress_ptr cinfo, FILE * infile)
{
    int c;
    unsigned int w, h, maxval, row, col;
    int R, G, B;
    c = _IO_getc(infile);
    w = read_pbm_integer(cinfo, infile);
    h = read_pbm_integer(cinfo, infile);
    maxval = read_pbm_integer(cinfo, infile);
    if (w <= 0 || h <= 0 || maxval <= 0)
	((cinfo)->err->msg_code = (JERR_BAD_CMAP_FILE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    if (maxval != (unsigned int) 255)
	((cinfo)->err->msg_code = (JERR_BAD_CMAP_FILE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
    switch (c) {
    case '3':
	for (row = 0; row < h; row++) {
	    for (col = 0; col < w; col++) {
		R = read_pbm_integer(cinfo, infile);
		G = read_pbm_integer(cinfo, infile);
		B = read_pbm_integer(cinfo, infile);
		add_map_entry(cinfo, R, G, B);
	    }
	}
	break;
    case '6':
	for (row = 0; row < h; row++) {
	    for (col = 0; col < w; col++) {
		R = pbm_getc(infile);
		G = pbm_getc(infile);
		B = pbm_getc(infile);
		if (R == (-1) || G == (-1) || B == (-1))
		    ((cinfo)->err->msg_code = (JERR_BAD_CMAP_FILE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
		add_map_entry(cinfo, R, G, B);
	    }
	}
	break;
    default:
	((cinfo)->err->msg_code = (JERR_BAD_CMAP_FILE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	break;
    }
}

void read_color_map(j_decompress_ptr cinfo, FILE * infile)
{
    cinfo->colormap = (*cinfo->mem->alloc_sarray) ((j_common_ptr) cinfo, 1, (JDIMENSION) (255 + 1), (JDIMENSION) 3);
    cinfo->actual_number_of_colors = 0;
    switch (_IO_getc(infile)) {
    case 'G':
	read_gif_map(cinfo, infile);
	break;
    case 'P':
	read_ppm_map(cinfo, infile);
	break;
    default:
	((cinfo)->err->msg_code = (JERR_BAD_CMAP_FILE), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)));
	break;
    }
}
