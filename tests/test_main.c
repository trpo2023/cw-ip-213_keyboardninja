#include <stdio.h>
#include <ctest.h>
#include <wchar.h>
#include "/home/maxim/cw-ip-213_keyboardninja/sources/Lastfile.h"

CTEST(replaceCharacters_test, test1)
{
    wchar_t text[] = L"qwerty";
    wchar_t expected[] = L"йцукеу";
    replaceCharacters(text);
    ASSERT_EQUAL_WSTR(expected, text);
}

CTEST(replaceCharacters_test, test2)
{
    wchar_t text[] = L"Hello, World!";
    wchar_t expected[] = L"Hello, World!";
    replaceCharacters(text);
    ASSERT_EQUAL_WSTR(expected, text);
}

CTEST(createFile_test, test1)
{
    const char* filename = "test_output.txt";
    const wchar_t* text = L"Привет, мир!";
    createFile(filename, text);

    FILE* file = fopen(filename, "r, ccs=UTF-8");
    ASSERT_NOT_NULL(file);

    wchar_t readText[100];
    fgetws(readText, sizeof(readText) / sizeof(wchar_t), file);
    fclose(file);

    ASSERT_EQUAL_WSTR(text, readText);
}

CTEST(createFile_test, test2)
{
    const char* filename = "test_output.txt";
    const wchar_t* text = L"";
    createFile(filename, text);

    FILE* file = fopen(filename, "r, ccs=UTF-8");
    ASSERT_NOT_NULL(file);

    wchar_t readText[100];
    fgetws(readText, sizeof(readText) / sizeof(wchar_t), file);
    fclose(file);

    ASSERT_EQUAL_WSTR(text, readText);
}

int main(int argc, const char** argv)
{
    int result = ctest_main(argc, argv);
    return result;
}

