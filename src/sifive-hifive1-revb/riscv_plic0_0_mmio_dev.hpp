/*
   Register structure definition of peripheral riscv_plic0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef RISCV_PLIC0_0_MMIO_DEV_HPP
#define RISCV_PLIC0_0_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "riscv_plic0_0_mmio_regs.hpp"

/*   From riscv,plic0,control peripheral generator */
template<std::uintptr_t BASE_ADDR> class riscv_plic0_0_dev  {
public:
    /* PRIORITY Register for interrupt id 1 */
   mmio_regs::riscv_plic0_0::priority<BASE_ADDR> priority[53];
   
    /* PENDING Register for interrupt ids 31 to 0 */
   mmio_regs::riscv_plic0_0::pending<BASE_ADDR> pending[2];
   
    /* ENABLE Register for interrupt ids 31 to 0 for hart 0 */
   mmio_regs::riscv_plic0_0::enable_0_0<BASE_ADDR> enable_0_0;
   
    /* ENABLE Register for interrupt ids 52 to 32 for hart 0 */
   mmio_regs::riscv_plic0_0::enable_1_0<BASE_ADDR> enable_1_0;
   
    /* PRIORITY THRESHOLD Register for hart 0 */
   mmio_regs::riscv_plic0_0::threshold_0<BASE_ADDR> threshold_0;
   
    /* CLAIM and COMPLETE Register for hart 0 */
   mmio_regs::riscv_plic0_0::claimplete_0<BASE_ADDR> claimplete_0;
   
}; /* riscv_plic0_0_dev  */

#endif // RISCV_PLIC0_0_DEV_HPP