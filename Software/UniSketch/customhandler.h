/*
#define SK_CUSTOM_HANDLER
uint16_t customActionHandler(const uint16_t actionPtr, const uint8_t HWc, const uint8_t actIdx, const bool actDown, const bool actUp, const uint8_t pulses, const uint16_t value)    {
  if (actDown) {
    Serial << "Custom Handler Invoked for Hardware Component #" << HWc << " on Down event\n";
  }    
  if (actUp) {
    Serial << "Custom Handler Invoked for Hardware Component #" << HWc << " on Up event\n";
  }    

  return ((millis()&128)>0) ? 4 : 5;    // Will blink the button fast
}
*/
