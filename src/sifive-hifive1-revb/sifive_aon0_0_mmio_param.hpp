/*
   Register and field offset and size definitions for peripheral sifive_aon0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_AON0_0_MMIO_PARAMS_HPP
#define SIFIVE_AON0_0_MMIO_PARAMS_HPP

#include <cstdint>

namespace mmio_param {
    /* From sifive,aon0,mem peripheral generator */
    namespace sifive_aon0_0 {
       /* Backup Register 0 */
       struct backup_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x80;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* backup_r */
       /* wdog Configuration */
       struct wdogcfg_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 6;
       }; /* wdogcfg_r */
       namespace wdogcfg {
          /* Counter scale value. */
          struct wdogscale_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 4;
              static constexpr unsigned int bit_mask = 0xf;
          };
          /* Controls whether the comparator output can set the wdogrst bit and hence cause a full reset. */
          struct wdogrsten_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 8;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x100;
          };
          /* Reset counter to zero after match. */
          struct wdogzerocmp_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 9;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x200;
          };
          /* Enable Always - run continuously */
          struct wdogenalways_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 12;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1000;
          };
          /* Increment the watchdog counter if the processor is not asleep */
          struct wdogcoreawake_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 13;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2000;
          };
          /* Interrupt 0 Pending */
          struct wdogip0_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 28;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x10000000;
          };
       } /* wdogcfg */
       /* Counter Register */
       struct wdogcount_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x8;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* wdogcount_r */
       /* Scaled value of Counter */
       struct wdogs_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x10;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* wdogs_r */
       /* Feed register */
       struct wdogfeed_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x18;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* wdogfeed_r */
       /* Key Register */
       struct wdogkey_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x1c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* wdogkey_r */
       /* Comparator 0 */
       struct wdogcmp0_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x20;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* wdogcmp0_r */
       /* rtc Configuration */
       struct rtccfg_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x40;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 3;
       }; /* rtccfg_r */
       namespace rtccfg {
          /* Counter scale value. */
          struct rtcscale_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 4;
              static constexpr unsigned int bit_mask = 0xf;
          };
          /* Enable Always - run continuously */
          struct rtcenalways_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 12;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1000;
          };
          /* Interrupt 0 Pending */
          struct rtcip0_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 28;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x10000000;
          };
       } /* rtccfg */
       /* Low bits of Counter */
       struct rtccountlo_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x48;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* rtccountlo_r */
       /* High bits of Counter */
       struct rtccounthi_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x4c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* rtccounthi_r */
       /* Scaled value of Counter */
       struct rtcs_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x50;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* rtcs_r */
       /* Comparator 0 */
       struct rtccmp0_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x60;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* rtccmp0_r */
       /* Wakeup program instruction 0 */
       struct pmuwakeupi0_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x100;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmuwakeupi0_r */
       /* Wakeup program instruction 1 */
       struct pmuwakeupi1_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x104;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmuwakeupi1_r */
       /* Wakeup program instruction 2 */
       struct pmuwakeupi2_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x108;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmuwakeupi2_r */
       /* Wakeup program instruction 3 */
       struct pmuwakeupi3_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x10c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmuwakeupi3_r */
       /* Wakeup program instruction 4 */
       struct pmuwakeupi4_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x110;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmuwakeupi4_r */
       /* Wakeup program instruction 5 */
       struct pmuwakeupi5_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x114;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmuwakeupi5_r */
       /* Wakeup program instruction 6 */
       struct pmuwakeupi6_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x118;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmuwakeupi6_r */
       /* Wakeup program instruction 7 */
       struct pmuwakeupi7_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x11c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmuwakeupi7_r */
       /* Sleep program instruction 0 */
       struct pmusleepi0_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x120;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmusleepi0_r */
       /* Sleep program instruction 1 */
       struct pmusleepi1_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x124;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmusleepi1_r */
       /* Sleep program instruction 2 */
       struct pmusleepi2_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x128;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmusleepi2_r */
       /* Sleep program instruction 3 */
       struct pmusleepi3_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x12c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmusleepi3_r */
       /* Sleep program instruction 4 */
       struct pmusleepi4_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x130;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmusleepi4_r */
       /* Sleep program instruction 5 */
       struct pmusleepi5_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x134;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmusleepi5_r */
       /* Sleep program instruction 6 */
       struct pmusleepi6_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x138;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmusleepi6_r */
       /* Sleep program instruction 7 */
       struct pmusleepi7_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x13c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmusleepi7_r */
       /* PMU Interrupt Enables */
       struct pmuie_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x140;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmuie_r */
       /* PMU Wakeup Cause */
       struct pmucause_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x144;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmucause_r */
       /* Initiate PMU Sleep Sequence */
       struct pmusleep_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x148;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmusleep_r */
       /* PMU Key. Reads as 1 when PMU is unlocked */
       struct pmukey_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x14c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pmukey_r */
       /* AON Block Configuration Information */
       struct aoncfg_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x300;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 7;
       }; /* aoncfg_r */
       namespace aoncfg {
          /* Bandgap feature is present */
          struct has_bandgap_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* Brownout detector feature is present */
          struct has_bod_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
          /* Low Frequency Ring Oscillator feature is present */
          struct has_lfrosc_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 2;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x4;
          };
          /* Low Frequency RC Oscillator feature is present */
          struct has_lfrcosc_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 3;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x8;
          };
          /* Low Frequency Crystal Oscillator feature is present */
          struct has_lfxosc_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 4;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x10;
          };
          /* Power-On-Reset feature is present */
          struct has_por_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 5;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x20;
          };
          /* Low Dropout Regulator feature is present */
          struct has_ldo_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 6;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40;
          };
       } /* aoncfg */
       /* Ring Oscillator Configuration and Status */
       struct lfrosccfg_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x70;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 4;
       }; /* lfrosccfg_r */
       namespace lfrosccfg {
          /* Ring Oscillator Divider Register */
          struct lfroscdiv_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 6;
              static constexpr unsigned int bit_mask = 0x3f;
          };
          /* Ring Oscillator Trim Register */
          struct lfrosctrim_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 16;
              static constexpr unsigned int bit_width = 5;
              static constexpr unsigned int bit_mask = 0x1f0000;
          };
          /* Ring Oscillator Enable */
          struct lfroscen_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 30;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40000000;
          };
          /* Ring Oscillator Ready */
          struct lfroscrdy_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 31;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80000000;
          };
       } /* lfrosccfg */
       /* Low-Frequency Clock Mux Control and Status */
       struct lfclkmux_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x7c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* lfclkmux_r */
       namespace lfclkmux {
          /* Low Frequency Clock Source Selector */
          struct lfextclk_sel_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* Setting of the aon_lfclksel pin */
          struct lfextclk_mux_status_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 31;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80000000;
          };
       } /* lfclkmux */
    }
}

#endif // SIFIVE_AON0_0_DEV_HPP