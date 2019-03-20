//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 3. 12..
//  Copyright © 2019년 kyungee. All rights reserved.

//  https://www.acmicpc.net/problem/9012

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int num, flag, sum;
    string input;
    string remainder;
    
    scanf("%d", &num);
    cin.ignore(100, '\n');
    
    for(int j=0; j<num; j++){
        flag = sum = 0;
        getline(cin, input, '\n');
        for(int i=0; i<input.size(); i++) {
            if(input[i] == '(')
                sum += 1;
            else if (input[i] == ')')
                sum -= 1;
            
            if(sum < 0) {
                flag = 1;
                break;
            }
        }
        
        if(flag == 0 && sum == 0)
            puts("YES");
        else
            puts("NO");
    }
}
