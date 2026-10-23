#include <stdexcept>


void PrintArray(const int* begin, const int* end, int n) {
    if ((begin == nullptr) || (end == nullptr) || (begin == end)) {
        std::cout << "[]" << std::endl;
        return;
    }
    int count = 0;    
    int step = 1;
    const int* el = begin;
    if (begin > end) {
        step = -1;
        el = begin - 1;
    }
    std::cout << "[";
    while (true) {
        std::cout << *el;
        const int* next_el = el + step;
        count++;
        if ((step == 1 && next_el == end) || (step == -1 && el == end)) {
            std::cout << "]" << std::endl;
            break;
        }
        else {
            if ((n > 0) && (count == n)) {
                std::cout << ", ..." << std::endl << " ";
                count = 0;
            }
            else {
                std::cout << ", ";
            }
        }
        el = next_el;     
    }
}

void PrintArray(const int* begin, const int* end) {
    if ((begin == nullptr) || (end == nullptr) || (begin == end)) {
        std::cout << "[]" << std::endl;
        return;
    }
    int step = 1;
    const int* el = begin;
    if (begin > end) {
        step = -1;
        el = begin - 1;        
    }
    std::cout << "[";
    while (true) {
        std::cout << *el;
        const int* next_el = el + step;
        if ((step == 1 && next_el == end) || (step == -1 && el == end)) {
            std::cout << "]" << std::endl;
            break;
        }
        else {
            std::cout << ", ";
        }
        el = next_el;
    }
}
