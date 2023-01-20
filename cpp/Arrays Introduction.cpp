#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int N;
    std::cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }
    std::reverse(arr, arr + N);
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << ' ';
    }
    return 0;
}