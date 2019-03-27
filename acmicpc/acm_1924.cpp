
//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 3. 22..
//  Copyright © 2019년 kyungee. All rights reserved.

//  https://www.acmicpc.net/problem/1924

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int sum = 0;
    
    scanf("%d %d ", &x, &y);
    
    for(int i=1; i<x; i++) {
        if(i<=7)
            sum += 30+(i%2);
        else
            sum += 30+((i+1)%2);
    }
    
    if(x>=3)
        sum -= 2;
    
    sum += y-1;
    
    switch(sum%7) {
        case 0: printf("MON"); break;
        case 1: printf("TUE"); break;
        case 2: printf("WED"); break;
        case 3: printf("THU"); break;
        case 4: printf("FRI"); break;
        case 5: printf("SAT"); break;
        case 6: printf("SUN"); break;
    }
    
    return 0;
}

