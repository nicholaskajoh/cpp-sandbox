#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    int num1 {5};
    double num2 (2.1);
    std::string str1 = "Nick";

    std::cout << "String: " + str1 << "\nInteger: " << num1 << "\nDouble: " + std::to_string(num2) << std::endl;

    char chr1 {'N'};
    unsigned short score = 100;
    long pop {18000000};
    long long world_pop {7'600'000'000};
    float amount {543.59};
    double pi {3.14159};
    long double biggy {2.7e120};
    bool wahala_dey {false};
    const int months_in_year {12};

    return 0;
}
