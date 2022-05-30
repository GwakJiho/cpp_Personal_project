#pragma once
class String {
	//1�ܰ� �ڵ�--------------------------------------------------
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

	int size(); //���ڿ��� ���̸� ��ȯ.
	int length(); // ���ڿ��� ���̸� ��ȯ.
	int capacity(); // ���ڿ��� �����ϴ� ���� �迭�� ũ�⸦ ��ȯ

	//2�ܰ� �ڵ� --------------------------------------
	void common_func(const char* s1, bool delStorage = false, const char* s2 = " ");
	String& assign(const String& str);
	String& assign(const char* s);
	String& operator=(const String& str);
	String& operator=(const char* s);

	String& append(const String& str);
	String& append(const char* s);
	String& operator+=(const String& str);
	String& operator+=(const char* s);


	char& operator[](int index);   //�и� ���

	void shrink_to_fit(); //���ڿ� �迭 ���� ������
	const char* print(bool show = true)const; // 2�ܰ� print ���ۼ�. 1�ܰ��� print �� �Լ� �̸� �ٸ�.

	//3�ܰ� �ڵ� --------------------------------------
	friend std::ostream& operator<<(std::ostream& os, const String& str);
	friend std::istream& operator>>(std::istream& is, String& str); // friend ������ ���� ���������� ��밡��
	
	String operator+(const String& str);
	String operator+(const char* s);
	
	

};



/*
�ߺ��κ� private ���� �Լ� ����*/