#include <iostream>
#include <string>

int main() {
    std::string input = "For example: apple, banana, meat.";
    std::string cleaned = ""; // Создаем пустую строку для результата

    // Проходим по каждому символу в строке input
    for (int i = 0; i < input.length(); i++) {
        char c = input[i]; // Берем текущий символ

        // Если символ - буква или пробел, добавляем его в cleaned
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ') {
            cleaned += c; // Добавляем символ в очищенную строку
        }
    }

    std::cout << cleaned << std::endl; // Выводим очищенную строку

    return 0;
}
//hello
