//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 4. 9..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// https://www.acmicpc.net/problem/1932

#include <iostream>
#include <algorithm>
using namespace std;

int dp[501][501] = {0};
int cost[501][501] = {0};

int main() {
    
    int n, result=0;
    
    scanf("%d ", &n);
    
    for(int i=0; i<n; i++)
        for(int j=0; j<=i; j++)
            scanf("%d", &cost[i][j]);
    
    dp[0][0] = cost[0][0];
    
    for(int i=1; i<n; i++) {
        for(int j=0; j<=i; j++) {
            if(j==0) dp[i][j] = dp[i-1][j] + cost[i][j];
            else if(j==i) dp[i][j] = dp[i-1][j-1] + cost[i][j];
            else dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + cost[i][j];
        }
    }
    
    for(int i=0; i<n; i++) {
        if(result<dp[n-1][i])
            result = dp[n-1][i];
    }
    
    printf("%d", result);
    
    return 0;
}
