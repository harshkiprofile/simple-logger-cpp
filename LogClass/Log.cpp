#include "log.h"
#include <iostream>

	void Log::setLevel(int LogLevel) {
		this->LogLevel = LogLevel;
	}

	void Log::Warn(const char* message) {
		if (LogLevel >= LogLevelWarning)
			std::cout << "[Warning]: " << message << std::endl;
	}

	void Log::Error(const char* message) {
		if (LogLevel >= LogLevelError)
			std::cout << "[Error]: " << message << std::endl;
	}

	void Log::Info(const char* message) {
		if (LogLevel >= LogLevelInfo)
			std::cout << "[Info]: " << message << std::endl;
	}
