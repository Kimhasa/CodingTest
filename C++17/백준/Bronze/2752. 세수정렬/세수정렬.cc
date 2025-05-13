#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    std::vector<int> num;
    int count = 3;

    for (int i = 0; i < count; i++) {
        int input;
        std::cin >> input;
        num.push_back(input);
    }

    std::sort(num.begin(), num.end());
    std::cout << num[0] << ' ' << num[1] << ' ' << num[2] << std::endl;

    return 0;
}