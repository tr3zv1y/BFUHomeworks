
#include <iostream>
#include <bitset>
int main()
{
	std::bitset<32> set;
	unsigned int x;
	int i;
	std::cin >> x >> i;
	set = x;
	std::cout << set << std::endl;
	set |= (1 << i);
	std::cout << set << std::endl;
	return 0;
}
