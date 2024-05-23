
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

int main()
{
	std::string str { "Hello world!!" };
	std::map<char, int> vec;

	for (const char& c : str)
		++vec[c];
	
	std::vector<std::pair<char, int>> sortedVec(vec.begin(), vec.end());

	std::sort(sortedVec.begin(), sortedVec.end(), [](const std::pair<int, char>& a, const std::pair<int, char>& b) {
		return a.second > b.second;
		});

	for (const auto& pair : sortedVec)
	{
		std::cout << pair.first << ": " << pair.second << std::endl;
	}

	return 0;
}