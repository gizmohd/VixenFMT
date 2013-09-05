
#include <stdint.h>
#include <stdlib.h>

static uint8_t eeprom[] = {
/*P: TX_PREEMPHASIS */
/* HARDCODED:
POWER_UP
P: GPO_IEN
P: REFCLK_FREQ
P: REFCLK_PRESCALE */

/*P: TX_PREEMPHASIS */
0x12, 0x00, 0x21, 0x06, 0x00, 0x01, 0x00, 0x00,
/*P: TX_PILOT_FREQUENCY */
0x12, 0x00, 0x21, 0x07, 0x4a, 0x38, 0x00, 0x00,
/*P: TX_PILOT_DEVIATION */
0x12, 0x00, 0x21, 0x02, 0x02, 0xa3, 0x00, 0x00,
/*P: TX_AUDIO_DEVIATION */
0x12, 0x00, 0x21, 0x01, 0x1a, 0xa9, 0x00, 0x00,

/*TX_TUNE_FREQ (4)*/
0x30, 0x00, 0x25, 0xf8, 0x00, 0x00, 0x00, 0x00,
/*TX_TUNE_POWER (5) */
0x31, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00, 0x00,
/*>>> wait 110ms*/
/*TX_TUNE_STATUS*/


/* Example 2 (aggressive compression):*/
/* P: TX_ACOMP_THRESHOLD = –15 dBFS*/
0x12, 0x00, 0x22, 0x01, 0xff, 0xf1, 0x00, 0x00,
/* P: TX_ACOMP_ATTACK_TIME = 0.5 ms*/
0x12, 0x00, 0x22, 0x02, 0x00, 0x00, 0x00, 0x00,
/* P: TX_ACOMP_RELEASE_TIME = 1000 ms*/
0x12, 0x00, 0x22, 0x03, 0x00, 0x04, 0x00, 0x00,
/* P: TX_ACOMP_GAIN = 5 dB*/
0x12, 0x00, 0x22, 0x04, 0x00, 0x05, 0x00, 0x00,
/* P: TX_LIMITER_RELEASE_TIME = default 5.01ms */
0x12, 0x00, 0x22, 0x05, 0x00, 0x66, 0x00, 0x00,
/* P: TX_ACOMP_ENABLE */
0x12, 0x00, 0x22, 0x00, 0x00, 0x03, 0x00, 0x00,

/*P: TX_ASQ_INT_SELECT*/
/*P: TX_ASQ_LEVEL_LOW*/
/*P: TX_ASQ_DURATION_LOW*/
/*P: TX_ASQ_LEVEL_HIGH*/
/*P: TX_ASQ_DURATION_HIGH*/

/*P: TX_RDS_DEVIATION (4)*/

/*P: TX_RDS_PI*/
/*P: TX_RDS_PS_MIX*/
/*P: TX_RDS_PS_MISC*/
/*P: TX_RDS_PS_REPEAT_COUNT*/
/*P: TX_RDS_PS_MESSAGE_COUNT*/
0x12, 0x00, 0x2c, 0x05, 0x00, 2, 0x00, 0x00,
/*P: TX_RDS_PS_AF*/
/*P: TX_RDS_FIFO_SIZE*/

/*TX_RDS_PS[0.0] {4bytes}
TX_RDS_PS[0.1] {4bytes}
TX_RDS_PS[1.0] {4bytes}
TX_RDS_PS[1.1] {4bytes}
   .
TX_RDS_PS[11.0] {4bytes}
TX_RDS_PS[11.1] {4bytes}*/
0x36, 0x00,  '+',  'h',  'e',  'l', 0x00, 0x00,
0x36, 0x01,  'l',  'o',  '+',  '+', 0x00, 0x00,
0x36, 0x02,  '-',  'R',  'D',  'S', 0x00, 0x00,
0x36, 0x03,  '=',  'O',  'k',  '-', 0x00, 0x00,

/*TX_RDS_BUFF[0] {6bytes}
TX_RDS_BUFF[1] {6bytes}
   .
TX_RDS_BUFF[n] {6bytes}
*/
/*TX_RDS_BUFF make it empty */
0x35, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x35, 0x04, 0x20, 0x00, 'H', 'e', 'l', 'l',
0x35, 0x04, 0x20, 0x01, 'o', ' ', 'W', 'o',
0x35, 0x04, 0x20, 0x02, 'r', 'l', 'd', '!',
0x35, 0x04, 0x20, 0x03, ' ', 'R', 'D', 'S',
0x35, 0x04, 0x20, 0x04, '-', 'P', 'S', ' ',
0x35, 0x04, 0x20, 0x05, 'W', 'o', 'r', 'k',
0x35, 0x04, 0x20, 0x06, 's', ' ', 'f', 'i',
0x35, 0x04, 0x20, 0x07, 'n', 'e', 0x0d, 0x0d,

/* the last thing: enable component output:
 P: TX_COMPONENT_ENABLE default=3 */
0x12, 0x00, 0x21, 0x00, 0x00, 0x07, 0x00, 0x00,

/* HARDCODED:
P: DIGITAL_INPUT_FORMAT
P: DIGITAL_INPUT_SAMPLE_RATE */

};

uint8_t *eepromData = eeprom;

size_t eeprom_data_size()
{
  return sizeof(eeprom);
}
