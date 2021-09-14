/*
   Register and field offset and size definitions for peripheral sifive_i2c0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_I2C0_0_MMIO_PARAMS_HPP
#define SIFIVE_I2C0_0_MMIO_PARAMS_HPP

#include <cstdint>

namespace mmio_param {
    /* From sifive,i2c0,control peripheral generator */
    namespace sifive_i2c0_0 {
       /* Clock Prescale register lo-byte */
       struct prescale_low_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* prescale_low_r */
       /* Clock Prescale register hi-byte */
       struct prescale_high_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x4;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* prescale_high_r */
       /* Control register */
       struct control_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x8;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* control_r */
       namespace control {
          /* I2C core enable bit */
          struct en_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 6;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40;
          };
          /* I2C core interrupt enable bit */
          struct ien_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 7;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80;
          };
       } /* control */
       /* Transmit and receive data byte register */
       struct transmit__receive_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xc;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* transmit__receive_r */
       /* Command write and status read register */
       struct command__status_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x10;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 8;
       }; /* command__status_r */
       namespace command__status {
          /* Clear interrupt and Interrupt pending */
          struct wr_iack__rd_if_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* Reserved and Transfer in progress */
          struct wr_res__rd_tip_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
          /* Reserved and Reserved */
          struct wr_res__rd_res_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 2;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x4;
          };
          /* Send ACK/NACK and Reserved */
          struct wr_ack__rd_res_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 3;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x8;
          };
          /* Transmit data and Reserved */
          struct wr_txd__rd_res_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 4;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x10;
          };
          /* Receive data and Arbitration lost */
          struct wr_rxd__rd_al_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 5;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x20;
          };
          /* Generate stop and I2C bus busy */
          struct wr_sto__rd_busy_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 6;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x40;
          };
          /* Generate start and Got ACK/NACK */
          struct wr_sta__rd_rxack_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 7;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80;
          };
       } /* command__status */
    }
}

#endif // SIFIVE_I2C0_0_DEV_HPP