/*
   Register and field offset and size definitions for peripheral sifive_uart0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_UART0_0_MMIO_PARAMS_HPP
#define SIFIVE_UART0_0_MMIO_PARAMS_HPP

#include <cstdint>

namespace mmio_param {
    /* From sifive,uart0,control peripheral generator */
    namespace sifive_uart0_0 {
       /* Transmit data register */
       struct txdata_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* txdata_r */
       namespace txdata {
          /* Transmit data */
          struct data_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 8;
              static constexpr unsigned int bit_mask = 0xff;
          };
          /* Transmit FIFO full */
          struct full_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 31;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80000000;
          };
       } /* txdata */
       /* Receive data register */
       struct rxdata_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x4;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* rxdata_r */
       namespace rxdata {
          /* Received data */
          struct data_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 8;
              static constexpr unsigned int bit_mask = 0xff;
          };
          /* Receive FIFO empty */
          struct empty_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 31;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80000000;
          };
       } /* rxdata */
       /* Transmit control register */
       struct txctrl_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x8;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 3;
       }; /* txctrl_r */
       namespace txctrl {
          /* Transmit enable */
          struct txen_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* Number of stop bits */
          struct nstop_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
          /* Transmit watermark level */
          struct txcnt_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 16;
              static constexpr unsigned int bit_width = 3;
              static constexpr unsigned int bit_mask = 0x70000;
          };
       } /* txctrl */
       /* Receive control register */
       struct rxctrl_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xc;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* rxctrl_r */
       namespace rxctrl {
          /* Receive enable */
          struct rxen_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* Receive watermark level */
          struct rxcnt_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 16;
              static constexpr unsigned int bit_width = 3;
              static constexpr unsigned int bit_mask = 0x70000;
          };
       } /* rxctrl */
       /* UART interrupt enable */
       struct ie_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x10;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* ie_r */
       namespace ie {
          /* Transmit watermark interrupt enable */
          struct txwm_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* Receive watermark interrupt enable */
          struct rxwm_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
       } /* ie */
       /* UART interrupt pending */
       struct ip_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x14;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* ip_r */
       namespace ip {
          /* Transmit watermark interrupt pending */
          struct txwm_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* Receive watermark interrupt pending */
          struct rxwm_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
       } /* ip */
       /* Baud rate divisor */
       struct div_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x18;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* div_r */
       namespace div {
          /* Baud rate divisor. */
          struct div_f {
              using datatype = std::uint16_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 16;
              static constexpr unsigned int bit_mask = 0xffff;
          };
       } /* div */
    }
}

#endif // SIFIVE_UART0_0_DEV_HPP