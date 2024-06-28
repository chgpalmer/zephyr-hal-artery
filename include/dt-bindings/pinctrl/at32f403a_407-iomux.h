#include "at32-iomux.h"

#define IOMUX_MAKE_VALUE_REG_0x04 0
#define IOMUX_MAKE_VALUE_REG_0x1C 1
#define IOMUX_MAKE_VALUE_REG_0x20 2
#define IOMUX_MAKE_VALUE_REG_0x24 3
#define IOMUX_MAKE_VALUE_REG_0x28 4
#define IOMUX_MAKE_VALUE_REG_0x2C 5
#define IOMUX_MAKE_VALUE_REG_0x30 6
#define IOMUX_MAKE_VALUE_REG_0x34 7

#define IOMUX_MAKE_VALUE(reg_offset, bit_addr, bit_num, bit_val) \
	AT32_REMAP(IOMUX_MAKE_VALUE_REG_##reg_offset, bit_addr, bit_num, bit_val)


/** @defgroup IOMUX_map3_definition
  * @brief iomux map3 definitions
  * @{
  */

#define TMR9_GMUX IOMUX_MAKE_VALUE(0x20, 0, 4, 0x01) /*!< tmr9_ch1(pe5),  tmr9_ch2(pe6) */

/**
  * @}
  */

/** @defgroup IOMUX_map4_definition
  * @brief iomux map4 definitions
  * @{
  */

#define TMR1_GMUX_0001 IOMUX_MAKE_VALUE(0x24, 0, 4, 0x01)   /*!< tmr1_ext(pa12), tmr1_ch1(pa8), tmr1_ch2(pa9), tmr1_ch3(pa10), tmr1_ch4(pa11), tmr1_brkin(pa6), tmr1_ch1c(pa7), tmr1_ch2c(pb0), tmr1_ch3c(pb1) */
#define TMR1_GMUX_0011 IOMUX_MAKE_VALUE(0x24, 0, 4, 0x03)   /*!< tmr1_ext(pe7),  tmr1_ch1(pe9), tmr1_ch2(pe11), tmr1_ch3(pe13), tmr1_ch4(pe14), tmr1_brkin(pe15), tmr1_ch1c(pe8), tmr1_ch2c(pe10), tmr1_ch3c(pe12) */
#define TMR2_GMUX_01 IOMUX_MAKE_VALUE(0x24, 4, 2, 0x01)     /*!< tmr2_ch1_ext(pa15), tmr2_ch2(pb3), tmr2_ch3(pa2),  tmr2_ch4(pa3) */
#define TMR2_GMUX_10 IOMUX_MAKE_VALUE(0x24, 4, 2, 0x02)     /*!< tmr2_ch1_ext(pa0),  tmr2_ch2(pa1), tmr2_ch3(pb10), tmr2_ch4(pb11) */
#define TMR2_GMUX_11 IOMUX_MAKE_VALUE(0x24, 4, 2, 0x03)     /*!< tmr2_ch1_ext(pa15), tmr2_ch2(pb3), tmr2_ch3(pb10), tmr2_ch4(pb11) */
#define TMR2ITR1_GMUX_10 IOMUX_MAKE_VALUE(0x24, 6, 2, 0x02) /*!< ethernet ptp as input to tmr2_int.1 */
#define TMR2ITR1_GMUX_11 IOMUX_MAKE_VALUE(0x24, 6, 2, 0x03) /*!< usbdev sof as input to tmr2_int.1 */
#define TMR3_GMUX_0010 IOMUX_MAKE_VALUE(0x24, 8, 4, 0x02)   /*!< tmr3_ch1(pb4),  tmr3_ch2(pb5),  tmr3_ch3(pb0),  tmr3_ch4(pb1) */
#define TMR3_GMUX_0011 IOMUX_MAKE_VALUE(0x24, 8, 4, 0x03)   /*!< tmr3_ch1(pc6),  tmr3_ch2(pc7),  tmr3_ch3(pc8),  tmr3_ch4(pc9) */
#define TMR4_GMUX_0001 IOMUX_MAKE_VALUE(0x24, 12, 4, 0x01)  /*!< tmr4_ch1(pd12), tmr4_ch2(pd13), tmr4_ch3(pd14), tmr4_ch4(pd15) */
#define TMR5CH4_GMUX IOMUX_MAKE_VALUE(0x24, 19, 1, 0x01)    /*!< lick connected to tmr5_ch4 input capture for calibration */

/**
  * @}
  */

/** @defgroup IOMUX_map5_definition
  * @brief iomux map5 definitions
  * @{
  */

#define UART5_GMUX_0000 IOMUX_MAKE_VALUE(0x28, 0, 4, 0x00) /*!< uart5_tx(pc12), uart5_rx(pd2) */
#define UART5_GMUX_0001 IOMUX_MAKE_VALUE(0x28, 0, 4, 0x01) /*!< uart5_tx(pb9), uart5_rx(pb8) */
#define I2C1_GMUX_0000 IOMUX_MAKE_VALUE(0x28, 4, 4, 0x00)  /*!< i2c1_scl(pb8), i2c1_sda(pb9) */
#define I2C1_GMUX_0001 IOMUX_MAKE_VALUE(0x28, 4, 4, 0x01)  /*!< i2c1_scl(pb8), i2c1_sda(pb9) */
#define I2C3_GMUX_0001 IOMUX_MAKE_VALUE(0x28, 12, 4, 0x01) /*!< i2c3_scl(pa8), i2c3_sda(pb4) */
#define SPI1_GMUX_0000 IOMUX_MAKE_VALUE(0x28, 16, 4, 0x00) /*!< spi1_cs/i2s1_ws(pa15), spi1_sck/i2s1_ck(pb3), spi1_miso(pb4), spi1_mosi/i2s1_sd(pb5), i2s1_mck(pb0) */
#define SPI1_GMUX_0001 IOMUX_MAKE_VALUE(0x28, 16, 4, 0x01) /*!< spi1_cs/i2s1_ws(pa15), spi1_sck/i2s1_ck(pb3), spi1_miso(pb4), spi1_mosi/i2s1_sd(pb5), i2s1_mck(pb0) */
#define SPI1_GMUX_0010 IOMUX_MAKE_VALUE(0x28, 16, 4, 0x02) /*!< spi1_cs/i2s1_ws(pa4),  spi1_sck/i2s1_ck(pa5), spi1_miso(pa6), spi1_mosi/i2s1_sd(pa7), i2s1_mck(pb6) */
#define SPI1_GMUX_0011 IOMUX_MAKE_VALUE(0x28, 16, 4, 0x03) /*!< spi1_cs/i2s1_ws(pa15), spi1_sck/i2s1_ck(pb3), spi1_miso(pb4), spi1_mosi/i2s1_sd(pb5), i2s1_mck(pb6) */
#define SPI2_GMUX_0000 IOMUX_MAKE_VALUE(0x28, 20, 4, 0x00) /*!< i2s2_mck(pa3) */
#define SPI2_GMUX_0001 IOMUX_MAKE_VALUE(0x28, 20, 4, 0x01) /*!< i2s2_mck(pa3) */
#define SPI2_GMUX_0010 IOMUX_MAKE_VALUE(0x28, 20, 4, 0x02) /*!< i2s2_mck(pa6) */
#define SPI3_GMUX_0001 IOMUX_MAKE_VALUE(0x28, 24, 4, 0x01) /*!< spi3_cs/i2s3_ws(pa4),  spi3_sck/i2s3_ck(pc10), spi3_miso(pc11), spi3_mosi/i2s3_sd(pc12), i2s3_mck(pc7) */
#define SPI3_GMUX_0010 IOMUX_MAKE_VALUE(0x28, 24, 4, 0x02) /*!< spi3_cs/i2s3_ws(pa15), spi3_sck/i2s3_ck(pb3),  spi3_miso(pb4),  spi3_mosi/i2s3_sd(pb5),  i2s3_mck(pb10) */
#define SPI3_GMUX_0011 IOMUX_MAKE_VALUE(0x28, 24, 4, 0x03) /*!< spi3_cs/i2s3_ws(pa4),  spi3_sck/i2s3_ck(pc10), spi3_miso(pc11), spi3_mosi/i2s3_sd(pc12), i2s3_mck(pb10) */
#define SPI4_GMUX_0001 IOMUX_MAKE_VALUE(0x28, 28, 4, 0x01) /*!< spi4_cs/i2s4_ws(pe12), spi4_sck/i2s4_ck(pe11), spi4_miso(pe13), spi4_mosi/i2s4_sd(pe14), i2s4_mck(pc8) */
#define SPI4_GMUX_0010 IOMUX_MAKE_VALUE(0x28, 28, 4, 0x02) /*!< spi4_cs/i2s4_ws(pb6),  spi4_sck/i2s4_ck(pb7),  spi4_miso(pb8),  spi4_mosi/i2s4_sd(pb9),  i2s4_mck(pc8) */
#define SPI4_GMUX_0011 IOMUX_MAKE_VALUE(0x28, 28, 4, 0x03) /*!< spi4_cs/i2s4_ws(pb6),  spi4_sck/i2s4_ck(pb7),  spi4_miso(pb8),  spi4_mosi/i2s4_sd(pb9),  i2s4_mck(pa10) */

/**
  * @}
  */

/** @defgroup IOMUX_map6_definition
  * @brief iomux map6 definitions
  * @{
  */

#define CAN1_GMUX_0010 IOMUX_MAKE_VALUE(0x2C, 0, 4, 0x02)    /*!< can_rx(pb8),   can_tx(pb9) */
#define CAN1_GMUX_0011 IOMUX_MAKE_VALUE(0x2C, 0, 4, 0x03)    /*!< can_rx(pd0),   can_tx(pd1) */
#define CAN2_GMUX_0001 IOMUX_MAKE_VALUE(0x2C, 4, 4, 0x01)    /*!< can2_rx(pb5),  can2_tx(pb6) */
#define SDIO2_GMUX_0001 IOMUX_MAKE_VALUE(0x2C, 12, 4, 0x01)  /*!< sdio2_ck(pc4), sdio2_cmd(pc5), sdio2_d0(pa4), sdio2_d1(pa5), sdio2_d2(pa6), sdio2_d3(pa7) */
#define SDIO2_GMUX_0010 IOMUX_MAKE_VALUE(0x2C, 12, 4, 0x02)  /*!< sdio2_ck(pa2), sdio2_cmd(pa3), sdio2_d0(pc0), sdio2_d1(pc1), sdio2_d2(pc2), sdio2_d3(pc3), sdio2_d4(pa4), sdio2_d5(pa5), sdio2_d6(pa6), sdio2_d7(pa7) */
#define SDIO2_GMUX_0011 IOMUX_MAKE_VALUE(0x2C, 12, 4, 0x03)  /*!< sdio2_ck(pa2), sdio2_cmd(pa3), sdio2_d0(pa4), sdio2_d1(pa5), sdio2_d2(pa6), sdio2_d3(pa7) */
#define USART1_GMUX_0000 IOMUX_MAKE_VALUE(0x2C, 16, 4, 0x00) /*!< usart1_tx(pa9),  usart1_rx(pa10) */
#define USART1_GMUX_0001 IOMUX_MAKE_VALUE(0x2C, 16, 4, 0x01) /*!< usart1_tx(pb6),  usart1_rx(pb7) */
#define USART2_GMUX_0000 IOMUX_MAKE_VALUE(0x2C, 20, 4, 0x00) /*!< usart1_tx(pa9),  usart1_rx(pa10) */
#define USART2_GMUX_0001 IOMUX_MAKE_VALUE(0x2C, 20, 4, 0x01) /*!< usart2_tx(pd5),  usart2_rx(pd6),  usart2_ck(pd7),  usart2_cts(pd3),  usart2_rts(pd4) */
#define USART3_GMUX_0000 IOMUX_MAKE_VALUE(0x2C, 24, 4, 0x00) /*!< usart3_tx(pc10), usart3_rx(pc11), usart3_ck(pc12), usart3_cts(pb13), usart3_rts(pb14) */
#define USART3_GMUX_0001 IOMUX_MAKE_VALUE(0x2C, 24, 4, 0x01) /*!< usart3_tx(pc10), usart3_rx(pc11), usart3_ck(pc12), usart3_cts(pb13), usart3_rts(pb14) */
#define USART3_GMUX_0011 IOMUX_MAKE_VALUE(0x2C, 24, 4, 0x03) /*!< usart3_tx(pd8),  usart3_rx(pd9),  usart3_ck(pd10), usart3_cts(pd11), usart3_rts(pd12) */
#define UART4_GMUX_0000 IOMUX_MAKE_VALUE(0x2C, 28, 4, 0x00)  /*!< uart4_tx(pa0),   uart4_rx(pa1) */
#define UART4_GMUX_0010 IOMUX_MAKE_VALUE(0x2C, 28, 4, 0x02)  /*!< uart4_tx(pa0),   uart4_rx(pa1) */


/**
  * @}
  */

/** @defgroup IOMUX_map7_definition
  * @brief iomux map7 definitions
  * @{
  */

#define EXT_SPIM_GMUX_1000 IOMUX_MAKE_VALUE(0x30, 0, 4, 0x08) /*!< spim_sck(pb1), spim_cs(pa8), spim_io0(pa11), spim_io1(pa12), spim_io2(pb7), spim_sio3(pb6) */
#define EXT_SPIM_GMUX_1001 IOMUX_MAKE_VALUE(0x30, 0, 4, 0x09) /*!< spim_sck(pb1), spim_cs(pa8), spim_io0(pb10), spim_io1(pb11), spim_io2(pb7), spim_sio3(pb6) */
#define ADC1_ETP_GMUX IOMUX_MAKE_VALUE(0x30, 4, 1, 0x01)      /*!< adc1 external trigger preempted conversion muxing */
#define ADC1_ETO_GMUX IOMUX_MAKE_VALUE(0x30, 5, 1, 0x01)      /*!< adc1 external trigger ordinary conversion muxing */
#define ADC2_ETP_GMUX IOMUX_MAKE_VALUE(0x30, 8, 1, 0x01)      /*!< adc2 external trigger preempted conversion muxing */
#define ADC2_ETO_GMUX IOMUX_MAKE_VALUE(0x30, 9, 1, 0x01)      /*!< adc2 external trigger ordinary conversion muxing */
#define SWJTAG_GMUX_001 IOMUX_MAKE_VALUE(0x30, 16, 3, 0x01)   /*!< full swj enabled  (jtag-dp  +  sw-dp)  but without jtrst */
#define SWJTAG_GMUX_010 IOMUX_MAKE_VALUE(0x30, 16, 3, 0x02)   /*!< jtag-dp disabled and sw-dp enabled */
#define SWJTAG_GMUX_100 IOMUX_MAKE_VALUE(0x30, 16, 3, 0x04)   /*!< full swj disabled  (jtag-dp  +  sw-dp) */
#define PD01_GMUX IOMUX_MAKE_VALUE(0x30, 20, 1, 0x01)         /*!< pd0/pd1 mapping on osc_in/osc_out */
#define XMC_GMUX_001 IOMUX_MAKE_VALUE(0x30, 24, 3, 0x01)      /*!< xmc_nwe(pd2), xmc_d0(pb14), xmc_d1(pc6), xmc_d2(pc11), xmc_d3(pc12), xmc_d4(pa2), xmc_d5(pa3), xmc_d6(pa4), xmc_d7(pa5), xmc_d13(pb12), xmc_noe(pc5) */
#define XMC_GMUX_010 IOMUX_MAKE_VALUE(0x30, 24, 3, 0x02)      /*!< xmc_nwe(pc2), xmc_d0(pb14), xmc_d1(pc6), xmc_d2(pc11), xmc_d3(pc12), xmc_d4(pa2), xmc_d5(pa3), xmc_d6(pa4), xmc_d7(pa5), xmc_d13(pb12), xmc_noe(pc5) */
#define XMC_NADV_GMUX IOMUX_MAKE_VALUE(0x30, 27, 1, 0x01)     /*!< xmc_nadv not used */

/**
  * @}
  */

/** @defgroup IOMUX_map8_definition
  * @brief iomux map8 definitions
  * @{
  */

#if defined(AT32F407xx)
#define EMAC_GMUX_01 IOMUX_MAKE_VALUE(0x34, 16, 2, 0x01)      /*!< rx_dv/crs_dv(pd8), rxd0(pd9), rxd1(pd10), rxd2(pd11), rxd3(pd12) */
#define MII_RMII_SEL_GMUX IOMUX_MAKE_VALUE(0x34, 18, 1, 0x01) /*!< mii or rmii selection */
#define PTP_PPS_GMUX IOMUX_MAKE_VALUE(0x34, 19, 1, 0x01)      /*!< ethernet ptp pps mux function remapping */
#endif
#define USART6_GMUX_0000 IOMUX_MAKE_VALUE(0x34, 20, 4, 0x00) /*!< usart6_tx(pa4), usart6_rx(pa5) */
#define USART6_GMUX_0001 IOMUX_MAKE_VALUE(0x34, 20, 4, 0x01) /*!< usart6_tx(pa4), usart6_rx(pa5) */
#define UART7_GMUX_0000 IOMUX_MAKE_VALUE(0x34, 24, 4, 0x00)  /*!< uart7_tx(pb4),  uart7_rx(pb3) */
#define UART7_GMUX_0001 IOMUX_MAKE_VALUE(0x34, 24, 4, 0x01)  /*!< uart7_tx(pb4),  uart7_rx(pb3) */
#define UART8_GMUX_0000 IOMUX_MAKE_VALUE(0x34, 28, 4, 0x00)  /*!< uart8_tx(pc2),  uart8_rx(pc3) */
#define UART8_GMUX_0001 IOMUX_MAKE_VALUE(0x34, 28, 4, 0x01)  /*!< uart8_tx(pc2),  uart8_rx(pc3) */


