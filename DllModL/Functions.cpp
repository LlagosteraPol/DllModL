#pragma once
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>
#include <windows.h>

#include "Functions.h"

void helloWorld()
{
    printf("Hello world!\n");
}


bool zeroToTrue(int num)
{
    if (num == 0) return true;
    else return false;
}

double multiplyDoublesBy(double num1, double num2)
{
    return num1 * num2;
}

int multiplyIntegersBy(int num1, int num2)
{
    return num1 * num2;
}

long multiplyLongsBy(long num1, long num2)
{
    return num1 * num2;
}

int nLetters(const char* text)
{
    std::string text_st = text;
    return text_st.size();
}

long alternativeMultiplyDoublesBy(double num1, double num2)
{
    return num1 * num2;
}

int createFile(const char* filename, const char* input)
{
    std::string filename_str = filename;
    std::string input_str = input;

    std::fstream file;
    file.open(filename_str + ".txt", std::ios_base::out);

    if (!file.is_open())
    {
        std::cout << "Unable to open the file.\n";
        return -1;
    }

    file << input_str;

    file.close();
    return 0;
}



void CppFunc(void)
{
    puts("CppFunc");
}

void MyClass::func(void)
{
    puts("MyClass.func()");
}

int MyClass::calcNum(int x) {
    return x + 9999;
}

void MyClass::printNum() {
    printf("%d\n", this->calcNum(1));
}
