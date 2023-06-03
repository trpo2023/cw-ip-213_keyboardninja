#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>
#include "Lastfile.h"

void replaceCharacters(wchar_t* text)
{
    int length = wcslen(text);
    for (int i = 0; i < length; i++) {
        switch (text[i]) {
        case L'q':
            text[i] = L'й';
            break;
        case L'w':
            text[i] = L'ц';
            break;
        case L'e':
            text[i] = L'у';
            break;
        case L'r':
            text[i] = L'к';
            break;
        case L't':
            text[i] = L'е';
            break;
        case L'y':
            text[i] = L'н';
            break;
        case L'u':
            text[i] = L'г';
            break;
        case L'i':
            text[i] = L'ш';
            break;
        case L'o':
            text[i] = L'щ';
            break;
        case L'p':
            text[i] = L'з';
            break;
        case L'[':
            text[i] = L'х';
            break;
        case L']':
            text[i] = L'ъ';
            break;
        case L'a':
            text[i] = L'ф';
            break;
        case L's':
            text[i] = L'ы';
            break;
        case L'd':
            text[i] = L'в';
            break;
        case L'f':
            text[i] = L'а';
            break;
        case L'g':
            text[i] = L'п';
            break;
        case L'h':
            text[i] = L'р';
            break;
        case L'j':
            text[i] = L'о';
            break;
        case L'k':
            text[i] = L'л';
            break;
        case L'l':
            text[i] = L'д';
            break;
        case L';':
            text[i] = L'ж';
            break;
        case L'\'':
            text[i] = L'э';
            break;
        case L'z':
            text[i] = L'я';
            break;
        case L'x':
            text[i] = L'ч';
            break;
        case L'c':
            text[i] = L'с';
            break;
        case L'v':
            text[i] = L'м';
            break;
        case L'b':
            text[i] = L'и';
            break;
        case L'n':
            text[i] = L'т';
            break;
        case L'm':
            text[i] = L'ь';
            break;
        case L',':
            text[i] = L'б';
            break;
        case L'.':
            text[i] = L'ю';
            break;
        case L'/':
            text[i] = L'.';
            break;
        case L'Q':
            text[i] = L'Й';
            break;
        case L'W':
            text[i] = L'Ц';
            break;
        case L'E':
            text[i] = L'У';
            break;
        case L'R':
            text[i] = L'К';
            break;
        case L'T':
            text[i] = L'Е';
            break;
        case L'Y':
            text[i] = L'Н';
            break;
        case L'U':
            text[i] = L'Г';
            break;
        case L'I':
            text[i] = L'Ш';
            break;
        case L'O':
            text[i] = L'Щ';
            break;
        case L'P':
            text[i] = L'З';
            break;
        case L'{':
            text[i] = L'Х';
            break;
        case L'}':
            text[i] = L'Ъ';
            break;
        case L'A':
            text[i] = L'Ф';
            break;
        case L'S':
            text[i] = L'Ы';
            break;
        case L'D':
            text[i] = L'В';
            break;
        case L'F':
            text[i] = L'А';
            break;
        case L'G':
            text[i] = L'П';
            break;
        case L'H':
            text[i] = L'Р';
            break;
        case L'J':
            text[i] = L'О';
            break;
        case L'K':
            text[i] = L'Л';
            break;
        case L'L':
            text[i] = L'Д';
            break;
        case L':':
            text[i] = L'Ж';
            break;
        case L'"':
            text[i] = L'Э';
            break;
        case L'Z':
            text[i] = L'Я';
            break;
        case L'X':
            text[i] = L'Ч';
            break;
        case L'C':
            text[i] = L'С';
            break;
        case L'V':
            text[i] = L'М';
            break;
        case L'B':
            text[i] = L'И';
            break;
        case L'N':
            text[i] = L'Т';
            break;
        case L'M':
            text[i] = L'Ь';
            break;
        case L'<':
            text[i] = L'Б';
            break;
        case L'>':
            text[i] = L'Ю';
            break;
        case L'?':
            text[i] = L',';
            break;
        default:
            break;
        }
    }
}

void createFile(const char* filename, const wchar_t* text)
{
    FILE* file = fopen(filename, "a, ccs=UTF-8");
    if (file != NULL) {
        fwprintf(file, L"%ls\n", text);
        fclose(file);
        wprintf(L"Текст успешно добавлен в файл '%s'.\n", filename);
    } else {
        wprintf(L"Ошибка при открытии файла '%s'.\n", filename);
    }
}
