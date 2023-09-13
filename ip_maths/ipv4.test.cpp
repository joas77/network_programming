#include "IPv4.hpp"
#include <iostream>


int main() {
    uint32_t ip_addr = 2058138165;

    std::cout << ip_addr << " = " << get_abcd_format(ip_addr) << std::endl;
    
    return 0;
}