#include <stdexcept>


const int* FindLastElement(const int* begin, const int* end, bool(*predicate)(int)) {
    if ((begin == nullptr) || (end == nullptr) || (begin > end)) {
        return end;
    }
    const int* el = begin;
    const int* answer = nullptr;
    while (el != end) {
        if(predicate(*el)) {
            answer = el;
        }
        el += 1;
    }
    if (answer == nullptr) {
        answer = end;
    }
    return answer;
}
