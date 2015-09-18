/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 18 Сентябрь 2015 г., 12:01
 */

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line;
	while (getline(stream, line)) {
		cout << line << endl;
	}
	return 0;
}

