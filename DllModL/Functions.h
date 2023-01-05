#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#ifdef __cplusplus
extern "C" {
#endif

    #ifdef BUILDING_FUNCTIONS
        #define FUNCTIONS __declspec(dllexport)
    #else
        #define FUNCTIONS __declspec(dllimport)
    #endif

    //NOTE: __stdcall, to run with Win32 
    FUNCTIONS void helloWorld();

    FUNCTIONS bool zeroToTrue(int num);

    FUNCTIONS double multiplyDoublesBy(double num1, double num2);

    FUNCTIONS int multiplyIntegersBy(int num1, int num2);

    FUNCTIONS long multiplyLongsBy(long num1, long num2);

    FUNCTIONS int nLetters(const char* text);

    FUNCTIONS int createFile(const char* filename, const char* input);

#ifdef __cplusplus
}
#endif

// NOTE: Function with personal 'extern' definition
extern "C" __declspec(dllexport) long alternativeMultiplyDoublesBy(double num1, double num2);

// NOTE: this function is not declared extern "C"
void FUNCTIONS CppFunc(void);

// NOTE: this class must not be declared extern "C"
// NOTE: The classes doesn't load in ModL since is not OO (Object Oriented)
class FUNCTIONS MyClass
{
public:
    MyClass() {};
    virtual ~MyClass() {};
    void func(void);
    void printNum();

private:
    int calcNum(int x);
};

#endif  // FUNCTIONS_H
