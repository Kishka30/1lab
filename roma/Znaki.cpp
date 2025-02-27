#include <stdio.h>
#include <ctype.h>

void remove_punctuation(const char *input, char *output) {
    while (*input) {
        // проверяем какой символ перед нами
        if (isalnum((unsigned char)*input) || isspace((unsigned char)*input)) {
            *output++ = *input; // копирую символ в выходную строку
        }
        input++; // переходим к след символу
    }
    *output = ' '; // пустой символ для конца строки
}

int main() {
    const char *input_string = "Hello, world! For example: apple, banana, meat.";
    char output_string[300]; 

    remove_punctuation(input_string, output_string);

    printf("Исходная строка: %s\n", input_string);
    printf("Строка без знаков препинания: %s\n", output_string);

    return 0;
}
