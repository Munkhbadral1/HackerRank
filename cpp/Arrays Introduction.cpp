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
    }
    for(int c=0; c<a; a--){
        cout<<arr[c]<<" ";
    }
    
    return 0;
}