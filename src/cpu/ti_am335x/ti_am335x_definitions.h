/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef TI_AM335X_DEFINITIONS_H
#define TI_AM335X_DEFINITIONS_H

#define CPU_NAME "Texas_Instruments_AM335x"
#define CPU_NAME_LOWER "ti_am335x"
#define CPU_NAME_UPPER "TI_AM335X"


/*
 * Datasheet: http://8iter.ru/datasheets/cpu/Texas_Instruments_AM335x_and_AMIC110_Sitara_Manual.pdf
 * Page 4990, 4991, 182, 183, 56
 *
 * Description
 * Base address offset
 */
//#define BASE_ADDRESS_GPIO (0x4804C000) // GPIO1
//#define BASE_ADDRESS_GPIO (0x481AC000) // GPIO2
#define BASE_ADDRESS_GPIO (0x481AE000) // GPIO3


/*
 * Dataseet: Texas_Instruments_AM335x_Manual.pdf
 * Page 4990, 4991, 182, 183, 56
 *
 * Description
 * Data input Register
 * Data output Register
 * Pin bit offset
 */
#define GPIO_DATAIN (0x138)
#define GPIO_DATAOUT (0x13C)
#define GPIO0_20_BIT_OFFSET 20


#endif // TI_AM335X_DEFINITIONS_H
