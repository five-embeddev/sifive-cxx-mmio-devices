/*
   Register class and field definition for peripheral sifive_spi0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_SPI0_0_MMIO_REGS_HPP
#define SIFIVE_SPI0_0_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "sifive_spi0_0_mmio_param.hpp"

namespace mmio_regs {
    /* From sifive,spi0,control peripheral generator */
    namespace sifive_spi0_0 {
        /* Serial clock divisor */
        template<const std::uintptr_t BASE_ADDR> class sckdiv 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::sckdiv_r> {
            public:
            /* Divisor for serial clock. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::sckdiv_r,
                             mmio_param::sifive_spi0_0::sckdiv::div_f> div;
        }; /* sckdiv */
        /* Serial clock mode */
        template<const std::uintptr_t BASE_ADDR> class sckmode 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::sckmode_r> {
            public:
            /* Serial clock phase */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::sckmode_r,
                             mmio_param::sifive_spi0_0::sckmode::pha_f> pha;
            /* Serial clock polarity */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::sckmode_r,
                             mmio_param::sifive_spi0_0::sckmode::pol_f> pol;
        }; /* sckmode */
        /* Chip select ID */
        template<const std::uintptr_t BASE_ADDR> class csid 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::csid_r> {
            public:
            /* Chip select ID. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::csid_r,
                             mmio_param::sifive_spi0_0::csid::csid_f> csid;
        }; /* csid */
        /* Chip select default */
        template<const std::uintptr_t BASE_ADDR> class csdef 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::csdef_r> {
            public:
            /* Chip select default value. Reset to all-1s. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::csdef_r,
                             mmio_param::sifive_spi0_0::csdef::csdef_f> csdef;
        }; /* csdef */
        /* Chip select mode */
        template<const std::uintptr_t BASE_ADDR> class csmode 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::csmode_r> {
            public:
            /* Chip select mode */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::csmode_r,
                             mmio_param::sifive_spi0_0::csmode::mode_f> mode;
        }; /* csmode */
        /* Delay control 0 */
        template<const std::uintptr_t BASE_ADDR> class delay0 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::delay0_r> {
            public:
            /* CS to SCK Delay */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::delay0_r,
                             mmio_param::sifive_spi0_0::delay0::cssck_f> cssck;
            /* SCK to CS Delay */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::delay0_r,
                             mmio_param::sifive_spi0_0::delay0::sckcs_f> sckcs;
        }; /* delay0 */
        /* Delay control 1 */
        template<const std::uintptr_t BASE_ADDR> class delay1 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::delay1_r> {
            public:
            /* Minimum CS inactive time */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::delay1_r,
                             mmio_param::sifive_spi0_0::delay1::intercs_f> intercs;
            /* Maximum interframe delay */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::delay1_r,
                             mmio_param::sifive_spi0_0::delay1::interxfr_f> interxfr;
        }; /* delay1 */
        /* SPI extra sampling delay to increase the SPI frequency */
        template<const std::uintptr_t BASE_ADDR> class extradel 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::extradel_r> {
            public:
            /* Coarse grain sample delay (multiples of system clocks) */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::extradel_r,
                             mmio_param::sifive_spi0_0::extradel::coarse_f> coarse;
            /* Fine grain sample delay (multiples of process-specific buffer delay) */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::extradel_r,
                             mmio_param::sifive_spi0_0::extradel::fine_f> fine;
        }; /* extradel */
        /* Number of delay stages from slave to the SPI controller */
        template<const std::uintptr_t BASE_ADDR> class sampledel 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::sampledel_r> {
            public:
            /* Number of delay stages from slave to SPI controller */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::sampledel_r,
                             mmio_param::sifive_spi0_0::sampledel::sd_f> sd;
        }; /* sampledel */
        /* Frame format */
        template<const std::uintptr_t BASE_ADDR> class fmt 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::fmt_r> {
            public:
            /* SPI protocol */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::fmt_r,
                             mmio_param::sifive_spi0_0::fmt::proto_f> proto;
            /* SPI endianness */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::fmt_r,
                             mmio_param::sifive_spi0_0::fmt::endian_f> endian;
            /* SPI I/O direction. This is reset to 1 for flash-enabled SPI controllers, 0 otherwise. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::fmt_r,
                             mmio_param::sifive_spi0_0::fmt::dir_f> dir;
            /* Number of bits per frame */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::fmt_r,
                             mmio_param::sifive_spi0_0::fmt::len_f> len;
        }; /* fmt */
        /* Tx FIFO Data */
        template<const std::uintptr_t BASE_ADDR> class txdata 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::txdata_r> {
            public:
            /* Transmit data */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::txdata_r,
                             mmio_param::sifive_spi0_0::txdata::data_f> data;
            /* FIFO full flag */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::txdata_r,
                             mmio_param::sifive_spi0_0::txdata::full_f> full;
        }; /* txdata */
        /* Rx FIFO data */
        template<const std::uintptr_t BASE_ADDR> class rxdata 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::rxdata_r> {
            public:
            /* Received data */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::rxdata_r,
                             mmio_param::sifive_spi0_0::rxdata::data_f> data;
            /* FIFO empty flag */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::rxdata_r,
                             mmio_param::sifive_spi0_0::rxdata::empty_f> empty;
        }; /* rxdata */
        /* Tx FIFO watermark */
        template<const std::uintptr_t BASE_ADDR> class txmark 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::txmark_r> {
            public:
            /* Transmit watermark. The reset value is 1 for flash-enabled controllers, 0 otherwise. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::txmark_r,
                             mmio_param::sifive_spi0_0::txmark::txmark_f> txmark;
        }; /* txmark */
        /* Rx FIFO watermark */
        template<const std::uintptr_t BASE_ADDR> class rxmark 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::rxmark_r> {
            public:
            /* Receive watermark */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::rxmark_r,
                             mmio_param::sifive_spi0_0::rxmark::rxmark_f> rxmark;
        }; /* rxmark */
        /* SPI flash interface control */
        template<const std::uintptr_t BASE_ADDR> class fctrl 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::fctrl_r> {
            public:
            /* SPI Flash Mode Select */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::fctrl_r,
                             mmio_param::sifive_spi0_0::fctrl::en_f> en;
        }; /* fctrl */
        /* SPI flash instruction format */
        template<const std::uintptr_t BASE_ADDR> class ffmt 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::ffmt_r> {
            public:
            /* Enable sending of command */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::ffmt_r,
                             mmio_param::sifive_spi0_0::ffmt::cmd_en_f> cmd_en;
            /* Number of address bytes (0 to 4) */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::ffmt_r,
                             mmio_param::sifive_spi0_0::ffmt::addr_len_f> addr_len;
            /* Number of dummy cycles */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::ffmt_r,
                             mmio_param::sifive_spi0_0::ffmt::pad_cnt_f> pad_cnt;
            /* Protocol for transmitting command */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::ffmt_r,
                             mmio_param::sifive_spi0_0::ffmt::cmd_proto_f> cmd_proto;
            /* Protocol for transmitting address and padding */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::ffmt_r,
                             mmio_param::sifive_spi0_0::ffmt::addr_proto_f> addr_proto;
            /* Protocol for receiving data bytes */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::ffmt_r,
                             mmio_param::sifive_spi0_0::ffmt::data_proto_f> data_proto;
            /* Value of command byte */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::ffmt_r,
                             mmio_param::sifive_spi0_0::ffmt::cmd_code_f> cmd_code;
            /* First 8 bits to transmit during dummy cycles */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::ffmt_r,
                             mmio_param::sifive_spi0_0::ffmt::pad_code_f> pad_code;
        }; /* ffmt */
        /* SPI interrupt enable */
        template<const std::uintptr_t BASE_ADDR> class ie 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::ie_r> {
            public:
            /* Transmit watermark enable */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::ie_r,
                             mmio_param::sifive_spi0_0::ie::txwm_f> txwm;
            /* Receive watermark enable */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::ie_r,
                             mmio_param::sifive_spi0_0::ie::rxwm_f> rxwm;
        }; /* ie */
        /* SPI interrupt pending */
        template<const std::uintptr_t BASE_ADDR> class ip 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_spi0_0::ip_r> {
            public:
            /* Transmit watermark pending */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::ip_r,
                             mmio_param::sifive_spi0_0::ip::txwm_f> txwm;
            /* Receive watermark pending */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_spi0_0::ip_r,
                             mmio_param::sifive_spi0_0::ip::rxwm_f> rxwm;
        }; /* ip */
    } /* sifive_spi0_0 */
} /* mmio_regs */

#endif // SIFIVE_SPI0_0_DEV_HPP