#include <iostream>
#include <algorithm>

std::string fun(std::string str, std::string anagram, int dl) {
	for (int i = dl - 1; i >= 0; i--) {
		if (str[i] == anagram[i]) {
			str.pop_back();
		}
		else {
			for (int j = i - 1; j >= 0; j--) {
				if (str[i] == anagram[j]) {
					std::swap(anagram[i], anagram[j]);
					return anagram;
				}
			}
		}
	}
}

int main() {
	int pom = 0;
	std::string str, anagram;

	std::cin >> str >> anagram;

	while (str != anagram) {
		anagram = fun(str, anagram, str.length());
		pom++;
	}

	std::cout << pom;

	return 0;
}
