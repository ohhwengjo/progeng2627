#include <iostream>
#include <cmath>

int main(){
    int x, n = 0;
    double sumopow = 0;
    std::cout << "please input the base:" << std::endl;
    std::cin >> x;
    std::cout << "please input the iterations:" << std::endl;
    std::cin >> n;
    for (int i = n; i <= 0; i--){
        sumopow += std::pow(x, i);
    }
    std::cout << "sum of powers is: " << sumopow << std::endl; 
}

