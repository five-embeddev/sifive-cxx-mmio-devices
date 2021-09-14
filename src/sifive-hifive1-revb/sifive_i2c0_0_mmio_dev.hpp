/*
   Register structure definition of peripheral sifive_i2c0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_I2C0_0_MMIO_DEV_HPP
#define SIFIVE_I2C0_0_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "sifive_i2c0_0_mmio_regs.hpp"

/*   From sifive,i2c0,control peripheral generator */
template<std::uintptr_t BASE_ADDR> class sifive_i2c0_0_dev  {
public:
    /* Clock Prescale register lo-byte */
   mmio_regs::sifive_i2c0_0::prescale_low<BASE_ADDR> prescale_low;
   
    /* Clock Prescale register hi-byte */
   mmio_regs::sifive_i2c0_0::prescale_high<BASE_ADDR> prescale_high;
   
    /* Control register */
   mmio_regs::sifive_i2c0_0::control<BASE_ADDR> control;
   
    /* Transmit and receive data byte register */
   mmio_regs::sifive_i2c0_0::transmit__receive<BASE_ADDR> transmit__receive;
   
    /* Command write and status read register */
   mmio_regs::sifive_i2c0_0::command__status<BASE_ADDR> command__status;
   
}; /* sifive_i2c0_0_dev  */

#endif // SIFIVE_I2C0_0_DEV_HPP