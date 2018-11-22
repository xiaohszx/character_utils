#pragma once
#ifdef _MSC_VER
#ifdef  API_CLASS_EX
#define API_DLL __declspec(dllexport)
#else
#define API_DLL __declspec(dllimport)
#endif //  defcpp
#endif 
#ifdef __GNUC__
#define API_DLL 
#endif
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <algorithm>

class API_DLL character_utils
{
public:
	//void show();
	static bool is_big_edian();
	static int get_bit_count(std::int64_t c);
	static std::vector<int> convert_utf8_to_unicode(const std::string& str);
	static std::string print_unicode(const std::vector<int>& vec);
	static int convert_unicode_to_utf8(int unicode);
	static std::string convert_unicode_to_utf8(std::string unicode,int size);
	static int gbk_to_unicode(int gbk);
	static int unicode_to_gbk(int unicode);
	static std::string unicode_to_gbk(std::string str,int code_size);
	static std::string dump_charater(int code);
	static std::string convert_utf8_to_unicode_string(const std::string& str);
	static std::string gbk_to_unicode(std::string gbk_str,int size);
	static std::vector<int> str_to_int_vec(const std::string& str,int code_size);
};