/*
   Device base addresss and IRQ definitions for device sifive_hifive1_revb.
   Generated from SVD File: design.svd.
   SPDX-License-Identifier: Unlicense
*/
#ifndef SIFIVE_HIFIVE1_REVB_DEV_HPP
#define SIFIVE_HIFIVE1_REVB_DEV_HPP

#include <stdint.h>

namespace base_addr {

    namespace sifive_hifive1_revb {
           static constexpr uintptr_t            riscv_clint0_0 = 0x02000000;
           static constexpr uintptr_t             riscv_plic0_0 = 0x0c000000;
           static constexpr uintptr_t             sifive_aon0_0 = 0x10000000;
           static constexpr uintptr_t  sifive_fe310_g000_prci_0 = 0x10008000;
           static constexpr uintptr_t            sifive_gpio0_0 = 0x10012000;
           static constexpr uintptr_t            sifive_uart0_0 = 0x10013000;
           static constexpr uintptr_t             sifive_spi0_0 = 0x10014000;
           static constexpr uintptr_t             sifive_pwm0_0 = 0x10015000;
           static constexpr uintptr_t             sifive_i2c0_0 = 0x10016000;
           static constexpr uintptr_t            sifive_uart0_1 = 0x10023000;
           static constexpr uintptr_t             sifive_spi0_1 = 0x10024000;
           static constexpr uintptr_t             sifive_pwm0_1 = 0x10025000;
           static constexpr uintptr_t             sifive_spi0_2 = 0x10034000;
           static constexpr uintptr_t             sifive_pwm0_2 = 0x10035000;
    }

}

namespace irq {

    namespace sifive_hifive1_revb {
    }
}

#endif // SIFIVE_HIFIVE1_REVB_DEV_HPP