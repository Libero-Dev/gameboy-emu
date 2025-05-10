#include <climits>
#include <cstdint>
#include <iostream>

class IDU {
  uint16_t AddrBus = 0;

public:
  IDU();

private:
};

IDU::IDU() = default;

class ALU {
  uint8_t InputPort1 = 0;
  uint8_t InputPort2 = 0;

public:
  ALU();

private:
};

ALU::ALU() = default;

class RegisterFile {
  // program counter
  uint16_t PC = 0;
  // stack pointer
  uint16_t SP = 0;
  // accumulator
  uint8_t A = 0;
  // flag register
  uint8_t F = 0;
  // 2 x 8-bit halves -> BC, DE, HL
  uint8_t B = 0;
  uint8_t C = 0;
  uint8_t D = 0;
  uint8_t E = 0;
  uint8_t H = 0;
  uint8_t L = 0;
  // instruction register
  uint8_t IR = 0;
  // interrupt enable
  uint8_t IE = 0;

public:
  RegisterFile();

private:
};

RegisterFile::RegisterFile() = default;
int main(int argc, char **args) {
  std::cout << "GAMEBOY EMULATOR IN C++20\n";

  IDU idu;
  ALU alu;
  RegisterFile registerFile;
}
