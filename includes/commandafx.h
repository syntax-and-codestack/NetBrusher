//commandafx.h
#ifndef COMMANDAFX_H
#define COMMANDAFX_H

#include <string>

void * qmalloc(std::size_t Size);
void * Sysprintf(const char * text, ...);
void * SysSprintf(char * buff, const char * text, int id);
void * SysCmdLine(const char * LPSTR);

typedef char SYSCHAR;

#define WINAPI __stdcall

#define WINICON 
#define HWND 
#define WINCURSOR

#endif