/*
   Register class and field definition for peripheral riscv_plic0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef RISCV_PLIC0_0_MMIO_REGS_HPP
#define RISCV_PLIC0_0_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "riscv_plic0_0_mmio_param.hpp"

namespace mmio_regs {
    /* From riscv,plic0,control peripheral generator */
    namespace riscv_plic0_0 {
        /* PRIORITY Register for interrupt id 1 */
        template<const std::uintptr_t BASE_ADDR> class priority 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::riscv_plic0_0::priority_r> {
        }; /* priority */
        /* PENDING Register for interrupt ids 31 to 0 */
        template<const std::uintptr_t BASE_ADDR> class pending 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::riscv_plic0_0::pending_r> {
        }; /* pending */
        /* ENABLE Register for interrupt ids 31 to 0 for hart 0 */
        template<const std::uintptr_t BASE_ADDR> class enable_0_0 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::riscv_plic0_0::enable_0_0_r> {
        }; /* enable_0_0 */
        /* ENABLE Register for interrupt ids 52 to 32 for hart 0 */
        template<const std::uintptr_t BASE_ADDR> class enable_1_0 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::riscv_plic0_0::enable_1_0_r> {
        }; /* enable_1_0 */
        /* PRIORITY THRESHOLD Register for hart 0 */
        template<const std::uintptr_t BASE_ADDR> class threshold_0 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::riscv_plic0_0::threshold_0_r> {
        }; /* threshold_0 */
        /* CLAIM and COMPLETE Register for hart 0 */
        template<const std::uintptr_t BASE_ADDR> class claimplete_0 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::riscv_plic0_0::claimplete_0_r> {
        }; /* claimplete_0 */
    } /* riscv_plic0_0 */
} /* mmio_regs */

#endif // RISCV_PLIC0_0_DEV_HPP