#include <vector>

#ifndef B16TUTE1_MATHVECTOR_H
#define B16TUTE1_MATHVECTOR_H


class MathVector {
public:
    MathVector(int size);
    int get_size();
    void resize(int new_size);
private:
    std::vector<double> elements;
    int length;
};


#endif
