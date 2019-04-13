//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 4. 13..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// https://www.acmicpc.net/problem/4963

#include <iostream>
#include <algorithm>
using namespace std;

int w, h;
int map[50][50];
int visit[50][50];

int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};

void dfs(int x, int y) {
    int _x, _y;
    visit[x][y] = 1;
    
    for(int i=0; i<8; i++) {
        _x = x+dx[i]; _y = y+dy[i];
        if(_x>=h || _x<0 || _y<0 || _y>=w)
            continue;
        if(visit[_x][_y] == 0 && map[_x][_y] == 1)
            dfs(_x, _y);
    }
}

int main() {
    
    while(1) {
        scanf("%d %d", &w, &h);
        if(w==0 && h==0)
            return 0;
        
        for(int i=0; i<h; i++) {
            for(int j=0; j<w; j++) {
                visit[i][j]=0;
                scanf("%d", &map[i][j]);
            }
        }
        
        int islandCnt = 0;
        for(int i=0; i<h; i++) {
            for(int j=0; j<w; j++) {
                if(visit[i][j]==0 && map[i][j]==1) {
                    dfs(i,j);
                    islandCnt++;
                }
            }
        }
        
        printf("%d\n", islandCnt);
        
    }
    
    return 0;
}
