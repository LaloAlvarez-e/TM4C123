/**
 *
 * @file I2C_ACK.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 17 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_ACK_H_
#define XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_ACK_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

void I2C__vSetSlaveACKEnable(I2C_nMODULE enModule, I2C_nACK_ENABLE enACKEnableArg);
I2C_nACK_ENABLE I2C__enGetSlaveACKEnable(I2C_nMODULE enModule);

void I2C__vSetSlaveACKValue(I2C_nMODULE enModule, I2C_nACK enACKArg);
I2C_nACK I2C__enGetSlaveACKValue(I2C_nMODULE enModule);

#endif /* XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_ACK_H_ */
