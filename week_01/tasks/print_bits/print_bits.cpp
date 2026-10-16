#include <cstddef>
#include <stdexcept>
#include <string>


void PrintBits(long long value, size_t bytes) {
    if ((bytes == 0) || (bytes > 8)) {
        return;
    }
    std::string answer = "";
    size_t count_bits = 8 * bytes;
    for (size_t i = count_bits; i > 0; --i) {
        bool bit = value & 1;
        value >>= 1;
        answer = ((bit) ? '1' : '0') + answer;
        if (((count_bits - (i - 1)) % 4 == 0) && i > 1) {
            answer = '\'' + answer;
        }
    }
    std::cout << "0b" + answer << std::endl;
    
};
