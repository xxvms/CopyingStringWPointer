/*
 * copying one string to another with pointer
 */
#include <iostream>
void copyString(char* dest, const char* src); // prototype

int main()
{
    char* str1{"Self conquest is the greatest victory."};
    char str2[80];
    
    std::cout << str2;        // before string is copied
    std::cout << "<- end" << std::endl;
    
    copyString(str2, str1);                 // copy str1 to str2
    
    std::cout << str2 << std::endl;         // after
   
    system("pause");
    return 0;
}
void copyString(char* dest, const char* SRC)
{
    while (*SRC)                            // until character
    {
        *dest++ = *SRC++;                   // copy char from src to dest (src is CONST)
        *dest = '\0';
    }
}