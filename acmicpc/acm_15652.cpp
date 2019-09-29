
// https://www.acmicpc.net/problem/15652

#include <vector>
#include <stdio.h>
#include <iostream>
using namespace std;

#define MAX 10

int n, m;
bool visit[MAX];
vector<int> v;

void DFS(int idx, int cnt) {
    if(cnt == m) {
        for(int i=0; i<v.size(); i++) {
            printf("%d ", v[i]);
        }
        printf("\n");
        return;
    }
    
    for(int i=idx; i<n; i++) {
        v.push_back(i+1);
        DFS(i, cnt+1);
        v.pop_back();
    }
}

int main() {
    scanf("%d %d", &n, &m);
    DFS(0, 0);
    
    return 0;
}

