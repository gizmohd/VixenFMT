// This file contains the property definitions for the Si47xx Parts.
#ifndef _SI47XX_PROPDEFS_H_
#define _SI47XX_PROPDEFS_H_

//==================================================================
// General Properties
//==================================================================

// GPO_IEN
#define GPO_IEN				0x0001
#define GPO_IEN_STCIEN_MASK 0x0001
#define GPO_IEN_ASQIEN_MASK 0x0002
#define GPO_IEN_RDSIEN_MASK 0x0004
#define GPO_IEN_RSQIEN_MASK 0x0008
#define GPO_IEN_ERRIEN_MASK 0x0040
#define GPO_IEN_CTSIEN_MASK 0x0080
#define GPO_IEN_STCREP_MASK 0x0100
#define GPO_IEN_ASQREP_MASK 0x0200
#define GPO_IEN_RDSREP_MASK 0x0400
#define GPO_IEN_RSQREP_MASK 0x0800
#define GPO_IEN_STCIEN_SHFT 0
#define GPO_IEN_ASQIEN_SHFT 1
#define GPO_IEN_RDSIEN_SHFT 2
#define GPO_IEN_RSQIEN_SHFT 3
#define GPO_IEN_ERRIEN_SHFT 6
#define GPO_IEN_CTSIEN_SHFT 7
#define GPO_IEN_STCREP_SHFT 8
#define GPO_IEN_ASQREP_SHFT 9
#define GPO_IEN_RDSREP_SHFT 10
#define GPO_IEN_RSQREP_SHFT 11

// DIGITAL_INPUT_FORMAT
#define DIGITAL_INPUT_FORMAT            0x0101
#define DIGITAL_INPUT_FORMAT_ISIZE_MASK 0x0003
#define DIGITAL_INPUT_FORMAT_IMONO_MASK 0x0004
#define DIGITAL_INPUT_FORMAT_IMODE_MASK 0x0078
#define DIGITAL_INPUT_FORMAT_IFALL_MASK 0x0080
#define DIGITAL_INPUT_FORMAT_ISIZE_SHFT 0
#define DIGITAL_INPUT_FORMAT_IMONO_SHFT 2
#define DIGITAL_INPUT_FORMAT_IMODE_SHFT 3
#define DIGITAL_INPUT_FORMAT_IFALL_SHFT 7

// DIGITAL_INPUT_SAMPLE_RATE
#define DIGITAL_INPUT_SAMPLE_RATE 0x0103

// DIGITAL_OUTPUT_FORMAT
#define DIGITAL_OUTPUT_FORMAT            0x0102
#define DIGITAL_OUTPUT_FORMAT_OSIZE_MASK 0x0003
#define DIGITAL_OUTPUT_FORMAT_OMONO_MASK 0x0004
#define DIGITAL_OUTPUT_FORMAT_OMODE_MASK 0x0078
#define DIGITAL_OUTPUT_FORMAT_OFALL_MASK 0x0080
#define DIGITAL_OUTPUT_FORMAT_OSIZE_SHFT 0
#define DIGITAL_OUTPUT_FORMAT_OMONO_SHFT 2
#define DIGITAL_OUTPUT_FORMAT_OMODE_SHFT 3
#define DIGITAL_OUTPUT_FORMAT_OFALL_SHFT 7

// DIGITAL_OUTPUT_SAMPLE_RATE
#define DIGITAL_OUTPUT_SAMPLE_RATE 0x0104

// REFCLK_FREQ
#define REFCLK_FREQ 0x0201

// REFCLK_PRESCALE
#define REFCLK_PRESCALE      0x0202
#define REFCLK_PRESCALE_MASK 0x0FFF
#define REFCLK_PRESCALE_SHFT 0

//==================================================================
// FM Receive Properties
//==================================================================

// FM_DEEMPHASIS
#define FM_DEEMPHASIS      0x1100
#define FM_DEEMPHASIS_MASK 0x0003
#define FM_DEEMPHASIS_SHFT 0

// FM_BLEND_STEREO_THRESHOLD
#define FM_BLEND_STEREO_THRESHOLD      0x1105
#define FM_BLEND_STEREO_THRESHOLD_MASK 0x007F
#define FM_BLEND_STEREO_THRESHOLD_SHFT 0

// FM_BLEND_MONO_THRESHOLD
#define FM_BLEND_MONO_THRESHOLD      0x1106
#define FM_BLEND_MONO_THRESHOLD_MASK 0x007F
#define FM_BLEND_MONO_THRESHOLD_SHFT 0


// FM_MAX_TUNE_ERROR
#define FM_MAX_TUNE_ERROR      0x1108
#define FM_MAX_TUNE_ERROR_MASK 0x007F
#define FM_MAX_TUNE_ERROR_SHFT 0

// FM_RSQ_INT_SOURCE
#define FM_RSQ_INT_SOURCE               0x1200
#define FM_RSQ_INT_SOURCE_RSSILIEN_MASK 0x0001
#define FM_RSQ_INT_SOURCE_RSSIHIEN_MASK 0x0002
#define FM_RSQ_INT_SOURCE_ASNRLIEN_MASK 0x0004
#define FM_RSQ_INT_SOURCE_ASNRHIEN_MASK 0x0008
#define FM_RSQ_INT_SOURCE_BLENDIEN_MASK 0x0080
#define FM_RSQ_INT_SOURCE_RSSILIEN_SHFT 0
#define FM_RSQ_INT_SOURCE_RSSIHIEN_SHFT 1
#define FM_RSQ_INT_SOURCE_ASNRLIEN_SHFT 2
#define FM_RSQ_INT_SOURCE_ASNRHIEN_SHFT 3
#define FM_RSQ_INT_SOURCE_BLENDIEN_SHFT 7

// FM_RSQ_SNR_HI_THRESHOLD
#define FM_RSQ_SNR_HI_THRESHOLD      0x1201
#define FM_RSQ_SNR_HI_THRESHOLD_MASK 0x007F
#define FM_RSQ_SNR_HI_THRESHOLD_SHFT 0

// FM_RSQ_SNR_LO_THRESHOLD
#define FM_RSQ_SNR_LO_THRESHOLD      0x1202
#define FM_RSQ_SNR_LO_THRESHOLD_MASK 0x007F
#define FM_RSQ_SNR_LO_THRESHOLD_SHFT 0

// FM_RSQ_RSSI_HI_THRESHOLD
#define FM_RSQ_RSSI_HI_THRESHOLD      0x1203
#define FM_RSQ_RSSI_HI_THRESHOLD_MASK 0x007F
#define FM_RSQ_RSSI_HI_THRESHOLD_SHFT 0

// FM_RSQ_RSSI_LO_THRESHOLD
#define FM_RSQ_RSSI_LO_THRESHOLD      0x1204
#define FM_RSQ_RSSI_LO_THRESHOLD_MASK 0x007F
#define FM_RSQ_RSSI_LO_THRESHOLD_SHFT 0

// FM_RSQ_BLEND_THRESHOLD
#define FM_RSQ_BLEND_THRESHOLD            0x1207
#define FM_RSQ_BLEND_THRESHOLD_BLEND_MASK 0x007F
#define FM_RSQ_BLEND_THRESHOLD_PILOT_MASK 0x0080
#define FM_RSQ_BLEND_THRESHOLD_BLEND_SHFT 0
#define FM_RSQ_BLEND_THRESHOLD_PILOT_SHFT 7

// FM_SOFT_MUTE_RATE
#define FM_SOFT_MUTE_RATE      0x1300
#define FM_SOFT_MUTE_RATE_MASK 0x00FF
#define FM_SOFT_MUTE_RATE_SHFT 0

// FM_SOFT_MUTE_MAX_ATTENUATION
#define FM_SOFT_MUTE_MAX_ATTENUATION      0x1302
#define FM_SOFT_MUTE_MAX_ATTENUATION_MASK 0x001F
#define FM_SOFT_MUTE_MAX_ATTENUATION_SHFT 0

// FM_SOFT_MUTE_SNR_THRESHOLD
#define FM_SOFT_MUTE_SNR_THRESHOLD      0x1303
#define FM_SOFT_MUTE_SNR_THRESHOLD_MASK 0x000F
#define FM_SOFT_MUTE_SNR_THRESHOLD_SHFT 0

// FM_SEEK_BAND_BOTTOM
#define FM_SEEK_BAND_BOTTOM 0x1400

// FM_SEEK_BAND_TOP
#define FM_SEEK_BAND_TOP 0x1401

// FM_SEEK_FREQ_SPACING
#define FM_SEEK_FREQ_SPACING      0x1402
#define FM_SEEK_FREQ_SPACING_MASK 0x001F
#define FM_SEEK_FREQ_SPACING_SHFT 0

// FM_SEEK_TUNE_SNR_THRESHOLD
#define FM_SEEK_TUNE_SNR_THRESHOLD      0x1403
#define FM_SEEK_TUNE_SNR_THRESHOLD_MASK 0x007F
#define FM_SEEK_TUNE_SNR_THRESHOLD_SHFT 0

// FM_SEEK_TUNE_RSSI_THRESHOLD
#define FM_SEEK_TUNE_RSSI_THRESHOLD      0x1404
#define FM_SEEK_TUNE_RSSI_THRESHOLD_MASK 0x007F
#define FM_SEEK_TUNE_RSSI_THRESHOLD_SHFT 0

// FM_RDS_INTERRUPT_SOURCE
#define FM_RDS_INTERRUPT_SOURCE                0x1500
#define FM_RDS_INTERRUPT_SOURCE_RECV_MASK      0x0001
#define FM_RDS_INTERRUPT_SOURCE_SYNCLOST_MASK  0x0002
#define FM_RDS_INTERRUPT_SOURCE_SYNCFOUND_MASK 0x0004
#define FM_RDS_INTERRUPT_SOURCE_RECV_SHFT      0
#define FM_RDS_INTERRUPT_SOURCE_SYNCLOST_SHFT  1
#define FM_RDS_INTERRUPT_SOURCE_SYNCFOUND_SHFT 2

// FM_RDS_INTERRUPT_FIFO_COUNT
#define FM_RDS_INTERRUPT_FIFO_COUNT      0x1501
#define FM_RDS_INTERRUPT_FIFO_COUNT_MASK 0x00FF
#define FM_RDS_INTERRUPT_FIFO_COUNT_SHFT 0

// FM_RDS_CONFIG
#define FM_RDS_CONFIG             0x1502
#define FM_RDS_CONFIG_RDSEN_MASK  0x0001
#define FM_RDS_CONFIG_BLETHD_MASK 0x0300
#define FM_RDS_CONFIG_BLETHC_MASK 0x0C00
#define FM_RDS_CONFIG_BLETHB_MASK 0x3000
#define FM_RDS_CONFIG_BLETHA_MASK 0xC000
#define FM_RDS_CONFIG_RDSEN_SHFT  0
#define FM_RDS_CONFIG_BLETHD_SHFT 8
#define FM_RDS_CONFIG_BLETHC_SHFT 10
#define FM_RDS_CONFIG_BLETHB_SHFT 12
#define FM_RDS_CONFIG_BLETHA_SHFT 14

//==================================================================
// FM Transmit Properties
//==================================================================

// TX_COMPONENT_ENABLE
#define TX_COMPONENT_ENABLE            0x2100
#define TX_COMPONENT_ENABLE_PILOT_MASK 0x0001
#define TX_COMPONENT_ENABLE_LMR_MASK   0x0002
#define TX_COMPONENT_ENABLE_RDS_MASK   0x0004
#define TX_COMPONENT_ENABLE_PILOT_SHFT 0
#define TX_COMPONENT_ENABLE_LMR_SHFT   1
#define TX_COMPONENT_ENABLE_RDS_SHFT   2

// TX_AUDIO_DEVIATION
#define TX_AUDIO_DEVIATION 0x2101

// TX_PILOT_DEVIATION
#define TX_PILOT_DEVIATION 0x2102

// TX_RDS_DEVIATION
#define TX_RDS_DEVIATION 0x2103

// TX_LINE_INPUT_LEVEL
#define TX_LINE_INPUT_LEVEL              0x2104
#define TX_LINE_INPUT_LEVEL_LILEVEL_MASK 0x03FF
#define TX_LINE_INPUT_LEVEL_LIATTEN_MASK 0x3000
#define TX_LINE_INPUT_LEVEL_LILEVEL_SHFT 0
#define TX_LINE_INPUT_LEVEL_LIATTEN_SHFT 12

// TX_LINE_INPUT_MUTE
#define TX_LINE_INPUT_MUTE             0x2105
#define TX_LINE_INPUT_MUTE_RIMUTE_MASK 0x0001
#define TX_LINE_INPUT_MUTE_LIMUTE_MASK 0x0002
#define TX_LINE_INPUT_MUTE_RIMUTE_SHFT 0
#define TX_LINE_INPUT_MUTE_LIMUTE_SHFT 1

// TX_PREEMPHASIS
#define TX_PREEMPHASIS     0x2106
#define TX_PREMPHASIS_MASK 0x0003
#define TX_PREMPHASIS_SHFT 0

// TX_PILOT_FREQUENCY
#define TX_PILOT_FREQUENCY 0x2107

// TX_ACOMP_ENABLE
#define TX_ACOMP_ENABLE              0x2200
#define TX_ACOMP_ENABLE_ACEN_MASK    0x0001
#define TX_ACOMP_ENABLE_LIMITEN_MASK 0x0002
#define TX_ACOMP_ENABLE_ACEN_SHFT    0
#define TX_ACOMP_ENABLE_LIMITEN_SHFT 1

// TX_ACOMP_THRESHOLD
#define TX_ACOMP_THRESHOLD 0x2201

// TX_ACOMP_ATTACK_TIME
#define TX_ACOMP_ATTACK_TIME      0x2202
#define TX_ACOMP_ATTACK_TIME_MASK 0x000F
#define TX_ACOMP_ATTACK_TIME_SHFT 0

// TX_ACOMP_RELEASE_TIME
#define TX_ACOMP_RELEASE_TIME      0x2203
#define TX_ACOMP_RELEASE_TIME_MASK 0x0007
#define TX_ACOMP_RELEASE_TIME_SHFT 0

// TX_ACOMP_GAIN
#define TX_ACOMP_GAIN      0x2204
#define TX_ACOMP_GAIN_MASK 0x003F
#define TX_ACOMP_GAIN_SHFT 0

// TX_LIMITER_RELEASE_TIME
#define TX_LIMITER_RELEASE_TIME 0x2205

// TX_ASQ_INT_SELECT
#define TX_ASQ_INT_SELECT                 0x2300
#define TX_ASQ_INT_SELECT_IALLIEN_MASK    0x0001
#define TX_ASQ_INT_SELECT_IALHIEN_MASK    0x0002
#define TX_ASQ_INT_SELECT_OVERMODIEN_MASK 0x0004
#define TX_ASQ_INT_SELECT_IALLIEN_SHFT    0
#define TX_ASQ_INT_SELECT_IALHIEN_SHFT    1
#define TX_ASQ_INT_SELECT_OVERMODIEN_SHFT 2

// TX_ASQ_LEVEL_LOW
#define TX_ASQ_LEVEL_LOW      0x2301
#define TX_ASQ_LEVEL_LOW_MASK 0x00FF
#define TX_ASQ_LEVEL_LOW_SHFT 0

// TX_ASQ_DURATION_LOW
#define TX_ASQ_DURATION_LOW 0x2302

// TX_ASQ_LEVEL_HIGH
#define TX_ASQ_LEVEL_HIGH      0x2303
#define TX_ASQ_LEVEL_HIGH_MASK 0x00FF
#define TX_ASQ_LEVEL_HIGH_SHFT 0

// TX_ASQ_DURATION_LOW
#define TX_ASQ_DURATION_HIGH 0x2304

// TX_RDS_INT_SOURCE
#define TX_RDS_INT_SOURCE               0x2C00
#define TX_RDS_INT_SOURCE_FIFOMT_MASK   0x0001
#define TX_RDS_INT_SOURCE_CBUFWRAP_MASK 0x0002
#define TX_RDS_INT_SOURCE_FIFOXMIT_MASK 0x0004
#define TX_RDS_INT_SOURCE_CBUFXMIT_MASK 0x0008
#define TX_RDS_INT_SOURCE_PSXMIT_MASK   0x0010
#define TX_RDS_INT_SOURCE_FIFOMT_SHFT   0
#define TX_RDS_INT_SOURCE_CBUFWRAP_SHFT 1
#define TX_RDS_INT_SOURCE_FIFOXMIT_SHFT 2
#define TX_RDS_INT_SOURCE_CBUFXMIT_SHFT 3
#define TX_RDS_INT_SOURCE_PSXMIT_SHFT   4

// TX_RDS_PI
#define TX_RDS_PI 0x2C01

// TX_RDS_PS_MIX
#define TX_RDS_PS_MIX      0x2C02
#define TX_RDS_PS_MIX_MASK 0x0007
#define TX_RDS_PS_MIX_SHFT 0

// TX_RDS_PS_MISC
#define TX_RDS_PS_MISC             0x2C03
#define TX_RDS_PS_MISC_RDSMS_MASK  0x0008
#define TX_RDS_PS_MISC_RDSTA_MASK  0x0010
#define TX_RDS_PS_MISC_RDSPTY_MASK 0x03E0
#define TX_RDS_PS_MISC_RDSTP_MASK  0x0400
#define TX_RDS_PS_MISC_FORCEB_MASK 0x0800
#define TX_RDS_PS_MISC_RDSD0_MASK  0x1000
#define TX_RDS_PS_MISC_RDSD1_MASK  0x2000
#define TX_RDS_PS_MISC_RDSD2_MASK  0x4000
#define TX_RDS_PS_MISC_RDSD3_MASK  0x8000
#define TX_RDS_PS_MISC_RDSMS_SHFT  3
#define TX_RDS_PS_MISC_RDSTA_SHFT  4
#define TX_RDS_PS_MISC_RDSPTY_SHFT 5
#define TX_RDS_PS_MISC_RDSTP_SHFT  10
#define TX_RDS_PS_MISC_FORCEB_SHFT 11
#define TX_RDS_PS_MISC_RDSD0_SHFT  12
#define TX_RDS_PS_MISC_RDSD1_SHFT  13
#define TX_RDS_PS_MISC_RDSD2_SHFT  14
#define TX_RDS_PS_MISC_RDSD3_SHFT  15

// TX_RDS_PS_REPEAT_COUNT
#define TX_RDS_PS_REPEAT_COUNT      0x2C04
#define TX_RDS_PS_REPEAT_COUNT_MASK 0x00FF
#define TX_RDS_PS_REPEAT_COUNT_SHFT 0

// TX_RDS_PS_MESSAGE_COUNT
#define TX_RDS_PS_MESSAGE_COUNT      0x2C05
#define TX_RDS_PS_MESSAGE_COUNT_MASK 0x000F
#define TX_RDS_PS_MESSAGE_COUNT_SHFT 0

// TX_RDS_PS_AF
#define TX_RDS_PS_AF 0x2C06

// TX_RDS_FIFO_SIZE
#define TX_RDS_FIFO_SIZE      0x2C07
#define TX_RDS_FIFO_SIZE_MASK 0x00FF
#define TX_RDS_FIFO_SIZE_SHFT 0


//==================================================================
// AM Receive Properties
//==================================================================

// AM_DEEMPHASIS
#define AM_DEEMPHASIS      0x3100
#define AM_DEEMPHASIS_MASK 0x0001
#define AM_DEEMPHASIS_SHFT 0

// AM_CHANNEL_FILTER
#define AM_CHANNEL_FILTER      0x3102
#define AM_CHANNEL_FILTER_MASK 0x0007
#define AM_CHANNEL_FILTER_SHFT 0

// AM_RSQ_INT_SOURCE
#define AM_RSQ_INT_SOURCE               0x3200
#define AM_RSQ_INT_SOURCE_RSSILIEN_MASK 0x0001
#define AM_RSQ_INT_SOURCE_RSSIHIEN_MASK 0x0002
#define AM_RSQ_INT_SOURCE_ASNRLIEN_MASK 0x0004
#define AM_RSQ_INT_SOURCE_ASNRHIEN_MASK 0x0008
#define AM_RSQ_INT_SOURCE_RSSILIEN_SHFT 0
#define AM_RSQ_INT_SOURCE_RSSIHIEN_SHFT 1
#define AM_RSQ_INT_SOURCE_ASNRLIEN_SHFT 2
#define AM_RSQ_INT_SOURCE_ASNRHIEN_SHFT 3

// AM_RSQ_SNR_HI_THRESHOLD
#define AM_RSQ_SNR_HI_THRESHOLD      0x3201
#define AM_RSQ_SNR_HI_THRESHOLD_MASK 0x007F
#define AM_RSQ_SNR_HI_THRESHOLD_SHFT 0

// AM_RSQ_SNR_LO_THRESHOLD
#define AM_RSQ_SNR_LO_THRESHOLD      0x3202
#define AM_RSQ_SNR_LO_THRESHOLD_MASK 0x007F
#define AM_RSQ_SNR_LO_THRESHOLD_SHFT 0

// AM_RSQ_RSSI_HI_THRESHOLD
#define AM_RSQ_RSSI_HI_THRESHOLD      0x3203
#define AM_RSQ_RSSI_HI_THRESHOLD_MASK 0x007F
#define AM_RSQ_RSSI_HI_THRESHOLD_SHFT 0

// AM_RSQ_RSSI_LO_THRESHOLD
#define AM_RSQ_RSSI_LO_THRESHOLD      0x3204
#define AM_RSQ_RSSI_LO_THRESHOLD_MASK 0x007F
#define AM_RSQ_RSSI_LO_THRESHOLD_SHFT 0

// AM_SOFT_MUTE_RATE
#define AM_SOFT_MUTE_RATE 0x3300

// AM_SOFT_MUTE_SLOPE
#define AM_SOFT_MUTE_SLOPE 0x3301
#define AM_SOFT_MUTE_SLOPE_MASK 0x000F
#define AM_SOFT_MUTE_SLOPE_SHFT 0

// AM_SOFT_MUTE_MAX_ATTENUATION
#define AM_SOFT_MUTE_MAX_ATTENUATION 0x3302
#define AM_SOFT_MUTE_MAX_ATTENUATION_MASK 0x003F
#define AM_SOFT_MUTE_MAX_ATTENUATION_SHFT 0

// AM_SOFT_MUTE_SNR_THRESHOLD
#define AM_SOFT_MUTE_SNR_THRESHOLD 0x3303
#define AM_SOFT_MUTE_SNR_THRESHOLD_MASK 0x003F
#define AM_SOFT_MUTE_SNR_THRESHOLD_SHFT 0

// AM_SEEK_BAND_BOTTOM
#define AM_SEEK_BAND_BOTTOM 0x3400

// AM_SEEK_BAND_TOP
#define AM_SEEK_BAND_TOP 0x3401

// AM_SEEK_FREQ_SPACING
#define AM_SEEK_FREQ_SPACING      0x3402
#define AM_SEEK_FREQ_SPACING_MASK 0x000F
#define AM_SEEK_FREQ_SPACING_SHFT 0

// AM_SEEK_TUNE_SNR_THRESHOLD
#define AM_SEEK_TUNE_SNR_THRESHOLD      0x3403
#define AM_SEEK_TUNE_SNR_THRESHOLD_MASK 0x003F
#define AM_SEEK_TUNE_SNR_THRESHOLD_SHFT 0

// AM_SEEK_TUNE_RSSI_THRESHOLD
#define AM_SEEK_TUNE_RSSI_THRESHOLD      0x3404
#define AM_SEEK_TUNE_RSSI_THRESHOLD_MASK 0x003F
#define AM_SEEK_TUNE_RSSI_THRESHOLD_SHFT 0

//==================================================================
// General Receive Properties
//==================================================================

// RX_VOLUME
#define RX_VOLUME      0x4000
#define RX_VOLUME_MASK 0x003F
#define RX_VOLUME_SHFT 0

// RX_HARD_MUTE
#define RX_HARD_MUTE 0x4001
#define RX_HARD_MUTE_RMUTE_MASK 0x0001
#define RX_HARD_MUTE_LMUTE_MASK 0x0002
#define RX_HARD_MUTE_RMUTE_SHFT 0
#define RX_HARD_MUTE_LMUTE_SHFT 1

//==================================================================
// Bit Definitions for Properties
//==================================================================

// DIGITAL_MODE - used for input or output
#define DIGITAL_MODE_I2S    0x0
#define DIGITAL_MODE_LEFT   0x6
#define DIGITAL_MODE_MSB1ST 0xC
#define DIGITAL_MODE_MSB2ND 0x8

// DIGITAL_SIZE - used for input or output
#define DIGITAL_SIZE_16 0x0
#define DIGITAL_SIZE_20 0x1
#define DIGITAL_SIZE_24 0x2
#define DIGITAL_SIZE_8  0x3

// FM_DEEMPH
#define FM_DEEMPH_75US 0x2
#define FM_DEEMPH_50US 0x1

// FM_RDS_BLETH - used for all block error thresholds
#define FM_RDS_BLETH_NO_ERRORS     0x0
#define FM_RDS_BLETH_1OR2_ERRORS   0x1
#define FM_RDS_BLETH_3TO5_ERRORS   0x2
#define FM_RDS_BLETH_UNCORRECTABLE 0x3

// TX_LINE_INPUT_LEVEL_LIATTEN
#define TX_LINE_INPUT_LEVEL_LIATTEN_396kOhm 0x0000
#define TX_LINE_INPUT_LEVEL_LIATTEN_100kOhm 0x1000
#define TX_LINE_INPUT_LEVEL_LIATTEN_74kOhm  0x2000
#define TX_LINE_INPUT_LEVEL_LIATTEN_60kOhm  0x3000

// TX_DEEMPHASIS
#define TX_PREEMPHASIS_75US     0x0
#define TX_PREEMPHASIS_50US     0x1
#define TX_PREEMPHASIS_DISABLED 0x2

// TX_ACOMP_ATTACK_TIME
#define TX_ACOMP_ATTACK_TIME_0_5MS 0x0
#define TX_ACOMP_ATTACK_TIME_1_0MS 0x1
#define TX_ACOMP_ATTACK_TIME_1_5MS 0x2
#define TX_ACOMP_ATTACK_TIME_2_0MS 0x3
#define TX_ACOMP_ATTACK_TIME_2_5MS 0x4
#define TX_ACOMP_ATTACK_TIME_3_0MS 0x5
#define TX_ACOMP_ATTACK_TIME_3_5MS 0x6
#define TX_ACOMP_ATTACK_TIME_4_0MS 0x7
#define TX_ACOMP_ATTACK_TIME_4_5MS 0x8
#define TX_ACOMP_ATTACK_TIME_5_0MS 0x9

// TX_ACOMP_RELEASE_TIME
#define TX_ACOMP_RELEASE_TIME_100MS  0x0
#define TX_ACOMP_RELEASE_TIME_200MS  0x1
#define TX_ACOMP_RELEASE_TIME_350MS  0x2
#define TX_ACOMP_RELEASE_TIME_525MS  0x3
#define TX_ACOMP_RELEASE_TIME_1000MS 0x4

// TX_RDS_PS_MIX
#define TX_RDS_PS_MIX_FIFO_EMPTY 0x0
#define TX_RDS_PS_MIX_12_5_PCT   0x1
#define TX_RDS_PS_MIX_25_PCT     0x2
#define TX_RDS_PS_MIX_50_PCT     0x3
#define TX_RDS_PS_MIX_75_PCT     0x4
#define TX_RDS_PS_MIX_87_5_PCT   0x5
#define TX_RDS_PS_MIX_100_PCT    0x6

// TX_RDS_PS_MISC_PTY
#define TX_RDS_PS_MISC_PTY_NONE     0
#define TX_RDS_PS_MISC_PTY_NEWS     1
#define TX_RDS_PS_MISC_PTY_INFO     2
#define TX_RDS_PS_MISC_PTY_SPORTS   3
#define TX_RDS_PS_MISC_PTY_TALK     4
#define TX_RDS_PS_MISC_PTY_ROCK     5
#define TX_RDS_PS_MISC_PTY_CLROCK   6
#define TX_RDS_PS_MISC_PTY_ADHITS   7
#define TX_RDS_PS_MISC_PTY_SOFTROCK 8
#define TX_RDS_PS_MISC_PTY_TOP40    9
#define TX_RDS_PS_MISC_PTY_COUNTRY  10
#define TX_RDS_PS_MISC_PTY_OLDIES   11
#define TX_RDS_PS_MISC_PTY_SOFT     12
#define TX_RDS_PS_MISC_PTY_NOST     13
#define TX_RDS_PS_MISC_PTY_JAZZ     14
#define TX_RDS_PS_MISC_PTY_CLASS    15
#define TX_RDS_PS_MISC_PTY_RHYBLUES 16
#define TX_RDS_PS_MISC_PTY_SOFTRB   17
#define TX_RDS_PS_MISC_PTY_FGNLANG  18
#define TX_RDS_PS_MISC_PTY_RMUSIC   19
#define TX_RDS_PS_MISC_PTY_RTALK    20
#define TX_RDS_PS_MISC_PTY_PERS     21
#define TX_RDS_PS_MISC_PTY_PUBLIC   22
#define TX_RDS_PS_MISC_PTY_COLLEGE  23
#define TX_RDS_PS_MISC_PTY_UN24     24
#define TX_RDS_PS_MISC_PTY_UN25     25
#define TX_RDS_PS_MISC_PTY_UN26     26
#define TX_RDS_PS_MISC_PTY_UN27     27
#define TX_RDS_PS_MISC_PTY_UN28     28
#define TX_RDS_PS_MISC_PTY_WTHR     29
#define TX_RDS_PS_MISC_PTY_EMERTEST 30
#define TX_RDS_PS_MISC_PTY_ALERT    31


// AM_CHANNEL_FILTER_BW
#define AM_CHANNEL_FILTER_BW_6KHZ 0
#define AM_CHANNEL_FILTER_BW_4KHZ 1
#define AM_CHANNEL_FILTER_BW_3KHZ 2
#define AM_CHANNEL_FILTER_BW_2KHZ 3


//==================================================================
// WB Receive Properties
//==================================================================


// WB_MAX_TUNE_ERROR
#define WB_MAX_TUNE_ERROR      0x5108

// WB_VALID_SNR_THRESHOLD
#define WB_VALID_SNR_THRESHOLD      0x5403
#define WB_VALID_SNR_THRESHOLD_MASK 0x007F
#define WB_VALID_SNR_THRESHOLD_SHFT 0

// WB_VALID_RSSI_THRESHOLD
#define WB_VALID_RSSI_THRESHOLD      0x5404
#define WB_VALID_RSSI_THRESHOLD_MASK 0x007F
#define WB_VALID_RSSI_THRESHOLD_SHFT 0



#endif
