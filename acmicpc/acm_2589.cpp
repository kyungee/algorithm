//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 4. 13..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// BFS, 보물섬
// https://www.acmicpc.net/problem/2589

#include <iostream>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;

int l, w;
char map[51][51];
int visit[51][51];
int maxHour = 0;
queue<pair<int, int>> q;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

void bfs() {
    
    int _x, _y;
    _x=_y=0;
    
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        
        for(int i=0; i<4; i++) {
            _x = x+dx[i]; _y = y+dy[i];
            
            if(_x<0 || _y<0 || _x>=l || _y>=w)
                continue;
            if(map[_x][_y] == 'W' || visit[_x][_y] != 0)
                continue;
            
            visit[_x][_y] = visit[x][y]+1;
            if(visit[_x][_y] > maxHour)
                maxHour = visit[_x][_y];
            
            q.push(pair<int,int>(_x,_y));
        }
        
        q.pop();
    }
    
}

int main() {
    
    scanf("%d %d ", &l, &w);
    
    for(int i=0; i<l; i++) {
        for(int j=0; j<w; j++)
            scanf("%c ", &map[i][j]);
    }
    
    for(int i=0; i<l; i++) {
        for(int j=0; j<w; j++) {
            if(map[i][j] == 'L') {
                for(int ii=0; ii<l; ii++){
                    for(int jj=0; jj<w; jj++)
                        visit[ii][jj] = 0;
                }
                
                q.push(pair<int,int>(i,j));
                bfs();
            }
        }
    }
    
    printf("%d", maxHour);
    
    return 0;
}
