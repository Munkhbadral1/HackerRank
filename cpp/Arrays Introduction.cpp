#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[100];
    int a;
    cin>>a;
    for(int i=0; i<a; i++){
        cin>>arr[i];
    }

    std::reverse(arr.begin(), arr.end());
    for (const auto& i : arr) {
        std::cout << i << ' ';
    }
    
    return 0;
}