#include <iostream>

bool leap_year(int year){
    bool ly;
    if (year%400 == 0){
        ly = true;
    }
    else if (year%100 == 0){
        ly = false;
    }
    else if (year%4 == 0){
        ly = true;
    }
    else{
        ly =false;
    }
    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    int maxday = 0;
    if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12){
        maxday = 31;
    }

    else if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
        maxday = 30;
    }

    else{
        maxday = 28 + leap_year(y1);
    }
    if (d1 < maxday){
        d2 = d1 + 1;
        m2 = m1;
        y2 = y1;
    }
    else if (m1 < 12){
        d2 = 1;
        m2 = m1 + 1;
        y2 = y1;
    }
    else{
        d2 = 1;
        m2 = 1;
        y2 = y1 +1;
    }


}

int main() {
    int d1, m1, y1;
    int d2, m2, y2;

    std::cout << "Enter a date (day month year): ";
    std::cin >> d1 >> m1 >> y1;

    next_date(d1, m1, y1, d2, m2, y2);

    std::cout << "Next date: "
              << d2 << "/" << m2 << "/" << y2
              << std::endl;

    return 0;
}