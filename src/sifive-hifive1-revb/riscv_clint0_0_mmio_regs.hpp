/*
   Register class and field definition for peripheral riscv_clint0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef RISCV_CLINT0_0_MMIO_REGS_HPP
#define RISCV_CLINT0_0_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "riscv_clint0_0_mmio_param.hpp"

namespace mmio_regs {
    /* From riscv,clint0,control peripheral generator */
    namespace riscv_clint0_0 {
        /* MSIP Register for hart 0 */
        template<const std::uintptr_t BASE_ADDR> class msip_0 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::riscv_clint0_0::msip_0_r> {
        }; /* msip_0 */
        /* MTIMECMP Register for hart 0 */
        template<const std::uintptr_t BASE_ADDR> class mtimecmp_0 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::riscv_clint0_0::mtimecmp_0_r> {
        }; /* mtimecmp_0 */
        /* MTIME Register */
        template<const std::uintptr_t BASE_ADDR> class mtime 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::riscv_clint0_0::mtime_r> {
        }; /* mtime */
    } /* riscv_clint0_0 */
} /* mmio_regs */

#endif // RISCV_CLINT0_0_DEV_HPP