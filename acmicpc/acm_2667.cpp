//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 4. 13..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// https://www.acmicpc.net/problem/2667

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int n;
int map[26][26];
int visit[26][26];
int totalCnt = 0;
vector<int> cnt;
queue<pair<int, int>> q;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

void bfs() {
    
    int _x, _y, _cnt=1;
    totalCnt++;
    
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        
        for(int i=0; i<4; i++) {
            _x = x+dx[i]; _y = y+dy[i];
            
            if(_x<0 || _y<0 || _x>n || _y>n)
                continue;
            if(map[_x][_y] == 0 || visit[_x][_y] == 1)
                continue;
            
            map[_x][_y] = 0;
            visit[_x][_y] = 1;
            _cnt++;
            
            q.push(pair<int,int>(_x,_y));
        }
        
        q.pop();
    }
    
    cnt.push_back(_cnt);
}

int main() {
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            scanf("%1d", &map[i][j]);
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(visit[i][j] !=1 && map[i][j] == 1) {
                q.push(pair<int,int>(i,j));
                visit[i][j] = 1;
                bfs();
            }
        }
    }
    
    sort(cnt.begin(), cnt.end());
    printf("%d\n", totalCnt);
    for(int i=0; i<totalCnt; i++) {
        printf("%d\n", cnt[i]);
    }
    
    return 0;
}
