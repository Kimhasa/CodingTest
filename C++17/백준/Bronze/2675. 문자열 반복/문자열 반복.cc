#include <iostream>
#include <string>
#include <vector>

int main()
{
    int T;
    std::cin >> T;
    
    while (T--) {
        int R;
        std::string S;
        std::cin >> R >> S;
        
        std::string P;
        
        for (char c : S) {
            for (int i = 0; i < R; ++i){
                P += c;
            }
        }
        
        std::cout << P << std::endl;
    }
    
    return 0;
}