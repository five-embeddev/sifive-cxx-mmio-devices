/*
   Register class and field definition for peripheral sifive_pwm0_2.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_PWM0_2_MMIO_REGS_HPP
#define SIFIVE_PWM0_2_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "sifive_pwm0_2_mmio_param.hpp"

namespace mmio_regs {
    /* From sifive,pwm0,control peripheral generator */
    namespace sifive_pwm0_2 {
        /* PWM configuration register */
        template<const std::uintptr_t BASE_ADDR> class pwmcfg 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_pwm0_2::pwmcfg_r> {
            public:
            /* PWM Counter scale */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmscale_f> pwmscale;
            /* PWM Sticky - disallow clearing pwmcmpXip bits */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmsticky_f> pwmsticky;
            /* PWM Zero - counter resets to zero after match */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmzerocmp_f> pwmzerocmp;
            /* PWM Deglitch - latch pwmcmpXip within same cycle */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmdeglitch_f> pwmdeglitch;
            /* PWM enable always - run continuously */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmenalways_f> pwmenalways;
            /* PWM enable one shot - run one cycle */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmenoneshot_f> pwmenoneshot;
            /* PWM0 Compare Center */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmcmp0center_f> pwmcmp0center;
            /* PWM1 Compare Center */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmcmp1center_f> pwmcmp1center;
            /* PWM2 Compare Center */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmcmp2center_f> pwmcmp2center;
            /* PWM3 Compare Center */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmcmp3center_f> pwmcmp3center;
            /* PWM0 Invert */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmcmp0invert_f> pwmcmp0invert;
            /* PWM1 Invert */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmcmp1invert_f> pwmcmp1invert;
            /* PWM2 Invert */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmcmp2invert_f> pwmcmp2invert;
            /* PWM3 Invert */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmcmp3invert_f> pwmcmp3invert;
            /* PWM0/PWM1 Compare Gang */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmcmp0gang_f> pwmcmp0gang;
            /* PWM1/PWM2 Compare Gang */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmcmp1gang_f> pwmcmp1gang;
            /* PWM2/PWM3 Compare Gang */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmcmp2gang_f> pwmcmp2gang;
            /* PWM3/PWM0 Compare Gang */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmcmp3gang_f> pwmcmp3gang;
            /* PWM0 Interrupt Pending */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmcmp0ip_f> pwmcmp0ip;
            /* PWM1 Interrupt Pending */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmcmp1ip_f> pwmcmp1ip;
            /* PWM2 Interrupt Pending */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmcmp2ip_f> pwmcmp2ip;
            /* PWM3 Interrupt Pending */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcfg_r,
                             mmio_param::sifive_pwm0_2::pwmcfg::pwmcmp3ip_f> pwmcmp3ip;
        }; /* pwmcfg */
        /* PWM count register */
        template<const std::uintptr_t BASE_ADDR> class pwmcount 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_pwm0_2::pwmcount_r> {
            public:
            /* PWM count register. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcount_r,
                             mmio_param::sifive_pwm0_2::pwmcount::pwmcount_f> pwmcount;
        }; /* pwmcount */
        /* Scaled PWM count register */
        template<const std::uintptr_t BASE_ADDR> class pwms 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_pwm0_2::pwms_r> {
            public:
            /* Scaled PWM count register. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwms_r,
                             mmio_param::sifive_pwm0_2::pwms::pwms_f> pwms;
        }; /* pwms */
        /* PWM 0 compare register */
        template<const std::uintptr_t BASE_ADDR> class pwmcmp0 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_pwm0_2::pwmcmp0_r> {
            public:
            /* PWM 0 Compare Value */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcmp0_r,
                             mmio_param::sifive_pwm0_2::pwmcmp0::pwmcmp0_f> pwmcmp0;
        }; /* pwmcmp0 */
        /* PWM 1 compare register */
        template<const std::uintptr_t BASE_ADDR> class pwmcmp1 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_pwm0_2::pwmcmp1_r> {
            public:
            /* PWM 1 Compare Value */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcmp1_r,
                             mmio_param::sifive_pwm0_2::pwmcmp1::pwmcmp1_f> pwmcmp1;
        }; /* pwmcmp1 */
        /* PWM 2 compare register */
        template<const std::uintptr_t BASE_ADDR> class pwmcmp2 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_pwm0_2::pwmcmp2_r> {
            public:
            /* PWM 2 Compare Value */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcmp2_r,
                             mmio_param::sifive_pwm0_2::pwmcmp2::pwmcmp2_f> pwmcmp2;
        }; /* pwmcmp2 */
        /* PWM 3 compare register */
        template<const std::uintptr_t BASE_ADDR> class pwmcmp3 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_pwm0_2::pwmcmp3_r> {
            public:
            /* PWM 3 Compare Value */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_pwm0_2::pwmcmp3_r,
                             mmio_param::sifive_pwm0_2::pwmcmp3::pwmcmp3_f> pwmcmp3;
        }; /* pwmcmp3 */
    } /* sifive_pwm0_2 */
} /* mmio_regs */

#endif // SIFIVE_PWM0_2_DEV_HPP