#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "String.h"
using namespace std;

void String::common_func(const char* s1, bool delStorage, const char* s2) // 문자열 길이 줄이기
{
    int len = (int)strlen(s1) + (int)strlen(s2);
    int capa = len + 1;
    char* temp = new char[capa];
    strcpy_s(temp, capa, s1);
    strcat_s(temp, capa, s2);
    if (delStorage)
        delete[] this->str_;
    this->size_ = len;
    this->capa_ = capa;
    this->str_ = temp;
}

String::String()   //String default 생성자
{
    this->common_func("");
}

String::String(const char* s)   //String 입력 생성자
{
    this->common_func(s);
}

String::String(const String& str)  //String 복사 생성자
{
    this->common_func(str.str_);
}


String::~String()
{
    delete[] this->str_;
}


int String::length()
{
    return (int)strlen(this->str_);
}

int String::size()
{
    return this->length();
}

int String::capacity()
{
    return capa_;
}

String& String::assign(const String& str) {
    return this->assign(str.str_);
}
String& String::assign(const char* s) {
    this->common_func(s, true);
    return *this;
}
String& String::operator=(const String& str) {
    return this->assign(str.str_);
}
String& String::operator=(const char* s) {
    return this->assign(s);
}

String& String::append(const String& str) {
    return this->append(str.str_);
}
String& String::append(const char* s) {

    this->common_func(this->str_, true, s);
    return *this;
}
String& String::operator+=(const String& str) {
    return this->append(str.str_);
}
String& String::operator+=(const char* s) {
    return this->append(s);
}

char& String::operator[](int index)
{
    if (index < 0) index = 0;
    if (index >= this->length()) index = this->length() - 1;
    return this->str_[index];
}

void String::shrink_to_fit()
{
    String temp(this->str_);
    this->assign(temp);
}


const char* String::print(bool show)
const
{
    if (show == true)
        cout << this->str_ << endl;
    
    return this->str_;
}


String String::operator+(const String& str) {
    return this->operator+(str.str_);
}
String String::operator+(const char* s) {

    return String(*this).append(s);

}


std::ostream& operator<<(std::ostream& os, const String& str)
{
    return os << str.print(false);
}
std::istream& operator>>(std::istream& is, String& str)
{
    char buf[1024];
    is >> buf;
    str.assign(buf);
    return is;
}