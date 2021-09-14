/*
   Register class and field definition for peripheral sifive_aon0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_AON0_0_MMIO_REGS_HPP
#define SIFIVE_AON0_0_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "sifive_aon0_0_mmio_param.hpp"

namespace mmio_regs {
    /* From sifive,aon0,mem peripheral generator */
    namespace sifive_aon0_0 {
        /* Backup Register 0 */
        template<const std::uintptr_t BASE_ADDR> class backup 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::backup_r> {
        }; /* backup */
        /* wdog Configuration */
        template<const std::uintptr_t BASE_ADDR> class wdogcfg 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::wdogcfg_r> {
            public:
            /* Counter scale value. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::wdogcfg_r,
                             mmio_param::sifive_aon0_0::wdogcfg::wdogscale_f> wdogscale;
            /* Controls whether the comparator output can set the wdogrst bit and hence cause a full reset. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::wdogcfg_r,
                             mmio_param::sifive_aon0_0::wdogcfg::wdogrsten_f> wdogrsten;
            /* Reset counter to zero after match. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::wdogcfg_r,
                             mmio_param::sifive_aon0_0::wdogcfg::wdogzerocmp_f> wdogzerocmp;
            /* Enable Always - run continuously */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::wdogcfg_r,
                             mmio_param::sifive_aon0_0::wdogcfg::wdogenalways_f> wdogenalways;
            /* Increment the watchdog counter if the processor is not asleep */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::wdogcfg_r,
                             mmio_param::sifive_aon0_0::wdogcfg::wdogcoreawake_f> wdogcoreawake;
            /* Interrupt 0 Pending */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::wdogcfg_r,
                             mmio_param::sifive_aon0_0::wdogcfg::wdogip0_f> wdogip0;
        }; /* wdogcfg */
        /* Counter Register */
        template<const std::uintptr_t BASE_ADDR> class wdogcount 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::wdogcount_r> {
        }; /* wdogcount */
        /* Scaled value of Counter */
        template<const std::uintptr_t BASE_ADDR> class wdogs 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::wdogs_r> {
        }; /* wdogs */
        /* Feed register */
        template<const std::uintptr_t BASE_ADDR> class wdogfeed 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::wdogfeed_r> {
        }; /* wdogfeed */
        /* Key Register */
        template<const std::uintptr_t BASE_ADDR> class wdogkey 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::wdogkey_r> {
        }; /* wdogkey */
        /* Comparator 0 */
        template<const std::uintptr_t BASE_ADDR> class wdogcmp0 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::wdogcmp0_r> {
        }; /* wdogcmp0 */
        /* rtc Configuration */
        template<const std::uintptr_t BASE_ADDR> class rtccfg 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::rtccfg_r> {
            public:
            /* Counter scale value. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::rtccfg_r,
                             mmio_param::sifive_aon0_0::rtccfg::rtcscale_f> rtcscale;
            /* Enable Always - run continuously */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::rtccfg_r,
                             mmio_param::sifive_aon0_0::rtccfg::rtcenalways_f> rtcenalways;
            /* Interrupt 0 Pending */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::rtccfg_r,
                             mmio_param::sifive_aon0_0::rtccfg::rtcip0_f> rtcip0;
        }; /* rtccfg */
        /* Low bits of Counter */
        template<const std::uintptr_t BASE_ADDR> class rtccountlo 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::rtccountlo_r> {
        }; /* rtccountlo */
        /* High bits of Counter */
        template<const std::uintptr_t BASE_ADDR> class rtccounthi 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::rtccounthi_r> {
        }; /* rtccounthi */
        /* Scaled value of Counter */
        template<const std::uintptr_t BASE_ADDR> class rtcs 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::rtcs_r> {
        }; /* rtcs */
        /* Comparator 0 */
        template<const std::uintptr_t BASE_ADDR> class rtccmp0 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::rtccmp0_r> {
        }; /* rtccmp0 */
        /* Wakeup program instruction 0 */
        template<const std::uintptr_t BASE_ADDR> class pmuwakeupi0 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmuwakeupi0_r> {
        }; /* pmuwakeupi0 */
        /* Wakeup program instruction 1 */
        template<const std::uintptr_t BASE_ADDR> class pmuwakeupi1 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmuwakeupi1_r> {
        }; /* pmuwakeupi1 */
        /* Wakeup program instruction 2 */
        template<const std::uintptr_t BASE_ADDR> class pmuwakeupi2 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmuwakeupi2_r> {
        }; /* pmuwakeupi2 */
        /* Wakeup program instruction 3 */
        template<const std::uintptr_t BASE_ADDR> class pmuwakeupi3 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmuwakeupi3_r> {
        }; /* pmuwakeupi3 */
        /* Wakeup program instruction 4 */
        template<const std::uintptr_t BASE_ADDR> class pmuwakeupi4 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmuwakeupi4_r> {
        }; /* pmuwakeupi4 */
        /* Wakeup program instruction 5 */
        template<const std::uintptr_t BASE_ADDR> class pmuwakeupi5 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmuwakeupi5_r> {
        }; /* pmuwakeupi5 */
        /* Wakeup program instruction 6 */
        template<const std::uintptr_t BASE_ADDR> class pmuwakeupi6 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmuwakeupi6_r> {
        }; /* pmuwakeupi6 */
        /* Wakeup program instruction 7 */
        template<const std::uintptr_t BASE_ADDR> class pmuwakeupi7 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmuwakeupi7_r> {
        }; /* pmuwakeupi7 */
        /* Sleep program instruction 0 */
        template<const std::uintptr_t BASE_ADDR> class pmusleepi0 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmusleepi0_r> {
        }; /* pmusleepi0 */
        /* Sleep program instruction 1 */
        template<const std::uintptr_t BASE_ADDR> class pmusleepi1 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmusleepi1_r> {
        }; /* pmusleepi1 */
        /* Sleep program instruction 2 */
        template<const std::uintptr_t BASE_ADDR> class pmusleepi2 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmusleepi2_r> {
        }; /* pmusleepi2 */
        /* Sleep program instruction 3 */
        template<const std::uintptr_t BASE_ADDR> class pmusleepi3 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmusleepi3_r> {
        }; /* pmusleepi3 */
        /* Sleep program instruction 4 */
        template<const std::uintptr_t BASE_ADDR> class pmusleepi4 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmusleepi4_r> {
        }; /* pmusleepi4 */
        /* Sleep program instruction 5 */
        template<const std::uintptr_t BASE_ADDR> class pmusleepi5 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmusleepi5_r> {
        }; /* pmusleepi5 */
        /* Sleep program instruction 6 */
        template<const std::uintptr_t BASE_ADDR> class pmusleepi6 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmusleepi6_r> {
        }; /* pmusleepi6 */
        /* Sleep program instruction 7 */
        template<const std::uintptr_t BASE_ADDR> class pmusleepi7 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmusleepi7_r> {
        }; /* pmusleepi7 */
        /* PMU Interrupt Enables */
        template<const std::uintptr_t BASE_ADDR> class pmuie 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmuie_r> {
        }; /* pmuie */
        /* PMU Wakeup Cause */
        template<const std::uintptr_t BASE_ADDR> class pmucause 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmucause_r> {
        }; /* pmucause */
        /* Initiate PMU Sleep Sequence */
        template<const std::uintptr_t BASE_ADDR> class pmusleep 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmusleep_r> {
        }; /* pmusleep */
        /* PMU Key. Reads as 1 when PMU is unlocked */
        template<const std::uintptr_t BASE_ADDR> class pmukey 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::pmukey_r> {
        }; /* pmukey */
        /* AON Block Configuration Information */
        template<const std::uintptr_t BASE_ADDR> class aoncfg 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::aoncfg_r> {
            public:
            /* Bandgap feature is present */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::aoncfg_r,
                             mmio_param::sifive_aon0_0::aoncfg::has_bandgap_f> has_bandgap;
            /* Brownout detector feature is present */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::aoncfg_r,
                             mmio_param::sifive_aon0_0::aoncfg::has_bod_f> has_bod;
            /* Low Frequency Ring Oscillator feature is present */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::aoncfg_r,
                             mmio_param::sifive_aon0_0::aoncfg::has_lfrosc_f> has_lfrosc;
            /* Low Frequency RC Oscillator feature is present */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::aoncfg_r,
                             mmio_param::sifive_aon0_0::aoncfg::has_lfrcosc_f> has_lfrcosc;
            /* Low Frequency Crystal Oscillator feature is present */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::aoncfg_r,
                             mmio_param::sifive_aon0_0::aoncfg::has_lfxosc_f> has_lfxosc;
            /* Power-On-Reset feature is present */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::aoncfg_r,
                             mmio_param::sifive_aon0_0::aoncfg::has_por_f> has_por;
            /* Low Dropout Regulator feature is present */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::aoncfg_r,
                             mmio_param::sifive_aon0_0::aoncfg::has_ldo_f> has_ldo;
        }; /* aoncfg */
        /* Ring Oscillator Configuration and Status */
        template<const std::uintptr_t BASE_ADDR> class lfrosccfg 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::lfrosccfg_r> {
            public:
            /* Ring Oscillator Divider Register */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::lfrosccfg_r,
                             mmio_param::sifive_aon0_0::lfrosccfg::lfroscdiv_f> lfroscdiv;
            /* Ring Oscillator Trim Register */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::lfrosccfg_r,
                             mmio_param::sifive_aon0_0::lfrosccfg::lfrosctrim_f> lfrosctrim;
            /* Ring Oscillator Enable */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::lfrosccfg_r,
                             mmio_param::sifive_aon0_0::lfrosccfg::lfroscen_f> lfroscen;
            /* Ring Oscillator Ready */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::lfrosccfg_r,
                             mmio_param::sifive_aon0_0::lfrosccfg::lfroscrdy_f> lfroscrdy;
        }; /* lfrosccfg */
        /* Low-Frequency Clock Mux Control and Status */
        template<const std::uintptr_t BASE_ADDR> class lfclkmux 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_aon0_0::lfclkmux_r> {
            public:
            /* Low Frequency Clock Source Selector */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::lfclkmux_r,
                             mmio_param::sifive_aon0_0::lfclkmux::lfextclk_sel_f> lfextclk_sel;
            /* Setting of the aon_lfclksel pin */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_aon0_0::lfclkmux_r,
                             mmio_param::sifive_aon0_0::lfclkmux::lfextclk_mux_status_f> lfextclk_mux_status;
        }; /* lfclkmux */
    } /* sifive_aon0_0 */
} /* mmio_regs */

#endif // SIFIVE_AON0_0_DEV_HPP