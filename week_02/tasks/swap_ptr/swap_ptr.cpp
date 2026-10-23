#include <stdexcept>


void SwapPtr(int*& ptr1, int*& ptr2) {
    int* ptr = ptr1;
    ptr1 = ptr2;
    ptr2 = ptr;
}

void SwapPtr(const int*& ptr1, const int*& ptr2) {
    const int* ptr = ptr1;
    ptr1 = ptr2;
    ptr2 = ptr;
}

void SwapPtr(int**& ptr1, int**& ptr2) {
    int** ptr = ptr1;
    ptr1 = ptr2;
    ptr2 = ptr;
}
