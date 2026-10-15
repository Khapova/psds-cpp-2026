#include <stdexcept>


double ApplyOperations(double a, double b /* other arguments */) {
    (void)a, (void)b;
    throw std::runtime_error{"Not implemented"};
}