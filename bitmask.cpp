#include <cstdint>
#include <iostream>

int main(){

constexpr std::uint8_t mask_odd{0b0101'0101};
std::uint8_t bit_test{0b1111'1111};

std::cout << "Bit 0 is " << (static_cast<bool>(mask_odd & bit_test) ? "On.\n" : "Off.\n";

return 0;
}
