/*
   Register and field offset and size definitions for peripheral sifive_pwm0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_PWM0_0_MMIO_PARAMS_HPP
#define SIFIVE_PWM0_0_MMIO_PARAMS_HPP

#include <cstdint>

namespace mmio_param {
    /* From sifive,pwm0,control peripheral generator */
    namespace sifive_pwm0_0 {
       /* PWM configuration register */
       struct pwmcfg_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 22;
       }; /* pwmcfg_r */
       namespace pwmcfg {
          /* PWM Counter scale */
          struct pwmscale_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 4;
              static constexpr unsigned int bit_mask = 0xf;
          };
          /* PWM Sticky - disallow clearing pwmcmpXip bits */
          struct pwmsticky_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 8;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x100;
          };
          /* PWM Zero - counter resets to zero after match */
          struct pwmzerocmp_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 9;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x200;
          };
          /* PWM Deglitch - latch pwmcmpXip within same cycle */
          struct pwmdeglitch_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 10;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x400;
          };
          /* PWM enable always - run continuously */
          struct pwmenalways_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 12;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1000;
          };
          /* PWM enable one shot - run one cycle */
          struct pwmenoneshot_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 13;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2000;
          };
          /* PWM0 Compare Center */
          struct pwmcmp0center_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 16;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x10000;
          };
          /* PWM1 Compare Center */
          struct pwmcmp1center_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 17;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x20000;
          };
          /* PWM2 Compare Center */
          struct pwmcmp2center_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 18;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40000;
          };
          /* PWM3 Compare Center */
          struct pwmcmp3center_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 19;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80000;
          };
          /* PWM0 Invert */
          struct pwmcmp0invert_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 20;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x100000;
          };
          /* PWM1 Invert */
          struct pwmcmp1invert_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 21;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x200000;
          };
          /* PWM2 Invert */
          struct pwmcmp2invert_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 22;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x400000;
          };
          /* PWM3 Invert */
          struct pwmcmp3invert_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 23;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x800000;
          };
          /* PWM0/PWM1 Compare Gang */
          struct pwmcmp0gang_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 24;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1000000;
          };
          /* PWM1/PWM2 Compare Gang */
          struct pwmcmp1gang_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 25;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2000000;
          };
          /* PWM2/PWM3 Compare Gang */
          struct pwmcmp2gang_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 26;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x4000000;
          };
          /* PWM3/PWM0 Compare Gang */
          struct pwmcmp3gang_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 27;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x8000000;
          };
          /* PWM0 Interrupt Pending */
          struct pwmcmp0ip_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 28;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x10000000;
          };
          /* PWM1 Interrupt Pending */
          struct pwmcmp1ip_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 29;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x20000000;
          };
          /* PWM2 Interrupt Pending */
          struct pwmcmp2ip_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 30;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40000000;
          };
          /* PWM3 Interrupt Pending */
          struct pwmcmp3ip_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 31;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80000000;
          };
       } /* pwmcfg */
       /* PWM count register */
       struct pwmcount_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x8;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* pwmcount_r */
       namespace pwmcount {
          /* PWM count register. */
          struct pwmcount_f {
              using datatype = std::uint32_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 31;
              static constexpr unsigned int bit_mask = 0x7fffffff;
          };
       } /* pwmcount */
       /* Scaled PWM count register */
       struct pwms_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x10;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* pwms_r */
       namespace pwms {
          /* Scaled PWM count register. */
          struct pwms_f {
              using datatype = std::uint16_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 16;
              static constexpr unsigned int bit_mask = 0xffff;
          };
       } /* pwms */
       /* PWM 0 compare register */
       struct pwmcmp0_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x20;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* pwmcmp0_r */
       namespace pwmcmp0 {
          /* PWM 0 Compare Value */
          struct pwmcmp0_f {
              using datatype = std::uint16_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 16;
              static constexpr unsigned int bit_mask = 0xffff;
          };
       } /* pwmcmp0 */
       /* PWM 1 compare register */
       struct pwmcmp1_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x24;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* pwmcmp1_r */
       namespace pwmcmp1 {
          /* PWM 1 Compare Value */
          struct pwmcmp1_f {
              using datatype = std::uint16_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 16;
              static constexpr unsigned int bit_mask = 0xffff;
          };
       } /* pwmcmp1 */
       /* PWM 2 compare register */
       struct pwmcmp2_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x28;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* pwmcmp2_r */
       namespace pwmcmp2 {
          /* PWM 2 Compare Value */
          struct pwmcmp2_f {
              using datatype = std::uint16_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 16;
              static constexpr unsigned int bit_mask = 0xffff;
          };
       } /* pwmcmp2 */
       /* PWM 3 compare register */
       struct pwmcmp3_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x2c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* pwmcmp3_r */
       namespace pwmcmp3 {
          /* PWM 3 Compare Value */
          struct pwmcmp3_f {
              using datatype = std::uint16_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 16;
              static constexpr unsigned int bit_mask = 0xffff;
          };
       } /* pwmcmp3 */
    }
}

#endif // SIFIVE_PWM0_0_DEV_HPP