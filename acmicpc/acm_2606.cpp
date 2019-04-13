//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 4. 13..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// https://www.acmicpc.net/problem/2606

#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int w, h;
int map[101][101];
int visit[101];

int main() {
    
    int vertex, con;
    int virus = 0;
    stack<int> s;
    
    scanf("%d", &vertex);
    scanf("%d", &con);
    
    int v1, v2;
    for(int i=0; i<con; i++) {
        scanf("%d %d", &v1, &v2);
        map[v1][v2] = map[v2][v1] = 1;
    }
    
    s.push(1);
    visit[1] = 1;
    
    while(1) {
        int v = s.top();
        s.pop();
        virus++;
        
        visit[v] = 1;
        
        for(int i=1; i<=vertex; i++) {
            if(map[v][i] == 1 && visit[i] != 1) {
                s.push(i);
                visit[i] = 1;
            }
        }
        
        if(s.empty())
            break;
    }
    
    printf("%d", virus-1);
    
    return 0;
}
