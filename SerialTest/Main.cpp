/*
 * Main.cpp
 *
 *  Created on: Dec 21, 2015
 *      Author: Administrator
 */
#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include <string>
#include "SerialClass.h"

using namespace std;

int main(int argc, _TCHAR* argv[]) {
	printf("Welcome to the serial test app.\n\n");
	Serial* serialPort = new Serial("\\\\.\\COM2");
	if(serialPort->IsConnected()) {
		printf("Connected your COM port.");
	}
	char receivedData[256] = ""; //have to pre-allocate memory
	int dataLength = 256;
	int readResult = 0;
	while(serialPort->IsConnected()) {
		readResult = serialPort->ReadData(receivedData, dataLength);
		printf("Bytes read: (-1 means no data) %i\n", readResult);
		std::string test(receivedData);
		printf("%s", receivedData);
		test = "";
		Sleep(500);
	}
	system("pause");
	return 0;
}
