//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 3. 26..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// https://www.acmicpc.net/problem/11866

#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    int n, m, cnt, idx;
    queue<int> q;
    int arr[1002];
    
    cnt = idx = 0;
    scanf("%d %d", &n, &m);
    
    for(int i=1; i<=n; i++)
        q.push(i);
    
    while(!q.empty()) {
        cnt++;
        if(cnt%m == 0) {
            arr[idx] = q.front();
            idx++;
        }
        else
            q.push(q.front());
        q.pop();
    }
    
    printf("<%d", arr[0]);
    for(int i=1; i<n; i++) {
        printf(", %d", arr[i]);
    }
    printf(">");
    
    return 0;
}
