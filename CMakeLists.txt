cmake_minimum_required(VERSION 3.12)
project(keyboard_ninja)

# Укажите исходные файлы вашего проекта
set(SOURCES
    /home/maxim/cw-ip-213_keyboardninja/sources/Lastfile.c
    /home/maxim/cw-ip-213_keyboardninja/sources/main.c
    /home/maxim/cw-ip-213_keyboardninja/sources/Lastfile.h
    )

# Создание исполняемого файла
add_executable(kbn ${SOURCES})

# Указание путя к заголовочным файлам
target_include_directories(kbn PUBLIC /home/maxim/cw-ip-213_keyboardninja/)
