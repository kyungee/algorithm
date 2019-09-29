
// https://www.acmicpc.net/problem/2562

#include <stdio.h>
#include <iostream>
using namespace std;

#define MAX 10

int arr[MAX];

int main() {
    int max = 0;
    int idx;
    for(int i=0; i<9; i++) {
        scanf("%d ", &arr[i]);
        if(max < arr[i]) {
            max = arr[i];
            idx = i+1;
        }
    }
    
    printf("%d\n%d", max, idx);
    
    return 0;
}
