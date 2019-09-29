
// https://www.acmicpc.net/problem/3052

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int input;
    int arr[42] = {0, };
    int cnt = 0;
    
    for(int i=0; i<10; i++) {
        scanf("%d ", &input);
        arr[input%42]++;
    }
    
    for(int i=0; i<42; i++){
        if(arr[i] >= 1)
            cnt++;
    }
    
    printf("%d", cnt);
    
    return 0;
}
