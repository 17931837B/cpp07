#include "iter.hpp"

template <typename T>
void test0(T const &t)
{
	std::cout << t << std::endl;
}

void test1(int const &i)
{
	std::cout << i << std::endl;
}

void test2(int &i)
{
	i = 42;
	std::cout << i << std::endl;
}

void test3(std::string const &s)
{
	std::cout << s << std::endl;
}

void test4(std::string &s)
{
	size_t	i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - ('a' - 'A');
		i++;
	}
	std::cout << s << std::endl;
}

int main(void)
{
	int	test_int[3] = {1, 2, 3};
	std::string	test_str[3] = {"Hello", "World", "42"};
	std::cout << "[test0]" << std::endl;
	iter(test_int, 3, test0);
	std::cout << "[test1]" << std::endl;
	iter(test_int, 3, test1);
	std::cout << "[test2]" << std::endl;
	iter(test_int, 3, test2);
	std::cout << "[test0]" << std::endl;
	iter(test_str, 3, test0);
	std::cout << "[test3]" << std::endl;
	iter(test_str, 3, test3);
	std::cout << "[test4]" << std::endl;
	iter(test_str, 3, test4);
}