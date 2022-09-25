#pragma once
#include <conio.h>
#include <windows.h>
#include <stdint.h>
#include <time.h> 

#include <string>
#include <iostream>
#include <fstream>
#include <chrono>

#include "FileLoggerSingletone.h"


using namespace std;

class LoggerSingleton
{
public:
	string  sa = "0";
	static LoggerSingleton& geg() 
	{
		static LoggerSingleton instance;
		return instance;
	}

	void __fastcall OpenLogFile(const string& FN);
	void CloseLogFile();
	void __fastcall WriteToLog(const string& str);
	void __fastcall WriteToLog(const string& str, int n);
	void __fastcall WriteToLog(const string& str, double d);

private:
	LoggerSingleton() {}
	LoggerSingleton(const LoggerSingleton& a) = delete;
	LoggerSingleton operator= (const LoggerSingleton&) = delete;

	int numberOfLine = 0;
	string NumberInLog;

	FileLoggerSingletone* wr;
	
};

