#pragma once
#ifdef  API_Class_EX
#define API_Class __declspec(dllexport)
#else
#define API_Class __declspec(dllimport)
#endif //  defcpp
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <algorithm>

class API_Class character_utils
{
public:
	//void show();
	static int get_bit_count(unsigned char c);
	static std::vector<int> convert_utf8_to_unicode(const std::string& str);
	static std::string print_unicode(const std::vector<int>& vec);
	static int convert_unicode_to_utf8(int unicode);
	static int gbk_to_unicode(int unicode);
};