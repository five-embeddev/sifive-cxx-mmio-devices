/*
   Register and field offset and size definitions for peripheral riscv_clint0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef RISCV_CLINT0_0_MMIO_PARAMS_HPP
#define RISCV_CLINT0_0_MMIO_PARAMS_HPP

#include <cstdint>

namespace mmio_param {
    /* From riscv,clint0,control peripheral generator */
    namespace riscv_clint0_0 {
       /* MSIP Register for hart 0 */
       struct msip_0_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x0;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* msip_0_r */
       /* MTIMECMP Register for hart 0 */
       struct mtimecmp_0_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x4000;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* mtimecmp_0_r */
       /* MTIME Register */
       struct mtime_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0xbff8;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* mtime_r */
    }
}

#endif // RISCV_CLINT0_0_DEV_HPP