#include <iostream>
#include <cstdlib>

float findmax(float x, float y, float z){
        if (x < y){
            x = y;
        }
        if (x < z){
            x = z;
        }
        return x;
    }

int main(){
    float testx, testy, testz, output = 0;
    bool check = false;
    testx = rand();
    testy = rand();
    testz = rand();
    output = findmax(testx, testy, testz);
    check = (output >= testx &&
         output >= testy &&
         output >= testz);
    std::cout << check << std::endl;
}
