#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{

	std::string row = "1 2 34 45 67 89";
	std::string a, b;
	bool is_first = true;
	std::vector<std::string> first;
	std::vector<std::string> second;
	auto start = row.begin();
	while (start != row.end()) {
		//std::cout << 1;
		auto it = std::find(start, row.begin(), ' ');
		if (is_first) {
			first.push_back(std::string(start, it));
			is_first = false;
		}
		else {
			second.push_back(std::string(start, it));
			is_first = true;
		}
		start = it;
	}
	for (auto el : first) {
		std::cout << el << ' ';
	}
	return 0;
}
