/*
   Register class and field definition for peripheral sifive_i2c0_0.
   SPDX-License-Identifier: Unlicense
*/

#ifndef SIFIVE_I2C0_0_MMIO_REGS_HPP
#define SIFIVE_I2C0_0_MMIO_REGS_HPP

#include <cstdint>
#include "mmio_device.hpp"
#include "sifive_i2c0_0_mmio_param.hpp"

namespace mmio_regs {
    /* From sifive,i2c0,control peripheral generator */
    namespace sifive_i2c0_0 {
        /* Clock Prescale register lo-byte */
        template<const std::uintptr_t BASE_ADDR> class prescale_low 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_i2c0_0::prescale_low_r> {
        }; /* prescale_low */
        /* Clock Prescale register hi-byte */
        template<const std::uintptr_t BASE_ADDR> class prescale_high 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_i2c0_0::prescale_high_r> {
        }; /* prescale_high */
        /* Control register */
        template<const std::uintptr_t BASE_ADDR> class control 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_i2c0_0::control_r> {
            public:
            /* I2C core enable bit */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_i2c0_0::control_r,
                             mmio_param::sifive_i2c0_0::control::en_f> en;
            /* I2C core interrupt enable bit */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_i2c0_0::control_r,
                             mmio_param::sifive_i2c0_0::control::ien_f> ien;
        }; /* control */
        /* Transmit and receive data byte register */
        template<const std::uintptr_t BASE_ADDR> class transmit__receive 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_i2c0_0::transmit__receive_r> {
        }; /* transmit__receive */
        /* Command write and status read register */
        template<const std::uintptr_t BASE_ADDR> class command__status 
            : public mmio_device::reg<BASE_ADDR, 
                                mmio_param::sifive_i2c0_0::command__status_r> {
            public:
            /* Clear interrupt and Interrupt pending */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_i2c0_0::command__status_r,
                             mmio_param::sifive_i2c0_0::command__status::wr_iack__rd_if_f> wr_iack__rd_if;
            /* Reserved and Transfer in progress */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_i2c0_0::command__status_r,
                             mmio_param::sifive_i2c0_0::command__status::wr_res__rd_tip_f> wr_res__rd_tip;
            /* Reserved and Reserved */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_i2c0_0::command__status_r,
                             mmio_param::sifive_i2c0_0::command__status::wr_res__rd_res_f> wr_res__rd_res;
            /* Send ACK/NACK and Reserved */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_i2c0_0::command__status_r,
                             mmio_param::sifive_i2c0_0::command__status::wr_ack__rd_res_f> wr_ack__rd_res;
            /* Transmit data and Reserved */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_i2c0_0::command__status_r,
                             mmio_param::sifive_i2c0_0::command__status::wr_txd__rd_res_f> wr_txd__rd_res;
            /* Receive data and Arbitration lost */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_i2c0_0::command__status_r,
                             mmio_param::sifive_i2c0_0::command__status::wr_rxd__rd_al_f> wr_rxd__rd_al;
            /* Generate stop and I2C bus busy */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_i2c0_0::command__status_r,
                             mmio_param::sifive_i2c0_0::command__status::wr_sto__rd_busy_f> wr_sto__rd_busy;
            /* Generate start and Got ACK/NACK */
            mmio_device::reg_field<BASE_ADDR, 
                             mmio_param::sifive_i2c0_0::command__status_r,
                             mmio_param::sifive_i2c0_0::command__status::wr_sta__rd_rxack_f> wr_sta__rd_rxack;
        }; /* command__status */
    } /* sifive_i2c0_0 */
} /* mmio_regs */

#endif // SIFIVE_I2C0_0_DEV_HPP