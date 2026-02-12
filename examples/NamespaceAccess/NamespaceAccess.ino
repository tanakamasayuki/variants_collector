#include <variants_collector.h>

void setup()
{
  Serial.begin(115200);
  delay(1000);

  Serial.println("NamespaceAccess");

  // 1. Fully-qualified access
  Serial.println(variants_collector::esp32::esp32::m5stack_atoms3::Info::fqbn);
  Serial.println(variants_collector::esp32::esp32::m5stack_atoms3::Pins::builtin_led);

  // 2. Namespace alias for the board (local scope)
  {
    namespace Board = variants_collector::esp32::esp32::m5stack_atoms3;
    Serial.println(Board::Info::fqbn);
    Serial.println(Board::Pins::builtin_led);
  }

  // 3. Namespace alias (local scope)
  {
    namespace vc = variants_collector::esp32::esp32;
    Serial.println(vc::m5stack_atoms3::Info::fqbn);
    Serial.println(vc::m5stack_atoms3::Pins::builtin_led);
  }

  // 4. Type alias for specific members (local scope)
  {
    using BoardInfo = variants_collector::esp32::esp32::m5stack_atoms3::Info;
    using BoardPins = variants_collector::esp32::esp32::m5stack_atoms3::Pins;
    Serial.println(BoardInfo::fqbn);
    Serial.println(BoardPins::builtin_led);
  }

  // 5. using namespace (local scope, least recommended)
  {
    using namespace variants_collector::esp32::esp32;
    Serial.println(m5stack_atoms3::Info::fqbn);
    Serial.println(m5stack_atoms3::Pins::builtin_led);
  }
}

void loop()
{
  delay(1);
}
