#include <iostream>
#include <string>
#include <vector>

int main()
{
    int N;
    std::cin >> N;
    
    int arr[N];
    
    for(int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }
    
    int max = arr[0];
    int min = arr[0];
    
    for(int i = 1; i < N; i++){
        if(arr[i] > max) {
            max = arr[i];
        }
        else if(arr[i] < min){
            min = arr[i];
        }
    }
    
    std::cout << min << " " << max <<std::endl;
    
    return 0;
}