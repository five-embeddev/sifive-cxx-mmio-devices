/*
   Register structure definition of peripheral sifive_spi0_2.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_SPI0_2_MMIO_DEV_HPP
#define SIFIVE_SPI0_2_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "sifive_spi0_2_mmio_regs.hpp"

/*   From sifive,spi0,control peripheral generator */
template<std::uintptr_t BASE_ADDR> class sifive_spi0_2_dev  {
public:
    /* Serial clock divisor */
   mmio_regs::sifive_spi0_2::sckdiv<BASE_ADDR> sckdiv;
   
    /* Serial clock mode */
   mmio_regs::sifive_spi0_2::sckmode<BASE_ADDR> sckmode;
   
    /* Chip select ID */
   mmio_regs::sifive_spi0_2::csid<BASE_ADDR> csid;
   
    /* Chip select default */
   mmio_regs::sifive_spi0_2::csdef<BASE_ADDR> csdef;
   
    /* Chip select mode */
   mmio_regs::sifive_spi0_2::csmode<BASE_ADDR> csmode;
   
    /* Delay control 0 */
   mmio_regs::sifive_spi0_2::delay0<BASE_ADDR> delay0;
   
    /* Delay control 1 */
   mmio_regs::sifive_spi0_2::delay1<BASE_ADDR> delay1;
   
    /* SPI extra sampling delay to increase the SPI frequency */
   mmio_regs::sifive_spi0_2::extradel<BASE_ADDR> extradel;
   
    /* Number of delay stages from slave to the SPI controller */
   mmio_regs::sifive_spi0_2::sampledel<BASE_ADDR> sampledel;
   
    /* Frame format */
   mmio_regs::sifive_spi0_2::fmt<BASE_ADDR> fmt;
   
    /* Tx FIFO Data */
   mmio_regs::sifive_spi0_2::txdata<BASE_ADDR> txdata;
   
    /* Rx FIFO data */
   mmio_regs::sifive_spi0_2::rxdata<BASE_ADDR> rxdata;
   
    /* Tx FIFO watermark */
   mmio_regs::sifive_spi0_2::txmark<BASE_ADDR> txmark;
   
    /* Rx FIFO watermark */
   mmio_regs::sifive_spi0_2::rxmark<BASE_ADDR> rxmark;
   
    /* SPI flash interface control */
   mmio_regs::sifive_spi0_2::fctrl<BASE_ADDR> fctrl;
   
    /* SPI flash instruction format */
   mmio_regs::sifive_spi0_2::ffmt<BASE_ADDR> ffmt;
   
    /* SPI interrupt enable */
   mmio_regs::sifive_spi0_2::ie<BASE_ADDR> ie;
   
    /* SPI interrupt pending */
   mmio_regs::sifive_spi0_2::ip<BASE_ADDR> ip;
   
}; /* sifive_spi0_2_dev  */

#endif // SIFIVE_SPI0_2_DEV_HPP