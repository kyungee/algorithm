//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 4. 7..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// https://www.acmicpc.net/problem/9465

#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 1000001;

int n, value[2][MAX], dp[MAX][3];

int func(int c, int status) {
    if(c==n) return 0;
    if(dp[c][status] != -1) return dp[c][status];
    
    int result = func(c+1, 0);
    if(status != 1) result = max(result, func(c+1, 1)+value[0][c]);
    if(status != 2) result = max(result, func(c+1, 2)+value[1][c]);
    
    dp[c][status] = result;
    return result;
}

int main() {
    
    int T;
    scanf("%d", &T);
    
    for(int i=0; i<T; i++) {
        scanf("%d", &n);
        
        for(int i=0; i<2; i++)
            for(int j=0; j<n; j++)
                scanf("%d", &value[i][j]);
        
        for(int i=0; i<n; i++)
            for(int j=0; j<3; j++)
                dp[i][j] = -1;
        
        printf("%d\n", func(0,0));
    }
    
    return 0;
}
