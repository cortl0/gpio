/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef TI_AM335X_DEFINITIONS_H
#define TI_AM335X_DEFINITIONS_H


/*
 * Dataseet: Texas_Instruments_AM335x_Manual.pdf
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


typedef unsigned long int uword;
typedef signed long int sword;


#endif // TI_AM335X_DEFINITIONS_H
