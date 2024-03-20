typedef __typeof__(((int *) 0) - ((int *) 0)) ptrdiff_t;
typedef __typeof__(sizeof(int)) size_t;
typedef int wchar_t;
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
extern char const mad_version[];
extern char const mad_copyright[];
extern char const mad_author[];
extern char const mad_build[];
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
struct mad_pcm {
    unsigned int samplerate;
    unsigned short channels;
    unsigned short length;
    mad_fixed_t samples[2][1152];
};
struct mad_synth {
    mad_fixed_t filter[2][2][2][16][8];
    unsigned int phase;
    struct mad_pcm pcm;
};
enum { MAD_PCM_CHANNEL_SINGLE = 0 };
enum { MAD_PCM_CHANNEL_DUAL_1 = 0, MAD_PCM_CHANNEL_DUAL_2 = 1 };
enum { MAD_PCM_CHANNEL_STEREO_LEFT = 0, MAD_PCM_CHANNEL_STEREO_RIGHT = 1 };
void mad_synth_init(struct mad_synth *);
void mad_synth_mute(struct mad_synth *);
void mad_synth_frame(struct mad_synth *, struct mad_frame const *);
enum mad_decoder_mode { MAD_DECODER_MODE_SYNC = 0, MAD_DECODER_MODE_ASYNC };
enum mad_flow { MAD_FLOW_CONTINUE = 0x0000, MAD_FLOW_STOP = 0x0010, MAD_FLOW_BREAK = 0x0011, MAD_FLOW_IGNORE = 0x0020 };
struct mad_decoder {
    enum mad_decoder_mode mode;
    int options;
    struct {
	long pid;
	int in;
	int out;
    } async;
    struct {
	struct mad_stream stream;
	struct mad_frame frame;
	struct mad_synth synth;
    } *sync;
    void *cb_data;
    enum mad_flow (*input_func) (void *, struct mad_stream *);
    enum mad_flow (*header_func) (void *, struct mad_header const *);
    enum mad_flow (*filter_func) (void *, struct mad_stream const *, struct mad_frame *);
    enum mad_flow (*output_func) (void *, struct mad_header const *, struct mad_pcm *);
    enum mad_flow (*error_func) (void *, struct mad_stream *, struct mad_frame *);
    enum mad_flow (*message_func) (void *, void *, unsigned int *);
};
void mad_decoder_init(struct mad_decoder *, void *, enum mad_flow (*)(void *, struct mad_stream *), enum mad_flow (*)(void *, struct mad_header const *), enum mad_flow (*)(void *, struct mad_stream const *, struct mad_frame *), enum mad_flow (*)(void *, struct mad_header const *, struct mad_pcm *), enum mad_flow (*)(void *, struct mad_stream *, struct mad_frame *), enum mad_flow (*)(void *, void *, unsigned int *));
int mad_decoder_finish(struct mad_decoder *);
int mad_decoder_run(struct mad_decoder *, enum mad_decoder_mode);
int mad_decoder_message(struct mad_decoder *, void *, unsigned int *);
enum audio_command { AUDIO_COMMAND_INIT, AUDIO_COMMAND_CONFIG, AUDIO_COMMAND_PLAY, AUDIO_COMMAND_STOP, AUDIO_COMMAND_FINISH };
enum audio_mode { AUDIO_MODE_ROUND, AUDIO_MODE_DITHER };
struct audio_stats {
    unsigned long clipped_samples;
    mad_fixed_t peak_clipping;
    mad_fixed_t peak_sample;
};
union audio_control {
    enum audio_command command;
    struct audio_init {
	enum audio_command command;
	char const *path;
    } init;
    struct audio_config {
	enum audio_command command;
	unsigned int channels;
	unsigned int speed;
	unsigned int precision;
    } config;
    struct audio_play {
	enum audio_command command;
	unsigned int nsamples;
	mad_fixed_t const *samples[2];
	enum audio_mode mode;
	struct audio_stats *stats;
    } play;
    struct audio_stop {
	enum audio_command command;
	int flush;
    } stop;
    struct audio_finish {
	enum audio_command command;
    } finish;
};
struct audio_dither {
    mad_fixed_t error[3];
    mad_fixed_t random;
};
extern char const *audio_error;
typedef int audio_ctlfunc_t(union audio_control *);
audio_ctlfunc_t *audio_output(char const **);
audio_ctlfunc_t audio_oss;
audio_ctlfunc_t audio_esd;
audio_ctlfunc_t audio_empeg;
audio_ctlfunc_t audio_sun;
audio_ctlfunc_t audio_win32;
audio_ctlfunc_t audio_raw;
audio_ctlfunc_t audio_cdda;
audio_ctlfunc_t audio_aiff;
audio_ctlfunc_t audio_wave;
audio_ctlfunc_t audio_snd;
audio_ctlfunc_t audio_hex;
audio_ctlfunc_t audio_null;
void audio_control_init(union audio_control *, enum audio_command);
signed long audio_linear_round(unsigned int, mad_fixed_t, struct audio_stats *);
signed long audio_linear_dither(unsigned int, mad_fixed_t, struct audio_dither *, struct audio_stats *);
unsigned char audio_mulaw_round(mad_fixed_t, struct audio_stats *);
unsigned char audio_mulaw_dither(mad_fixed_t, struct audio_dither *, struct audio_stats *);
typedef unsigned int audio_pcmfunc_t(unsigned char *, unsigned int, mad_fixed_t const *, mad_fixed_t const *, enum audio_mode, struct audio_stats *);
audio_pcmfunc_t audio_pcm_u8;
audio_pcmfunc_t audio_pcm_s8;
audio_pcmfunc_t audio_pcm_s16le;
audio_pcmfunc_t audio_pcm_s16be;
audio_pcmfunc_t audio_pcm_s24le;
audio_pcmfunc_t audio_pcm_s24be;
audio_pcmfunc_t audio_pcm_s32le;
audio_pcmfunc_t audio_pcm_s32be;
audio_pcmfunc_t audio_pcm_mulaw;
char const *audio_error;
static struct audio_dither left_dither, right_dither;
audio_ctlfunc_t *audio_output(char const **path)
{
    char const *ext;
    int i;
    struct map {
	char const *name;
	audio_ctlfunc_t *module;
    };
    struct map const prefixes[] = { {"cdda", audio_cdda}, {"aiff", audio_aiff}, {"wave", audio_wave}, {"wav", audio_wave}, {"snd", audio_snd}, {"au", audio_snd}, {"raw", audio_raw}, {"pcm", audio_raw}, {"null", audio_null}, {"nul", audio_null} };
    struct map const extensions[] = { {"cdr", audio_cdda}, {"cda", audio_cdda}, {"cdda", audio_cdda}, {"aif", audio_aiff}, {"aiff", audio_aiff}, {"wav", audio_wave}, {"snd", audio_snd}, {"au", audio_snd}, {"raw", audio_raw}, {"pcm", audio_raw}, {"out", audio_raw}, {"bin", audio_raw} };
    if (path == 0)
	return audio_oss;
    ext = strchr(*path, ':');
    if (ext) {
	char const *type;
	type = *path;
	*path = ext + 1;
	for (i = 0; i < sizeof(prefixes) / sizeof(prefixes[0]); ++i) {
	    if (strncasecmp(type, prefixes[i].name, ext - type) == 0 && strlen(prefixes[i].name) == ext - type)
		return prefixes[i].module;
	}
	*path = type;
	return 0;
    }
    if (strcmp(*path, "/dev/null") == 0)
	return audio_null;
    if (strncmp(*path, "/dev/", 5) == 0)
	return audio_oss;
    ext = strrchr(*path, '.');
    if (ext) {
	++ext;
	for (i = 0; i < sizeof(extensions) / sizeof(extensions[0]); ++i) {
	    if (strcasecmp(ext, extensions[i].name) == 0)
		return extensions[i].module;
	}
    }
    return 0;
}

void audio_control_init(union audio_control *control, enum audio_command command)
{
    switch (control->command = command) {
    case AUDIO_COMMAND_INIT:
	control->init.path = 0;
	break;
    case AUDIO_COMMAND_CONFIG:
	control->config.channels = 0;
	control->config.speed = 0;
	control->config.precision = 0;
	break;
    case AUDIO_COMMAND_PLAY:
	control->play.nsamples = 0;
	control->play.samples[0] = 0;
	control->play.samples[1] = 0;
	control->play.mode = AUDIO_MODE_DITHER;
	control->play.stats = 0;
	break;
    case AUDIO_COMMAND_STOP:
	control->stop.flush = 0;
	break;
    case AUDIO_COMMAND_FINISH:
	break;
    }
}

static inline void clip(mad_fixed_t * sample, struct audio_stats *stats)
{
    enum { MIN = -((mad_fixed_t) (0x10000000L)), MAX = ((mad_fixed_t) (0x10000000L)) - 1 };
    if (*sample >= stats->peak_sample) {
	if (*sample > MAX) {
	    ++stats->clipped_samples;
	    if (*sample - MAX > stats->peak_clipping)
		stats->peak_clipping = *sample - MAX;
	    *sample = MAX;
	}
	stats->peak_sample = *sample;
    } else if (*sample < -stats->peak_sample) {
	if (*sample < MIN) {
	    ++stats->clipped_samples;
	    if (MIN - *sample > stats->peak_clipping)
		stats->peak_clipping = MIN - *sample;
	    *sample = MIN;
	}
	stats->peak_sample = -*sample;
    }
}

inline signed long audio_linear_round(unsigned int bits, mad_fixed_t sample, struct audio_stats *stats)
{
    sample += (1L << (28 - bits));
    clip(&sample, stats);
    return sample >> (28 + 1 - bits);
}

static inline unsigned long prng(unsigned long state)
{
    return (state * 0x0019660dL + 0x3c6ef35fL) & 0xffffffffL;
}

inline signed long audio_linear_dither(unsigned int bits, mad_fixed_t sample, struct audio_dither *dither, struct audio_stats *stats)
{
    unsigned int scalebits;
    mad_fixed_t output, mask, random;
    enum { MIN = -((mad_fixed_t) (0x10000000L)), MAX = ((mad_fixed_t) (0x10000000L)) - 1 };
    sample += dither->error[0] - dither->error[1] + dither->error[2];
    dither->error[2] = dither->error[1];
    dither->error[1] = dither->error[0] / 2;
    output = sample + (1L << (28 + 1 - bits - 1));
    scalebits = 28 + 1 - bits;
    mask = (1L << scalebits) - 1;
    random = prng(dither->random);
    output += (random & mask) - (dither->random & mask);
    dither->random = random;
    if (output >= stats->peak_sample) {
	if (output > MAX) {
	    ++stats->clipped_samples;
	    if (output - MAX > stats->peak_clipping)
		stats->peak_clipping = output - MAX;
	    output = MAX;
	    if (sample > MAX)
		sample = MAX;
	}
	stats->peak_sample = output;
    } else if (output < -stats->peak_sample) {
	if (output < MIN) {
	    ++stats->clipped_samples;
	    if (MIN - output > stats->peak_clipping)
		stats->peak_clipping = MIN - output;
	    output = MIN;
	    if (sample < MIN)
		sample = MIN;
	}
	stats->peak_sample = -output;
    }
    output &= ~mask;
    dither->error[0] = sample - output;
    return output >> scalebits;
}
//complexity is O(n) inferred by loopus
unsigned int audio_pcm_u8(unsigned char *data, unsigned int nsamples, mad_fixed_t const *left, mad_fixed_t const *right, enum audio_mode mode, struct audio_stats *stats)
{
    unsigned int len;
    len = nsamples;
    if (right) {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--) {
		data[0] = audio_linear_round(8, *left++, stats) ^ 0x80;
		data[1] = audio_linear_round(8, *right++, stats) ^ 0x80;
		data += 2;
	    }
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--) {
		data[0] = audio_linear_dither(8, *left++, &left_dither, stats) ^ 0x80;
		data[1] = audio_linear_dither(8, *right++, &right_dither, stats) ^ 0x80;
		data += 2;
	    }
	    break;
	default:
	    return 0;
	}
	return nsamples * 2;
    } else {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--)
		*data++ = audio_linear_round(8, *left++, stats) ^ 0x80;
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--)
		*data++ = audio_linear_dither(8, *left++, &left_dither, stats) ^ 0x80;
	    break;
	default:
	    return 0;
	}
	return nsamples;
    }
}
//complexity is O(n) inferred by loopups
unsigned int audio_pcm_s8(unsigned char *data, unsigned int nsamples, mad_fixed_t const *left, mad_fixed_t const *right, enum audio_mode mode, struct audio_stats *stats)
{
    unsigned int len;
    len = nsamples;
    if (right) {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--) {
		data[0] = audio_linear_round(8, *left++, stats);
		data[1] = audio_linear_round(8, *right++, stats);
		data += 2;
	    }
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--) {
		data[0] = audio_linear_dither(8, *left++, &left_dither, stats);
		data[1] = audio_linear_dither(8, *right++, &right_dither, stats);
		data += 2;
	    }
	    break;
	default:
	    return 0;
	}
	return nsamples * 2;
    } else {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--)
		*data++ = audio_linear_round(8, *left++, stats);
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--)
		*data++ = audio_linear_dither(8, *left++, &left_dither, stats);
	    break;
	default:
	    return 0;
	}
	return nsamples;
    }
}
//compexity is O(n) inferred by loopus
unsigned int audio_pcm_s16le(unsigned char *data, unsigned int nsamples, mad_fixed_t const *left, mad_fixed_t const *right, enum audio_mode mode, struct audio_stats *stats)
{
    unsigned int len;
    register signed int sample0, sample1;
    len = nsamples;
    if (right) {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--) {
		sample0 = audio_linear_round(16, *left++, stats);
		sample1 = audio_linear_round(16, *right++, stats);
		data[0] = sample0 >> 0;
		data[1] = sample0 >> 8;
		data[2] = sample1 >> 0;
		data[3] = sample1 >> 8;
		data += 4;
	    }
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--) {
		sample0 = audio_linear_dither(16, *left++, &left_dither, stats);
		sample1 = audio_linear_dither(16, *right++, &right_dither, stats);
		data[0] = sample0 >> 0;
		data[1] = sample0 >> 8;
		data[2] = sample1 >> 0;
		data[3] = sample1 >> 8;
		data += 4;
	    }
	    break;
	default:
	    return 0;
	}
	return nsamples * 2 * 2;
    } else {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--) {
		sample0 = audio_linear_round(16, *left++, stats);
		data[0] = sample0 >> 0;
		data[1] = sample0 >> 8;
		data += 2;
	    }
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--) {
		sample0 = audio_linear_dither(16, *left++, &left_dither, stats);
		data[0] = sample0 >> 0;
		data[1] = sample0 >> 8;
		data += 2;
	    }
	    break;
	default:
	    return 0;
	}
	return nsamples * 2;
    }
}
//complexity is O(n) inferred by loopus
unsigned int audio_pcm_s16be(unsigned char *data, unsigned int nsamples, mad_fixed_t const *left, mad_fixed_t const *right, enum audio_mode mode, struct audio_stats *stats)
{
    unsigned int len;
    register signed int sample0, sample1;
    len = nsamples;
    if (right) {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--) {
		sample0 = audio_linear_round(16, *left++, stats);
		sample1 = audio_linear_round(16, *right++, stats);
		data[0] = sample0 >> 8;
		data[1] = sample0 >> 0;
		data[2] = sample1 >> 8;
		data[3] = sample1 >> 0;
		data += 4;
	    }
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--) {
		sample0 = audio_linear_dither(16, *left++, &left_dither, stats);
		sample1 = audio_linear_dither(16, *right++, &right_dither, stats);
		data[0] = sample0 >> 8;
		data[1] = sample0 >> 0;
		data[2] = sample1 >> 8;
		data[3] = sample1 >> 0;
		data += 4;
	    }
	    break;
	default:
	    return 0;
	}
	return nsamples * 2 * 2;
    } else {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--) {
		sample0 = audio_linear_round(16, *left++, stats);
		data[0] = sample0 >> 8;
		data[1] = sample0 >> 0;
		data += 2;
	    }
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--) {
		sample0 = audio_linear_dither(16, *left++, &left_dither, stats);
		data[0] = sample0 >> 8;
		data[1] = sample0 >> 0;
		data += 2;
	    }
	    break;
	default:
	    return 0;
	}
	return nsamples * 2;
    }
}
//complexity is O(n) inferred by loopus
unsigned int audio_pcm_s24le(unsigned char *data, unsigned int nsamples, mad_fixed_t const *left, mad_fixed_t const *right, enum audio_mode mode, struct audio_stats *stats)
{
    unsigned int len;
    register signed long sample0, sample1;
    len = nsamples;
    if (right) {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--) {
		sample0 = audio_linear_round(24, *left++, stats);
		sample1 = audio_linear_round(24, *right++, stats);
		data[0] = sample0 >> 0;
		data[1] = sample0 >> 8;
		data[2] = sample0 >> 16;
		data[3] = sample1 >> 0;
		data[4] = sample1 >> 8;
		data[5] = sample1 >> 16;
		data += 6;
	    }
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--) {
		sample0 = audio_linear_dither(24, *left++, &left_dither, stats);
		sample1 = audio_linear_dither(24, *right++, &right_dither, stats);
		data[0] = sample0 >> 0;
		data[1] = sample0 >> 8;
		data[2] = sample0 >> 16;
		data[3] = sample1 >> 0;
		data[4] = sample1 >> 8;
		data[5] = sample1 >> 16;
		data += 6;
	    }
	    break;
	default:
	    return 0;
	}
	return nsamples * 3 * 2;
    } else {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--) {
		sample0 = audio_linear_round(24, *left++, stats);
		data[0] = sample0 >> 0;
		data[1] = sample0 >> 8;
		data[2] = sample0 >> 16;
		data += 3;
	    }
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--) {
		sample0 = audio_linear_dither(24, *left++, &left_dither, stats);
		data[0] = sample0 >> 0;
		data[1] = sample0 >> 8;
		data[2] = sample0 >> 16;
		data += 3;
	    }
	    break;
	default:
	    return 0;
	}
	return nsamples * 3;
    }
}
//complexity is O(n) inferred by loopus
unsigned int audio_pcm_s24be(unsigned char *data, unsigned int nsamples, mad_fixed_t const *left, mad_fixed_t const *right, enum audio_mode mode, struct audio_stats *stats)
{
    unsigned int len;
    register signed long sample0, sample1;
    len = nsamples;
    if (right) {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--) {
		sample0 = audio_linear_round(24, *left++, stats);
		sample1 = audio_linear_round(24, *right++, stats);
		data[0] = sample0 >> 16;
		data[1] = sample0 >> 8;
		data[2] = sample0 >> 0;
		data[3] = sample1 >> 16;
		data[4] = sample1 >> 8;
		data[5] = sample1 >> 0;
		data += 6;
	    }
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--) {
		sample0 = audio_linear_dither(24, *left++, &left_dither, stats);
		sample1 = audio_linear_dither(24, *right++, &right_dither, stats);
		data[0] = sample0 >> 16;
		data[1] = sample0 >> 8;
		data[2] = sample0 >> 0;
		data[3] = sample1 >> 16;
		data[4] = sample1 >> 8;
		data[5] = sample1 >> 0;
		data += 6;
	    }
	    break;
	default:
	    return 0;
	}
	return nsamples * 3 * 2;
    } else {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--) {
		sample0 = audio_linear_round(24, *left++, stats);
		data[0] = sample0 >> 16;
		data[1] = sample0 >> 8;
		data[2] = sample0 >> 0;
		data += 3;
	    }
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--) {
		sample1 = audio_linear_dither(24, *left++, &left_dither, stats);
		data[0] = sample1 >> 16;
		data[1] = sample1 >> 8;
		data[2] = sample1 >> 0;
		data += 3;
	    }
	    break;
	default:
	    return 0;
	}
	return nsamples * 3;
    }
}
//complexity is O(n) inferred by loopus
unsigned int audio_pcm_s32le(unsigned char *data, unsigned int nsamples, mad_fixed_t const *left, mad_fixed_t const *right, enum audio_mode mode, struct audio_stats *stats)
{
    unsigned int len;
    register signed long sample0, sample1;
    len = nsamples;
    if (right) {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--) {
		sample0 = audio_linear_round(24, *left++, stats);
		sample1 = audio_linear_round(24, *right++, stats);
		data[0] = 0;
		data[1] = sample0 >> 0;
		data[2] = sample0 >> 8;
		data[3] = sample0 >> 16;
		data[4] = 0;
		data[5] = sample1 >> 0;
		data[6] = sample1 >> 8;
		data[7] = sample1 >> 16;
		data += 8;
	    }
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--) {
		sample0 = audio_linear_dither(24, *left++, &left_dither, stats);
		sample1 = audio_linear_dither(24, *right++, &right_dither, stats);
		data[0] = 0;
		data[1] = sample0 >> 0;
		data[2] = sample0 >> 8;
		data[3] = sample0 >> 16;
		data[4] = 0;
		data[5] = sample1 >> 0;
		data[6] = sample1 >> 8;
		data[7] = sample1 >> 16;
		data += 8;
	    }
	    break;
	default:
	    return 0;
	}
	return nsamples * 4 * 2;
    } else {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--) {
		sample0 = audio_linear_round(24, *left++, stats);
		data[0] = 0;
		data[1] = sample0 >> 0;
		data[2] = sample0 >> 8;
		data[3] = sample0 >> 16;
		data += 4;
	    }
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--) {
		sample0 = audio_linear_dither(24, *left++, &left_dither, stats);
		data[0] = 0;
		data[1] = sample0 >> 0;
		data[2] = sample0 >> 8;
		data[3] = sample0 >> 16;
		data += 4;
	    }
	    break;
	default:
	    return 0;
	}
	return nsamples * 4;
    }
}
//complexity is O(n) inferred by loopus
unsigned int audio_pcm_s32be(unsigned char *data, unsigned int nsamples, mad_fixed_t const *left, mad_fixed_t const *right, enum audio_mode mode, struct audio_stats *stats)
{
    unsigned int len;
    register signed long sample0, sample1;
    len = nsamples;
    if (right) {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--) {
		sample0 = audio_linear_round(24, *left++, stats);
		sample1 = audio_linear_round(24, *right++, stats);
		data[0] = sample0 >> 16;
		data[1] = sample0 >> 8;
		data[2] = sample0 >> 0;
		data[3] = 0;
		data[4] = sample1 >> 16;
		data[5] = sample1 >> 8;
		data[6] = sample1 >> 0;
		data[7] = 0;
		data += 8;
	    }
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--) {
		sample0 = audio_linear_dither(24, *left++, &left_dither, stats);
		sample1 = audio_linear_dither(24, *right++, &right_dither, stats);
		data[0] = sample0 >> 16;
		data[1] = sample0 >> 8;
		data[2] = sample0 >> 0;
		data[3] = 0;
		data[4] = sample1 >> 16;
		data[5] = sample1 >> 8;
		data[6] = sample1 >> 0;
		data[7] = 0;
		data += 8;
	    }
	    break;
	default:
	    return 0;
	}
	return nsamples * 4 * 2;
    } else {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--) {
		sample0 = audio_linear_round(24, *left++, stats);
		data[0] = sample0 >> 16;
		data[1] = sample0 >> 8;
		data[2] = sample0 >> 0;
		data[3] = 0;
		data += 4;
	    }
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--) {
		sample0 = audio_linear_dither(24, *left++, &left_dither, stats);
		data[0] = sample0 >> 16;
		data[1] = sample0 >> 8;
		data[2] = sample0 >> 0;
		data[3] = 0;
		data += 4;
	    }
	    break;
	default:
	    return 0;
	}
	return nsamples * 4;
    }
}

static unsigned char linear2mulaw(mad_fixed_t sample)
{
    unsigned int sign, mulaw;
    enum { BIAS = (mad_fixed_t) ((0x10 << 1) + 1) << (28 - 13) };
    if (sample < 0) {
	sample = BIAS - sample;
	sign = 0x7f;
    } else {
	sample = BIAS + sample;
	sign = 0xff;
    }
    mulaw = 0x7f;
    if (sample < ((mad_fixed_t) (0x10000000L))) {
	unsigned int segment;
	unsigned long mask;
	segment = 7;
	for (mask = 1L << (28 - 1); !(sample & mask); mask >>= 1)
	    --segment;
	mulaw = ((segment << 4) | ((sample >> (28 - 1 - (7 - segment) - 4)) & 0x0f));
    }
    mulaw ^= sign;
    return mulaw;
}

static mad_fixed_t mulaw2linear(unsigned char mulaw)
{
    int sign, segment, mantissa, value;
    enum { BIAS = (0x10 << 1) + 1 };
    mulaw = ~mulaw;
    sign = (mulaw >> 7) & 0x01;
    segment = (mulaw >> 4) & 0x07;
    mantissa = (mulaw >> 0) & 0x0f;
    value = ((0x21 | (mantissa << 1)) << segment) - BIAS;
    if (sign)
	value = -value;
    return (mad_fixed_t) value << (28 - 13);
}

inline unsigned char audio_mulaw_round(mad_fixed_t sample, struct audio_stats *stats)
{
    clip(&sample, stats);
    return linear2mulaw(sample);
}

inline unsigned char audio_mulaw_dither(mad_fixed_t sample, struct audio_dither *dither, struct audio_stats *stats)
{
    unsigned char mulaw;
    sample += dither->error[0];
    clip(&sample, stats);
    mulaw = linear2mulaw(sample);
    dither->error[0] = sample - mulaw2linear(mulaw);
    return mulaw;
}
//complexity is O(n) inferred by loopus
unsigned int audio_pcm_mulaw(unsigned char *data, unsigned int nsamples, mad_fixed_t const *left, mad_fixed_t const *right, enum audio_mode mode, struct audio_stats *stats)
{
    unsigned int len;
    len = nsamples;
    if (right) {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--) {
		data[0] = audio_mulaw_round(*left++, stats);
		data[1] = audio_mulaw_round(*right++, stats);
		data += 2;
	    }
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--) {
		data[0] = audio_mulaw_dither(*left++, &left_dither, stats);
		data[1] = audio_mulaw_dither(*right++, &right_dither, stats);
		data += 2;
	    }
	    break;
	default:
	    return 0;
	}
	return nsamples * 2;
    } else {
	switch (mode) {
	case AUDIO_MODE_ROUND:
	    while (len--)
		*data++ = audio_mulaw_round(*left++, stats);
	    break;
	case AUDIO_MODE_DITHER:
	    while (len--)
		*data++ = audio_mulaw_dither(*left++, &left_dither, stats);
	    break;
	default:
	    return 0;
	}
	return nsamples;
    }
}
