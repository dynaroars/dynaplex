typedef signed int mad_fixed_t;
typedef signed int mad_fixed64hi_t;
typedef unsigned int mad_fixed64lo_t;
typedef mad_fixed_t mad_sample_t;
mad_fixed_t mad_f_abs(mad_fixed_t);
struct mad_bitptr {
    unsigned char const *byte;
    unsigned short cache;
    unsigned short left;
};
void mad_bit_init(struct mad_bitptr *, unsigned char const *);
unsigned int mad_bit_length(struct mad_bitptr const *, struct mad_bitptr const *);
unsigned char const *mad_bit_nextbyte(struct mad_bitptr const *);
void mad_bit_skip(struct mad_bitptr *, unsigned int);
unsigned long mad_bit_read(struct mad_bitptr *, unsigned int);
void mad_bit_write(struct mad_bitptr *, unsigned int, unsigned long);
unsigned short mad_bit_crc(struct mad_bitptr, unsigned int, unsigned short);
enum mad_error { MAD_ERROR_NONE = 0x0000, MAD_ERROR_BUFLEN = 0x0001, MAD_ERROR_BUFPTR = 0x0002, MAD_ERROR_NOMEM = 0x0031, MAD_ERROR_LOSTSYNC = 0x0101, MAD_ERROR_BADLAYER = 0x0102, MAD_ERROR_BADBITRATE = 0x0103, MAD_ERROR_BADSAMPLERATE = 0x0104, MAD_ERROR_BADEMPHASIS = 0x0105, MAD_ERROR_BADCRC = 0x0201, MAD_ERROR_BADBITALLOC = 0x0211, MAD_ERROR_BADSCALEFACTOR = 0x0221, MAD_ERROR_BADFRAMELEN = 0x0231, MAD_ERROR_BADBIGVALUES = 0x0232, MAD_ERROR_BADBLOCKTYPE = 0x0233, MAD_ERROR_BADSCFSI = 0x0234, MAD_ERROR_BADDATAPTR = 0x0235, MAD_ERROR_BADPART3LEN = 0x0236, MAD_ERROR_BADHUFFTABLE = 0x0237, MAD_ERROR_BADHUFFDATA = 0x0238, MAD_ERROR_BADSTEREO = 0x0239 };
struct mad_stream {
    unsigned char const *buffer;
    unsigned char const *bufend;
    unsigned long skiplen;
    int sync;
    unsigned long freerate;
    unsigned char const *this_frame;
    unsigned char const *next_frame;
    struct mad_bitptr ptr;
    struct mad_bitptr anc_ptr;
    unsigned int anc_bitlen;
    unsigned char (*main_data)[(511 + 2048 + 8)];
    unsigned int md_len;
    int options;
    enum mad_error error;
};
enum { MAD_OPTION_IGNORECRC = 0x0001, MAD_OPTION_HALFSAMPLERATE = 0x0002 };
void mad_stream_init(struct mad_stream *);
void mad_stream_finish(struct mad_stream *);
void mad_stream_buffer(struct mad_stream *, unsigned char const *, unsigned long);
void mad_stream_skip(struct mad_stream *, unsigned long);
int mad_stream_sync(struct mad_stream *);
char const *mad_stream_errorstr(struct mad_stream const *);
typedef struct {
    signed long seconds;
    unsigned long fraction;
} mad_timer_t;
extern mad_timer_t const mad_timer_zero;
enum mad_units { MAD_UNITS_HOURS = -2, MAD_UNITS_MINUTES = -1, MAD_UNITS_SECONDS = 0, MAD_UNITS_DECISECONDS = 10, MAD_UNITS_CENTISECONDS = 100, MAD_UNITS_MILLISECONDS = 1000, MAD_UNITS_8000_HZ = 8000, MAD_UNITS_11025_HZ = 11025, MAD_UNITS_12000_HZ = 12000, MAD_UNITS_16000_HZ = 16000, MAD_UNITS_22050_HZ = 22050, MAD_UNITS_24000_HZ = 24000, MAD_UNITS_32000_HZ = 32000, MAD_UNITS_44100_HZ = 44100, MAD_UNITS_48000_HZ = 48000, MAD_UNITS_24_FPS = 24, MAD_UNITS_25_FPS = 25, MAD_UNITS_30_FPS = 30, MAD_UNITS_48_FPS = 48, MAD_UNITS_50_FPS = 50, MAD_UNITS_60_FPS = 60, MAD_UNITS_75_FPS = 75, MAD_UNITS_23_976_FPS = -24, MAD_UNITS_24_975_FPS = -25, MAD_UNITS_29_97_FPS = -30, MAD_UNITS_47_952_FPS = -48, MAD_UNITS_49_95_FPS = -50, MAD_UNITS_59_94_FPS = -60 };
int mad_timer_compare(mad_timer_t, mad_timer_t);
void mad_timer_negate(mad_timer_t *);
mad_timer_t mad_timer_abs(mad_timer_t);
void mad_timer_set(mad_timer_t *, unsigned long, unsigned long, unsigned long);
void mad_timer_add(mad_timer_t *, mad_timer_t);
void mad_timer_multiply(mad_timer_t *, signed long);
signed long mad_timer_count(mad_timer_t, enum mad_units);
unsigned long mad_timer_fraction(mad_timer_t, unsigned long);
void mad_timer_string(mad_timer_t, char *, char const *, enum mad_units, enum mad_units, unsigned long);
enum mad_layer { MAD_LAYER_I = 1, MAD_LAYER_II = 2, MAD_LAYER_III = 3 };
enum mad_mode { MAD_MODE_SINGLE_CHANNEL = 0, MAD_MODE_DUAL_CHANNEL = 1, MAD_MODE_JOINT_STEREO = 2, MAD_MODE_STEREO = 3 };
enum mad_emphasis { MAD_EMPHASIS_NONE = 0, MAD_EMPHASIS_50_15_US = 1, MAD_EMPHASIS_CCITT_J_17 = 3 };
struct mad_header {
    enum mad_layer layer;
    enum mad_mode mode;
    int mode_extension;
    enum mad_emphasis emphasis;
    unsigned long bitrate;
    unsigned int samplerate;
    unsigned short crc_check;
    unsigned short crc_target;
    int flags;
    int private_bits;
    mad_timer_t duration;
};
struct mad_frame {
    struct mad_header header;
    int options;
    mad_fixed_t sbsample[2][36][32];
     mad_fixed_t(*overlap)[2][32][18];
};
enum { MAD_FLAG_NPRIVATE_III = 0x0007, MAD_FLAG_INCOMPLETE = 0x0008, MAD_FLAG_PROTECTION = 0x0010, MAD_FLAG_COPYRIGHT = 0x0020, MAD_FLAG_ORIGINAL = 0x0040, MAD_FLAG_PADDING = 0x0080, MAD_FLAG_I_STEREO = 0x0100, MAD_FLAG_MS_STEREO = 0x0200, MAD_FLAG_FREEFORMAT = 0x0400, MAD_FLAG_LSF_EXT = 0x1000, MAD_FLAG_MC_EXT = 0x2000, MAD_FLAG_MPEG_2_5_EXT = 0x4000 };
enum { MAD_PRIVATE_HEADER = 0x0100, MAD_PRIVATE_III = 0x001f };
void mad_header_init(struct mad_header *);
int mad_header_decode(struct mad_header *, struct mad_stream *);
void mad_frame_init(struct mad_frame *);
void mad_frame_finish(struct mad_frame *);
int mad_frame_decode(struct mad_frame *, struct mad_stream *);
void mad_frame_mute(struct mad_frame *);
struct id3_tag {
    unsigned int refcount;
    unsigned int version;
    int flags;
    int extendedflags;
    int restrictions;
    int options;
    unsigned int nframes;
    struct id3_frame **frames;
    unsigned long paddedsize;
};
enum { ID3_TAG_FLAG_UNSYNCHRONISATION = 0x80, ID3_TAG_FLAG_EXTENDEDHEADER = 0x40, ID3_TAG_FLAG_EXPERIMENTALINDICATOR = 0x20, ID3_TAG_FLAG_FOOTERPRESENT = 0x10, ID3_TAG_FLAG_KNOWNFLAGS = 0xf0 };
enum { ID3_TAG_EXTENDEDFLAG_TAGISANUPDATE = 0x40, ID3_TAG_EXTENDEDFLAG_CRCDATAPRESENT = 0x20, ID3_TAG_EXTENDEDFLAG_TAGRESTRICTIONS = 0x10, ID3_TAG_EXTENDEDFLAG_KNOWNFLAGS = 0x70 };
enum { ID3_TAG_RESTRICTION_TAGSIZE_MASK = 0xc0, ID3_TAG_RESTRICTION_TAGSIZE_128_FRAMES_1_MB = 0x00, ID3_TAG_RESTRICTION_TAGSIZE_64_FRAMES_128_KB = 0x40, ID3_TAG_RESTRICTION_TAGSIZE_32_FRAMES_40_KB = 0x80, ID3_TAG_RESTRICTION_TAGSIZE_32_FRAMES_4_KB = 0xc0 };
enum { ID3_TAG_RESTRICTION_TEXTENCODING_MASK = 0x20, ID3_TAG_RESTRICTION_TEXTENCODING_NONE = 0x00, ID3_TAG_RESTRICTION_TEXTENCODING_LATIN1_UTF8 = 0x20 };
enum { ID3_TAG_RESTRICTION_TEXTSIZE_MASK = 0x18, ID3_TAG_RESTRICTION_TEXTSIZE_NONE = 0x00, ID3_TAG_RESTRICTION_TEXTSIZE_1024_CHARS = 0x08, ID3_TAG_RESTRICTION_TEXTSIZE_128_CHARS = 0x10, ID3_TAG_RESTRICTION_TEXTSIZE_30_CHARS = 0x18 };
enum { ID3_TAG_RESTRICTION_IMAGEENCODING_MASK = 0x04, ID3_TAG_RESTRICTION_IMAGEENCODING_NONE = 0x00, ID3_TAG_RESTRICTION_IMAGEENCODING_PNG_JPEG = 0x04 };
enum { ID3_TAG_RESTRICTION_IMAGESIZE_MASK = 0x03, ID3_TAG_RESTRICTION_IMAGESIZE_NONE = 0x00, ID3_TAG_RESTRICTION_IMAGESIZE_256_256 = 0x01, ID3_TAG_RESTRICTION_IMAGESIZE_64_64 = 0x02, ID3_TAG_RESTRICTION_IMAGESIZE_64_64_EXACT = 0x03 };
enum { ID3_TAG_OPTION_UNSYNCHRONISATION = 0x0001, ID3_TAG_OPTION_COMPRESSION = 0x0002, ID3_TAG_OPTION_CRC = 0x0004, ID3_TAG_OPTION_APPENDEDTAG = 0x0010, ID3_TAG_OPTION_FILEALTERED = 0x0020, ID3_TAG_OPTION_ID3V1 = 0x0100 };
typedef unsigned char id3_byte_t;
typedef unsigned long id3_length_t;
typedef unsigned long id3_ucs4_t;
typedef unsigned char id3_latin1_t;
typedef unsigned short id3_utf16_t;
typedef signed char id3_utf8_t;
struct id3_frame {
    char id[5];
    char const *description;
    unsigned int refcount;
    int flags;
    int group_id;
    int encryption_method;
    id3_byte_t *encoded;
    id3_length_t encoded_length;
    id3_length_t decoded_length;
    unsigned int nfields;
    union id3_field *fields;
};
enum { ID3_FRAME_FLAG_TAGALTERPRESERVATION = 0x4000, ID3_FRAME_FLAG_FILEALTERPRESERVATION = 0x2000, ID3_FRAME_FLAG_READONLY = 0x1000, ID3_FRAME_FLAG_STATUSFLAGS = 0xff00, ID3_FRAME_FLAG_GROUPINGIDENTITY = 0x0040, ID3_FRAME_FLAG_COMPRESSION = 0x0008, ID3_FRAME_FLAG_ENCRYPTION = 0x0004, ID3_FRAME_FLAG_UNSYNCHRONISATION = 0x0002, ID3_FRAME_FLAG_DATALENGTHINDICATOR = 0x0001, ID3_FRAME_FLAG_FORMATFLAGS = 0x00ff, ID3_FRAME_FLAG_KNOWNFLAGS = 0x704f };
enum id3_field_type { ID3_FIELD_TYPE_TEXTENCODING, ID3_FIELD_TYPE_LATIN1, ID3_FIELD_TYPE_LATIN1FULL, ID3_FIELD_TYPE_LATIN1LIST, ID3_FIELD_TYPE_STRING, ID3_FIELD_TYPE_STRINGFULL, ID3_FIELD_TYPE_STRINGLIST, ID3_FIELD_TYPE_LANGUAGE, ID3_FIELD_TYPE_FRAMEID, ID3_FIELD_TYPE_DATE, ID3_FIELD_TYPE_INT8, ID3_FIELD_TYPE_INT16, ID3_FIELD_TYPE_INT24, ID3_FIELD_TYPE_INT32, ID3_FIELD_TYPE_INT32PLUS, ID3_FIELD_TYPE_BINARYDATA };
enum id3_field_textencoding { ID3_FIELD_TEXTENCODING_ISO_8859_1 = 0x00, ID3_FIELD_TEXTENCODING_UTF_16 = 0x01, ID3_FIELD_TEXTENCODING_UTF_16BE = 0x02, ID3_FIELD_TEXTENCODING_UTF_8 = 0x03 };
union id3_field {
    enum id3_field_type type;
    struct {
	enum id3_field_type type;
	signed long value;
    } number;
    struct {
	enum id3_field_type type;
	id3_latin1_t *ptr;
    } latin1;
    struct {
	enum id3_field_type type;
	unsigned int nstrings;
	id3_latin1_t **strings;
    } latin1list;
    struct {
	enum id3_field_type type;
	id3_ucs4_t *ptr;
    } string;
    struct {
	enum id3_field_type type;
	unsigned int nstrings;
	id3_ucs4_t **strings;
    } stringlist;
    struct {
	enum id3_field_type type;
	char value[9];
    } immediate;
    struct {
	enum id3_field_type type;
	id3_byte_t *data;
	id3_length_t length;
    } binary;
};
struct id3_tag *id3_tag_new(void);
void id3_tag_delete(struct id3_tag *);
void id3_tag_clearframes(struct id3_tag *);
int id3_tag_attachframe(struct id3_tag *, struct id3_frame *);
int id3_tag_detachframe(struct id3_tag *, struct id3_frame *);
struct id3_frame *id3_tag_findframe(struct id3_tag const *, char const *, unsigned int);
signed long id3_tag_query(id3_byte_t const *, id3_length_t);
struct id3_tag *id3_tag_parse(id3_byte_t const *, id3_length_t);
id3_length_t id3_tag_render(struct id3_tag const *, id3_byte_t *);
enum id3_file_mode { ID3_FILE_MODE_READONLY = 0, ID3_FILE_MODE_READWRITE };
struct id3_file *id3_file_open(char const *, enum id3_file_mode);
struct id3_file *id3_file_fdopen(int, enum id3_file_mode);
void id3_file_close(struct id3_file *);
struct id3_tag *id3_file_tag(struct id3_file const *);
int id3_file_update(struct id3_file *);
id3_latin1_t *id3_ucs4_latin1duplicate(id3_ucs4_t const *);
id3_utf16_t *id3_ucs4_utf16duplicate(id3_ucs4_t const *);
id3_utf8_t *id3_ucs4_utf8duplicate(id3_ucs4_t const *);
void id3_ucs4_putnumber(id3_ucs4_t *, unsigned long);
unsigned long id3_ucs4_getnumber(id3_ucs4_t const *);
id3_ucs4_t const *id3_genre_name(id3_ucs4_t const *);
int id3_field_setint(union id3_field *, signed long);
int id3_field_settextencoding(union id3_field *, enum id3_field_textencoding);
int id3_field_setstrings(union id3_field *, unsigned int, id3_ucs4_t **);
int id3_field_addstring(union id3_field *, id3_ucs4_t const *);
int id3_field_setlanguage(union id3_field *, char const *);
int id3_field_setlatin1(union id3_field *, id3_latin1_t const *);
int id3_field_setfulllatin1(union id3_field *, id3_latin1_t const *);
int id3_field_setstring(union id3_field *, id3_ucs4_t const *);
int id3_field_setfullstring(union id3_field *, id3_ucs4_t const *);
int id3_field_setframeid(union id3_field *, char const *);
int id3_field_setbinarydata(union id3_field *, id3_byte_t const *, id3_length_t);
signed long id3_field_getint(union id3_field const *);
id3_ucs4_t const *id3_field_getstring(union id3_field const *);
id3_ucs4_t const *id3_field_getfullstring(union id3_field const *);
unsigned int id3_field_getnstrings(union id3_field const *);
id3_ucs4_t const *id3_field_getstrings(union id3_field const *, unsigned int index);
char const *id3_field_getframeid(union id3_field const *);
id3_byte_t const *id3_field_getbinarydata(union id3_field const *, id3_length_t *);
extern char const id3_version[];
extern char const id3_copyright[];
extern char const id3_author[];
extern char const id3_build[];
int id3_frame_validid(char const *);
struct id3_frame *id3_frame_new(char const *);
void id3_frame_delete(struct id3_frame *);
void id3_frame_addref(struct id3_frame *);
void id3_frame_delref(struct id3_frame *);
struct id3_frame *id3_frame_parse(id3_byte_t const **, id3_length_t, unsigned int);
id3_length_t id3_frame_render(struct id3_frame const *, id3_byte_t **, int);
int mad_layer_I(struct mad_stream *, struct mad_frame *);
int mad_layer_II(struct mad_stream *, struct mad_frame *);
static mad_fixed_t const sf_table[63] = { ((mad_fixed_t) (0x20000000L)), ((mad_fixed_t) (0x1965fea5L)), ((mad_fixed_t) (0x1428a2faL)), ((mad_fixed_t) (0x10000000L)), ((mad_fixed_t) (0x0cb2ff53L)), ((mad_fixed_t) (0x0a14517dL)), ((mad_fixed_t) (0x08000000L)), ((mad_fixed_t) (0x06597fa9L)), ((mad_fixed_t) (0x050a28beL)), ((mad_fixed_t) (0x04000000L)), ((mad_fixed_t) (0x032cbfd5L)), ((mad_fixed_t) (0x0285145fL)), ((mad_fixed_t) (0x02000000L)), ((mad_fixed_t) (0x01965feaL)), ((mad_fixed_t) (0x01428a30L)), ((mad_fixed_t) (0x01000000L)), ((mad_fixed_t) (0x00cb2ff5L)), ((mad_fixed_t) (0x00a14518L)), ((mad_fixed_t) (0x00800000L)), ((mad_fixed_t) (0x006597fbL)), ((mad_fixed_t) (0x0050a28cL)), ((mad_fixed_t) (0x00400000L)), ((mad_fixed_t) (0x0032cbfdL)), ((mad_fixed_t) (0x00285146L)), ((mad_fixed_t) (0x00200000L)), ((mad_fixed_t) (0x001965ffL)), ((mad_fixed_t) (0x001428a3L)), ((mad_fixed_t) (0x00100000L)), ((mad_fixed_t) (0x000cb2ffL)), ((mad_fixed_t) (0x000a1451L)), ((mad_fixed_t) (0x00080000L)), ((mad_fixed_t) (0x00065980L)), ((mad_fixed_t) (0x00050a29L)), ((mad_fixed_t) (0x00040000L)), ((mad_fixed_t) (0x00032cc0L)), ((mad_fixed_t) (0x00028514L)), ((mad_fixed_t) (0x00020000L)), ((mad_fixed_t) (0x00019660L)), ((mad_fixed_t) (0x0001428aL)), ((mad_fixed_t) (0x00010000L)), ((mad_fixed_t) (0x0000cb30L)), ((mad_fixed_t) (0x0000a145L)), ((mad_fixed_t) (0x00008000L)), ((mad_fixed_t) (0x00006598L)), ((mad_fixed_t) (0x000050a3L)), ((mad_fixed_t) (0x00004000L)), ((mad_fixed_t) (0x000032ccL)), ((mad_fixed_t) (0x00002851L)), ((mad_fixed_t) (0x00002000L)), ((mad_fixed_t) (0x00001966L)), ((mad_fixed_t) (0x00001429L)), ((mad_fixed_t) (0x00001000L)), ((mad_fixed_t) (0x00000cb3L)), ((mad_fixed_t) (0x00000a14L)), ((mad_fixed_t) (0x00000800L)), ((mad_fixed_t) (0x00000659L)), ((mad_fixed_t) (0x0000050aL)), ((mad_fixed_t) (0x00000400L)), ((mad_fixed_t) (0x0000032dL)), ((mad_fixed_t) (0x00000285L)), ((mad_fixed_t) (0x00000200L)), ((mad_fixed_t) (0x00000196L)), ((mad_fixed_t) (0x00000143L)) };
static mad_fixed_t const linear_table[14] = { ((mad_fixed_t) (0x15555555L)), ((mad_fixed_t) (0x12492492L)), ((mad_fixed_t) (0x11111111L)), ((mad_fixed_t) (0x10842108L)), ((mad_fixed_t) (0x10410410L)), ((mad_fixed_t) (0x10204081L)), ((mad_fixed_t) (0x10101010L)), ((mad_fixed_t) (0x10080402L)), ((mad_fixed_t) (0x10040100L)), ((mad_fixed_t) (0x10020040L)), ((mad_fixed_t) (0x10010010L)), ((mad_fixed_t) (0x10008004L)), ((mad_fixed_t) (0x10004001L)), ((mad_fixed_t) (0x10002000L)) };

static mad_fixed_t I_sample(struct mad_bitptr *ptr, unsigned int nb)
{
    mad_fixed_t sample;
    sample = mad_bit_read(ptr, nb);
    sample ^= 1 << (nb - 1);
    sample |= -(sample & (1 << (nb - 1)));
    sample <<= 28 - (nb - 1);
    sample += ((mad_fixed_t) (0x10000000L)) >> (nb - 1);
    return ((((sample) + (1L << 11)) >> 12) * (((linear_table[nb - 2]) + (1L << 15)) >> 16));
}
//complexity is O(n) inferred by loopus
int mad_layer_I(struct mad_stream *stream, struct mad_frame *frame)
{
    struct mad_header *header = &frame->header;
    unsigned int nch, bound, ch, s, sb, nb;
    unsigned char allocation[2][32], scalefactor[2][32];
    nch = ((header)->mode ? 2 : 1);
    bound = 32;
    if (header->mode == MAD_MODE_JOINT_STEREO) {
	header->flags |= MAD_FLAG_I_STEREO;
	bound = 4 + header->mode_extension * 4;
    }
    if (header->flags & MAD_FLAG_PROTECTION) {
	header->crc_check = mad_bit_crc(stream->ptr, 4 * (bound * nch + (32 - bound)), header->crc_check);
	if (header->crc_check != header->crc_target && !(frame->options & MAD_OPTION_IGNORECRC)) {
	    stream->error = MAD_ERROR_BADCRC;
	    return -1;
	}
    }
    for (sb = 0; sb < bound; ++sb) {
	for (ch = 0; ch < nch; ++ch) {
	    nb = mad_bit_read(&stream->ptr, 4);
	    if (nb == 15) {
		stream->error = MAD_ERROR_BADBITALLOC;
		return -1;
	    }
	    allocation[ch][sb] = nb ? nb + 1 : 0;
	}
    }
    for (sb = bound; sb < 32; ++sb) {
	nb = mad_bit_read(&stream->ptr, 4);
	if (nb == 15) {
	    stream->error = MAD_ERROR_BADBITALLOC;
	    return -1;
	}
	allocation[0][sb] = allocation[1][sb] = nb ? nb + 1 : 0;
    }
    for (sb = 0; sb < 32; ++sb) {
	for (ch = 0; ch < nch; ++ch) {
	    if (allocation[ch][sb]) {
		scalefactor[ch][sb] = mad_bit_read(&stream->ptr, 6);
		if (scalefactor[ch][sb] == 63) {
		    stream->error = MAD_ERROR_BADSCALEFACTOR;
		    return -1;
		}
	    }
	}
    }
    for (s = 0; s < 12; ++s) {
	for (sb = 0; sb < bound; ++sb) {
	    for (ch = 0; ch < nch; ++ch) {
		nb = allocation[ch][sb];
		frame->sbsample[ch][s][sb] = nb ? ((((I_sample(&stream->ptr, nb)) + (1L << 11)) >> 12) * (((sf_table[scalefactor[ch][sb]]) + (1L << 15)) >> 16)) : 0;
	    }
	}
	for (sb = bound; sb < 32; ++sb) {
	    if ((nb = allocation[0][sb])) {
		mad_fixed_t sample;
		sample = I_sample(&stream->ptr, nb);
		for (ch = 0; ch < nch; ++ch) {
		    frame->sbsample[ch][s][sb] = ((((sample) + (1L << 11)) >> 12) * (((sf_table[scalefactor[ch][sb]]) + (1L << 15)) >> 16));
		}
	    } else {
		for (ch = 0; ch < nch; ++ch)
		    frame->sbsample[ch][s][sb] = 0;
	    }
	}
    }
    return 0;
}

static struct {
    unsigned int sblimit;
    unsigned char const offsets[30];
} const sbquant_table[5] = { {27, {7, 7, 7, 6, 6, 6, 6, 6, 6, 6, 6, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0}}, {30, {7, 7, 7, 6, 6, 6, 6, 6, 6, 6, 6, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0}}, {8, {5, 5, 2, 2, 2, 2, 2, 2}}, {12, {5, 5, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2}}, {30, {4, 4, 4, 4, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}} };

static struct {
    unsigned short nbal;
    unsigned short offset;
} const bitalloc_table[8] = { {2, 0}, {2, 3}, {3, 3}, {3, 1}, {4, 2}, {4, 3}, {4, 4}, {4, 5} };
static unsigned char const offset_table[6][15] = { {0, 1, 16}, {0, 1, 2, 3, 4, 5, 16}, {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}, {0, 1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15}, {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 16}, {0, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16} };

static struct quantclass {
    unsigned short nlevels;
    unsigned char group;
    unsigned char bits;
    mad_fixed_t C;
    mad_fixed_t D;
} const qc_table[17] = { {3, 2, 5, ((mad_fixed_t) (0x15555555L)), ((mad_fixed_t) (0x08000000L))}, {5, 3, 7, ((mad_fixed_t) (0x1999999aL)), ((mad_fixed_t) (0x08000000L))}, {7, 0, 3, ((mad_fixed_t) (0x12492492L)), ((mad_fixed_t) (0x04000000L))}, {9, 4, 10, ((mad_fixed_t) (0x1c71c71cL)), ((mad_fixed_t) (0x08000000L))}, {15, 0, 4, ((mad_fixed_t) (0x11111111L)), ((mad_fixed_t) (0x02000000L))}, {31, 0, 5, ((mad_fixed_t) (0x10842108L)), ((mad_fixed_t) (0x01000000L))}, {63, 0, 6, ((mad_fixed_t) (0x10410410L)), ((mad_fixed_t) (0x00800000L))}, {127, 0, 7, ((mad_fixed_t) (0x10204081L)), ((mad_fixed_t) (0x00400000L))}, {255, 0, 8, ((mad_fixed_t) (0x10101010L)), ((mad_fixed_t) (0x00200000L))}, {511, 0, 9, ((mad_fixed_t) (0x10080402L)), ((mad_fixed_t) (0x00100000L))}, {1023, 0, 10, ((mad_fixed_t) (0x10040100L)), ((mad_fixed_t) (0x00080000L))}, {2047, 0, 11, ((mad_fixed_t) (0x10020040L)), ((mad_fixed_t) (0x00040000L))}, {4095, 0, 12, ((mad_fixed_t) (0x10010010L)), ((mad_fixed_t) (0x00020000L))}, {8191, 0, 13, ((mad_fixed_t) (0x10008004L)), ((mad_fixed_t) (0x00010000L))}, {16383, 0, 14, ((mad_fixed_t) (0x10004001L)), ((mad_fixed_t) (0x00008000L))}, {32767, 0, 15, ((mad_fixed_t) (0x10002000L)), ((mad_fixed_t) (0x00004000L))}, {65535, 0, 16, ((mad_fixed_t) (0x10001000L)), ((mad_fixed_t) (0x00002000L))} };

static void II_samples(struct mad_bitptr *ptr, struct quantclass const *quantclass, mad_fixed_t output[3])
{
    unsigned int nb, s, sample[3];
    if ((nb = quantclass->group)) {
	unsigned int c, nlevels;
	c = mad_bit_read(ptr, quantclass->bits);
	nlevels = quantclass->nlevels;
	for (s = 0; s < 3; ++s) {
	    sample[s] = c % nlevels;
	    c /= nlevels;
	}
    } else {
	nb = quantclass->bits;
	for (s = 0; s < 3; ++s)
	    sample[s] = mad_bit_read(ptr, nb);
    }
    for (s = 0; s < 3; ++s) {
	mad_fixed_t requantized;
	requantized = sample[s] ^ (1 << (nb - 1));
	requantized |= -(requantized & (1 << (nb - 1)));
	requantized <<= 28 - (nb - 1);
	output[s] = ((((requantized + quantclass->D) + (1L << 11)) >> 12) * (((quantclass->C) + (1L << 15)) >> 16));
    }
}

int mad_layer_II(struct mad_stream *stream, struct mad_frame *frame)
{
    struct mad_header *header = &frame->header;
    struct mad_bitptr start;
    unsigned int index, sblimit, nbal, nch, bound, gr, ch, s, sb;
    unsigned char const *offsets;
    unsigned char allocation[2][32], scfsi[2][32], scalefactor[2][32][3];
    mad_fixed_t samples[3];
    nch = ((header)->mode ? 2 : 1);
    if (header->flags & MAD_FLAG_LSF_EXT)
	index = 4;
    else {
	switch (nch == 2 ? header->bitrate / 2 : header->bitrate) {
	case 32000:
	case 48000:
	    index = (header->samplerate == 32000) ? 3 : 2;
	    break;
	case 56000:
	case 64000:
	case 80000:
	    index = 0;
	    break;
	default:
	    index = (header->samplerate == 48000) ? 0 : 1;
	}
    }
    sblimit = sbquant_table[index].sblimit;
    offsets = sbquant_table[index].offsets;
    bound = 32;
    if (header->mode == MAD_MODE_JOINT_STEREO) {
	header->flags |= MAD_FLAG_I_STEREO;
	bound = 4 + header->mode_extension * 4;
    }
    if (bound > sblimit)
	bound = sblimit;
    start = stream->ptr;
    for (sb = 0; sb < bound; ++sb) {
	nbal = bitalloc_table[offsets[sb]].nbal;
	for (ch = 0; ch < nch; ++ch)
	    allocation[ch][sb] = mad_bit_read(&stream->ptr, nbal);
    }
    for (sb = bound; sb < sblimit; ++sb) {
	nbal = bitalloc_table[offsets[sb]].nbal;
	allocation[0][sb] = allocation[1][sb] = mad_bit_read(&stream->ptr, nbal);
    }
    for (sb = 0; sb < sblimit; ++sb) {
	for (ch = 0; ch < nch; ++ch) {
	    if (allocation[ch][sb])
		scfsi[ch][sb] = mad_bit_read(&stream->ptr, 2);
	}
    }
    if (header->flags & MAD_FLAG_PROTECTION) {
	header->crc_check = mad_bit_crc(start, mad_bit_length(&start, &stream->ptr), header->crc_check);
	if (header->crc_check != header->crc_target && !(frame->options & MAD_OPTION_IGNORECRC)) {
	    stream->error = MAD_ERROR_BADCRC;
	    return -1;
	}
    }
    for (sb = 0; sb < sblimit; ++sb) {
	for (ch = 0; ch < nch; ++ch) {
	    if (allocation[ch][sb]) {
		scalefactor[ch][sb][0] = mad_bit_read(&stream->ptr, 6);
		switch (scfsi[ch][sb]) {
		case 2:
		    scalefactor[ch][sb][2] = scalefactor[ch][sb][1] = scalefactor[ch][sb][0];
		    break;
		case 0:
		    scalefactor[ch][sb][1] = mad_bit_read(&stream->ptr, 6);
		case 1:
		case 3:
		    scalefactor[ch][sb][2] = mad_bit_read(&stream->ptr, 6);
		}
		if (scfsi[ch][sb] & 1)
		    scalefactor[ch][sb][1] = scalefactor[ch][sb][scfsi[ch][sb] - 1];
		if (scalefactor[ch][sb][0] == 63 || scalefactor[ch][sb][1] == 63 || scalefactor[ch][sb][2] == 63) {
		    stream->error = MAD_ERROR_BADSCALEFACTOR;
		    return -1;
		}
	    }
	}
    }
    for (gr = 0; gr < 12; ++gr) {
	for (sb = 0; sb < bound; ++sb) {
	    for (ch = 0; ch < nch; ++ch) {
		if ((index = allocation[ch][sb])) {
		    index = offset_table[bitalloc_table[offsets[sb]].offset][index - 1];
		    II_samples(&stream->ptr, &qc_table[index], samples);
		    for (s = 0; s < 3; ++s) {
			frame->sbsample[ch][3 * gr + s][sb] = ((((samples[s]) + (1L << 11)) >> 12) * (((sf_table[scalefactor[ch][sb][gr / 4]]) + (1L << 15)) >> 16));
		    }
		} else {
		    for (s = 0; s < 3; ++s)
			frame->sbsample[ch][3 * gr + s][sb] = 0;
		}
	    }
	}
	for (sb = bound; sb < sblimit; ++sb) {
	    if ((index = allocation[0][sb])) {
		index = offset_table[bitalloc_table[offsets[sb]].offset][index - 1];
		II_samples(&stream->ptr, &qc_table[index], samples);
		for (ch = 0; ch < nch; ++ch) {
		    for (s = 0; s < 3; ++s) {
			frame->sbsample[ch][3 * gr + s][sb] = ((((samples[s]) + (1L << 11)) >> 12) * (((sf_table[scalefactor[ch][sb][gr / 4]]) + (1L << 15)) >> 16));
		    }
		}
	    } else {
		for (ch = 0; ch < nch; ++ch) {
		    for (s = 0; s < 3; ++s)
			frame->sbsample[ch][3 * gr + s][sb] = 0;
		}
	    }
	}
	for (ch = 0; ch < nch; ++ch) {
	    for (s = 0; s < 3; ++s) {
		for (sb = sblimit; sb < 32; ++sb)
		    frame->sbsample[ch][3 * gr + s][sb] = 0;
	    }
	}
    }
    return 0;
}
