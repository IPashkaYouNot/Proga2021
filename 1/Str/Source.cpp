#include "Header.h"
#include <iostream>
#include <iomanip>
#include <cmath>

std::string* Input(int n) {
	std::cin.ignore();
	std::string* str = new std::string[n];
	for (int i = 0; i < n; i++) {
		getline(std::cin, str[i]);
	}
	return str;
}

int Find_Min(std::string* s, int n) {
	int ind = 0;
	int min = s[0].size();
	
	for (int k = 0; k < n; k++) {
		int temp_min = s[k].size();
		int start = 0;
		int end = 0;
		int i = 0;
		while (s[k][i] == ' ') {
			end++;
			start++;
			i++;
		} 
		for (i; i < s[k].size(); i++) {
			while (s[k][i] != ' ' && s[k][i] != '\0') {
				end++;
				i++;
			}
			if (end - start <= temp_min) temp_min = end - start;
			end++;
			start = end;
		}
		if (temp_min <= min) {
			min = temp_min;
			ind = k;
		}
	}
	return ind;
}

void Del_word(std::string* s, int ind) {
	int start_final = 0;
	int end_final = 0;
	int end = 0;
	int start = 0;
	int max = 0;
	for (int i = 0; i < s[ind].size(); i++) {
		while (s[ind][i] != ' ' && s[ind][i] != '\0') {
			end++;
			i++;
		}
		if (end - start > max) {
			max = end - start;
			end_final = end;
			start_final = start;
		}
		end++;
		start = end;
	}
	s[ind].erase(start_final, end_final - start_final + 1);
}