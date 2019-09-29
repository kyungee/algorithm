
// https://www.acmicpc.net/problem/15649

#include <vector>
#include <stdio.h>
#include <iostream>
using namespace std;

#define MAX 10

int n, m;
bool visit[MAX];
vector<int> v;

void DFS(int cnt) {
    if(cnt == m) {
        for(int i=0; i<v.size(); i++) {
            printf("%d ", v[i]);
        }
        printf("\n");
        return;
    }
    
    for(int i=1; i<=n; i++) {
        if(visit[i] == true) continue;
        visit[i] = true;
        v.push_back(i);
        DFS(cnt+1);
        v.pop_back();
        visit[i] = false;
    }
}

int main() {
    scanf("%d %d", &n, &m);
    DFS(0);
    
    return 0;
}
