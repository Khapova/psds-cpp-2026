#include <stdexcept>


double ApplyOperations(double a, double b, double (**op)(double, double), int n) {
    double summ = 0;
    if ((n == 0) || (op == nullptr)) {
        return 0.0;
    }
    for (int i = 0; i < n; ++i) {
        if (op[i] != nullptr) {
            summ += op[i](a, b);
        }  
    }
    return summ;
}
