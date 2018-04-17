#ifndef conversion_hpp
#define conversion_hpp

#include <string>
#include <fstream>
#include <sstream>

#include <iostream>
namespace util {
		
	typedef char dsize;
	
	std::string dec_2_bin(int number)
	{
		if ( number == 0 ) return "0";
		if ( number == 1 ) return "1";

		if ( number % 2 == 0 )
			return dec_2_bin(number / 2) + "0";
		else
			return dec_2_bin(number / 2) + "1";
	}

	int bin_2_dec(const std::string& number)
	{
		int result = 0, pow = 1;
		for ( int i = number.length() - 1; i >= 0; --i, pow <<= 1 )
			result += (number[i] - '0') * pow;

		return result;
	}
	
	
	int bin_2_dec_fixme(dsize* number, int len)
	{
		int result = 0, pow = 1;
		for ( int i = len; i >= 0; --i, pow <<= 1 )
			result += (number[i] - '0') * pow;

		return result;
	}
	
	std::string boolarray_2_string(dsize* arr, int size ) {
		char* str = new char[size];
		
		std::string z(str);
		for(int i=0;i<size;i++) {
			arr[i]==0?z[i]='0':z[i]='1';
			//if ( str[i]=='0' ) {
		}
		
		return z;
	}
	
	dsize* string_2_boolarray(const std::string& str1, const std::string& str2) {
		//bool* res = 0 ;
		//std::cout << "BEG:" << "string_2_boolarray" << std::endl;
		std::string str(str1+str2);
		int size = str.size(); 
		//std::cout << "string_2_boolarray: size: "<< size <<" , processing " << str << std::endl;
		dsize* res = new dsize[size];
		
		//*	
		for(int i=0;i<str.size();i++) {
			str[i]=='0'?res[i]=0:res[i]=1;
			//if ( str[i]=='0' ) {
				
			//}
			//std::cout << ( str[i]=='0' ) << " "  ;
		}
		//*/
		//std::cout << std::endl;
		
		
		//std::cout << "--END:" << "string_2_boolarray" << std::endl;
	
		return res;
	}
	
}

#endif