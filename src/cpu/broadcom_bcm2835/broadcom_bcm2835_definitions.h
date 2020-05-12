/*
 *   gpio
 *   created by Ilya Shishkin
 *   cortl@8iter.ru
 *   https://github.com/cortl0/gpio
 *   licensed by GPL v3.0
 */

#ifndef BROADCOM_BCM2835_DEFINITIONS_H
#define BROADCOM_BCM2835_DEFINITIONS_H


#define CPU_NAME Broadcom_BCM2835
#define CPU_NAME_LOWER broadcom_bcm2835
#define CPU_NAME_UPPER BROADCOM_BCM2835


/*
 * Datasheet reference
 * Datasheet page number
 * Base address offset
 */
#define BASE_ADDRESS_GPIO (0x0)


/*
 * Datasheet page number
 * Register Name            Offset
 */
#define GPIO0               0x0


/*
 * Datasheet page number
 * Pin Name                 Offset
 */
#define GPIO0_0_OFFSET      0


typedef unsigned long int uword;
typedef signed long int sword;


#endif // BROADCOM_BCM2835_DEFINITIONS_H
