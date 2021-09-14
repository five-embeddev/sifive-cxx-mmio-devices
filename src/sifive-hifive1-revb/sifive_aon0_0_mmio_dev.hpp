/*
   Register structure definition of peripheral sifive_aon0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_AON0_0_MMIO_DEV_HPP
#define SIFIVE_AON0_0_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "sifive_aon0_0_mmio_regs.hpp"

/*   From sifive,aon0,mem peripheral generator */
template<std::uintptr_t BASE_ADDR> class sifive_aon0_0_dev  {
public:
    /* Backup Register 0 */
   mmio_regs::sifive_aon0_0::backup<BASE_ADDR> backup[16];
   
    /* wdog Configuration */
   mmio_regs::sifive_aon0_0::wdogcfg<BASE_ADDR> wdogcfg;
   
    /* Counter Register */
   mmio_regs::sifive_aon0_0::wdogcount<BASE_ADDR> wdogcount;
   
    /* Scaled value of Counter */
   mmio_regs::sifive_aon0_0::wdogs<BASE_ADDR> wdogs;
   
    /* Feed register */
   mmio_regs::sifive_aon0_0::wdogfeed<BASE_ADDR> wdogfeed;
   
    /* Key Register */
   mmio_regs::sifive_aon0_0::wdogkey<BASE_ADDR> wdogkey;
   
    /* Comparator 0 */
   mmio_regs::sifive_aon0_0::wdogcmp0<BASE_ADDR> wdogcmp0;
   
    /* rtc Configuration */
   mmio_regs::sifive_aon0_0::rtccfg<BASE_ADDR> rtccfg;
   
    /* Low bits of Counter */
   mmio_regs::sifive_aon0_0::rtccountlo<BASE_ADDR> rtccountlo;
   
    /* High bits of Counter */
   mmio_regs::sifive_aon0_0::rtccounthi<BASE_ADDR> rtccounthi;
   
    /* Scaled value of Counter */
   mmio_regs::sifive_aon0_0::rtcs<BASE_ADDR> rtcs;
   
    /* Comparator 0 */
   mmio_regs::sifive_aon0_0::rtccmp0<BASE_ADDR> rtccmp0;
   
    /* Wakeup program instruction 0 */
   mmio_regs::sifive_aon0_0::pmuwakeupi0<BASE_ADDR> pmuwakeupi0;
   
    /* Wakeup program instruction 1 */
   mmio_regs::sifive_aon0_0::pmuwakeupi1<BASE_ADDR> pmuwakeupi1;
   
    /* Wakeup program instruction 2 */
   mmio_regs::sifive_aon0_0::pmuwakeupi2<BASE_ADDR> pmuwakeupi2;
   
    /* Wakeup program instruction 3 */
   mmio_regs::sifive_aon0_0::pmuwakeupi3<BASE_ADDR> pmuwakeupi3;
   
    /* Wakeup program instruction 4 */
   mmio_regs::sifive_aon0_0::pmuwakeupi4<BASE_ADDR> pmuwakeupi4;
   
    /* Wakeup program instruction 5 */
   mmio_regs::sifive_aon0_0::pmuwakeupi5<BASE_ADDR> pmuwakeupi5;
   
    /* Wakeup program instruction 6 */
   mmio_regs::sifive_aon0_0::pmuwakeupi6<BASE_ADDR> pmuwakeupi6;
   
    /* Wakeup program instruction 7 */
   mmio_regs::sifive_aon0_0::pmuwakeupi7<BASE_ADDR> pmuwakeupi7;
   
    /* Sleep program instruction 0 */
   mmio_regs::sifive_aon0_0::pmusleepi0<BASE_ADDR> pmusleepi0;
   
    /* Sleep program instruction 1 */
   mmio_regs::sifive_aon0_0::pmusleepi1<BASE_ADDR> pmusleepi1;
   
    /* Sleep program instruction 2 */
   mmio_regs::sifive_aon0_0::pmusleepi2<BASE_ADDR> pmusleepi2;
   
    /* Sleep program instruction 3 */
   mmio_regs::sifive_aon0_0::pmusleepi3<BASE_ADDR> pmusleepi3;
   
    /* Sleep program instruction 4 */
   mmio_regs::sifive_aon0_0::pmusleepi4<BASE_ADDR> pmusleepi4;
   
    /* Sleep program instruction 5 */
   mmio_regs::sifive_aon0_0::pmusleepi5<BASE_ADDR> pmusleepi5;
   
    /* Sleep program instruction 6 */
   mmio_regs::sifive_aon0_0::pmusleepi6<BASE_ADDR> pmusleepi6;
   
    /* Sleep program instruction 7 */
   mmio_regs::sifive_aon0_0::pmusleepi7<BASE_ADDR> pmusleepi7;
   
    /* PMU Interrupt Enables */
   mmio_regs::sifive_aon0_0::pmuie<BASE_ADDR> pmuie;
   
    /* PMU Wakeup Cause */
   mmio_regs::sifive_aon0_0::pmucause<BASE_ADDR> pmucause;
   
    /* Initiate PMU Sleep Sequence */
   mmio_regs::sifive_aon0_0::pmusleep<BASE_ADDR> pmusleep;
   
    /* PMU Key. Reads as 1 when PMU is unlocked */
   mmio_regs::sifive_aon0_0::pmukey<BASE_ADDR> pmukey;
   
    /* AON Block Configuration Information */
   mmio_regs::sifive_aon0_0::aoncfg<BASE_ADDR> aoncfg;
   
    /* Ring Oscillator Configuration and Status */
   mmio_regs::sifive_aon0_0::lfrosccfg<BASE_ADDR> lfrosccfg;
   
    /* Low-Frequency Clock Mux Control and Status */
   mmio_regs::sifive_aon0_0::lfclkmux<BASE_ADDR> lfclkmux;
   
}; /* sifive_aon0_0_dev  */

#endif // SIFIVE_AON0_0_DEV_HPP