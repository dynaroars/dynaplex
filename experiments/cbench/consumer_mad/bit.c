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
static int init(struct audio_init *init)
{
    return 0;
}

static int config(struct audio_config *config)
{
    return 0;
}
//complexity is O(n) inferred by loopus
static void update_stats(struct audio_stats *stats, unsigned int nsamples, mad_fixed_t const *sample)
{
    enum { MIN = -((mad_fixed_t) (0x10000000L)), MAX = ((mad_fixed_t) (0x10000000L)) - 1 };
    while (nsamples--) {
	if (*sample >= stats->peak_sample) {
	    stats->peak_sample = *sample;
	    if (*sample > MAX && *sample - MAX > stats->peak_clipping)
		stats->peak_clipping = *sample - MAX;
	} else if (*sample < -stats->peak_sample) {
	    stats->peak_sample = -*sample;
	    if (*sample < MIN && MIN - *sample > stats->peak_clipping)
		stats->peak_clipping = MIN - *sample;
	}
	++sample;
    }
}

static int play(struct audio_play *play)
{
    update_stats(play->stats, play->nsamples, play->samples[0]);
    if (play->samples[1])
	update_stats(play->stats, play->nsamples, play->samples[1]);
    return 0;
}

static int stop(struct audio_stop *stop)
{
    return 0;
}

static int finish(struct audio_finish *finish)
{
    return 0;
}

int audio_null(union audio_control *control)
{
    audio_error = 0;
    switch (control->command) {
    case AUDIO_COMMAND_INIT:
	return init(&control->init);
    case AUDIO_COMMAND_CONFIG:
	return config(&control->config);
    case AUDIO_COMMAND_PLAY:
	return play(&control->play);
    case AUDIO_COMMAND_STOP:
	return stop(&control->stop);
    case AUDIO_COMMAND_FINISH:
	return finish(&control->finish);
    }
    return 0;
}
