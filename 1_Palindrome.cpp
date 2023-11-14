#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string word) {
    string reversed_word;
    for(int i = word.length()-1; i>=0; i--){
        reversed_word += word[i];
    }
    if(word == reversed_word) return true;
    else return false;
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    if (isPalindrome(word)) {
        cout << word << " is a palindrome." << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }
    return 0;
}
