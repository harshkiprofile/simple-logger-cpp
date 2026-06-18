#include "log.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {

	if (argc <= 3 || !strcmp(argv[1], "-h") || !strcmp(argv[1], "--help"))
		std::cout << "Please pass at least 3 arguments"
		<< std::endl << std::endl
		<< "./log.exe -l info \"<message>\" " << std::endl
		<< "./log.exe -l warn \"<message>\" " << std::endl
		<< "./log.exe -l error \"<message>\" " << std::endl
		<< std::endl;

	else if (strcmp(argv[1], "-l"))
		std::cout << "\nFirst argument to program must be -l" << std::endl
		<< "You may run ./log.exe -h to print help message\n\n";

	else if (!strcmp(argv[1], "-l"))
	{
		if (!strcmp(argv[2], "info")) {
			Log log; log.Info(argv[3]);
		}
		else if (!strcmp(argv[2], "error")) {
			Log log; log.Error(argv[3]);
		} 
		else if (!strcmp(argv[2], "warn")) {
			Log log; log.Warn(argv[3]);
		} 
		else {
			std::cout << "\nUnknow log level!! Please check help menu via -h or --help\n\n";
		}
	}
}

