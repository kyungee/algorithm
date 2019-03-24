//
//  main.cpp
//  programming
//
//  Created by kyungee on 2019. 3. 24..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// https://www.acmicpc.net/problem/10845

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n;
    string input;
    vector<string> queue;
    
    scanf("%d ", &n);
    
    for(int i=0; i<n; i++) {
        getline(cin, input, '\n');
        
        if(input.find("push") != string::npos) {
            input.erase(0, 5);
            queue.push_back(input);
        } else if(input.find("pop") != string::npos) {
            if(queue.size() == 0) {
                puts("-1");
                continue;
            }
            printf("%s\n", queue.front().c_str());
            queue.erase(queue.begin());
        } else if(input.find("size") != string::npos) {
            printf("%lu\n", queue.size());
        } else if(input.find("empty") != string::npos) {
            if(queue.size() == 0)
                puts("1");
            else
                puts("0");
        }else if(input.find("front") != string::npos) {
            if(queue.size() == 0) {
                puts("-1");
                continue;
            }
            printf("%s\n", queue.front().c_str());
        } else if(input.find("back") != string::npos) {
            if(queue.size() == 0) {
                puts("-1");
                continue;
            }
            printf("%s\n", queue.back().c_str());
        }
    }
    
    return 0;
}
