#include "LoggerSingleton.h"

void __fastcall LoggerSingleton::OpenLogFile(const string& FN)
{
	wr->geg().OpenLogFile(FN);
	
}

void LoggerSingleton::CloseLogFile()
{
	wr->geg().CloseLogFile();
}

void __fastcall LoggerSingleton::WriteToLog(const string& str)
{
	NumberInLog = to_string(++LoggerSingleton::numberOfLine) + "\t" + str;
	wr->geg().WriteToLog(NumberInLog);
}

void __fastcall LoggerSingleton::WriteToLog(const string& str, int n)
{
	NumberInLog = to_string(++LoggerSingleton::numberOfLine) + "\t" + str;
	wr->geg().WriteToLog(NumberInLog , n);
}

void __fastcall LoggerSingleton::WriteToLog(const string& str, double d)
{
	NumberInLog = to_string(++LoggerSingleton::numberOfLine) + "\t" + str;
	wr->geg().WriteToLog(NumberInLog , d);
}
