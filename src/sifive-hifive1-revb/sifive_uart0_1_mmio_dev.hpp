/*
   Register structure definition of peripheral sifive_uart0_1.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_UART0_1_MMIO_DEV_HPP
#define SIFIVE_UART0_1_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "sifive_uart0_1_mmio_regs.hpp"

/*   From sifive,uart0,control peripheral generator */
template<std::uintptr_t BASE_ADDR> class sifive_uart0_1_dev  {
public:
    /* Transmit data register */
   mmio_regs::sifive_uart0_1::txdata<BASE_ADDR> txdata;
   
    /* Receive data register */
   mmio_regs::sifive_uart0_1::rxdata<BASE_ADDR> rxdata;
   
    /* Transmit control register */
   mmio_regs::sifive_uart0_1::txctrl<BASE_ADDR> txctrl;
   
    /* Receive control register */
   mmio_regs::sifive_uart0_1::rxctrl<BASE_ADDR> rxctrl;
   
    /* UART interrupt enable */
   mmio_regs::sifive_uart0_1::ie<BASE_ADDR> ie;
   
    /* UART interrupt pending */
   mmio_regs::sifive_uart0_1::ip<BASE_ADDR> ip;
   
    /* Baud rate divisor */
   mmio_regs::sifive_uart0_1::div<BASE_ADDR> div;
   
}; /* sifive_uart0_1_dev  */

#endif // SIFIVE_UART0_1_DEV_HPP