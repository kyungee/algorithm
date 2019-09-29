
// https://www.acmicpc.net/problem/11650

#include <algorithm>
#include <vector>
#include <stdio.h>
#include <iostream>
using namespace std;

vector<pair<int, int>> v;

int main() {
    int n;
    int a, b;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        v.push_back({a, b});
    }
    
    sort(v.begin(), v.end());
    
    for(int i=0; i<v.size(); i++) {
        printf("%d %d\n", v[i].first, v[i].second);
    }
    
    return 0;
}
