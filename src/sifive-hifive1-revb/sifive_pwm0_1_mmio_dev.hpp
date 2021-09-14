/*
   Register structure definition of peripheral sifive_pwm0_1.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_PWM0_1_MMIO_DEV_HPP
#define SIFIVE_PWM0_1_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "sifive_pwm0_1_mmio_regs.hpp"

/*   From sifive,pwm0,control peripheral generator */
template<std::uintptr_t BASE_ADDR> class sifive_pwm0_1_dev  {
public:
    /* PWM configuration register */
   mmio_regs::sifive_pwm0_1::pwmcfg<BASE_ADDR> pwmcfg;
   
    /* PWM count register */
   mmio_regs::sifive_pwm0_1::pwmcount<BASE_ADDR> pwmcount;
   
    /* Scaled PWM count register */
   mmio_regs::sifive_pwm0_1::pwms<BASE_ADDR> pwms;
   
    /* PWM 0 compare register */
   mmio_regs::sifive_pwm0_1::pwmcmp0<BASE_ADDR> pwmcmp0;
   
    /* PWM 1 compare register */
   mmio_regs::sifive_pwm0_1::pwmcmp1<BASE_ADDR> pwmcmp1;
   
    /* PWM 2 compare register */
   mmio_regs::sifive_pwm0_1::pwmcmp2<BASE_ADDR> pwmcmp2;
   
    /* PWM 3 compare register */
   mmio_regs::sifive_pwm0_1::pwmcmp3<BASE_ADDR> pwmcmp3;
   
}; /* sifive_pwm0_1_dev  */

#endif // SIFIVE_PWM0_1_DEV_HPP