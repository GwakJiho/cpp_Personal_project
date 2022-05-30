#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "String.h"




int main() {

	String s1("hello");
	String s2("cpp");
	String s3 = s1 + s2;
	s3.print();
	s1.print();
	s2.print();

	String s4 = s1 + "test";
	s4.print();
	
	std::cout << s4 << std::endl;
	String s5;
	
	std::cin >> s5;
	std::cout << s5.print(false);


	

	/*cout << "\n==============입력 값이 없을 경우==============\n" << endl;
	String s1;
	s1.Print();
	cout << "size : " << s1.size() << endl;
	cout << "length : " << s1.length() << endl;
	cout << "capacity : " << s1.capacity() << endl;
	cout << "\n==============일반 생성자==============\n" << endl;
	String s("string");
	s.Print();
	cout << "size : " << s.size() << endl;
	cout << "length : " << s.length() << endl;
	cout << "capacity : " << s.capacity() << endl;
	cout << "\n==============복사 생성자==============\n" << endl;
	String s2("Hello cpp");
	String s3(s2);
	s3.Print();
	cout << "size : " << s3.size() << endl;
	cout << "length : " << s3.length() << endl;
	cout << "capacity : " << s3.capacity() << endl;

	cout << "\n==============객체의 문자열 재정의  s3 <- sring ==============\n" << endl;
	s3.assign("cpdsadsa");
	s3.Print();

	cout << "\n==============객체의 객체 복사 s3 <- s2==============\n" << endl;
	s3.assign(s2);
	s3.Print();

	cout << "\n==============operator = ==============\n" << endl;
	String str1("hello");
	String str2("hi");
	str1 = str2;
	str1.Print();

	cout << "\n==============operator2 = ==============\n" << endl;
	String str3;
	str3 = "literal";
	str3.Print();

	cout << "\n==============객체의 문자열 추가 ==============\n" << endl;
	str1.append("String");
	str1.Print();
	cout << "size :" << str1.size() << endl;
	cout << "capacity : " << str1.capacity() << endl;

	cout << "\n==============객체의 객체 문자열 추가 ==============\n" << endl;
	String str4("C language");
	String str5("CPP");
	str4.append(str5);
	str4.Print();
	cout << "size : " << str4.size() << endl;

	cout << "\n==============Operator += String==============\n" << endl;
	String str6("A");
	str6 += "project";
	str6.Print();

	cout << "\n==============Operator += Object==============\n" << endl;
	str6 += str3;
	str6.Print();

	cout << "\n==============Operator [] Object==============\n" << endl;
	cout << "객체 부분 출력: " << str6[17] << endl << "객체 출력 : " << str6.print() << endl;*/

