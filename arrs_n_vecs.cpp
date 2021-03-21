#include <iostream>
#include <iterator>
#include <vector>

int main() {
    int arr1 [5];
    int arr2 [2] {1, 2};
    int arr3 [10] {4, 1, 9};
    int arr4 [12] {0};
    std::string arr5 [] {"Hello", "Hi", "Bonjour"};

    for (int i = 0; i < sizeof arr5 / sizeof arr5[0]; i++) {
        std::cout << arr5[i] << std::endl;
    }

    int arr21 [2][4];
    int arr22 [][2] {
        {1, 2},
        {3, 4},
        {5, 6},
    };

    std::vector<int> vec1 (5);
    std::vector<char> vowels {'a', 'e', 'i', 'o', 'u'};
    std::vector<double> temp (10, 12.34);
    std::vector<std::vector<int>> vec2d {
        {1},
        {2, 3},
        {4, 5, 6},
    };

    std::cout << vowels.at(2) << "\n";
    temp.push_back(98.76);

    for (int i = 0; i < temp.size(); i++) {
        std::cout << temp[i] << "\t";
    }
    std::cout << "\n";

    vec2d.at(0).at(0) = 1000;
    std::cout << vec2d.at(0).at(0) + vec2d[1][1] << std::endl;

    return 0;
}