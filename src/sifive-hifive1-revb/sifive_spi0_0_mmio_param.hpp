/*
   Register and field offset and size definitions for peripheral sifive_spi0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_SPI0_0_MMIO_PARAMS_HPP
#define SIFIVE_SPI0_0_MMIO_PARAMS_HPP

#include <cstdint>

namespace mmio_param {
    /* From sifive,spi0,control peripheral generator */
    namespace sifive_spi0_0 {
       /* Serial clock divisor */
       struct sckdiv_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* sckdiv_r */
       namespace sckdiv {
          /* Divisor for serial clock. */
          struct div_f {
              using datatype = std::uint16_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 12;
              static constexpr unsigned int bit_mask = 0xfff;
          };
       } /* sckdiv */
       /* Serial clock mode */
       struct sckmode_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x4;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* sckmode_r */
       namespace sckmode {
          /* Serial clock phase */
          struct pha_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* Serial clock polarity */
          struct pol_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
       } /* sckmode */
       /* Chip select ID */
       struct csid_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x10;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* csid_r */
       namespace csid {
          /* Chip select ID. */
          struct csid_f {
              using datatype = std::uint32_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 32;
              static constexpr unsigned int bit_mask = 0xffffffff;
          };
       } /* csid */
       /* Chip select default */
       struct csdef_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x14;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* csdef_r */
       namespace csdef {
          /* Chip select default value. Reset to all-1s. */
          struct csdef_f {
              using datatype = std::uint32_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 32;
              static constexpr unsigned int bit_mask = 0xffffffff;
          };
       } /* csdef */
       /* Chip select mode */
       struct csmode_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x18;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* csmode_r */
       namespace csmode {
          /* Chip select mode */
          struct mode_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 2;
              static constexpr unsigned int bit_mask = 0x3;
          };
       } /* csmode */
       /* Delay control 0 */
       struct delay0_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x28;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* delay0_r */
       namespace delay0 {
          /* CS to SCK Delay */
          struct cssck_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 8;
              static constexpr unsigned int bit_mask = 0xff;
          };
          /* SCK to CS Delay */
          struct sckcs_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 16;
              static constexpr unsigned int bit_width = 8;
              static constexpr unsigned int bit_mask = 0xff0000;
          };
       } /* delay0 */
       /* Delay control 1 */
       struct delay1_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x2c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* delay1_r */
       namespace delay1 {
          /* Minimum CS inactive time */
          struct intercs_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 8;
              static constexpr unsigned int bit_mask = 0xff;
          };
          /* Maximum interframe delay */
          struct interxfr_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 16;
              static constexpr unsigned int bit_width = 8;
              static constexpr unsigned int bit_mask = 0xff0000;
          };
       } /* delay1 */
       /* SPI extra sampling delay to increase the SPI frequency */
       struct extradel_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x38;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* extradel_r */
       namespace extradel {
          /* Coarse grain sample delay (multiples of system clocks) */
          struct coarse_f {
              using datatype = std::uint16_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 12;
              static constexpr unsigned int bit_mask = 0xfff;
          };
          /* Fine grain sample delay (multiples of process-specific buffer delay) */
          struct fine_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 12;
              static constexpr unsigned int bit_width = 5;
              static constexpr unsigned int bit_mask = 0x1f000;
          };
       } /* extradel */
       /* Number of delay stages from slave to the SPI controller */
       struct sampledel_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x3c;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* sampledel_r */
       namespace sampledel {
          /* Number of delay stages from slave to SPI controller */
          struct sd_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 5;
              static constexpr unsigned int bit_mask = 0x1f;
          };
       } /* sampledel */
       /* Frame format */
       struct fmt_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x40;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 4;
       }; /* fmt_r */
       namespace fmt {
          /* SPI protocol */
          struct proto_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 2;
              static constexpr unsigned int bit_mask = 0x3;
          };
          /* SPI endianness */
          struct endian_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 2;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x4;
          };
          /* SPI I/O direction. This is reset to 1 for flash-enabled SPI controllers, 0 otherwise. */
          struct dir_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 3;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x8;
          };
          /* Number of bits per frame */
          struct len_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 16;
              static constexpr unsigned int bit_width = 4;
              static constexpr unsigned int bit_mask = 0xf0000;
          };
       } /* fmt */
       /* Tx FIFO Data */
       struct txdata_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x48;
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
          /* FIFO full flag */
          struct full_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 31;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80000000;
          };
       } /* txdata */
       /* Rx FIFO data */
       struct rxdata_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x4c;
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
          /* FIFO empty flag */
          struct empty_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 31;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x80000000;
          };
       } /* rxdata */
       /* Tx FIFO watermark */
       struct txmark_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x50;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* txmark_r */
       namespace txmark {
          /* Transmit watermark. The reset value is 1 for flash-enabled controllers, 0 otherwise. */
          struct txmark_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 3;
              static constexpr unsigned int bit_mask = 0x7;
          };
       } /* txmark */
       /* Rx FIFO watermark */
       struct rxmark_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x54;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* rxmark_r */
       namespace rxmark {
          /* Receive watermark */
          struct rxmark_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 3;
              static constexpr unsigned int bit_mask = 0x7;
          };
       } /* rxmark */
       /* SPI flash interface control */
       struct fctrl_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x60;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 1;
       }; /* fctrl_r */
       namespace fctrl {
          /* SPI Flash Mode Select */
          struct en_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
       } /* fctrl */
       /* SPI flash instruction format */
       struct ffmt_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x64;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 8;
       }; /* ffmt_r */
       namespace ffmt {
          /* Enable sending of command */
          struct cmd_en_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* Number of address bytes (0 to 4) */
          struct addr_len_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 3;
              static constexpr unsigned int bit_mask = 0xe;
          };
          /* Number of dummy cycles */
          struct pad_cnt_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 4;
              static constexpr unsigned int bit_width = 4;
              static constexpr unsigned int bit_mask = 0xf0;
          };
          /* Protocol for transmitting command */
          struct cmd_proto_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 8;
              static constexpr unsigned int bit_width = 2;
              static constexpr unsigned int bit_mask = 0x300;
          };
          /* Protocol for transmitting address and padding */
          struct addr_proto_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 10;
              static constexpr unsigned int bit_width = 2;
              static constexpr unsigned int bit_mask = 0xc00;
          };
          /* Protocol for receiving data bytes */
          struct data_proto_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 12;
              static constexpr unsigned int bit_width = 2;
              static constexpr unsigned int bit_mask = 0x3000;
          };
          /* Value of command byte */
          struct cmd_code_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 16;
              static constexpr unsigned int bit_width = 8;
              static constexpr unsigned int bit_mask = 0xff0000;
          };
          /* First 8 bits to transmit during dummy cycles */
          struct pad_code_f {
              using datatype = std::uint8_t;
              static constexpr unsigned int bit_offset = 24;
              static constexpr unsigned int bit_width = 8;
              static constexpr unsigned int bit_mask = 0xff000000;
          };
       } /* ffmt */
       /* SPI interrupt enable */
       struct ie_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x70;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* ie_r */
       namespace ie {
          /* Transmit watermark enable */
          struct txwm_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* Receive watermark enable */
          struct rxwm_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
       } /* ie */
       /* SPI interrupt pending */
       struct ip_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x74;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 2;
       }; /* ip_r */
       namespace ip {
          /* Transmit watermark pending */
          struct txwm_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 0;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x1;
          };
          /* Receive watermark pending */
          struct rxwm_f {
              using datatype = bool;
              static constexpr unsigned int bit_offset = 1;
              static constexpr unsigned int bit_width = 1;
              static constexpr unsigned int bit_mask = 0x2;
          };
       } /* ip */
    }
}

#endif // SIFIVE_SPI0_0_DEV_HPP