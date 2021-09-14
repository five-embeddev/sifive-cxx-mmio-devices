/*
   Register structure definition of peripheral riscv_clint0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef RISCV_CLINT0_0_MMIO_DEV_HPP
#define RISCV_CLINT0_0_MMIO_DEV_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "riscv_clint0_0_mmio_regs.hpp"

/*   From riscv,clint0,control peripheral generator */
template<std::uintptr_t BASE_ADDR> class riscv_clint0_0_dev  {
public:
    /* MSIP Register for hart 0 */
   mmio_regs::riscv_clint0_0::msip_0<BASE_ADDR> msip_0;
   
    /* MTIMECMP Register for hart 0 */
   mmio_regs::riscv_clint0_0::mtimecmp_0<BASE_ADDR> mtimecmp_0;
   
    /* MTIME Register */
   mmio_regs::riscv_clint0_0::mtime<BASE_ADDR> mtime;
   
}; /* riscv_clint0_0_dev  */

#endif // RISCV_CLINT0_0_DEV_HPP