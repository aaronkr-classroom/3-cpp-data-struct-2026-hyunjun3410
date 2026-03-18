// 3-3 입력에서 각 단어가 등장한 횟수를 세는 프로그램을 작성해보세요.

#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
    cout << "단어(또는 숫자)를 입력하세요 (작성 후 CTRL + Z): " << endl;

    vector<string> words;
    string a;

    // 1. 데이터를 입력받아 저장 
    while (cin >> a) {
        words.push_back(a);
    }

    // 2. 데이터가 없는 경우  
    if (words.size() == 0) {
        cout << "입력된 데이터가 없습니다." << endl;
        return 1;
    }

     
    sort(words.begin(), words.end());

    // 3. 단어 수 계산 및 출력
    int count = 1;
    string current_word = words[0];

    for (size_t i = 1; i < words.size(); ++i) {
        if (words[i] == current_word) {
            count++; // 이전과 같은 데이터면 카운트 증가
        }
        else {
            // 다른 데이터가 나오면 이전 데이터의 결과 출력 
            cout << current_word << ": " << count << "번" << endl;
            current_word = words[i];
            count = 1; // 카운트 초기화
        }
    }

    // 마지막 데이터 출력 
    cout << current_word << ": " << count << "번" << endl;

    return 0;
}