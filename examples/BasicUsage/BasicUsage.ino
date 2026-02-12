#include <variants_collector.h>

/*
variants_collector BasicUsage
FQBN            : esp32:esp32:m5stack_atoms3
Board           : M5AtomS3
MCU             : esp32s3
BOOT button pin : 84
*/

void setup()
{
  Serial.begin(115200);
  delay(1000);

  namespace Board = variants_collector::esp32::esp32::m5stack_atoms3;
  Serial.println("variants_collector BasicUsage");
  Serial.printf("FQBN            : %s\n", Board::Info::fqbn);
  Serial.printf("Board           : %s\n", Board::Info::name);
  Serial.printf("MCU             : %s\n", Board::Info::build_mcu);
  Serial.printf("BOOT button pin : %d\n", Board::Pins::builtin_led);
}

void loop()
{
  delay(1);
}
