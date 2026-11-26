#ifndef MEMORY_RECALL_H
#define MEMORY_RECALL_H

#include "MemorySave.h"
#include "Operation.h"
#include <iostream>
#include <memory>
#include <stack>

class MemoryRecallOperation : public Operation {
public:
  MemoryRecallOperation(const std::shared_ptr<MemorySaveOperation> &memorySave)
      : mMemorySave(memorySave) {}

  void addOperand(int operand) override {
    std::cout << "MemoryRecallOperation::addOperand() should not be envoked!\n";
  }

  bool isCompleted() override { return true; }

  int getResult() override { return mMemorySave->recall(); }

private:
  std::shared_ptr<MemorySaveOperation> mMemorySave;
};

#endif // MEMORY_RECALL_H
