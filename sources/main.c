#include <stdio.h>
#include <locale.h>
#include <stddef.h>
#include <wchar.h>
#include "Lastfile.h"

int main()
{
    setlocale(LC_ALL, ""); // Установка локали для поддержки широких символов

    wchar_t text[100];

    while (1) {
        wprintf(L"Введите текст (для выхода введите 'exit'): ");
        fgetws(text, sizeof(text) / sizeof(wchar_t), stdin);
        text[wcslen(text) - 1] = L'\0';

        if (wcscmp(text, L"exit") == 0) {
            wprintf(L"Выход из программы.\n");
            break;
        }

        replaceCharacters(text);

        wprintf(L"Преобразованный текст: %ls\n", text);

        createFile("output.txt", text);
    }

    return 0;
}
