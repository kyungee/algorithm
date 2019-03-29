//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 3. 29..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// [S/W 문제해결 기본] 1일차 - 최빈수 구하기

#include <iostream>
using namespace std;

int main() {
    
    int t, t_num;
    int score, max, m_idx;
    int arr[102] = {0,};
    
    scanf("%d ", &t);
    
    for(int ti=0; ti<t; ti++) {
        scanf("%d ", &t_num);
        int arr[102] = {0,};
        max = 0;
        
        for(int i=0; i<1000; i++) {
            scanf("%d ", &score);
            arr[score]++;
        }
        
        for(int i=100; i>=0; i--) {
            if(arr[i]>max) {
                max = arr[i];
                m_idx = i;
            }
        }
        
        printf("#%d %d\n", t_num, m_idx);
    }
    
    return 0;
}
