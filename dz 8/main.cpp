#include<iostream>
using namespace std;
{
    char* str;
    int length;
public:
    MyString() : length(80)
    {
        length = 80;
        str = new char[length + 1];
        for (int i = 0; i < length + 1; ++i)
        {
            str[i] = ' ';
        }
    }
    MyString(int size) : length(size)
    {
        str = new char[length + 1];
        for (int i = 0; i <= length; ++i) {
            str[i] = ' ';
        }
    }
    MyString(const char* newStr)
    {
        length = strlen(newStr);
        str = new char[length + 1];
        strcpy(str, newStr);
    }
    void stroka()
    {
        cout << "������� ������: ";
        char buff[50];
        cin.getline(buff, 50);
        length = strlen(buff);
        str = new char[length + 1];
        strcpy(str, buff);
    }

    void printstroka()
    {
        cout << "C�����: " << endl;
    }
    void MyStrcpy(MyString& obj)
    {
        length = obj.length;
        str = new char[length + 1];
        strcpy(str, obj.str);
    }
    int MyStrLen()
    {
        return strlen(str);
    }

    bool MyStrStr(const char* str2)
    {
        char* result = strstr(str, str2);
        return result != 0;
    }
    int MyStrCmp(const MyString& b)
    {
        return strcmp(str, b.str);
    }
    ~MyString()
    {
        delete[] str;
    }

};
int main() {
    MyString str1("fbdsh]");
    MyString str2(21);
    MyString str3;
    str3.stroka();
    cout << "c����� 1: ";
    str1.printstroka();
    cout << "c����� 2: ";
    str2.printstroka();
    cout << "������ 3: ";
    str3.printstroka();
    MyString str4;
    str4.MyStrcpy(str1);
    cout << "����� c����� 1: ";
    str4.printstroka();
    cout << "����� c����� 1: " << str1.MyStrLen() << endl;
    cout << "c�������� c����� 1 � c����� 2: " << str1.MyStrCmp(str2) << endl;
}