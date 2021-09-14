/*
   Register class and field definition for peripheral sifive_uart0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_UART0_0_MMIO_REGS_HPP
#define SIFIVE_UART0_0_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "sifive_uart0_0_mmio_param.hpp"

namespace mmio_regs {
    /* From sifive,uart0,control peripheral generator */
    namespace sifive_uart0_0 {
        /* Transmit data register */
        template<const std::uintptr_t BASE_ADDR> class txdata 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_uart0_0::txdata_r> {
            public:
            /* Transmit data */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_uart0_0::txdata_r,
                             mmio_param::sifive_uart0_0::txdata::data_f> data;
            /* Transmit FIFO full */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_uart0_0::txdata_r,
                             mmio_param::sifive_uart0_0::txdata::full_f> full;
        }; /* txdata */
        /* Receive data register */
        template<const std::uintptr_t BASE_ADDR> class rxdata 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_uart0_0::rxdata_r> {
            public:
            /* Received data */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_uart0_0::rxdata_r,
                             mmio_param::sifive_uart0_0::rxdata::data_f> data;
            /* Receive FIFO empty */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_uart0_0::rxdata_r,
                             mmio_param::sifive_uart0_0::rxdata::empty_f> empty;
        }; /* rxdata */
        /* Transmit control register */
        template<const std::uintptr_t BASE_ADDR> class txctrl 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_uart0_0::txctrl_r> {
            public:
            /* Transmit enable */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_uart0_0::txctrl_r,
                             mmio_param::sifive_uart0_0::txctrl::txen_f> txen;
            /* Number of stop bits */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_uart0_0::txctrl_r,
                             mmio_param::sifive_uart0_0::txctrl::nstop_f> nstop;
            /* Transmit watermark level */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_uart0_0::txctrl_r,
                             mmio_param::sifive_uart0_0::txctrl::txcnt_f> txcnt;
        }; /* txctrl */
        /* Receive control register */
        template<const std::uintptr_t BASE_ADDR> class rxctrl 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_uart0_0::rxctrl_r> {
            public:
            /* Receive enable */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_uart0_0::rxctrl_r,
                             mmio_param::sifive_uart0_0::rxctrl::rxen_f> rxen;
            /* Receive watermark level */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_uart0_0::rxctrl_r,
                             mmio_param::sifive_uart0_0::rxctrl::rxcnt_f> rxcnt;
        }; /* rxctrl */
        /* UART interrupt enable */
        template<const std::uintptr_t BASE_ADDR> class ie 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_uart0_0::ie_r> {
            public:
            /* Transmit watermark interrupt enable */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_uart0_0::ie_r,
                             mmio_param::sifive_uart0_0::ie::txwm_f> txwm;
            /* Receive watermark interrupt enable */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_uart0_0::ie_r,
                             mmio_param::sifive_uart0_0::ie::rxwm_f> rxwm;
        }; /* ie */
        /* UART interrupt pending */
        template<const std::uintptr_t BASE_ADDR> class ip 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_uart0_0::ip_r> {
            public:
            /* Transmit watermark interrupt pending */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_uart0_0::ip_r,
                             mmio_param::sifive_uart0_0::ip::txwm_f> txwm;
            /* Receive watermark interrupt pending */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_uart0_0::ip_r,
                             mmio_param::sifive_uart0_0::ip::rxwm_f> rxwm;
        }; /* ip */
        /* Baud rate divisor */
        template<const std::uintptr_t BASE_ADDR> class div 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_uart0_0::div_r> {
            public:
            /* Baud rate divisor. */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_uart0_0::div_r,
                             mmio_param::sifive_uart0_0::div::div_f> div;
        }; /* div */
    } /* sifive_uart0_0 */
} /* mmio_regs */

#endif // SIFIVE_UART0_0_DEV_HPP