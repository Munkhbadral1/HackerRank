#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[1000];
    int a;
    cin>>a;
    for(int i=0; i<a; i++){
        cin>>arr[i];
        while(a<0){
            cout<<arr[a]<<" ";
            a--;
        }
    }

    
    return 0;
}