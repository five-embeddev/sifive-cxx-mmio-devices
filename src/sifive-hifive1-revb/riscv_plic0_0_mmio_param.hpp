/*
   Register and field offset and size definitions for peripheral riscv_plic0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef RISCV_PLIC0_0_MMIO_PARAMS_HPP
#define RISCV_PLIC0_0_MMIO_PARAMS_HPP

#include <cstdint>

namespace mmio_param {
    /* From riscv,plic0,control peripheral generator */
    namespace riscv_plic0_0 {
       /* PRIORITY Register for interrupt id 1 */
       struct priority_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x4;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* priority_r */
       /* PENDING Register for interrupt ids 31 to 0 */
       struct pending_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x1000;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* pending_r */
       /* ENABLE Register for interrupt ids 31 to 0 for hart 0 */
       struct enable_0_0_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x2000;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* enable_0_0_r */
       /* ENABLE Register for interrupt ids 52 to 32 for hart 0 */
       struct enable_1_0_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x2004;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* enable_1_0_r */
       /* PRIORITY THRESHOLD Register for hart 0 */
       struct threshold_0_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x200000;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* threshold_0_r */
       /* CLAIM and COMPLETE Register for hart 0 */
       struct claimplete_0_r {
           using datatype = std::uint32_t;
           static constexpr unsigned int offset = 0x200004;
           static constexpr unsigned int bit_width = 32;
           static constexpr unsigned int field_count = 0;
       }; /* claimplete_0_r */
    }
}

#endif // RISCV_PLIC0_0_DEV_HPP