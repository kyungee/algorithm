
// https://www.acmicpc.net/problem/15656

#include <vector>
#include <algorithm>
#include <stdio.h>
#include <iostream>
using namespace std;

int n, m;
int arr[10];
vector<int> v;

void DFS(int cnt) {
    if(cnt == m) {
        for(int i=0; i<v.size(); i++) {
            printf("%d ", v[i]);
        }
        printf("\n");
        return;
    }
    
    for(int i=0; i<n; i++) {
        v.push_back(arr[i]);
        DFS(cnt+1);
        v.pop_back();
    }
    
}

int main() {
    scanf("%d %d", &n, &m);
    
    for(int i=0; i<n; i++) {
        scanf("%d ", &arr[i]);
    }
    
    sort(arr, arr+n);
    DFS(0);
    
    return 0;
}
