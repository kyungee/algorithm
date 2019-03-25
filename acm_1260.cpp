//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 3. 25..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// https://www.acmicpc.net/problem/1260

#include <iostream>
#include <vector>
using namespace std;

int n, m, v;
int x, y;
int** map;
int* visit;

void dfs(int vertex) {
    printf("%d ", vertex);
    visit[vertex] = 1;
    
    for(int i=1; i<=n; i++) {
        if(map[vertex][i]==1 && visit[i]!=1) {
            dfs(i);
        }
    }
}

void bfs(int vertex) {
    vector<int> q;
    
    q.push_back(vertex);
    visit[vertex] = 2;
    
    while(!q.empty()) {
        int cur = q.front();
        printf("%d ", cur);
        q.erase(q.begin());
        for(int i=1; i<=n; i++) {
            if(map[cur][i]==1 && visit[i]!=2) {
                visit[i] = 2;
                q.push_back(i);
            }
        }
    }
}


int main() {
    
    scanf("%d %d %d", &n, &m, &v);
    
    visit = new int[n+1];
    map = new int*[n+1];
    for(int i=1; i<=n; i++) {
        map[i] = new int[n+1];
    }
    
    for(int i=0; i<m; i++) {
        scanf("%d %d", &x, &y);
        map[x][y] = map[y][x] = 1;
    }
    
    dfs(v);
    puts("");
    bfs(v);
    
    return 0;
}
