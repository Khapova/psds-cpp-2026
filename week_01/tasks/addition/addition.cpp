#include <cstdint>
#include <stdexcept>


int64_t Addition(int a, int b) {
    int64_t av = static_cast<int64_t>(a);
    int64_t bv = static_cast<int64_t>(b);
    return (av + bv);
}