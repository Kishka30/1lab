#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

//Проверка на палиндром
int isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        //Пропускаем неалфавитные символы
        while (left < right && !isalpha(str[left])) {
            left++;
        }
        while (left < right && !isalpha(str[right])) {
            right--;
        }

        //Сравниваем символы в одном регистре
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Не палиндром
        }
        left++;
        right--;
    }
    return 1; //Палиндром
}

//комени для проверки

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    char str[100];
    int continueProgram = 1; //Чтобы несколько сразу проверять

    while (continueProgram) {
        printf("Введите строку (или 0 для выхода): ");
        fgets(str, sizeof(str), stdin);

        //Удаляем символ новой строки, если он присутствует
        str[strcspn(str, "\n")] = 0;

        //Если 0 выход
        if (strcmp(str, "0") == 0) {
            continueProgram = 0;
            continue;
        }

        if (isPalindrome(str)) {
            printf("Строка является палиндромом.\n");
        } else {
            printf("Строка не является палиндромом.\n");
        }
    }

    printf("Программа завершена.\n");
    return 0;
}
