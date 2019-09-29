
// https://www.acmicpc.net/problem/11047

#include <stdio.h>
#include <iostream>
using namespace std;

int arr[12];

int main() {
    int n, k;
    int sum = 0;
    scanf("%d %d", &n, &k);
    
    for(int i=0; i<n; i++) {
        scanf("%d ", &arr[i]);
    }
    
    for(int i=n-1; i>=0; i--) {
        sum += k/arr[i];
        k %= arr[i];
    }
    
    printf("%d", sum);
    
    return 0;
}
