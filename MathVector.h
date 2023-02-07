#include <vector>

#ifndef B16TUTE1_MATHVECTOR_H
#define B16TUTE1_MATHVECTOR_H


// todo: operators and other operations

class MathVector {
public:
    // constructors
    MathVector(int length);  // (i)
    MathVector(int length, std::vector<double>);  // (ii)
    MathVector(const MathVector& v);  // (iii)

    int get_length() const;

    double get_element(int position);
    void set_element(int position, double element);
    std::vector<double> get_vector() const;

private:
    std::vector<double> elements;
    int length;

    void validate_position(int position);
};

#endif
