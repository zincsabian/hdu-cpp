#include <cstring>
#include <cstdio>
#include "String.h"

String::String() : len(0) {
    m_data = new char[1];
    *m_data = '\0';
}

String::~String() {
    delete[] m_data;
}

String::String(const char* str) {
    if (str != nullptr) {
        len = strlen(str);
        m_data = new char[len + 1];
        strcpy(m_data, str);
    } else {
        m_data = new char[1];
        *m_data = '\0';
        len = 0;
    }
}

size_t String::size() const {
    return len;
}

void String::print() const {
    puts(m_data);
}

String::String(const String& T) {
    if (T.m_data != nullptr) {
        len = T.len;
        m_data = new char[len + 1];
        strcpy(m_data, T.m_data);
    } else {
        m_data = new char[1];
        *m_data = '\0';
        len = 0;
    }
}

String& String::operator=(const String& T) {
    if (this != &T) {  // 检查是否是自我赋值
        delete[] m_data;
        len = T.len;
        m_data = new char[len + 1];
        strcpy(m_data, T.m_data);
    }
    return *this;
}
