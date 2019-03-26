//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 3. 26..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// https://www.acmicpc.net/problem/4344

#include <iostream>
using namespace std;

int main() {
    
    int test_case;
    int n, sum, cnt;
    int** arr;
    float result;
    
    scanf("%d", &test_case);
    
    arr = new int*[test_case];
    
    for(int i=0; i<test_case; i++) {
        scanf("%d ", &n);
        arr[i] = new int[n];
        cnt = sum = 0;
        
        for(int j=0; j<n; j++) {
            scanf("%d ", &arr[i][j]);
            sum += arr[i][j];
        }
        
        for(int j=0; j<n; j++) {
            if(arr[i][j] > float(sum/n))
                cnt++;
        }
        
        result = float(cnt)/n*100;
        printf("%.3f\%\n", result);
    }
    
    return 0;
}
