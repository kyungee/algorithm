//
//  test.cpp
//
//  Created by 김경이 on 2019. 7. 22..
//  Copyright © 2019년 김경이. All rights reserved.
//

#include <stdio.h>

int main() {
    int length = 0;
    char s[102];
    
    scanf("%[^\n]", s);
    while(s[length] != 0)
        length++;
    
    for(int i=0; i<length; i++) {
        if(s[i] == ' ' || (s[i] >= '0' && s[i] <='9')) {
            printf("%c", s[i]);
            continue;
        }
        if( ('a'<=s[i] && s[i]<='m') || ('A'<=s[i] && s[i]<='M') )
            s[i] += 13;
        else if ( ('n'<=s[i] && s[i]<='z') || ('N'<=s[i] && s[i]<='Z') )
            s[i] -= 13;
        
        printf("%c", s[i]);
    }
    
}
