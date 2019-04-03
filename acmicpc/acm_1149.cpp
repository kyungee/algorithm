//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 4. 3..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// https://www.acmicpc.net/problem/1149

#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001][3] = {0};
int cost[1001][3] = {0};

int main() {
    
    int n;
    
    scanf("%d ", &n);
    
    for(int i=1; i<=n; i++) {
        scanf("%d %d %d", &cost[i][0], &cost[i][1], &cost[i][2]);
    }
    
    for(int i=1; i<=n; i++) {
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + cost[i][0];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + cost[i][1];
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + cost[i][2];
    }
    
    printf("%d", min(min(dp[n][0], dp[n][1]), dp[n][2]));
    
    return 0;
}

