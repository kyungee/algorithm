//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 3. 12..
//  Copyright © 2019년 kyungee. All rights reserved.

//  https://www.acmicpc.net/problem/2839

#include <iostream>
using namespace std;

int main()
{
    int input, result;
    
    scanf("%d", &input);
    
    if(input==4 || input==7) {
        printf("-1");
        return 0;
    }
    
    result = input/5;
    switch(input%5) {
        case 0: printf("%d", result); break;
        case 1: case 3:
            printf("%d", result+1); break;
        case 2: case 4:
            printf("%d", result+2); break;
    }
    
    return 0;
}


