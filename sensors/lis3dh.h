/*  ____  ____      _    __  __  ____ ___
 * |  _ \|  _ \    / \  |  \/  |/ ___/ _ \
 * | | | | |_) |  / _ \ | |\/| | |  | | | |
 * | |_| |  _ <  / ___ \| |  | | |__| |_| |
 * |____/|_| \_\/_/   \_\_|  |_|\____\___/
 *                           research group
 *                             dramco.be/
 *
 *  KU Leuven - Technology Campus Gent,
 *  Gebroeders De Smetstraat 1,
 *  B-9000 Gent, Belgium
 *
 *         File: lis3dh.h
 *      Created: 2018-02-26
 *       Author: Guus Leenders
 *      Version: 1.0
 *
 *  Description: TODO
 */

#ifndef SENSORS_LIS3DH_H_
#define SENSORS_LIS3DH_H_

bool Lis3dh_Init(void);
bool Lis3dh_Detect(void);
<<<<<<< HEAD
bool Lis3dh_SetDataRate(uint8_t dr);
=======
uint8_t Lis3dh_SetDataRate(uint8_t dr);
>>>>>>> origin/tutorial
uint8_t Lis3dh_ReadValues(uint16_t * x, uint16_t * y, uint16_t * z);

#endif /* SENSORS_LIS3DH_H_ */
