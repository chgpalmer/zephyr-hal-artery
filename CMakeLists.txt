if(CONFIG_HAS_AT32_HAL)

string(TOUPPER ${CONFIG_SOC} at32_soc_uc)

set(at32_soc_dir     ${ZEPHYR_HAL_ARTERY_MODULE_DIR}/${CONFIG_SOC_SERIES})
set(at32_soc_sys_dir   ${at32_soc_dir}/cmsis/device_support)

set(at32_std_dir     ${at32_soc_dir}/drivers)
set(at32_std_src_dir ${at32_std_dir}/src)

zephyr_library_named(hal_artery)

zephyr_compile_definitions(${at32_soc_uc})

# The header files of Arterytek firmware are reference HXTAL_VALUE.
# The HXTAL_VALUE has the possibility of being referenced from any files
# via that header files.
# Therefore, we need to define HXTAL_VALUE for all compilations.
if(${CONFIG_AT32_HXTAL_8MHZ})
  zephyr_compile_definitions(HEXT_VALUE=8000000)
elseif(${CONFIG_AT32_HXTAL_25MHZ})
  zephyr_compile_definitions(HEXT_VALUE=25000000)
endif()

if(CONFIG_AT32_HAS_IRC_32K)
  zephyr_compile_definitions(IRC32K_VALUE=${CONFIG_AT32_LOW_SPEED_IRC_FREQUENCY})
endif()

if(CONFIG_AT32_HAS_IRC_40K)
  zephyr_compile_definitions(IRC40K_VALUE=${CONFIG_AT32_LOW_SPEED_IRC_FREQUENCY})
endif()

# Global includes to be used outside hal_arterytek
zephyr_include_directories(${at32_soc_sys_dir})
zephyr_include_directories(${at32_std_dir}/inc)
zephyr_include_directories(${ZEPHYR_HAL_ARTERY_MODULE_DIR}/include)
zephyr_include_directories(${ZEPHYR_HAL_ARTERY_MODULE_DIR}/common_include)

zephyr_library_sources(${at32_soc_sys_dir}/system_${CONFIG_SOC_SERIES}.c)

zephyr_library_sources_ifdef(CONFIG_USE_AT32_ACC      ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_acc.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_ADC      ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_adc.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_BPR      ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_bpr.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_CAN      ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_can.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_CRC      ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_crc.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_CRM      ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_crm.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_DAC      ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_dac.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_DEBUG    ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_debug.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_DMA      ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_dma.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_EMAC     ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_emac.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_EXINT    ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_exint.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_FLASH    ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_flash.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_GPIO     ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_gpio.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_I2C      ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_i2c.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_MISC     ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_misc.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_PWC      ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_pwc.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_RTC      ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_rtc.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_SDIO     ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_sdio.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_SPI      ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_spi.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_TMR      ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_tmr.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_USART    ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_usart.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_USB      ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_usb.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_WDT      ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_wdt.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_WWDT     ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_wwdt.c)
zephyr_library_sources_ifdef(CONFIG_USE_AT32_XMC      ${at32_std_src_dir}/${CONFIG_SOC_SERIES}_xmc.c)

endif()
