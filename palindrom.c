#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

// Функция для проверки, является ли строка палиндромом
int isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // Пропускаем неалфавитные символы
        while (left < right && !isalpha(str[left])) {
            left++;
        }
        while (left < right && !isalpha(str[right])) {
            right--;
        }

        // Сравниваем символы, приводя их к одному регистру
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Не палиндром
        }
        left++;
        right--;
    }
    return 1; // Палиндром
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");

    char str[100];
    int continueProgram = 1;

    while (continueProgram) {
        printf("Введите строку (или 0 для выхода): ");
        fgets(str, sizeof(str), stdin);

        // Удаляем символ новой строки, если он присутствует
        str[strcspn(str, "\n")] = 0;

        // Проверяем, хочет ли пользователь выйти
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
