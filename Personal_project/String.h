#pragma once
class String {
	//1단계 코드--------------------------------------------------
private:
	int size_;
	int capa_;
	char* str_;
	char* temp_;
	

public:

	String();
	String(const char* s);
	//Input String(const char *s)
	String(const String& str);
	~String();

	int size(); //문자열의 길이를 반환.
	int length(); // 문자열의 길이를 반환.
	int capacity(); // 문자열을 저장하는 동적 배열의 크기를 반환

	//2단계 코드 --------------------------------------
	void common_func(const char* s1, bool delStorage = false, const char* s2 = " ");
	String& assign(const String& str);
	String& assign(const char* s);
	String& operator=(const String& str);
	String& operator=(const char* s);

	String& append(const String& str);
	String& append(const char* s);
	String& operator+=(const String& str);
	String& operator+=(const char* s);


	char& operator[](int index);   //분리 출력

	void shrink_to_fit(); //문자열 배열 길이 재조정
	const char* print(bool show = true)const; // 2단계 print 재작성. 1단계의 print 와 함수 이름 다름.

	//3단계 코드 --------------------------------------
	friend std::ostream& operator<<(std::ostream& os, const String& str);
	friend std::istream& operator>>(std::istream& is, String& str); // friend 선언을 통한 전역에서의 사용가능
	
	String operator+(const String& str);
	String operator+(const char* s);
	
	

};



/*
중복부분 private 에서 함수 정의*/