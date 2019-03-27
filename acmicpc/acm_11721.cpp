
//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 3. 21..
//  Copyright © 2019년 kyungee. All rights reserved.

//  https://www.acmicpc.net/problem/11721

#include <iostream>
using namespace std;

int main()
{
    string input;
    getline(cin, input, '\n');
    
    for(int i=1; i<=input.size(); i++) {
        printf("%c", input[i-1]);
        if(i%10 == 0) {
            puts("");
        }
    }
    
    return 0;
}
