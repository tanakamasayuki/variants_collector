#include <variants_collector.h>

enum class RuntimeBoard
{
  Unknown,
  M5StackAtomS3,
};

static RuntimeBoard detectBoardAtRuntime()
{
  // Replace this with your own runtime detection logic.
  // Example: EEPROM marker, GPIO strap, sensor presence, USB PID, etc.
  return RuntimeBoard::M5StackAtomS3;
}

void printM5StackAtomS3()
{
  namespace Board = variants_collector::esp32::esp32::m5stack_atoms3;
  Serial.printf("FQBN            : %s\n", Board::Info::fqbn);
  Serial.printf("Board           : %s\n", Board::Info::name);
  Serial.printf("MCU             : %s\n", Board::Info::build_mcu);
  Serial.printf("BOOT button pin : %d\n", Board::Pins::builtin_led);
}

void setup()
{
  Serial.begin(115200);
  delay(1000);

  Serial.println("RuntimeSelection");

  switch (detectBoardAtRuntime())
  {
  case RuntimeBoard::M5StackAtomS3:
    printM5StackAtomS3();
    break;
  default:
    Serial.println("Unknown board");
    break;
  }
}

void loop()
{
  delay(1);
}
