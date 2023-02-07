#include <cstdio>

// OLD CODE
/*
int num,res; void r(int s) {
    while (num>=0) { num = num-s; } num=num+s; res=num;} int main() { num = 10;
    r(4); printf
            ("%d\n" , res
            ) ; }
*/


// NEW CODE

int calculate_remainder(int num, int divisor) {
    // Calculate remainder of num divided by divisor
    while (num >= 0) {
        num -= divisor;
    }
    int remainder = num + divisor;
    return remainder;
}

// T: what happens if divisor is negative?


int main() {
    int num = 10, divisor = 4;
    int remainder = calculate_remainder(num, divisor);

    printf("%d\n", remainder);

    return 0;
}
