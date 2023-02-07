#include "MathVector.h"
#include <vector>
#include <stdexcept>


MathVector::MathVector(int len) : length(len), elements(std::vector<double> {}) {}

MathVector::MathVector(int len, std::vector<double> v) {
    if (v.size() != length) {
        throw std::invalid_argument("Number of elements does not match vector size");
    } else {
        length = len;
        elements = v;
    }
}

MathVector::MathVector(const MathVector& v) {
    length = v.length;
    elements = v.elements;
}

int MathVector::get_length() const {
    return length;
}

void MathVector::validate_position(int position) {
    if (position >= length) {  // what about negative positions?
        throw std::invalid_argument("No element at that position");
    }
}

double MathVector::get_element(int position) {
    validate_position(position);
    return elements[position];
}

void MathVector::set_element(int position, double element) {
    validate_position(position);
    elements[position] = element;
}

std::vector<double> MathVector::get_vector() const {
    return elements;
}


// T: this generally looks good. You might just want to test the implementation with a simple script.
