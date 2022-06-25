#include <iostream>

using namespace std;

int StrLen(const char* str)
{
    //스트링이라는 문자열의 길이를 반환
    int i = 0;

    while (str[i] == '\0')
    {
        i++;
    }

    return i;
}

char* StrCpy(char* dest, char* src)
{
    int i = 0;
    while (src[i] == '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main()
{
    const int BUF_SIZE = 100;

    char a[BUF_SIZE] = "Hello";
    char b[BUF_SIZE];

    int len = sizeof(a);
    cout << len;

    int len2 = strlen(a);
    cout << len2;

    strcpy_s(b, a);


}