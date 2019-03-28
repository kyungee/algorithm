
#include <iostream>
using namespace std;

int main() {
    
    int n;
    int next, tmp, cnt=0;
    scanf("%d", &n);
    
    next = n;
    
    while(1) {
        cnt++;
        tmp = (next/10 + next%10) % 10;
        next = (next%10*10) + tmp;
        
        if(next == n) {
            printf("%d", cnt);
            break;
        }
    }
    
    return 0;
}
