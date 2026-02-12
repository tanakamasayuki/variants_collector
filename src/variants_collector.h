#pragma once
#include <stdint.h>

namespace variants_collector
{
  namespace esp32
  {
    namespace esp32
    {
      namespace airm2m_core_esp32c3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:AirM2M_CORE_ESP32C3";
          static inline constexpr const char *name = "AirM2M_CORE_ESP32C3";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t led_builtin_aux = 13;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t builtin_led = 12;
        };
      } // namespace airm2m_core_esp32c3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace bee_data_logger
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:Bee_Data_Logger";
          static inline constexpr const char *name = "Bee Data Logger";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33116;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sdo = 35;
          static inline constexpr uint8_t sdi = 37;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t a7 = 7;
          static inline constexpr uint8_t a8 = 8;
          static inline constexpr uint8_t a9 = 9;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 4;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 6;
          static inline constexpr uint8_t d7 = 7;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d38 = 38;
          static inline constexpr uint8_t d39 = 39;
          static inline constexpr uint8_t d41 = 41;
          static inline constexpr uint8_t d42 = 42;
          static inline constexpr uint8_t d43 = 43;
          static inline constexpr uint8_t d44 = 44;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t boot_btn = 0;
          static inline constexpr uint8_t vbat_voltage = 1;
          static inline constexpr uint8_t vbus_sense = 2;
          static inline constexpr uint8_t ldo2 = 34;
          static inline constexpr uint8_t rgb_data = 40;
          static inline constexpr uint8_t rgb_pwr = 34;
          static inline constexpr const char *usb_manufacturer = "Smart Bee Designs";
          static inline constexpr const char *usb_product = "Bee Data Logger";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 1;
          static inline constexpr uint8_t pin_rgb_led = 40;
          static inline constexpr uint8_t builtin_led = 89;
          static inline constexpr uint8_t rgb_builtin = 89;
        };
      } // namespace bee_data_logger
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace bee_motion
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:Bee_Motion";
          static inline constexpr const char *name = "Bee Motion";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33037;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sdo = 35;
          static inline constexpr uint8_t sdi = 37;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t boot_btn = 0;
          static inline constexpr uint8_t pir = 5;
          static inline constexpr const char *usb_manufacturer = "Smart Bee Designs";
          static inline constexpr const char *usb_product = "Bee Motion S3";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace bee_motion
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace bee_motion_mini
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:Bee_Motion_Mini";
          static inline constexpr const char *name = "Bee Motion Mini";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t boot_btn = 9;
          static inline constexpr uint8_t pir = 5;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
        };
      } // namespace bee_motion_mini
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace bee_motion_s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:Bee_Motion_S3";
          static inline constexpr const char *name = "Bee Motion S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33043;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sdo = 35;
          static inline constexpr uint8_t sdi = 37;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t a7 = 7;
          static inline constexpr uint8_t a8 = 8;
          static inline constexpr uint8_t a9 = 9;
          static inline constexpr uint8_t a10 = 10;
          static inline constexpr uint8_t a11 = 11;
          static inline constexpr uint8_t a12 = 12;
          static inline constexpr uint8_t a13 = 13;
          static inline constexpr uint8_t a14 = 14;
          static inline constexpr uint8_t a15 = 15;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 6;
          static inline constexpr uint8_t d7 = 7;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d10 = 10;
          static inline constexpr uint8_t d11 = 11;
          static inline constexpr uint8_t d12 = 12;
          static inline constexpr uint8_t d14 = 14;
          static inline constexpr uint8_t d15 = 15;
          static inline constexpr uint8_t d16 = 16;
          static inline constexpr uint8_t d17 = 17;
          static inline constexpr uint8_t d35 = 35;
          static inline constexpr uint8_t d36 = 36;
          static inline constexpr uint8_t d37 = 37;
          static inline constexpr uint8_t d43 = 43;
          static inline constexpr uint8_t d44 = 44;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t boot_btn = 0;
          static inline constexpr uint8_t vbat_voltage = 1;
          static inline constexpr uint8_t vbus_sense = 2;
          static inline constexpr uint8_t pir = 4;
          static inline constexpr uint8_t light = 3;
          static inline constexpr uint8_t ldo2 = 34;
          static inline constexpr uint8_t rgb_data = 40;
          static inline constexpr uint8_t rgb_pwr = 34;
          static inline constexpr const char *usb_manufacturer = "Smart Bee Designs";
          static inline constexpr const char *usb_product = "Bee Motion S3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 1;
          static inline constexpr uint8_t pin_rgb_led = 40;
          static inline constexpr uint8_t builtin_led = 89;
          static inline constexpr uint8_t rgb_builtin = 89;
        };
      } // namespace bee_motion_s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace bee_s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:Bee_S3";
          static inline constexpr const char *name = "Bee S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33040;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sdo = 35;
          static inline constexpr uint8_t sdi = 38;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t a7 = 7;
          static inline constexpr uint8_t a8 = 8;
          static inline constexpr uint8_t a9 = 9;
          static inline constexpr uint8_t a10 = 10;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 4;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 6;
          static inline constexpr uint8_t d7 = 7;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d10 = 10;
          static inline constexpr uint8_t d35 = 35;
          static inline constexpr uint8_t d36 = 36;
          static inline constexpr uint8_t d37 = 37;
          static inline constexpr uint8_t d38 = 38;
          static inline constexpr uint8_t d39 = 39;
          static inline constexpr uint8_t d43 = 43;
          static inline constexpr uint8_t d44 = 44;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t vbat_voltage = 1;
          static inline constexpr uint8_t rgb_data = 48;
          static inline constexpr uint8_t rgb_pwr = 34;
          static inline constexpr const char *usb_manufacturer = "Smart Bee Designs";
          static inline constexpr const char *usb_product = "BeeS3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 1;
          static inline constexpr uint8_t pin_rgb_led = 48;
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
        };
      } // namespace bee_s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace bharatpi_a7672s_4g
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:BharatPi-A7672S-4G";
          static inline constexpr const char *name = "BharatPi A7672S 4G Module";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t a1 = 13;
          static inline constexpr uint8_t a2 = 12;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 2;
          static inline constexpr uint8_t a5 = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t tx_4g = 17;
          static inline constexpr uint8_t rx_4g = 16;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace bharatpi_a7672s_4g
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace bharatpi_lora
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:BharatPi-LoRa";
          static inline constexpr const char *name = "BharatPi LoRa Module";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t a1 = 13;
          static inline constexpr uint8_t a2 = 12;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 2;
          static inline constexpr uint8_t a5 = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t tx2 = 17;
          static inline constexpr uint8_t rx2 = 16;
          static inline constexpr uint8_t lora_ss = 4;
          static inline constexpr uint8_t rst = 14;
          static inline constexpr uint8_t dio0 = 2;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace bharatpi_lora
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace bharatpi_node_wifi
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:BharatPi-Node-Wifi";
          static inline constexpr const char *name = "BharatPi Node Wifi Module";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t saffron_led = 12;
          static inline constexpr uint8_t white_led = 2;
          static inline constexpr uint8_t green_led = 13;
          static inline constexpr uint8_t a1 = 13;
          static inline constexpr uint8_t a2 = 12;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 2;
          static inline constexpr uint8_t a5 = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t tx2 = 17;
          static inline constexpr uint8_t rx2 = 16;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace bharatpi_node_wifi
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace coreesp32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:CoreESP32";
          static inline constexpr const char *name = "Microduino-CoreESP32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t mtdo = 15;
          static inline constexpr uint8_t mtdi = 12;
          static inline constexpr uint8_t mtms = 14;
          static inline constexpr uint8_t mtck = 13;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t wire1_pin_defined = 1;
          static inline constexpr uint8_t sda1 = 12;
          static inline constexpr uint8_t scl1 = 13;
          static inline constexpr uint8_t a1 = 13;
          static inline constexpr uint8_t a2 = 15;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a6 = 38;
          static inline constexpr uint8_t a7 = 37;
          static inline constexpr uint8_t a8 = 32;
          static inline constexpr uint8_t a9 = 33;
          static inline constexpr uint8_t a10 = 25;
          static inline constexpr uint8_t a11 = 26;
          static inline constexpr uint8_t a12 = 27;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t d0 = 3;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 16;
          static inline constexpr uint8_t d3 = 17;
          static inline constexpr uint8_t d4 = 32;
          static inline constexpr uint8_t d5 = 33;
          static inline constexpr uint8_t d6 = 25;
          static inline constexpr uint8_t d7 = 26;
          static inline constexpr uint8_t d8 = 27;
          static inline constexpr uint8_t d9 = 14;
          static inline constexpr uint8_t d10 = 5;
          static inline constexpr uint8_t d11 = 23;
          static inline constexpr uint8_t d12 = 19;
          static inline constexpr uint8_t d13 = 18;
          static inline constexpr uint8_t d14 = 12;
          static inline constexpr uint8_t d15 = 13;
          static inline constexpr uint8_t d16 = 15;
          static inline constexpr uint8_t d17 = 4;
          static inline constexpr uint8_t d18 = 22;
          static inline constexpr uint8_t d19 = 21;
          static inline constexpr uint8_t d20 = 38;
          static inline constexpr uint8_t d21 = 37;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr int builtin_led = -1;
        };
      } // namespace coreesp32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace et_board
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:ET-Board";
          static inline constexpr const char *name = "ET-Board";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 34;
          static inline constexpr uint8_t rx = 35;
          static inline constexpr uint8_t a1 = 39;
          static inline constexpr uint8_t a2 = 32;
          static inline constexpr uint8_t a3 = 33;
          static inline constexpr uint8_t a4 = 34;
          static inline constexpr uint8_t a5 = 35;
          static inline constexpr uint8_t a6 = 25;
          static inline constexpr uint8_t a7 = 26;
          static inline constexpr uint8_t d2 = 27;
          static inline constexpr uint8_t d3 = 14;
          static inline constexpr uint8_t d4 = 12;
          static inline constexpr uint8_t d5 = 13;
          static inline constexpr uint8_t d6 = 15;
          static inline constexpr uint8_t d7 = 16;
          static inline constexpr uint8_t d8 = 17;
          static inline constexpr uint8_t d9 = 4;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 5;
        };
      } // namespace et_board
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace edgebox_esp_100
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:Edgebox-ESP-100";
          static inline constexpr const char *name = "Edgebox-ESP-100";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t txd = 43;
          static inline constexpr uint8_t rxd = 44;
          static inline constexpr uint8_t rst = 0;
          static inline constexpr uint8_t i2c_int = 9;
          static inline constexpr uint8_t eth_int = 14;
          static inline constexpr uint8_t eth_rst = 15;
          static inline constexpr uint8_t lte_pwr_en = 16;
          static inline constexpr uint8_t lte_pwr_key = 21;
          static inline constexpr uint8_t lte_txd = 48;
          static inline constexpr uint8_t lte_rxd = 47;
          static inline constexpr uint8_t rs485_txd = 17;
          static inline constexpr uint8_t rs485_rxd = 18;
          static inline constexpr uint8_t rs485_rts = 8;
          static inline constexpr uint8_t can_txd = 1;
          static inline constexpr uint8_t can_rxd = 2;
          static inline constexpr uint8_t buzzer = 45;
          static inline constexpr uint8_t do0 = 40;
          static inline constexpr uint8_t do1 = 39;
          static inline constexpr uint8_t do2 = 38;
          static inline constexpr uint8_t do3 = 37;
          static inline constexpr uint8_t do4 = 36;
          static inline constexpr uint8_t do5 = 35;
          static inline constexpr uint8_t di0 = 4;
          static inline constexpr uint8_t di1 = 5;
          static inline constexpr uint8_t di2 = 6;
          static inline constexpr uint8_t di3 = 7;
          static inline constexpr uint8_t ao0 = 42;
          static inline constexpr uint8_t ao1 = 41;
        };
      } // namespace edgebox_esp_100
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace geekble_esp32c3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:Geekble_ESP32C3";
          static inline constexpr const char *name = "Geekble Mini ESP32-C3";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t sw_builtin = 9;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 6;
          static inline constexpr uint8_t d7 = 7;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d10 = 10;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t builtin_led = 10;
          static inline constexpr uint8_t builtin_sw = 9;
        };
      } // namespace geekble_esp32c3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace geekble_nano_esp32s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:Geekble_Nano_ESP32S3";
          static inline constexpr const char *name = "Geekble nano ESP32-S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33477;
          static inline constexpr uint8_t d0 = 44;
          static inline constexpr uint8_t d1 = 43;
          static inline constexpr uint8_t d2 = 5;
          static inline constexpr uint8_t d3 = 6;
          static inline constexpr uint8_t d4 = 7;
          static inline constexpr uint8_t d5 = 8;
          static inline constexpr uint8_t d6 = 9;
          static inline constexpr uint8_t d7 = 10;
          static inline constexpr uint8_t d8 = 17;
          static inline constexpr uint8_t d9 = 18;
          static inline constexpr uint8_t d10 = 21;
          static inline constexpr uint8_t d11 = 38;
          static inline constexpr uint8_t d12 = 47;
          static inline constexpr uint8_t d13 = 48;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 11;
          static inline constexpr uint8_t a5 = 12;
          static inline constexpr uint8_t a6 = 13;
          static inline constexpr uint8_t a7 = 14;
          static inline constexpr uint8_t sw_builtin = 0;
          static inline constexpr uint8_t rts = 45;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr const char *usb_manufacturer = "Geekble";
          static inline constexpr const char *usb_product = "Geekble nano ESP32-S3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 48;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t cts = 6;
          static inline constexpr uint8_t dtr = 1;
          static inline constexpr uint8_t dsr = 7;
          static inline constexpr uint8_t pin_i2s_sck = 10;
          static inline constexpr uint8_t pin_i2s_fs = 17;
          static inline constexpr uint8_t pin_i2s_sd = 18;
          static inline constexpr uint8_t pin_i2s_sd_out = 18;
          static inline constexpr uint8_t pin_i2s_sd_in = 21;
        };
      } // namespace geekble_nano_esp32s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace openkb
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:OpenKB";
          static inline constexpr const char *name = "INEX OpenKB";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t ldr_pin = 36;
          static inline constexpr uint8_t sw1 = 16;
          static inline constexpr uint8_t sw2 = 14;
          static inline constexpr uint8_t bt_led = 17;
          static inline constexpr uint8_t wifi_led = 2;
          static inline constexpr uint8_t ntp_led = 15;
          static inline constexpr uint8_t iot_led = 12;
          static inline constexpr uint8_t buzzer = 13;
          static inline constexpr uint8_t input1 = 32;
          static inline constexpr uint8_t input2 = 33;
          static inline constexpr uint8_t input3 = 34;
          static inline constexpr uint8_t input4 = 35;
          static inline constexpr uint8_t output1 = 26;
          static inline constexpr uint8_t output2 = 27;
          static inline constexpr uint8_t sda0 = 21;
          static inline constexpr uint8_t scl0 = 22;
          static inline constexpr uint8_t wire1_pin_defined = 1;
          static inline constexpr uint8_t sda1 = 4;
          static inline constexpr uint8_t scl1 = 5;
          static inline constexpr uint8_t kb_gpio18 = 18;
          static inline constexpr uint8_t kb_gpio19 = 19;
          static inline constexpr uint8_t kb_gpio23 = 23;
          static inline constexpr uint8_t builtin_led = 16;
        };
      } // namespace openkb
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace pcbcupid_glyph_c3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:Pcbcupid_GLYPH_C3";
          static inline constexpr const char *name = "Pcbcupid GLYPH C3";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t bat_measure = 0;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t d0 = 0;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 2;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 4;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 6;
          static inline constexpr uint8_t d7 = 7;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d10 = 10;
          static inline constexpr uint8_t builtin_led = 1;
          static inline constexpr uint8_t bat_volt_pin = 0;
          static inline constexpr uint8_t msr = 0;
        };
      } // namespace pcbcupid_glyph_c3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace pcbcupid_glyph_c6
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:Pcbcupid_GLYPH_C6";
          static inline constexpr const char *name = "Pcbcupid GLYPH C6";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint8_t bat_measure = 0;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t d0 = 0;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 2;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 4;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 6;
          static inline constexpr uint8_t d7 = 7;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d14 = 14;
          static inline constexpr uint8_t d15 = 15;
          static inline constexpr uint8_t d16 = 16;
          static inline constexpr uint8_t d17 = 17;
          static inline constexpr uint8_t d18 = 18;
          static inline constexpr uint8_t d19 = 19;
          static inline constexpr uint8_t d20 = 20;
          static inline constexpr uint8_t d21 = 21;
          static inline constexpr uint8_t d22 = 22;
          static inline constexpr uint8_t d23 = 23;
          static inline constexpr uint8_t builtin_led = 14;
          static inline constexpr uint8_t bat_volt_pin = 0;
          static inline constexpr uint8_t msr = 0;
        };
      } // namespace pcbcupid_glyph_c6
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace pcbcupid_glyph_h2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:Pcbcupid_GLYPH_H2";
          static inline constexpr const char *name = "Pcbcupid GLYPH H2";
          static inline constexpr const char *build_mcu = "esp32h2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 28;
          static inline constexpr uint8_t bat_measure = 1;
          static inline constexpr uint8_t tx = 24;
          static inline constexpr uint8_t rx = 23;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t d0 = 0;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 2;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 4;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d10 = 10;
          static inline constexpr uint8_t d11 = 11;
          static inline constexpr uint8_t d12 = 12;
          static inline constexpr uint8_t d13 = 13;
          static inline constexpr uint8_t d14 = 14;
          static inline constexpr uint8_t builtin_led = 0;
          static inline constexpr uint8_t bat_volt_pin = 1;
          static inline constexpr uint8_t msr = 1;
        };
      } // namespace pcbcupid_glyph_h2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace s_odi_ultra
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:S_ODI_Ultra";
          static inline constexpr const char *name = "S.ODI Ultra v1";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t led_builtinb = 4;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 2;
          static inline constexpr uint8_t builtin_led2 = 4;
        };
      } // namespace s_odi_ultra
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace valtrack_v4_mfw_esp32_c3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:VALTRACK_V4_MFW_ESP32_C3";
          static inline constexpr const char *name = "VALTRACK_V4_MFW_ESP32_C3";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t tx1 = 0;
          static inline constexpr uint8_t rx1 = 1;
          static inline constexpr uint8_t a1 = 3;
          static inline constexpr uint8_t a2 = 4;
          static inline constexpr uint8_t a3 = 5;
          static inline constexpr uint8_t d0 = 2;
          static inline constexpr uint8_t d1 = 3;
          static inline constexpr uint8_t d2 = 4;
          static inline constexpr uint8_t d3 = 5;
          static inline constexpr uint8_t d4 = 6;
          static inline constexpr uint8_t d5 = 7;
          static inline constexpr uint8_t d6 = 21;
          static inline constexpr uint8_t d7 = 20;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d10 = 10;
          static inline constexpr uint8_t gpio_iic_data = 5;
          static inline constexpr uint8_t gpio_iic_clock = 6;
          static inline constexpr uint8_t gpio_pwrkey = 7;
          static inline constexpr uint8_t gpio_gsm_enable = 10;
          static inline constexpr uint8_t gpio_tps_enable = 4;
          static inline constexpr uint8_t gpio_int1 = 3;
          static inline constexpr uint8_t gpio_analog_in = 2;
          static inline constexpr uint8_t gpio_sos = 9;
          static inline constexpr uint8_t gpio_chg_in = 4;
          static inline constexpr uint8_t gpio_led_signal = 8;
        };
      } // namespace valtrack_v4_mfw_esp32_c3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace valtrack_v4_vts_esp32_c3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:VALTRACK_V4_VTS_ESP32_C3";
          static inline constexpr const char *name = "VALTRACK_V4_VTS_ESP32_C3";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t tx1 = 0;
          static inline constexpr uint8_t rx1 = 1;
          static inline constexpr uint8_t a1 = 3;
          static inline constexpr uint8_t a2 = 4;
          static inline constexpr uint8_t a3 = 5;
          static inline constexpr uint8_t d0 = 2;
          static inline constexpr uint8_t d1 = 3;
          static inline constexpr uint8_t d2 = 4;
          static inline constexpr uint8_t d3 = 5;
          static inline constexpr uint8_t d4 = 6;
          static inline constexpr uint8_t d5 = 7;
          static inline constexpr uint8_t d6 = 21;
          static inline constexpr uint8_t d7 = 20;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d10 = 10;
          static inline constexpr uint8_t gpio_iic_data = 5;
          static inline constexpr uint8_t gpio_iic_clock = 6;
          static inline constexpr uint8_t gpio_pwrkey = 7;
          static inline constexpr uint8_t gpio_gsm_enable = 10;
          static inline constexpr uint8_t gpio_tps_enable = 4;
          static inline constexpr uint8_t gpio_int1 = 3;
          static inline constexpr uint8_t gpio_analog_in = 2;
          static inline constexpr uint8_t gpio_sos = 9;
          static inline constexpr uint8_t gpio_chg_in = 4;
          static inline constexpr uint8_t gpio_led_signal = 8;
        };
      } // namespace valtrack_v4_vts_esp32_c3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace wemosbat
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:WeMosBat";
          static inline constexpr const char *name = "WeMos WiFi&Bluetooth Battery";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 16;
        };
      } // namespace wemosbat
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace xiao_esp32c3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:XIAO_ESP32C3";
          static inline constexpr const char *name = "XIAO_ESP32C3";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 3;
          static inline constexpr uint8_t a2 = 4;
          static inline constexpr uint8_t d0 = 2;
          static inline constexpr uint8_t d1 = 3;
          static inline constexpr uint8_t d2 = 4;
          static inline constexpr uint8_t d3 = 5;
          static inline constexpr uint8_t d4 = 6;
          static inline constexpr uint8_t d5 = 7;
          static inline constexpr uint8_t d6 = 21;
          static inline constexpr uint8_t d7 = 20;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d10 = 10;
        };
      } // namespace xiao_esp32c3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace xiao_esp32c5
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:XIAO_ESP32C5";
          static inline constexpr const char *name = "XIAO_ESP32C5";
          static inline constexpr const char *build_mcu = "esp32c5";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 29;
          static inline constexpr uint16_t usb_vid = 10374;
          static inline constexpr uint8_t usb_pid = 103;
          static inline constexpr uint8_t tx = 11;
          static inline constexpr uint8_t rx = 12;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t d0 = 1;
          static inline constexpr uint8_t d1 = 0;
          static inline constexpr uint8_t d2 = 25;
          static inline constexpr uint8_t d3 = 7;
          static inline constexpr uint8_t d4 = 23;
          static inline constexpr uint8_t d5 = 24;
          static inline constexpr uint8_t d6 = 11;
          static inline constexpr uint8_t d7 = 12;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d10 = 10;
          static inline constexpr uint8_t bat_volt_pin = 6;
          static inline constexpr uint8_t bat_volt_pin_en = 26;
          static inline constexpr uint8_t builtin_led = 27;
        };
      } // namespace xiao_esp32c5
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace xiao_esp32c6
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:XIAO_ESP32C6";
          static inline constexpr const char *name = "XIAO_ESP32C6";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint16_t usb_vid = 10374;
          static inline constexpr uint8_t usb_pid = 72;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t d0 = 0;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 2;
          static inline constexpr uint8_t d3 = 21;
          static inline constexpr uint8_t d4 = 22;
          static inline constexpr uint8_t d5 = 23;
          static inline constexpr uint8_t d6 = 16;
          static inline constexpr uint8_t d7 = 17;
          static inline constexpr uint8_t d8 = 19;
          static inline constexpr uint8_t d9 = 20;
          static inline constexpr uint8_t d10 = 18;
          static inline constexpr uint8_t wifi_enable = 3;
          static inline constexpr uint8_t wifi_ant_config = 14;
          static inline constexpr const char *usb_manufacturer = "Seeed Studio";
          static inline constexpr const char *usb_product = "XIAO ESP32-C6";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 15;
        };
      } // namespace xiao_esp32c6
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace xiao_esp32s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:XIAO_ESP32S3";
          static inline constexpr const char *name = "XIAO_ESP32S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 10374;
          static inline constexpr uint8_t usb_pid = 86;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a8 = 7;
          static inline constexpr uint8_t a9 = 8;
          static inline constexpr uint8_t a10 = 9;
          static inline constexpr uint8_t d0 = 1;
          static inline constexpr uint8_t d1 = 2;
          static inline constexpr uint8_t d2 = 3;
          static inline constexpr uint8_t d3 = 4;
          static inline constexpr uint8_t d4 = 5;
          static inline constexpr uint8_t d5 = 6;
          static inline constexpr uint8_t d6 = 43;
          static inline constexpr uint8_t d7 = 44;
          static inline constexpr uint8_t d8 = 7;
          static inline constexpr uint8_t d9 = 8;
          static inline constexpr uint8_t d10 = 9;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t builtin_led = 21;
        };
      } // namespace xiao_esp32s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace xiao_esp32s3_plus
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:XIAO_ESP32S3_Plus";
          static inline constexpr const char *name = "XIAO_ESP32S3_PLUS";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 10374;
          static inline constexpr uint8_t usb_pid = 99;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t tx1 = 42;
          static inline constexpr uint8_t rx1 = 41;
          static inline constexpr uint8_t mosi1 = 11;
          static inline constexpr uint8_t miso1 = 12;
          static inline constexpr uint8_t sck1 = 13;
          static inline constexpr uint8_t i2s_sck = 39;
          static inline constexpr uint8_t i2s_sd = 38;
          static inline constexpr uint8_t i2s_ws = 40;
          static inline constexpr uint8_t mtck = 39;
          static inline constexpr uint8_t mtdo = 40;
          static inline constexpr uint8_t mtdi = 41;
          static inline constexpr uint8_t mtms = 42;
          static inline constexpr uint8_t dvp_y8 = 11;
          static inline constexpr uint8_t dvp_yp = 12;
          static inline constexpr uint8_t dvp_pclk = 13;
          static inline constexpr uint8_t dvp_vsync = 38;
          static inline constexpr uint8_t cam_scl = 39;
          static inline constexpr uint8_t cam_sda = 40;
          static inline constexpr uint8_t xmclk = 10;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a8 = 7;
          static inline constexpr uint8_t a9 = 8;
          static inline constexpr uint8_t a10 = 9;
          static inline constexpr uint8_t adc_bat = 10;
          static inline constexpr uint8_t d0 = 1;
          static inline constexpr uint8_t d1 = 2;
          static inline constexpr uint8_t d2 = 3;
          static inline constexpr uint8_t d3 = 4;
          static inline constexpr uint8_t d4 = 5;
          static inline constexpr uint8_t d5 = 6;
          static inline constexpr uint8_t d6 = 43;
          static inline constexpr uint8_t d7 = 44;
          static inline constexpr uint8_t d8 = 7;
          static inline constexpr uint8_t d9 = 8;
          static inline constexpr uint8_t d10 = 9;
          static inline constexpr uint8_t d11 = 38;
          static inline constexpr uint8_t d12 = 39;
          static inline constexpr uint8_t d13 = 40;
          static inline constexpr uint8_t d14 = 41;
          static inline constexpr uint8_t d15 = 42;
          static inline constexpr uint8_t d16 = 10;
          static inline constexpr uint8_t d17 = 13;
          static inline constexpr uint8_t d18 = 12;
          static inline constexpr uint8_t d19 = 11;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t builtin_led = 21;
          static inline constexpr uint8_t bat_volt_pin = 10;
        };
      } // namespace xiao_esp32s3_plus
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_camera_esp32s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_camera_esp32s3";
          static inline constexpr const char *name = "Adafruit pyCamera S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 33047;
          static inline constexpr uint8_t pin_neopixel = 1;
          static inline constexpr uint8_t neopixel_pin = 1;
          static inline constexpr uint8_t tft_backlight = 45;
          static inline constexpr uint8_t tft_dc = 40;
          static inline constexpr uint8_t tft_cs = 39;
          static inline constexpr uint8_t tft_reset = 38;
          static inline constexpr uint8_t tft_rst = 38;
          static inline constexpr uint8_t sd_cs = 48;
          static inline constexpr uint8_t sd_chip_select = 48;
          static inline constexpr uint8_t speaker = 46;
          static inline constexpr uint8_t a1 = 18;
          static inline constexpr uint8_t batt_monitor = 4;
          static inline constexpr uint8_t shutter_button = 0;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr uint8_t awexp_spkr_sd = 0;
          static inline constexpr uint8_t awexp_button_sel = 1;
          static inline constexpr uint8_t awexp_sd_det = 8;
          static inline constexpr uint8_t awexp_sd_pwr = 9;
          static inline constexpr uint8_t awexp_button_ok = 11;
          static inline constexpr uint8_t awexp_button_right = 12;
          static inline constexpr uint8_t awexp_button_up = 13;
          static inline constexpr uint8_t awexp_button_left = 14;
          static inline constexpr uint8_t awexp_button_down = 15;
          static inline constexpr uint8_t reset_gpio_num = 47;
          static inline constexpr uint8_t pwdn_gpio_num = 21;
          static inline constexpr uint8_t xclk_gpio_num = 8;
          static inline constexpr uint8_t y9_gpio_num = 7;
          static inline constexpr uint8_t y8_gpio_num = 9;
          static inline constexpr uint8_t y7_gpio_num = 10;
          static inline constexpr uint8_t y6_gpio_num = 12;
          static inline constexpr uint8_t y5_gpio_num = 14;
          static inline constexpr uint8_t y4_gpio_num = 16;
          static inline constexpr uint8_t y3_gpio_num = 15;
          static inline constexpr uint8_t y2_gpio_num = 13;
          static inline constexpr uint8_t vsync_gpio_num = 5;
          static inline constexpr uint8_t href_gpio_num = 6;
          static inline constexpr uint8_t pclk_gpio_num = 11;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "Camera ESP32-S3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 50;
          static inline constexpr uint8_t rgb_builtin = 50;
          static inline constexpr uint8_t bat_volt_pin = 4;
          static inline constexpr uint8_t siod_gpio_num = 34;
          static inline constexpr uint8_t sioc_gpio_num = 33;
        };
      } // namespace adafruit_camera_esp32s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_feather_esp32_v2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_feather_esp32_v2";
          static inline constexpr const char *name = "Adafruit Feather ESP32 V2";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 8;
          static inline constexpr uint8_t rx = 7;
          static inline constexpr uint8_t a1 = 25;
          static inline constexpr uint8_t a2 = 34;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 36;
          static inline constexpr uint8_t a5 = 4;
          static inline constexpr uint8_t a6 = 14;
          static inline constexpr uint8_t a7 = 32;
          static inline constexpr uint8_t a8 = 15;
          static inline constexpr uint8_t a9 = 33;
          static inline constexpr uint8_t a10 = 27;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 35;
          static inline constexpr uint8_t batt_monitor = 35;
          static inline constexpr uint8_t button = 38;
          static inline constexpr uint8_t pin_neopixel = 0;
          static inline constexpr uint8_t neopixel_i2c_power = 2;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t tx1 = 8;
          static inline constexpr uint8_t rx1 = 7;
          static inline constexpr uint8_t bat_volt_pin = 35;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t rgb_builtin = 40;
        };
      } // namespace adafruit_feather_esp32_v2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_feather_esp32c6
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_feather_esp32c6";
          static inline constexpr const char *name = "Adafruit Feather ESP32-C6";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint8_t pin_neopixel = 9;
          static inline constexpr uint8_t neopixel_i2c_power = 20;
          static inline constexpr uint8_t pin_neopixel_i2c_power = 20;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 4;
          static inline constexpr uint8_t a2 = 6;
          static inline constexpr uint8_t a3 = 5;
          static inline constexpr uint8_t a4 = 3;
          static inline constexpr uint8_t a5 = 2;
          static inline constexpr uint8_t a6 = 0;
          static inline constexpr uint8_t builtin_led = 15;
          static inline constexpr uint8_t rgb_builtin = 40;
        };
      } // namespace adafruit_feather_esp32c6
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_feather_esp32s2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_feather_esp32s2";
          static inline constexpr const char *name = "Adafruit Feather ESP32-S2";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 33003;
          static inline constexpr uint8_t pin_neopixel = 33;
          static inline constexpr uint8_t neopixel_num = 1;
          static inline constexpr uint8_t neopixel_power = 21;
          static inline constexpr uint8_t i2c_power = 7;
          static inline constexpr uint8_t pin_i2c_power = 7;
          static inline constexpr uint8_t a1 = 17;
          static inline constexpr uint8_t a2 = 16;
          static inline constexpr uint8_t a3 = 15;
          static inline constexpr uint8_t a4 = 14;
          static inline constexpr uint8_t a5 = 8;
          static inline constexpr uint8_t tx = 39;
          static inline constexpr uint8_t rx = 38;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "Feather ESP32-S2";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t rgb_builtin = 80;
          static inline constexpr uint8_t neopixel_power_on = 1;
          static inline constexpr uint8_t tx1 = 39;
          static inline constexpr uint8_t rx1 = 38;
        };
      } // namespace adafruit_feather_esp32s2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_feather_esp32s2_reversetft
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_feather_esp32s2_reversetft";
          static inline constexpr const char *name = "Adafruit Feather ESP32-S2 Reverse TFT";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 33005;
          static inline constexpr uint8_t pin_neopixel = 33;
          static inline constexpr uint8_t neopixel_num = 1;
          static inline constexpr uint8_t neopixel_power = 21;
          static inline constexpr uint8_t tft_i2c_power = 7;
          static inline constexpr uint8_t tft_cs = 42;
          static inline constexpr uint8_t tft_rst = 41;
          static inline constexpr uint8_t tft_dc = 40;
          static inline constexpr uint8_t tft_backlite = 45;
          static inline constexpr uint8_t a1 = 17;
          static inline constexpr uint8_t a2 = 16;
          static inline constexpr uint8_t a3 = 15;
          static inline constexpr uint8_t a4 = 14;
          static inline constexpr uint8_t a5 = 8;
          static inline constexpr uint8_t tx = 39;
          static inline constexpr uint8_t rx = 38;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "Feather ESP32-S2 Reverse TFT";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t rgb_builtin = 80;
          static inline constexpr uint8_t neopixel_power_on = 1;
          static inline constexpr uint8_t tx1 = 39;
          static inline constexpr uint8_t rx1 = 38;
        };
      } // namespace adafruit_feather_esp32s2_reversetft
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_feather_esp32s2_tft
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_feather_esp32s2_tft";
          static inline constexpr const char *name = "Adafruit Feather ESP32-S2 TFT";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 33039;
          static inline constexpr uint8_t pin_neopixel = 33;
          static inline constexpr uint8_t neopixel_num = 1;
          static inline constexpr uint8_t neopixel_power = 34;
          static inline constexpr uint8_t tft_i2c_power = 21;
          static inline constexpr uint8_t tft_cs = 7;
          static inline constexpr uint8_t tft_rst = 40;
          static inline constexpr uint8_t tft_dc = 39;
          static inline constexpr uint8_t tft_backlite = 45;
          static inline constexpr uint8_t a1 = 17;
          static inline constexpr uint8_t a2 = 16;
          static inline constexpr uint8_t a3 = 15;
          static inline constexpr uint8_t a4 = 14;
          static inline constexpr uint8_t a5 = 8;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 2;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "Feather ESP32-S2 TFT";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t rgb_builtin = 80;
          static inline constexpr uint8_t neopixel_power_on = 1;
          static inline constexpr uint8_t tx1 = 1;
          static inline constexpr uint8_t rx1 = 2;
        };
      } // namespace adafruit_feather_esp32s2_tft
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_feather_esp32s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_feather_esp32s3";
          static inline constexpr const char *name = "Adafruit Feather ESP32-S3 2MB PSRAM";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 33051;
          static inline constexpr uint8_t pin_neopixel = 33;
          static inline constexpr uint8_t neopixel_num = 1;
          static inline constexpr uint8_t neopixel_power = 21;
          static inline constexpr uint8_t i2c_power = 7;
          static inline constexpr uint8_t pin_i2c_power = 7;
          static inline constexpr uint8_t tx = 39;
          static inline constexpr uint8_t rx = 38;
          static inline constexpr uint8_t a1 = 17;
          static inline constexpr uint8_t a2 = 16;
          static inline constexpr uint8_t a3 = 15;
          static inline constexpr uint8_t a4 = 14;
          static inline constexpr uint8_t a5 = 8;
          static inline constexpr uint8_t a6 = 3;
          static inline constexpr uint8_t a7 = 4;
          static inline constexpr uint8_t a8 = 5;
          static inline constexpr uint8_t a9 = 6;
          static inline constexpr uint8_t a10 = 9;
          static inline constexpr uint8_t a11 = 10;
          static inline constexpr uint8_t a12 = 11;
          static inline constexpr uint8_t a13 = 12;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "Feather ESP32-S3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t rgb_builtin = 82;
          static inline constexpr uint8_t neopixel_power_on = 1;
          static inline constexpr uint8_t tx1 = 39;
          static inline constexpr uint8_t rx1 = 38;
        };
      } // namespace adafruit_feather_esp32s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_feather_esp32s3_nopsram
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_feather_esp32s3_nopsram";
          static inline constexpr const char *name = "Adafruit Feather ESP32-S3 No PSRAM";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 33043;
          static inline constexpr uint8_t pin_neopixel = 33;
          static inline constexpr uint8_t neopixel_num = 1;
          static inline constexpr uint8_t neopixel_power = 21;
          static inline constexpr uint8_t i2c_power = 7;
          static inline constexpr uint8_t pin_i2c_power = 7;
          static inline constexpr uint8_t tx = 39;
          static inline constexpr uint8_t rx = 38;
          static inline constexpr uint8_t a1 = 17;
          static inline constexpr uint8_t a2 = 16;
          static inline constexpr uint8_t a3 = 15;
          static inline constexpr uint8_t a4 = 14;
          static inline constexpr uint8_t a5 = 8;
          static inline constexpr uint8_t a6 = 3;
          static inline constexpr uint8_t a7 = 4;
          static inline constexpr uint8_t a8 = 5;
          static inline constexpr uint8_t a9 = 6;
          static inline constexpr uint8_t a10 = 9;
          static inline constexpr uint8_t a11 = 10;
          static inline constexpr uint8_t a12 = 11;
          static inline constexpr uint8_t a13 = 12;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "Feather ESP32-S3 No PSRAM";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t rgb_builtin = 82;
          static inline constexpr uint8_t neopixel_power_on = 1;
          static inline constexpr uint8_t tx1 = 39;
          static inline constexpr uint8_t rx1 = 38;
        };
      } // namespace adafruit_feather_esp32s3_nopsram
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_feather_esp32s3_reversetft
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_feather_esp32s3_reversetft";
          static inline constexpr const char *name = "Adafruit Feather ESP32-S3 Reverse TFT";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 33059;
          static inline constexpr uint8_t pin_neopixel = 33;
          static inline constexpr uint8_t neopixel_num = 1;
          static inline constexpr uint8_t neopixel_power = 21;
          static inline constexpr uint8_t tft_i2c_power = 7;
          static inline constexpr uint8_t tft_cs = 42;
          static inline constexpr uint8_t tft_rst = 41;
          static inline constexpr uint8_t tft_dc = 40;
          static inline constexpr uint8_t tft_backlite = 45;
          static inline constexpr uint8_t a1 = 17;
          static inline constexpr uint8_t a2 = 16;
          static inline constexpr uint8_t a3 = 15;
          static inline constexpr uint8_t a4 = 14;
          static inline constexpr uint8_t a5 = 8;
          static inline constexpr uint8_t tx = 39;
          static inline constexpr uint8_t rx = 38;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "Feather ESP32-S3 Reverse TFT";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t rgb_builtin = 82;
          static inline constexpr uint8_t neopixel_power_on = 1;
          static inline constexpr uint8_t tx1 = 39;
          static inline constexpr uint8_t rx1 = 38;
        };
      } // namespace adafruit_feather_esp32s3_reversetft
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_feather_esp32s3_tft
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_feather_esp32s3_tft";
          static inline constexpr const char *name = "Adafruit Feather ESP32-S3 TFT";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 33053;
          static inline constexpr uint8_t pin_neopixel = 33;
          static inline constexpr uint8_t neopixel_num = 1;
          static inline constexpr uint8_t neopixel_power = 34;
          static inline constexpr uint8_t tft_i2c_power = 21;
          static inline constexpr uint8_t tft_cs = 7;
          static inline constexpr uint8_t tft_rst = 40;
          static inline constexpr uint8_t tft_dc = 39;
          static inline constexpr uint8_t tft_backlite = 45;
          static inline constexpr uint8_t a1 = 17;
          static inline constexpr uint8_t a2 = 16;
          static inline constexpr uint8_t a3 = 15;
          static inline constexpr uint8_t a4 = 14;
          static inline constexpr uint8_t a5 = 8;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 2;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "Feather ESP32-S3 TFT";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t rgb_builtin = 82;
          static inline constexpr uint8_t neopixel_power_on = 1;
          static inline constexpr uint8_t tx1 = 1;
          static inline constexpr uint8_t rx1 = 2;
        };
      } // namespace adafruit_feather_esp32s3_tft
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_funhouse_esp32s2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_funhouse_esp32s2";
          static inline constexpr const char *name = "Adafruit FunHouse";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 33017;
          static inline constexpr uint8_t pin_button1 = 3;
          static inline constexpr uint8_t pin_button2 = 4;
          static inline constexpr uint8_t pin_button3 = 5;
          static inline constexpr uint8_t pin_button4 = 0;
          static inline constexpr uint8_t pin_dotstar_data = 14;
          static inline constexpr uint8_t pin_dotstar_clock = 15;
          static inline constexpr uint8_t tft_backlight = 21;
          static inline constexpr uint8_t tft_dc = 39;
          static inline constexpr uint8_t tft_cs = 40;
          static inline constexpr uint8_t tft_reset = 41;
          static inline constexpr uint8_t speaker = 42;
          static inline constexpr uint8_t sensor_pir = 16;
          static inline constexpr uint8_t sensor_light = 18;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 1;
          static inline constexpr uint8_t a3 = 18;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "Funhouse ESP32-S2";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 37;
          static inline constexpr uint8_t button_down = 3;
          static inline constexpr uint8_t button_select = 4;
          static inline constexpr uint8_t button_up = 5;
          static inline constexpr uint8_t tx1 = 43;
          static inline constexpr uint8_t rx1 = 44;
        };
      } // namespace adafruit_funhouse_esp32s2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_itsybitsy_esp32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_itsybitsy_esp32";
          static inline constexpr const char *name = "Adafruit ItsyBitsy ESP32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t pin_neopixel = 0;
          static inline constexpr uint8_t neopixel_power = 2;
          static inline constexpr uint8_t tx = 20;
          static inline constexpr uint8_t rx = 8;
          static inline constexpr uint8_t a1 = 26;
          static inline constexpr uint8_t a2 = 4;
          static inline constexpr uint8_t a3 = 38;
          static inline constexpr uint8_t a4 = 37;
          static inline constexpr uint8_t a5 = 36;
          static inline constexpr uint8_t button = 35;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t rgb_builtin = 40;
          static inline constexpr uint8_t tx1 = 20;
          static inline constexpr uint8_t rx1 = 8;
        };
      } // namespace adafruit_itsybitsy_esp32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_magtag29_esp32s2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_magtag29_esp32s2";
          static inline constexpr const char *name = "Adafruit MagTag 2.9\"";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 32997;
          static inline constexpr uint8_t pin_neopixel = 1;
          static inline constexpr uint8_t neopixel_num = 4;
          static inline constexpr uint8_t neopixel_power = 21;
          static inline constexpr uint8_t pin_button1 = 15;
          static inline constexpr uint8_t pin_button2 = 14;
          static inline constexpr uint8_t pin_button3 = 12;
          static inline constexpr uint8_t pin_button4 = 11;
          static inline constexpr uint8_t pin_button5 = 0;
          static inline constexpr uint8_t epd_busy = 5;
          static inline constexpr uint8_t epd_reset = 6;
          static inline constexpr uint8_t epd_dc = 7;
          static inline constexpr uint8_t epd_cs = 8;
          static inline constexpr uint8_t accel_irq = 9;
          static inline constexpr uint8_t light_sensor = 3;
          static inline constexpr uint8_t batt_monitor = 4;
          static inline constexpr uint8_t speaker_shutdown = 16;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 18;
          static inline constexpr uint8_t a2 = 1;
          static inline constexpr uint8_t a3 = 2;
          static inline constexpr uint8_t a4 = 3;
          static inline constexpr uint8_t a5 = 4;
          static inline constexpr uint8_t a6 = 5;
          static inline constexpr uint8_t a7 = 6;
          static inline constexpr uint8_t a8 = 7;
          static inline constexpr uint8_t a9 = 8;
          static inline constexpr uint8_t a10 = 9;
          static inline constexpr uint8_t a11 = 10;
          static inline constexpr uint8_t a12 = 11;
          static inline constexpr uint8_t a13 = 12;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 14;
          static inline constexpr uint8_t a16 = 15;
          static inline constexpr uint8_t a17 = 16;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "EPD MagTag 2.9\" ESP32-S2";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t rgb_builtin = 48;
          static inline constexpr uint8_t neopixel_power_on = 0;
          static inline constexpr uint8_t button_a = 15;
          static inline constexpr uint8_t button_b = 14;
          static inline constexpr uint8_t button_c = 12;
          static inline constexpr uint8_t button_d = 11;
          static inline constexpr uint8_t bat_volt_pin = 4;
          static inline constexpr uint8_t tx1 = 43;
          static inline constexpr uint8_t rx1 = 44;
        };
      } // namespace adafruit_magtag29_esp32s2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_matrixportal_esp32s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_matrixportal_esp32s3";
          static inline constexpr const char *name = "Adafruit MatrixPortal ESP32-S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 33061;
          static inline constexpr uint8_t pin_neopixel = 4;
          static inline constexpr uint8_t neopixel_pin = 4;
          static inline constexpr uint8_t neopixel_num = 1;
          static inline constexpr uint8_t pin_button_up = 6;
          static inline constexpr uint8_t pin_button_down = 7;
          static inline constexpr uint8_t tx = 18;
          static inline constexpr uint8_t rx = 8;
          static inline constexpr uint8_t a1 = 3;
          static inline constexpr uint8_t a2 = 9;
          static inline constexpr uint8_t a3 = 10;
          static inline constexpr uint8_t a4 = 11;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "MatrixPortal ESP32-S3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t rgb_builtin = 53;
          static inline constexpr uint8_t pin_lightsensor = 5;
          static inline constexpr uint8_t tx1 = 18;
          static inline constexpr uint8_t rx1 = 8;
        };
      } // namespace adafruit_matrixportal_esp32s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_metro_esp32s2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_metro_esp32s2";
          static inline constexpr const char *name = "Adafruit Metro ESP32-S2";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 32991;
          static inline constexpr uint8_t pin_neopixel = 45;
          static inline constexpr uint8_t neopixel_num = 1;
          static inline constexpr uint8_t pin_button1 = 0;
          static inline constexpr uint8_t tx = 5;
          static inline constexpr uint8_t rx = 6;
          static inline constexpr uint8_t a1 = 18;
          static inline constexpr uint8_t a2 = 1;
          static inline constexpr uint8_t a3 = 2;
          static inline constexpr uint8_t a4 = 3;
          static inline constexpr uint8_t a5 = 4;
          static inline constexpr uint8_t a6 = 5;
          static inline constexpr uint8_t a7 = 6;
          static inline constexpr uint8_t a8 = 7;
          static inline constexpr uint8_t a9 = 8;
          static inline constexpr uint8_t a10 = 9;
          static inline constexpr uint8_t a11 = 10;
          static inline constexpr uint8_t a12 = 11;
          static inline constexpr uint8_t a13 = 12;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 14;
          static inline constexpr uint8_t a16 = 15;
          static inline constexpr uint8_t a17 = 16;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "Metro ESP32-S2";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 42;
          static inline constexpr uint8_t rgb_builtin = 92;
          static inline constexpr uint8_t tx1 = 5;
          static inline constexpr uint8_t rx1 = 6;
        };
      } // namespace adafruit_metro_esp32s2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_metro_esp32s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_metro_esp32s3";
          static inline constexpr const char *name = "Adafruit Metro ESP32-S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 33093;
          static inline constexpr uint8_t pin_neopixel = 46;
          static inline constexpr uint8_t neopixel_num = 1;
          static inline constexpr uint8_t pin_button1 = 0;
          static inline constexpr uint8_t tx = 40;
          static inline constexpr uint8_t rx = 41;
          static inline constexpr uint8_t a1 = 15;
          static inline constexpr uint8_t a2 = 16;
          static inline constexpr uint8_t a3 = 17;
          static inline constexpr uint8_t a4 = 18;
          static inline constexpr uint8_t a5 = 1;
          static inline constexpr uint8_t a6 = 40;
          static inline constexpr uint8_t a7 = 41;
          static inline constexpr uint8_t a8 = 2;
          static inline constexpr uint8_t a9 = 3;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 5;
          static inline constexpr uint8_t a12 = 6;
          static inline constexpr uint8_t a13 = 7;
          static inline constexpr uint8_t a14 = 8;
          static inline constexpr uint8_t a15 = 9;
          static inline constexpr uint8_t a16 = 10;
          static inline constexpr uint8_t a17 = 11;
          static inline constexpr uint8_t a18 = 12;
          static inline constexpr uint8_t a19 = 13;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "Metro ESP32-S3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t rgb_builtin = 95;
          static inline constexpr uint8_t tx1 = 40;
          static inline constexpr uint8_t rx1 = 41;
        };
      } // namespace adafruit_metro_esp32s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_qtpy_esp32_pico
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_qtpy_esp32_pico";
          static inline constexpr const char *name = "Adafruit QT Py ESP32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t pin_neopixel = 5;
          static inline constexpr uint8_t neopixel_power = 8;
          static inline constexpr uint8_t tx = 32;
          static inline constexpr uint8_t rx = 7;
          static inline constexpr uint8_t tx1 = 32;
          static inline constexpr uint8_t rx1 = 7;
          static inline constexpr uint8_t wire1_pin_defined = 1;
          static inline constexpr uint8_t sda1 = 22;
          static inline constexpr uint8_t scl1 = 19;
          static inline constexpr uint8_t a1 = 25;
          static inline constexpr uint8_t a2 = 27;
          static inline constexpr uint8_t a3 = 15;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 32;
          static inline constexpr uint8_t a7 = 7;
          static inline constexpr uint8_t a8 = 14;
          static inline constexpr uint8_t a9 = 12;
          static inline constexpr uint8_t a10 = 13;
          static inline constexpr uint8_t button = 0;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 45;
          static inline constexpr uint8_t rgb_builtin = 45;
        };
      } // namespace adafruit_qtpy_esp32_pico
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_qtpy_esp32c3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_qtpy_esp32c3";
          static inline constexpr const char *name = "Adafruit QT Py ESP32-C3";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t button = 9;
          static inline constexpr uint8_t pin_neopixel = 2;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 3;
          static inline constexpr uint8_t a2 = 1;
          static inline constexpr uint8_t a3 = 0;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t builtin_led = 24;
          static inline constexpr uint8_t rgb_builtin = 24;
        };
      } // namespace adafruit_qtpy_esp32c3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_qtpy_esp32s2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_qtpy_esp32s2";
          static inline constexpr const char *name = "Adafruit QT Py ESP32-S2";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 33041;
          static inline constexpr uint8_t pin_neopixel = 39;
          static inline constexpr uint8_t neopixel_num = 1;
          static inline constexpr uint8_t neopixel_power = 38;
          static inline constexpr uint8_t wire1_pin_defined = 1;
          static inline constexpr uint8_t sda1 = 41;
          static inline constexpr uint8_t scl1 = 40;
          static inline constexpr uint8_t a1 = 17;
          static inline constexpr uint8_t a2 = 9;
          static inline constexpr uint8_t a3 = 8;
          static inline constexpr uint8_t a4 = 7;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 5;
          static inline constexpr uint8_t a7 = 16;
          static inline constexpr uint8_t tx = 5;
          static inline constexpr uint8_t rx = 16;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "QT Py ESP32-S2";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 86;
          static inline constexpr uint8_t rgb_builtin = 86;
          static inline constexpr uint8_t neopixel_power_on = 1;
          static inline constexpr uint8_t tx1 = 5;
          static inline constexpr uint8_t rx1 = 16;
        };
      } // namespace adafruit_qtpy_esp32s2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_qtpy_esp32s3_n4r2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_qtpy_esp32s3_n4r2";
          static inline constexpr const char *name = "Adafruit QT Py ESP32-S3 (4M Flash 2M PSRAM)";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 33091;
          static inline constexpr uint8_t pin_neopixel = 39;
          static inline constexpr uint8_t neopixel_num = 1;
          static inline constexpr uint8_t neopixel_power = 38;
          static inline constexpr uint8_t tx = 5;
          static inline constexpr uint8_t rx = 16;
          static inline constexpr uint8_t wire1_pin_defined = 1;
          static inline constexpr uint8_t sda1 = 41;
          static inline constexpr uint8_t scl1 = 40;
          static inline constexpr uint8_t a1 = 17;
          static inline constexpr uint8_t a2 = 9;
          static inline constexpr uint8_t a3 = 8;
          static inline constexpr uint8_t a4 = 7;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 5;
          static inline constexpr uint8_t a7 = 16;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "QT Py ESP32-S3 (4MB Flash 2MB PSRAM)";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t neopixel_power_on = 1;
          static inline constexpr uint8_t builtin_led = 88;
          static inline constexpr uint8_t rgb_builtin = 88;
          static inline constexpr uint8_t tx1 = 5;
          static inline constexpr uint8_t rx1 = 16;
        };
      } // namespace adafruit_qtpy_esp32s3_n4r2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_qtpy_esp32s3_nopsram
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_qtpy_esp32s3_nopsram";
          static inline constexpr const char *name = "Adafruit QT Py ESP32-S3 No PSRAM";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 33049;
          static inline constexpr uint8_t pin_neopixel = 39;
          static inline constexpr uint8_t neopixel_num = 1;
          static inline constexpr uint8_t neopixel_power = 38;
          static inline constexpr uint8_t tx = 5;
          static inline constexpr uint8_t rx = 16;
          static inline constexpr uint8_t wire1_pin_defined = 1;
          static inline constexpr uint8_t sda1 = 41;
          static inline constexpr uint8_t scl1 = 40;
          static inline constexpr uint8_t a1 = 17;
          static inline constexpr uint8_t a2 = 9;
          static inline constexpr uint8_t a3 = 8;
          static inline constexpr uint8_t a4 = 7;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 5;
          static inline constexpr uint8_t a7 = 16;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "QT Py ESP32-S3 No PSRAM";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t neopixel_power_on = 1;
          static inline constexpr uint8_t builtin_led = 88;
          static inline constexpr uint8_t rgb_builtin = 88;
          static inline constexpr uint8_t tx1 = 5;
          static inline constexpr uint8_t rx1 = 16;
        };
      } // namespace adafruit_qtpy_esp32s3_nopsram
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace adafruit_qualia_s3_rgb666
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:adafruit_qualia_s3_rgb666";
          static inline constexpr const char *name = "Adafruit Qualia ESP32-S3 RGB666";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 33095;
          static inline constexpr uint8_t pca_tft_sck = 0;
          static inline constexpr uint8_t pca_tft_cs = 1;
          static inline constexpr uint8_t pca_tft_reset = 2;
          static inline constexpr uint8_t pca_cpt_irq = 3;
          static inline constexpr uint8_t pca_tft_backlight = 4;
          static inline constexpr uint8_t pca_button_up = 5;
          static inline constexpr uint8_t pca_button_down = 6;
          static inline constexpr uint8_t pca_tft_mosi = 7;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 16;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t tft_r1 = 11;
          static inline constexpr uint8_t tft_r2 = 10;
          static inline constexpr uint8_t tft_r3 = 9;
          static inline constexpr uint8_t tft_r4 = 46;
          static inline constexpr uint8_t tft_r5 = 3;
          static inline constexpr uint8_t tft_g0 = 48;
          static inline constexpr uint8_t tft_g1 = 47;
          static inline constexpr uint8_t tft_g2 = 21;
          static inline constexpr uint8_t tft_g3 = 14;
          static inline constexpr uint8_t tft_g4 = 13;
          static inline constexpr uint8_t tft_g5 = 12;
          static inline constexpr uint8_t tft_b1 = 40;
          static inline constexpr uint8_t tft_b2 = 39;
          static inline constexpr uint8_t tft_b3 = 38;
          static inline constexpr uint8_t tft_b4 = 0;
          static inline constexpr uint8_t tft_b5 = 45;
          static inline constexpr uint8_t tft_pclk = 1;
          static inline constexpr uint8_t tft_de = 2;
          static inline constexpr uint8_t tft_hsync = 41;
          static inline constexpr uint8_t tft_vsync = 42;
          static inline constexpr const char *usb_manufacturer = "Adafruit";
          static inline constexpr const char *usb_product = "Qualia ESP32-S3 RGB666";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t tx1 = 16;
          static inline constexpr uint8_t rx1 = 17;
        };
      } // namespace adafruit_qualia_s3_rgb666
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace alfredo_nou3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:alfredo-nou3";
          static inline constexpr const char *name = "Alfredo NoU3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 45008;
          static inline constexpr uint8_t usb_pid = 3;
          static inline constexpr const char *usb_manufacturer = "Alfredo";
          static inline constexpr const char *usb_product = "NoU3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 45;
        };
      } // namespace alfredo_nou3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace alksesp32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:alksesp32";
          static inline constexpr const char *name = "ALKS ESP32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t d0 = 40;
          static inline constexpr uint8_t d1 = 41;
          static inline constexpr uint8_t d2 = 15;
          static inline constexpr uint8_t d3 = 2;
          static inline constexpr uint8_t d4 = 0;
          static inline constexpr uint8_t d5 = 4;
          static inline constexpr uint8_t d6 = 16;
          static inline constexpr uint8_t d7 = 17;
          static inline constexpr uint8_t d8 = 5;
          static inline constexpr uint8_t d9 = 18;
          static inline constexpr uint8_t d10 = 19;
          static inline constexpr uint8_t d11 = 21;
          static inline constexpr uint8_t d12 = 22;
          static inline constexpr uint8_t d13 = 23;
          static inline constexpr uint8_t a1 = 33;
          static inline constexpr uint8_t a2 = 25;
          static inline constexpr uint8_t a3 = 26;
          static inline constexpr uint8_t a4 = 27;
          static inline constexpr uint8_t a5 = 14;
          static inline constexpr uint8_t a6 = 12;
          static inline constexpr uint8_t a7 = 15;
          static inline constexpr uint8_t l_r = 22;
          static inline constexpr uint8_t l_g = 17;
          static inline constexpr uint8_t l_y = 23;
          static inline constexpr uint8_t l_b = 5;
          static inline constexpr uint8_t l_rgb_r = 4;
          static inline constexpr uint8_t l_rgb_g = 21;
          static inline constexpr uint8_t l_rgb_b = 16;
          static inline constexpr uint8_t sw1 = 15;
          static inline constexpr uint8_t sw2 = 2;
          static inline constexpr uint8_t sw3 = 0;
          static inline constexpr uint8_t pot1 = 32;
          static inline constexpr uint8_t pot2 = 33;
          static inline constexpr uint8_t piezo1 = 19;
          static inline constexpr uint8_t piezo2 = 18;
          static inline constexpr uint8_t photo = 25;
          static inline constexpr uint8_t dht_pin = 26;
          static inline constexpr uint8_t s1 = 4;
          static inline constexpr uint8_t s2 = 16;
          static inline constexpr uint8_t s3 = 18;
          static inline constexpr uint8_t s4 = 19;
          static inline constexpr uint8_t s5 = 21;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr bool alksesp32 = true;
          static inline constexpr uint8_t builtin_led = 23;
        };
      } // namespace alksesp32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace arduino_nesso_n1
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:arduino_nesso_n1";
          static inline constexpr const char *name = "Arduino Nesso N1";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr int tx = -1;
          static inline constexpr int rx = -1;
          static inline constexpr uint8_t d1 = 7;
          static inline constexpr uint8_t d2 = 2;
          static inline constexpr uint8_t d3 = 6;
          static inline constexpr uint8_t ir_tx_pin = 9;
          static inline constexpr uint8_t beep_pin = 11;
          static inline constexpr uint8_t grove_io_0 = 5;
          static inline constexpr uint8_t grove_io_1 = 4;
          static inline constexpr uint8_t lora_irq = 15;
          static inline constexpr uint8_t lora_cs = 23;
          static inline constexpr uint8_t lora_busy = 19;
          static inline constexpr uint8_t sys_irq = 3;
          static inline constexpr uint8_t lcd_cs = 17;
          static inline constexpr uint8_t lcd_rs = 16;
          static inline constexpr const char *usb_manufacturer = "Arduino";
          static inline constexpr const char *usb_product = "Nesso N1";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace arduino_nesso_n1
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace aslcanx2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:aslcanx2";
          static inline constexpr const char *name = "AutosportLabs ESP-CAN-X2";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 5840;
          static inline constexpr uint16_t usb_pid = 2034;
          static inline constexpr uint8_t can1_rx = 6;
          static inline constexpr uint8_t can1_tx = 7;
          static inline constexpr uint8_t cs = 10;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace aslcanx2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace atd147_s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:atd147_s3";
          static inline constexpr const char *name = "ATD1.47-S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t lcd_dc = 21;
          static inline constexpr uint8_t lcd_res = 14;
          static inline constexpr uint8_t btn_a = 4;
          static inline constexpr uint8_t btn_b = 5;
          static inline constexpr uint8_t btn_c = 45;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t lcd_cs = 10;
          static inline constexpr uint8_t lcd_sck = 12;
          static inline constexpr uint8_t lcd_sda = 11;
          static inline constexpr uint8_t key_builtin = 4;
        };
      } // namespace atd147_s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace atd35s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:atd35s3";
          static inline constexpr const char *name = "ATD3.5-S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t lcd_dc = 21;
          static inline constexpr uint8_t lcd_res = 14;
          static inline constexpr uint8_t lcd_bl = 3;
          static inline constexpr uint8_t sd_cs = 18;
          static inline constexpr uint8_t sd_cd = 17;
          static inline constexpr uint8_t btn_a = 4;
          static inline constexpr uint8_t dac_din = 47;
          static inline constexpr uint8_t dac_bclk = 48;
          static inline constexpr uint8_t dac_ws = 45;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t lcd_cs = 10;
          static inline constexpr uint8_t lcd_sck = 12;
          static inline constexpr uint8_t lcd_sda = 11;
          static inline constexpr uint8_t key_builtin = 4;
        };
      } // namespace atd35s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace atmegazero_esp32s2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:atmegazero_esp32s2";
          static inline constexpr const char *name = "ATMegaZero ESP32-S2";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 32778;
          static inline constexpr uint8_t rgb_led_pin = 40;
          static inline constexpr uint8_t pd5 = 0;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 18;
          static inline constexpr uint8_t a2 = 13;
          static inline constexpr uint8_t a3 = 12;
          static inline constexpr uint8_t a4 = 6;
          static inline constexpr uint8_t a5 = 3;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "ATMegaZero";
          static inline constexpr const char *usb_product = "ATMZ-ESP32S2";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 87;
          static inline constexpr uint8_t rgb_builtin = 87;
        };
      } // namespace atmegazero_esp32s2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace aventen_s3_sync
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:aventen_s3_sync";
          static inline constexpr const char *name = "Aventen S3 Sync";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t scl_1 = 21;
          static inline constexpr uint8_t sda_1 = 20;
          static inline constexpr uint8_t als = 17;
          static inline constexpr uint8_t rgb_di = 38;
          static inline constexpr uint8_t rf_sw = 37;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t t15 = 15;
          static inline constexpr const char *usb_manufacturer = "Aventen";
          static inline constexpr const char *usb_product = "Aventen S3 Sync";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace aventen_s3_sync
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace aw2eth
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:aw2eth";
          static inline constexpr const char *name = "CNRS AW2ETH";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace aw2eth
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace axiometa_genesis_one
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:axiometa_genesis_one";
          static inline constexpr const char *name = "Axiometa Genesis One";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t vbat_sense = 10;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t p1_io0 = 1;
          static inline constexpr uint8_t p1_io1 = 14;
          static inline constexpr uint8_t p1_io2 = 41;
          static inline constexpr uint8_t p2_io0 = 2;
          static inline constexpr uint8_t p2_io1 = 15;
          static inline constexpr uint8_t p2_io2 = 42;
          static inline constexpr uint8_t p3_io0 = 3;
          static inline constexpr uint8_t p3_io1 = 16;
          static inline constexpr uint8_t p3_io2 = 45;
          static inline constexpr uint8_t p4_io0 = 4;
          static inline constexpr uint8_t p4_io1 = 17;
          static inline constexpr uint8_t p4_io2 = 46;
          static inline constexpr uint8_t p5_io0 = 5;
          static inline constexpr uint8_t p5_io1 = 18;
          static inline constexpr uint8_t p5_io2 = 21;
          static inline constexpr uint8_t p6_io0 = 6;
          static inline constexpr uint8_t p6_io1 = 40;
          static inline constexpr uint8_t p6_io2 = 38;
          static inline constexpr uint8_t p7_io0 = 7;
          static inline constexpr uint8_t p7_io1 = 9;
          static inline constexpr uint8_t p7_io2 = 39;
          static inline constexpr uint8_t p8_io0 = 8;
          static inline constexpr uint8_t p8_io1 = 43;
          static inline constexpr uint8_t p8_io2 = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
        };
      } // namespace axiometa_genesis_one
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace axiometa_pixie_m1
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:axiometa_pixie_m1";
          static inline constexpr const char *name = "Axiometa PIXIE M1";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t pin_rgb_led = 21;
          static inline constexpr uint8_t pin_led = 11;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 11;
          static inline constexpr uint8_t rgb_led = 21;
        };
      } // namespace axiometa_pixie_m1
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace bpi_bit
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:bpi-bit";
          static inline constexpr const char *name = "BPI-BIT";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t buzzer = 25;
          static inline constexpr uint8_t button_a = 35;
          static inline constexpr uint8_t button_b = 27;
          static inline constexpr uint8_t rgb_led = 4;
          static inline constexpr uint8_t light_sensor1 = 36;
          static inline constexpr uint8_t light_sensor2 = 39;
          static inline constexpr uint8_t temperature_sensor = 34;
          static inline constexpr uint8_t mpu9250_int = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t p0 = 25;
          static inline constexpr uint8_t p1 = 32;
          static inline constexpr uint8_t p2 = 33;
          static inline constexpr uint8_t p3 = 13;
          static inline constexpr uint8_t p4 = 15;
          static inline constexpr uint8_t p5 = 35;
          static inline constexpr uint8_t p6 = 12;
          static inline constexpr uint8_t p7 = 14;
          static inline constexpr uint8_t p8 = 16;
          static inline constexpr uint8_t p9 = 17;
          static inline constexpr uint8_t p10 = 26;
          static inline constexpr uint8_t p11 = 27;
          static inline constexpr uint8_t p12 = 2;
          static inline constexpr uint8_t p13 = 18;
          static inline constexpr uint8_t p14 = 19;
          static inline constexpr uint8_t p15 = 23;
          static inline constexpr uint8_t p16 = 5;
          static inline constexpr uint8_t p19 = 22;
          static inline constexpr uint8_t p20 = 21;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 44;
          static inline constexpr uint8_t rgb_builtin = 44;
        };
      } // namespace bpi_bit
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace bpi_leaf_s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:bpi_leaf_s3";
          static inline constexpr const char *name = "BPI-Leaf-S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 32991;
          static inline constexpr uint8_t pin_rgb_led = 48;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr const char *usb_manufacturer = "Banana Pi";
          static inline constexpr const char *usb_product = "BPI-Leaf-S3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
        };
      } // namespace bpi_leaf_s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace cezerio_dev_esp32c6
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:cezerio_dev_esp32c6";
          static inline constexpr const char *name = "cezerio dev ESP32C6";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t pin_rgb_led = 3;
          static inline constexpr uint8_t but_builtin = 9;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t matrix = 18;
          static inline constexpr uint8_t imusd = 8;
          static inline constexpr uint8_t imusc = 7;
          static inline constexpr const char *usb_manufacturer = "RFtek Electronics";
          static inline constexpr const char *usb_product = "cezerio dev ESP32C6";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 34;
          static inline constexpr uint8_t rgb_builtin = 34;
          static inline constexpr uint8_t rgbled = 34;
          static inline constexpr uint8_t builtin_but = 9;
          static inline constexpr uint8_t boot = 9;
        };
      } // namespace cezerio_dev_esp32c6
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace cezerio_mini_dev_esp32c6
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:cezerio_mini_dev_esp32c6";
          static inline constexpr const char *name = "cezerio mini dev ESP32C6";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t pin_rgb_led = 20;
          static inline constexpr uint8_t but_builtin = 9;
          static inline constexpr uint8_t tx = 7;
          static inline constexpr uint8_t rx = 14;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t matrix = 4;
          static inline constexpr const char *usb_manufacturer = "RFtek Electronics";
          static inline constexpr const char *usb_product = "cezerio mini dev ESP32C6";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 51;
          static inline constexpr uint8_t rgb_builtin = 51;
          static inline constexpr uint8_t rgbled = 51;
          static inline constexpr uint8_t builtin_but = 9;
          static inline constexpr uint8_t boot = 9;
        };
      } // namespace cezerio_mini_dev_esp32c6
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace ch_denky
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:ch_denky";
          static inline constexpr const char *name = "Denky";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t push_button = 0;
          static inline constexpr uint8_t tic_enable_pin = 4;
          static inline constexpr uint8_t tic_rx_pin = 33;
          static inline constexpr uint8_t lora_tx_pin = 26;
          static inline constexpr uint8_t lora_rx_pin = 27;
          static inline constexpr uint8_t lora_reset = 14;
          static inline constexpr uint8_t rgb_led_pin = 25;
          static inline constexpr uint8_t led_red_pin = 27;
          static inline constexpr uint8_t led_grn_pin = 26;
          static inline constexpr uint8_t led_blu_pin = 25;
        };
      } // namespace ch_denky
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace circuitart_zero_s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:circuitart_zero_s3";
          static inline constexpr const char *name = "CircuitART Zero S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 32987;
          static inline constexpr uint8_t pin_rgb_led = 47;
          static inline constexpr uint8_t rgbled_num = 1;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tft_dc = 5;
          static inline constexpr uint8_t tft_cs = 39;
          static inline constexpr uint8_t tft_rst = 40;
          static inline constexpr uint8_t tft_reset = 40;
          static inline constexpr uint8_t sd_cs = 42;
          static inline constexpr uint8_t sd_chip_select = 42;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t tx0 = 43;
          static inline constexpr uint8_t rx0 = 44;
          static inline constexpr uint8_t tx1 = 40;
          static inline constexpr uint8_t rx2 = 41;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t t15 = 15;
          static inline constexpr uint8_t d0 = 0;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 2;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 4;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 6;
          static inline constexpr uint8_t d7 = 7;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d10 = 10;
          static inline constexpr uint8_t d11 = 11;
          static inline constexpr uint8_t d12 = 12;
          static inline constexpr uint8_t d13 = 13;
          static inline constexpr uint8_t d14 = 14;
          static inline constexpr uint8_t d15 = 15;
          static inline constexpr uint8_t d16 = 16;
          static inline constexpr uint8_t d17 = 17;
          static inline constexpr uint8_t d18 = 18;
          static inline constexpr uint8_t d33 = 33;
          static inline constexpr uint8_t d34 = 34;
          static inline constexpr uint8_t d35 = 35;
          static inline constexpr uint8_t d36 = 36;
          static inline constexpr uint8_t d37 = 37;
          static inline constexpr uint8_t d38 = 38;
          static inline constexpr uint8_t d39 = 39;
          static inline constexpr uint8_t d40 = 40;
          static inline constexpr uint8_t d41 = 41;
          static inline constexpr uint8_t tft_cam_power = 21;
          static inline constexpr int8_t pwdn_gpio_num = -1;
          static inline constexpr int8_t reset_gpio_num = -1;
          static inline constexpr uint8_t xclk_gpio_num = 15;
          static inline constexpr uint8_t y9_gpio_num = 14;
          static inline constexpr uint8_t y8_gpio_num = 13;
          static inline constexpr uint8_t y7_gpio_num = 11;
          static inline constexpr uint8_t y6_gpio_num = 10;
          static inline constexpr uint8_t y5_gpio_num = 9;
          static inline constexpr uint8_t y4_gpio_num = 8;
          static inline constexpr uint8_t y3_gpio_num = 7;
          static inline constexpr uint8_t y2_gpio_num = 6;
          static inline constexpr uint8_t vsync_gpio_num = 38;
          static inline constexpr uint8_t href_gpio_num = 48;
          static inline constexpr uint8_t pclk_gpio_num = 16;
          static inline constexpr const char *usb_manufacturer = "CircuitART";
          static inline constexpr const char *usb_product = "ZeroS3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 46;
          static inline constexpr uint8_t rgb_builtin = 96;
          static inline constexpr uint8_t siod_gpio_num = 33;
          static inline constexpr uint8_t sioc_gpio_num = 34;
        };
      } // namespace circuitart_zero_s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace codecell
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:codecell";
          static inline constexpr const char *name = "CodeCell C3";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
        };
      } // namespace codecell
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace connaxio_espoir
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:connaxio_espoir";
          static inline constexpr const char *name = "Connaxio\'s Espoir";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t tx1 = 10;
          static inline constexpr uint8_t rx1 = 9;
          static inline constexpr uint8_t a1 = 37;
          static inline constexpr uint8_t a2 = 38;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t an = 36;
          static inline constexpr uint8_t rst = 5;
          static inline constexpr uint8_t pwm = 2;
          static inline constexpr uint8_t int_ = 4;
          static inline constexpr uint8_t cs = 15;
          static inline constexpr uint8_t sdo = 13;
          static inline constexpr uint8_t sdi = 12;
          static inline constexpr uint8_t eth_int = 35;
          static inline constexpr uint8_t eth_phy_addr = 0;
          static inline constexpr int8_t eth_phy_power = -1;
          static inline constexpr uint8_t eth_phy_mdc = 32;
          static inline constexpr uint8_t eth_phy_mdio = 33;
          static inline constexpr uint16_t usb_vid = 4292;
          static inline constexpr uint16_t usb_pid = 36250;
          static inline constexpr const char *usb_manufacturer = "Connaxio";
          static inline constexpr const char *usb_product = "Espoir";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace connaxio_espoir
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace crabik_slot_esp32_s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:crabik_slot_esp32_s3";
          static inline constexpr const char *name = "Crabik Slot ESP32-S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33101;
          static inline constexpr uint8_t s1 = 1;
          static inline constexpr uint8_t s2 = 12;
          static inline constexpr uint8_t s3 = 2;
          static inline constexpr uint8_t s4 = 11;
          static inline constexpr uint8_t s5 = 17;
          static inline constexpr uint8_t s6 = 18;
          static inline constexpr uint8_t s7 = 3;
          static inline constexpr uint8_t s8 = 4;
          static inline constexpr uint8_t s9 = 5;
          static inline constexpr uint8_t s10 = 6;
          static inline constexpr uint8_t s11 = 7;
          static inline constexpr uint8_t s12 = 8;
          static inline constexpr uint8_t s13 = 9;
          static inline constexpr uint8_t s14 = 10;
          static inline constexpr uint8_t s15 = 45;
          static inline constexpr uint8_t s16 = 46;
          static inline constexpr uint8_t s17 = 48;
          static inline constexpr uint8_t s18 = 47;
          static inline constexpr uint8_t s19 = 33;
          static inline constexpr uint8_t s20 = 34;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t usb_dn = 19;
          static inline constexpr uint8_t usb_dp = 20;
          static inline constexpr uint8_t boot_btn = 0;
          static inline constexpr uint8_t en_troyka = 15;
          static inline constexpr uint8_t lipo_alert = 16;
          static inline constexpr const char *usb_manufacturer = "Crabik";
          static inline constexpr const char *usb_product = "Slot ESP32-2";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 21;
          static inline constexpr uint8_t tx = 8;
          static inline constexpr uint8_t rx = 7;
          static inline constexpr uint8_t tx1 = 8;
          static inline constexpr uint8_t rx1 = 7;
          static inline constexpr uint8_t d = 13;
          static inline constexpr uint8_t c = 14;
          static inline constexpr uint8_t do_ = 35;
          static inline constexpr uint8_t di = 37;
          static inline constexpr uint8_t clk = 36;
          static inline constexpr uint8_t cs1 = 17;
          static inline constexpr uint8_t cs2 = 18;
          static inline constexpr uint8_t user_led = 21;
        };
      } // namespace crabik_slot_esp32_s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace cw02
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:cw02";
          static inline constexpr const char *name = "XinaBox CW02";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t builtin_led = 27;
        };
      } // namespace cw02
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace cyobot_v2_esp32s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:cyobot_v2_esp32s3";
          static inline constexpr const char *name = "CYOBOT V2 ESP32S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t button0 = 4;
          static inline constexpr uint8_t button1 = 38;
          static inline constexpr uint8_t led = 24;
          static inline constexpr uint8_t bat_meas = 6;
          static inline constexpr uint8_t char_det = 23;
          static inline constexpr uint8_t neo_base = 7;
          static inline constexpr uint8_t neo_brain = 15;
          static inline constexpr uint8_t i2s0_mclk = 16;
          static inline constexpr uint8_t i2s0_dsdin = 8;
          static inline constexpr uint8_t i2s0_sclk = 9;
          static inline constexpr uint8_t i2s0_lrck = 45;
          static inline constexpr uint8_t encoder1_a = 39;
          static inline constexpr uint8_t encoder1_b = 40;
          static inline constexpr uint8_t encoder2_b = 19;
          static inline constexpr uint8_t encoder2_a = 20;
          static inline constexpr uint8_t uart1_rxd = 3;
          static inline constexpr uint8_t uart1_txd = 1;
          static inline constexpr uint8_t gpio46 = 46;
          static inline constexpr uint8_t esp_io0 = 0;
          static inline constexpr uint8_t sd_out = 10;
          static inline constexpr uint8_t sd_spi_mosi = 11;
          static inline constexpr uint8_t sd_spi_clk = 12;
          static inline constexpr uint8_t sd_spi_miso = 13;
          static inline constexpr uint8_t sd_spi_cs = 14;
          static inline constexpr uint8_t pa_ctrl = 25;
          static inline constexpr const char *usb_manufacturer = "CYOBot";
          static inline constexpr const char *usb_product = "CYOBrain ESP32S3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 6;
        };
      } // namespace cyobot_v2_esp32s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace cytron_maker_feather_aiot_s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:cytron_maker_feather_aiot_s3";
          static inline constexpr const char *name = "Cytron Maker Feather AIoT S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33016;
          static inline constexpr uint8_t vp_en = 11;
          static inline constexpr uint8_t buzzer = 12;
          static inline constexpr uint8_t boot = 0;
          static inline constexpr uint8_t button = 3;
          static inline constexpr uint8_t vin = 13;
          static inline constexpr uint8_t vbatt = 13;
          static inline constexpr uint8_t voltage_monitor = 13;
          static inline constexpr uint8_t tx = 15;
          static inline constexpr uint8_t rx = 16;
          static inline constexpr uint8_t a1 = 9;
          static inline constexpr uint8_t a2 = 6;
          static inline constexpr uint8_t a3 = 5;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 7;
          static inline constexpr uint8_t a6 = 17;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 18;
          static inline constexpr uint8_t a9 = 16;
          static inline constexpr uint8_t a10 = 15;
          static inline constexpr uint8_t a11 = 14;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr const char *usb_manufacturer = "Cytron";
          static inline constexpr const char *usb_product = "Maker Feather AIoT S3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 2;
          static inline constexpr uint8_t rgb_builtin = 95;
          static inline constexpr uint8_t led = 2;
          static inline constexpr uint8_t rgb = 95;
          static inline constexpr uint8_t rgb_led_pin = 95;
          static inline constexpr uint8_t bat_volt_pin = 13;
        };
      } // namespace cytron_maker_feather_aiot_s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace d_duino_32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:d-duino-32";
          static inline constexpr const char *name = "D-duino-32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t d1 = 5;
          static inline constexpr uint8_t d2 = 4;
          static inline constexpr uint8_t d3 = 0;
          static inline constexpr uint8_t d4 = 2;
          static inline constexpr uint8_t d5 = 14;
          static inline constexpr uint8_t d6 = 12;
          static inline constexpr uint8_t d7 = 13;
          static inline constexpr uint8_t d8 = 15;
          static inline constexpr uint8_t d9 = 3;
          static inline constexpr uint8_t d10 = 1;
          static inline constexpr uint8_t oled_scl = 4;
          static inline constexpr uint8_t oled_sda = 5;
        };
      } // namespace d_duino_32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace d1_mini32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:d1_mini32";
          static inline constexpr const char *name = "WEMOS D1 MINI ESP32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t _vbat = 35;
          static inline constexpr uint8_t d0 = 26;
          static inline constexpr uint8_t d1 = 22;
          static inline constexpr uint8_t d2 = 21;
          static inline constexpr uint8_t d3 = 17;
          static inline constexpr uint8_t d4 = 16;
          static inline constexpr uint8_t d5 = 18;
          static inline constexpr uint8_t d6 = 19;
          static inline constexpr uint8_t d7 = 23;
          static inline constexpr uint8_t d8 = 5;
          static inline constexpr uint8_t rxd = 3;
          static inline constexpr uint8_t txd = 1;
          static inline constexpr uint8_t builtin_led = 2;
          static inline constexpr uint8_t bat_volt_pin = 35;
        };
      } // namespace d1_mini32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace d1_uno32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:d1_uno32";
          static inline constexpr const char *name = "WEMOS D1 R32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a1 = 4;
          static inline constexpr uint8_t a2 = 35;
          static inline constexpr uint8_t a3 = 34;
          static inline constexpr uint8_t a4 = 36;
          static inline constexpr uint8_t a5 = 39;
          static inline constexpr uint8_t d0 = 3;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 26;
          static inline constexpr uint8_t d3 = 25;
          static inline constexpr uint8_t d4 = 17;
          static inline constexpr uint8_t d5 = 16;
          static inline constexpr uint8_t d6 = 27;
          static inline constexpr uint8_t d7 = 14;
          static inline constexpr uint8_t d8 = 12;
          static inline constexpr uint8_t d9 = 13;
          static inline constexpr uint8_t d10 = 5;
          static inline constexpr uint8_t d11 = 23;
          static inline constexpr uint8_t d12 = 19;
          static inline constexpr uint8_t d13 = 18;
          static inline constexpr uint8_t builtin_led = 2;
          static inline constexpr uint8_t pin_wire_sda = 21;
          static inline constexpr uint8_t pin_wire_scl = 22;
          static inline constexpr uint8_t pin_spi_ss = 5;
          static inline constexpr uint8_t pin_spi_mosi = 23;
          static inline constexpr uint8_t pin_spi_miso = 19;
          static inline constexpr uint8_t pin_spi_sck = 18;
          static inline constexpr uint8_t pin_a0 = 2;
        };
      } // namespace d1_uno32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace d32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:d32";
          static inline constexpr const char *name = "LOLIN D32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t _vbat = 35;
          static inline constexpr uint8_t builtin_led = 5;
          static inline constexpr uint8_t bat_volt_pin = 35;
        };
      } // namespace d32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace d32_pro
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:d32_pro";
          static inline constexpr const char *name = "LOLIN D32 PRO";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t _vbat = 35;
          static inline constexpr uint8_t tf_cs = 4;
          static inline constexpr uint8_t ts_cs = 12;
          static inline constexpr uint8_t tft_cs = 14;
          static inline constexpr uint8_t tft_led = 32;
          static inline constexpr uint8_t tft_rst = 33;
          static inline constexpr uint8_t tft_dc = 27;
          static inline constexpr uint8_t builtin_led = 5;
          static inline constexpr uint8_t bat_volt_pin = 35;
        };
      } // namespace d32_pro
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace deneyapkart
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:deneyapkart";
          static inline constexpr const char *name = "Deneyap Kart";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t ledr = 3;
          static inline constexpr uint8_t ledg = 1;
          static inline constexpr uint8_t gpkey = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a1 = 39;
          static inline constexpr uint8_t a2 = 34;
          static inline constexpr uint8_t a3 = 35;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t t0 = 32;
          static inline constexpr uint8_t t1 = 33;
          static inline constexpr uint8_t t2 = 27;
          static inline constexpr uint8_t t3 = 14;
          static inline constexpr uint8_t t4 = 12;
          static inline constexpr uint8_t t5 = 13;
          static inline constexpr uint8_t d0 = 23;
          static inline constexpr uint8_t d1 = 22;
          static inline constexpr uint8_t d2 = 1;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 21;
          static inline constexpr uint8_t d5 = 19;
          static inline constexpr uint8_t d6 = 18;
          static inline constexpr uint8_t d7 = 5;
          static inline constexpr uint8_t d8 = 0;
          static inline constexpr uint8_t d9 = 2;
          static inline constexpr uint8_t d10 = 4;
          static inline constexpr uint8_t d11 = 15;
          static inline constexpr uint8_t d12 = 13;
          static inline constexpr uint8_t d13 = 12;
          static inline constexpr uint8_t d14 = 14;
          static inline constexpr uint8_t d15 = 27;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t pwm0 = 23;
          static inline constexpr uint8_t pwm1 = 22;
          static inline constexpr uint8_t camsd = 33;
          static inline constexpr uint8_t camsc = 25;
          static inline constexpr uint8_t camd2 = 19;
          static inline constexpr uint8_t camd3 = 22;
          static inline constexpr uint8_t camd4 = 23;
          static inline constexpr uint8_t camd5 = 21;
          static inline constexpr uint8_t camd6 = 18;
          static inline constexpr uint8_t camd7 = 26;
          static inline constexpr uint8_t camd8 = 35;
          static inline constexpr uint8_t camd9 = 34;
          static inline constexpr uint8_t campc = 5;
          static inline constexpr uint8_t camxc = 32;
          static inline constexpr uint8_t camh = 39;
          static inline constexpr uint8_t camv = 36;
          static inline constexpr uint8_t micd = 12;
          static inline constexpr uint8_t micc = 13;
          static inline constexpr uint8_t imusd = 4;
          static inline constexpr uint8_t imusc = 15;
          static inline constexpr uint8_t builtin_led = 4;
          static inline constexpr uint8_t ledb = 4;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t builtin_key = 0;
          static inline constexpr uint8_t boot = 0;
          static inline constexpr uint8_t tx1 = 1;
          static inline constexpr uint8_t rx1 = 3;
        };
      } // namespace deneyapkart
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace deneyapkart1a
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:deneyapkart1A";
          static inline constexpr const char *name = "Deneyap Kart 1A";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t gpkey = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a1 = 39;
          static inline constexpr uint8_t a2 = 34;
          static inline constexpr uint8_t a3 = 35;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t t0 = 32;
          static inline constexpr uint8_t t1 = 33;
          static inline constexpr uint8_t t2 = 27;
          static inline constexpr uint8_t t3 = 14;
          static inline constexpr uint8_t t4 = 12;
          static inline constexpr uint8_t t5 = 13;
          static inline constexpr uint8_t d0 = 23;
          static inline constexpr uint8_t d1 = 22;
          static inline constexpr uint8_t d2 = 1;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 21;
          static inline constexpr uint8_t d5 = 19;
          static inline constexpr uint8_t d6 = 18;
          static inline constexpr uint8_t d7 = 5;
          static inline constexpr uint8_t d8 = 0;
          static inline constexpr uint8_t d9 = 2;
          static inline constexpr uint8_t d10 = 4;
          static inline constexpr uint8_t d11 = 15;
          static inline constexpr uint8_t d12 = 13;
          static inline constexpr uint8_t d13 = 12;
          static inline constexpr uint8_t d14 = 14;
          static inline constexpr uint8_t d15 = 27;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t pwm0 = 23;
          static inline constexpr uint8_t pwm1 = 22;
          static inline constexpr uint8_t camsd = 33;
          static inline constexpr uint8_t camsc = 25;
          static inline constexpr uint8_t camd2 = 19;
          static inline constexpr uint8_t camd3 = 22;
          static inline constexpr uint8_t camd4 = 23;
          static inline constexpr uint8_t camd5 = 21;
          static inline constexpr uint8_t camd6 = 18;
          static inline constexpr uint8_t camd7 = 26;
          static inline constexpr uint8_t camd8 = 35;
          static inline constexpr uint8_t camd9 = 34;
          static inline constexpr uint8_t campc = 5;
          static inline constexpr uint8_t camxc = 32;
          static inline constexpr uint8_t camh = 39;
          static inline constexpr uint8_t camv = 36;
          static inline constexpr uint8_t sdmi = 2;
          static inline constexpr uint8_t sdmo = 14;
          static inline constexpr uint8_t sdcs = 12;
          static inline constexpr uint8_t sdck = 27;
          static inline constexpr uint8_t builtin_led = 53;
          static inline constexpr uint8_t rgb_builtin = 53;
          static inline constexpr uint8_t rgbled = 53;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t builtin_key = 0;
          static inline constexpr uint8_t boot = 0;
          static inline constexpr uint8_t tx1 = 1;
          static inline constexpr uint8_t rx1 = 3;
        };
      } // namespace deneyapkart1a
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace deneyapkart1av2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:deneyapkart1Av2";
          static inline constexpr const char *name = "Deneyap Kart 1A v2";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33095;
          static inline constexpr uint8_t gpkey = 0;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 5;
          static inline constexpr uint8_t a2 = 6;
          static inline constexpr uint8_t a3 = 7;
          static inline constexpr uint8_t a4 = 15;
          static inline constexpr uint8_t a5 = 16;
          static inline constexpr uint8_t a6 = 17;
          static inline constexpr uint8_t a7 = 18;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 5;
          static inline constexpr uint8_t t2 = 6;
          static inline constexpr uint8_t t3 = 7;
          static inline constexpr uint8_t t4 = 8;
          static inline constexpr uint8_t t5 = 3;
          static inline constexpr uint8_t t6 = 10;
          static inline constexpr uint8_t t7 = 1;
          static inline constexpr uint8_t t8 = 2;
          static inline constexpr uint8_t d0 = 1;
          static inline constexpr uint8_t d1 = 2;
          static inline constexpr uint8_t d2 = 43;
          static inline constexpr uint8_t d3 = 44;
          static inline constexpr uint8_t d4 = 42;
          static inline constexpr uint8_t d5 = 41;
          static inline constexpr uint8_t d6 = 40;
          static inline constexpr uint8_t d7 = 39;
          static inline constexpr uint8_t d8 = 38;
          static inline constexpr uint8_t d9 = 48;
          static inline constexpr uint8_t d10 = 47;
          static inline constexpr uint8_t d11 = 21;
          static inline constexpr uint8_t d12 = 10;
          static inline constexpr uint8_t d13 = 3;
          static inline constexpr uint8_t d14 = 8;
          static inline constexpr uint8_t d15 = 0;
          static inline constexpr uint8_t d16 = 13;
          static inline constexpr uint8_t d17 = 12;
          static inline constexpr uint8_t d18 = 11;
          static inline constexpr uint8_t d19 = 14;
          static inline constexpr uint8_t pwm0 = 15;
          static inline constexpr uint8_t pwm1 = 16;
          static inline constexpr uint8_t pwm2 = 17;
          static inline constexpr uint8_t pwm3 = 18;
          static inline constexpr uint8_t pwm4 = 38;
          static inline constexpr uint8_t camsd = 4;
          static inline constexpr uint8_t camsc = 5;
          static inline constexpr uint8_t camd2 = 41;
          static inline constexpr uint8_t camd3 = 2;
          static inline constexpr uint8_t camd4 = 1;
          static inline constexpr uint8_t camd5 = 42;
          static inline constexpr uint8_t camd6 = 40;
          static inline constexpr uint8_t camd7 = 38;
          static inline constexpr uint8_t camd8 = 17;
          static inline constexpr uint8_t camd9 = 15;
          static inline constexpr uint8_t campc = 39;
          static inline constexpr uint8_t camxc = 16;
          static inline constexpr uint8_t camh = 7;
          static inline constexpr uint8_t camv = 6;
          static inline constexpr uint8_t sdmi = 14;
          static inline constexpr uint8_t sdmo = 12;
          static inline constexpr uint8_t sdcs = 11;
          static inline constexpr uint8_t sdck = 13;
          static inline constexpr uint8_t bat = 9;
          static inline constexpr const char *usb_manufacturer = "Turkish Technology Team Foundation (7)";
          static inline constexpr const char *usb_product = "DENEYAP KART 1A v2";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
          static inline constexpr uint8_t rgbled = 97;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t builtin_key = 0;
          static inline constexpr uint8_t tx1 = 43;
          static inline constexpr uint8_t rx1 = 44;
          static inline constexpr uint8_t bat_volt_pin = 9;
        };
      } // namespace deneyapkart1av2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace deneyapkartg
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:deneyapkartg";
          static inline constexpr const char *name = "Deneyap Kart G";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33098;
          static inline constexpr uint8_t gpkey = 9;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t d0 = 20;
          static inline constexpr uint8_t d1 = 21;
          static inline constexpr uint8_t d2 = 9;
          static inline constexpr uint8_t d3 = 10;
          static inline constexpr uint8_t d4 = 8;
          static inline constexpr uint8_t d5 = 7;
          static inline constexpr uint8_t d6 = 2;
          static inline constexpr uint8_t pwm0 = 0;
          static inline constexpr uint8_t pwm1 = 1;
          static inline constexpr uint8_t pwm2 = 3;
          static inline constexpr const char *usb_manufacturer = "Turkish Technology Team Foundation (T3)";
          static inline constexpr const char *usb_product = "DENEYAP KART G";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 32;
          static inline constexpr uint8_t rgb_builtin = 32;
          static inline constexpr uint8_t rgbled = 32;
          static inline constexpr uint8_t key_builtin = 9;
          static inline constexpr uint8_t builtin_key = 9;
          static inline constexpr uint8_t bt = 9;
          static inline constexpr uint8_t tx1 = 21;
          static inline constexpr uint8_t rx1 = 20;
        };
      } // namespace deneyapkartg
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace deneyapkartv2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:deneyapkartv2";
          static inline constexpr const char *name = "Deneyap Kart v2";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33515;
          static inline constexpr uint8_t gpkey = 0;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 5;
          static inline constexpr uint8_t a2 = 6;
          static inline constexpr uint8_t a3 = 7;
          static inline constexpr uint8_t a4 = 15;
          static inline constexpr uint8_t a5 = 16;
          static inline constexpr uint8_t a6 = 17;
          static inline constexpr uint8_t a7 = 18;
          static inline constexpr uint8_t a8 = 8;
          static inline constexpr uint8_t a9 = 9;
          static inline constexpr uint8_t a10 = 10;
          static inline constexpr uint8_t a11 = 11;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 1;
          static inline constexpr uint8_t a14 = 3;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 13;
          static inline constexpr uint8_t a17 = 14;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 5;
          static inline constexpr uint8_t t2 = 6;
          static inline constexpr uint8_t t3 = 7;
          static inline constexpr uint8_t t4 = 8;
          static inline constexpr uint8_t t5 = 9;
          static inline constexpr uint8_t t6 = 10;
          static inline constexpr uint8_t t7 = 11;
          static inline constexpr uint8_t t8 = 2;
          static inline constexpr uint8_t t9 = 1;
          static inline constexpr uint8_t t10 = 3;
          static inline constexpr uint8_t t11 = 12;
          static inline constexpr uint8_t t12 = 13;
          static inline constexpr uint8_t t13 = 14;
          static inline constexpr uint8_t d0 = 1;
          static inline constexpr uint8_t d1 = 2;
          static inline constexpr uint8_t d2 = 43;
          static inline constexpr uint8_t d3 = 44;
          static inline constexpr uint8_t d4 = 42;
          static inline constexpr uint8_t d5 = 41;
          static inline constexpr uint8_t d6 = 40;
          static inline constexpr uint8_t d7 = 39;
          static inline constexpr uint8_t d8 = 38;
          static inline constexpr uint8_t d9 = 48;
          static inline constexpr uint8_t d10 = 47;
          static inline constexpr uint8_t d11 = 21;
          static inline constexpr uint8_t d12 = 11;
          static inline constexpr uint8_t d13 = 10;
          static inline constexpr uint8_t d14 = 9;
          static inline constexpr uint8_t d15 = 8;
          static inline constexpr uint8_t d16 = 18;
          static inline constexpr uint8_t d17 = 17;
          static inline constexpr uint8_t d18 = 16;
          static inline constexpr uint8_t d19 = 15;
          static inline constexpr uint8_t d20 = 7;
          static inline constexpr uint8_t d21 = 6;
          static inline constexpr uint8_t d22 = 5;
          static inline constexpr uint8_t d23 = 4;
          static inline constexpr uint8_t d24 = 46;
          static inline constexpr uint8_t d25 = 0;
          static inline constexpr uint8_t d26 = 3;
          static inline constexpr uint8_t d27 = 12;
          static inline constexpr uint8_t d28 = 13;
          static inline constexpr uint8_t d29 = 14;
          static inline constexpr uint8_t camsd = 4;
          static inline constexpr uint8_t camsc = 5;
          static inline constexpr uint8_t camd2 = 41;
          static inline constexpr uint8_t camd3 = 2;
          static inline constexpr uint8_t camd4 = 1;
          static inline constexpr uint8_t camd5 = 42;
          static inline constexpr uint8_t camd6 = 40;
          static inline constexpr uint8_t camd7 = 38;
          static inline constexpr uint8_t camd8 = 17;
          static inline constexpr uint8_t camd9 = 15;
          static inline constexpr uint8_t campc = 39;
          static inline constexpr uint8_t camxc = 16;
          static inline constexpr uint8_t camh = 7;
          static inline constexpr uint8_t camv = 6;
          static inline constexpr uint8_t sdcm = 12;
          static inline constexpr uint8_t sdck = 13;
          static inline constexpr uint8_t sdda = 14;
          static inline constexpr uint8_t bat = 3;
          static inline constexpr const char *usb_manufacturer = "Turkish Technology Team Foundation (7)";
          static inline constexpr const char *usb_product = "DENEYAP KART v2";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 95;
          static inline constexpr uint8_t rgb_builtin = 95;
          static inline constexpr uint8_t rgbled = 95;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t builtin_key = 0;
          static inline constexpr uint8_t tx1 = 43;
          static inline constexpr uint8_t rx1 = 44;
          static inline constexpr uint8_t bat_volt_pin = 3;
        };
      } // namespace deneyapkartv2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace deneyapmini
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:deneyapmini";
          static inline constexpr const char *name = "Deneyap Mini";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33089;
          static inline constexpr uint8_t ledr = 34;
          static inline constexpr uint8_t ledg = 33;
          static inline constexpr uint8_t gpkey = 0;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 9;
          static inline constexpr uint8_t a2 = 10;
          static inline constexpr uint8_t a3 = 11;
          static inline constexpr uint8_t a4 = 12;
          static inline constexpr uint8_t a5 = 13;
          static inline constexpr uint8_t a6 = 16;
          static inline constexpr uint8_t t0 = 8;
          static inline constexpr uint8_t t1 = 9;
          static inline constexpr uint8_t t2 = 10;
          static inline constexpr uint8_t t3 = 11;
          static inline constexpr uint8_t t4 = 12;
          static inline constexpr uint8_t t5 = 13;
          static inline constexpr uint8_t d0 = 44;
          static inline constexpr uint8_t d1 = 43;
          static inline constexpr uint8_t d2 = 42;
          static inline constexpr uint8_t d3 = 41;
          static inline constexpr uint8_t d4 = 40;
          static inline constexpr uint8_t d5 = 39;
          static inline constexpr uint8_t d6 = 38;
          static inline constexpr uint8_t d7 = 37;
          static inline constexpr uint8_t d8 = 36;
          static inline constexpr uint8_t d9 = 26;
          static inline constexpr uint8_t d10 = 21;
          static inline constexpr uint8_t d11 = 18;
          static inline constexpr uint8_t d12 = 17;
          static inline constexpr uint8_t d13 = 0;
          static inline constexpr uint8_t d14 = 35;
          static inline constexpr uint8_t d15 = 33;
          static inline constexpr uint8_t d16 = 34;
          static inline constexpr uint8_t pwm0 = 42;
          static inline constexpr uint8_t pwm1 = 41;
          static inline constexpr uint8_t dac0 = 17;
          static inline constexpr uint8_t dac1 = 18;
          static inline constexpr const char *usb_manufacturer = "Turkish Technology Team Foundation (11)";
          static inline constexpr const char *usb_product = "DENEYAP MINI";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 35;
          static inline constexpr uint8_t ledb = 35;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t builtin_key = 0;
          static inline constexpr uint8_t bt = 0;
          static inline constexpr uint8_t tx1 = 43;
          static inline constexpr uint8_t rx1 = 44;
          static inline constexpr uint8_t sd = 36;
          static inline constexpr uint8_t sc = 37;
          static inline constexpr uint8_t mo = 40;
          static inline constexpr uint8_t mi = 39;
          static inline constexpr uint8_t mc = 38;
          static inline constexpr uint8_t da0 = 17;
          static inline constexpr uint8_t da1 = 18;
        };
      } // namespace deneyapmini
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace deneyapminiv2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:deneyapminiv2";
          static inline constexpr const char *name = "Deneyap Mini v2";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33092;
          static inline constexpr uint8_t gpkey = 0;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 8;
          static inline constexpr uint8_t a2 = 9;
          static inline constexpr uint8_t a3 = 10;
          static inline constexpr uint8_t a4 = 11;
          static inline constexpr uint8_t a5 = 12;
          static inline constexpr uint8_t a6 = 13;
          static inline constexpr uint8_t a7 = 16;
          static inline constexpr uint8_t t0 = 7;
          static inline constexpr uint8_t t1 = 8;
          static inline constexpr uint8_t t2 = 9;
          static inline constexpr uint8_t t3 = 10;
          static inline constexpr uint8_t t4 = 11;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 13;
          static inline constexpr uint8_t d0 = 44;
          static inline constexpr uint8_t d1 = 43;
          static inline constexpr uint8_t d2 = 42;
          static inline constexpr uint8_t d3 = 41;
          static inline constexpr uint8_t d4 = 40;
          static inline constexpr uint8_t d5 = 39;
          static inline constexpr uint8_t d6 = 38;
          static inline constexpr uint8_t d7 = 37;
          static inline constexpr uint8_t d8 = 36;
          static inline constexpr uint8_t d9 = 26;
          static inline constexpr uint8_t d10 = 21;
          static inline constexpr uint8_t d11 = 18;
          static inline constexpr uint8_t d12 = 17;
          static inline constexpr uint8_t d13 = 0;
          static inline constexpr uint8_t d14 = 33;
          static inline constexpr uint8_t pwm0 = 42;
          static inline constexpr uint8_t pwm1 = 41;
          static inline constexpr uint8_t dac0 = 17;
          static inline constexpr uint8_t dac1 = 18;
          static inline constexpr const char *usb_manufacturer = "Turkish Technology Team Foundation (10)";
          static inline constexpr const char *usb_product = "DENEYAP MINI v2";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 80;
          static inline constexpr uint8_t rgb_builtin = 80;
          static inline constexpr uint8_t rgbled = 80;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t builtin_key = 0;
          static inline constexpr uint8_t tx1 = 43;
          static inline constexpr uint8_t rx1 = 44;
          static inline constexpr uint8_t sd = 36;
          static inline constexpr uint8_t sc = 37;
          static inline constexpr uint8_t mo = 40;
          static inline constexpr uint8_t mi = 39;
          static inline constexpr uint8_t mc = 38;
          static inline constexpr uint8_t da0 = 17;
          static inline constexpr uint8_t da1 = 18;
        };
      } // namespace deneyapminiv2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace department_of_alchemy_minimain_esp32s2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:department_of_alchemy_minimain_esp32s2";
          static inline constexpr const char *name = "Department of Alchemy MiniMain ESP32-S2";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33023;
          static inline constexpr uint8_t pin_rgb_led = 33;
          static inline constexpr uint8_t rgbled_num = 1;
          static inline constexpr uint8_t rgbled_power = 21;
          static inline constexpr uint8_t pin_servo = 2;
          static inline constexpr uint8_t pin_isolated_input = 40;
          static inline constexpr uint8_t a1 = 17;
          static inline constexpr uint8_t a2 = 16;
          static inline constexpr uint8_t a3 = 15;
          static inline constexpr uint8_t a4 = 14;
          static inline constexpr uint8_t a5 = 8;
          static inline constexpr uint8_t tx = 39;
          static inline constexpr uint8_t rx = 38;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "Department of Alchemy";
          static inline constexpr const char *usb_product = "MiniMain ESP32-S2";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t rgb_builtin = 80;
          static inline constexpr uint8_t rgbled_power_on = 1;
          static inline constexpr uint8_t tx1 = 39;
          static inline constexpr uint8_t rx1 = 38;
        };
      } // namespace department_of_alchemy_minimain_esp32s2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace dfrobot_beetle_esp32c3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:dfrobot_beetle_esp32c3";
          static inline constexpr const char *name = "DFRobot Beetle ESP32-C3";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint16_t usb_vid = 13123;
          static inline constexpr uint16_t usb_pid = 33636;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr const char *usb_manufacturer = "DFRobot";
          static inline constexpr const char *usb_product = "Beetle ESP32-C3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 10;
          static inline constexpr uint8_t gdi_blk = 10;
          static inline constexpr uint8_t gdi_spi_sclk = 4;
          static inline constexpr uint8_t gdi_spi_mosi = 6;
          static inline constexpr uint8_t gdi_spi_miso = 5;
          static inline constexpr uint8_t gdi_dc = 1;
          static inline constexpr uint8_t gdi_res = 2;
          static inline constexpr uint8_t gdi_cs = 7;
          static inline constexpr uint8_t gdi_sdcs = 0;
          static inline constexpr uint8_t gdi_tcs = 3;
          static inline constexpr uint8_t gdi_scl = 9;
          static inline constexpr uint8_t gdi_sda = 8;
        };
      } // namespace dfrobot_beetle_esp32c3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace dfrobot_beetle_esp32c6
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:dfrobot_beetle_esp32c6";
          static inline constexpr const char *name = "DFRobot Beetle ESP32-C6";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t builtin_led = 15;
        };
      } // namespace dfrobot_beetle_esp32c6
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace dfrobot_firebeetle2_esp32c6
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:dfrobot_firebeetle2_esp32c6";
          static inline constexpr const char *name = "DFRobot FireBeetle 2 ESP32-C6";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t d2 = 8;
          static inline constexpr uint8_t d3 = 14;
          static inline constexpr uint8_t d6 = 1;
          static inline constexpr uint8_t d7 = 18;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d11 = 7;
          static inline constexpr uint8_t d12 = 6;
          static inline constexpr uint8_t d13 = 15;
          static inline constexpr int8_t gdi_fcs = -1;
          static inline constexpr int8_t gdi_busy_te = -1;
          static inline constexpr uint8_t builtin_led = 15;
          static inline constexpr uint8_t gdi_blk = 15;
          static inline constexpr uint8_t gdi_spi_sclk = 23;
          static inline constexpr uint8_t gdi_spi_mosi = 22;
          static inline constexpr uint8_t gdi_spi_miso = 21;
          static inline constexpr uint8_t gdi_dc = 8;
          static inline constexpr uint8_t gdi_res = 14;
          static inline constexpr uint8_t gdi_cs = 1;
          static inline constexpr uint8_t gdi_sdcs = 18;
          static inline constexpr uint8_t gdi_tcs = 6;
          static inline constexpr uint8_t gdi_scl = 20;
          static inline constexpr uint8_t gdi_sda = 19;
          static inline constexpr uint8_t gdi_int = 7;
        };
      } // namespace dfrobot_firebeetle2_esp32c6
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace dfrobot_firebeetle2_esp32e
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:dfrobot_firebeetle2_esp32e";
          static inline constexpr const char *name = "FireBeetle 2 ESP32-E";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t tx2 = 17;
          static inline constexpr uint8_t rx2 = 16;
          static inline constexpr uint8_t d0 = 3;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 25;
          static inline constexpr uint8_t d3 = 26;
          static inline constexpr uint8_t d4 = 27;
          static inline constexpr uint8_t d5 = 0;
          static inline constexpr uint8_t d6 = 14;
          static inline constexpr uint8_t d7 = 13;
          static inline constexpr uint8_t d8 = 5;
          static inline constexpr uint8_t d9 = 2;
          static inline constexpr uint8_t d10 = 17;
          static inline constexpr uint8_t d11 = 16;
          static inline constexpr uint8_t d12 = 4;
          static inline constexpr uint8_t d13 = 12;
          static inline constexpr uint8_t a1 = 39;
          static inline constexpr uint8_t a2 = 34;
          static inline constexpr uint8_t a3 = 35;
          static inline constexpr uint8_t a4 = 15;
          static inline constexpr uint8_t a5 = 35;
          static inline constexpr uint8_t a6 = 4;
          static inline constexpr uint8_t a7 = 0;
          static inline constexpr uint8_t a8 = 2;
          static inline constexpr uint8_t a9 = 13;
          static inline constexpr uint8_t a10 = 12;
          static inline constexpr uint8_t a11 = 14;
          static inline constexpr uint8_t a12 = 27;
          static inline constexpr uint8_t a13 = 25;
          static inline constexpr uint8_t a14 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace dfrobot_firebeetle2_esp32e
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace dfrobot_firebeetle2_esp32s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:dfrobot_firebeetle2_esp32s3";
          static inline constexpr const char *name = "DFRobot Firebeetle 2 ESP32-S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 13123;
          static inline constexpr uint16_t usb_pid = 33743;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 5;
          static inline constexpr uint8_t a2 = 6;
          static inline constexpr uint8_t a3 = 8;
          static inline constexpr uint8_t a4 = 10;
          static inline constexpr uint8_t a5 = 11;
          static inline constexpr uint8_t d2 = 3;
          static inline constexpr uint8_t d3 = 38;
          static inline constexpr uint8_t d5 = 7;
          static inline constexpr uint8_t d6 = 18;
          static inline constexpr uint8_t d7 = 9;
          static inline constexpr uint8_t d9 = 0;
          static inline constexpr uint8_t d10 = 14;
          static inline constexpr uint8_t d11 = 13;
          static inline constexpr uint8_t d12 = 12;
          static inline constexpr uint8_t d13 = 21;
          static inline constexpr uint8_t d14 = 47;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t gdi_blk = 21;
          static inline constexpr uint8_t gdi_dc = 3;
          static inline constexpr uint8_t gdi_res = 38;
          static inline constexpr uint8_t gdi_cs = 18;
          static inline constexpr uint8_t gdi_sdcs = 9;
          static inline constexpr uint8_t gdi_fcs = 7;
          static inline constexpr uint8_t gdi_tcs = 12;
          static inline constexpr uint8_t gdi_int = 13;
          static inline constexpr uint8_t gdi_busy_te = 14;
          static inline constexpr const char *usb_manufacturer = "DFRobot";
          static inline constexpr const char *usb_product = "FireBeetle 2 ESP32-S3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 21;
          static inline constexpr uint8_t gdi_spi_sclk = 17;
          static inline constexpr uint8_t gdi_spi_mosi = 15;
          static inline constexpr uint8_t gdi_spi_miso = 16;
          static inline constexpr uint8_t gdi_scl = 2;
          static inline constexpr uint8_t gdi_sda = 1;
        };
      } // namespace dfrobot_firebeetle2_esp32s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace dfrobot_lorawan_esp32s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:dfrobot_lorawan_esp32s3";
          static inline constexpr const char *name = "DFRobot LoRaWAN ESP32-S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t lora_antpwr = 42;
          static inline constexpr uint8_t lora_rst = 41;
          static inline constexpr uint8_t lora_busy = 40;
          static inline constexpr uint8_t lora_dio1 = 4;
          static inline constexpr uint8_t lora_ss = 10;
          static inline constexpr uint8_t lora_mosi = 6;
          static inline constexpr uint8_t lora_miso = 5;
          static inline constexpr uint8_t lora_sck = 7;
          static inline constexpr uint8_t tft_dc = 14;
          static inline constexpr uint8_t tft_cs = 17;
          static inline constexpr uint8_t tft_rst = 15;
          static inline constexpr uint8_t tft_bl = 16;
        };
      } // namespace dfrobot_lorawan_esp32s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace dfrobot_romeo_esp32s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:dfrobot_romeo_esp32s3";
          static inline constexpr const char *name = "DFRobot Romeo ESP32-S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t gdi_blk = 21;
          static inline constexpr uint8_t gdi_dc = 3;
          static inline constexpr uint8_t gdi_res = 38;
          static inline constexpr uint8_t gdi_cs = 18;
          static inline constexpr uint8_t gdi_sdcs = 0;
          static inline constexpr uint8_t gdi_fcs = 7;
          static inline constexpr uint8_t gdi_tcs = 12;
          static inline constexpr uint8_t gdi_int = 13;
          static inline constexpr uint8_t gdi_busy_te = 14;
          static inline constexpr uint8_t cam_d5 = 4;
          static inline constexpr uint8_t cam_pclk = 5;
          static inline constexpr uint8_t cam_vsync = 6;
          static inline constexpr uint8_t cam_d6 = 7;
          static inline constexpr uint8_t cam_d7 = 8;
          static inline constexpr uint8_t cam_d8 = 46;
          static inline constexpr uint8_t cam_d9 = 48;
          static inline constexpr uint8_t cam_xmclk = 45;
          static inline constexpr uint8_t cam_d2 = 39;
          static inline constexpr uint8_t cam_d3 = 40;
          static inline constexpr uint8_t cam_d4 = 41;
          static inline constexpr uint8_t cam_href = 42;
          static inline constexpr uint8_t m1_en = 12;
          static inline constexpr uint8_t m1_ph = 13;
          static inline constexpr uint8_t m2_en = 14;
          static inline constexpr uint8_t m2_ph = 21;
          static inline constexpr uint8_t m3_en = 9;
          static inline constexpr uint8_t m3_ph = 10;
          static inline constexpr uint8_t m4_en = 47;
          static inline constexpr uint8_t m4_ph = 11;
          static inline constexpr uint8_t gdi_spi_sclk = 17;
          static inline constexpr uint8_t gdi_spi_mosi = 15;
          static inline constexpr uint8_t gdi_spi_miso = 16;
          static inline constexpr uint8_t gdi_scl = 2;
          static inline constexpr uint8_t gdi_sda = 1;
          static inline constexpr uint8_t cam_scl = 2;
          static inline constexpr uint8_t cam_sda = 1;
        };
      } // namespace dfrobot_romeo_esp32s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace dpu_esp32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:dpu_esp32";
          static inline constexpr const char *name = "DPU ESP32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t tp_rst = 21;
          static inline constexpr uint8_t tp_int = 19;
          static inline constexpr uint8_t tft_bl = 18;
          static inline constexpr uint8_t tft_cs = 15;
          static inline constexpr uint8_t tft_dc = 27;
          static inline constexpr uint8_t tft_rst = 32;
          static inline constexpr uint8_t sd_cs = 23;
          static inline constexpr uint8_t sd_cd = 22;
        };
      } // namespace dpu_esp32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace elecrow_crowpanel_7
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:elecrow_crowpanel_7";
          static inline constexpr const char *name = "Elecrow CrowPanel 7.0P";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 6790;
          static inline constexpr uint16_t usb_pid = 29987;
          static inline constexpr uint8_t tx = 37;
          static inline constexpr uint8_t rx = 40;
          static inline constexpr uint8_t txd2 = 17;
          static inline constexpr uint8_t rxd2 = 18;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g17 = 17;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g20 = 20;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g45 = 45;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t g47 = 47;
          static inline constexpr uint8_t g48 = 48;
          static inline constexpr uint8_t adc = 38;
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
        };
      } // namespace elecrow_crowpanel_7
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace epulse_feather
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:epulse_feather";
          static inline constexpr const char *name = "ThingPulse ePulse Feather";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t a1 = 25;
          static inline constexpr uint8_t a2 = 34;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 36;
          static inline constexpr uint8_t a5 = 4;
          static inline constexpr uint8_t a6 = 14;
          static inline constexpr uint8_t a7 = 32;
          static inline constexpr uint8_t a8 = 15;
          static inline constexpr uint8_t a9 = 33;
          static inline constexpr uint8_t a10 = 27;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t batt_monitor = 35;
          static inline constexpr uint8_t a13 = 35;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr int builtin_led = -1;
          static inline constexpr uint8_t bat_volt_pin = 35;
        };
      } // namespace epulse_feather
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace epulse_feather_c6
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:epulse_feather_c6";
          static inline constexpr const char *name = "ThingPulse ePulse Feather C6";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint8_t pin_rgb_led = 8;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t builtin_led = 39;
          static inline constexpr uint8_t rgb_builtin = 39;
        };
      } // namespace epulse_feather_c6
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32";
          static inline constexpr const char *name = "ESP32 Dev Module";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace esp32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32_devkitlipo
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32-devkitlipo";
          static inline constexpr const char *name = "OLIMEX ESP32-DevKit-LiPo";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t tx1 = 33;
          static inline constexpr uint8_t rx1 = 25;
          static inline constexpr uint8_t tx2 = 19;
          static inline constexpr uint8_t rx2 = 18;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace esp32_devkitlipo
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32_evb
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32-evb";
          static inline constexpr const char *name = "OLIMEX ESP32-EVB";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t key_builtin = 34;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t tx1 = 4;
          static inline constexpr uint8_t rx1 = 36;
          static inline constexpr uint8_t tx2 = 17;
          static inline constexpr uint8_t rx2 = 16;
          static inline constexpr uint8_t eth_phy_addr = 0;
          static inline constexpr uint8_t eth_phy_mdc = 23;
          static inline constexpr uint8_t eth_phy_mdio = 18;
          static inline constexpr int8_t eth_phy_power = -1;
        };
      } // namespace esp32_evb
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32_gateway
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32-gateway";
          static inline constexpr const char *name = "OLIMEX ESP32-GATEWAY";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t eth_phy_addr = 0;
          static inline constexpr uint8_t eth_phy_mdc = 23;
          static inline constexpr uint8_t eth_phy_mdio = 18;
          static inline constexpr uint8_t eth_phy_power = 5;
          static inline constexpr uint8_t key_builtin = 34;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t builtin_led = 33;
        };
      } // namespace esp32_gateway
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32_poe
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32-poe";
          static inline constexpr const char *name = "OLIMEX ESP32-POE";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t eth_phy_addr = 0;
          static inline constexpr uint8_t eth_phy_mdc = 23;
          static inline constexpr uint8_t eth_phy_mdio = 18;
          static inline constexpr uint8_t eth_phy_power = 12;
          static inline constexpr uint8_t key_builtin = 34;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t tx1 = 4;
          static inline constexpr uint8_t rx1 = 36;
          static inline constexpr uint8_t tx2 = 33;
          static inline constexpr uint8_t rx2 = 35;
        };
      } // namespace esp32_poe
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32_poe_iso
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32-poe-iso";
          static inline constexpr const char *name = "OLIMEX ESP32-POE-ISO";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t eth_phy_addr = 0;
          static inline constexpr uint8_t eth_phy_mdc = 23;
          static inline constexpr uint8_t eth_phy_mdio = 18;
          static inline constexpr uint8_t eth_phy_power = 12;
          static inline constexpr uint8_t key_builtin = 34;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t tx1 = 4;
          static inline constexpr uint8_t rx1 = 36;
          static inline constexpr uint8_t tx2 = 33;
          static inline constexpr uint8_t rx2 = 35;
        };
      } // namespace esp32_poe_iso
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32_sbc_fabgl
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32-sbc-fabgl";
          static inline constexpr const char *name = "OLIMEX ESP32-SBC-FABGL";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace esp32_sbc_fabgl
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32_trueverit_iot_driver
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32-trueverit-iot-driver";
          static inline constexpr const char *name = "Trueverit ESP32 Universal IoT Driver";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx1 = 12;
          static inline constexpr uint8_t rx1 = 13;
          static inline constexpr uint8_t tx2 = 33;
          static inline constexpr uint8_t rx2 = 39;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t eth_phy_addr = 0;
          static inline constexpr int8_t eth_phy_power = -1;
          static inline constexpr uint8_t eth_phy_mdc = 16;
          static inline constexpr uint8_t eth_phy_mdio = 14;
          static inline constexpr uint8_t builtin_led = 18;
        };
      } // namespace esp32_trueverit_iot_driver
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32_trueverit_iot_driver_mkii
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32-trueverit-iot-driver-mkii";
          static inline constexpr const char *name = "Trueverit ESP32 Universal IoT Driver MK II";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx1 = 12;
          static inline constexpr uint8_t rx1 = 13;
          static inline constexpr uint8_t tx2 = 33;
          static inline constexpr uint8_t rx2 = 39;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t eth_phy_addr = 1;
          static inline constexpr uint8_t eth_phy_power = 2;
          static inline constexpr uint8_t eth_phy_mdc = 16;
          static inline constexpr uint8_t eth_phy_mdio = 14;
          static inline constexpr uint8_t builtin_led = 18;
        };
      } // namespace esp32_trueverit_iot_driver_mkii
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp320
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp320";
          static inline constexpr const char *name = "Electronic SweetPeas - ESP320";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t builtin_led = 5;
        };
      } // namespace esp320
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32c2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32c2";
          static inline constexpr const char *name = "ESP32C2 Dev Module";
          static inline constexpr const char *build_mcu = "esp32c2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 21;
          static inline constexpr uint8_t tx = 20;
          static inline constexpr uint8_t rx = 19;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t builtin_led = 34;
        };
      } // namespace esp32c2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32c3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32c3";
          static inline constexpr const char *name = "ESP32C3 Dev Module";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t pin_rgb_led = 8;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t builtin_led = 30;
          static inline constexpr uint8_t rgb_builtin = 30;
        };
      } // namespace esp32c3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32c3_devkitlipo
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32c3-devkitlipo";
          static inline constexpr const char *name = "OLIMEX ESP32-C3-DevKit-Lipo";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t but_builtin = 9;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t builtin_led = 8;
          static inline constexpr uint8_t builtin_but = 9;
        };
      } // namespace esp32c3_devkitlipo
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32c3m1ikit
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32c3m1IKit";
          static inline constexpr const char *name = "ESP-C3-M1-I-Kit";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t led_warm = 18;
          static inline constexpr uint8_t led_cold = 19;
          static inline constexpr uint8_t led_red = 3;
          static inline constexpr uint8_t led_green = 4;
          static inline constexpr uint8_t led_blue = 5;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t builtin_led = 18;
        };
      } // namespace esp32c3m1ikit
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32c5
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32c5";
          static inline constexpr const char *name = "ESP32C5 Dev Module";
          static inline constexpr const char *build_mcu = "esp32c5";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 29;
          static inline constexpr uint8_t pin_rgb_led = 27;
          static inline constexpr uint8_t tx = 11;
          static inline constexpr uint8_t rx = 12;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t lp_sda = 2;
          static inline constexpr uint8_t lp_scl = 3;
          static inline constexpr uint8_t lp_rx = 4;
          static inline constexpr uint8_t lp_tx = 5;
          static inline constexpr uint8_t builtin_led = 56;
          static inline constexpr uint8_t rgb_builtin = 56;
          static inline constexpr uint8_t sda1 = 2;
          static inline constexpr uint8_t scl1 = 3;
        };
      } // namespace esp32c5
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32c6
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32c6";
          static inline constexpr const char *name = "ESP32C6 Dev Module";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint8_t pin_rgb_led = 8;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t sda1 = 6;
          static inline constexpr uint8_t scl1 = 7;
          static inline constexpr uint8_t builtin_led = 39;
          static inline constexpr uint8_t rgb_builtin = 39;
        };
      } // namespace esp32c6
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32c6_evb
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32c6-evb";
          static inline constexpr const char *name = "OLIMEX ESP32-C6-EVB";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint8_t but_builtin = 9;
          static inline constexpr uint8_t rel1 = 10;
          static inline constexpr uint8_t rel2 = 11;
          static inline constexpr uint8_t rel3 = 22;
          static inline constexpr uint8_t rel4 = 23;
          static inline constexpr uint8_t din1 = 1;
          static inline constexpr uint8_t din2 = 2;
          static inline constexpr uint8_t din3 = 3;
          static inline constexpr uint8_t din4 = 15;
          static inline constexpr uint8_t tx1 = 5;
          static inline constexpr uint8_t rx1 = 4;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t builtin_led = 8;
          static inline constexpr uint8_t builtin_but = 9;
        };
      } // namespace esp32c6_evb
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32c61
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32c61";
          static inline constexpr const char *name = "ESP32C61 Dev Module";
          static inline constexpr const char *build_mcu = "esp32c61";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 30;
          static inline constexpr uint8_t pin_rgb_led = 8;
          static inline constexpr uint8_t tx = 11;
          static inline constexpr uint8_t rx = 10;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t sda1 = 6;
          static inline constexpr uint8_t scl1 = 7;
          static inline constexpr uint8_t builtin_led = 38;
          static inline constexpr uint8_t rgb_builtin = 38;
        };
      } // namespace esp32c61
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32cam
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32cam";
          static inline constexpr const char *name = "AI Thinker ESP32-CAM";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace esp32cam
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32da
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32da";
          static inline constexpr const char *name = "ESP32-WROOM-DA Module";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t ant1 = 2;
          static inline constexpr uint8_t ant2 = 25;
        };
      } // namespace esp32da
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32doit_devkit_v1
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32doit-devkit-v1";
          static inline constexpr const char *name = "DOIT ESP32 DEVKIT V1";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace esp32doit_devkit_v1
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32doit_espduino
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32doit-espduino";
          static inline constexpr const char *name = "DOIT ESPduino32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t io5 = 5;
          static inline constexpr uint8_t io23 = 23;
          static inline constexpr uint8_t io19 = 19;
          static inline constexpr uint8_t io18 = 18;
          static inline constexpr uint8_t io36 = 36;
          static inline constexpr uint8_t io39 = 39;
          static inline constexpr uint8_t io4 = 4;
          static inline constexpr uint8_t io2 = 2;
          static inline constexpr uint8_t io35 = 35;
          static inline constexpr uint8_t io15 = 15;
          static inline constexpr uint8_t io33 = 33;
          static inline constexpr uint8_t io32 = 32;
          static inline constexpr uint8_t io0 = 0;
          static inline constexpr uint8_t io13 = 13;
          static inline constexpr uint8_t io12 = 12;
          static inline constexpr uint8_t io14 = 14;
          static inline constexpr uint8_t io27 = 27;
          static inline constexpr uint8_t io16 = 16;
          static inline constexpr uint8_t io17 = 17;
          static inline constexpr uint8_t io25 = 25;
          static inline constexpr uint8_t io26 = 26;
          static inline constexpr uint8_t tx0 = 1;
          static inline constexpr uint8_t rx0 = 3;
          static inline constexpr uint8_t sd2 = 9;
          static inline constexpr uint8_t sd3 = 10;
          static inline constexpr uint8_t cmd = 11;
          static inline constexpr uint8_t clk = 6;
          static inline constexpr uint8_t sd0 = 7;
          static inline constexpr uint8_t sd1 = 8;
          static inline constexpr uint8_t a1 = 4;
          static inline constexpr uint8_t a2 = 35;
          static inline constexpr uint8_t a3 = 34;
          static inline constexpr uint8_t a4 = 36;
          static inline constexpr uint8_t a5 = 39;
          static inline constexpr uint8_t d0 = 3;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 26;
          static inline constexpr uint8_t d3 = 25;
          static inline constexpr uint8_t d4 = 17;
          static inline constexpr uint8_t d5 = 16;
          static inline constexpr uint8_t d6 = 27;
          static inline constexpr uint8_t d7 = 14;
          static inline constexpr uint8_t d8 = 12;
          static inline constexpr uint8_t d9 = 13;
          static inline constexpr uint8_t d10 = 5;
          static inline constexpr uint8_t d11 = 23;
          static inline constexpr uint8_t d12 = 19;
          static inline constexpr uint8_t d13 = 18;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t builtin_led = 2;
          static inline constexpr uint8_t pin_wire_sda = 21;
          static inline constexpr uint8_t pin_wire_scl = 22;
          static inline constexpr uint8_t pin_spi_ss = 5;
          static inline constexpr uint8_t pin_spi_mosi = 23;
          static inline constexpr uint8_t pin_spi_miso = 19;
          static inline constexpr uint8_t pin_spi_sck = 18;
          static inline constexpr uint8_t pin_a0 = 2;
        };
      } // namespace esp32doit_espduino
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32h2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32h2";
          static inline constexpr const char *name = "ESP32H2 Dev Module";
          static inline constexpr const char *build_mcu = "esp32h2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 28;
          static inline constexpr uint8_t pin_rgb_led = 8;
          static inline constexpr uint8_t tx = 24;
          static inline constexpr uint8_t rx = 23;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t builtin_led = 36;
          static inline constexpr uint8_t rgb_builtin = 36;
        };
      } // namespace esp32h2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32h2_devkitlipo
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32h2-devkitlipo";
          static inline constexpr const char *name = "OLIMEX ESP32-H2-DevKit-LiPo";
          static inline constexpr const char *build_mcu = "esp32h2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 28;
          static inline constexpr uint8_t pin_rgb_led = 8;
          static inline constexpr uint8_t key_builtin = 9;
          static inline constexpr uint8_t tx = 24;
          static inline constexpr uint8_t rx = 23;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t builtin_led = 36;
          static inline constexpr uint8_t rgb_builtin = 36;
        };
      } // namespace esp32h2_devkitlipo
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32micromod
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32micromod";
          static inline constexpr const char *name = "SparkFun ESP32 MicroMod";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t tx1 = 17;
          static inline constexpr uint8_t rx1 = 16;
          static inline constexpr uint8_t i2c_int = 4;
          static inline constexpr uint8_t wire1_pin_defined = 1;
          static inline constexpr uint8_t sda1 = 26;
          static inline constexpr uint8_t scl1 = 25;
          static inline constexpr uint8_t a1 = 35;
          static inline constexpr uint8_t batt_vin = 39;
          static inline constexpr uint8_t pwm0 = 13;
          static inline constexpr uint8_t pwm1 = 12;
          static inline constexpr uint8_t d0 = 14;
          static inline constexpr uint8_t d1 = 27;
          static inline constexpr uint8_t g0 = 15;
          static inline constexpr uint8_t g1 = 25;
          static inline constexpr uint8_t g2 = 26;
          static inline constexpr uint8_t g3 = 17;
          static inline constexpr uint8_t g4 = 16;
          static inline constexpr uint8_t g5 = 32;
          static inline constexpr uint8_t g6 = 33;
          static inline constexpr uint8_t aud_out = 17;
          static inline constexpr uint8_t aud_in = 16;
          static inline constexpr uint8_t aud_lrclk = 25;
          static inline constexpr uint8_t aud_bclk = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t bat_volt_pin = 39;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace esp32micromod
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32p4
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32p4";
          static inline constexpr const char *name = "ESP32P4 Dev Module";
          static inline constexpr const char *build_mcu = "esp32p4";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 55;
          static inline constexpr uint8_t tx = 37;
          static inline constexpr uint8_t rx = 38;
          static inline constexpr uint8_t a1 = 17;
          static inline constexpr uint8_t a2 = 18;
          static inline constexpr uint8_t a3 = 19;
          static inline constexpr uint8_t a4 = 20;
          static inline constexpr uint8_t a5 = 21;
          static inline constexpr uint8_t a6 = 22;
          static inline constexpr uint8_t a7 = 23;
          static inline constexpr uint8_t a8 = 49;
          static inline constexpr uint8_t a9 = 50;
          static inline constexpr uint8_t a10 = 51;
          static inline constexpr uint8_t a11 = 52;
          static inline constexpr uint8_t a12 = 53;
          static inline constexpr uint8_t a13 = 54;
          static inline constexpr uint8_t t0 = 2;
          static inline constexpr uint8_t t1 = 3;
          static inline constexpr uint8_t t2 = 4;
          static inline constexpr uint8_t t3 = 5;
          static inline constexpr uint8_t t4 = 6;
          static inline constexpr uint8_t t5 = 7;
          static inline constexpr uint8_t t6 = 8;
          static inline constexpr uint8_t t7 = 9;
          static inline constexpr uint8_t t8 = 10;
          static inline constexpr uint8_t t9 = 11;
          static inline constexpr uint8_t t10 = 12;
          static inline constexpr uint8_t t11 = 13;
          static inline constexpr uint8_t t12 = 14;
          static inline constexpr uint8_t t13 = 15;
          static inline constexpr uint8_t eth_phy_addr = 1;
          static inline constexpr uint8_t eth_phy_mdc = 31;
          static inline constexpr uint8_t eth_phy_mdio = 52;
          static inline constexpr uint8_t eth_phy_power = 51;
          static inline constexpr uint8_t eth_rmii_tx_en = 49;
          static inline constexpr uint8_t eth_rmii_tx0 = 34;
          static inline constexpr uint8_t eth_rmii_tx1 = 35;
          static inline constexpr uint8_t eth_rmii_rx0 = 29;
          static inline constexpr uint8_t eth_rmii_rx1_en = 30;
          static inline constexpr uint8_t eth_rmii_crs_dv = 28;
          static inline constexpr uint8_t eth_rmii_clk = 50;
          static inline constexpr uint8_t board_sdmmc_slot = 0;
          static inline constexpr uint8_t board_sdmmc_power_channel = 4;
          static inline constexpr uint8_t board_sdmmc_power_pin = 45;
          static inline constexpr uint8_t board_sdio_esp_hosted_clk = 18;
          static inline constexpr uint8_t board_sdio_esp_hosted_cmd = 19;
          static inline constexpr uint8_t board_sdio_esp_hosted_d0 = 14;
          static inline constexpr uint8_t board_sdio_esp_hosted_d1 = 15;
          static inline constexpr uint8_t board_sdio_esp_hosted_d2 = 16;
          static inline constexpr uint8_t board_sdio_esp_hosted_d3 = 17;
          static inline constexpr uint8_t board_sdio_esp_hosted_reset = 54;
          static inline constexpr uint8_t board_sdmmc_power_on_level = 0;
        };
      } // namespace esp32p4
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32p4_4ds_mipi
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32p4_4ds_mipi";
          static inline constexpr const char *name = "4D Systems ESP32-P4 MIPI Displays";
          static inline constexpr const char *build_mcu = "esp32p4";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 55;
          static inline constexpr uint8_t tx = 37;
          static inline constexpr uint8_t rx = 38;
          static inline constexpr uint8_t a1 = 20;
          static inline constexpr uint8_t a2 = 19;
          static inline constexpr uint8_t a3 = 18;
          static inline constexpr uint8_t a4 = 17;
          static inline constexpr uint8_t a5 = 52;
          static inline constexpr uint8_t a6 = 51;
          static inline constexpr uint8_t a7 = 50;
          static inline constexpr uint8_t a8 = 49;
          static inline constexpr uint8_t a9 = 16;
          static inline constexpr uint8_t t0 = 15;
          static inline constexpr uint8_t t1 = 14;
          static inline constexpr uint8_t t2 = 6;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 2;
          static inline constexpr uint8_t lcd_bl_io = 22;
          static inline constexpr uint8_t lcd_bl_on_level = 1;
          static inline constexpr uint8_t lcd_rst_io = 23;
          static inline constexpr uint8_t i2c_sda = 7;
          static inline constexpr uint8_t i2c_scl = 8;
          static inline constexpr uint8_t ctp_rst = 4;
          static inline constexpr uint8_t ctp_int = 5;
          static inline constexpr uint8_t amp_ctrl = 53;
          static inline constexpr uint8_t i2s_dsdin = 9;
          static inline constexpr uint8_t i2s_lrck = 10;
          static inline constexpr uint8_t i2s_asdout = 11;
          static inline constexpr uint8_t i2s_sclk = 12;
          static inline constexpr uint8_t i2s_mclk = 13;
          static inline constexpr uint8_t board_sdmmc_slot = 0;
          static inline constexpr uint8_t board_sdmmc_power_channel = 4;
          static inline constexpr uint8_t board_sdmmc_power_pin = 45;
          static inline constexpr uint8_t lcd_bl_off_level = !1;
          static inline constexpr bool lcd_rst_active_high = true;
          static inline constexpr uint8_t board_sdmmc_power_on_level = 0;
        };
      } // namespace esp32p4_4ds_mipi
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32p4_4ds_mipi_round
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32p4_4ds_mipi_round";
          static inline constexpr const char *name = "4D Systems ESP32-P4 Round MIPI Displays";
          static inline constexpr const char *build_mcu = "esp32p4";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 55;
          static inline constexpr uint8_t tx = 37;
          static inline constexpr uint8_t rx = 38;
          static inline constexpr uint8_t a1 = 20;
          static inline constexpr uint8_t a2 = 19;
          static inline constexpr uint8_t a3 = 18;
          static inline constexpr uint8_t a4 = 17;
          static inline constexpr uint8_t a5 = 52;
          static inline constexpr uint8_t a6 = 51;
          static inline constexpr uint8_t a7 = 50;
          static inline constexpr uint8_t a8 = 49;
          static inline constexpr uint8_t a9 = 16;
          static inline constexpr uint8_t t0 = 15;
          static inline constexpr uint8_t t1 = 14;
          static inline constexpr uint8_t t2 = 6;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 2;
          static inline constexpr uint8_t lcd_bl_io = 22;
          static inline constexpr uint8_t lcd_bl_on_level = 1;
          static inline constexpr uint8_t lcd_rst_io = 23;
          static inline constexpr uint8_t i2c_sda = 7;
          static inline constexpr uint8_t i2c_scl = 8;
          static inline constexpr uint8_t ctp_rst = 4;
          static inline constexpr uint8_t ctp_int = 5;
          static inline constexpr uint8_t amp_ctrl = 53;
          static inline constexpr uint8_t i2s_dsdin = 9;
          static inline constexpr uint8_t i2s_lrck = 10;
          static inline constexpr uint8_t i2s_asdout = 11;
          static inline constexpr uint8_t i2s_sclk = 12;
          static inline constexpr uint8_t i2s_mclk = 13;
          static inline constexpr uint8_t board_sdmmc_slot = 0;
          static inline constexpr uint8_t board_sdmmc_power_channel = 4;
          static inline constexpr uint8_t board_sdmmc_power_pin = 45;
          static inline constexpr uint8_t lcd_bl_off_level = !1;
          static inline constexpr bool lcd_rst_active_high = true;
          static inline constexpr uint8_t board_sdmmc_power_on_level = 0;
        };
      } // namespace esp32p4_4ds_mipi_round
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32p4_core_board
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32p4_core_board";
          static inline constexpr const char *name = "ESP32P4 Core Board";
          static inline constexpr const char *build_mcu = "esp32p4";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 55;
          static inline constexpr uint8_t pin_rgb_led = 44;
          static inline constexpr uint8_t tx = 37;
          static inline constexpr uint8_t rx = 38;
          static inline constexpr uint8_t a1 = 17;
          static inline constexpr uint8_t a2 = 18;
          static inline constexpr uint8_t a3 = 19;
          static inline constexpr uint8_t a4 = 20;
          static inline constexpr uint8_t a5 = 21;
          static inline constexpr uint8_t a6 = 22;
          static inline constexpr uint8_t a7 = 23;
          static inline constexpr uint8_t a8 = 49;
          static inline constexpr uint8_t a9 = 50;
          static inline constexpr uint8_t a10 = 51;
          static inline constexpr uint8_t a11 = 52;
          static inline constexpr uint8_t a12 = 53;
          static inline constexpr uint8_t a13 = 54;
          static inline constexpr uint8_t t0 = 2;
          static inline constexpr uint8_t t1 = 3;
          static inline constexpr uint8_t t2 = 4;
          static inline constexpr uint8_t t3 = 5;
          static inline constexpr uint8_t t4 = 6;
          static inline constexpr uint8_t t5 = 7;
          static inline constexpr uint8_t t6 = 8;
          static inline constexpr uint8_t t7 = 9;
          static inline constexpr uint8_t t8 = 10;
          static inline constexpr uint8_t t9 = 11;
          static inline constexpr uint8_t t10 = 12;
          static inline constexpr uint8_t t11 = 13;
          static inline constexpr uint8_t t12 = 14;
          static inline constexpr uint8_t t13 = 15;
          static inline constexpr uint8_t board_sdio_esp_hosted_reset = 54;
          static inline constexpr uint8_t board_sdio_esp_hosted_boot = 53;
          static inline constexpr uint8_t board_sdio_esp_hosted_cmd = 52;
          static inline constexpr uint8_t board_sdio_esp_hosted_clk = 51;
          static inline constexpr uint8_t board_sdio_esp_hosted_d0 = 50;
          static inline constexpr uint8_t board_sdio_esp_hosted_d1 = 49;
          static inline constexpr uint8_t board_sdio_esp_hosted_d2 = 48;
          static inline constexpr uint8_t board_sdio_esp_hosted_d3 = 47;
          static inline constexpr uint8_t builtin_led = 99;
          static inline constexpr uint8_t rgb_builtin = 99;
        };
      } // namespace esp32p4_core_board
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32s2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32s2";
          static inline constexpr const char *name = "ESP32S2 Dev Module";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint8_t pin_rgb_led = 18;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr uint8_t builtin_led = 65;
          static inline constexpr uint8_t rgb_builtin = 65;
        };
      } // namespace esp32s2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32s2_devkitlipo
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32s2-devkitlipo";
          static inline constexpr const char *name = "OLIMEX ESP32-S2-DevKit-Lipo";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint8_t pin_rgb_led = 18;
          static inline constexpr uint8_t but_builtin = 0;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr uint8_t rgb_builtin = 18;
          static inline constexpr uint8_t builtin_but = 0;
        };
      } // namespace esp32s2_devkitlipo
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32s2_devkitlipo_usb
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32s2-devkitlipo-usb";
          static inline constexpr const char *name = "OLIMEX ESP32-S2-DevKit-Lipo-USB";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint8_t pin_rgb_led = 18;
          static inline constexpr uint8_t but_builtin = 0;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr uint8_t rgb_builtin = 18;
          static inline constexpr uint8_t builtin_but = 0;
        };
      } // namespace esp32s2_devkitlipo_usb
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32s2usb
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32s2usb";
          static inline constexpr const char *name = "ESP32S2 Native USB";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint8_t usb_pid = 3;
          static inline constexpr const char *usb_serial = "0";
          static inline constexpr const char *usb_fw_msc_product_revision = "1.23";
          static inline constexpr uint8_t usb_fw_msc_serial_number = 0;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "Espressif Systems";
          static inline constexpr const char *usb_product = "ESP32-S2-USB";
          static inline constexpr bool usb_webusb_enabled = false;
          static inline constexpr const char *usb_webusb_url = "https://docs.espressif.com/projects/arduino-esp32/en/latest/_static/webusb.html";
          static inline constexpr const char *usb_fw_msc_vendor_id = "ESP32-S2";
          static inline constexpr const char *usb_fw_msc_product_id = "Firmware MSC";
          static inline constexpr const char *usb_fw_msc_volume_name = "S2-Firmware";
        };
      } // namespace esp32s2usb
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32s3";
          static inline constexpr const char *name = "ESP32S3 Dev Module";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t pin_rgb_led = 48;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
        };
      } // namespace esp32s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32s3_devkitlipo
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32s3-devkitlipo";
          static inline constexpr const char *name = "OLIMEX ESP32-S3-DevKit-Lipo";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t but_builtin = 0;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t tx1 = 17;
          static inline constexpr uint8_t rx1 = 18;
          static inline constexpr uint8_t pwr_sense = 5;
          static inline constexpr uint8_t bat_sense = 6;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 38;
          static inline constexpr uint8_t builtin_but = 0;
          static inline constexpr uint8_t bat_volt_pin = 6;
        };
      } // namespace esp32s3_devkitlipo
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32s3_octal
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32s3-octal";
          static inline constexpr const char *name = "ESP32S3 Dev Module Octal (WROOM2)";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t pin_rgb_led = 48;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
        };
      } // namespace esp32s3_octal
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32s3_powerfeather
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32s3_powerfeather";
          static inline constexpr const char *name = "ESP32-S3 PowerFeather";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33211;
          static inline constexpr uint8_t alarm = 21;
          static inline constexpr uint8_t int_ = 5;
          static inline constexpr uint8_t led = 46;
          static inline constexpr uint8_t btn = 0;
          static inline constexpr uint8_t en = 7;
          static inline constexpr uint8_t tx = 44;
          static inline constexpr uint8_t rx = 42;
          static inline constexpr uint8_t tx0 = 43;
          static inline constexpr uint8_t wire1_pin_defined = 1;
          static inline constexpr uint8_t scl1 = 48;
          static inline constexpr uint8_t sda1 = 47;
          static inline constexpr uint8_t a1 = 9;
          static inline constexpr uint8_t a2 = 8;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 2;
          static inline constexpr uint8_t a5 = 1;
          static inline constexpr uint8_t d5 = 15;
          static inline constexpr uint8_t d6 = 16;
          static inline constexpr uint8_t d7 = 37;
          static inline constexpr uint8_t d8 = 6;
          static inline constexpr uint8_t d9 = 17;
          static inline constexpr uint8_t d10 = 18;
          static inline constexpr uint8_t d11 = 45;
          static inline constexpr uint8_t d12 = 12;
          static inline constexpr uint8_t d13 = 11;
          static inline constexpr const char *usb_manufacturer = "PowerFeather";
          static inline constexpr const char *usb_product = "ESP32-S3 PowerFeather";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 46;
        };
      } // namespace esp32s3_powerfeather
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32s3box
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32s3box";
          static inline constexpr const char *name = "ESP32-S3-Box";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t i2c_sda = 8;
          static inline constexpr uint8_t i2c_scl = 18;
          static inline constexpr uint8_t es7210_addr = 64;
          static inline constexpr uint8_t es8311_addr = 24;
          static inline constexpr uint8_t icm42607p_addr = 104;
          static inline constexpr uint8_t tt21100_addr = 36;
          static inline constexpr uint8_t tft_dc = 4;
          static inline constexpr uint8_t tft_cs = 5;
          static inline constexpr uint8_t tft_mosi = 6;
          static inline constexpr uint8_t tft_clk = 7;
          static inline constexpr uint8_t tft_miso = 0;
          static inline constexpr uint8_t tft_bl = 45;
          static inline constexpr uint8_t tft_rst = 48;
          static inline constexpr uint8_t i2s_lrck = 47;
          static inline constexpr uint8_t i2s_mclk = 2;
          static inline constexpr uint8_t i2s_sclk = 17;
          static inline constexpr uint8_t i2s_sdin = 16;
          static inline constexpr uint8_t i2s_dout = 15;
          static inline constexpr uint8_t pa_pin = 46;
          static inline constexpr uint8_t mute_pin = 1;
          static inline constexpr uint8_t ts_irq = 3;
        };
      } // namespace esp32s3box
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32s3camlcd
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32s3camlcd";
          static inline constexpr const char *name = "ESP32S3 CAM LCD";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t i2c_sda = 17;
          static inline constexpr uint8_t i2c_scl = 18;
          static inline constexpr int8_t pwdn_gpio_num = -1;
          static inline constexpr int8_t reset_gpio_num = -1;
          static inline constexpr uint8_t xclk_gpio_num = 40;
          static inline constexpr uint8_t siod_gpio_num = 17;
          static inline constexpr uint8_t sioc_gpio_num = 18;
          static inline constexpr uint8_t y9_gpio_num = 39;
          static inline constexpr uint8_t y8_gpio_num = 41;
          static inline constexpr uint8_t y7_gpio_num = 42;
          static inline constexpr uint8_t y6_gpio_num = 12;
          static inline constexpr uint8_t y5_gpio_num = 3;
          static inline constexpr uint8_t y4_gpio_num = 14;
          static inline constexpr uint8_t y3_gpio_num = 47;
          static inline constexpr uint8_t y2_gpio_num = 13;
          static inline constexpr uint8_t vsync_gpio_num = 21;
          static inline constexpr uint8_t href_gpio_num = 38;
          static inline constexpr uint8_t pclk_gpio_num = 11;
          static inline constexpr uint32_t tft_freq = 40000000;
          static inline constexpr uint8_t tft_bits = 8;
          static inline constexpr uint16_t tft_width = 480;
          static inline constexpr uint16_t tft_height = 320;
          static inline constexpr uint8_t tft_wr = 4;
          static inline constexpr uint8_t tft_dc = 2;
          static inline constexpr uint8_t tft_d0 = 45;
          static inline constexpr uint8_t tft_d1 = 16;
          static inline constexpr uint8_t tft_d2 = 15;
          static inline constexpr uint8_t tft_d3 = 10;
          static inline constexpr uint8_t tft_d4 = 8;
          static inline constexpr uint8_t tft_d5 = 7;
          static inline constexpr uint8_t tft_d6 = 6;
          static inline constexpr uint8_t tft_d7 = 5;
          static inline constexpr uint8_t sdmmc_cmd = 20;
          static inline constexpr uint8_t sdmmc_clk = 9;
          static inline constexpr uint8_t sdmmc_data = 19;
          static inline constexpr uint8_t mic_clk = 0;
          static inline constexpr uint8_t mic_data = 1;
        };
      } // namespace esp32s3camlcd
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32s3usbotg
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32s3usbotg";
          static inline constexpr const char *name = "ESP32-S3-USB-OTG";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t sdmmc_d2 = 33;
          static inline constexpr uint8_t sdmmc_d3 = 34;
          static inline constexpr uint8_t sdmmc_cmd = 35;
          static inline constexpr uint8_t sdmmc_clk = 36;
          static inline constexpr uint8_t sdmmc_d0 = 37;
          static inline constexpr uint8_t sdmmc_d1 = 38;
          static inline constexpr uint8_t lcd_width = 240;
          static inline constexpr uint8_t lcd_height = 240;
          static inline constexpr int8_t lcd_miso = -1;
          static inline constexpr uint8_t lcd_dc = 4;
          static inline constexpr uint8_t lcd_cs = 5;
          static inline constexpr uint8_t lcd_clk = 6;
          static inline constexpr uint8_t lcd_mosi = 7;
          static inline constexpr uint8_t lcd_rst = 8;
          static inline constexpr uint8_t lcd_bl = 9;
          static inline constexpr uint8_t button_ok = 0;
          static inline constexpr uint8_t button_up = 10;
          static inline constexpr uint8_t button_down = 11;
          static inline constexpr uint8_t button_menu = 14;
          static inline constexpr uint8_t led_green = 15;
          static inline constexpr uint8_t led_yellow = 16;
          static inline constexpr uint8_t dev_vbus_en = 12;
          static inline constexpr uint8_t boost_en = 13;
          static inline constexpr uint8_t limit_en = 17;
          static inline constexpr uint8_t usb_host_en = 18;
          static inline constexpr uint8_t over_current = 21;
          static inline constexpr uint8_t host_volts = 1;
          static inline constexpr uint8_t bat_volts = 2;
          static inline constexpr uint8_t usb_dn = 19;
          static inline constexpr uint8_t usb_dp = 20;
          static inline constexpr uint8_t mtck = 39;
          static inline constexpr uint8_t mtdo = 40;
          static inline constexpr uint8_t mtdi = 41;
          static inline constexpr uint8_t mtms = 42;
          static inline constexpr uint8_t bat_volt_pin = 2;
        };
      } // namespace esp32s3usbotg
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32thing
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32thing";
          static inline constexpr const char *name = "SparkFun ESP32 Thing";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t f_xtal_mhz = 26;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 5;
        };
      } // namespace esp32thing
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32thing_plus
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32thing_plus";
          static inline constexpr const char *name = "SparkFun ESP32 Thing Plus";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 17;
          static inline constexpr uint8_t rx = 16;
          static inline constexpr uint8_t a1 = 25;
          static inline constexpr uint8_t a2 = 34;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 36;
          static inline constexpr uint8_t a5 = 4;
          static inline constexpr uint8_t a6 = 14;
          static inline constexpr uint8_t a7 = 32;
          static inline constexpr uint8_t a8 = 15;
          static inline constexpr uint8_t a9 = 33;
          static inline constexpr uint8_t a10 = 27;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t tx1 = 17;
          static inline constexpr uint8_t rx1 = 16;
        };
      } // namespace esp32thing_plus
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32thing_plus_c
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32thing_plus_c";
          static inline constexpr const char *name = "SparkFun ESP32 Thing Plus C";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 17;
          static inline constexpr uint8_t rx = 16;
          static inline constexpr uint8_t a1 = 25;
          static inline constexpr uint8_t a2 = 34;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 36;
          static inline constexpr uint8_t a5 = 35;
          static inline constexpr uint8_t a6 = 14;
          static inline constexpr uint8_t a7 = 32;
          static inline constexpr uint8_t a8 = 15;
          static inline constexpr uint8_t a9 = 33;
          static inline constexpr uint8_t a10 = 27;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t rgb_builtin = 42;
          static inline constexpr uint8_t tx1 = 17;
          static inline constexpr uint8_t rx1 = 16;
        };
      } // namespace esp32thing_plus_c
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32vn_iot_uno
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32vn-iot-uno";
          static inline constexpr const char *name = "ESP32vn IoT Uno";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace esp32vn_iot_uno
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32wrover
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32wrover";
          static inline constexpr const char *name = "ESP32 Wrover Module";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace esp32wrover
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace esp32wroverkit
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:esp32wroverkit";
          static inline constexpr const char *name = "ESP32 Wrover Kit (all versions)";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace esp32wroverkit
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace espea32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:espea32";
          static inline constexpr const char *name = "ESPea32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 5;
        };
      } // namespace espea32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace espectro32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:espectro32";
          static inline constexpr const char *name = "ESPectro32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t espectro32_version = 1;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t sd_ss = 33;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 15;
        };
      } // namespace espectro32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace espino32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:espino32";
          static inline constexpr const char *name = "ThaiEasyElec\'s ESPino32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t builtin_key = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 16;
        };
      } // namespace espino32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace featheresp32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:featheresp32";
          static inline constexpr const char *name = "Adafruit ESP32 Feather";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 17;
          static inline constexpr uint8_t rx = 16;
          static inline constexpr uint8_t a1 = 25;
          static inline constexpr uint8_t a2 = 34;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 36;
          static inline constexpr uint8_t a5 = 4;
          static inline constexpr uint8_t a6 = 14;
          static inline constexpr uint8_t a7 = 32;
          static inline constexpr uint8_t a8 = 15;
          static inline constexpr uint8_t a9 = 33;
          static inline constexpr uint8_t a10 = 27;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t batt_monitor = 35;
          static inline constexpr uint8_t a13 = 35;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t tx1 = 17;
          static inline constexpr uint8_t rx1 = 16;
          static inline constexpr uint8_t bat_volt_pin = 35;
        };
      } // namespace featheresp32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace fed4
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:fed4";
          static inline constexpr const char *name = "FED4";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33509;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sda2 = 20;
          static inline constexpr uint8_t scl2 = 19;
          static inline constexpr uint8_t sdcs = 10;
          static inline constexpr uint8_t dscs = 14;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 2;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 4;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 6;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d13 = 13;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t boot_btn = 0;
          static inline constexpr uint8_t vbat_voltage = 7;
          static inline constexpr uint8_t ldo2 = 47;
          static inline constexpr uint8_t status_rgb = 35;
          static inline constexpr uint8_t rgb_strip = 36;
          static inline constexpr uint8_t interrupt_pin = 18;
          static inline constexpr uint8_t user_btn_1 = 14;
          static inline constexpr uint8_t user_btn_2 = 39;
          static inline constexpr uint8_t user_btn_3 = 40;
          static inline constexpr uint8_t amp_din = 39;
          static inline constexpr uint8_t amp_sd = 42;
          static inline constexpr uint8_t amp_bclk = 45;
          static inline constexpr uint8_t amp_lrclk = 48;
          static inline constexpr uint8_t msby = 15;
          static inline constexpr uint8_t trrs_1 = 4;
          static inline constexpr uint8_t trrs_2 = 2;
          static inline constexpr uint8_t trrs_3 = 3;
          static inline constexpr const char *usb_manufacturer = "Smart Bee Designs LLC";
          static inline constexpr const char *usb_product = "FED4";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 7;
          static inline constexpr uint8_t pin_rgb_led = 35;
          static inline constexpr uint8_t builtin_led = 84;
          static inline constexpr uint8_t rgb_builtin = 84;
        };
      } // namespace fed4
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace firebeetle32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:firebeetle32";
          static inline constexpr const char *name = "FireBeetle-ESP32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t d0 = 3;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 25;
          static inline constexpr uint8_t d3 = 26;
          static inline constexpr uint8_t d4 = 27;
          static inline constexpr uint8_t d5 = 9;
          static inline constexpr uint8_t d6 = 10;
          static inline constexpr uint8_t d7 = 13;
          static inline constexpr uint8_t d8 = 5;
          static inline constexpr uint8_t d9 = 2;
          static inline constexpr uint8_t d10 = 0;
          static inline constexpr uint8_t a1 = 39;
          static inline constexpr uint8_t a2 = 34;
          static inline constexpr uint8_t a3 = 35;
          static inline constexpr uint8_t a4 = 15;
          static inline constexpr uint8_t a5 = 35;
          static inline constexpr uint8_t a6 = 4;
          static inline constexpr uint8_t a7 = 0;
          static inline constexpr uint8_t a8 = 2;
          static inline constexpr uint8_t a9 = 13;
          static inline constexpr uint8_t a10 = 12;
          static inline constexpr uint8_t a11 = 14;
          static inline constexpr uint8_t a12 = 27;
          static inline constexpr uint8_t a13 = 25;
          static inline constexpr uint8_t a14 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace firebeetle32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace fm_devkit
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:fm-devkit";
          static inline constexpr const char *name = "ESP32 FM DevKit";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t sw1 = 4;
          static inline constexpr uint8_t sw2 = 18;
          static inline constexpr uint8_t sw3 = 19;
          static inline constexpr uint8_t sw4 = 21;
          static inline constexpr uint8_t i2s_mclk = 2;
          static inline constexpr uint8_t i2s_lrclk = 25;
          static inline constexpr uint8_t i2s_sclk = 26;
          static inline constexpr uint8_t i2s_dout = 22;
          static inline constexpr uint8_t d0 = 34;
          static inline constexpr uint8_t d1 = 35;
          static inline constexpr uint8_t d2 = 32;
          static inline constexpr uint8_t d3 = 33;
          static inline constexpr uint8_t d4 = 27;
          static inline constexpr uint8_t d5 = 14;
          static inline constexpr uint8_t d6 = 12;
          static inline constexpr uint8_t d7 = 13;
          static inline constexpr uint8_t d8 = 15;
          static inline constexpr uint8_t d9 = 23;
          static inline constexpr uint8_t d10 = 0;
          static inline constexpr uint8_t builtin_led = 5;
        };
      } // namespace fm_devkit
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace fobe_quill_esp32s3_mesh
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:fobe_quill_esp32s3_mesh";
          static inline constexpr const char *name = "FoBE Quill ESP32S3 Mesh";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33524;
          static inline constexpr uint8_t pin_vbat = 10;
          static inline constexpr uint8_t pin_button1 = 0;
          static inline constexpr uint8_t tx = 9;
          static inline constexpr uint8_t rx = 8;
          static inline constexpr uint8_t pin_oled_sda = 14;
          static inline constexpr uint8_t pin_oled_scl = 13;
          static inline constexpr uint8_t pin_oled_en = 12;
          static inline constexpr uint8_t pin_sx126x_nss = 45;
          static inline constexpr uint8_t pin_sx126x_dio1 = 42;
          static inline constexpr uint8_t pin_sx126x_busy = 43;
          static inline constexpr uint8_t pin_sx126x_reset = 44;
          static inline constexpr int pin_sx126x_txen = -1;
          static inline constexpr uint8_t pin_sx126x_rxen = 46;
          static inline constexpr uint8_t sx126x_dio3_tcxo_voltage = 1.8;
          static inline constexpr uint8_t pin_mfp1 = 38;
          static inline constexpr uint8_t pin_mfp2 = 37;
          static inline constexpr uint8_t pin_mfp3 = 36;
          static inline constexpr uint8_t pin_mfp4 = 35;
          static inline constexpr uint8_t pin_peri_en = 1;
          static inline constexpr uint8_t a1 = 3;
          static inline constexpr uint8_t a2 = 4;
          static inline constexpr uint8_t a3 = 5;
          static inline constexpr uint8_t a4 = 6;
          static inline constexpr uint8_t a5 = 7;
          static inline constexpr uint8_t d0 = 8;
          static inline constexpr uint8_t d1 = 9;
          static inline constexpr uint8_t d2 = 11;
          static inline constexpr uint8_t d3 = 38;
          static inline constexpr uint8_t d4 = 37;
          static inline constexpr uint8_t d5 = 36;
          static inline constexpr uint8_t d6 = 35;
          static inline constexpr uint8_t d7 = 34;
          static inline constexpr uint8_t d8 = 33;
          static inline constexpr uint8_t d9 = 47;
          static inline constexpr uint8_t d10 = 48;
          static inline constexpr uint8_t d11 = 21;
          static inline constexpr uint8_t d12 = 18;
          static inline constexpr uint8_t d13 = 17;
          static inline constexpr uint8_t mtck = 39;
          static inline constexpr uint8_t mtdo = 40;
          static inline constexpr uint8_t mtdi = 41;
          static inline constexpr uint8_t mtms = 42;
          static inline constexpr const char *usb_manufacturer = "FoBE Studio";
          static inline constexpr const char *usb_product = "FoBE Quill ESP32S3 Mesh";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 11;
          static inline constexpr uint8_t bat_volt_pin = 10;
        };
      } // namespace fobe_quill_esp32s3_mesh
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace franzininho_wifi_esp32s2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:franzininho_wifi_esp32s2";
          static inline constexpr const char *name = "Franzininho WiFi";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 32937;
          static inline constexpr const char *usb_serial = "0";
          static inline constexpr uint8_t pin_rgb_led = 18;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "Franzininho";
          static inline constexpr const char *usb_product = "Franzininho WIFI";
          static inline constexpr bool usb_webusb_enabled = false;
          static inline constexpr uint8_t builtin_led = 65;
          static inline constexpr uint8_t rgb_builtin = 65;
        };
      } // namespace franzininho_wifi_esp32s2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace franzininho_wifi_msc_esp32s2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:franzininho_wifi_msc_esp32s2";
          static inline constexpr const char *name = "Franzininho WiFi MSC";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 32937;
          static inline constexpr const char *usb_serial = "0";
          static inline constexpr const char *usb_fw_msc_product_revision = "1.23";
          static inline constexpr uint8_t usb_fw_msc_serial_number = 0;
          static inline constexpr uint8_t pin_rgb_led = 18;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "Franzininho";
          static inline constexpr const char *usb_product = "Franzininho WIFI MSC";
          static inline constexpr bool usb_webusb_enabled = false;
          static inline constexpr const char *usb_fw_msc_vendor_id = "ESP32-S2";
          static inline constexpr const char *usb_fw_msc_product_id = "Firmware MSC";
          static inline constexpr const char *usb_fw_msc_volume_name = "S2-Firmware";
          static inline constexpr uint8_t builtin_led = 65;
          static inline constexpr uint8_t rgb_builtin = 65;
        };
      } // namespace franzininho_wifi_msc_esp32s2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace fri3d_2024_esp32s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:fri3d_2024_esp32s3";
          static inline constexpr const char *name = "Fri3d Badge 2024 (ESP32-S3-WROOM-1)";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t x_ws2812_num_leds = 5;
          static inline constexpr uint8_t pin_ws2812 = 12;
          static inline constexpr uint8_t pin_led = 21;
          static inline constexpr uint8_t pin_ir_receiver = 11;
          static inline constexpr uint8_t pin_blaster = 10;
          static inline constexpr uint8_t pin_buzzer = 46;
          static inline constexpr uint8_t pin_battery = 13;
          static inline constexpr uint8_t pin_joy_x = 1;
          static inline constexpr uint8_t pin_joy_y = 3;
          static inline constexpr uint8_t pin_a = 39;
          static inline constexpr uint8_t pin_b = 40;
          static inline constexpr uint8_t pin_x = 38;
          static inline constexpr uint8_t pin_y = 41;
          static inline constexpr uint8_t pin_menu = 45;
          static inline constexpr uint8_t pin_start = 0;
          static inline constexpr uint8_t pin_aux = 42;
          static inline constexpr uint8_t channel_buzzer = 0;
          static inline constexpr uint8_t x_accelero_gyro = 21;
          static inline constexpr uint8_t i2s_mic_serial_clock = 17;
          static inline constexpr uint8_t i2s_mic_left_right_clock = 47;
          static inline constexpr uint8_t i2s_mic_serial_data = 15;
          static inline constexpr uint32_t spi_frequency = 80000000;
          static inline constexpr uint16_t tft_width = 296;
          static inline constexpr uint8_t tft_height = 240;
          static inline constexpr uint8_t tft_cs = 5;
          static inline constexpr uint8_t tft_dc = 4;
          static inline constexpr uint8_t tft_rst = 48;
          static inline constexpr uint8_t load_glcd = 1;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 21;
          static inline constexpr bool x_fri3d_badge_2024 = true;
          static inline constexpr uint8_t pin_i2c_sda = 9;
          static inline constexpr uint8_t pin_i2c_scl = 18;
          static inline constexpr uint8_t bat_volt_pin = 13;
          static inline constexpr uint8_t pin_sdcard_cs = 14;
          static inline constexpr uint8_t tft_miso = 8;
          static inline constexpr uint8_t tft_mosi = 6;
          static inline constexpr uint8_t tft_sclk = 7;
        };
      } // namespace fri3d_2024_esp32s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace frogboard
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:frogboard";
          static inline constexpr const char *name = "Frog Board ESP32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace frogboard
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace gen4_esp32_s3r8n16
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:gen4-ESP32-S3R8n16";
          static inline constexpr const char *name = "4D Systems gen4-ESP32 Modules (ESP32-S3)";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr const char *usb_manufacturer = "4D Systems Pty Ltd";
          static inline constexpr const char *usb_product = "4D Systems gen4-ESP32 16MB Modules (ESP32-S3R8n16)";
        };
      } // namespace gen4_esp32_s3r8n16
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace gpy
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:gpy";
          static inline constexpr const char *name = "Pycom GPy";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t lte_cts = 18;
          static inline constexpr uint8_t lte_rts = 19;
          static inline constexpr uint8_t lte_rx = 23;
          static inline constexpr uint8_t lte_tx = 5;
          static inline constexpr uint8_t lte_wake = 27;
          static inline constexpr uint32_t lte_baud = 921600;
          static inline constexpr uint8_t pin_rgb_led = 0;
          static inline constexpr uint8_t ant_select = 21;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a1 = 37;
          static inline constexpr uint8_t a2 = 38;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 40;
          static inline constexpr uint8_t rgb_builtin = 40;
        };
      } // namespace gpy
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace healthypi4
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:healthypi4";
          static inline constexpr const char *name = "ProtoCentral HealthyPi 4";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t key_builtin = 17;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t ads1292_drdy_pin = 26;
          static inline constexpr uint8_t ads1292_cs_pin = 13;
          static inline constexpr uint8_t ads1292_start_pin = 14;
          static inline constexpr uint8_t ads1292_pwdn_pin = 27;
          static inline constexpr uint8_t afe4490_cs_pin = 21;
          static inline constexpr uint8_t afe4490_drdy_pin = 39;
          static inline constexpr uint8_t afe4490_pwdn_pin = 4;
          static inline constexpr uint8_t push_button = 17;
          static inline constexpr uint8_t slide_switch = 16;
          static inline constexpr uint8_t builtin_led = 15;
        };
      } // namespace healthypi4
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_capsule_sensor_v3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_capsule_sensor_V3";
          static inline constexpr const char *name = "Heltec Capsule Sensor (V3)";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t vext = 21;
          static inline constexpr uint8_t led0 = 33;
          static inline constexpr uint8_t led1 = 34;
          static inline constexpr uint8_t user_button = 18;
          static inline constexpr uint8_t gps_rx_pin = 5;
          static inline constexpr uint8_t gps_tx_pin = 4;
          static inline constexpr uint8_t gps_reset_pin = 3;
          static inline constexpr uint8_t gps_pps_pin = 1;
          static inline constexpr uint8_t adc_battery_pin = 7;
          static inline constexpr uint8_t adc_battery_ctrl_pin = 36;
          static inline constexpr uint8_t rst_lora = 12;
          static inline constexpr uint8_t busy_lora = 13;
          static inline constexpr uint8_t dio0 = 14;
          static inline constexpr bool heltec_capsule_sensor_v3 = true;
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
          static inline constexpr uint8_t bat_volt_pin = 7;
        };
      } // namespace heltec_capsule_sensor_v3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_ht_de01
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_ht_de01";
          static inline constexpr const char *name = "Heltec E-Ink Driver";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t vext = 45;
          static inline constexpr uint8_t led = 18;
          static inline constexpr uint8_t rst_eink = 6;
          static inline constexpr uint8_t busy_eink = 7;
          static inline constexpr uint8_t clk_eink = 3;
          static inline constexpr uint8_t cs_eink = 5;
          static inline constexpr uint8_t dc_eink = 4;
          static inline constexpr uint8_t sdi_eink = 2;
          static inline constexpr bool ht_de01 = true;
          static inline constexpr uint8_t builtin_led = 35;
        };
      } // namespace heltec_ht_de01
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_vision_master_e290
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_vision_master_e290";
          static inline constexpr const char *name = "Heltec Vision Master E290";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t display_height = 128;
          static inline constexpr uint16_t display_width = 296;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t vext = 18;
          static inline constexpr uint8_t eink_sdi = 1;
          static inline constexpr uint8_t eink_clk = 2;
          static inline constexpr uint8_t eink_cs = 3;
          static inline constexpr uint8_t eink_dc = 4;
          static inline constexpr uint8_t eink_rst = 5;
          static inline constexpr uint8_t eink_busy = 6;
          static inline constexpr uint8_t rst_lora = 12;
          static inline constexpr uint8_t busy_lora = 13;
          static inline constexpr uint8_t dio0 = 14;
          static inline constexpr bool vision_master_e290 = true;
        };
      } // namespace heltec_vision_master_e290
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_vision_master_e_213
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_vision_master_e_213";
          static inline constexpr const char *name = "Heltec Vision Master E213";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t display_height = 122;
          static inline constexpr uint8_t display_width = 250;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t vext = 18;
          static inline constexpr uint8_t eink_busy = 1;
          static inline constexpr uint8_t eink_dc = 2;
          static inline constexpr uint8_t eink_rst = 3;
          static inline constexpr uint8_t eink_clk = 4;
          static inline constexpr uint8_t eink_cs = 5;
          static inline constexpr uint8_t eink_sdi = 6;
          static inline constexpr uint8_t rst_lora = 12;
          static inline constexpr uint8_t busy_lora = 13;
          static inline constexpr uint8_t dio0 = 14;
          static inline constexpr bool vision_master_e213 = true;
        };
      } // namespace heltec_vision_master_e_213
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_vision_master_t190
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_vision_master_t190";
          static inline constexpr const char *name = "Heltec Vision Master T190";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t display_height = 170;
          static inline constexpr uint16_t display_width = 320;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t vext = 5;
          static inline constexpr uint8_t tft_scl = 38;
          static inline constexpr uint8_t tft_cs = 39;
          static inline constexpr uint8_t tft_rst = 40;
          static inline constexpr uint8_t tft_rs = 47;
          static inline constexpr uint8_t tft_sda = 48;
          static inline constexpr uint8_t rst_lora = 12;
          static inline constexpr uint8_t busy_lora = 13;
          static inline constexpr uint8_t dio0 = 14;
          static inline constexpr bool vision_master_t190 = true;
        };
      } // namespace heltec_vision_master_t190
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_wifi_kit_32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_wifi_kit_32";
          static inline constexpr const char *name = "Heltec WiFi Kit 32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t display_height = 64;
          static inline constexpr uint8_t display_width = 128;
          static inline constexpr uint8_t f_xtal_mhz = 26;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a1 = 37;
          static inline constexpr uint8_t a2 = 38;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t vext = 21;
          static inline constexpr uint8_t led = 25;
          static inline constexpr uint8_t rst_oled = 16;
          static inline constexpr uint8_t scl_oled = 15;
          static inline constexpr uint8_t sda_oled = 4;
          static inline constexpr bool wifi_kit_32 = true;
          static inline constexpr uint8_t builtin_led = 25;
        };
      } // namespace heltec_wifi_kit_32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_wifi_kit_32_v3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_wifi_kit_32_V3";
          static inline constexpr const char *name = "Heltec WiFi Kit 32(V3)";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t display_height = 64;
          static inline constexpr uint8_t display_width = 128;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t vext = 36;
          static inline constexpr uint8_t led = 35;
          static inline constexpr uint8_t rst_oled = 21;
          static inline constexpr uint8_t scl_oled = 18;
          static inline constexpr uint8_t sda_oled = 17;
          static inline constexpr uint8_t dio0 = 14;
          static inline constexpr bool wifi_kit_32_v3 = true;
          static inline constexpr uint8_t builtin_led = 35;
        };
      } // namespace heltec_wifi_kit_32_v3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_wifi_lora_32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_wifi_lora_32";
          static inline constexpr const char *name = "Heltec WiFi LoRa 32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t display_height = 64;
          static inline constexpr uint8_t display_width = 128;
          static inline constexpr uint8_t f_xtal_mhz = 26;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t vext = 21;
          static inline constexpr uint8_t led = 25;
          static inline constexpr uint8_t rst_oled = 16;
          static inline constexpr uint8_t scl_oled = 15;
          static inline constexpr uint8_t sda_oled = 4;
          static inline constexpr uint8_t rst_lora = 14;
          static inline constexpr uint8_t dio0 = 26;
          static inline constexpr uint8_t dio1 = 33;
          static inline constexpr uint8_t dio2 = 32;
          static inline constexpr bool wifi_lora_32 = true;
          static inline constexpr uint8_t builtin_led = 25;
        };
      } // namespace heltec_wifi_lora_32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_wifi_lora_32_v2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_wifi_lora_32_V2";
          static inline constexpr const char *name = "Heltec WiFi LoRa 32(V2)";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t display_height = 64;
          static inline constexpr uint8_t display_width = 128;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t vext = 21;
          static inline constexpr uint8_t led = 25;
          static inline constexpr uint8_t rst_oled = 16;
          static inline constexpr uint8_t scl_oled = 15;
          static inline constexpr uint8_t sda_oled = 4;
          static inline constexpr uint8_t rst_lora = 14;
          static inline constexpr uint8_t dio0 = 26;
          static inline constexpr uint8_t dio1 = 35;
          static inline constexpr uint8_t dio2 = 34;
          static inline constexpr bool wifi_lora_32_v2 = true;
          static inline constexpr uint8_t builtin_led = 25;
        };
      } // namespace heltec_wifi_lora_32_v2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_wifi_lora_32_v3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_wifi_lora_32_V3";
          static inline constexpr const char *name = "Heltec WiFi LoRa 32(V3)";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t display_height = 64;
          static inline constexpr uint8_t display_width = 128;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t vext = 36;
          static inline constexpr uint8_t led = 35;
          static inline constexpr uint8_t rst_oled = 21;
          static inline constexpr uint8_t scl_oled = 18;
          static inline constexpr uint8_t sda_oled = 17;
          static inline constexpr uint8_t rst_lora = 12;
          static inline constexpr uint8_t busy_lora = 13;
          static inline constexpr uint8_t dio0 = 14;
          static inline constexpr bool wifi_lora_32_v3 = true;
          static inline constexpr uint8_t builtin_led = 35;
        };
      } // namespace heltec_wifi_lora_32_v3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_wireless_bridge
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_wireless_bridge";
          static inline constexpr const char *name = "Heltec Wireless Bridge";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t vext = 21;
          static inline constexpr uint8_t led = 25;
          static inline constexpr uint8_t ble_led = 25;
          static inline constexpr uint8_t wifi_led = 23;
          static inline constexpr uint8_t lora_led = 22;
          static inline constexpr uint8_t rst_lora = 14;
          static inline constexpr uint8_t dio0 = 26;
          static inline constexpr uint8_t dio1 = 35;
          static inline constexpr uint8_t dio2 = 34;
          static inline constexpr bool wireless_bridge = true;
          static inline constexpr uint8_t builtin_led = 25;
        };
      } // namespace heltec_wireless_bridge
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_wireless_mini_shell
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_wireless_mini_shell";
          static inline constexpr const char *name = "Heltec Wireless Mini Shell";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr bool wireless_mini_shell = true;
          static inline constexpr uint8_t builtin_led = 30;
          static inline constexpr uint8_t rgb_builtin = 30;
        };
      } // namespace heltec_wireless_mini_shell
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_wireless_paper
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_wireless_paper";
          static inline constexpr const char *name = "Heltec Wireless Paper";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t display_height = 64;
          static inline constexpr uint8_t display_width = 128;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t vext = 45;
          static inline constexpr uint8_t led = 18;
          static inline constexpr uint8_t rst_oled = 21;
          static inline constexpr uint8_t scl_oled = 18;
          static inline constexpr uint8_t sda_oled = 17;
          static inline constexpr bool wireless_paper = true;
          static inline constexpr uint8_t builtin_led = 35;
        };
      } // namespace heltec_wireless_paper
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_wireless_shell_v3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_wireless_shell_V3";
          static inline constexpr const char *name = "Heltec Wireless Shell (V3)";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t display_height = 0;
          static inline constexpr uint8_t display_width = 0;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t vext = 36;
          static inline constexpr uint8_t led = 35;
          static inline constexpr uint8_t rst_oled = 21;
          static inline constexpr uint8_t scl_oled = 18;
          static inline constexpr uint8_t sda_oled = 17;
          static inline constexpr uint8_t rst_lora = 12;
          static inline constexpr uint8_t busy_lora = 13;
          static inline constexpr uint8_t dio0 = 14;
          static inline constexpr bool heltec_wireless_shell_v3 = true;
          static inline constexpr uint8_t builtin_led = 35;
        };
      } // namespace heltec_wireless_shell_v3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_wireless_stick
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_wireless_stick";
          static inline constexpr const char *name = "Heltec Wireless Stick";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t display_height = 32;
          static inline constexpr uint8_t display_width = 64;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t vext = 21;
          static inline constexpr uint8_t led = 25;
          static inline constexpr uint8_t rst_oled = 16;
          static inline constexpr uint8_t scl_oled = 15;
          static inline constexpr uint8_t sda_oled = 4;
          static inline constexpr uint8_t rst_lora = 14;
          static inline constexpr uint8_t dio0 = 26;
          static inline constexpr uint8_t dio1 = 35;
          static inline constexpr uint8_t dio2 = 34;
          static inline constexpr bool wireless_stick = true;
          static inline constexpr uint8_t builtin_led = 25;
        };
      } // namespace heltec_wireless_stick
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_wireless_stick_v3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_wireless_stick_V3";
          static inline constexpr const char *name = "Heltec Wireless Stick(V3)";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t display_height = 32;
          static inline constexpr uint8_t display_width = 64;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t vext = 36;
          static inline constexpr uint8_t led = 35;
          static inline constexpr uint8_t rst_oled = 21;
          static inline constexpr uint8_t scl_oled = 18;
          static inline constexpr uint8_t sda_oled = 17;
          static inline constexpr uint8_t rst_lora = 12;
          static inline constexpr uint8_t busy_lora = 13;
          static inline constexpr uint8_t dio0 = 14;
          static inline constexpr bool wireless_stick_v3 = true;
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
        };
      } // namespace heltec_wireless_stick_v3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_wireless_stick_lite
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_wireless_stick_lite";
          static inline constexpr const char *name = "Heltec Wireless Stick Lite / Wireless Shell";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t display_height = 0;
          static inline constexpr uint8_t display_width = 0;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t vext = 21;
          static inline constexpr uint8_t led = 25;
          static inline constexpr uint8_t rst_lora = 14;
          static inline constexpr uint8_t dio0 = 26;
          static inline constexpr uint8_t dio1 = 35;
          static inline constexpr uint8_t dio2 = 34;
          static inline constexpr bool wireless_stick_lite = true;
          static inline constexpr uint8_t builtin_led = 25;
        };
      } // namespace heltec_wireless_stick_lite
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_wireless_stick_lite_v3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_wireless_stick_lite_V3";
          static inline constexpr const char *name = "Heltec Wireless Stick Lite(V3)";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t display_height = 0;
          static inline constexpr uint8_t display_width = 0;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 12;
          static inline constexpr uint8_t a8 = 14;
          static inline constexpr uint8_t a9 = 15;
          static inline constexpr uint8_t a10 = 16;
          static inline constexpr uint8_t a11 = 17;
          static inline constexpr uint8_t a12 = 18;
          static inline constexpr uint8_t a13 = 19;
          static inline constexpr uint8_t a14 = 20;
          static inline constexpr uint8_t t0 = 1;
          static inline constexpr uint8_t t1 = 2;
          static inline constexpr uint8_t t2 = 3;
          static inline constexpr uint8_t t3 = 4;
          static inline constexpr uint8_t t4 = 5;
          static inline constexpr uint8_t t5 = 6;
          static inline constexpr uint8_t t6 = 7;
          static inline constexpr uint8_t vext = 36;
          static inline constexpr uint8_t led = 35;
          static inline constexpr uint8_t rst_oled = 21;
          static inline constexpr uint8_t scl_oled = 18;
          static inline constexpr uint8_t sda_oled = 17;
          static inline constexpr uint8_t rst_lora = 12;
          static inline constexpr uint8_t busy_lora = 13;
          static inline constexpr uint8_t dio0 = 14;
          static inline constexpr bool wireless_stick_lite_v3 = true;
          static inline constexpr uint8_t builtin_led = 35;
        };
      } // namespace heltec_wireless_stick_lite_v3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace heltec_wireless_tracker
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:heltec_wireless_tracker";
          static inline constexpr const char *name = "Heltec Wireless Tracker";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t vext = 3;
          static inline constexpr uint8_t led = 18;
          static inline constexpr uint8_t rst_oled = 39;
          static inline constexpr uint8_t scl_oled = 41;
          static inline constexpr uint8_t sda_oled = 42;
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
        };
      } // namespace heltec_wireless_tracker
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace honeylemon
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:honeylemon";
          static inline constexpr const char *name = "HONEYLemon";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t builtin_key = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace honeylemon
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace hornbill32dev
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:hornbill32dev";
          static inline constexpr const char *name = "Hornbill ESP32 Dev";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 13;
        };
      } // namespace hornbill32dev
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace hornbill32minima
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:hornbill32minima";
          static inline constexpr const char *name = "Hornbill ESP32 Minima";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
        };
      } // namespace hornbill32minima
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace huidu_hd_wf2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:huidu_hd_wf2";
          static inline constexpr const char *name = "Huidu HD-WF2";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t wf2_x1_r1_pin = 2;
          static inline constexpr uint8_t wf2_x1_r2_pin = 3;
          static inline constexpr uint8_t wf2_x1_g1_pin = 6;
          static inline constexpr uint8_t wf2_x1_g2_pin = 7;
          static inline constexpr uint8_t wf2_x1_b1_pin = 10;
          static inline constexpr uint8_t wf2_x1_b2_pin = 11;
          static inline constexpr uint8_t wf2_x1_e_pin = 21;
          static inline constexpr uint8_t wf2_x2_r1_pin = 4;
          static inline constexpr uint8_t wf2_x2_r2_pin = 5;
          static inline constexpr uint8_t wf2_x2_g1_pin = 8;
          static inline constexpr uint8_t wf2_x2_g2_pin = 9;
          static inline constexpr uint8_t wf2_x2_b1_pin = 12;
          static inline constexpr uint8_t wf2_x2_b2_pin = 13;
          static inline constexpr int8_t wf2_x2_e_pin = -1;
          static inline constexpr uint8_t wf2_a_pin = 39;
          static inline constexpr uint8_t wf2_b_pin = 38;
          static inline constexpr uint8_t wf2_c_pin = 37;
          static inline constexpr uint8_t wf2_d_pin = 36;
          static inline constexpr uint8_t wf2_oe_pin = 35;
          static inline constexpr uint8_t wf2_clk_pin = 34;
          static inline constexpr uint8_t wf2_lat_pin = 33;
          static inline constexpr uint8_t wf2_button_test = 17;
          static inline constexpr uint8_t wf2_led_run_pin = 40;
          static inline constexpr uint8_t wf2_bm8563_i2c_sda = 41;
          static inline constexpr uint8_t wf2_bm8563_i2c_scl = 42;
          static inline constexpr uint8_t wf2_usb_dn_pin = 19;
          static inline constexpr uint8_t wf2_usb_dp_pin = 20;
          static inline constexpr uint8_t wf2_pcb1_pin = 45;
          static inline constexpr uint8_t wf2_pcb2_pin = 46;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t builtin_led = 40;
        };
      } // namespace huidu_hd_wf2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace huidu_hd_wf4
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:huidu_hd_wf4";
          static inline constexpr const char *name = "Huidu HD-WF4";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t wf4_a_pin = 39;
          static inline constexpr uint8_t wf4_b_pin = 38;
          static inline constexpr uint8_t wf4_c_pin = 37;
          static inline constexpr uint8_t wf4_d_pin = 36;
          static inline constexpr uint8_t wf4_e_pin = 21;
          static inline constexpr uint8_t wf4_oe_pin = 35;
          static inline constexpr uint8_t wf4_clk_pin = 34;
          static inline constexpr uint8_t wf4_lat_pin = 33;
          static inline constexpr uint8_t wf4_x1_r1_pin = 2;
          static inline constexpr uint8_t wf4_x1_r2_pin = 3;
          static inline constexpr uint8_t wf4_x1_g1_pin = 6;
          static inline constexpr uint8_t wf4_x1_g2_pin = 7;
          static inline constexpr uint8_t wf4_x1_b1_pin = 10;
          static inline constexpr uint8_t wf4_x1_b2_pin = 11;
          static inline constexpr uint8_t wf4_x1_cs_pin = 45;
          static inline constexpr uint8_t wf4_x2_r1_pin = 4;
          static inline constexpr uint8_t wf4_x2_r2_pin = 5;
          static inline constexpr uint8_t wf4_x2_g1_pin = 8;
          static inline constexpr uint8_t wf4_x2_g2_pin = 9;
          static inline constexpr uint8_t wf4_x2_b1_pin = 12;
          static inline constexpr uint8_t wf4_x2_b2_pin = 13;
          static inline constexpr uint8_t wf4_x3_r1_pin = 2;
          static inline constexpr uint8_t wf4_x3_r2_pin = 3;
          static inline constexpr uint8_t wf4_x3_g1_pin = 6;
          static inline constexpr uint8_t wf4_x3_g2_pin = 7;
          static inline constexpr uint8_t wf4_x3_b1_pin = 10;
          static inline constexpr uint8_t wf4_x3_b2_pin = 11;
          static inline constexpr uint8_t wf4_x3_cs_pin = 14;
          static inline constexpr uint8_t wf4_x4_r1_pin = 4;
          static inline constexpr uint8_t wf4_x4_r2_pin = 5;
          static inline constexpr uint8_t wf4_x4_g1_pin = 8;
          static inline constexpr uint8_t wf4_x4_g2_pin = 9;
          static inline constexpr uint8_t wf4_x4_b1_pin = 12;
          static inline constexpr uint8_t wf4_x4_b2_pin = 13;
          static inline constexpr uint8_t wf4_p1_rx_pin = 44;
          static inline constexpr uint8_t wf4_p1_tx_pin = 43;
          static inline constexpr uint8_t wf4_p2_data_pin = 0;
          static inline constexpr uint8_t wf4_p5_data_pin = 16;
          static inline constexpr uint8_t wf4_p7_data_pin = 1;
          static inline constexpr uint8_t wf4_p11_data_pin = 15;
          static inline constexpr uint8_t wf4_p12_data1_pin = 47;
          static inline constexpr uint8_t wf4_p12_data2_pin = 18;
          static inline constexpr uint8_t wf4_s1_data_pin = 17;
          static inline constexpr uint8_t wf4_s2_data_pin = 48;
          static inline constexpr uint8_t wf4_s3_data_pin = 26;
          static inline constexpr uint8_t wf4_s4_data_pin = 46;
          static inline constexpr uint8_t wf4_led_run_pin = 40;
          static inline constexpr uint8_t wf4_bm8563_i2c_sda = 41;
          static inline constexpr uint8_t wf4_bm8563_i2c_scl = 42;
          static inline constexpr uint8_t wf4_usb_dn_pin = 19;
          static inline constexpr uint8_t wf4_usb_dp_pin = 20;
          static inline constexpr uint8_t wf4_x2_cs_pin = 45;
          static inline constexpr uint8_t wf4_x4_cs_pin = 14;
          static inline constexpr uint8_t builtin_led = 40;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t t1 = 1;
        };
      } // namespace huidu_hd_wf4
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace imbrios_logsens_v1p1
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:imbrios-logsens-v1p1";
          static inline constexpr const char *name = "IMBRIOS LOGSENS_V1P1";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t uart2_tx = 17;
          static inline constexpr uint8_t uart2_rx = 16;
          static inline constexpr uint8_t uart2_rts = 4;
          static inline constexpr uint8_t can_tx = 17;
          static inline constexpr uint8_t can_rx = 16;
          static inline constexpr uint8_t can_txde = 4;
          static inline constexpr uint8_t ss1 = 23;
          static inline constexpr uint8_t buzzer_ctrl = 19;
          static inline constexpr uint8_t sd_card_detect = 35;
          static inline constexpr uint8_t sw2_buildin = 0;
          static inline constexpr uint8_t sw3_buildin = 36;
          static inline constexpr uint8_t sw4_buildin = 34;
          static inline constexpr uint8_t led1_buildin = 32;
          static inline constexpr uint8_t led2_buildin = 33;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t spi_clk = 14;
          static inline constexpr uint8_t spi_miso = 12;
          static inline constexpr uint8_t spi_mosi = 13;
          static inline constexpr uint8_t spi_cs0 = 15;
          static inline constexpr uint8_t led_wifi_link = 32;
          static inline constexpr uint8_t led_wifi_act = 33;
          static inline constexpr uint8_t builtin_led = 33;
        };
      } // namespace imbrios_logsens_v1p1
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace intorobot_fig
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:intorobot-fig";
          static inline constexpr const char *name = "IntoRobot Fig";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t rgb_r_builtin = 27;
          static inline constexpr uint8_t rgb_g_builtin = 21;
          static inline constexpr uint8_t rgb_b_builtin = 22;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a1 = 39;
          static inline constexpr uint8_t a2 = 35;
          static inline constexpr uint8_t a3 = 25;
          static inline constexpr uint8_t a4 = 26;
          static inline constexpr uint8_t a5 = 14;
          static inline constexpr uint8_t a6 = 12;
          static inline constexpr uint8_t a7 = 15;
          static inline constexpr uint8_t a8 = 13;
          static inline constexpr uint8_t a9 = 2;
          static inline constexpr uint8_t d0 = 19;
          static inline constexpr uint8_t d1 = 23;
          static inline constexpr uint8_t d2 = 18;
          static inline constexpr uint8_t d3 = 17;
          static inline constexpr uint8_t d4 = 16;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 4;
          static inline constexpr uint8_t t0 = 19;
          static inline constexpr uint8_t t1 = 23;
          static inline constexpr uint8_t t2 = 18;
          static inline constexpr uint8_t t3 = 17;
          static inline constexpr uint8_t t4 = 16;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 4;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 4;
        };
      } // namespace intorobot_fig
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace ioxesp32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:ioxesp32";
          static inline constexpr const char *name = "IOXESP32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 5;
        };
      } // namespace ioxesp32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace ioxesp32c6
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:ioxesp32c6";
          static inline constexpr const char *name = "IOXESP32-C6";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint8_t pin_rgb_led = 8;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t builtin_led = 39;
          static inline constexpr uint8_t rgb_builtin = 39;
        };
      } // namespace ioxesp32c6
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace ioxesp32ps
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:ioxesp32ps";
          static inline constexpr const char *name = "IOXESP32PS";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 5;
        };
      } // namespace ioxesp32ps
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace jczn_2432s028r
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:jczn_2432s028r";
          static inline constexpr const char *name = "ESP32-2432S028R CYD";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t d35 = 35;
          static inline constexpr uint8_t d22 = 22;
          static inline constexpr uint8_t d27 = 27;
          static inline constexpr uint8_t d21 = 21;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t cyd_tp_irq = 36;
          static inline constexpr uint8_t cyd_tp_mosi = 32;
          static inline constexpr uint8_t cyd_tp_miso = 39;
          static inline constexpr uint8_t cyd_tp_clk = 25;
          static inline constexpr uint8_t cyd_tp_cs = 33;
          static inline constexpr uint8_t cyd_tft_dc = 2;
          static inline constexpr uint8_t cyd_tft_miso = 12;
          static inline constexpr uint8_t cyd_tft_mosi = 13;
          static inline constexpr uint8_t cyd_tft_sck = 14;
          static inline constexpr uint8_t cyd_tft_cs = 15;
          static inline constexpr uint16_t cyd_tft_width = 320;
          static inline constexpr uint8_t cyd_tft_height = 240;
          static inline constexpr uint8_t cyd_tft_bl = 21;
          static inline constexpr uint8_t cyd_led_red = 4;
          static inline constexpr uint8_t cyd_led_green = 16;
          static inline constexpr uint8_t cyd_led_blue = 17;
          static inline constexpr uint8_t cyd_audio_out = 26;
          static inline constexpr uint8_t cyd_user_button = 0;
          static inline constexpr uint8_t cyd_sd_ss = 5;
          static inline constexpr uint8_t cyd_sd_mosi = 23;
          static inline constexpr uint8_t cyd_sd_miso = 19;
          static inline constexpr uint8_t cyd_sd_sck = 18;
          static inline constexpr uint8_t cyd_ldr = 34;
          static inline constexpr uint8_t cyd_tp_din = 32;
          static inline constexpr uint8_t cyd_tp_out = 32;
          static inline constexpr uint8_t cyd_tft_rs = 2;
          static inline constexpr uint8_t cyd_tft_sdo = 12;
          static inline constexpr uint8_t cyd_tft_sdi = 13;
          static inline constexpr uint16_t cyd_screen_width = 320;
          static inline constexpr uint8_t cyd_screen_height = 240;
        };
      } // namespace jczn_2432s028r
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace kb32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:kb32";
          static inline constexpr const char *name = "KB32-FT";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace kb32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace kits_edu
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:kits-edu";
          static inline constexpr const char *name = "KITS ESP32 EDU";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace kits_edu
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace kodedot
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:kodedot";
          static inline constexpr const char *name = "kode dot";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t int_i2c_scl = 47;
          static inline constexpr uint8_t int_i2c_sda = 48;
          static inline constexpr uint8_t sdmmc_cmd = 5;
          static inline constexpr uint8_t sdmmc_clk = 6;
          static inline constexpr uint8_t sdmmc_d0 = 7;
          static inline constexpr int8_t sd_cs = -1;
          static inline constexpr uint16_t lcd_width = 410;
          static inline constexpr uint16_t lcd_height = 502;
          static inline constexpr uint8_t lcd_sck = 17;
          static inline constexpr uint8_t lcd_mosi = 15;
          static inline constexpr uint8_t lcd_io1 = 14;
          static inline constexpr uint8_t lcd_io2 = 16;
          static inline constexpr uint8_t lcd_io3 = 10;
          static inline constexpr uint8_t lcd_cs = 9;
          static inline constexpr uint8_t lcd_rst = 8;
          static inline constexpr int8_t lcd_dc = -1;
          static inline constexpr uint8_t a1 = 12;
          static inline constexpr uint8_t a2 = 13;
          static inline constexpr uint8_t a3 = 14;
          static inline constexpr uint8_t button_top = 0;
          static inline constexpr int8_t button_bottom = -1;
          static inline constexpr uint8_t neopixel_pin = 4;
          static inline constexpr uint8_t mtck = 39;
          static inline constexpr uint8_t mtdo = 40;
          static inline constexpr uint8_t mtdi = 41;
          static inline constexpr uint8_t mtms = 42;
          static inline constexpr uint8_t pin3 = 1;
          static inline constexpr uint8_t pin4 = 11;
          static inline constexpr uint8_t pin5 = 2;
          static inline constexpr uint8_t pin6 = 12;
          static inline constexpr uint8_t pin7 = 3;
          static inline constexpr uint8_t pin8 = 13;
          static inline constexpr uint8_t pin9 = 4;
          static inline constexpr uint8_t pin10 = 14;
          static inline constexpr uint8_t pin11 = 39;
          static inline constexpr uint8_t pin12 = 37;
          static inline constexpr uint8_t pin13 = 40;
          static inline constexpr uint8_t pin14 = 36;
          static inline constexpr uint8_t pin15 = 41;
          static inline constexpr uint8_t pin16 = 43;
          static inline constexpr uint8_t pin17 = 42;
          static inline constexpr uint8_t pin18 = 44;
          static inline constexpr uint8_t t0 = 11, T1 = 12, T2 = 13, T3 = 14;
        };
      } // namespace kodedot
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lilygo_t_display
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lilygo_t_display";
          static inline constexpr const char *name = "LilyGo T-Display";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint16_t usb_vid = 6790;
          static inline constexpr uint16_t usb_pid = 21972;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t vbat = 34;
          static inline constexpr uint8_t right_button = 35;
          static inline constexpr uint8_t left_button = 0;
          static inline constexpr const char *usb_manufacturer = "Lilygo";
          static inline constexpr const char *usb_product = "T-Display";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 34;
        };
      } // namespace lilygo_t_display
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lilygo_t_display_s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lilygo_t_display_s3";
          static inline constexpr const char *name = "LilyGo T-Display-S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t button_1 = 0;
          static inline constexpr uint8_t button_2 = 14;
          static inline constexpr uint8_t bat_volt = 4;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t tp_reset = 21;
          static inline constexpr uint8_t tp_init = 16;
          static inline constexpr uint8_t lcd_bl = 38;
          static inline constexpr uint8_t lcd_d0 = 39;
          static inline constexpr uint8_t lcd_d1 = 40;
          static inline constexpr uint8_t lcd_d2 = 41;
          static inline constexpr uint8_t lcd_d3 = 42;
          static inline constexpr uint8_t lcd_d4 = 45;
          static inline constexpr uint8_t lcd_d5 = 46;
          static inline constexpr uint8_t lcd_d6 = 47;
          static inline constexpr uint8_t lcd_d7 = 48;
          static inline constexpr uint8_t lcd_wr = 8;
          static inline constexpr uint8_t lcd_rd = 9;
          static inline constexpr uint8_t lcd_dc = 7;
          static inline constexpr uint8_t lcd_cs = 6;
          static inline constexpr uint8_t lcd_res = 5;
          static inline constexpr uint8_t lcd_power_on = 15;
          static inline constexpr uint8_t pin_43 = 43;
          static inline constexpr uint8_t pin_44 = 44;
          static inline constexpr uint8_t pin_18 = 18;
          static inline constexpr uint8_t pin_17 = 17;
          static inline constexpr uint8_t pin_21 = 21;
          static inline constexpr uint8_t pin_16 = 16;
          static inline constexpr uint8_t pin_1 = 1;
          static inline constexpr uint8_t pin_2 = 2;
          static inline constexpr uint8_t pin_3 = 3;
          static inline constexpr uint8_t pin_10 = 10;
          static inline constexpr uint8_t pin_11 = 11;
          static inline constexpr uint8_t pin_12 = 12;
          static inline constexpr uint8_t pin_13 = 13;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t bat_volt_pin = 4;
        };
      } // namespace lilygo_t_display_s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lilygo_t_eth_lite
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lilygo_t_eth_lite";
          static inline constexpr const char *name = "LilyGo T-ETH-Lite";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sd_ss = 42;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t eth_phy_addr = 1;
          static inline constexpr uint8_t eth_phy_cs = 9;
          static inline constexpr uint8_t eth_phy_irq = 13;
          static inline constexpr uint8_t eth_phy_rst = 14;
          static inline constexpr uint8_t eth_phy_spi_sck = 10;
          static inline constexpr uint8_t eth_phy_spi_miso = 11;
          static inline constexpr uint8_t eth_phy_spi_mosi = 12;
        };
      } // namespace lilygo_t_eth_lite
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lionbit
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lionbit";
          static inline constexpr const char *name = "Lion:Bit Dev Board";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t switch_a = 2;
          static inline constexpr uint8_t switch_b = 4;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t d0 = 3;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 9;
          static inline constexpr uint8_t d3 = 10;
          static inline constexpr uint8_t u1rx = 9;
          static inline constexpr uint8_t u1tx = 10;
          static inline constexpr uint8_t d4 = 16;
          static inline constexpr uint8_t d5 = 17;
          static inline constexpr uint8_t d6 = 21;
          static inline constexpr uint8_t d7 = 22;
          static inline constexpr uint8_t d8 = 5;
          static inline constexpr uint8_t d10 = 19;
          static inline constexpr uint8_t vp = 36;
          static inline constexpr uint8_t vn = 39;
          static inline constexpr uint8_t t0 = 36;
          static inline constexpr uint8_t t1 = 39;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t vmosi = 23;
          static inline constexpr uint8_t vmiso = 19;
          static inline constexpr uint8_t vsck = 18;
          static inline constexpr uint8_t vss = 5;
          static inline constexpr uint8_t rst = 33;
          static inline constexpr uint8_t clk = 18;
          static inline constexpr uint8_t cs = 27;
          static inline constexpr uint8_t dc = 32;
          static inline constexpr uint8_t st_mosi = 23;
          static inline constexpr uint8_t mtdo = 15;
          static inline constexpr uint8_t mtdi = 12;
          static inline constexpr uint8_t mtck = 13;
          static inline constexpr uint8_t mtms = 14;
          static inline constexpr uint8_t builtin_led = 0;
        };
      } // namespace lionbit
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lionbits3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lionbits3";
          static inline constexpr const char *name = "Lion:Bit S3 STEM Dev Board";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t switch_a = 46;
          static inline constexpr uint8_t switch_b = 47;
          static inline constexpr uint8_t wifi_led = 38;
          static inline constexpr uint8_t bt_led = 37;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t u1rx = 9;
          static inline constexpr uint8_t u1tx = 10;
          static inline constexpr uint8_t d0 = 3;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 9;
          static inline constexpr uint8_t d3 = 10;
          static inline constexpr uint8_t d4 = 11;
          static inline constexpr uint8_t d5 = 12;
          static inline constexpr uint8_t d6 = 13;
          static inline constexpr uint8_t d7 = 14;
          static inline constexpr uint8_t d8 = 15;
          static inline constexpr uint8_t d9 = 16;
          static inline constexpr uint8_t d10 = 17;
          static inline constexpr uint8_t d11 = 18;
          static inline constexpr uint8_t d12 = 8;
          static inline constexpr uint8_t d13 = 39;
          static inline constexpr uint8_t d14 = 40;
          static inline constexpr uint8_t d15 = 41;
          static inline constexpr uint8_t d16 = 48;
          static inline constexpr uint8_t d17 = 21;
          static inline constexpr uint8_t buzzer = 21;
          static inline constexpr uint8_t ldr = 7;
          static inline constexpr uint8_t rgbled = 48;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t ad1 = 7;
          static inline constexpr uint8_t sdo = 35;
          static inline constexpr uint8_t sdi = 37;
          static inline constexpr uint8_t tft_rst = 38;
          static inline constexpr uint8_t tft_sclk = 35;
          static inline constexpr uint8_t tft_cs = 42;
          static inline constexpr uint8_t tft_dc = 37;
          static inline constexpr uint8_t tft_mosi = 36;
          static inline constexpr uint8_t lcd_a0 = 37;
          static inline constexpr uint8_t lcd_back_light = 45;
          static inline constexpr uint8_t dac1 = 21;
          static inline constexpr uint8_t rst = 38;
          static inline constexpr uint8_t sclk = 35;
          static inline constexpr uint8_t cs = 42;
          static inline constexpr uint8_t dc = 37;
          static inline constexpr uint8_t vp = 36;
          static inline constexpr uint8_t vn = 39;
          static inline constexpr uint8_t builtin_led = 0;
        };
      } // namespace lionbits3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lolin32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lolin32";
          static inline constexpr const char *name = "WEMOS LOLIN32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 5;
        };
      } // namespace lolin32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lolin32_lite
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lolin32-lite";
          static inline constexpr const char *name = "WEMOS LOLIN32 Lite";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 22;
        };
      } // namespace lolin32_lite
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lolin_c3_mini
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lolin_c3_mini";
          static inline constexpr const char *name = "LOLIN C3 Mini";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t pin_rgb_led = 7;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t builtin_led = 29;
          static inline constexpr uint8_t rgb_builtin = 29;
        };
      } // namespace lolin_c3_mini
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lolin_c3_pico
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lolin_c3_pico";
          static inline constexpr const char *name = "LOLIN C3 Pico";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t pin_rgb_led = 7;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t vbat = 3;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t builtin_led = 29;
          static inline constexpr uint8_t rgb_builtin = 29;
          static inline constexpr uint8_t bat_volt_pin = 3;
        };
      } // namespace lolin_c3_pico
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lolin_s2_mini
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lolin_s2_mini";
          static inline constexpr const char *name = "LOLIN S2 Mini";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 32962;
          static inline constexpr const char *usb_serial = "0";
          static inline constexpr const char *usb_fw_msc_product_revision = "1.23";
          static inline constexpr uint8_t usb_fw_msc_serial_number = 0;
          static inline constexpr uint8_t tx = 39;
          static inline constexpr uint8_t rx = 37;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "WEMOS.CC";
          static inline constexpr const char *usb_product = "LOLIN-S2-MINI";
          static inline constexpr const char *usb_fw_msc_vendor_id = "ESP32-S2";
          static inline constexpr const char *usb_fw_msc_product_id = "Firmware MSC";
          static inline constexpr const char *usb_fw_msc_volume_name = "S2-Firmware";
          static inline constexpr uint8_t builtin_led = 15;
        };
      } // namespace lolin_s2_mini
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lolin_s2_pico
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lolin_s2_pico";
          static inline constexpr const char *name = "LOLIN S2 PICO";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 32965;
          static inline constexpr const char *usb_serial = "0";
          static inline constexpr const char *usb_fw_msc_product_revision = "1.23";
          static inline constexpr uint8_t usb_fw_msc_serial_number = 0;
          static inline constexpr uint8_t tx = 38;
          static inline constexpr uint8_t rx = 33;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr uint8_t s2_pico_oled_reset = 18;
          static inline constexpr const char *usb_manufacturer = "WEMOS.CC";
          static inline constexpr const char *usb_product = "LOLIN-S2-PICO";
          static inline constexpr const char *usb_fw_msc_vendor_id = "ESP32-S2";
          static inline constexpr const char *usb_fw_msc_product_id = "Firmware MSC";
          static inline constexpr const char *usb_fw_msc_volume_name = "S2-Firmware";
          static inline constexpr uint8_t builtin_led = 10;
        };
      } // namespace lolin_s2_pico
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lolin_s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lolin_s3";
          static inline constexpr const char *name = "LOLIN S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 87;
          static inline constexpr uint8_t rgb_builtin = 87;
        };
      } // namespace lolin_s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lolin_s3_mini
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lolin_s3_mini";
          static inline constexpr const char *name = "LOLIN S3 Mini";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33127;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 96;
          static inline constexpr uint8_t rgb_builtin = 96;
        };
      } // namespace lolin_s3_mini
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lolin_s3_mini_pro
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lolin_s3_mini_pro";
          static inline constexpr const char *name = "LOLIN S3 Mini Pro";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33302;
          static inline constexpr uint8_t rgb_power = 7;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t tft_bl = 33;
          static inline constexpr uint8_t tft_dc = 36;
          static inline constexpr uint8_t tft_cs = 35;
          static inline constexpr uint8_t tft_rst = 34;
          static inline constexpr uint8_t pin_ir = 9;
          static inline constexpr uint8_t button_left = 0;
          static inline constexpr uint8_t button_ok = 47;
          static inline constexpr uint8_t button_right = 48;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 57;
          static inline constexpr uint8_t rgb_builtin = 57;
        };
      } // namespace lolin_s3_mini_pro
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lolin_s3_pro
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lolin_s3_pro";
          static inline constexpr const char *name = "LOLIN S3 Pro";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33121;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t tf_cs = 46;
          static inline constexpr uint8_t ts_cs = 45;
          static inline constexpr uint8_t tft_cs = 48;
          static inline constexpr uint8_t tft_dc = 47;
          static inline constexpr uint8_t tft_rst = 21;
          static inline constexpr uint8_t tft_led = 14;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 87;
          static inline constexpr uint8_t rgb_builtin = 87;
        };
      } // namespace lolin_s3_pro
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lopy
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lopy";
          static inline constexpr const char *name = "LoPy";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t lora_sck = 5;
          static inline constexpr uint8_t lora_miso = 19;
          static inline constexpr uint8_t lora_mosi = 27;
          static inline constexpr uint8_t lora_cs = 17;
          static inline constexpr uint8_t lora_rst = 18;
          static inline constexpr uint8_t lora_irq = 23;
          static inline constexpr uint8_t pin_rgb_led = 0;
          static inline constexpr uint8_t ant_select = 16;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a1 = 37;
          static inline constexpr uint8_t a2 = 38;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t lora_io0 = 23;
          static inline constexpr uint8_t lora_io1 = 23;
          static inline constexpr uint8_t lora_io2 = 23;
          static inline constexpr uint8_t builtin_led = 40;
          static inline constexpr uint8_t rgb_builtin = 40;
        };
      } // namespace lopy
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace lopy4
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:lopy4";
          static inline constexpr const char *name = "LoPy4";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t lora_sck = 5;
          static inline constexpr uint8_t lora_miso = 19;
          static inline constexpr uint8_t lora_mosi = 27;
          static inline constexpr uint8_t lora_cs = 18;
          static inline constexpr uint8_t lora_irq = 23;
          static inline constexpr uint8_t pin_rgb_led = 0;
          static inline constexpr uint8_t ant_select = 21;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a1 = 37;
          static inline constexpr uint8_t a2 = 38;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t lora_io0 = 23;
          static inline constexpr uint8_t lora_io1 = 23;
          static inline constexpr uint8_t lora_io2 = 23;
          static inline constexpr uint8_t builtin_led = 40;
          static inline constexpr uint8_t rgb_builtin = 40;
        };
      } // namespace lopy4
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_atom
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_atom";
          static inline constexpr const char *name = "M5Atom";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g27 = 27;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_atom
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_atoms3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_atoms3";
          static inline constexpr const char *name = "M5AtomS3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t pin_rgb_led = 35;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
          static inline constexpr uint8_t builtin_led = 84;
          static inline constexpr uint8_t rgb_builtin = 84;
        };
      } // namespace m5stack_atoms3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_capsule
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_capsule";
          static inline constexpr const char *name = "M5Capsule";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g41 = 41;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t g43 = 43;
          static inline constexpr uint8_t g44 = 44;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
        };
      } // namespace m5stack_capsule
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_cardputer
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_cardputer";
          static inline constexpr const char *name = "M5Cardputer";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g41 = 41;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t g43 = 43;
          static inline constexpr uint8_t g44 = 44;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
        };
      } // namespace m5stack_cardputer
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_core
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_core";
          static inline constexpr const char *name = "M5Core";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t txd2 = 17;
          static inline constexpr uint8_t rxd2 = 16;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g16 = 16;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g17 = 17;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_core
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_core2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_core2";
          static inline constexpr const char *name = "M5Core2";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx2 = 14;
          static inline constexpr uint8_t rx2 = 13;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g27 = 27;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g17 = 17;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_core2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_coreink
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_coreink";
          static inline constexpr const char *name = "M5CoreInk";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx2 = 14;
          static inline constexpr uint8_t rx2 = 13;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_coreink
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_cores3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_cores3";
          static inline constexpr const char *name = "M5CoreS3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 17;
          static inline constexpr uint8_t rxd2 = 18;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g17 = 17;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g20 = 20;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g45 = 45;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc = 10;
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
        };
      } // namespace m5stack_cores3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_dial
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_dial";
          static inline constexpr const char *name = "M5Dial";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g41 = 41;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t g43 = 43;
          static inline constexpr uint8_t g44 = 44;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
        };
      } // namespace m5stack_dial
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_dinmeter
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_dinmeter";
          static inline constexpr const char *name = "M5DinMeter";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g41 = 41;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t g43 = 43;
          static inline constexpr uint8_t g44 = 44;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
        };
      } // namespace m5stack_dinmeter
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_fire
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_fire";
          static inline constexpr const char *name = "M5Fire";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g16 = 16;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g17 = 17;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_fire
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_nanoc6
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_nanoc6";
          static inline constexpr const char *name = "M5NanoC6";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 2;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 7;
          static inline constexpr uint8_t d5 = 8;
          static inline constexpr uint8_t d6 = 9;
          static inline constexpr uint8_t blue_led_pin = 7;
          static inline constexpr uint8_t btn_pin = 9;
          static inline constexpr uint8_t ir_tx_pin = 3;
          static inline constexpr uint8_t rgb_led_pwr_pin = 19;
          static inline constexpr uint8_t rgb_led_data_pin = 20;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "NanoC6";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 7;
        };
      } // namespace m5stack_nanoc6
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_paper
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_paper";
          static inline constexpr const char *name = "M5Paper";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx2 = 14;
          static inline constexpr uint8_t rx2 = 13;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_paper
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_poe_cam
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_poe_cam";
          static inline constexpr const char *name = "M5PoECAM";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g27 = 27;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_poe_cam
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_stamp_c3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_stamp_c3";
          static inline constexpr const char *name = "M5StampC3";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
        };
      } // namespace m5stack_stamp_c3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_stamp_pico
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_stamp_pico";
          static inline constexpr const char *name = "M5StampPico";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g33 = 33;
        };
      } // namespace m5stack_stamp_pico
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_stamp_s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_stamp_s3";
          static inline constexpr const char *name = "M5StampS3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g41 = 41;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t g43 = 43;
          static inline constexpr uint8_t g44 = 44;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
        };
      } // namespace m5stack_stamp_s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_station
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_station";
          static inline constexpr const char *name = "M5Station";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t txd1 = 14;
          static inline constexpr uint8_t rxd1 = 13;
          static inline constexpr uint8_t txd2 = 17;
          static inline constexpr uint8_t rxd2 = 16;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g16 = 16;
          static inline constexpr uint8_t g17 = 17;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_station
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_stickc
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_stickc";
          static inline constexpr const char *name = "M5StickC";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_stickc
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_stickc_plus
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_stickc_plus";
          static inline constexpr const char *name = "M5StickCPlus";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_stickc_plus
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_stickc_plus2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_stickc_plus2";
          static inline constexpr const char *name = "M5StickCPlus2";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_stickc_plus2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_tab5
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_tab5";
          static inline constexpr const char *name = "M5Tab5";
          static inline constexpr const char *build_mcu = "esp32p4";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 55;
          static inline constexpr uint8_t tx = 37;
          static inline constexpr uint8_t rx = 38;
          static inline constexpr uint8_t a1 = 17;
          static inline constexpr uint8_t a2 = 18;
          static inline constexpr uint8_t a3 = 19;
          static inline constexpr uint8_t a4 = 20;
          static inline constexpr uint8_t a5 = 21;
          static inline constexpr uint8_t a6 = 22;
          static inline constexpr uint8_t a7 = 23;
          static inline constexpr uint8_t a8 = 49;
          static inline constexpr uint8_t a9 = 50;
          static inline constexpr uint8_t a10 = 51;
          static inline constexpr uint8_t a11 = 52;
          static inline constexpr uint8_t a12 = 53;
          static inline constexpr uint8_t a13 = 54;
          static inline constexpr uint8_t t0 = 2;
          static inline constexpr uint8_t t1 = 3;
          static inline constexpr uint8_t t2 = 4;
          static inline constexpr uint8_t t3 = 5;
          static inline constexpr uint8_t t4 = 6;
          static inline constexpr uint8_t t5 = 7;
          static inline constexpr uint8_t t6 = 8;
          static inline constexpr uint8_t t7 = 9;
          static inline constexpr uint8_t t8 = 10;
          static inline constexpr uint8_t t9 = 11;
          static inline constexpr uint8_t t10 = 12;
          static inline constexpr uint8_t t11 = 13;
          static inline constexpr uint8_t t12 = 14;
          static inline constexpr uint8_t t13 = 15;
          static inline constexpr uint8_t board_sdmmc_slot = 0;
          static inline constexpr uint8_t board_sdio_esp_hosted_clk = 12;
          static inline constexpr uint8_t board_sdio_esp_hosted_cmd = 13;
          static inline constexpr uint8_t board_sdio_esp_hosted_d0 = 11;
          static inline constexpr uint8_t board_sdio_esp_hosted_d1 = 10;
          static inline constexpr uint8_t board_sdio_esp_hosted_d2 = 9;
          static inline constexpr uint8_t board_sdio_esp_hosted_d3 = 8;
          static inline constexpr uint8_t board_sdio_esp_hosted_reset = 15;
        };
      } // namespace m5stack_tab5
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_timer_cam
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_timer_cam";
          static inline constexpr const char *name = "M5TimerCAM";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g27 = 27;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace m5stack_timer_cam
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_tough
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_tough";
          static inline constexpr const char *name = "M5Tough";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g27 = 27;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g17 = 17;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_tough
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_unit_cam
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_unit_cam";
          static inline constexpr const char *name = "M5UnitCAM";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g27 = 27;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
          static inline constexpr uint8_t builtin_led = 4;
        };
      } // namespace m5stack_unit_cam
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace m5stack_unit_cams3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:m5stack_unit_cams3";
          static inline constexpr const char *name = "M5UnitCAMS3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g41 = 41;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t g43 = 43;
          static inline constexpr uint8_t g44 = 44;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
        };
      } // namespace m5stack_unit_cams3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace mpython
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:mPython";
          static inline constexpr const char *name = "Labplus mPython";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t p0 = 33;
          static inline constexpr uint8_t p1 = 32;
          static inline constexpr uint8_t p2 = 35;
          static inline constexpr uint8_t p3 = 34;
          static inline constexpr uint8_t p4 = 39;
          static inline constexpr uint8_t p5 = 0;
          static inline constexpr uint8_t p6 = 16;
          static inline constexpr uint8_t p7 = 17;
          static inline constexpr uint8_t p8 = 26;
          static inline constexpr uint8_t p9 = 25;
          static inline constexpr uint8_t p10 = 36;
          static inline constexpr uint8_t p11 = 2;
          static inline constexpr uint8_t p13 = 18;
          static inline constexpr uint8_t p14 = 19;
          static inline constexpr uint8_t p15 = 21;
          static inline constexpr uint8_t p16 = 5;
          static inline constexpr uint8_t p19 = 22;
          static inline constexpr uint8_t p20 = 23;
          static inline constexpr uint8_t p = 27;
          static inline constexpr uint8_t y = 14;
          static inline constexpr uint8_t t = 12;
          static inline constexpr uint8_t h = 13;
          static inline constexpr uint8_t o = 15;
          static inline constexpr uint8_t n = 4;
          static inline constexpr uint8_t btn_a = 0;
          static inline constexpr uint8_t btn_b = 2;
          static inline constexpr uint8_t sound = 36;
          static inline constexpr uint8_t light = 39;
          static inline constexpr uint8_t buzzer = 16;
        };
      } // namespace mpython
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace magicbit
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:magicbit";
          static inline constexpr const char *name = "MagicBit";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t buzzer = 25;
          static inline constexpr uint8_t red_led = 27;
          static inline constexpr uint8_t yellow_led = 18;
          static inline constexpr uint8_t green_led = 16;
          static inline constexpr uint8_t blue_led = 17;
          static inline constexpr uint8_t ldr = 36;
          static inline constexpr uint8_t pot = 39;
          static inline constexpr uint8_t right_putton = 34;
          static inline constexpr uint8_t left_button = 35;
          static inline constexpr uint8_t motor1a = 27;
          static inline constexpr uint8_t motor1b = 18;
          static inline constexpr uint8_t motor2a = 16;
          static inline constexpr uint8_t motor2b = 17;
          static inline constexpr uint8_t builtin_led = 16;
        };
      } // namespace magicbit
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace makergo_c3_supermini
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:makergo_c3_supermini";
          static inline constexpr const char *name = "MakerGO ESP32 C3 SuperMini";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t tx1 = 0;
          static inline constexpr uint8_t rx1 = 1;
          static inline constexpr uint8_t boot_builtin = 9;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t builtin_led = 8;
        };
      } // namespace makergo_c3_supermini
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace makergo_c6_supermini
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:makergo_c6_supermini";
          static inline constexpr const char *name = "MakerGO ESP32 C6 SuperMini";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint8_t pin_rgb_led = 8;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t d0 = 0;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 2;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 4;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 6;
          static inline constexpr uint8_t d7 = 7;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d10 = 14;
          static inline constexpr uint8_t d11 = 18;
          static inline constexpr uint8_t d12 = 19;
          static inline constexpr uint8_t d13 = 15;
          static inline constexpr uint8_t d14 = 20;
          static inline constexpr uint8_t d15 = 12;
          static inline constexpr uint8_t d16 = 16;
          static inline constexpr uint8_t d17 = 17;
          static inline constexpr uint8_t d18 = 13;
          static inline constexpr uint8_t d19 = 21;
          static inline constexpr uint8_t d20 = 22;
          static inline constexpr uint8_t d21 = 23;
          static inline constexpr uint8_t sda1 = 6;
          static inline constexpr uint8_t scl1 = 7;
          static inline constexpr uint8_t rgb_builtin = 39;
          static inline constexpr uint8_t builtin_led = 15;
          static inline constexpr uint8_t builtin_rgb = 39;
        };
      } // namespace makergo_c6_supermini
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace mant1s
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:mant1s";
          static inline constexpr const char *name = "Silicognition ManT1S";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a1 = 37;
          static inline constexpr uint8_t a2 = 38;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t eth_phy_addr = 0;
          static inline constexpr int8_t eth_phy_power = -1;
          static inline constexpr uint8_t eth_phy_mdc = 8;
          static inline constexpr uint8_t eth_phy_mdio = 7;
        };
      } // namespace mant1s
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace metro_esp_32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:metro_esp-32";
          static inline constexpr const char *name = "Metro ESP-32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t adr = 12;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace metro_esp_32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace mgbot_iotik32a
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:mgbot-iotik32a";
          static inline constexpr const char *name = "MGBOT IOTIK 32A";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t tx2 = 17;
          static inline constexpr uint8_t rx2 = 16;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 4;
          static inline constexpr uint8_t txd = 1;
          static inline constexpr uint8_t rxd = 3;
          static inline constexpr uint8_t txd2 = 17;
          static inline constexpr uint8_t rxd2 = 16;
        };
      } // namespace mgbot_iotik32a
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace mgbot_iotik32b
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:mgbot-iotik32b";
          static inline constexpr const char *name = "MGBOT IOTIK 32B";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t ir = 27;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t tx2 = 17;
          static inline constexpr uint8_t rx2 = 16;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 18;
          static inline constexpr uint8_t ir_recv = 27;
          static inline constexpr uint8_t ir_input = 27;
          static inline constexpr uint8_t txd = 1;
          static inline constexpr uint8_t rxd = 3;
          static inline constexpr uint8_t txd2 = 17;
          static inline constexpr uint8_t rxd2 = 16;
        };
      } // namespace mgbot_iotik32b
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace mhetesp32devkit
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:mhetesp32devkit";
          static inline constexpr const char *name = "MH ET LIVE ESP32DevKIT";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace mhetesp32devkit
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace mhetesp32minikit
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:mhetesp32minikit";
          static inline constexpr const char *name = "MH ET LIVE ESP32MiniKit";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace mhetesp32minikit
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace micros2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:micros2";
          static inline constexpr const char *name = "microS2";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 32965;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sdo = 35;
          static inline constexpr uint8_t sdi = 37;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr uint8_t pixel_builtin = 33;
          static inline constexpr uint8_t button_builtin = 0;
          static inline constexpr const char *usb_manufacturer = "microDev";
          static inline constexpr const char *usb_product = "microS2";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 21;
          static inline constexpr uint8_t rgb_builtin = 80;
        };
      } // namespace micros2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace namino_arancio
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:namino_arancio";
          static inline constexpr const char *name = "Namino Arancio";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t gpio4 = 4;
          static inline constexpr uint8_t gpio5 = 5;
          static inline constexpr uint8_t gpio6 = 6;
          static inline constexpr uint8_t gpio7 = 7;
          static inline constexpr uint8_t gpio15 = 15;
          static inline constexpr uint8_t gpio16 = 16;
          static inline constexpr uint8_t gpio17 = 17;
          static inline constexpr uint8_t gpio18 = 18;
          static inline constexpr uint8_t gpio8 = 8;
          static inline constexpr uint8_t gpio19 = 19;
          static inline constexpr uint8_t gpio20 = 20;
          static inline constexpr uint8_t gpio3 = 3;
          static inline constexpr uint8_t gpio46 = 46;
          static inline constexpr uint8_t gpio9 = 9;
          static inline constexpr uint8_t gpio10 = 10;
          static inline constexpr uint8_t gpio11 = 11;
          static inline constexpr uint8_t gpio12 = 12;
          static inline constexpr uint8_t gpio13 = 13;
          static inline constexpr uint8_t gpio14 = 14;
          static inline constexpr uint8_t gpio21 = 21;
          static inline constexpr uint8_t gpio47 = 47;
          static inline constexpr uint8_t gpio48 = 48;
          static inline constexpr uint8_t gpio45 = 45;
          static inline constexpr uint8_t gpio0 = 0;
          static inline constexpr uint8_t gpio35 = 35;
          static inline constexpr uint8_t gpio36 = 36;
          static inline constexpr uint8_t gpio37 = 37;
          static inline constexpr uint8_t gpio38 = 38;
          static inline constexpr uint8_t gpio39 = 39;
          static inline constexpr uint8_t gpio40 = 40;
          static inline constexpr uint8_t gpio41 = 41;
          static inline constexpr uint8_t gpio42 = 42;
          static inline constexpr uint8_t gpio44 = 44;
          static inline constexpr uint8_t gpio43 = 43;
          static inline constexpr uint8_t gpio2 = 2;
          static inline constexpr uint8_t gpio1 = 1;
          static inline constexpr uint8_t dac1 = 0;
          static inline constexpr uint8_t dac2 = 0;
          static inline constexpr uint8_t j10_enc_a = 0;
          static inline constexpr uint8_t j10_enc_b = 0;
          static inline constexpr uint8_t j10_sw = 0;
          static inline constexpr uint8_t reset_add_on = 46;
          static inline constexpr uint8_t cs_sdcard = 2;
          static inline constexpr uint8_t boot_mode = 47;
          static inline constexpr uint8_t isp_tx = 17;
          static inline constexpr uint8_t isp_rx = 18;
          static inline constexpr uint8_t nm_reset = 48;
          static inline constexpr uint8_t adc1_ch3 = 4;
          static inline constexpr uint8_t adc1_ch4 = 5;
          static inline constexpr uint8_t adc1_ch5 = 6;
          static inline constexpr uint8_t adc1_ch6 = 7;
          static inline constexpr uint8_t adc2_ch4 = 15;
          static inline constexpr uint8_t adc2_ch5 = 16;
          static inline constexpr uint8_t adc2_ch6 = 17;
          static inline constexpr uint8_t adc2_ch7 = 18;
          static inline constexpr uint8_t adc1_ch7 = 8;
          static inline constexpr uint8_t adc2_ch8 = 19;
          static inline constexpr uint8_t adc2_ch9 = 20;
          static inline constexpr uint8_t adc1_ch2 = 3;
          static inline constexpr uint8_t adc1_ch8 = 9;
          static inline constexpr uint8_t adc1_ch9 = 10;
          static inline constexpr uint8_t adc2_ch0 = 11;
          static inline constexpr uint8_t adc2_ch1 = 12;
          static inline constexpr uint8_t adc2_ch2 = 13;
          static inline constexpr uint8_t adc2_ch3 = 14;
          static inline constexpr uint8_t adc1_ch1 = 2;
          static inline constexpr uint8_t adc1_ch0 = 1;
          static inline constexpr uint8_t touch4 = 4;
          static inline constexpr uint8_t touch5 = 5;
          static inline constexpr uint8_t touch6 = 6;
          static inline constexpr uint8_t touch7 = 7;
          static inline constexpr uint8_t touch8 = 8;
          static inline constexpr uint8_t touch3 = 3;
          static inline constexpr uint8_t touch9 = 9;
          static inline constexpr uint8_t touch10 = 10;
          static inline constexpr uint8_t touch11 = 11;
          static inline constexpr uint8_t touch12 = 12;
          static inline constexpr uint8_t touch13 = 13;
          static inline constexpr uint8_t touch14 = 14;
          static inline constexpr uint8_t touch2 = 2;
          static inline constexpr uint8_t touch1 = 1;
          static inline constexpr uint8_t tx = 17;
          static inline constexpr uint8_t rx = 18;
          static inline constexpr uint8_t namino_arancio_i2c_sda = 1;
          static inline constexpr uint8_t namino_arancio_i2c_scl = 0;
          static inline constexpr uint8_t nm_i2c_sda = 1;
          static inline constexpr uint8_t nm_i2c_scl = 0;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 11;
          static inline constexpr uint8_t a9 = 12;
          static inline constexpr uint8_t a10 = 13;
          static inline constexpr uint8_t a11 = 14;
          static inline constexpr uint8_t a12 = 15;
          static inline constexpr uint8_t a13 = 16;
          static inline constexpr uint8_t a14 = 17;
          static inline constexpr uint8_t a15 = 18;
          static inline constexpr uint8_t reset_arduino = 46;
          static inline constexpr uint8_t pc0 = 3;
          static inline constexpr uint8_t pc1 = 4;
          static inline constexpr uint8_t pc2 = 5;
          static inline constexpr uint8_t pc3 = 6;
          static inline constexpr uint8_t pc4 = 7;
          static inline constexpr uint8_t pc5 = 8;
          static inline constexpr uint8_t pb5 = 35;
          static inline constexpr uint8_t pb4 = 36;
          static inline constexpr uint8_t pb3 = 37;
          static inline constexpr uint8_t pb2 = 38;
          static inline constexpr uint8_t pb1 = 39;
          static inline constexpr uint8_t pb0 = 40;
          static inline constexpr uint8_t pd7 = 41;
          static inline constexpr uint8_t pd6 = 42;
          static inline constexpr uint8_t pd5 = 21;
          static inline constexpr uint8_t pd4 = 16;
          static inline constexpr uint8_t pd3 = 14;
          static inline constexpr uint8_t pd2 = 9;
          static inline constexpr uint8_t pd1 = 17;
          static inline constexpr uint8_t pd0 = 18;
          static inline constexpr uint8_t j1_io0 = 0;
          static inline constexpr uint8_t j2_35 = 35;
          static inline constexpr uint8_t j2_36 = 36;
          static inline constexpr uint8_t j2_37 = 37;
          static inline constexpr uint8_t j2_38 = 38;
          static inline constexpr uint8_t j2_39 = 39;
          static inline constexpr uint8_t j2_40 = 40;
          static inline constexpr uint8_t j3_io8 = 41;
          static inline constexpr uint8_t j3_7 = 42;
          static inline constexpr uint8_t j3_21 = 21;
          static inline constexpr uint8_t j3_16 = 16;
          static inline constexpr uint8_t j3_14 = 14;
          static inline constexpr uint8_t j3_9 = 9;
          static inline constexpr uint8_t j3_17 = 17;
          static inline constexpr uint8_t j3_18 = 18;
          static inline constexpr uint8_t j4_cs_io2 = 2;
          static inline constexpr uint8_t j4_sclk = 12;
          static inline constexpr uint8_t j4_mosi = 11;
          static inline constexpr uint8_t j4_miso = 13;
          static inline constexpr uint8_t j9_io3 = 3;
          static inline constexpr uint8_t j9_4 = 4;
          static inline constexpr uint8_t j9_5 = 5;
          static inline constexpr uint8_t j9_6 = 6;
          static inline constexpr uint8_t j9_7 = 7;
          static inline constexpr uint8_t j9_8 = 8;
        };
      } // namespace namino_arancio
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace namino_bianco
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:namino_bianco";
          static inline constexpr const char *name = "Namino Bianco";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t gpio4 = 4;
          static inline constexpr uint8_t gpio5 = 5;
          static inline constexpr uint8_t gpio6 = 6;
          static inline constexpr uint8_t gpio7 = 7;
          static inline constexpr uint8_t gpio15 = 15;
          static inline constexpr uint8_t gpio16 = 16;
          static inline constexpr uint8_t gpio17 = 17;
          static inline constexpr uint8_t gpio18 = 18;
          static inline constexpr uint8_t gpio8 = 8;
          static inline constexpr uint8_t gpio19 = 19;
          static inline constexpr uint8_t gpio20 = 20;
          static inline constexpr uint8_t gpio3 = 3;
          static inline constexpr uint8_t gpio46 = 46;
          static inline constexpr uint8_t gpio9 = 9;
          static inline constexpr uint8_t gpio10 = 10;
          static inline constexpr uint8_t gpio11 = 11;
          static inline constexpr uint8_t gpio12 = 12;
          static inline constexpr uint8_t gpio13 = 13;
          static inline constexpr uint8_t gpio14 = 14;
          static inline constexpr uint8_t gpio21 = 21;
          static inline constexpr uint8_t gpio47 = 47;
          static inline constexpr uint8_t gpio48 = 48;
          static inline constexpr uint8_t gpio45 = 45;
          static inline constexpr uint8_t gpio0 = 0;
          static inline constexpr uint8_t gpio35 = 35;
          static inline constexpr uint8_t gpio36 = 36;
          static inline constexpr uint8_t gpio37 = 37;
          static inline constexpr uint8_t gpio38 = 38;
          static inline constexpr uint8_t gpio39 = 39;
          static inline constexpr uint8_t gpio40 = 40;
          static inline constexpr uint8_t gpio41 = 41;
          static inline constexpr uint8_t gpio42 = 42;
          static inline constexpr uint8_t gpio44 = 44;
          static inline constexpr uint8_t gpio43 = 43;
          static inline constexpr uint8_t gpio2 = 2;
          static inline constexpr uint8_t gpio1 = 1;
          static inline constexpr uint8_t a6 = 0;
          static inline constexpr uint8_t a7 = 0;
          static inline constexpr uint8_t a8 = 0;
          static inline constexpr uint8_t a9 = 0;
          static inline constexpr uint8_t a10 = 0;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 0;
          static inline constexpr uint8_t a13 = 0;
          static inline constexpr uint8_t a14 = 0;
          static inline constexpr uint8_t a15 = 0;
          static inline constexpr uint8_t dac1 = 0;
          static inline constexpr uint8_t dac2 = 0;
          static inline constexpr uint8_t reset_arduino = 0;
          static inline constexpr uint8_t m1_rst = 0;
          static inline constexpr uint8_t adc1_ch3 = 4;
          static inline constexpr uint8_t adc1_ch4 = 5;
          static inline constexpr uint8_t adc1_ch5 = 6;
          static inline constexpr uint8_t adc1_ch6 = 7;
          static inline constexpr uint8_t adc2_ch4 = 15;
          static inline constexpr uint8_t adc2_ch5 = 16;
          static inline constexpr uint8_t adc2_ch6 = 17;
          static inline constexpr uint8_t adc2_ch7 = 18;
          static inline constexpr uint8_t adc1_ch7 = 8;
          static inline constexpr uint8_t adc2_ch8 = 19;
          static inline constexpr uint8_t adc2_ch9 = 20;
          static inline constexpr uint8_t adc1_ch2 = 3;
          static inline constexpr uint8_t adc1_ch8 = 9;
          static inline constexpr uint8_t adc1_ch9 = 10;
          static inline constexpr uint8_t adc2_ch0 = 11;
          static inline constexpr uint8_t adc2_ch1 = 12;
          static inline constexpr uint8_t adc2_ch2 = 13;
          static inline constexpr uint8_t adc2_ch3 = 14;
          static inline constexpr uint8_t adc1_ch1 = 2;
          static inline constexpr uint8_t adc1_ch0 = 1;
          static inline constexpr uint8_t touch4 = 4;
          static inline constexpr uint8_t touch5 = 5;
          static inline constexpr uint8_t touch6 = 6;
          static inline constexpr uint8_t touch7 = 7;
          static inline constexpr uint8_t touch8 = 8;
          static inline constexpr uint8_t touch3 = 3;
          static inline constexpr uint8_t touch9 = 9;
          static inline constexpr uint8_t touch10 = 10;
          static inline constexpr uint8_t touch11 = 11;
          static inline constexpr uint8_t touch12 = 12;
          static inline constexpr uint8_t touch13 = 13;
          static inline constexpr uint8_t touch14 = 14;
          static inline constexpr uint8_t touch2 = 2;
          static inline constexpr uint8_t touch1 = 1;
          static inline constexpr uint8_t tx = 17;
          static inline constexpr uint8_t rx = 18;
          static inline constexpr uint8_t nm_i2c_sda = 1;
          static inline constexpr uint8_t nm_i2c_scl = 2;
          static inline constexpr uint8_t a1 = 4;
          static inline constexpr uint8_t a2 = 5;
          static inline constexpr uint8_t a3 = 6;
          static inline constexpr uint8_t a4 = 7;
          static inline constexpr uint8_t a5 = 15;
          static inline constexpr uint8_t pc0 = 3;
          static inline constexpr uint8_t pc1 = 4;
          static inline constexpr uint8_t pc2 = 5;
          static inline constexpr uint8_t pc3 = 6;
          static inline constexpr uint8_t pc4 = 7;
          static inline constexpr uint8_t pc5 = 15;
          static inline constexpr uint8_t pb5 = 35;
          static inline constexpr uint8_t pb4 = 36;
          static inline constexpr uint8_t pb3 = 37;
          static inline constexpr uint8_t pb2 = 38;
          static inline constexpr uint8_t pb1 = 39;
          static inline constexpr uint8_t pb0 = 40;
          static inline constexpr uint8_t pd7 = 41;
          static inline constexpr uint8_t pd6 = 42;
          static inline constexpr uint8_t pd5 = 21;
          static inline constexpr uint8_t pd4 = 16;
          static inline constexpr uint8_t pd3 = 14;
          static inline constexpr uint8_t pd2 = 47;
          static inline constexpr uint8_t pd1 = 17;
          static inline constexpr uint8_t pd0 = 18;
          static inline constexpr uint8_t pb_scl = 2;
          static inline constexpr uint8_t pb_sda = 1;
          static inline constexpr uint8_t pb_35 = 35;
          static inline constexpr uint8_t pb_36 = 36;
          static inline constexpr uint8_t pb_37 = 37;
          static inline constexpr uint8_t pb_38 = 38;
          static inline constexpr uint8_t pb_39 = 39;
          static inline constexpr uint8_t pb_40 = 40;
          static inline constexpr uint8_t pd_io41 = 41;
          static inline constexpr uint8_t pd_42 = 42;
          static inline constexpr uint8_t pd_21 = 21;
          static inline constexpr uint8_t pd_16 = 16;
          static inline constexpr uint8_t pd_14 = 14;
          static inline constexpr uint8_t pd_47 = 47;
          static inline constexpr uint8_t pd_17 = 17;
          static inline constexpr uint8_t pd_18 = 18;
          static inline constexpr uint8_t pc_io3 = 3;
          static inline constexpr uint8_t pc_4 = 4;
          static inline constexpr uint8_t pc_5 = 5;
          static inline constexpr uint8_t pc_6 = 6;
          static inline constexpr uint8_t pc_7 = 7;
          static inline constexpr uint8_t pc_15 = 15;
          static inline constexpr uint8_t m1_3_an = 3;
          static inline constexpr uint8_t m1_48_cs = 48;
          static inline constexpr uint8_t m1_12_sck = 12;
          static inline constexpr uint8_t m1_13_miso = 13;
          static inline constexpr uint8_t m1_11_mosi = 11;
          static inline constexpr uint8_t m2_47_pwm = 47;
          static inline constexpr uint8_t m2_14_int = 14;
          static inline constexpr uint8_t m2_18_rx = 18;
          static inline constexpr uint8_t m2_17_tx = 17;
          static inline constexpr uint8_t m2_2_scl = 2;
          static inline constexpr uint8_t m2_1_sda = 1;
          static inline constexpr uint8_t j3_scl = 2;
          static inline constexpr uint8_t j3_sda = 1;
        };
      } // namespace namino_bianco
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace namino_rosso
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:namino_rosso";
          static inline constexpr const char *name = "Namino Rosso";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t gpio4 = 4;
          static inline constexpr uint8_t gpio5 = 5;
          static inline constexpr uint8_t gpio6 = 6;
          static inline constexpr uint8_t gpio7 = 7;
          static inline constexpr uint8_t gpio15 = 15;
          static inline constexpr uint8_t gpio16 = 16;
          static inline constexpr uint8_t gpio17 = 17;
          static inline constexpr uint8_t gpio18 = 18;
          static inline constexpr uint8_t gpio8 = 8;
          static inline constexpr uint8_t gpio19 = 19;
          static inline constexpr uint8_t gpio20 = 20;
          static inline constexpr uint8_t gpio3 = 3;
          static inline constexpr uint8_t gpio46 = 46;
          static inline constexpr uint8_t gpio9 = 9;
          static inline constexpr uint8_t gpio10 = 10;
          static inline constexpr uint8_t gpio11 = 11;
          static inline constexpr uint8_t gpio12 = 12;
          static inline constexpr uint8_t gpio13 = 13;
          static inline constexpr uint8_t gpio14 = 14;
          static inline constexpr uint8_t gpio21 = 21;
          static inline constexpr uint8_t gpio47 = 47;
          static inline constexpr uint8_t gpio48 = 48;
          static inline constexpr uint8_t gpio45 = 45;
          static inline constexpr uint8_t gpio0 = 0;
          static inline constexpr uint8_t gpio35 = 35;
          static inline constexpr uint8_t gpio36 = 36;
          static inline constexpr uint8_t gpio37 = 37;
          static inline constexpr uint8_t gpio38 = 38;
          static inline constexpr uint8_t gpio39 = 39;
          static inline constexpr uint8_t gpio40 = 40;
          static inline constexpr uint8_t gpio41 = 41;
          static inline constexpr uint8_t gpio42 = 42;
          static inline constexpr uint8_t gpio44 = 44;
          static inline constexpr uint8_t gpio43 = 43;
          static inline constexpr uint8_t gpio2 = 2;
          static inline constexpr uint8_t gpio1 = 1;
          static inline constexpr uint8_t dac1 = 0;
          static inline constexpr uint8_t dac2 = 0;
          static inline constexpr uint8_t j10_enc_a = 0;
          static inline constexpr uint8_t j10_enc_b = 0;
          static inline constexpr uint8_t j10_sw = 0;
          static inline constexpr uint8_t reset_add_on = 46;
          static inline constexpr uint8_t cs_sdcard = 2;
          static inline constexpr uint8_t boot_mode = 47;
          static inline constexpr uint8_t isp_tx = 17;
          static inline constexpr uint8_t isp_rx = 18;
          static inline constexpr uint8_t nm_reset = 48;
          static inline constexpr uint8_t adc1_ch3 = 4;
          static inline constexpr uint8_t adc1_ch4 = 5;
          static inline constexpr uint8_t adc1_ch5 = 6;
          static inline constexpr uint8_t adc1_ch6 = 7;
          static inline constexpr uint8_t adc2_ch4 = 15;
          static inline constexpr uint8_t adc2_ch5 = 16;
          static inline constexpr uint8_t adc2_ch6 = 17;
          static inline constexpr uint8_t adc2_ch7 = 18;
          static inline constexpr uint8_t adc1_ch7 = 8;
          static inline constexpr uint8_t adc2_ch8 = 19;
          static inline constexpr uint8_t adc2_ch9 = 20;
          static inline constexpr uint8_t adc1_ch2 = 3;
          static inline constexpr uint8_t adc1_ch8 = 9;
          static inline constexpr uint8_t adc1_ch9 = 10;
          static inline constexpr uint8_t adc2_ch0 = 11;
          static inline constexpr uint8_t adc2_ch1 = 12;
          static inline constexpr uint8_t adc2_ch2 = 13;
          static inline constexpr uint8_t adc2_ch3 = 14;
          static inline constexpr uint8_t adc1_ch1 = 2;
          static inline constexpr uint8_t adc1_ch0 = 1;
          static inline constexpr uint8_t touch4 = 4;
          static inline constexpr uint8_t touch5 = 5;
          static inline constexpr uint8_t touch6 = 6;
          static inline constexpr uint8_t touch7 = 7;
          static inline constexpr uint8_t touch8 = 8;
          static inline constexpr uint8_t touch3 = 3;
          static inline constexpr uint8_t touch9 = 9;
          static inline constexpr uint8_t touch10 = 10;
          static inline constexpr uint8_t touch11 = 11;
          static inline constexpr uint8_t touch12 = 12;
          static inline constexpr uint8_t touch13 = 13;
          static inline constexpr uint8_t touch14 = 14;
          static inline constexpr uint8_t touch2 = 2;
          static inline constexpr uint8_t touch1 = 1;
          static inline constexpr uint8_t tx = 17;
          static inline constexpr uint8_t rx = 18;
          static inline constexpr uint8_t namino_arancio_i2c_sda = 1;
          static inline constexpr uint8_t namino_arancio_i2c_scl = 0;
          static inline constexpr uint8_t nm_i2c_sda = 1;
          static inline constexpr uint8_t nm_i2c_scl = 0;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 11;
          static inline constexpr uint8_t a9 = 12;
          static inline constexpr uint8_t a10 = 13;
          static inline constexpr uint8_t a11 = 14;
          static inline constexpr uint8_t a12 = 15;
          static inline constexpr uint8_t a13 = 16;
          static inline constexpr uint8_t a14 = 17;
          static inline constexpr uint8_t a15 = 18;
          static inline constexpr uint8_t reset_arduino = 46;
          static inline constexpr uint8_t pc0 = 3;
          static inline constexpr uint8_t pc1 = 4;
          static inline constexpr uint8_t pc2 = 5;
          static inline constexpr uint8_t pc3 = 6;
          static inline constexpr uint8_t pc4 = 7;
          static inline constexpr uint8_t pc5 = 8;
          static inline constexpr uint8_t pb5 = 35;
          static inline constexpr uint8_t pb4 = 36;
          static inline constexpr uint8_t pb3 = 37;
          static inline constexpr uint8_t pb2 = 38;
          static inline constexpr uint8_t pb1 = 39;
          static inline constexpr uint8_t pb0 = 40;
          static inline constexpr uint8_t pd7 = 41;
          static inline constexpr uint8_t pd6 = 42;
          static inline constexpr uint8_t pd5 = 21;
          static inline constexpr uint8_t pd4 = 16;
          static inline constexpr uint8_t pd3 = 14;
          static inline constexpr uint8_t pd2 = 9;
          static inline constexpr uint8_t pd1 = 17;
          static inline constexpr uint8_t pd0 = 18;
          static inline constexpr uint8_t j1_io0 = 0;
          static inline constexpr uint8_t j2_35 = 35;
          static inline constexpr uint8_t j2_36 = 36;
          static inline constexpr uint8_t j2_37 = 37;
          static inline constexpr uint8_t j2_38 = 38;
          static inline constexpr uint8_t j2_39 = 39;
          static inline constexpr uint8_t j2_40 = 40;
          static inline constexpr uint8_t j3_io8 = 41;
          static inline constexpr uint8_t j3_7 = 42;
          static inline constexpr uint8_t j3_21 = 21;
          static inline constexpr uint8_t j3_16 = 16;
          static inline constexpr uint8_t j3_14 = 14;
          static inline constexpr uint8_t j3_9 = 9;
          static inline constexpr uint8_t j3_17 = 17;
          static inline constexpr uint8_t j3_18 = 18;
          static inline constexpr uint8_t j4_cs_io2 = 2;
          static inline constexpr uint8_t j4_sclk = 12;
          static inline constexpr uint8_t j4_mosi = 11;
          static inline constexpr uint8_t j4_miso = 13;
          static inline constexpr uint8_t j9_io3 = 3;
          static inline constexpr uint8_t j9_4 = 4;
          static inline constexpr uint8_t j9_5 = 5;
          static inline constexpr uint8_t j9_6 = 6;
          static inline constexpr uint8_t j9_7 = 7;
          static inline constexpr uint8_t j9_8 = 8;
        };
      } // namespace namino_rosso
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace nano32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:nano32";
          static inline constexpr const char *name = "Nano32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t builtin_key = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 16;
        };
      } // namespace nano32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace nano_nora
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:nano_nora";
          static inline constexpr const char *name = "Arduino Nano ESP32";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 9025;
          static inline constexpr uint8_t usb_pid = 112;
          static inline constexpr uint8_t d0 = 0;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 2;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 4;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 6;
          static inline constexpr uint8_t d7 = 7;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d10 = 10;
          static inline constexpr uint8_t d11 = 11;
          static inline constexpr uint8_t d12 = 12;
          static inline constexpr uint8_t d13 = 13;
          static inline constexpr uint8_t led_red = 14;
          static inline constexpr uint8_t led_green = 15;
          static inline constexpr uint8_t led_blue = 16;
          static inline constexpr uint8_t a1 = 18;
          static inline constexpr uint8_t a2 = 19;
          static inline constexpr uint8_t a3 = 20;
          static inline constexpr uint8_t a4 = 21;
          static inline constexpr uint8_t a5 = 22;
          static inline constexpr uint8_t a6 = 23;
          static inline constexpr uint8_t a7 = 24;
          static inline constexpr uint8_t ledr = 46;
          static inline constexpr uint8_t ledg = 0;
          static inline constexpr uint8_t ledb = 45;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t rts = 45;
          static inline constexpr uint8_t cts = 6;
          static inline constexpr uint8_t dtr = 1;
          static inline constexpr uint8_t dsr = 7;
          static inline constexpr uint8_t pin_i2s_sck = 10;
          static inline constexpr uint8_t pin_i2s_fs = 17;
          static inline constexpr uint8_t pin_i2s_sd = 18;
          static inline constexpr uint8_t pin_i2s_sd_out = 18;
          static inline constexpr uint8_t pin_i2s_sd_in = 21;
        };
      } // namespace nano_nora
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace nebulas3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:nebulas3";
          static inline constexpr const char *name = "Nebula S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sda1 = 2;
          static inline constexpr uint8_t scl1 = 1;
          static inline constexpr uint8_t d0 = 1;
          static inline constexpr uint8_t d1 = 2;
          static inline constexpr uint8_t d2 = 44;
          static inline constexpr uint8_t d3 = 43;
          static inline constexpr uint8_t d4 = 42;
          static inline constexpr uint8_t d5 = 41;
          static inline constexpr uint8_t d6 = 40;
          static inline constexpr uint8_t d7 = 39;
          static inline constexpr uint8_t d8 = 38;
          static inline constexpr uint8_t d9 = 27;
          static inline constexpr uint8_t d10 = 45;
          static inline constexpr uint8_t d11 = 4;
          static inline constexpr uint8_t d12 = 5;
          static inline constexpr uint8_t d13 = 6;
          static inline constexpr uint8_t d14 = 7;
          static inline constexpr uint8_t d15 = 15;
          static inline constexpr uint8_t d16 = 16;
          static inline constexpr uint8_t d17 = 17;
          static inline constexpr uint8_t d18 = 18;
          static inline constexpr uint8_t a1 = 5;
          static inline constexpr uint8_t a2 = 6;
          static inline constexpr uint8_t a3 = 7;
          static inline constexpr uint8_t a4 = 1;
          static inline constexpr uint8_t a5 = 2;
          static inline constexpr uint8_t builtin_led = 94;
          static inline constexpr uint8_t rgb_builtin = 94;
        };
      } // namespace nebulas3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace nina_w10
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:nina_w10";
          static inline constexpr const char *name = "u-blox NINA-W10 series (ESP32)";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t led_green = 33;
          static inline constexpr uint8_t led_red = 23;
          static inline constexpr uint8_t led_blue = 21;
          static inline constexpr uint8_t sw1 = 33;
          static inline constexpr uint8_t sw2 = 27;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t d0 = 3;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 26;
          static inline constexpr uint8_t d3 = 25;
          static inline constexpr uint8_t d4 = 35;
          static inline constexpr uint8_t d5 = 27;
          static inline constexpr uint8_t d6 = 22;
          static inline constexpr uint8_t d7 = 0;
          static inline constexpr uint8_t d8 = 15;
          static inline constexpr uint8_t d9 = 14;
          static inline constexpr uint8_t d10 = 5;
          static inline constexpr uint8_t d11 = 19;
          static inline constexpr uint8_t d12 = 23;
          static inline constexpr uint8_t d13 = 18;
          static inline constexpr uint8_t d14 = 13;
          static inline constexpr uint8_t d15 = 12;
          static inline constexpr uint8_t d16 = 32;
          static inline constexpr uint8_t d17 = 33;
          static inline constexpr uint8_t d18 = 21;
          static inline constexpr uint8_t d19 = 34;
          static inline constexpr uint8_t d20 = 36;
          static inline constexpr uint8_t d21 = 39;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace nina_w10
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace node32s
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:node32s";
          static inline constexpr const char *name = "Node32s";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace node32s
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace nodemcu_32s
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:nodemcu-32s";
          static inline constexpr const char *name = "NodeMCU-32S";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace nodemcu_32s
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace nologo_esp32c3_super_mini
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:nologo_esp32c3_super_mini";
          static inline constexpr const char *name = "Nologo ESP32C3 Super Mini";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t builtin_led = 8;
        };
      } // namespace nologo_esp32c3_super_mini
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace nologo_esp32s3_pico
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:nologo_esp32s3_pico";
          static inline constexpr const char *name = "Nologo ESP32S3 Pico";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t builtin_led = 21;
          static inline constexpr uint8_t rgb_builtin = 70;
        };
      } // namespace nologo_esp32s3_pico
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace nora_w10
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:nora_w10";
          static inline constexpr const char *name = "u-blox NORA-W10 series (ESP32-S3)";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t rts = 45;
          static inline constexpr uint8_t cts = 6;
          static inline constexpr uint8_t dtr = 1;
          static inline constexpr uint8_t dsr = 7;
          static inline constexpr uint8_t sw1 = 46;
          static inline constexpr uint8_t sw2 = 0;
          static inline constexpr uint8_t sw3 = 47;
          static inline constexpr uint8_t sw4 = 48;
          static inline constexpr uint8_t led_red = 5;
          static inline constexpr uint8_t led_green = 2;
          static inline constexpr uint8_t led_blue = 8;
          static inline constexpr uint8_t a1 = 12;
          static inline constexpr uint8_t a2 = 13;
          static inline constexpr uint8_t a3 = 5;
          static inline constexpr uint8_t a4 = 15;
          static inline constexpr uint8_t a5 = 16;
          static inline constexpr uint8_t d0 = 44;
          static inline constexpr uint8_t d1 = 43;
          static inline constexpr uint8_t d2 = 46;
          static inline constexpr uint8_t d3 = 4;
          static inline constexpr uint8_t d4 = 3;
          static inline constexpr uint8_t d5 = 2;
          static inline constexpr uint8_t d6 = 14;
          static inline constexpr uint8_t d7 = 10;
          static inline constexpr uint8_t d8 = 33;
          static inline constexpr uint8_t d9 = 38;
          static inline constexpr uint8_t d10 = 34;
          static inline constexpr uint8_t d11 = 35;
          static inline constexpr uint8_t d12 = 37;
          static inline constexpr uint8_t d13 = 36;
          static inline constexpr uint8_t sda1 = 21;
          static inline constexpr uint8_t scl1 = 0;
          static inline constexpr uint8_t d14 = 45;
          static inline constexpr uint8_t d15 = 6;
          static inline constexpr uint8_t d16 = 1;
          static inline constexpr uint8_t d17 = 7;
          static inline constexpr uint8_t d18 = 47;
          static inline constexpr uint8_t d19 = 48;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 8;
        };
      } // namespace nora_w10
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace odroid_esp32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:odroid_esp32";
          static inline constexpr const char *name = "ODROID ESP32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace odroid_esp32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace onehorse32dev
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:onehorse32dev";
          static inline constexpr const char *name = "Onehorse ESP32 Dev Module";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a1 = 37;
          static inline constexpr uint8_t a2 = 38;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 5;
        };
      } // namespace onehorse32dev
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace oroca_edubot
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:oroca_edubot";
          static inline constexpr const char *name = "OROCA EduBot";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 17;
          static inline constexpr uint8_t rx = 16;
          static inline constexpr uint8_t a1 = 39;
          static inline constexpr uint8_t a2 = 36;
          static inline constexpr uint8_t a3 = 33;
          static inline constexpr uint8_t d0 = 4;
          static inline constexpr uint8_t d1 = 16;
          static inline constexpr uint8_t d2 = 17;
          static inline constexpr uint8_t d3 = 22;
          static inline constexpr uint8_t d4 = 23;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 18;
          static inline constexpr uint8_t d7 = 19;
          static inline constexpr uint8_t d8 = 33;
          static inline constexpr uint8_t vbat = 35;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t bat_volt_pin = 35;
        };
      } // namespace oroca_edubot
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace pandabyte_x32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:pandabyte_x32";
          static inline constexpr const char *name = "PandaByte x32 - ESP32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t rgb_builtin = 12;
          static inline constexpr uint8_t button_builtin = 4;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace pandabyte_x32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace pandabyte_xc3m
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:pandabyte_xc3m";
          static inline constexpr const char *name = "Pandabyte xC3m - ESP32C3";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t rgb_builtin = 6;
          static inline constexpr uint8_t button_builtin = 7;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t d0 = 0;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 2;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 4;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 6;
          static inline constexpr uint8_t d7 = 7;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d10 = 10;
          static inline constexpr uint8_t d18 = 18;
          static inline constexpr uint8_t d19 = 19;
        };
      } // namespace pandabyte_xc3m
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace pandabyte_xc5
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:pandabyte_xc5";
          static inline constexpr const char *name = "Pandabyte xC5 - ESP32C5";
          static inline constexpr const char *build_mcu = "esp32c5";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 29;
          static inline constexpr uint8_t rgb_builtin = 10;
          static inline constexpr uint8_t button_builtin = 24;
          static inline constexpr uint8_t tx = 11;
          static inline constexpr uint8_t rx = 12;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t lp_sda = 2;
          static inline constexpr uint8_t lp_scl = 3;
          static inline constexpr uint8_t lp_rx = 4;
          static inline constexpr uint8_t lp_tx = 5;
          static inline constexpr uint8_t sda1 = 2;
          static inline constexpr uint8_t scl1 = 3;
        };
      } // namespace pandabyte_xc5
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace pandabyte_xc6
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:pandabyte_xc6";
          static inline constexpr const char *name = "PandaByte xC6 - ESP32C6";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint8_t rgb_builtin = 23;
          static inline constexpr uint8_t button_builtin = 22;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t sda1 = 6;
          static inline constexpr uint8_t scl1 = 7;
        };
      } // namespace pandabyte_xc6
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace pandabyte_xs3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:pandabyte_xs3";
          static inline constexpr const char *name = "PandaByte xS3 - ESP32S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t rgb_builtin = 12;
          static inline constexpr uint8_t button_builtin = 21;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
        };
      } // namespace pandabyte_xs3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace pico32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:pico32";
          static inline constexpr const char *name = "ESP32 PICO-D4";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace pico32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace piranha_esp_32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:piranha_esp-32";
          static inline constexpr const char *name = "Piranha ESP-32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace piranha_esp_32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace pocket_32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:pocket_32";
          static inline constexpr const char *name = "Dongsen Tech Pocket 32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 16;
        };
      } // namespace pocket_32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace quantum
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:quantum";
          static inline constexpr const char *name = "Noduino Quantum";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace quantum
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace rakwireless_rak3112
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:rakwireless_rak3112";
          static inline constexpr const char *name = "RAKwireless RAK3112";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t led_green = 46;
          static inline constexpr uint8_t led_blue = 45;
          static inline constexpr uint8_t bat_volt = 21;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t tx1 = 43;
          static inline constexpr uint8_t rx1 = 44;
          static inline constexpr uint8_t sda1 = 17;
          static inline constexpr uint8_t scl1 = 18;
          static inline constexpr uint8_t lora_ant_switch = 4;
          static inline constexpr uint8_t lora_sck = 5;
          static inline constexpr uint8_t lora_miso = 3;
          static inline constexpr uint8_t lora_mosi = 6;
          static inline constexpr uint8_t lora_cs = 7;
          static inline constexpr uint8_t lora_rst = 8;
          static inline constexpr uint8_t lora_dio1 = 47;
          static inline constexpr uint8_t lora_busy = 48;
          static inline constexpr uint8_t wb_io1 = 21;
          static inline constexpr uint8_t wb_io2 = 14;
          static inline constexpr uint8_t wb_io3 = 41;
          static inline constexpr uint8_t wb_io4 = 42;
          static inline constexpr uint8_t wb_io5 = 38;
          static inline constexpr uint8_t wb_io6 = 39;
          static inline constexpr uint8_t wb_a0 = 1;
          static inline constexpr uint8_t wb_a1 = 2;
          static inline constexpr uint8_t wb_cs = 12;
          static inline constexpr uint8_t wb_led1 = 46;
          static inline constexpr uint8_t wb_led2 = 45;
          static inline constexpr uint8_t builtin_led = 46;
          static inline constexpr uint8_t bat_volt_pin = 21;
          static inline constexpr uint8_t lora_irq = 47;
        };
      } // namespace rakwireless_rak3112
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace redpill_esp32s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:redpill_esp32s3";
          static inline constexpr const char *name = "RedPill(+) ESP32-S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 52;
          static inline constexpr uint8_t rgb_builtin = 52;
        };
      } // namespace redpill_esp32s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace roboheart_hercules
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:roboheart_hercules";
          static inline constexpr const char *name = "RoboHeart Hercules";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t motor_a_in1 = 25;
          static inline constexpr uint8_t motor_a_in2 = 26;
          static inline constexpr uint8_t motor_b_in1 = 27;
          static inline constexpr uint8_t motor_b_in2 = 32;
          static inline constexpr uint8_t motor_c_in1 = 33;
          static inline constexpr uint8_t motor_c_in2 = 4;
          static inline constexpr uint8_t sleep_motor_abc = 2;
          static inline constexpr uint8_t led_roboheart = 13;
          static inline constexpr uint8_t button_roboheart = 0;
          static inline constexpr uint8_t imu_sda = 21;
          static inline constexpr uint8_t imu_scl = 22;
          static inline constexpr uint8_t rxd1 = 16;
          static inline constexpr uint8_t txd1 = 17;
          static inline constexpr uint8_t gsm_pwrkey = 12;
          static inline constexpr uint8_t gsm_dtr = 13;
          static inline constexpr uint8_t gsm_cts = 15;
          static inline constexpr uint8_t gsm_rts = 14;
          static inline constexpr uint8_t battery_pin = 36;
          static inline constexpr uint8_t tx = 35;
          static inline constexpr uint8_t rx = 34;
          static inline constexpr uint8_t txd2 = 17;
          static inline constexpr uint8_t rxd2 = 16;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g16 = 16;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g17 = 17;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t gsm_tx = 17;
          static inline constexpr uint8_t gsm_rx = 16;
          static inline constexpr uint8_t bat_volt_pin = 36;
        };
      } // namespace roboheart_hercules
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace rootmaker
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:rootmaker";
          static inline constexpr const char *name = "Root Maker";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t pin_rgb_led = 48;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
        };
      } // namespace rootmaker
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace sensebox_eye
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:sensebox_eye";
          static inline constexpr const char *name = "senseBox Eye";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33489;
          static inline constexpr const char *usb_fw_msc_product_revision = "1.00";
          static inline constexpr uint8_t usb_fw_msc_serial_number = 0;
          static inline constexpr uint8_t pin_rgb_led = 45;
          static inline constexpr uint8_t rgbled_pin = 45;
          static inline constexpr uint8_t pin_led = 45;
          static inline constexpr uint8_t rgbled_num = 1;
          static inline constexpr uint8_t pin_qwiic_sda = 2;
          static inline constexpr uint8_t pin_qwiic_scl = 1;
          static inline constexpr uint8_t pin_io14 = 14;
          static inline constexpr uint8_t pin_io48 = 48;
          static inline constexpr uint8_t pin_button = 47;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t pin_uart_txd = 43;
          static inline constexpr uint8_t pin_uart_rxd = 44;
          static inline constexpr uint8_t pin_uart_enable = 26;
          static inline constexpr uint8_t sd_enable = 3;
          static inline constexpr uint8_t pin_sd_miso = 40;
          static inline constexpr uint8_t pin_sd_mosi = 38;
          static inline constexpr uint8_t pin_sd_sclk = 39;
          static inline constexpr uint8_t pin_sd_cs = 41;
          static inline constexpr uint8_t pin_sd_enable = 3;
          static inline constexpr uint8_t pin_usb_dm = 19;
          static inline constexpr uint8_t pin_usb_dp = 20;
          static inline constexpr uint8_t pwdn_gpio_num = 46;
          static inline constexpr int8_t reset_gpio_num = -1;
          static inline constexpr uint8_t xclk_gpio_num = 15;
          static inline constexpr uint8_t siod_gpio_num = 4;
          static inline constexpr uint8_t sioc_gpio_num = 5;
          static inline constexpr uint8_t y9_gpio_num = 16;
          static inline constexpr uint8_t y8_gpio_num = 17;
          static inline constexpr uint8_t y7_gpio_num = 18;
          static inline constexpr uint8_t y6_gpio_num = 12;
          static inline constexpr uint8_t y5_gpio_num = 10;
          static inline constexpr uint8_t y4_gpio_num = 8;
          static inline constexpr uint8_t y3_gpio_num = 9;
          static inline constexpr uint8_t y2_gpio_num = 11;
          static inline constexpr uint8_t vsync_gpio_num = 6;
          static inline constexpr uint8_t href_gpio_num = 7;
          static inline constexpr uint8_t pclk_gpio_num = 13;
          static inline constexpr uint8_t lora_tx = 43;
          static inline constexpr uint8_t lora_rx = 44;
          static inline constexpr const char *usb_manufacturer = "senseBox";
          static inline constexpr const char *usb_product = "Eye ESP32S3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr const char *usb_fw_msc_vendor_id = "senseBox";
          static inline constexpr const char *usb_fw_msc_product_id = "Eye ESP32S3";
          static inline constexpr const char *usb_fw_msc_volume_name = "senseBox";
          static inline constexpr uint8_t a14 = 14;
          static inline constexpr uint8_t d14 = 14;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t a48 = 48;
          static inline constexpr uint8_t d48 = 48;
          static inline constexpr uint8_t t48 = 48;
        };
      } // namespace sensebox_eye
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace sensebox_mcu_esp32s2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:sensebox_mcu_esp32s2";
          static inline constexpr const char *name = "senseBox MCU-S2 ESP32-S2";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33208;
          static inline constexpr const char *usb_fw_msc_product_revision = "1.00";
          static inline constexpr uint8_t usb_fw_msc_serial_number = 0;
          static inline constexpr uint8_t pin_rgb_led = 1;
          static inline constexpr uint8_t rgbled_pin = 1;
          static inline constexpr uint8_t rgbled_num = 1;
          static inline constexpr uint8_t pin_qwiic_sda = 39;
          static inline constexpr uint8_t pin_qwiic_scl = 40;
          static inline constexpr uint8_t wire1_pin_defined = 1;
          static inline constexpr uint8_t scl1 = 42;
          static inline constexpr uint8_t sda1 = 45;
          static inline constexpr uint8_t pin_i2c_scl = 42;
          static inline constexpr uint8_t pin_i2c_sda = 45;
          static inline constexpr uint8_t pin_i2c_int = 46;
          static inline constexpr uint8_t pin_xbee_enable = 41;
          static inline constexpr uint8_t pin_xbee_int = 33;
          static inline constexpr uint8_t pin_xbee_cs = 34;
          static inline constexpr uint8_t pin_xbee_mosi = 35;
          static inline constexpr uint8_t pin_xbee_sclk = 36;
          static inline constexpr uint8_t pin_xbee_miso = 37;
          static inline constexpr uint8_t pin_xbee_reset = 38;
          static inline constexpr uint8_t pin_xbee_txd = 17;
          static inline constexpr uint8_t pin_xbee_rxd = 18;
          static inline constexpr uint8_t pin_xb1_enable = 41;
          static inline constexpr uint8_t pin_xb1_int = 33;
          static inline constexpr uint8_t pin_xb1_cs = 34;
          static inline constexpr uint8_t pin_xb1_mosi = 35;
          static inline constexpr uint8_t pin_xb1_sclk = 36;
          static inline constexpr uint8_t pin_xb1_miso = 37;
          static inline constexpr uint8_t pin_xb1_reset = 38;
          static inline constexpr uint8_t pin_xb1_txd = 17;
          static inline constexpr uint8_t pin_xb1_rxd = 18;
          static inline constexpr uint8_t pin_led = 1;
          static inline constexpr uint8_t pin_io2 = 2;
          static inline constexpr uint8_t pin_io3 = 3;
          static inline constexpr uint8_t pin_io4 = 4;
          static inline constexpr uint8_t pin_io5 = 5;
          static inline constexpr uint8_t pin_io6 = 6;
          static inline constexpr uint8_t pin_io7 = 7;
          static inline constexpr uint8_t io_enable = 8;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t pin_uart_txd = 43;
          static inline constexpr uint8_t pin_uart_rxd = 44;
          static inline constexpr uint8_t pin_uart_enable = 26;
          static inline constexpr uint8_t tx1 = 17;
          static inline constexpr uint8_t rx1 = 18;
          static inline constexpr uint8_t pd_sense = 14;
          static inline constexpr uint8_t pd_enable = 21;
          static inline constexpr uint8_t pin_pd_enable = 21;
          static inline constexpr uint8_t vspi_miso = 13;
          static inline constexpr uint8_t vspi_mosi = 11;
          static inline constexpr uint8_t vspi_sclk = 12;
          static inline constexpr uint8_t vspi_ss = 10;
          static inline constexpr uint8_t sd_enable = 9;
          static inline constexpr uint8_t pin_sd_enable = 9;
          static inline constexpr uint8_t pin_sd_cs = 10;
          static inline constexpr uint8_t pin_sd_mosi = 11;
          static inline constexpr uint8_t pin_sd_sclk = 12;
          static inline constexpr uint8_t pin_sd_miso = 13;
          static inline constexpr uint8_t pin_usb_dm = 19;
          static inline constexpr uint8_t pin_usb_dp = 20;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "senseBox";
          static inline constexpr const char *usb_product = "MCU-S2 ESP32S2";
          static inline constexpr bool usb_serial = true;
          static inline constexpr const char *usb_fw_msc_vendor_id = "senseBox";
          static inline constexpr const char *usb_fw_msc_product_id = "MCU-S2 ESP32S2";
          static inline constexpr const char *usb_fw_msc_volume_name = "senseBox";
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t a7 = 7;
          static inline constexpr uint8_t d2 = 2;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 4;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 6;
          static inline constexpr uint8_t d7 = 7;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
        };
      } // namespace sensebox_mcu_esp32s2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace sensesiot_weizen
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:sensesiot_weizen";
          static inline constexpr const char *name = "Senses\'s WEIZEN";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace sensesiot_weizen
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace soldered_nula_deepsleep_esp32s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:soldered_nula_deepsleep_esp32s3";
          static inline constexpr const char *name = "Soldered NULA DeepSleep ESP32S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33532;
          static inline constexpr uint8_t pin_rgb_led = 2;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 51;
          static inline constexpr uint8_t rgb_builtin = 51;
        };
      } // namespace soldered_nula_deepsleep_esp32s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace soldered_nula_mini_esp32c6
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:soldered_nula_mini_esp32c6";
          static inline constexpr const char *name = "Soldered NULA Mini ESP32C6";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint8_t user_btn = 9;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t builtin_led = 23;
        };
      } // namespace soldered_nula_mini_esp32c6
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace sonoff_dualr3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:sonoff_dualr3";
          static inline constexpr const char *name = "Sonoff DUALR3";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace sonoff_dualr3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace sparkfun_esp32_iot_redboard
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:sparkfun_esp32_iot_redboard";
          static inline constexpr const char *name = "SparkFun ESP32 IoT RedBoard";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t rgb_led_pin = 2;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 18;
          static inline constexpr uint8_t rgb_builtin = 42;
        };
      } // namespace sparkfun_esp32_iot_redboard
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace sparkfun_esp32c6_qwiic_pocket
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:sparkfun_esp32c6_qwiic_pocket";
          static inline constexpr const char *name = "SparkFun ESP32-C6 Qwiic Pocket";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t builtin_led = 23;
        };
      } // namespace sparkfun_esp32c6_qwiic_pocket
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace sparkfun_esp32c6_thing_plus
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:sparkfun_esp32c6_thing_plus";
          static inline constexpr const char *name = "SparkFun ESP32-C6 Thing Plus";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint8_t pin_rgb_led = 23;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t builtin_led = 54;
          static inline constexpr uint8_t rgb_builtin = 54;
        };
      } // namespace sparkfun_esp32c6_thing_plus
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace sparkfun_esp32s2_thing_plus
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:sparkfun_esp32s2_thing_plus";
          static inline constexpr const char *name = "SparkFun ESP32-S2 Thing Plus";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 6991;
          static inline constexpr uint8_t usb_pid = 39;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t tx1 = 34;
          static inline constexpr uint8_t rx1 = 33;
          static inline constexpr uint8_t a1 = 18;
          static inline constexpr uint8_t a2 = 14;
          static inline constexpr uint8_t a3 = 9;
          static inline constexpr uint8_t a4 = 7;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr const char *usb_manufacturer = "SparkFun";
          static inline constexpr const char *usb_product = "ESP32-S2 Thing Plus";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 13;
        };
      } // namespace sparkfun_esp32s2_thing_plus
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace sparkfun_esp32s3_thing_plus
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:sparkfun_esp32s3_thing_plus";
          static inline constexpr const char *name = "SparkFun ESP32-S3 Thing Plus";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t led_pin = 46;
          static inline constexpr uint8_t num_leds = 1;
          static inline constexpr uint8_t brightness = 25;
          static inline constexpr uint8_t stat_led = 0;
          static inline constexpr uint8_t btn = 0;
          static inline constexpr uint8_t q_en = 45;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 14;
          static inline constexpr uint8_t a2 = 15;
          static inline constexpr uint8_t a3 = 16;
          static inline constexpr uint8_t a4 = 17;
          static inline constexpr uint8_t a5 = 18;
          static inline constexpr uint8_t gpio0 = 21;
          static inline constexpr uint8_t gpio1 = 7;
          static inline constexpr uint8_t gpio2 = 6;
          static inline constexpr uint8_t gpio3 = 5;
          static inline constexpr uint8_t gpio4 = 4;
          static inline constexpr uint8_t gpio5 = 2;
          static inline constexpr uint8_t gpio6 = 1;
          static inline constexpr uint8_t freebie = 42;
          static inline constexpr uint8_t sdio_det = 48;
          static inline constexpr uint8_t sdio0 = 39;
          static inline constexpr uint8_t sdio1 = 40;
          static inline constexpr uint8_t sdio2 = 47;
          static inline constexpr uint8_t sdio3 = 33;
          static inline constexpr uint8_t sdio_clk = 38;
          static inline constexpr uint8_t sdio_cmd = 34;
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 46;
          static inline constexpr uint8_t led = 46;
        };
      } // namespace sparkfun_esp32s3_thing_plus
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace sparkfun_lora_gateway_1_channel
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:sparkfun_lora_gateway_1-channel";
          static inline constexpr const char *name = "SparkFun LoRa Gateway 1-Channel";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 17;
        };
      } // namespace sparkfun_lora_gateway_1_channel
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace sparkfun_pro_micro_esp32c3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:sparkfun_pro_micro_esp32c3";
          static inline constexpr const char *name = "SparkFun Pro Micro - ESP32C3";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint16_t usb_vid = 6991;
          static inline constexpr uint8_t usb_pid = 53;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t d0 = 0;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 2;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 4;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 6;
          static inline constexpr uint8_t d7 = 7;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d10 = 10;
          static inline constexpr uint8_t pin_i2s_sck = 6;
          static inline constexpr uint8_t pin_i2s_sd_dout = 7;
          static inline constexpr uint8_t pin_i2s_sd_in = 5;
          static inline constexpr uint8_t pin_i2s_fs = 10;
          static inline constexpr const char *usb_manufacturer = "SparkFun";
          static inline constexpr const char *usb_product = "SparkFun_Pro_Micro-ESP32C3";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace sparkfun_pro_micro_esp32c3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace sparklemotion
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:sparklemotion";
          static inline constexpr const char *name = "Adafruit Sparkle Motion (ESP32)";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t pin_neopixel = 2;
          static inline constexpr uint8_t tx = 9;
          static inline constexpr uint8_t rx = 10;
          static inline constexpr uint8_t button = 0;
          static inline constexpr uint8_t t0 = 27;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 4;
          static inline constexpr uint8_t rgb_builtin = 42;
          static inline constexpr uint8_t tx1 = 9;
          static inline constexpr uint8_t rx1 = 10;
        };
      } // namespace sparklemotion
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace sparklemotionmini
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:sparklemotionmini";
          static inline constexpr const char *name = "Adafruit Sparkle Motion Mini (ESP32)";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t pin_neopixel = 18;
          static inline constexpr uint8_t tx = 25;
          static inline constexpr uint8_t rx = 26;
          static inline constexpr uint8_t button = 0;
          static inline constexpr uint8_t t0 = 13;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 12;
          static inline constexpr uint8_t rgb_builtin = 58;
          static inline constexpr uint8_t tx1 = 25;
          static inline constexpr uint8_t rx1 = 26;
        };
      } // namespace sparklemotionmini
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace sparklemotionstick
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:sparklemotionstick";
          static inline constexpr const char *name = "Adafruit Sparkle Motion Stick (ESP32)";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t pin_neopixel = 18;
          static inline constexpr uint8_t tx = 25;
          static inline constexpr uint8_t rx = 26;
          static inline constexpr uint8_t button = 0;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 4;
          static inline constexpr uint8_t rgb_builtin = 58;
          static inline constexpr uint8_t tx1 = 25;
          static inline constexpr uint8_t rx1 = 26;
        };
      } // namespace sparklemotionstick
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace t_beam
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:t-beam";
          static inline constexpr const char *name = "T-Beam";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t lora_sck = 5;
          static inline constexpr uint8_t lora_miso = 19;
          static inline constexpr uint8_t lora_mosi = 27;
          static inline constexpr uint8_t lora_cs = 18;
          static inline constexpr uint8_t lora_rst = 23;
          static inline constexpr uint8_t lora_irq = 26;
          static inline constexpr uint8_t lora_io1 = 33;
          static inline constexpr uint8_t lora_io2 = 32;
          static inline constexpr uint8_t key_builtin = 39;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t lora_io0 = 26;
          static inline constexpr uint8_t builtin_led = 14;
        };
      } // namespace t_beam
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace tamc_termod_s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:tamc_termod_s3";
          static inline constexpr const char *name = "TAMC Termod S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t bat_lv = 1;
          static inline constexpr uint8_t chg = 2;
          static inline constexpr uint8_t tft_cs = 10;
          static inline constexpr uint8_t tft_dc = 18;
          static inline constexpr uint8_t tft_rst = 14;
          static inline constexpr uint8_t tft_bckl = 48;
          static inline constexpr uint8_t sd_cs = 21;
          static inline constexpr uint8_t sd_cd = 47;
          static inline constexpr uint8_t display_portrait = 2;
          static inline constexpr uint8_t display_landscape = 3;
          static inline constexpr uint8_t display_portrait_flip = 0;
          static inline constexpr uint8_t display_landscape_flip = 1;
          static inline constexpr uint8_t display_width = 240;
          static inline constexpr uint16_t display_height = 320;
          static inline constexpr uint8_t bat_volt_pin = 1;
        };
      } // namespace tamc_termod_s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace tlora_pager
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:tlora_pager";
          static inline constexpr const char *name = "LilyGo-T-LoRa-Pager";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33492;
          static inline constexpr uint8_t disp_width = 222;
          static inline constexpr uint16_t disp_height = 480;
          static inline constexpr uint8_t sd_cs = 21;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t kb_int = 6;
          static inline constexpr uint8_t kb_backlight = 46;
          static inline constexpr uint8_t rotary_a = 40;
          static inline constexpr uint8_t rotary_b = 41;
          static inline constexpr uint8_t rotary_c = 7;
          static inline constexpr uint8_t rtc_int = 1;
          static inline constexpr uint8_t nfc_int = 5;
          static inline constexpr uint8_t sensor_int = 8;
          static inline constexpr uint8_t nfc_cs = 39;
          static inline constexpr uint8_t i2s_ws = 18;
          static inline constexpr uint8_t i2s_sck = 11;
          static inline constexpr uint8_t i2s_mclk = 10;
          static inline constexpr uint8_t i2s_sdout = 45;
          static inline constexpr uint8_t i2s_sdin = 17;
          static inline constexpr uint8_t gps_tx = 12;
          static inline constexpr uint8_t gps_rx = 4;
          static inline constexpr uint8_t gps_pps = 13;
          static inline constexpr uint8_t lora_cs = 36;
          static inline constexpr uint8_t lora_rst = 47;
          static inline constexpr uint8_t lora_busy = 48;
          static inline constexpr uint8_t lora_irq = 14;
          static inline constexpr int disp_rst = -1;
          static inline constexpr uint8_t disp_cs = 38;
          static inline constexpr uint8_t disp_dc = 37;
          static inline constexpr uint8_t disp_bl = 42;
          static inline constexpr uint8_t expands_drv_en = 0;
          static inline constexpr uint8_t expands_amp_en = 1;
          static inline constexpr uint8_t expands_kb_rst = 2;
          static inline constexpr uint8_t expands_lora_en = 3;
          static inline constexpr uint8_t expands_gps_en = 4;
          static inline constexpr uint8_t expands_nfc_en = 5;
          static inline constexpr uint8_t expands_gps_rst = 7;
          static inline constexpr uint8_t expands_kb_en = 8;
          static inline constexpr uint8_t expands_gpio_en = 9;
          static inline constexpr uint8_t expands_sd_det = 10;
          static inline constexpr uint8_t expands_sd_pullen = 11;
          static inline constexpr uint8_t expands_sd_en = 12;
          static inline constexpr const char *usb_manufacturer = "LILYGO";
          static inline constexpr const char *usb_product = "T-LoRa-Pager";
          static inline constexpr uint8_t lora_sck = 35;
          static inline constexpr uint8_t lora_miso = 33;
          static inline constexpr uint8_t lora_mosi = 34;
          static inline constexpr uint8_t disp_mosi = 34;
          static inline constexpr uint8_t disp_miso = 33;
          static inline constexpr uint8_t disp_sck = 35;
        };
      } // namespace tlora_pager
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace ttgo_t_oi_plus
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:ttgo-t-oi-plus";
          static inline constexpr const char *name = "TTGO T-OI PLUS RISC-V ESP32-C3";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 4;
          static inline constexpr uint8_t a3 = 5;
          static inline constexpr uint8_t bat_adc_pin = 2;
          static inline constexpr uint8_t builtin_led = 3;
          static inline constexpr uint8_t bat_volt_pin = 2;
        };
      } // namespace ttgo_t_oi_plus
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace ttgo_t1
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:ttgo-t1";
          static inline constexpr const char *name = "TTGO T1";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 22;
        };
      } // namespace ttgo_t1
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace ttgo_t7_v13_mini32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:ttgo-t7-v13-mini32";
          static inline constexpr const char *name = "TTGO T7 V1.3 Mini32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 22;
        };
      } // namespace ttgo_t7_v13_mini32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace ttgo_t7_v14_mini32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:ttgo-t7-v14-mini32";
          static inline constexpr const char *name = "TTGO T7 V1.4 Mini32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 19;
        };
      } // namespace ttgo_t7_v14_mini32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace turta_iot_node
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:turta_iot_node";
          static inline constexpr const char *name = "Turta IoT Node";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace turta_iot_node
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace twatch
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:twatch";
          static inline constexpr const char *name = "TTGO T-Watch";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tp_sda = 23;
          static inline constexpr uint8_t tp_scl = 32;
          static inline constexpr uint8_t tp_int = 38;
          static inline constexpr uint8_t rtc_int = 37;
          static inline constexpr uint8_t apx20x_int = 35;
          static inline constexpr uint8_t bma42x_int1 = 39;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t tx1 = 33;
          static inline constexpr uint8_t rx1 = 34;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
        };
      } // namespace twatch
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace twatch_ultra
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:twatch_ultra";
          static inline constexpr const char *name = "LilyGo T-Watch-Ultra";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33319;
          static inline constexpr uint16_t disp_width = 502;
          static inline constexpr uint16_t disp_height = 410;
          static inline constexpr uint8_t disp_d0 = 38;
          static inline constexpr uint8_t disp_d1 = 39;
          static inline constexpr uint8_t disp_d2 = 42;
          static inline constexpr uint8_t disp_d3 = 45;
          static inline constexpr uint8_t disp_sck = 40;
          static inline constexpr uint8_t disp_cs = 41;
          static inline constexpr uint8_t disp_rst = 37;
          static inline constexpr uint8_t disp_te = 6;
          static inline constexpr uint8_t tp_int = 12;
          static inline constexpr uint8_t rtc_int = 1;
          static inline constexpr uint8_t pmu_int = 7;
          static inline constexpr uint8_t nfc_int = 5;
          static inline constexpr uint8_t sensor_int = 8;
          static inline constexpr uint8_t nfc_cs = 4;
          static inline constexpr uint8_t mic_sck = 17;
          static inline constexpr uint8_t mic_dat = 18;
          static inline constexpr uint8_t i2s_bclk = 9;
          static inline constexpr uint8_t i2s_wclk = 10;
          static inline constexpr uint8_t i2s_dout = 11;
          static inline constexpr uint8_t sd_cs = 21;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t gps_pps = 13;
          static inline constexpr uint8_t lora_cs = 36;
          static inline constexpr uint8_t lora_rst = 47;
          static inline constexpr uint8_t lora_busy = 48;
          static inline constexpr uint8_t lora_irq = 14;
          static inline constexpr uint8_t expands_drv_en = 6;
          static inline constexpr uint8_t expands_disp_en = 7;
          static inline constexpr uint8_t expands_touch_rst = 8;
          static inline constexpr uint8_t expands_sd_det = 10;
          static inline constexpr const char *usb_manufacturer = "LILYGO";
          static inline constexpr const char *usb_product = "T-Watch-Ultra";
          static inline constexpr uint8_t gps_tx = 43;
          static inline constexpr uint8_t gps_rx = 44;
          static inline constexpr uint8_t tp_sda = 3;
          static inline constexpr uint8_t tp_scl = 2;
          static inline constexpr uint8_t lora_sck = 35;
          static inline constexpr uint8_t lora_miso = 33;
          static inline constexpr uint8_t lora_mosi = 34;
        };
      } // namespace twatch_ultra
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace twatchs3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:twatchs3";
          static inline constexpr const char *name = "LilyGo T-Watch-S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33307;
          static inline constexpr uint8_t disp_width = 240;
          static inline constexpr uint8_t disp_height = 240;
          static inline constexpr uint8_t disp_mosi = 13;
          static inline constexpr int disp_miso = -1;
          static inline constexpr uint8_t disp_sck = 18;
          static inline constexpr int disp_rst = -1;
          static inline constexpr uint8_t disp_cs = 12;
          static inline constexpr uint8_t disp_dc = 38;
          static inline constexpr uint8_t disp_bl = 45;
          static inline constexpr uint8_t tp_int = 16;
          static inline constexpr uint8_t tp_sda = 39;
          static inline constexpr uint8_t tp_scl = 40;
          static inline constexpr uint8_t rtc_int = 17;
          static inline constexpr uint8_t pmu_int = 21;
          static inline constexpr uint8_t sensor_int = 14;
          static inline constexpr uint8_t mic_sck = 44;
          static inline constexpr uint8_t mic_dat = 47;
          static inline constexpr uint8_t i2s_bclk = 48;
          static inline constexpr uint8_t i2s_wclk = 15;
          static inline constexpr uint8_t i2s_dout = 46;
          static inline constexpr uint8_t ir_send = 2;
          static inline constexpr uint8_t tx = 42;
          static inline constexpr uint8_t rx = 41;
          static inline constexpr uint8_t lora_cs = 5;
          static inline constexpr uint8_t lora_rst = 8;
          static inline constexpr uint8_t lora_busy = 7;
          static inline constexpr uint8_t lora_irq = 9;
          static inline constexpr const char *usb_manufacturer = "LILYGO";
          static inline constexpr const char *usb_product = "T-Watch-S3";
          static inline constexpr uint8_t lora_sck = 3;
          static inline constexpr uint8_t lora_miso = 4;
          static inline constexpr uint8_t lora_mosi = 1;
          static inline constexpr uint8_t gps_tx = 42;
          static inline constexpr uint8_t gps_rx = 41;
        };
      } // namespace twatchs3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace twinaiot
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:twinaiot";
          static inline constexpr const char *name = "Twin AIoT Module";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t rgb_pin = 15;
          static inline constexpr uint8_t tx = 39;
          static inline constexpr uint8_t rx = 40;
          static inline constexpr uint8_t d6_out_pin = 35;
          static inline constexpr uint8_t d9_out_pin = 36;
          static inline constexpr uint8_t d10_out_pin = 10;
          static inline constexpr uint8_t touch_pin = 13;
          static inline constexpr uint8_t trig_pin = 5;
          static inline constexpr uint8_t echo_pin = 6;
          static inline constexpr uint8_t latchpin = 34;
          static inline constexpr uint8_t clockpin = 47;
          static inline constexpr uint8_t datapin = 48;
          static inline constexpr uint8_t d_in_4 = 8;
          static inline constexpr uint8_t d_in_8 = 11;
          static inline constexpr uint8_t d_in_12 = 9;
          static inline constexpr uint8_t an_in_4 = 17;
          static inline constexpr uint8_t an_in_8 = 16;
          static inline constexpr uint8_t an_in_12 = 7;
          static inline constexpr uint8_t s1pin = 37;
          static inline constexpr uint8_t s2pin = 38;
          static inline constexpr uint8_t s3pin = 14;
          static inline constexpr uint8_t builtin_led = 35;
          static inline constexpr uint8_t rgb_builtin = 15;
        };
      } // namespace twinaiot
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace upesy_edu_esp32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:uPesy_edu_esp32";
          static inline constexpr const char *name = "uPesy EDU ESP32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a1 = 32;
          static inline constexpr uint8_t a2 = 35;
          static inline constexpr uint8_t a3 = 34;
          static inline constexpr uint8_t a4 = 36;
          static inline constexpr uint8_t a5 = 39;
          static inline constexpr uint8_t d0 = 3;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 26;
          static inline constexpr uint8_t d3 = 25;
          static inline constexpr uint8_t d4 = 17;
          static inline constexpr uint8_t d5 = 16;
          static inline constexpr uint8_t d6 = 27;
          static inline constexpr uint8_t d7 = 14;
          static inline constexpr uint8_t d8 = 12;
          static inline constexpr uint8_t d9 = 13;
          static inline constexpr uint8_t d10 = 5;
          static inline constexpr uint8_t d11 = 23;
          static inline constexpr uint8_t d12 = 19;
          static inline constexpr uint8_t d13 = 18;
          static inline constexpr uint8_t builtin_led = 2;
          static inline constexpr uint8_t pin_wire_sda = 21;
          static inline constexpr uint8_t pin_wire_scl = 22;
          static inline constexpr uint8_t pin_spi_ss = 5;
          static inline constexpr uint8_t pin_spi_mosi = 23;
          static inline constexpr uint8_t pin_spi_miso = 19;
          static inline constexpr uint8_t pin_spi_sck = 18;
          static inline constexpr uint8_t pin_a0 = 33;
        };
      } // namespace upesy_edu_esp32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace upesy_wroom
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:uPesy_wroom";
          static inline constexpr const char *name = "uPesy ESP32 Wroom DevKit";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace upesy_wroom
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace upesy_wrover
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:uPesy_wrover";
          static inline constexpr const char *name = "uPesy ESP32 Wrover DevKit";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace upesy_wrover
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace um_bling
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:um_bling";
          static inline constexpr const char *name = "UM BLING";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33151;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sdo = 35;
          static inline constexpr uint8_t sdi = 37;
          static inline constexpr uint8_t sd_cs = 21;
          static inline constexpr uint8_t sd_detect = 38;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t button_a = 11;
          static inline constexpr uint8_t button_b = 10;
          static inline constexpr uint8_t button_c = 33;
          static inline constexpr uint8_t button_d = 34;
          static inline constexpr uint8_t vbat_sense = 17;
          static inline constexpr uint8_t vbus_sense = 16;
          static inline constexpr uint8_t i2s_mic_sel = 39;
          static inline constexpr uint8_t i2s_mic_ws = 40;
          static inline constexpr uint8_t i2s_mic_data = 41;
          static inline constexpr uint8_t i2s_mic_bclk = 42;
          static inline constexpr uint8_t i2s_amp_sd = 4;
          static inline constexpr uint8_t i2s_amp_data = 3;
          static inline constexpr uint8_t i2s_amp_bclk = 2;
          static inline constexpr uint8_t i2s_amp_ws = 1;
          static inline constexpr uint8_t rtc_int = 7;
          static inline constexpr uint8_t rgb_data = 18;
          static inline constexpr uint8_t rgb_pwr = 6;
          static inline constexpr const char *usb_manufacturer = "Unexpected Maker";
          static inline constexpr const char *usb_product = "BLING!";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 17;
          static inline constexpr uint8_t rgb_builtin = 67;
          static inline constexpr uint8_t builtin_led = 67;
        };
      } // namespace um_bling
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace um_edges3_d
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:um_edges3_d";
          static inline constexpr const char *name = "UM EdgeS3[D]";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33500;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sdo = 35;
          static inline constexpr uint8_t sdi = 37;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr const char *usb_manufacturer = "Unexpected Maker";
          static inline constexpr const char *usb_product = "EdgeS3[D]";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace um_edges3_d
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace um_feathers2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:um_feathers2";
          static inline constexpr const char *name = "UM FeatherS2";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 32939;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sdo = 35;
          static inline constexpr uint8_t sdi = 37;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr uint8_t ldo_2_power = 21;
          static inline constexpr uint8_t apa_data = 40;
          static inline constexpr uint8_t apa_clk = 45;
          static inline constexpr const char *usb_manufacturer = "Unexpected Maker";
          static inline constexpr const char *usb_product = "FeatherS2";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace um_feathers2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace um_feathers2neo
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:um_feathers2neo";
          static inline constexpr const char *name = "UM FeatherS2 Neo";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 9114;
          static inline constexpr uint16_t usb_pid = 32948;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sdo = 35;
          static inline constexpr uint8_t sdi = 37;
          static inline constexpr uint8_t a1 = 18;
          static inline constexpr uint8_t a2 = 14;
          static inline constexpr uint8_t a3 = 12;
          static inline constexpr uint8_t a4 = 6;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 1;
          static inline constexpr uint8_t a7 = 3;
          static inline constexpr uint8_t a8 = 7;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr uint8_t neopixel_matrix_data = 21;
          static inline constexpr uint8_t neopixel_matrix_pwr = 4;
          static inline constexpr uint8_t neopixel_data = 40;
          static inline constexpr uint8_t neopixel_pwr = 39;
          static inline constexpr uint8_t vbat_sense = 2;
          static inline constexpr uint8_t vbus_sense = 34;
          static inline constexpr const char *usb_manufacturer = "Unexpected Maker";
          static inline constexpr const char *usb_product = "FeatherS2 Neo";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t rgb_builtin = 87;
          static inline constexpr uint8_t builtin_led = 87;
          static inline constexpr uint8_t bat_volt_pin = 2;
        };
      } // namespace um_feathers2neo
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace um_feathers3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:um_feathers3";
          static inline constexpr const char *name = "UM FeatherS3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 32982;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t wire1_pin_defined = 1;
          static inline constexpr uint8_t sda1 = 16;
          static inline constexpr uint8_t scl1 = 15;
          static inline constexpr uint8_t sdo = 35;
          static inline constexpr uint8_t sdi = 37;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t vbat_sense = 2;
          static inline constexpr uint8_t vbus_sense = 34;
          static inline constexpr uint8_t rgb_data = 40;
          static inline constexpr uint8_t rgb_pwr = 39;
          static inline constexpr uint8_t ldo2 = 39;
          static inline constexpr uint8_t led = 13;
          static inline constexpr const char *usb_manufacturer = "Unexpected Maker";
          static inline constexpr const char *usb_product = "FeatherS3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 2;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t rgb_builtin = 89;
        };
      } // namespace um_feathers3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace um_feathers3neo
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:um_feathers3neo";
          static inline constexpr const char *name = "UM FeatherS3 Neo";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33275;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sdo = 35;
          static inline constexpr uint8_t sdi = 37;
          static inline constexpr uint8_t a1 = 18;
          static inline constexpr uint8_t a2 = 14;
          static inline constexpr uint8_t a3 = 12;
          static inline constexpr uint8_t a4 = 6;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 1;
          static inline constexpr uint8_t a7 = 3;
          static inline constexpr uint8_t a8 = 7;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 8;
          static inline constexpr uint8_t a12 = 9;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t vbat_sense = 2;
          static inline constexpr uint8_t vbus_sense = 15;
          static inline constexpr uint8_t rgb_data = 40;
          static inline constexpr uint8_t rgb_pwr = 39;
          static inline constexpr uint8_t rgb_matrix_pwr = 39;
          static inline constexpr uint8_t rgb_matrix_data = 16;
          static inline constexpr uint8_t led = 13;
          static inline constexpr const char *usb_manufacturer = "Unexpected Maker";
          static inline constexpr const char *usb_product = "FeatherS3 Neo";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 2;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t rgb_builtin = 89;
        };
      } // namespace um_feathers3neo
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace um_nanos3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:um_nanos3";
          static inline constexpr const char *name = "UM NanoS3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33145;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sdo = 35;
          static inline constexpr uint8_t sdi = 37;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t rgb_data = 41;
          static inline constexpr uint8_t rgb_pwr = 42;
          static inline constexpr const char *usb_manufacturer = "Unexpected Maker";
          static inline constexpr const char *usb_product = "Nanos3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t rgb_builtin = 90;
          static inline constexpr uint8_t builtin_led = 90;
        };
      } // namespace um_nanos3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace um_omgs3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:um_omgs3";
          static inline constexpr const char *name = "UM OMGS3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33316;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sdo = 6;
          static inline constexpr uint8_t sdi = 5;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t vbus_sense = 33;
          static inline constexpr uint8_t rgb_data = 35;
          static inline constexpr uint8_t rgb_pwr = 34;
          static inline constexpr const char *usb_manufacturer = "Unexpected Maker";
          static inline constexpr const char *usb_product = "OMGS3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t rgb_builtin = 84;
          static inline constexpr uint8_t builtin_led = 84;
        };
      } // namespace um_omgs3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace um_pros3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:um_pros3";
          static inline constexpr const char *name = "UM PROS3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 32979;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sdo = 35;
          static inline constexpr uint8_t sdi = 37;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t vbat_sense = 10;
          static inline constexpr uint8_t vbus_sense = 33;
          static inline constexpr uint8_t rgb_data = 18;
          static inline constexpr uint8_t rgb_pwr = 17;
          static inline constexpr uint8_t ldo2 = 17;
          static inline constexpr const char *usb_manufacturer = "Unexpected Maker";
          static inline constexpr const char *usb_product = "ProS3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 10;
          static inline constexpr uint8_t rgb_builtin = 67;
          static inline constexpr uint8_t builtin_led = 67;
        };
      } // namespace um_pros3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace um_squixl
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:um_squixl";
          static inline constexpr const char *name = "UM SQUIXL";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33503;
          static inline constexpr uint8_t sdo = 46;
          static inline constexpr uint8_t sdi = 41;
          static inline constexpr const char *usb_manufacturer = "Unexpected Maker";
          static inline constexpr const char *usb_product = "SQUiXL";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace um_squixl
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace um_tinyc6
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:um_tinyc6";
          static inline constexpr const char *name = "UM TinyC6";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t sdo = 21;
          static inline constexpr uint8_t sdi = 20;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t vbat_sense = 4;
          static inline constexpr uint8_t vbus_sense = 10;
          static inline constexpr uint8_t rgb_data = 23;
          static inline constexpr uint8_t rgb_pwr = 22;
          static inline constexpr const char *usb_manufacturer = "Unexpected Maker";
          static inline constexpr const char *usb_product = "TinyC6";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 4;
          static inline constexpr uint8_t rgb_builtin = 54;
          static inline constexpr uint8_t builtin_led = 54;
        };
      } // namespace um_tinyc6
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace um_tinypico
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:um_tinypico";
          static inline constexpr const char *name = "UM TinyPICO";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t sdo = 23;
          static inline constexpr uint8_t sdi = 19;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t apa_power = 13;
          static inline constexpr uint8_t apa_data = 2;
          static inline constexpr uint8_t apa_clk = 12;
        };
      } // namespace um_tinypico
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace um_tinys2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:um_tinys2";
          static inline constexpr const char *name = "UM TinyS2";
          static inline constexpr const char *build_mcu = "esp32s2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 47;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 32769;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sdo = 35;
          static inline constexpr uint8_t sdi = 37;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t dac1 = 17;
          static inline constexpr uint8_t dac2 = 18;
          static inline constexpr uint8_t vbat_sense = 3;
          static inline constexpr uint8_t vbus_sense = 21;
          static inline constexpr uint8_t rgb_data = 1;
          static inline constexpr uint8_t rgb_pwr = 2;
          static inline constexpr const char *usb_manufacturer = "Unexpected Maker";
          static inline constexpr const char *usb_product = "TinyS2";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 3;
          static inline constexpr uint8_t rgb_builtin = 48;
          static inline constexpr uint8_t builtin_led = 48;
        };
      } // namespace um_tinys2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace um_tinys3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:um_tinys3";
          static inline constexpr const char *name = "UM TinyS3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 32976;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t sdo = 35;
          static inline constexpr uint8_t sdi = 37;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t vbat_sense = 10;
          static inline constexpr uint8_t vbus_sense = 33;
          static inline constexpr uint8_t rgb_data = 18;
          static inline constexpr uint8_t rgb_pwr = 17;
          static inline constexpr const char *usb_manufacturer = "Unexpected Maker";
          static inline constexpr const char *usb_product = "TinyS3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 10;
          static inline constexpr uint8_t rgb_builtin = 67;
          static inline constexpr uint8_t builtin_led = 67;
        };
      } // namespace um_tinys3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace unphone7
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:unphone7";
          static inline constexpr const char *name = "unPhone 7";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 17;
          static inline constexpr uint8_t rx = 16;
          static inline constexpr uint8_t a1 = 25;
          static inline constexpr uint8_t a2 = 34;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 36;
          static inline constexpr uint8_t a5 = 4;
          static inline constexpr uint8_t a6 = 14;
          static inline constexpr uint8_t a7 = 32;
          static inline constexpr uint8_t a8 = 15;
          static inline constexpr uint8_t a9 = 33;
          static inline constexpr uint8_t a10 = 27;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t batt_monitor = 35;
          static inline constexpr uint8_t a13 = 35;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 13;
          static inline constexpr uint8_t tx1 = 17;
          static inline constexpr uint8_t rx1 = 16;
          static inline constexpr uint8_t bat_volt_pin = 35;
        };
      } // namespace unphone7
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace unphone8
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:unphone8";
          static inline constexpr const char *name = "unPhone 8";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 5840;
          static inline constexpr uint16_t usb_pid = 4472;
          static inline constexpr uint8_t tx = 37;
          static inline constexpr uint8_t rx = 36;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 8;
          static inline constexpr uint8_t a3 = 9;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 14;
          static inline constexpr uint8_t a7 = 7;
          static inline constexpr uint8_t a8 = 15;
          static inline constexpr uint8_t a9 = 33;
          static inline constexpr uint8_t a10 = 27;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 2;
          static inline constexpr uint8_t t2 = 8;
          static inline constexpr uint8_t t3 = 9;
          static inline constexpr uint8_t t4 = 5;
          static inline constexpr uint8_t t5 = 6;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 15;
          static inline constexpr uint8_t t9 = 33;
          static inline constexpr uint8_t t10 = 27;
          static inline constexpr uint8_t t11 = 12;
          static inline constexpr uint8_t t12 = 13;
          static inline constexpr uint8_t t13 = 14;
          static inline constexpr uint8_t t14 = 15;
          static inline constexpr uint8_t builtin_led = 13;
        };
      } // namespace unphone8
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace unphone9
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:unphone9";
          static inline constexpr const char *name = "unPhone 9";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 5840;
          static inline constexpr uint16_t usb_pid = 4472;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 8;
          static inline constexpr uint8_t a3 = 9;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 14;
          static inline constexpr uint8_t a7 = 7;
          static inline constexpr uint8_t a8 = 15;
          static inline constexpr uint8_t a9 = 33;
          static inline constexpr uint8_t a10 = 27;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 2;
          static inline constexpr uint8_t t2 = 8;
          static inline constexpr uint8_t t3 = 9;
          static inline constexpr uint8_t t4 = 5;
          static inline constexpr uint8_t t5 = 6;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 15;
          static inline constexpr uint8_t t9 = 33;
          static inline constexpr uint8_t t10 = 27;
          static inline constexpr uint8_t t11 = 12;
          static inline constexpr uint8_t t12 = 13;
          static inline constexpr uint8_t t13 = 14;
          static inline constexpr uint8_t t14 = 15;
          static inline constexpr uint8_t d5 = 14;
          static inline constexpr uint8_t d6 = 7;
          static inline constexpr uint8_t d9 = 15;
          static inline constexpr uint8_t d10 = 16;
          static inline constexpr uint8_t d11 = 17;
          static inline constexpr uint8_t d12 = 12;
          static inline constexpr uint8_t d13 = 13;
          static inline constexpr uint8_t d21 = 47;
          static inline constexpr uint8_t builtin_led = 13;
        };
      } // namespace unphone9
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace upesy_esp32c3_basic
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:upesy_esp32c3_basic";
          static inline constexpr const char *name = "uPesy ESP32C3 Basic";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33173;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t vbat_sense = 0;
          static inline constexpr const char *usb_manufacturer = "uPesy Electronics";
          static inline constexpr const char *usb_product = "uPesy ESP32C3 Basic";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 0;
        };
      } // namespace upesy_esp32c3_basic
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace upesy_esp32c3_mini
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:upesy_esp32c3_mini";
          static inline constexpr const char *name = "uPesy ESP32C3 Mini";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33179;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t vbat_sense = 0;
          static inline constexpr const char *usb_manufacturer = "uPesy Electronics";
          static inline constexpr const char *usb_product = "uPesy ESP32C3 Mini";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 0;
        };
      } // namespace upesy_esp32c3_mini
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace upesy_esp32s3_basic
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:upesy_esp32s3_basic";
          static inline constexpr const char *name = "uPesy ESP32S3 Basic";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33170;
          static inline constexpr uint8_t rgb_data = 38;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t tx0 = 43;
          static inline constexpr uint8_t rx0 = 44;
          static inline constexpr uint8_t tx1 = 17;
          static inline constexpr uint8_t rx1 = 18;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t mtms = 42;
          static inline constexpr uint8_t mtdi = 41;
          static inline constexpr uint8_t mtdo = 40;
          static inline constexpr uint8_t mtck = 39;
          static inline constexpr const char *usb_manufacturer = "uPesy Electronics";
          static inline constexpr const char *usb_product = "uPesy ESP32S3 Basic";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t rgb_builtin = 87;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace upesy_esp32s3_basic
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace vintlabs_devkit_v1
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:vintlabs-devkit-v1";
          static inline constexpr const char *name = "VintLabs ESP32 Devkit";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t pwm0 = 12;
          static inline constexpr uint8_t pwm1 = 13;
          static inline constexpr uint8_t pwm2 = 14;
          static inline constexpr uint8_t pwm3 = 15;
          static inline constexpr uint8_t pwm4 = 16;
          static inline constexpr uint8_t pwm5 = 17;
          static inline constexpr uint8_t pwm6 = 18;
          static inline constexpr uint8_t pwm7 = 19;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace vintlabs_devkit_v1
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace viralink32g01
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:viralink32g01";
          static inline constexpr const char *name = "ViraLink Gate32-0.1";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t reset_key = 0;
          static inline constexpr uint8_t rs485_tx = 32;
          static inline constexpr uint8_t rs485_rx = 35;
          static inline constexpr uint8_t buzzer = 12;
          static inline constexpr uint8_t relay1_pin = 2;
          static inline constexpr uint8_t relay2_pin = 13;
          static inline constexpr uint8_t relay3_pin = 14;
          static inline constexpr uint8_t relay4_pin = 33;
          static inline constexpr uint8_t wiegand1_d0 = 15;
          static inline constexpr uint8_t wiegand1_d1 = 34;
          static inline constexpr uint8_t wiegand2_d0 = 39;
          static inline constexpr uint8_t wiegand2_d1 = 36;
          static inline constexpr uint8_t eth_clk_out = 17;
          static inline constexpr uint8_t emac_mdio = 18;
          static inline constexpr uint8_t emac_txd0 = 19;
          static inline constexpr uint8_t emac_tx_en = 21;
          static inline constexpr uint8_t emac_txd1 = 22;
          static inline constexpr uint8_t emac_mdc = 23;
          static inline constexpr uint8_t emac_rxd0 = 25;
          static inline constexpr uint8_t emac_rxd1 = 26;
          static inline constexpr uint8_t emac_rxd_dv = 27;
          static inline constexpr uint8_t builtin_led = 5;
        };
      } // namespace viralink32g01
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace viralink32g11
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:viralink32g11";
          static inline constexpr const char *name = "ViraLink Gate32-1.1";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t reset_key = 0;
          static inline constexpr uint8_t rf433 = 5;
          static inline constexpr uint8_t rs485_tx = 32;
          static inline constexpr uint8_t rs485_rx = 35;
          static inline constexpr uint8_t gsm1_tx = 15;
          static inline constexpr uint8_t gsm1_rx = 34;
          static inline constexpr uint8_t gsm2_tx = 32;
          static inline constexpr uint8_t gsm2_rx = 35;
          static inline constexpr uint8_t gsm_pwr = 33;
          static inline constexpr uint8_t ext1 = 12;
          static inline constexpr uint8_t ext2 = 13;
          static inline constexpr uint8_t pcf1_int = 14;
          static inline constexpr uint8_t wiegand1_d0 = 15;
          static inline constexpr uint8_t wiegand1_d1 = 34;
          static inline constexpr uint8_t wiegand2_d0 = 39;
          static inline constexpr uint8_t wiegand2_d1 = 36;
          static inline constexpr uint8_t eth_clk_out = 17;
          static inline constexpr uint8_t emac_mdio = 18;
          static inline constexpr uint8_t emac_txd0 = 19;
          static inline constexpr uint8_t emac_tx_en = 21;
          static inline constexpr uint8_t emac_txd1 = 22;
          static inline constexpr uint8_t emac_mdc = 23;
          static inline constexpr uint8_t emac_rxd0 = 25;
          static inline constexpr uint8_t emac_rxd1 = 26;
          static inline constexpr uint8_t emac_rxd_dv = 27;
        };
      } // namespace viralink32g11
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace walter
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:walter";
          static inline constexpr const char *name = "DPTechnics Walter";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t modem_tx = 48;
          static inline constexpr uint8_t modem_rx = 14;
          static inline constexpr uint8_t modem_cts = 47;
          static inline constexpr uint8_t modem_rts = 19;
          static inline constexpr uint8_t modem_reset = 45;
          static inline constexpr uint8_t modem_wake = 46;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr const char *usb_manufacturer = "DPTechnics";
          static inline constexpr const char *usb_product = "Walter";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace walter
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace watchy
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:watchy";
          static inline constexpr const char *name = "Watchy";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t menu_btn_pin = 26;
          static inline constexpr uint8_t back_btn_pin = 25;
          static inline constexpr uint8_t down_btn_pin = 4;
          static inline constexpr uint8_t display_cs = 5;
          static inline constexpr uint8_t display_res = 9;
          static inline constexpr uint8_t display_dc = 10;
          static inline constexpr uint8_t display_busy = 19;
          static inline constexpr uint8_t acc_int_1_pin = 14;
          static inline constexpr uint8_t acc_int_2_pin = 12;
          static inline constexpr uint8_t vib_motor_pin = 13;
          static inline constexpr uint8_t rtc_int_pin = 27;
          static inline constexpr uint8_t up_btn_pin = 32;
          static inline constexpr uint8_t batt_adc_pin = 33;
          static inline constexpr uint8_t rtc_type = 1;
          static inline constexpr uint8_t bat_volt_pin = 34;
        };
      } // namespace watchy
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_c3_zero
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_c3_zero";
          static inline constexpr const char *name = "Waveshare ESP32-C3-Zero";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t pin_rgb_led = 10;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t d0 = 0;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 2;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 4;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 6;
          static inline constexpr uint8_t d7 = 7;
          static inline constexpr uint8_t d8 = 8;
          static inline constexpr uint8_t d9 = 9;
          static inline constexpr uint8_t d10 = 10;
          static inline constexpr uint8_t d11 = 20;
          static inline constexpr uint8_t d12 = 21;
          static inline constexpr uint8_t builtin_led = 32;
          static inline constexpr uint8_t rgb_builtin = 32;
        };
      } // namespace waveshare_esp32_c3_zero
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_c6_zero
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_c6_zero";
          static inline constexpr const char *name = "Waveshare ESP32-C6-Zero";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint8_t pin_rgb_led = 8;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t d0 = 0;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 2;
          static inline constexpr uint8_t d3 = 3;
          static inline constexpr uint8_t d4 = 4;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 22;
          static inline constexpr uint8_t d7 = 21;
          static inline constexpr uint8_t d8 = 20;
          static inline constexpr uint8_t d9 = 19;
          static inline constexpr uint8_t d10 = 18;
          static inline constexpr uint8_t d11 = 15;
          static inline constexpr uint8_t d12 = 14;
          static inline constexpr uint8_t d13 = 8;
          static inline constexpr uint8_t d14 = 6;
          static inline constexpr uint8_t d15 = 7;
          static inline constexpr uint8_t d16 = 16;
          static inline constexpr uint8_t d17 = 17;
          static inline constexpr uint8_t d18 = 9;
          static inline constexpr uint8_t d19 = 23;
          static inline constexpr uint8_t d20 = 12;
          static inline constexpr uint8_t d21 = 13;
          static inline constexpr uint8_t sda1 = 6;
          static inline constexpr uint8_t scl1 = 7;
          static inline constexpr uint8_t rgb_builtin = 39;
          static inline constexpr uint8_t builtin_led = 39;
          static inline constexpr uint8_t builtin_rgb = 39;
        };
      } // namespace waveshare_esp32_c6_zero
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_lcd_146
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_lcd_146";
          static inline constexpr const char *name = "Waveshare ESP32-S3-LCD-1.46";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33368;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-LCD-1.46";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace waveshare_esp32_s3_lcd_146
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_lcd_147
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_lcd_147";
          static inline constexpr const char *name = "Waveshare ESP32-S3-LCD-1.47";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33418;
          static inline constexpr uint8_t pin_rgb_led = 38;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-LCD-1.47";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace waveshare_esp32_s3_lcd_147
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_lcd_169
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_lcd_169";
          static inline constexpr const char *name = "Waveshare ESP32-S3-LCD-1.69";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33313;
          static inline constexpr uint8_t ws_lcd_dc = 4;
          static inline constexpr uint8_t ws_lcd_cs = 5;
          static inline constexpr uint8_t ws_lcd_scl = 6;
          static inline constexpr uint8_t ws_lcd_sda = 7;
          static inline constexpr uint8_t ws_lcd_rst = 8;
          static inline constexpr uint8_t ws_lcd_bl = 15;
          static inline constexpr uint8_t ws_rtc_scl = 10;
          static inline constexpr uint8_t ws_rtc_sda = 11;
          static inline constexpr uint8_t ws_rtc_address = 81;
          static inline constexpr uint8_t ws_rtc_int = 41;
          static inline constexpr uint8_t ws_qmi8658_sda = 11;
          static inline constexpr uint8_t ws_qmi8658_scl = 10;
          static inline constexpr uint8_t ws_qmi8658_address = 107;
          static inline constexpr uint8_t ws_qmi8658_int1 = 38;
          static inline constexpr uint8_t ws_buzz = 33;
          static inline constexpr uint8_t ws_sys_out = 36;
          static inline constexpr uint8_t ws_sys_en = 35;
          static inline constexpr uint8_t ws_bat_adc = 1;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t output_io2 = 2;
          static inline constexpr uint8_t output_io3 = 3;
          static inline constexpr uint8_t output_io17 = 17;
          static inline constexpr uint8_t output_io18 = 18;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t d0 = 7;
          static inline constexpr uint8_t d1 = 6;
          static inline constexpr uint8_t d2 = 5;
          static inline constexpr uint8_t d3 = 4;
          static inline constexpr uint8_t d4 = 3;
          static inline constexpr uint8_t d5 = 2;
          static inline constexpr uint8_t d6 = 1;
          static inline constexpr uint8_t d7 = 44;
          static inline constexpr uint8_t d8 = 43;
          static inline constexpr uint8_t d9 = 40;
          static inline constexpr uint8_t d10 = 39;
          static inline constexpr uint8_t d11 = 38;
          static inline constexpr uint8_t d12 = 37;
          static inline constexpr uint8_t d13 = 36;
          static inline constexpr uint8_t d14 = 35;
          static inline constexpr uint8_t d15 = 34;
          static inline constexpr uint8_t d16 = 33;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-LCD-1.69";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 1;
        };
      } // namespace waveshare_esp32_s3_lcd_169
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_lcd_185
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_lcd_185";
          static inline constexpr const char *name = "Waveshare ESP32-S3-LCD-1.85";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33424;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-LCD-1.85";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace waveshare_esp32_s3_lcd_185
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_relay_6ch
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_relay_6ch";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Relay-6CH";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33395;
          static inline constexpr uint8_t pin_rgb_led = 38;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Relay-6CH";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace waveshare_esp32_s3_relay_6ch
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_amoled_143
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_amoled_143";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-AMOLED-1.43";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33354;
          static inline constexpr uint8_t qspi_cs = 9;
          static inline constexpr uint8_t qspi_sck = 10;
          static inline constexpr uint8_t qspi_d0 = 11;
          static inline constexpr uint8_t qspi_d1 = 12;
          static inline constexpr uint8_t qspi_d2 = 13;
          static inline constexpr uint8_t qspi_d3 = 14;
          static inline constexpr uint8_t amoled_reset = 21;
          static inline constexpr int8_t amoled_te = -1;
          static inline constexpr int8_t amoled_pwr_en = -1;
          static inline constexpr uint8_t tp_scl = 48;
          static inline constexpr uint8_t tp_sda = 47;
          static inline constexpr int8_t tp_rst = -1;
          static inline constexpr int8_t tp_int = -1;
          static inline constexpr uint8_t rtc_int = 15;
          static inline constexpr uint8_t bat_adc = 4;
          static inline constexpr uint8_t qmi_int1 = 8;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-AMOLED-1.43";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 4;
        };
      } // namespace waveshare_esp32_s3_touch_amoled_143
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_amoled_164
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_amoled_164";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-AMOLED-1.64";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33353;
          static inline constexpr uint8_t qspi_cs = 9;
          static inline constexpr uint8_t qspi_sck = 10;
          static inline constexpr uint8_t qspi_d0 = 11;
          static inline constexpr uint8_t qspi_d1 = 12;
          static inline constexpr uint8_t qspi_d2 = 13;
          static inline constexpr uint8_t qspi_d3 = 14;
          static inline constexpr uint8_t amoled_reset = 21;
          static inline constexpr int8_t amoled_te = -1;
          static inline constexpr int8_t amoled_pwr_en = -1;
          static inline constexpr uint8_t tp_scl = 48;
          static inline constexpr uint8_t tp_sda = 47;
          static inline constexpr int8_t tp_rst = -1;
          static inline constexpr int8_t tp_int = -1;
          static inline constexpr uint8_t key_0 = 0;
          static inline constexpr uint8_t bat_adc = 4;
          static inline constexpr uint8_t sd_cs = 38;
          static inline constexpr uint8_t sd_mosi = 39;
          static inline constexpr uint8_t sd_miso = 40;
          static inline constexpr uint8_t sd_sclk = 41;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-AMOLED-1.64";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 4;
        };
      } // namespace waveshare_esp32_s3_touch_amoled_164
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_amoled_18
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_amoled_18";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-AMOLED-1.8";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33365;
          static inline constexpr uint8_t ws_lcd_cs = 12;
          static inline constexpr uint8_t ws_qspi_sio0 = 4;
          static inline constexpr uint8_t ws_qspi_si1 = 5;
          static inline constexpr uint8_t ws_qspi_si2 = 6;
          static inline constexpr uint8_t ws_qspi_si3 = 7;
          static inline constexpr uint8_t ws_qspi_scl = 11;
          static inline constexpr uint8_t ws_tp_int = 21;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t output_io2 = 2;
          static inline constexpr uint8_t output_io3 = 3;
          static inline constexpr uint8_t output_io17 = 17;
          static inline constexpr uint8_t output_io18 = 18;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t d0 = 7;
          static inline constexpr uint8_t d1 = 6;
          static inline constexpr uint8_t d2 = 5;
          static inline constexpr uint8_t d3 = 4;
          static inline constexpr uint8_t d4 = 3;
          static inline constexpr uint8_t d5 = 2;
          static inline constexpr uint8_t d6 = 1;
          static inline constexpr uint8_t d7 = 44;
          static inline constexpr uint8_t d8 = 43;
          static inline constexpr uint8_t d9 = 40;
          static inline constexpr uint8_t d10 = 39;
          static inline constexpr uint8_t d11 = 38;
          static inline constexpr uint8_t d12 = 37;
          static inline constexpr uint8_t d13 = 36;
          static inline constexpr uint8_t d14 = 35;
          static inline constexpr uint8_t d15 = 34;
          static inline constexpr uint8_t d16 = 33;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-AMOLED-1.8";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace waveshare_esp32_s3_touch_amoled_18
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_amoled_191
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_amoled_191";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-AMOLED-1.91";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33355;
          static inline constexpr uint8_t qspi_cs = 6;
          static inline constexpr uint8_t qspi_sck = 47;
          static inline constexpr uint8_t qspi_d0 = 18;
          static inline constexpr uint8_t qspi_d1 = 7;
          static inline constexpr uint8_t qspi_d2 = 48;
          static inline constexpr uint8_t qspi_d3 = 5;
          static inline constexpr uint8_t amoled_reset = 17;
          static inline constexpr int8_t amoled_te = -1;
          static inline constexpr int8_t amoled_pwr_en = -1;
          static inline constexpr uint8_t tp_scl = 39;
          static inline constexpr uint8_t tp_sda = 40;
          static inline constexpr int8_t tp_rst = -1;
          static inline constexpr int8_t tp_int = -1;
          static inline constexpr uint8_t bat_adc = 1;
          static inline constexpr uint8_t qmi_int1 = 45;
          static inline constexpr uint8_t sd_cs = 9;
          static inline constexpr uint8_t sd_miso = 8;
          static inline constexpr uint8_t sd_mosi = 42;
          static inline constexpr uint8_t sd_clk = 47;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-AMOLED-1.91";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 1;
        };
      } // namespace waveshare_esp32_s3_touch_amoled_191
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_amoled_206
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_amoled_206";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-AMOLED-2.06";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t sdmmc_clk = 2;
          static inline constexpr uint8_t sdmmc_cmd = 1;
          static inline constexpr uint8_t sdmmc_d0 = 3;
          static inline constexpr uint8_t sdmmc_cs = 17;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t amoled_cs = 12;
          static inline constexpr uint8_t amoled_sck = 11;
          static inline constexpr uint8_t amoled_d0 = 4;
          static inline constexpr uint8_t amoled_d1 = 5;
          static inline constexpr uint8_t amoled_d2 = 6;
          static inline constexpr uint8_t amoled_d3 = 7;
          static inline constexpr uint8_t amoled_reset = 8;
          static inline constexpr uint8_t amoled_te = 13;
          static inline constexpr uint8_t amoled_pwr_en = 21;
          static inline constexpr uint16_t amoled_width = 410;
          static inline constexpr uint16_t amoled_height = 502;
          static inline constexpr uint8_t tp_scl = 14;
          static inline constexpr uint8_t tp_sda = 15;
          static inline constexpr uint8_t tp_rst = 9;
          static inline constexpr uint8_t tp_int = 38;
          static inline constexpr uint8_t rtc_scl = 14;
          static inline constexpr uint8_t rtc_sda = 15;
          static inline constexpr uint8_t rtc_address = 81;
          static inline constexpr uint8_t rtc_int = 39;
          static inline constexpr uint8_t qmi8658_sda = 14;
          static inline constexpr uint8_t qmi8658_scl = 15;
          static inline constexpr uint8_t qmi8658_address = 107;
          static inline constexpr uint8_t qmi8658_int1 = 21;
          static inline constexpr uint8_t bat_adc = 33;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-AMOLED-2.06";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 33;
        };
      } // namespace waveshare_esp32_s3_touch_amoled_206
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_amoled_241
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_amoled_241";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-AMOLED-2.41";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33346;
          static inline constexpr uint8_t qspi_cs = 9;
          static inline constexpr uint8_t qspi_sck = 10;
          static inline constexpr uint8_t qspi_d0 = 11;
          static inline constexpr uint8_t qspi_d1 = 12;
          static inline constexpr uint8_t qspi_d2 = 13;
          static inline constexpr uint8_t qspi_d3 = 14;
          static inline constexpr uint8_t amoled_reset = 21;
          static inline constexpr int8_t amoled_te = -1;
          static inline constexpr int8_t amoled_pwr_en = -1;
          static inline constexpr uint8_t tp_scl = 48;
          static inline constexpr uint8_t tp_sda = 47;
          static inline constexpr int8_t tp_rst = -1;
          static inline constexpr int8_t tp_int = -1;
          static inline constexpr uint8_t rtc_scl = 48;
          static inline constexpr uint8_t rtc_sda = 47;
          static inline constexpr uint8_t rtc_address = 81;
          static inline constexpr int8_t rtc_int = -1;
          static inline constexpr uint8_t qmi8658_sda = 47;
          static inline constexpr uint8_t qmi8658_scl = 48;
          static inline constexpr uint8_t qmi8658_address = 107;
          static inline constexpr int8_t qmi8658_int1 = -1;
          static inline constexpr uint8_t bat_adc = 17;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-AMOLED-2.41";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 17;
        };
      } // namespace waveshare_esp32_s3_touch_amoled_241
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_lcd_146
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_lcd_146";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-LCD-1.46";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33415;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-LCD-1.85-Box";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace waveshare_esp32_s3_touch_lcd_146
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_lcd_169
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_lcd_169";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-LCD-1.69";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33310;
          static inline constexpr uint8_t ws_lcd_dc = 4;
          static inline constexpr uint8_t ws_lcd_cs = 5;
          static inline constexpr uint8_t ws_lcd_scl = 6;
          static inline constexpr uint8_t ws_lcd_sda = 7;
          static inline constexpr uint8_t ws_lcd_rst = 8;
          static inline constexpr uint8_t ws_lcd_bl = 15;
          static inline constexpr uint8_t ws_tp_scl = 10;
          static inline constexpr uint8_t ws_tp_sda = 11;
          static inline constexpr uint8_t ws_tp_rst = 13;
          static inline constexpr uint8_t ws_tp_int = 14;
          static inline constexpr uint8_t ws_rtc_scl = 10;
          static inline constexpr uint8_t ws_rtc_sda = 11;
          static inline constexpr uint8_t ws_rtc_address = 81;
          static inline constexpr uint8_t ws_rtc_int = 41;
          static inline constexpr uint8_t ws_qmi8658_sda = 11;
          static inline constexpr uint8_t ws_qmi8658_scl = 10;
          static inline constexpr uint8_t ws_qmi8658_address = 107;
          static inline constexpr uint8_t ws_qmi8658_int1 = 38;
          static inline constexpr uint8_t ws_buzz = 33;
          static inline constexpr uint8_t ws_sys_out = 36;
          static inline constexpr uint8_t ws_sys_en = 35;
          static inline constexpr uint8_t ws_bat_adc = 1;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t output_io2 = 2;
          static inline constexpr uint8_t output_io3 = 3;
          static inline constexpr uint8_t output_io17 = 17;
          static inline constexpr uint8_t output_io18 = 18;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t d0 = 7;
          static inline constexpr uint8_t d1 = 6;
          static inline constexpr uint8_t d2 = 5;
          static inline constexpr uint8_t d3 = 4;
          static inline constexpr uint8_t d4 = 3;
          static inline constexpr uint8_t d5 = 2;
          static inline constexpr uint8_t d6 = 1;
          static inline constexpr uint8_t d7 = 44;
          static inline constexpr uint8_t d8 = 43;
          static inline constexpr uint8_t d9 = 40;
          static inline constexpr uint8_t d10 = 39;
          static inline constexpr uint8_t d11 = 38;
          static inline constexpr uint8_t d12 = 37;
          static inline constexpr uint8_t d13 = 36;
          static inline constexpr uint8_t d14 = 35;
          static inline constexpr uint8_t d15 = 34;
          static inline constexpr uint8_t d16 = 33;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-LCD-1.69";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t bat_volt_pin = 1;
        };
      } // namespace waveshare_esp32_s3_touch_lcd_169
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_lcd_185
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_lcd_185";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-LCD-1.85";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33424;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-LCD-1.85";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace waveshare_esp32_s3_touch_lcd_185
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_lcd_185_box
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_lcd_185_box";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-LCD-1.85-BOX";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33371;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-LCD-2.1";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace waveshare_esp32_s3_touch_lcd_185_box
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_lcd_21
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_lcd_21";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-LCD-2.1";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33374;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-LCD-2.8";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace waveshare_esp32_s3_touch_lcd_21
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_lcd_28
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_lcd_28";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-LCD-2.8";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33374;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t a18 = 19;
          static inline constexpr uint8_t a19 = 20;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-LCD-2.8";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace waveshare_esp32_s3_touch_lcd_28
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_lcd_4
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_lcd_4";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-LCD-4";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33341;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t output_io2 = 2;
          static inline constexpr uint8_t output_io3 = 3;
          static inline constexpr uint8_t output_io17 = 17;
          static inline constexpr uint8_t output_io18 = 18;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t d0 = 7;
          static inline constexpr uint8_t d1 = 6;
          static inline constexpr uint8_t d2 = 5;
          static inline constexpr uint8_t d3 = 4;
          static inline constexpr uint8_t d4 = 3;
          static inline constexpr uint8_t d5 = 2;
          static inline constexpr uint8_t d6 = 1;
          static inline constexpr uint8_t d7 = 44;
          static inline constexpr uint8_t d8 = 43;
          static inline constexpr uint8_t d9 = 40;
          static inline constexpr uint8_t d10 = 39;
          static inline constexpr uint8_t d11 = 38;
          static inline constexpr uint8_t d12 = 37;
          static inline constexpr uint8_t d13 = 36;
          static inline constexpr uint8_t d14 = 35;
          static inline constexpr uint8_t d15 = 34;
          static inline constexpr uint8_t d16 = 33;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-LCD-4";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace waveshare_esp32_s3_touch_lcd_4
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_lcd_43
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_lcd_43";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-LCD-4.3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33326;
          static inline constexpr uint8_t ws_lcd_b3 = 14;
          static inline constexpr uint8_t ws_lcd_b4 = 38;
          static inline constexpr uint8_t ws_lcd_b5 = 18;
          static inline constexpr uint8_t ws_lcd_b6 = 17;
          static inline constexpr uint8_t ws_lcd_b7 = 10;
          static inline constexpr uint8_t ws_lcd_g2 = 39;
          static inline constexpr uint8_t ws_lcd_g3 = 0;
          static inline constexpr uint8_t ws_lcd_g4 = 45;
          static inline constexpr uint8_t ws_lcd_g5 = 48;
          static inline constexpr uint8_t ws_lcd_g6 = 47;
          static inline constexpr uint8_t ws_lcd_g7 = 21;
          static inline constexpr uint8_t ws_lcd_r3 = 1;
          static inline constexpr uint8_t ws_lcd_r4 = 2;
          static inline constexpr uint8_t ws_lcd_r5 = 42;
          static inline constexpr uint8_t ws_lcd_r6 = 41;
          static inline constexpr uint8_t ws_lcd_r7 = 40;
          static inline constexpr uint8_t ws_lcd_vsync = 3;
          static inline constexpr uint8_t ws_lcd_hsync = 46;
          static inline constexpr uint8_t ws_lcd_pclk = 7;
          static inline constexpr uint8_t ws_lcd_de = 5;
          static inline constexpr uint8_t ws_tp_sda = 8;
          static inline constexpr uint8_t ws_tp_scl = 9;
          static inline constexpr int8_t ws_tp_rst = -1;
          static inline constexpr uint8_t ws_tp_int = 4;
          static inline constexpr uint8_t ws_rs485_rxd = 16;
          static inline constexpr uint8_t ws_rs485_txd = 15;
          static inline constexpr uint8_t ws_can_rxd = 19;
          static inline constexpr uint8_t ws_can_txd = 20;
          static inline constexpr uint8_t ws_ch422g_sda = 8;
          static inline constexpr uint8_t ws_ch422g_scl = 9;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t output_io2 = 2;
          static inline constexpr uint8_t output_io3 = 3;
          static inline constexpr uint8_t output_io17 = 17;
          static inline constexpr uint8_t output_io18 = 18;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t d0 = 7;
          static inline constexpr uint8_t d1 = 6;
          static inline constexpr uint8_t d2 = 5;
          static inline constexpr uint8_t d3 = 4;
          static inline constexpr uint8_t d4 = 3;
          static inline constexpr uint8_t d5 = 2;
          static inline constexpr uint8_t d6 = 1;
          static inline constexpr uint8_t d7 = 44;
          static inline constexpr uint8_t d8 = 43;
          static inline constexpr uint8_t d9 = 40;
          static inline constexpr uint8_t d10 = 39;
          static inline constexpr uint8_t d11 = 38;
          static inline constexpr uint8_t d12 = 37;
          static inline constexpr uint8_t d13 = 36;
          static inline constexpr uint8_t d14 = 35;
          static inline constexpr uint8_t d15 = 34;
          static inline constexpr uint8_t d16 = 33;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-LCD-4.3";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace waveshare_esp32_s3_touch_lcd_43
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_lcd_43b
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_lcd_43B";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-LCD-4.3B";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33329;
          static inline constexpr uint8_t ws_lcd_b3 = 14;
          static inline constexpr uint8_t ws_lcd_b4 = 38;
          static inline constexpr uint8_t ws_lcd_b5 = 18;
          static inline constexpr uint8_t ws_lcd_b6 = 17;
          static inline constexpr uint8_t ws_lcd_b7 = 10;
          static inline constexpr uint8_t ws_lcd_g2 = 39;
          static inline constexpr uint8_t ws_lcd_g3 = 0;
          static inline constexpr uint8_t ws_lcd_g4 = 45;
          static inline constexpr uint8_t ws_lcd_g5 = 48;
          static inline constexpr uint8_t ws_lcd_g6 = 47;
          static inline constexpr uint8_t ws_lcd_g7 = 21;
          static inline constexpr uint8_t ws_lcd_r3 = 1;
          static inline constexpr uint8_t ws_lcd_r4 = 2;
          static inline constexpr uint8_t ws_lcd_r5 = 42;
          static inline constexpr uint8_t ws_lcd_r6 = 41;
          static inline constexpr uint8_t ws_lcd_r7 = 40;
          static inline constexpr uint8_t ws_lcd_vsync = 3;
          static inline constexpr uint8_t ws_lcd_hsync = 46;
          static inline constexpr uint8_t ws_lcd_pclk = 7;
          static inline constexpr uint8_t ws_lcd_de = 5;
          static inline constexpr uint8_t ws_tp_sda = 8;
          static inline constexpr uint8_t ws_tp_scl = 9;
          static inline constexpr int8_t ws_tp_rst = -1;
          static inline constexpr uint8_t ws_tp_int = 4;
          static inline constexpr uint8_t ws_rs485_rxd = 43;
          static inline constexpr uint8_t ws_rs485_txd = 44;
          static inline constexpr uint8_t ws_can_rxd = 15;
          static inline constexpr uint8_t ws_can_txd = 16;
          static inline constexpr uint8_t ws_ch422g_sda = 8;
          static inline constexpr uint8_t ws_ch422g_scl = 9;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t output_io2 = 2;
          static inline constexpr uint8_t output_io3 = 3;
          static inline constexpr uint8_t output_io17 = 17;
          static inline constexpr uint8_t output_io18 = 18;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t d0 = 7;
          static inline constexpr uint8_t d1 = 6;
          static inline constexpr uint8_t d2 = 5;
          static inline constexpr uint8_t d3 = 4;
          static inline constexpr uint8_t d4 = 3;
          static inline constexpr uint8_t d5 = 2;
          static inline constexpr uint8_t d6 = 1;
          static inline constexpr uint8_t d7 = 44;
          static inline constexpr uint8_t d8 = 43;
          static inline constexpr uint8_t d9 = 40;
          static inline constexpr uint8_t d10 = 39;
          static inline constexpr uint8_t d11 = 38;
          static inline constexpr uint8_t d12 = 37;
          static inline constexpr uint8_t d13 = 36;
          static inline constexpr uint8_t d14 = 35;
          static inline constexpr uint8_t d15 = 34;
          static inline constexpr uint8_t d16 = 33;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-LCD-4.3B";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace waveshare_esp32_s3_touch_lcd_43b
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_lcd_5
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_lcd_5";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-LCD-5";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33335;
          static inline constexpr uint8_t ws_lcd_b3 = 14;
          static inline constexpr uint8_t ws_lcd_b4 = 38;
          static inline constexpr uint8_t ws_lcd_b5 = 18;
          static inline constexpr uint8_t ws_lcd_b6 = 17;
          static inline constexpr uint8_t ws_lcd_b7 = 10;
          static inline constexpr uint8_t ws_lcd_g2 = 39;
          static inline constexpr uint8_t ws_lcd_g3 = 0;
          static inline constexpr uint8_t ws_lcd_g4 = 45;
          static inline constexpr uint8_t ws_lcd_g5 = 48;
          static inline constexpr uint8_t ws_lcd_g6 = 47;
          static inline constexpr uint8_t ws_lcd_g7 = 21;
          static inline constexpr uint8_t ws_lcd_r3 = 1;
          static inline constexpr uint8_t ws_lcd_r4 = 2;
          static inline constexpr uint8_t ws_lcd_r5 = 42;
          static inline constexpr uint8_t ws_lcd_r6 = 41;
          static inline constexpr uint8_t ws_lcd_r7 = 40;
          static inline constexpr uint8_t ws_lcd_vsync = 3;
          static inline constexpr uint8_t ws_lcd_hsync = 46;
          static inline constexpr uint8_t ws_lcd_pclk = 7;
          static inline constexpr uint8_t ws_lcd_de = 5;
          static inline constexpr uint8_t ws_tp_sda = 8;
          static inline constexpr uint8_t ws_tp_scl = 9;
          static inline constexpr int8_t ws_tp_rst = -1;
          static inline constexpr uint8_t ws_tp_int = 4;
          static inline constexpr uint8_t ws_rs485_rxd = 43;
          static inline constexpr uint8_t ws_rs485_txd = 44;
          static inline constexpr uint8_t ws_can_rxd = 15;
          static inline constexpr uint8_t ws_can_txd = 16;
          static inline constexpr uint8_t ws_ch422g_sda = 8;
          static inline constexpr uint8_t ws_ch422g_scl = 9;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t output_io2 = 2;
          static inline constexpr uint8_t output_io3 = 3;
          static inline constexpr uint8_t output_io17 = 17;
          static inline constexpr uint8_t output_io18 = 18;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t d0 = 7;
          static inline constexpr uint8_t d1 = 6;
          static inline constexpr uint8_t d2 = 5;
          static inline constexpr uint8_t d3 = 4;
          static inline constexpr uint8_t d4 = 3;
          static inline constexpr uint8_t d5 = 2;
          static inline constexpr uint8_t d6 = 1;
          static inline constexpr uint8_t d7 = 44;
          static inline constexpr uint8_t d8 = 43;
          static inline constexpr uint8_t d9 = 40;
          static inline constexpr uint8_t d10 = 39;
          static inline constexpr uint8_t d11 = 38;
          static inline constexpr uint8_t d12 = 37;
          static inline constexpr uint8_t d13 = 36;
          static inline constexpr uint8_t d14 = 35;
          static inline constexpr uint8_t d15 = 34;
          static inline constexpr uint8_t d16 = 33;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-LCD-5";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace waveshare_esp32_s3_touch_lcd_5
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_lcd_5b
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_lcd_5B";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-LCD-5B";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33338;
          static inline constexpr uint8_t ws_lcd_b3 = 14;
          static inline constexpr uint8_t ws_lcd_b4 = 38;
          static inline constexpr uint8_t ws_lcd_b5 = 18;
          static inline constexpr uint8_t ws_lcd_b6 = 17;
          static inline constexpr uint8_t ws_lcd_b7 = 10;
          static inline constexpr uint8_t ws_lcd_g2 = 39;
          static inline constexpr uint8_t ws_lcd_g3 = 0;
          static inline constexpr uint8_t ws_lcd_g4 = 45;
          static inline constexpr uint8_t ws_lcd_g5 = 48;
          static inline constexpr uint8_t ws_lcd_g6 = 47;
          static inline constexpr uint8_t ws_lcd_g7 = 21;
          static inline constexpr uint8_t ws_lcd_r3 = 1;
          static inline constexpr uint8_t ws_lcd_r4 = 2;
          static inline constexpr uint8_t ws_lcd_r5 = 42;
          static inline constexpr uint8_t ws_lcd_r6 = 41;
          static inline constexpr uint8_t ws_lcd_r7 = 40;
          static inline constexpr uint8_t ws_lcd_vsync = 3;
          static inline constexpr uint8_t ws_lcd_hsync = 46;
          static inline constexpr uint8_t ws_lcd_pclk = 7;
          static inline constexpr uint8_t ws_lcd_de = 5;
          static inline constexpr uint8_t ws_tp_sda = 8;
          static inline constexpr uint8_t ws_tp_scl = 9;
          static inline constexpr int8_t ws_tp_rst = -1;
          static inline constexpr uint8_t ws_tp_int = 4;
          static inline constexpr uint8_t ws_rs485_rxd = 43;
          static inline constexpr uint8_t ws_rs485_txd = 44;
          static inline constexpr uint8_t ws_can_rxd = 15;
          static inline constexpr uint8_t ws_can_txd = 16;
          static inline constexpr uint8_t ws_ch422g_sda = 8;
          static inline constexpr uint8_t ws_ch422g_scl = 9;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t output_io2 = 2;
          static inline constexpr uint8_t output_io3 = 3;
          static inline constexpr uint8_t output_io17 = 17;
          static inline constexpr uint8_t output_io18 = 18;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t d0 = 7;
          static inline constexpr uint8_t d1 = 6;
          static inline constexpr uint8_t d2 = 5;
          static inline constexpr uint8_t d3 = 4;
          static inline constexpr uint8_t d4 = 3;
          static inline constexpr uint8_t d5 = 2;
          static inline constexpr uint8_t d6 = 1;
          static inline constexpr uint8_t d7 = 44;
          static inline constexpr uint8_t d8 = 43;
          static inline constexpr uint8_t d9 = 40;
          static inline constexpr uint8_t d10 = 39;
          static inline constexpr uint8_t d11 = 38;
          static inline constexpr uint8_t d12 = 37;
          static inline constexpr uint8_t d13 = 36;
          static inline constexpr uint8_t d14 = 35;
          static inline constexpr uint8_t d15 = 34;
          static inline constexpr uint8_t d16 = 33;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-LCD-5B";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace waveshare_esp32_s3_touch_lcd_5b
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_touch_lcd_7
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_touch_lcd_7";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Touch-LCD-7";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33332;
          static inline constexpr uint8_t ws_lcd_b3 = 14;
          static inline constexpr uint8_t ws_lcd_b4 = 38;
          static inline constexpr uint8_t ws_lcd_b5 = 18;
          static inline constexpr uint8_t ws_lcd_b6 = 17;
          static inline constexpr uint8_t ws_lcd_b7 = 10;
          static inline constexpr uint8_t ws_lcd_g2 = 39;
          static inline constexpr uint8_t ws_lcd_g3 = 0;
          static inline constexpr uint8_t ws_lcd_g4 = 45;
          static inline constexpr uint8_t ws_lcd_g5 = 48;
          static inline constexpr uint8_t ws_lcd_g6 = 47;
          static inline constexpr uint8_t ws_lcd_g7 = 21;
          static inline constexpr uint8_t ws_lcd_r3 = 1;
          static inline constexpr uint8_t ws_lcd_r4 = 2;
          static inline constexpr uint8_t ws_lcd_r5 = 42;
          static inline constexpr uint8_t ws_lcd_r6 = 41;
          static inline constexpr uint8_t ws_lcd_r7 = 40;
          static inline constexpr uint8_t ws_lcd_vsync = 3;
          static inline constexpr uint8_t ws_lcd_hsync = 46;
          static inline constexpr uint8_t ws_lcd_pclk = 7;
          static inline constexpr uint8_t ws_lcd_de = 5;
          static inline constexpr uint8_t ws_tp_sda = 8;
          static inline constexpr uint8_t ws_tp_scl = 9;
          static inline constexpr int8_t ws_tp_rst = -1;
          static inline constexpr uint8_t ws_tp_int = 4;
          static inline constexpr uint8_t ws_rs485_rxd = 16;
          static inline constexpr uint8_t ws_rs485_txd = 15;
          static inline constexpr uint8_t ws_can_rxd = 19;
          static inline constexpr uint8_t ws_can_txd = 20;
          static inline constexpr uint8_t ws_ch422g_sda = 8;
          static inline constexpr uint8_t ws_ch422g_scl = 9;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t output_io2 = 2;
          static inline constexpr uint8_t output_io3 = 3;
          static inline constexpr uint8_t output_io17 = 17;
          static inline constexpr uint8_t output_io18 = 18;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t d0 = 7;
          static inline constexpr uint8_t d1 = 6;
          static inline constexpr uint8_t d2 = 5;
          static inline constexpr uint8_t d3 = 4;
          static inline constexpr uint8_t d4 = 3;
          static inline constexpr uint8_t d5 = 2;
          static inline constexpr uint8_t d6 = 1;
          static inline constexpr uint8_t d7 = 44;
          static inline constexpr uint8_t d8 = 43;
          static inline constexpr uint8_t d9 = 40;
          static inline constexpr uint8_t d10 = 39;
          static inline constexpr uint8_t d11 = 38;
          static inline constexpr uint8_t d12 = 37;
          static inline constexpr uint8_t d13 = 36;
          static inline constexpr uint8_t d14 = 35;
          static inline constexpr uint8_t d15 = 34;
          static inline constexpr uint8_t d16 = 33;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Touch-LCD-7";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace waveshare_esp32_s3_touch_lcd_7
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32_s3_zero
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32_s3_zero";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Zero";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 33323;
          static inline constexpr uint8_t ws_rgb = 21;
          static inline constexpr uint8_t output_io1 = 1;
          static inline constexpr uint8_t output_io2 = 2;
          static inline constexpr uint8_t output_io3 = 3;
          static inline constexpr uint8_t output_io4 = 4;
          static inline constexpr uint8_t output_io5 = 5;
          static inline constexpr uint8_t output_io6 = 6;
          static inline constexpr uint8_t output_io7 = 7;
          static inline constexpr uint8_t output_io8 = 8;
          static inline constexpr uint8_t output_io9 = 9;
          static inline constexpr uint8_t output_io10 = 10;
          static inline constexpr uint8_t output_io11 = 11;
          static inline constexpr uint8_t output_io12 = 12;
          static inline constexpr uint8_t output_io13 = 13;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t d0 = 7;
          static inline constexpr uint8_t d1 = 6;
          static inline constexpr uint8_t d2 = 5;
          static inline constexpr uint8_t d3 = 4;
          static inline constexpr uint8_t d4 = 3;
          static inline constexpr uint8_t d5 = 2;
          static inline constexpr uint8_t d6 = 1;
          static inline constexpr uint8_t d7 = 44;
          static inline constexpr uint8_t d8 = 43;
          static inline constexpr uint8_t d9 = 40;
          static inline constexpr uint8_t d10 = 39;
          static inline constexpr uint8_t d11 = 38;
          static inline constexpr uint8_t d12 = 37;
          static inline constexpr uint8_t d13 = 36;
          static inline constexpr uint8_t d14 = 35;
          static inline constexpr uint8_t d15 = 34;
          static inline constexpr uint8_t d16 = 33;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Zero";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 70;
          static inline constexpr uint8_t rgb_builtin = 70;
        };
      } // namespace waveshare_esp32_s3_zero
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace waveshare_esp32s3_touch_lcd_128
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:waveshare_esp32s3_touch_lcd_128";
          static inline constexpr const char *name = "Waveshare ESP32S3 Touch LCD 128";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 6790;
          static inline constexpr uint16_t usb_pid = 21971;
          static inline constexpr uint8_t lcd_backlight = 2;
          static inline constexpr uint8_t lcd_dc = 8;
          static inline constexpr uint8_t lcd_rst = 14;
          static inline constexpr uint8_t tp_int = 5;
          static inline constexpr uint8_t tp_rst = 13;
          static inline constexpr uint8_t imu_int1 = 4;
          static inline constexpr uint8_t imu_int2 = 3;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3 Touch LCD 1.28";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t tx1 = 43;
          static inline constexpr uint8_t rx1 = 44;
        };
      } // namespace waveshare_esp32s3_touch_lcd_128
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace weact_studio_esp32c3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:weact_studio_esp32c3";
          static inline constexpr const char *name = "WeAct Studio ESP32C3";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t builtin_led = 8;
        };
      } // namespace weact_studio_esp32c3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace wesp32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:wesp32";
          static inline constexpr const char *name = "Silicognition wESP32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t tx1 = 12;
          static inline constexpr uint8_t rx1 = 13;
          static inline constexpr uint8_t tx2 = 33;
          static inline constexpr uint8_t rx2 = 39;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t eth_phy_addr = 0;
          static inline constexpr int8_t eth_phy_power = -1;
          static inline constexpr uint8_t eth_phy_mdc = 16;
          static inline constexpr uint8_t eth_phy_mdio = 17;
        };
      } // namespace wesp32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace widora_air
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:widora-air";
          static inline constexpr const char *name = "Widora AIR";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a1 = 39;
          static inline constexpr uint8_t a2 = 35;
          static inline constexpr uint8_t a3 = 25;
          static inline constexpr uint8_t a4 = 26;
          static inline constexpr uint8_t a5 = 14;
          static inline constexpr uint8_t a6 = 12;
          static inline constexpr uint8_t a7 = 15;
          static inline constexpr uint8_t a8 = 13;
          static inline constexpr uint8_t a9 = 2;
          static inline constexpr uint8_t d0 = 19;
          static inline constexpr uint8_t d1 = 23;
          static inline constexpr uint8_t d2 = 18;
          static inline constexpr uint8_t d3 = 17;
          static inline constexpr uint8_t d4 = 16;
          static inline constexpr uint8_t d5 = 5;
          static inline constexpr uint8_t d6 = 4;
          static inline constexpr uint8_t t0 = 19;
          static inline constexpr uint8_t t1 = 23;
          static inline constexpr uint8_t t2 = 18;
          static inline constexpr uint8_t t3 = 17;
          static inline constexpr uint8_t t4 = 16;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 4;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 25;
        };
      } // namespace widora_air
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace wifiduino32
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:wifiduino32";
          static inline constexpr const char *name = "WiFiduino32";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t key_builtin = 0;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a1 = 14;
          static inline constexpr uint8_t a2 = 12;
          static inline constexpr uint8_t a3 = 35;
          static inline constexpr uint8_t a4 = 13;
          static inline constexpr uint8_t a5 = 4;
          static inline constexpr uint8_t d0 = 3;
          static inline constexpr uint8_t d1 = 1;
          static inline constexpr uint8_t d2 = 17;
          static inline constexpr uint8_t d3 = 15;
          static inline constexpr uint8_t d4 = 32;
          static inline constexpr uint8_t d5 = 33;
          static inline constexpr uint8_t d6 = 25;
          static inline constexpr uint8_t d7 = 26;
          static inline constexpr uint8_t d8 = 23;
          static inline constexpr uint8_t d9 = 22;
          static inline constexpr uint8_t d10 = 21;
          static inline constexpr uint8_t d11 = 19;
          static inline constexpr uint8_t d12 = 18;
          static inline constexpr uint8_t d13 = 2;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace wifiduino32
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace wifiduino32c3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:wifiduino32c3";
          static inline constexpr const char *name = "WiFiduinoV2";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t d0 = 20;
          static inline constexpr uint8_t d1 = 21;
          static inline constexpr uint8_t d2 = 9;
          static inline constexpr uint8_t d3 = 13;
          static inline constexpr uint8_t d4 = 12;
          static inline constexpr uint8_t d5 = 11;
          static inline constexpr uint8_t d6 = 6;
          static inline constexpr uint8_t d7 = 18;
          static inline constexpr uint8_t d8 = 19;
          static inline constexpr uint8_t d9 = 8;
          static inline constexpr uint8_t d10 = 7;
          static inline constexpr uint8_t d11 = 3;
          static inline constexpr uint8_t d12 = 10;
          static inline constexpr uint8_t d13 = 2;
          static inline constexpr uint8_t builtin_led = 13;
        };
      } // namespace wifiduino32c3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace wifiduino32s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:wifiduino32s3";
          static inline constexpr const char *name = "WiFiduino32S3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t pin_rgb_led = 48;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t d0 = 44;
          static inline constexpr uint8_t d1 = 43;
          static inline constexpr uint8_t d2 = 45;
          static inline constexpr uint8_t d3 = 46;
          static inline constexpr uint8_t d4 = 47;
          static inline constexpr uint8_t d5 = 48;
          static inline constexpr uint8_t d6 = 18;
          static inline constexpr uint8_t d7 = 17;
          static inline constexpr uint8_t d8 = 21;
          static inline constexpr uint8_t d9 = 42;
          static inline constexpr uint8_t d10 = 41;
          static inline constexpr uint8_t d11 = 40;
          static inline constexpr uint8_t d12 = 38;
          static inline constexpr uint8_t d13 = 39;
          static inline constexpr const char *usb_manufacturer = "openjumper";
          static inline constexpr const char *usb_product = "Wifiduino32-S3";
          static inline constexpr bool usb_serial = true;
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
        };
      } // namespace wifiduino32s3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace wipy3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:wipy3";
          static inline constexpr const char *name = "WiPy 3.0";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t pin_rgb_led = 0;
          static inline constexpr uint8_t ant_select = 21;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t a1 = 37;
          static inline constexpr uint8_t a2 = 38;
          static inline constexpr uint8_t a3 = 39;
          static inline constexpr uint8_t a4 = 32;
          static inline constexpr uint8_t a5 = 33;
          static inline constexpr uint8_t a6 = 34;
          static inline constexpr uint8_t a7 = 35;
          static inline constexpr uint8_t a10 = 4;
          static inline constexpr uint8_t a11 = 0;
          static inline constexpr uint8_t a12 = 2;
          static inline constexpr uint8_t a13 = 15;
          static inline constexpr uint8_t a14 = 13;
          static inline constexpr uint8_t a15 = 12;
          static inline constexpr uint8_t a16 = 14;
          static inline constexpr uint8_t a17 = 27;
          static inline constexpr uint8_t a18 = 25;
          static inline constexpr uint8_t a19 = 26;
          static inline constexpr uint8_t t0 = 4;
          static inline constexpr uint8_t t1 = 0;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 15;
          static inline constexpr uint8_t t4 = 13;
          static inline constexpr uint8_t t5 = 12;
          static inline constexpr uint8_t t6 = 14;
          static inline constexpr uint8_t t7 = 27;
          static inline constexpr uint8_t t8 = 33;
          static inline constexpr uint8_t t9 = 32;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t builtin_led = 40;
          static inline constexpr uint8_t rgb_builtin = 40;
        };
      } // namespace wipy3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace ws_esp32_s3_matrix
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:ws_esp32_s3_matrix";
          static inline constexpr const char *name = "Waveshare ESP32-S3-Matrix";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t ws_matrix_din = 14;
          static inline constexpr uint8_t ws_imu_sda = 11;
          static inline constexpr uint8_t ws_imu_scl = 12;
          static inline constexpr uint8_t ws_imu_address = 107;
          static inline constexpr uint8_t ws_imu_int1 = 10;
          static inline constexpr uint8_t ws_imu_int2 = 13;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t d0 = 7;
          static inline constexpr uint8_t d1 = 6;
          static inline constexpr uint8_t d2 = 5;
          static inline constexpr uint8_t d3 = 4;
          static inline constexpr uint8_t d4 = 3;
          static inline constexpr uint8_t d5 = 2;
          static inline constexpr uint8_t d6 = 1;
          static inline constexpr uint8_t d7 = 44;
          static inline constexpr uint8_t d8 = 43;
          static inline constexpr uint8_t d9 = 40;
          static inline constexpr uint8_t d10 = 39;
          static inline constexpr uint8_t d11 = 38;
          static inline constexpr uint8_t d12 = 37;
          static inline constexpr uint8_t d13 = 36;
          static inline constexpr uint8_t d14 = 35;
          static inline constexpr uint8_t d15 = 34;
          static inline constexpr uint8_t d16 = 33;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr const char *usb_manufacturer = "Waveshare";
          static inline constexpr const char *usb_product = "ESP32-S3-Matrix";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace ws_esp32_s3_matrix
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace wt32_eth01
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:wt32-eth01";
          static inline constexpr const char *name = "WT32-ETH01 Ethernet Module";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t eth_phy_addr = 1;
          static inline constexpr uint8_t eth_phy_power = 16;
          static inline constexpr uint8_t eth_phy_mdc = 23;
          static inline constexpr uint8_t eth_phy_mdio = 18;
          static inline constexpr uint8_t io0 = 0;
          static inline constexpr uint8_t io1 = 1;
          static inline constexpr uint8_t io2 = 2;
          static inline constexpr uint8_t io3 = 3;
          static inline constexpr uint8_t io4 = 4;
          static inline constexpr uint8_t io5 = 5;
          static inline constexpr uint8_t io12 = 12;
          static inline constexpr uint8_t io14 = 14;
          static inline constexpr uint8_t io15 = 15;
          static inline constexpr uint8_t io17 = 17;
          static inline constexpr uint8_t io32 = 32;
          static inline constexpr uint8_t io33 = 33;
          static inline constexpr uint8_t io35 = 35;
          static inline constexpr uint8_t io36 = 36;
          static inline constexpr uint8_t io39 = 39;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t txd0 = 1, TX0 = 1;
          static inline constexpr uint8_t rxd0 = 3, RX0 = 3;
          static inline constexpr uint8_t txd2 = 17, TXD = 17;
          static inline constexpr uint8_t rxd2 = 5, RXD = 5;
        };
      } // namespace wt32_eth01
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace wt32_sc01_plus
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:wt32-sc01-plus";
          static inline constexpr const char *name = "WT32-SC01 PLUS";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 32976;
          static inline constexpr uint8_t boot_0 = 0;
          static inline constexpr uint8_t io1 = 10;
          static inline constexpr uint8_t io2 = 11;
          static inline constexpr uint8_t io3 = 12;
          static inline constexpr uint8_t io4 = 13;
          static inline constexpr uint8_t io5 = 14;
          static inline constexpr uint8_t io6 = 21;
          static inline constexpr uint8_t tx = 42;
          static inline constexpr uint8_t rx = 1;
          static inline constexpr uint8_t rts = 2;
          static inline constexpr uint8_t bl_pwm = 45;
          static inline constexpr uint8_t lcd_reset = 4;
          static inline constexpr uint8_t lcd_rs = 0;
          static inline constexpr uint8_t lcd_wr = 47;
          static inline constexpr uint8_t lcd_te = 48;
          static inline constexpr uint8_t lcd_db0 = 9;
          static inline constexpr uint8_t lcd_db1 = 46;
          static inline constexpr uint8_t lcd_db2 = 3;
          static inline constexpr uint8_t lcd_db3 = 8;
          static inline constexpr uint8_t lcd_db4 = 18;
          static inline constexpr uint8_t lcd_db5 = 17;
          static inline constexpr uint8_t lcd_db6 = 16;
          static inline constexpr uint8_t lcd_db7 = 15;
          static inline constexpr uint8_t lrck = 35;
          static inline constexpr uint8_t bclk = 36;
          static inline constexpr uint8_t dout = 37;
          static inline constexpr uint8_t tp_int = 7;
          static inline constexpr uint8_t rst = 4;
          static inline constexpr uint8_t sd_cs = 41;
          static inline constexpr uint8_t sd_di = 40;
          static inline constexpr uint8_t sd_do = 38;
          static inline constexpr uint8_t sd_clk = 39;
          static inline constexpr const char *usb_manufacturer = "PANLEE";
          static inline constexpr const char *usb_product = "SC01PLUS";
          static inline constexpr bool usb_serial = true;
        };
      } // namespace wt32_sc01_plus
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace yb_esp32s3_amp
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:yb_esp32s3_amp";
          static inline constexpr const char *name = "YelloByte YB-ESP32-S3-AMP";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t i2s_bclk = 5;
          static inline constexpr uint8_t i2s_lrclk = 6;
          static inline constexpr uint8_t i2s_dout = 7;
          static inline constexpr uint8_t ss2 = 38;
          static inline constexpr uint8_t mosi2 = 39;
          static inline constexpr uint8_t miso2 = 41;
          static inline constexpr uint8_t sck2 = 40;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 8;
          static inline constexpr uint8_t a5 = 9;
          static inline constexpr uint8_t a6 = 10;
          static inline constexpr uint8_t a7 = 14;
          static inline constexpr uint8_t a8 = 15;
          static inline constexpr uint8_t a9 = 16;
          static inline constexpr uint8_t a10 = 17;
          static inline constexpr uint8_t a11 = 18;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t pin_dac_mute = 47;
          static inline constexpr uint8_t builtin_led = 47;
        };
      } // namespace yb_esp32s3_amp
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace yb_esp32s3_amp_v2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:yb_esp32s3_amp_v2";
          static inline constexpr const char *name = "YelloByte YB-ESP32-S3-AMP (Rev.2)";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t i2s_bclk = 5;
          static inline constexpr uint8_t i2s_lrclk = 6;
          static inline constexpr uint8_t i2s_dout = 7;
          static inline constexpr uint8_t ss2 = 38;
          static inline constexpr uint8_t mosi2 = 39;
          static inline constexpr uint8_t miso2 = 41;
          static inline constexpr uint8_t sck2 = 40;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 8;
          static inline constexpr uint8_t a5 = 9;
          static inline constexpr uint8_t a6 = 10;
          static inline constexpr uint8_t a7 = 14;
          static inline constexpr uint8_t a8 = 15;
          static inline constexpr uint8_t a9 = 16;
          static inline constexpr uint8_t a10 = 17;
          static inline constexpr uint8_t a11 = 18;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t pin_dac_mute = 47;
          static inline constexpr uint8_t builtin_led = 47;
        };
      } // namespace yb_esp32s3_amp_v2
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace yb_esp32s3_amp_v3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:yb_esp32s3_amp_v3";
          static inline constexpr const char *name = "YelloByte YB-ESP32-S3-AMP (Rev.3)";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t i2s_bclk = 5;
          static inline constexpr uint8_t i2s_lrclk = 6;
          static inline constexpr uint8_t i2s_dout = 7;
          static inline constexpr uint8_t ss2 = 38;
          static inline constexpr uint8_t mosi2 = 39;
          static inline constexpr uint8_t miso2 = 41;
          static inline constexpr uint8_t sck2 = 40;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 8;
          static inline constexpr uint8_t a5 = 9;
          static inline constexpr uint8_t a6 = 10;
          static inline constexpr uint8_t a7 = 14;
          static inline constexpr uint8_t a8 = 15;
          static inline constexpr uint8_t a9 = 16;
          static inline constexpr uint8_t a10 = 17;
          static inline constexpr uint8_t a11 = 18;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t pin_dac_mute = 47;
          static inline constexpr uint8_t builtin_led = 47;
        };
      } // namespace yb_esp32s3_amp_v3
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace yb_esp32s3_dac
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:yb_esp32s3_dac";
          static inline constexpr const char *name = "YelloByte YB-ESP32-S3-DAC";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t tlv_reset = 21;
          static inline constexpr uint8_t tlv_int = 48;
          static inline constexpr uint8_t i2s_mclk = 4;
          static inline constexpr uint8_t i2s_bclk = 5;
          static inline constexpr uint8_t i2s_lrclk = 6;
          static inline constexpr uint8_t i2s_dout = 7;
          static inline constexpr uint8_t ss2 = 38;
          static inline constexpr uint8_t mosi2 = 39;
          static inline constexpr uint8_t miso2 = 41;
          static inline constexpr uint8_t sck2 = 40;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 8;
          static inline constexpr uint8_t a5 = 9;
          static inline constexpr uint8_t a6 = 10;
          static inline constexpr uint8_t a7 = 14;
          static inline constexpr uint8_t a8 = 15;
          static inline constexpr uint8_t a9 = 16;
          static inline constexpr uint8_t a10 = 17;
          static inline constexpr uint8_t a11 = 18;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 47;
        };
      } // namespace yb_esp32s3_dac
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace yb_esp32s3_drv
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:yb_esp32s3_drv";
          static inline constexpr const char *name = "YelloByte YB-ESP32-S3-DRV";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t x1 = 35;
          static inline constexpr uint8_t x2 = 36;
          static inline constexpr uint8_t x3 = 37;
          static inline constexpr uint8_t x4 = 38;
          static inline constexpr uint8_t y1 = 4;
          static inline constexpr uint8_t y2 = 5;
          static inline constexpr uint8_t y3 = 6;
          static inline constexpr uint8_t y4 = 7;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 8;
          static inline constexpr uint8_t a4 = 9;
          static inline constexpr uint8_t a5 = 10;
          static inline constexpr uint8_t a6 = 11;
          static inline constexpr uint8_t a7 = 12;
          static inline constexpr uint8_t a8 = 13;
          static inline constexpr uint8_t a9 = 14;
          static inline constexpr uint8_t a10 = 15;
          static inline constexpr uint8_t a11 = 16;
          static inline constexpr uint8_t a12 = 17;
          static inline constexpr uint8_t a13 = 18;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 47;
        };
      } // namespace yb_esp32s3_drv
    } // namespace esp32
  } // namespace esp32

  namespace esp32
  {
    namespace esp32
    {
      namespace yb_esp32s3_eth
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "esp32:esp32:yb_esp32s3_eth";
          static inline constexpr const char *name = "YelloByte YB-ESP32-S3-ETH";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t w5500_ss = 14;
          static inline constexpr uint8_t w5500_int = 18;
          static inline constexpr uint8_t w5500_rst = 21;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t a5 = 6;
          static inline constexpr uint8_t a6 = 7;
          static inline constexpr uint8_t a7 = 8;
          static inline constexpr uint8_t a8 = 9;
          static inline constexpr uint8_t a9 = 10;
          static inline constexpr uint8_t a10 = 11;
          static inline constexpr uint8_t a11 = 12;
          static inline constexpr uint8_t a12 = 13;
          static inline constexpr uint8_t a13 = 14;
          static inline constexpr uint8_t a14 = 15;
          static inline constexpr uint8_t a15 = 16;
          static inline constexpr uint8_t a16 = 17;
          static inline constexpr uint8_t a17 = 18;
          static inline constexpr uint8_t t1 = 1;
          static inline constexpr uint8_t t2 = 2;
          static inline constexpr uint8_t t3 = 3;
          static inline constexpr uint8_t t4 = 4;
          static inline constexpr uint8_t t5 = 5;
          static inline constexpr uint8_t t6 = 6;
          static inline constexpr uint8_t t7 = 7;
          static inline constexpr uint8_t t8 = 8;
          static inline constexpr uint8_t t9 = 9;
          static inline constexpr uint8_t t10 = 10;
          static inline constexpr uint8_t t11 = 11;
          static inline constexpr uint8_t t12 = 12;
          static inline constexpr uint8_t t13 = 13;
          static inline constexpr uint8_t t14 = 14;
          static inline constexpr uint8_t builtin_led = 47;
        };
      } // namespace yb_esp32s3_eth
    } // namespace esp32
  } // namespace esp32

  namespace m5stack
  {
    namespace esp32
    {
      namespace arduino_nesso_n1
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:arduino_nesso_n1";
          static inline constexpr const char *name = "ArduinoNessoN1";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t pin_rgb_led = 20;
          static inline constexpr uint8_t but_builtin = 9;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t ex_scl = 8;
          static inline constexpr uint8_t ex_sda = 10;
          static inline constexpr uint8_t in_scl = 8;
          static inline constexpr uint8_t in_sda = 10;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t sda1 = 6;
          static inline constexpr uint8_t scl1 = 7;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "Nesso N1";
          static inline constexpr uint8_t builtin_led = 7;
          static inline constexpr uint8_t rgb_builtin = 7;
          static inline constexpr uint8_t rgbled = 7;
          static inline constexpr uint8_t builtin_but = 9;
          static inline constexpr uint8_t boot = 9;
        };
      } // namespace arduino_nesso_n1
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_atom
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_atom";
          static inline constexpr const char *name = "M5Atom";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t external_num_interrupts = 16;
          static inline constexpr uint8_t num_digital_pins = 40;
          static inline constexpr uint8_t num_analog_inputs = 16;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t ex_scl = 32;
          static inline constexpr uint8_t ex_sda = 26;
          static inline constexpr uint8_t in_scl = 21;
          static inline constexpr uint8_t in_sda = 25;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g27 = 27;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_atom
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_atoms3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_atoms3";
          static inline constexpr const char *name = "M5AtomS3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t external_num_interrupts = 46;
          static inline constexpr uint8_t num_digital_pins = 48;
          static inline constexpr uint8_t num_analog_inputs = 20;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t ex_scl = 1;
          static inline constexpr uint8_t ex_sda = 2;
          static inline constexpr uint8_t in_scl = 39;
          static inline constexpr uint8_t in_sda = 38;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "AtomS3";
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
        };
      } // namespace m5stack_atoms3
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_atoms3r
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_atoms3r";
          static inline constexpr const char *name = "M5AtomS3R";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t external_num_interrupts = 46;
          static inline constexpr uint8_t num_digital_pins = 48;
          static inline constexpr uint8_t num_analog_inputs = 20;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t ex_scl = 1;
          static inline constexpr uint8_t ex_sda = 2;
          static inline constexpr uint8_t in_scl = 0;
          static inline constexpr uint8_t in_sda = 45;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "AtomS3R";
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
        };
      } // namespace m5stack_atoms3r
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_capsule
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_capsule";
          static inline constexpr const char *name = "M5Capsule";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t external_num_interrupts = 23;
          static inline constexpr uint8_t num_digital_pins = 46;
          static inline constexpr uint8_t num_analog_inputs = 15;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t ex_scl = 15;
          static inline constexpr uint8_t ex_sda = 13;
          static inline constexpr uint8_t in_scl = 10;
          static inline constexpr uint8_t in_sda = 8;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g41 = 41;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t g43 = 43;
          static inline constexpr uint8_t g44 = 44;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "Capsule";
        };
      } // namespace m5stack_capsule
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_cardputer
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_cardputer";
          static inline constexpr const char *name = "M5Cardputer";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t external_num_interrupts = 23;
          static inline constexpr uint8_t num_digital_pins = 46;
          static inline constexpr uint8_t num_analog_inputs = 15;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t ex_scl = 1;
          static inline constexpr uint8_t ex_sda = 2;
          static inline constexpr uint8_t in_scl = 8;
          static inline constexpr uint8_t in_sda = 9;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g41 = 41;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t g43 = 43;
          static inline constexpr uint8_t g44 = 44;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "Cardputer";
        };
      } // namespace m5stack_cardputer
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_chain_dualkey
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_chain_dualkey";
          static inline constexpr const char *name = "M5ChainDualKey";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t external_num_interrupts = 23;
          static inline constexpr uint8_t num_digital_pins = 46;
          static inline constexpr uint8_t num_analog_inputs = 15;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd1 = 47;
          static inline constexpr uint8_t rxd1 = 48;
          static inline constexpr uint8_t txd2 = 6;
          static inline constexpr uint8_t rxd2 = 5;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g41 = 41;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t g43 = 43;
          static inline constexpr uint8_t g44 = 44;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "Chain DualKey";
        };
      } // namespace m5stack_chain_dualkey
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_core
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_core";
          static inline constexpr const char *name = "M5Core";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t external_num_interrupts = 16;
          static inline constexpr uint8_t num_digital_pins = 20;
          static inline constexpr uint8_t num_analog_inputs = 16;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t txd2 = 17;
          static inline constexpr uint8_t rxd2 = 16;
          static inline constexpr uint8_t ex_scl = 22;
          static inline constexpr uint8_t ex_sda = 21;
          static inline constexpr uint8_t in_scl = 22;
          static inline constexpr uint8_t in_sda = 21;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g16 = 16;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g17 = 17;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_core
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_core2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_core2";
          static inline constexpr const char *name = "M5Core2";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t external_num_interrupts = 16;
          static inline constexpr uint8_t num_digital_pins = 20;
          static inline constexpr uint8_t num_analog_inputs = 16;
          static inline constexpr uint8_t tx2 = 14;
          static inline constexpr uint8_t rx2 = 13;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t ex_scl = 33;
          static inline constexpr uint8_t ex_sda = 32;
          static inline constexpr uint8_t in_scl = 22;
          static inline constexpr uint8_t in_sda = 21;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g27 = 27;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g17 = 17;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_core2
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_coreink
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_coreink";
          static inline constexpr const char *name = "M5CoreInk";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t external_num_interrupts = 16;
          static inline constexpr uint8_t num_digital_pins = 40;
          static inline constexpr uint8_t num_analog_inputs = 16;
          static inline constexpr uint8_t tx2 = 14;
          static inline constexpr uint8_t rx2 = 13;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t ex_scl = 33;
          static inline constexpr uint8_t ex_sda = 32;
          static inline constexpr uint8_t in_scl = 22;
          static inline constexpr uint8_t in_sda = 21;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_coreink
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_cores3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_cores3";
          static inline constexpr const char *name = "M5CoreS3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t external_num_interrupts = 46;
          static inline constexpr uint8_t num_digital_pins = 48;
          static inline constexpr uint8_t num_analog_inputs = 20;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 17;
          static inline constexpr uint8_t rxd2 = 18;
          static inline constexpr uint8_t ex_scl = 1;
          static inline constexpr uint8_t ex_sda = 2;
          static inline constexpr uint8_t in_scl = 11;
          static inline constexpr uint8_t in_sda = 12;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g17 = 17;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g20 = 20;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g45 = 45;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc = 10;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "CoreS3";
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
        };
      } // namespace m5stack_cores3
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_dial
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_dial";
          static inline constexpr const char *name = "M5Dial";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t ex_scl = 15;
          static inline constexpr uint8_t ex_sda = 13;
          static inline constexpr uint8_t in_scl = 12;
          static inline constexpr uint8_t in_sda = 11;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g41 = 41;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t g43 = 43;
          static inline constexpr uint8_t g44 = 44;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "Dial";
        };
      } // namespace m5stack_dial
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_dinmeter
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_dinmeter";
          static inline constexpr const char *name = "M5DinMeter";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t ex_scl = 33;
          static inline constexpr uint8_t ex_sda = 32;
          static inline constexpr uint8_t in_scl = 22;
          static inline constexpr uint8_t in_sda = 21;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g41 = 41;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t g43 = 43;
          static inline constexpr uint8_t g44 = 44;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "DinMeter";
        };
      } // namespace m5stack_dinmeter
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_fire
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_fire";
          static inline constexpr const char *name = "M5Fire";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t external_num_interrupts = 16;
          static inline constexpr uint8_t num_digital_pins = 20;
          static inline constexpr uint8_t num_analog_inputs = 16;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t ex_scl = 22;
          static inline constexpr uint8_t ex_sda = 21;
          static inline constexpr uint8_t in_scl = 22;
          static inline constexpr uint8_t in_sda = 21;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g16 = 16;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g17 = 17;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_fire
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_nano_c6
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_nano_c6";
          static inline constexpr const char *name = "M5NanoC6";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t pin_rgb_led = 20;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t sda1 = 6;
          static inline constexpr uint8_t scl1 = 7;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "NanoC6";
        };
      } // namespace m5stack_nano_c6
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_nano_h2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_nano_h2";
          static inline constexpr const char *name = "M5NanoH2";
          static inline constexpr const char *build_mcu = "esp32h2";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 28;
          static inline constexpr uint8_t pin_rgb_led = 11;
          static inline constexpr uint8_t pin_rgb_led_pwr = 10;
          static inline constexpr uint8_t tx = 24;
          static inline constexpr uint8_t rx = 23;
          static inline constexpr uint8_t a1 = 2;
          static inline constexpr uint8_t a2 = 3;
          static inline constexpr uint8_t a3 = 4;
          static inline constexpr uint8_t a4 = 5;
          static inline constexpr uint8_t builtin_led = 39;
          static inline constexpr uint8_t rgb_builtin = 39;
        };
      } // namespace m5stack_nano_h2
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_paper
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_paper";
          static inline constexpr const char *name = "M5Paper";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t external_num_interrupts = 16;
          static inline constexpr uint8_t num_digital_pins = 40;
          static inline constexpr uint8_t num_analog_inputs = 16;
          static inline constexpr uint8_t tx2 = 14;
          static inline constexpr uint8_t rx2 = 13;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t ex_scl = 32;
          static inline constexpr uint8_t ex_sda = 25;
          static inline constexpr uint8_t in_scl = 22;
          static inline constexpr uint8_t in_sda = 21;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_paper
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_papers3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_papers3";
          static inline constexpr const char *name = "M5PaperS3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t external_num_interrupts = 46;
          static inline constexpr uint8_t num_digital_pins = 48;
          static inline constexpr uint8_t num_analog_inputs = 20;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t ex_scl = 1;
          static inline constexpr uint8_t ex_sda = 2;
          static inline constexpr uint8_t in_scl = 42;
          static inline constexpr uint8_t in_sda = 41;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "PaperS3";
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
        };
      } // namespace m5stack_papers3
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_poe_cam
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_poe_cam";
          static inline constexpr const char *name = "M5PoECAM";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t external_num_interrupts = 16;
          static inline constexpr uint8_t num_digital_pins = 40;
          static inline constexpr uint8_t num_analog_inputs = 16;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t ex_scl = 33;
          static inline constexpr uint8_t ex_sda = 25;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g27 = 27;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_poe_cam
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_powerhub
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_powerhub";
          static inline constexpr const char *name = "M5PowerHub";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t external_num_interrupts = 46;
          static inline constexpr uint8_t num_digital_pins = 48;
          static inline constexpr uint8_t num_analog_inputs = 20;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 17;
          static inline constexpr uint8_t rxd2 = 18;
          static inline constexpr uint8_t ex_scl = 16;
          static inline constexpr uint8_t ex_sda = 15;
          static inline constexpr uint8_t in_scl = 48;
          static inline constexpr uint8_t in_sda = 45;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g17 = 17;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g20 = 20;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g45 = 45;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc = 10;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "PowerHub";
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
        };
      } // namespace m5stack_powerhub
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_stamp_c3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_stamp_c3";
          static inline constexpr const char *name = "M5StampC3";
          static inline constexpr const char *build_mcu = "esp32c3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 22;
          static inline constexpr uint8_t external_num_interrupts = 22;
          static inline constexpr uint8_t num_digital_pins = 22;
          static inline constexpr uint8_t num_analog_inputs = 6;
          static inline constexpr uint8_t tx = 21;
          static inline constexpr uint8_t rx = 20;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
        };
      } // namespace m5stack_stamp_c3
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_stamp_pico
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_stamp_pico";
          static inline constexpr const char *name = "M5StampPico";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t external_num_interrupts = 16;
          static inline constexpr uint8_t num_digital_pins = 40;
          static inline constexpr uint8_t num_analog_inputs = 16;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g33 = 33;
        };
      } // namespace m5stack_stamp_pico
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_stamp_s3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_stamp_s3";
          static inline constexpr const char *name = "M5StampS3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t external_num_interrupts = 23;
          static inline constexpr uint8_t num_digital_pins = 46;
          static inline constexpr uint8_t num_analog_inputs = 15;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g41 = 41;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t g43 = 43;
          static inline constexpr uint8_t g44 = 44;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "Stamp-S3";
        };
      } // namespace m5stack_stamp_s3
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_stamplc
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_stamplc";
          static inline constexpr const char *name = "M5StamPLC";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t external_num_interrupts = 23;
          static inline constexpr uint8_t num_digital_pins = 46;
          static inline constexpr uint8_t num_analog_inputs = 15;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t ex_scl = 1;
          static inline constexpr uint8_t ex_sda = 2;
          static inline constexpr uint8_t in_scl = 15;
          static inline constexpr uint8_t in_sda = 13;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g41 = 41;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t g43 = 43;
          static inline constexpr uint8_t g44 = 44;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "StamPLC";
        };
      } // namespace m5stack_stamplc
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_station
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_station";
          static inline constexpr const char *name = "M5Station";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t external_num_interrupts = 16;
          static inline constexpr uint8_t num_digital_pins = 20;
          static inline constexpr uint8_t num_analog_inputs = 16;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t txd1 = 14;
          static inline constexpr uint8_t rxd1 = 13;
          static inline constexpr uint8_t txd2 = 17;
          static inline constexpr uint8_t rxd2 = 16;
          static inline constexpr uint8_t ex_scl = 33;
          static inline constexpr uint8_t ex_sda = 32;
          static inline constexpr uint8_t in_scl = 22;
          static inline constexpr uint8_t in_sda = 21;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g16 = 16;
          static inline constexpr uint8_t g17 = 17;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_station
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_stickc
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_stickc";
          static inline constexpr const char *name = "M5StickC";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t external_num_interrupts = 16;
          static inline constexpr uint8_t num_digital_pins = 40;
          static inline constexpr uint8_t num_analog_inputs = 16;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t ex_scl = 33;
          static inline constexpr uint8_t ex_sda = 32;
          static inline constexpr uint8_t in_scl = 22;
          static inline constexpr uint8_t in_sda = 21;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_stickc
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_stickc_plus
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_stickc_plus";
          static inline constexpr const char *name = "M5StickCPlus";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t external_num_interrupts = 16;
          static inline constexpr uint8_t num_digital_pins = 40;
          static inline constexpr uint8_t num_analog_inputs = 16;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t ex_scl = 33;
          static inline constexpr uint8_t ex_sda = 32;
          static inline constexpr uint8_t in_scl = 22;
          static inline constexpr uint8_t in_sda = 21;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_stickc_plus
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_stickc_plus2
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_stickc_plus2";
          static inline constexpr const char *name = "M5StickCPlus2";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t external_num_interrupts = 16;
          static inline constexpr uint8_t num_digital_pins = 40;
          static inline constexpr uint8_t num_analog_inputs = 16;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t ex_scl = 33;
          static inline constexpr uint8_t ex_sda = 32;
          static inline constexpr uint8_t in_scl = 22;
          static inline constexpr uint8_t in_sda = 21;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_stickc_plus2
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_sticks3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_sticks3";
          static inline constexpr const char *name = "M5StickS3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t external_num_interrupts = 46;
          static inline constexpr uint8_t num_digital_pins = 48;
          static inline constexpr uint8_t num_analog_inputs = 20;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t ex_scl = 10;
          static inline constexpr uint8_t ex_sda = 9;
          static inline constexpr uint8_t in_scl = 48;
          static inline constexpr uint8_t in_sda = 47;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g37 = 37;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "StickS3";
          static inline constexpr uint8_t builtin_led = 97;
          static inline constexpr uint8_t rgb_builtin = 97;
        };
      } // namespace m5stack_sticks3
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_tab5
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_tab5";
          static inline constexpr const char *name = "M5Tab5";
          static inline constexpr const char *build_mcu = "esp32p4";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 55;
          static inline constexpr uint8_t tx = 37;
          static inline constexpr uint8_t rx = 38;
          static inline constexpr uint8_t ex_scl = 54;
          static inline constexpr uint8_t ex_sda = 53;
          static inline constexpr uint8_t in_scl = 32;
          static inline constexpr uint8_t in_sda = 31;
          static inline constexpr uint8_t a1 = 17;
          static inline constexpr uint8_t a2 = 18;
          static inline constexpr uint8_t a3 = 19;
          static inline constexpr uint8_t a4 = 20;
          static inline constexpr uint8_t a5 = 21;
          static inline constexpr uint8_t a6 = 22;
          static inline constexpr uint8_t a7 = 23;
          static inline constexpr uint8_t a8 = 49;
          static inline constexpr uint8_t a9 = 50;
          static inline constexpr uint8_t a10 = 51;
          static inline constexpr uint8_t a11 = 52;
          static inline constexpr uint8_t a12 = 53;
          static inline constexpr uint8_t a13 = 54;
          static inline constexpr uint8_t t0 = 2;
          static inline constexpr uint8_t t1 = 3;
          static inline constexpr uint8_t t2 = 4;
          static inline constexpr uint8_t t3 = 5;
          static inline constexpr uint8_t t4 = 6;
          static inline constexpr uint8_t t5 = 7;
          static inline constexpr uint8_t t6 = 8;
          static inline constexpr uint8_t t7 = 9;
          static inline constexpr uint8_t t8 = 10;
          static inline constexpr uint8_t t9 = 11;
          static inline constexpr uint8_t t10 = 12;
          static inline constexpr uint8_t t11 = 13;
          static inline constexpr uint8_t t12 = 14;
          static inline constexpr uint8_t t13 = 15;
          static inline constexpr uint8_t board_sdio_esp_hosted_clk = 12;
          static inline constexpr uint8_t board_sdio_esp_hosted_cmd = 13;
          static inline constexpr uint8_t board_sdio_esp_hosted_d0 = 11;
          static inline constexpr uint8_t board_sdio_esp_hosted_d1 = 10;
          static inline constexpr uint8_t board_sdio_esp_hosted_d2 = 9;
          static inline constexpr uint8_t board_sdio_esp_hosted_d3 = 8;
          static inline constexpr uint8_t board_sdio_esp_hosted_reset = 15;
        };
      } // namespace m5stack_tab5
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_timer_cam
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_timer_cam";
          static inline constexpr const char *name = "M5TimerCAM";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t external_num_interrupts = 16;
          static inline constexpr uint8_t num_digital_pins = 40;
          static inline constexpr uint8_t num_analog_inputs = 16;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t ex_scl = 13;
          static inline constexpr uint8_t ex_sda = 4;
          static inline constexpr uint8_t in_scl = 14;
          static inline constexpr uint8_t in_sda = 12;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g27 = 27;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
          static inline constexpr uint8_t builtin_led = 2;
        };
      } // namespace m5stack_timer_cam
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_tough
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_tough";
          static inline constexpr const char *name = "M5Tough";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t external_num_interrupts = 16;
          static inline constexpr uint8_t num_digital_pins = 20;
          static inline constexpr uint8_t num_analog_inputs = 16;
          static inline constexpr uint8_t tx2 = 14;
          static inline constexpr uint8_t rx2 = 13;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t ex_scl = 33;
          static inline constexpr uint8_t ex_sda = 32;
          static inline constexpr uint8_t in_scl = 22;
          static inline constexpr uint8_t in_sda = 21;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g38 = 38;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g27 = 27;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g17 = 17;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
        };
      } // namespace m5stack_tough
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_unit_c6l
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_unit_c6l";
          static inline constexpr const char *name = "M5UnitC6L";
          static inline constexpr const char *build_mcu = "esp32c6";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 31;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t tx = 16;
          static inline constexpr uint8_t rx = 17;
          static inline constexpr uint8_t ex_scl = 4;
          static inline constexpr uint8_t ex_sda = 5;
          static inline constexpr uint8_t in_scl = 8;
          static inline constexpr uint8_t in_sda = 10;
          static inline constexpr uint8_t a1 = 1;
          static inline constexpr uint8_t a2 = 2;
          static inline constexpr uint8_t a3 = 3;
          static inline constexpr uint8_t a4 = 4;
          static inline constexpr uint8_t a5 = 5;
          static inline constexpr uint8_t a6 = 6;
          static inline constexpr uint8_t sda1 = 6;
          static inline constexpr uint8_t scl1 = 7;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "Unit C6L";
        };
      } // namespace m5stack_unit_c6l
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_unit_cam
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_unit_cam";
          static inline constexpr const char *name = "M5UnitCAM";
          static inline constexpr const char *build_mcu = "esp32";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 40;
          static inline constexpr uint8_t external_num_interrupts = 16;
          static inline constexpr uint8_t num_digital_pins = 40;
          static inline constexpr uint8_t num_analog_inputs = 16;
          static inline constexpr uint8_t tx = 1;
          static inline constexpr uint8_t rx = 3;
          static inline constexpr uint8_t g23 = 23;
          static inline constexpr uint8_t g25 = 25;
          static inline constexpr uint8_t g27 = 27;
          static inline constexpr uint8_t g22 = 22;
          static inline constexpr uint8_t g26 = 26;
          static inline constexpr uint8_t g21 = 21;
          static inline constexpr uint8_t g32 = 32;
          static inline constexpr uint8_t g35 = 35;
          static inline constexpr uint8_t g34 = 34;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g18 = 18;
          static inline constexpr uint8_t g36 = 36;
          static inline constexpr uint8_t g19 = 19;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g33 = 33;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t dac1 = 25;
          static inline constexpr uint8_t dac2 = 26;
          static inline constexpr uint8_t adc1 = 35;
          static inline constexpr uint8_t adc2 = 36;
          static inline constexpr uint8_t builtin_led = 4;
        };
      } // namespace m5stack_unit_cam
    } // namespace esp32
  } // namespace m5stack

  namespace m5stack
  {
    namespace esp32
    {
      namespace m5stack_unit_cams3
      {
        struct Info
        {
          static inline constexpr const char *fqbn = "m5stack:esp32:m5stack_unit_cams3";
          static inline constexpr const char *name = "M5UnitCAMS3";
          static inline constexpr const char *build_mcu = "esp32s3";
        };

        struct Pins
        {
          static inline constexpr uint8_t pins_soc_gpio_pin_count = 49;
          static inline constexpr uint16_t usb_vid = 12346;
          static inline constexpr uint16_t usb_pid = 4097;
          static inline constexpr uint8_t external_num_interrupts = 23;
          static inline constexpr uint8_t num_digital_pins = 46;
          static inline constexpr uint8_t num_analog_inputs = 15;
          static inline constexpr uint8_t tx = 43;
          static inline constexpr uint8_t rx = 44;
          static inline constexpr uint8_t txd2 = 1;
          static inline constexpr uint8_t rxd2 = 2;
          static inline constexpr uint8_t g0 = 0;
          static inline constexpr uint8_t g1 = 1;
          static inline constexpr uint8_t g2 = 2;
          static inline constexpr uint8_t g3 = 3;
          static inline constexpr uint8_t g4 = 4;
          static inline constexpr uint8_t g5 = 5;
          static inline constexpr uint8_t g6 = 6;
          static inline constexpr uint8_t g7 = 7;
          static inline constexpr uint8_t g8 = 8;
          static inline constexpr uint8_t g9 = 9;
          static inline constexpr uint8_t g10 = 10;
          static inline constexpr uint8_t g11 = 11;
          static inline constexpr uint8_t g12 = 12;
          static inline constexpr uint8_t g13 = 13;
          static inline constexpr uint8_t g14 = 14;
          static inline constexpr uint8_t g15 = 15;
          static inline constexpr uint8_t g39 = 39;
          static inline constexpr uint8_t g40 = 40;
          static inline constexpr uint8_t g41 = 41;
          static inline constexpr uint8_t g42 = 42;
          static inline constexpr uint8_t g43 = 43;
          static inline constexpr uint8_t g44 = 44;
          static inline constexpr uint8_t g46 = 46;
          static inline constexpr uint8_t adc1 = 7;
          static inline constexpr uint8_t adc2 = 8;
          static inline constexpr const char *usb_manufacturer = "M5Stack";
          static inline constexpr const char *usb_product = "Unit CamS3";
        };
      } // namespace m5stack_unit_cams3
    } // namespace esp32
  } // namespace m5stack

} // namespace variants_collector
