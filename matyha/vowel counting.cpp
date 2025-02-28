#include <iostream>
#include <locale>

using namespace std;

int countEnglishVowels(const wstring& str) {
    wstring vowels = L"aeiouyAEIOUY";
    int count = 0;
    for (wchar_t ch : str) {
        if (vowels.find(ch) != wstring::npos) count++;
    }
    return count;
}

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");

    wcout << L"Enter a string: ";
    wstring input;
    getline(wcin, input);

    wcout << L"English vowel count: " << countEnglishVowels(input) << endl;
    return 0;
}
