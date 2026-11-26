#ifndef IN_H
#define IN_H

#include "AdvancedCommandInterface.h"
#include "CommandInterface.h"

#include <memory>
#include <string>

std::shared_ptr<CommandInterface> buildCommandInterface(std::string &text) {
  auto interface = std::make_shared<AdvancedCommandInterface>(text);
  interface->init();
  return interface;
}

#endif
