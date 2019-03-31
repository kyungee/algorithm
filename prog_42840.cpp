
// 42840번: 모의고사
// https://programmers.co.kr/learn/courses/30/lessons/42840


#include <string>
#include <vector>

using namespace std;

int p1[5] = {1, 2, 3, 4, 5};
int p2[8] = {2, 1, 2, 3, 2, 4, 2, 5};
int p3[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int count[3] = {0,};
    int max = 0;
    
    for(int i=0; i<answers.size(); i++) {
        if(p1[i%5] == answers[i]) 
            count[0]++;
        if(p2[i%8] == answers[i])
            count[1]++;
        if(p3[i%10] == answers[i])
            count[2]++;
    }
    
    for(int i=0; i<3; i++) {
        if(max < count[i])
            max = count[i];
    }
    
    for(int i=0; i<3; i++) {
        if(max == count[i])
            answer.push_back(i+1);
    }
    
    return answer;
}

