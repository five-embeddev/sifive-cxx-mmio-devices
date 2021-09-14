/*
   Simple test program to instanciate and access each device to test compilation.
   SPDX-License-Identifier: Unlicense
*/

#include "sifive_hifive1_revb.hpp"
#include "riscv_clint0_0_mmio_dev.hpp"
#include "riscv_plic0_0_mmio_dev.hpp"
#include "sifive_aon0_0_mmio_dev.hpp"
#include "sifive_fe310_g000_prci_0_mmio_dev.hpp"
#include "sifive_gpio0_0_mmio_dev.hpp"
#include "sifive_uart0_0_mmio_dev.hpp"
#include "sifive_spi0_0_mmio_dev.hpp"
#include "sifive_pwm0_0_mmio_dev.hpp"
#include "sifive_i2c0_0_mmio_dev.hpp"
#include "sifive_uart0_1_mmio_dev.hpp"
#include "sifive_spi0_1_mmio_dev.hpp"
#include "sifive_pwm0_1_mmio_dev.hpp"
#include "sifive_spi0_2_mmio_dev.hpp"
#include "sifive_pwm0_2_mmio_dev.hpp"


int main(void) {
    // Instanciate each peripheral class
   riscv_clint0_0_dev<base_addr::sifive_hifive1_revb::riscv_clint0_0> riscv_clint0_0_i;
   riscv_plic0_0_dev<base_addr::sifive_hifive1_revb::riscv_plic0_0> riscv_plic0_0_i;
   sifive_aon0_0_dev<base_addr::sifive_hifive1_revb::sifive_aon0_0> sifive_aon0_0_i;
   sifive_fe310_g000_prci_0_dev<base_addr::sifive_hifive1_revb::sifive_fe310_g000_prci_0> sifive_fe310_g000_prci_0_i;
   sifive_gpio0_0_dev<base_addr::sifive_hifive1_revb::sifive_gpio0_0> sifive_gpio0_0_i;
   sifive_uart0_0_dev<base_addr::sifive_hifive1_revb::sifive_uart0_0> sifive_uart0_0_i;
   sifive_spi0_0_dev<base_addr::sifive_hifive1_revb::sifive_spi0_0> sifive_spi0_0_i;
   sifive_pwm0_0_dev<base_addr::sifive_hifive1_revb::sifive_pwm0_0> sifive_pwm0_0_i;
   sifive_i2c0_0_dev<base_addr::sifive_hifive1_revb::sifive_i2c0_0> sifive_i2c0_0_i;
   sifive_uart0_1_dev<base_addr::sifive_hifive1_revb::sifive_uart0_1> sifive_uart0_1_i;
   sifive_spi0_1_dev<base_addr::sifive_hifive1_revb::sifive_spi0_1> sifive_spi0_1_i;
   sifive_pwm0_1_dev<base_addr::sifive_hifive1_revb::sifive_pwm0_1> sifive_pwm0_1_i;
   sifive_spi0_2_dev<base_addr::sifive_hifive1_revb::sifive_spi0_2> sifive_spi0_2_i;
   sifive_pwm0_2_dev<base_addr::sifive_hifive1_revb::sifive_pwm0_2> sifive_pwm0_2_i;
    // Read and write one register from each peripheral.

    // Peripheral: riscv_clint0_0
   // Register: msip_0
   riscv_clint0_0_i.msip_0.write(1);
   auto riscv_clint0_0_msip_0_v = riscv_clint0_0_i.msip_0.read();
   

    // Peripheral: riscv_plic0_0
   // Register: priority
   riscv_plic0_0_i.priority[0].write(1);
   auto riscv_plic0_0_priority_v = riscv_plic0_0_i.priority[0].read();
   

    // Peripheral: sifive_aon0_0
   // Register: backup
   sifive_aon0_0_i.backup[0].write(1);
   auto sifive_aon0_0_backup_v = sifive_aon0_0_i.backup[0].read();
   

    // Peripheral: sifive_fe310_g000_prci_0
   // Register: hfrosccfg
   sifive_fe310_g000_prci_0_i.hfrosccfg.write(1);
   auto sifive_fe310_g000_prci_0_hfrosccfg_v = sifive_fe310_g000_prci_0_i.hfrosccfg.read();
   
   // Field : hfroscdiv
   sifive_fe310_g000_prci_0_i.hfrosccfg.hfroscdiv.write(1);
   auto sifive_fe310_g000_prci_0_hfrosccfg_hfroscdiv_v = sifive_fe310_g000_prci_0_i.hfrosccfg.hfroscdiv.read();

    // Peripheral: sifive_gpio0_0
   // Register: input_val
   sifive_gpio0_0_i.input_val.write(1);
   auto sifive_gpio0_0_input_val_v = sifive_gpio0_0_i.input_val.read();
   

    // Peripheral: sifive_uart0_0
   // Register: txdata
   sifive_uart0_0_i.txdata.write(1);
   auto sifive_uart0_0_txdata_v = sifive_uart0_0_i.txdata.read();
   
   // Field : data
   sifive_uart0_0_i.txdata.data.write(1);
   auto sifive_uart0_0_txdata_data_v = sifive_uart0_0_i.txdata.data.read();

    // Peripheral: sifive_spi0_0
   // Register: sckdiv
   sifive_spi0_0_i.sckdiv.write(1);
   auto sifive_spi0_0_sckdiv_v = sifive_spi0_0_i.sckdiv.read();
   
   // Field : div
   sifive_spi0_0_i.sckdiv.div.write(1);
   auto sifive_spi0_0_sckdiv_div_v = sifive_spi0_0_i.sckdiv.div.read();

    // Peripheral: sifive_pwm0_0
   // Register: pwmcfg
   sifive_pwm0_0_i.pwmcfg.write(1);
   auto sifive_pwm0_0_pwmcfg_v = sifive_pwm0_0_i.pwmcfg.read();
   
   // Field : pwmscale
   sifive_pwm0_0_i.pwmcfg.pwmscale.write(1);
   auto sifive_pwm0_0_pwmcfg_pwmscale_v = sifive_pwm0_0_i.pwmcfg.pwmscale.read();

    // Peripheral: sifive_i2c0_0
   // Register: prescale_low
   sifive_i2c0_0_i.prescale_low.write(1);
   auto sifive_i2c0_0_prescale_low_v = sifive_i2c0_0_i.prescale_low.read();
   

    // Peripheral: sifive_uart0_1
   // Register: txdata
   sifive_uart0_1_i.txdata.write(1);
   auto sifive_uart0_1_txdata_v = sifive_uart0_1_i.txdata.read();
   
   // Field : data
   sifive_uart0_1_i.txdata.data.write(1);
   auto sifive_uart0_1_txdata_data_v = sifive_uart0_1_i.txdata.data.read();

    // Peripheral: sifive_spi0_1
   // Register: sckdiv
   sifive_spi0_1_i.sckdiv.write(1);
   auto sifive_spi0_1_sckdiv_v = sifive_spi0_1_i.sckdiv.read();
   
   // Field : div
   sifive_spi0_1_i.sckdiv.div.write(1);
   auto sifive_spi0_1_sckdiv_div_v = sifive_spi0_1_i.sckdiv.div.read();

    // Peripheral: sifive_pwm0_1
   // Register: pwmcfg
   sifive_pwm0_1_i.pwmcfg.write(1);
   auto sifive_pwm0_1_pwmcfg_v = sifive_pwm0_1_i.pwmcfg.read();
   
   // Field : pwmscale
   sifive_pwm0_1_i.pwmcfg.pwmscale.write(1);
   auto sifive_pwm0_1_pwmcfg_pwmscale_v = sifive_pwm0_1_i.pwmcfg.pwmscale.read();

    // Peripheral: sifive_spi0_2
   // Register: sckdiv
   sifive_spi0_2_i.sckdiv.write(1);
   auto sifive_spi0_2_sckdiv_v = sifive_spi0_2_i.sckdiv.read();
   
   // Field : div
   sifive_spi0_2_i.sckdiv.div.write(1);
   auto sifive_spi0_2_sckdiv_div_v = sifive_spi0_2_i.sckdiv.div.read();

    // Peripheral: sifive_pwm0_2
   // Register: pwmcfg
   sifive_pwm0_2_i.pwmcfg.write(1);
   auto sifive_pwm0_2_pwmcfg_v = sifive_pwm0_2_i.pwmcfg.read();
   
   // Field : pwmscale
   sifive_pwm0_2_i.pwmcfg.pwmscale.write(1);
   auto sifive_pwm0_2_pwmcfg_pwmscale_v = sifive_pwm0_2_i.pwmcfg.pwmscale.read();

}