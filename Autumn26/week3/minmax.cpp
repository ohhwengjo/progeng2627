#include <iostream>

int main(){
    int maxx, x, minx;
    std::cout << "please enter a digit:" << std::endl;
    std::cin >> x;
    minx = maxx = x;
    while (x != 0){
        if (x < minx){
            minx = x;
        }
        if (x > maxx){
            maxx = x;
        }
        std::cout << "please enter a digit:" << std::endl;
        std::cin >> x;
    }
    std::cout << "max is " << maxx << std::endl << "min is " << minx << std::endl;
}