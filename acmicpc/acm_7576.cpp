//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 4. 13..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// https://www.acmicpc.net/problem/7576

#include <iostream>
#include <queue>
using namespace std;

int m, n;
int map[1001][1001];
int visit[1001][1001];
int day = 0;
queue<pair<int, int>> q;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

void bfs() {
    
    int _x, _y;
    
    while(1) {
        int x = q.front().first;
        int y = q.front().second;
        
        for(int i=0; i<4; i++) {
            _x = x+dx[i]; _y = y+dy[i];
            
            if(_x<0 || _y<0 || _x>=n || _y>=m)
                continue;
            if(map[_x][_y] == 1 || map[_x][_y] == -1)
                continue;
            
            map[_x][_y] = 1;
            visit[_x][_y] = visit[x][y]+1;
            if(day<visit[_x][_y])
                day = visit[_x][_y];
            q.push(pair<int,int>(_x,_y));
        }
        
        q.pop();
        if(q.empty())
            return;
    }
    
}

int main() {
    
    int check = 1;
    
    scanf("%d %d", &m, &n);
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++)
            scanf("%d ", &map[i][j]);
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(map[i][j] == 0 || map[i][j] == -1)
                check=0;
            if(map[i][j] == 1)
                q.push(pair<int,int>(i,j));
        }
    }
    
    if(check != 0) {
        printf("0");
        return 0;
    }
    
    bfs();
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(map[i][j] == 0) {
                printf("-1");
                return 0;
            }
        }
    }
    
    printf("%d", day);
    
    return 0;
}
