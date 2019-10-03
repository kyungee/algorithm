
// https://www.acmicpc.net/problem/1931

#include <algorithm>
#include <vector>
#include <stdio.h>
#include <iostream>
using namespace std;

int n;
int cnt;
vector<pair<int,int>> v;

int main() {
    int a, b, last=0;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        v.push_back({b, a});
    }
    
    sort(v.begin(), v.end());
    
    for(int i=0; i<n; i++) {
        if(v[i].second >= last) {
            cnt++;
            last = v[i].first;
        }
    }
    
    printf("%d", cnt);
    
    return 0;
}
