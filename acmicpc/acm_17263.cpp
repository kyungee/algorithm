
// https://www.acmicpc.net/problem/17263

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int n, input;
    scanf("%d", &n);
    
    int max = 0;
    for(int i=0; i<n; i++) {
        scanf("%d ", &input);
        if(input > max)
            max = input;
    }
    
    printf("%d", max);
    
    return 0;
}
