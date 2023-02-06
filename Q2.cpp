#include <cstdio>


//int num,res; void r(int s) {
//    while (num>=0) { num = num-s; } num=num+s; res=num;} int main() { num = 10;
//    r(4); printf
//            ("%d\n" , res
//            ) ; }


// function computes residue from division of num by s
// poor formatting - no new lines for function definitions, etc
// num variable not in local scope of function - need to pass as argument
// probably better to have function just return number instead of printing - more generalisable and can use result in other code


int r(int num, int s) {
    while (num >= 0) {
        num -= s;
    }
    num += s;
    return num;  // res
}


int main() {
    int num = 10, s = 4;
    int res = r(num, s);
    printf("%d\n", res);

    return 0;
}