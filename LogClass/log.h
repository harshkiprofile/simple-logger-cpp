#pragma once

class Log
{
public:
	int LogLevelWarning = 0;
	int LogLevelError = 1;
	int LogLevelInfo = 2;
private:
	int LogLevel = 2;
public:
	void setLevel(int LogLevel);
	
	void Warn(const char* message);

	void Error(const char* message);

	void Info(const char* message);
};