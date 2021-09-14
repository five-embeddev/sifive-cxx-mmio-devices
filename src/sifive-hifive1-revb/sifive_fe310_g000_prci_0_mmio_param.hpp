/*
   Register and field offset and size definitions for peripheral sifive_fe310_g000_prci_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_FE310_G000_PRCI_0_MMIO_PARAMS_HPP
#define SIFIVE_FE310_G000_PRCI_0_MMIO_PARAMS_HPP

#include <cstdint>

namespace mmio_param {
    /* From sifive,fe310-g000,prci,mem peripheral generator */
    namespace sifive_fe310_g000_prci_0 {
       /* Ring Oscillator Configuration and Status */
       struct hfrosccfg_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 4;
       }; /* hfrosccfg_r */
       namespace hfrosccfg {
          /* Ring Oscillator Divider Register */
          struct hfroscdiv_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 6;
              static constexpr unsigned int bit_mask = 0x3f;
          };
          /* Ring Oscillator Trim Register */
          struct hfrosctrim_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 16;
              static constexpr unsigned int bit_width = 5;
              static constexpr unsigned int bit_mask = 0x1f0000;
          };
          /* Ring Oscillator Enable */
          struct hfroscen_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 30;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40000000;
          };
          /* Ring Oscillator Ready */
          struct hfroscrdy_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 31;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80000000;
          };
       } /* hfrosccfg */
       /* Crystal Oscillator Configuration and Status */
       struct hfxosccfg_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x4;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* hfxosccfg_r */
       namespace hfxosccfg {
          /* Crystal Oscillator Enable */
          struct hfxoscen_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 30;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40000000;
          };
          /* Crystal Oscillator Ready */
          struct hfxoscrdy_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 31;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80000000;
          };
       } /* hfxosccfg */
       /* PLL Configuration and Status */
       struct pllcfg_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x8;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 7;
       }; /* pllcfg_r */
       namespace pllcfg {
          /* PLL R Value */
          struct pllr_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 3;
              static constexpr unsigned int bit_mask = 0x7;
          };
          /* PLL F Value */
          struct pllf_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 4;
              static constexpr unsigned int bit_width = 6;
              static constexpr unsigned int bit_mask = 0x3f0;
          };
          /* PLL Q Value */
          struct pllq_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 10;
              static constexpr unsigned int bit_width = 2;
              static constexpr unsigned int bit_mask = 0xc00;
          };
          /* PLL Select */
          struct pllsel_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 16;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x10000;
          };
          /* PLL Reference Select */
          struct pllrefsel_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 17;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x20000;
          };
          /* PLL Bypass */
          struct pllbypass_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 18;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40000;
          };
          /* PLL Lock */
          struct plllock_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 31;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80000000;
          };
       } /* pllcfg */
       /* PLL Final Divide Configuration */
       struct plloutdiv_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xc;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* plloutdiv_r */
       namespace plloutdiv {
          /* PLL Final Divider Value */
          struct plloutdiv_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 6;
              static constexpr unsigned int bit_mask = 0x3f;
          };
          /* PLL Final Divide By 1 */
          struct plloutdivby1_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 8;
              static constexpr unsigned int bit_width = 6;
              static constexpr unsigned int bit_mask = 0x3f00;
          };
       } /* plloutdiv */
       /* Process Monitor Configuration and Status */
       struct procmoncfg_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xf0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 4;
       }; /* procmoncfg_r */
       namespace procmoncfg {
          /* Proccess Monitor Divider */
          struct procmon_div_sel_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 5;
              static constexpr unsigned int bit_mask = 0x1f;
          };
          /* Process Monitor Delay Selector */
          struct procmon_delay_sel_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 8;
              static constexpr unsigned int bit_width = 5;
              static constexpr unsigned int bit_mask = 0x1f00;
          };
          /* Process Monitor Enable */
          struct procmon_en_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 16;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x10000;
          };
          /* Process Monitor Select */
          struct procomon_sel_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 24;
              static constexpr unsigned int bit_width = 2;
              static constexpr unsigned int bit_mask = 0x3000000;
          };
       } /* procmoncfg */
    }
}

#endif // SIFIVE_FE310_G000_PRCI_0_DEV_HPP