
// https://www.acmicpc.net/problem/10818

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int n, input;
    int min, max;
    max = -1000000;
    min = 1000000;
    
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &input);
        if(min > input)
            min = input;
        if(max < input)
            max = input;
    }
    
    printf("%d %d", min, max);
    
    return 0;
}
