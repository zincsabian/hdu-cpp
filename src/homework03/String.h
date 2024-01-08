#ifndef STRING_1
#define STRING_1

class String{
private:
    char* m_data;
    size_t len;
public:
    String();
    String(const char* cstr);
    String(const String& str);
    String& operator=(const String& str);
    void print() const;
    size_t size() const;
    ~String();
};

#endif