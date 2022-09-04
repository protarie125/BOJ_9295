#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto t = int{};
	cin >> t;
	for (auto c = 1; c <= t; ++c) {
		auto a = int{};
		auto b = int{};
		cin >> a >> b;

		cout << "Case " << c << ": " << a + b << '\n';
	}

	return 0;
}