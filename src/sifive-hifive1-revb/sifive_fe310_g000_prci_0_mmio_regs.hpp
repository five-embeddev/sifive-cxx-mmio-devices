/*
   Register class and field definition for peripheral sifive_fe310_g000_prci_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_FE310_G000_PRCI_0_MMIO_REGS_HPP
#define SIFIVE_FE310_G000_PRCI_0_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "sifive_fe310_g000_prci_0_mmio_param.hpp"

namespace mmio_regs {
    /* From sifive,fe310-g000,prci,mem peripheral generator */
    namespace sifive_fe310_g000_prci_0 {
        /* Ring Oscillator Configuration and Status */
        template<const std::uintptr_t BASE_ADDR> class hfrosccfg 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_fe310_g000_prci_0::hfrosccfg_r> {
            public:
            /* Ring Oscillator Divider Register */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::hfrosccfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::hfrosccfg::hfroscdiv_f> hfroscdiv;
            /* Ring Oscillator Trim Register */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::hfrosccfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::hfrosccfg::hfrosctrim_f> hfrosctrim;
            /* Ring Oscillator Enable */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::hfrosccfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::hfrosccfg::hfroscen_f> hfroscen;
            /* Ring Oscillator Ready */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::hfrosccfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::hfrosccfg::hfroscrdy_f> hfroscrdy;
        }; /* hfrosccfg */
        /* Crystal Oscillator Configuration and Status */
        template<const std::uintptr_t BASE_ADDR> class hfxosccfg 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_fe310_g000_prci_0::hfxosccfg_r> {
            public:
            /* Crystal Oscillator Enable */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::hfxosccfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::hfxosccfg::hfxoscen_f> hfxoscen;
            /* Crystal Oscillator Ready */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::hfxosccfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::hfxosccfg::hfxoscrdy_f> hfxoscrdy;
        }; /* hfxosccfg */
        /* PLL Configuration and Status */
        template<const std::uintptr_t BASE_ADDR> class pllcfg 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_fe310_g000_prci_0::pllcfg_r> {
            public:
            /* PLL R Value */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::pllcfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::pllcfg::pllr_f> pllr;
            /* PLL F Value */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::pllcfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::pllcfg::pllf_f> pllf;
            /* PLL Q Value */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::pllcfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::pllcfg::pllq_f> pllq;
            /* PLL Select */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::pllcfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::pllcfg::pllsel_f> pllsel;
            /* PLL Reference Select */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::pllcfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::pllcfg::pllrefsel_f> pllrefsel;
            /* PLL Bypass */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::pllcfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::pllcfg::pllbypass_f> pllbypass;
            /* PLL Lock */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::pllcfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::pllcfg::plllock_f> plllock;
        }; /* pllcfg */
        /* PLL Final Divide Configuration */
        template<const std::uintptr_t BASE_ADDR> class plloutdiv 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_fe310_g000_prci_0::plloutdiv_r> {
            public:
            /* PLL Final Divider Value */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::plloutdiv_r,
                             mmio_param::sifive_fe310_g000_prci_0::plloutdiv::plloutdiv_f> plloutdiv;
            /* PLL Final Divide By 1 */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::plloutdiv_r,
                             mmio_param::sifive_fe310_g000_prci_0::plloutdiv::plloutdivby1_f> plloutdivby1;
        }; /* plloutdiv */
        /* Process Monitor Configuration and Status */
        template<const std::uintptr_t BASE_ADDR> class procmoncfg 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_fe310_g000_prci_0::procmoncfg_r> {
            public:
            /* Proccess Monitor Divider */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::procmoncfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::procmoncfg::procmon_div_sel_f> procmon_div_sel;
            /* Process Monitor Delay Selector */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::procmoncfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::procmoncfg::procmon_delay_sel_f> procmon_delay_sel;
            /* Process Monitor Enable */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::procmoncfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::procmoncfg::procmon_en_f> procmon_en;
            /* Process Monitor Select */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_fe310_g000_prci_0::procmoncfg_r,
                             mmio_param::sifive_fe310_g000_prci_0::procmoncfg::procomon_sel_f> procomon_sel;
        }; /* procmoncfg */
    } /* sifive_fe310_g000_prci_0 */
} /* mmio_regs */

#endif // SIFIVE_FE310_G000_PRCI_0_DEV_HPP