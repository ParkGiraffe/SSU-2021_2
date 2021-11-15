#include <iostream>
#include "StackByLinkedList.h"

using namespace std;

void toPostfix(char[]);

int main()
{
   char str[100];

   while (true)
   {
        cout << "후위 표기법으로 변환할 문자열을 입력하세요." << endl
             << "'0'을 입력하면 프로그램이 종료됩니다. " << endl;
        cin >> str;

        if (str[0] == '0')
            return 0;
        
        toPostfix(str);

        cout << endl;
   }

   return 0;
}

void toPostfix(char str[])
{
    StackByLinkedList stack;

    int i = 0;
    while (true)
    {
        char currChar = str[i];
        int count = 0;
        switch (currChar)
        {

            case '(' : case '{' : case '[' :
                break;

            case ')' : case '}' : case ']' :
                cout << stack.Pop();
                break;

            case '+' : case '-' : case '*' : case '/' :
                stack.Push(currChar);
                break;

            case '\0' :
                count = stack.GetSize();
                while(count != 0)
                {
                    cout << stack.Pop();
                    count--;   
                }
                return;

            default :
                cout << currChar;
                break;

            
            // bracket을 "" 로 묶으면 오류가 발생하고, ''로 묶으면 정상적으로 작동
        }

        i++;
    }

    
}