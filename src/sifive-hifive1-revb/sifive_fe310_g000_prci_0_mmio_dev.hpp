/*
   Register structure definition of peripheral sifive_fe310_g000_prci_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_FE310_G000_PRCI_0_MMIO_DEV_HPP
#define SIFIVE_FE310_G000_PRCI_0_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "sifive_fe310_g000_prci_0_mmio_regs.hpp"

/*   From sifive,fe310-g000,prci,mem peripheral generator */
template<std::uintptr_t BASE_ADDR> class sifive_fe310_g000_prci_0_dev  {
public:
    /* Ring Oscillator Configuration and Status */
   mmio_regs::sifive_fe310_g000_prci_0::hfrosccfg<BASE_ADDR> hfrosccfg;
   
    /* Crystal Oscillator Configuration and Status */
   mmio_regs::sifive_fe310_g000_prci_0::hfxosccfg<BASE_ADDR> hfxosccfg;
   
    /* PLL Configuration and Status */
   mmio_regs::sifive_fe310_g000_prci_0::pllcfg<BASE_ADDR> pllcfg;
   
    /* PLL Final Divide Configuration */
   mmio_regs::sifive_fe310_g000_prci_0::plloutdiv<BASE_ADDR> plloutdiv;
   
    /* Process Monitor Configuration and Status */
   mmio_regs::sifive_fe310_g000_prci_0::procmoncfg<BASE_ADDR> procmoncfg;
   
}; /* sifive_fe310_g000_prci_0_dev  */

#endif // SIFIVE_FE310_G000_PRCI_0_DEV_HPP