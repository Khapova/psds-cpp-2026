#include <cstddef>
#include <stdexcept>


double CalculateRMS(double values[], size_t size) {
    if ((size == 0) || (values == nullptr)) {
        return 0.0;
    }
    double sum = 0;
    for (size_t i = 0; i < size; ++i) {
        sum += (values[i] * values[i]);
    }
    sum /= size;
    return sqrt(sum);
}