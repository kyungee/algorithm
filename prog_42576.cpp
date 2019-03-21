//
//  prog_42576.cpp
//  programming
//
//  Created by kyungee on 2019. 3. 14..
//  Copyright © 2019년 kyungee. All rights reserved.
//

// https://programmers.co.kr/learn/courses/30/lessons/42576

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    vector<string>::iterator iter;
    
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end(), greater<string>());
    
    for(iter=completion.begin(); iter!=completion.end();) {
        if(iter->compare(participant.back()) != 0)
            break;
        
        participant.pop_back();
        iter++;
    }
    
    answer = participant.back();
    return answer;
}

/* 타 풀이
 string solution(vector<string> participant, vector<string> completion) {
 string answer = "";
 sort(participant.begin(), participant.end());
 sort(completion.begin(), completion.end());
 for(int i=0;i<completion.size();i++)
 {
 if(participant[i] != completion[i])
 return participant[i];
 }
 return participant[participant.size() - 1];
 //return answer;
 }
 */
