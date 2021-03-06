/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef BEAGLEBONE_BLACK_H
#define BEAGLEBONE_BLACK_H

#include "../../cpu/ti_am335x/ti_am335x.h"

/*
 * Datasheet: http://8iter.ru/datasheets/board/BeagleBone_Black_Datasheet.pdf
 */
#define P9_41_GPIO_DATAIN           GPIO_DATAIN
#define P9_41_GPIO_DATAOUT          GPIO_DATAOUT
#define P9_41_BIT_OFFSET            GPIO0_20_BIT_OFFSET

#endif // BEAGLEBONE_BLACK_H
