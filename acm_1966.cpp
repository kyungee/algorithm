//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 3. 25..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// https://www.acmicpc.net/problem/1966

#include <iostream>
#include <queue>
using namespace std;

int main() {
    
    int n_test;
    int n, m, input;
    
    scanf("%d", &n_test);
    
    for(int i=0; i<n_test; i++) {
        queue<pair<int, int>> q;
        priority_queue<int> p_queue;
        int cur_idx, cur_val, seq=0;
        
        scanf("%d %d", &n, &m);
        for(int j=0; j<n; j++) {
            scanf("%d ", &input);
            q.push({j, input});
            p_queue.push(input);
        }
        
        while(!q.empty()) {
            cur_idx = q.front().first;
            cur_val = q.front().second;
            q.pop();
            
            if(p_queue.top() == cur_val) {
                p_queue.pop();
                seq++;
                if(cur_idx == m) {
                    printf("%d\n", seq);
                    break;
                }
            } else {
                q.push({cur_idx, cur_val});
            }
        }
        
    }
    
    return 0;
}

