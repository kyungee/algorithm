//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 3. 24..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// https://www.acmicpc.net/problem/10828

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n;
    string input;
    vector<string> stack;
    
    scanf("%d ", &n);
    
    for(int i=0; i<n; i++) {
        getline(cin, input, '\n');
        
        if(input.find("push") != string::npos) {
            input.erase(0, 5);
            stack.push_back(input);
        } else if(input.find("pop") != string::npos) {
            if(stack.size() == 0) {
                puts("-1");
                continue;
            }
            printf("%s\n", stack.back().c_str());
            stack.pop_back();
        } else if(input.find("top") != string::npos) {
            if(stack.size() == 0) {
                puts("-1");
                continue;
            }
            printf("%s\n", stack.back().c_str());
        } else if(input.find("size") != string::npos) {
            printf("%lu\n", stack.size());
        } else if(input.find("empty") != string::npos) {
            if(stack.size() == 0)
                puts("1");
            else
                puts("0");
        }
    }
    
    return 0;
}
