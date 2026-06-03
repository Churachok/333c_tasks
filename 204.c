// Файл: myheader.h
#pragma once

// Или эквивалентно:
/*
#ifndef MYHEADER_H
#define MYHEADER_H

// содержимое заголовочного файла

#endif
*/

#include <stdio.h>

#define VERSION "1.0"

void hello() {
    printf("Hello from header!\n");
}