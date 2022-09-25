#pragma once
#include <conio.h>
#include <windows.h>
#include <stdint.h>
#include <time.h> 

#include <string>
#include <iostream>
#include <fstream>
#include <chrono>

//#include "MyTools.cpp"


using namespace std;

class FileLoggerSingletone
{
public:
	static FileLoggerSingletone& geg();
	
	void __fastcall OpenLogFile(const string& FN);

	void CloseLogFile();

	void __fastcall WriteToLog(const string& str);

	void __fastcall WriteToLog(const string& str, int n);

	void __fastcall WriteToLog(const string& str, double d);

private:
	FileLoggerSingletone() {}
	FileLoggerSingletone(const FileLoggerSingletone& a)  = delete;
	FileLoggerSingletone operator= (const FileLoggerSingletone&) = delete;

	ofstream logOut;
};

string GetCurDateTime();