#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
bool isVowel(char c) {
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; i < 11; i++) {
        if (c == vowels[i]) {
            return true;
        }
    }
    return false;
}

int countVowels(string text) {
    int count = 0;
    for (int i = 0; i < text.length(); i++) {
        if (isVowel(text[i])) {
            count++;
        }
    }
    return count;
}

int countFixedChars(string text) {
    int count = 0;
    int len = text.length();
    for (int i = 0; i < len; i++) {
        if (text[i] == text[len - i - 1]) {
            count++;
        }
    }
    return count;
}
int main()  
{
	string text;
	cout << "Input your text: " << endl;
	getline(cin, text);
	cout << "Your text: \n" << text << endl;
    cout << "Number of vowels: " << countVowels(text) << endl;
    reverse(text.begin(), text.end());
    cout << "Inverted text: \n" << text << endl;
    cout << "Number of symbols, that after inverting don't change their position: " << countFixedChars(text) << endl;

    return 0;
}
