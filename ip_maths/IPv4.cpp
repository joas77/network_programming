#include "IPv4.hpp"

// FIXME:
// returning 2058138165 = 122.172.0.0. 
// should be 122.172.178.53
// and remove traingling dot (.)

std::string get_abcd_format(uint32_t ip) {
    std::string str_ip;
    uint32_t mask = 0xFF000000;

    const uint32_t kBytes = 4;
    for(size_t i=0; i<kBytes; i++) {
        mask = (mask >> 8*i); 
        auto octect = ((ip & mask) >> 8*(kBytes - i - 1));
        str_ip += std::to_string(octect) + ".";
    }

    return str_ip;
}