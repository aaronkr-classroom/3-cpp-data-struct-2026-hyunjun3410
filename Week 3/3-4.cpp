//3-4
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 
#include <ios>

using namespace std;

int main(void) {
    cout << "단어들을 입력하세요. (종료: Ctrl+Z): " << endl;

    vector<string> words;
    string a;
    

    while (cin >> a) {
        words.push_back(a);
    }


    if (words.empty()) {
        cout << "입력된 단어 없음." << endl;
        return 1;
    }
 

    string::size_type max_len = words[0].size();
    string::size_type min_len = words[0].size();
  

    for (size_t i = 1; i < words.size(); ++i) {
        string::size_type current_len = words[i].size();

        if (current_len > max_len) {
            max_len = current_len;
        }
        if (current_len < min_len) {
            min_len = current_len;
        }
    }
    

    cout << "가장 긴 단어 길이: " << max_len << endl;
    cout << "가장 짧은 단어 길이: " << min_len << endl;

    return 0;
}