//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 4. 26..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// https://www.acmicpc.net/problem/2490

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int input[4];
    
    for(int t=0; t<3; t++) {
        
        int cnt = 0;
        
        for(int i=0; i<4; i++) {
            scanf("%d ", &input[i]);
            if (input[i] == 0) cnt++;
        }
        
        if(cnt == 0)
            printf("E\n");
        else
            printf("%c\n", 'A'+cnt-1);
    }
    
    return 0;
}

