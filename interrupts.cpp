#include "interrupts.h"

void printf(char* str);

uint32_t InterruptManager::handleInterrupt(int8_t interruptNumber, uint32_t esp) {
  printf("INTERRUPT\n");
  return esp;
}
