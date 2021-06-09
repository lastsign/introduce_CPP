#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

int what_is_type(const std::string &str)
{
	int point = 0;
	int flot = 0;
	int digit = 1;
	uint i = 0;
	if (!isdigit(str[0]))
		i = 1;
	for (; i < str.length(); ++i)
	{
		if (str[i] == '.')
			point = 1;
		else if (str[i] == 'f')
			flot = 1;
		if (!isdigit(str[i]) && str[i] != 'f')
			digit = 0;
	}
	if (point && !flot)
		return 3;
	else if (flot)
		return 2;
	else if (str.length() == 1 && !isdigit(str[0]))
		return 1;
	else if (digit)
		return 0;
	return -1;
}
//return 0; int
//return 1; char
//return 2; float
//return 3; double

template<typename T, typename T1, typename T2, typename T3>
void print_numbers(T &c, T1 &i, T2 &f, T3 &d, std::string str)
{
	std::cout << "char: ";
	if (sizeof(T) == sizeof(char))
		std::cout << "'";
	std::cout << c;
	if (sizeof(T) == sizeof(char))
		std::cout << "'";
	std::cout << std::endl;
	std::cout << "int: " << i << std::endl;
	if (sizeof(T2) == sizeof(float))
		std::cout << "float: " << f << str << "f" << std::endl;
	else
		std::cout << "float: " << f << str << std::endl;
	std::cout << "double: " << d << str << std::endl;
}
template<typename Ref_type, typename cast1, typename cast2, typename cast3>
void castForEveryType(Ref_type &type1, cast1 &type2, cast2 &type3, cast3 &type4)
{
	type2 = static_cast<cast1>(type1);
	type3 = static_cast<cast2>(type1);
	type4 = static_cast<cast3>(type1);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (-1);
	}
	std::string str = av[1];
	int i;
	unsigned char c;
	float f;
	double d;
	std::string nonDis = "Non displayable";
	std::string impos = "impossible";
	if (str == "+inff" || str == "inf" || str == "+inf" || str == "-inf" || str == "-inff"
			 || str == "nan" || str == "nanf")
		print_numbers(impos, impos, (f = stof(str)), (d = stod(str)), "");
	else if (isdigit(str[0]) || str.length() == 1 || ((str[0] == '-' || str[0] == '+') && isdigit(str[1])))
	{
		int type = what_is_type(str);
		if (type == 0)
			castForEveryType(i = stoi(str), f, d, c);
		else if (type == 2)
			castForEveryType(f = stof(str), i, d, c);
		else if (type == 3)
			castForEveryType(d = stod(str), i, f, c);
		else
		{
			c = static_cast<unsigned char>(str[0]);
			castForEveryType(c, i, f, d);
		}
		std::string k;
		if (!(d - round(d)))
			k = ".0";
		if (i >= 32 && i <= 126)
			print_numbers(c, i, f, d, k);
		else
			print_numbers(nonDis, i, f, d, k);
	}
	else
		print_numbers(impos, impos, impos, impos, "");
}