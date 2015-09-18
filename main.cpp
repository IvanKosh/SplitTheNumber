/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 18 Сентябрь 2015 г., 12:01
 */

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line;
	short i, j;
	int num;
	while (getline(stream, line)) {
		i = line.length();
		while (true) {
			if (line[i] == '+' || line[i] == '-') {
				break;
			}
			i--;
		}
		
		j = i;
		while (true) {
			if (line[j] == ' ') break;
			j--;
		}
		
		if (line[i] == '+') {
			cout << atoi(line.substr(0, i-j-1).c_str()) + atoi(line.substr(i-j-1, j-i+j+1).c_str()) << endl;
		}
		else {
			cout << atoi(line.substr(0, i-j-1).c_str()) - atoi(line.substr(i-j-1, j-i+j+1).c_str()) << endl;
		}
		//cout << line.substr(0, i-j-1) << '+' << line.substr(i-j-1, j-i+j+1) << endl;
		
		//cout << line[i];
		
		//cout << line << endl;
	}
	
	cout << atoi("123");
	return 0;
}

