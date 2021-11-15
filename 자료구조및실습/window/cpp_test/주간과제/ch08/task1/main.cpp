#include <iostream>
#include "StackByLinkedList.h"

using namespace std;

bool testPair(char[]);

int main()
{
   char str[100];

   while (true)
   {
        cout << "검사할 수식을 입력하세요." << endl
             << "'0'을 입력하면 프로그램이 종료됩니다. " << endl;
        cin >> str;

        if (str[0] == '0')
            return 0;
        
        bool result = testPair(str);

        cout << result << endl;
   }

   return 0;
}

bool testPair(char str[])
{
    StackByLinkedList stack;

    int i = 0;
    while (true)
    {
        char currChar = str[i];
        char open_pair;

        switch (currChar)
        {

            case '(' : case '{' : case '[' :
                cout << "스택에 삽입" << endl;
                stack.Push(currChar);
                break;

            case ')' :
                cout << "( 제거" << endl;
                open_pair = stack.Pop();
                if (open_pair != '(')
                    return false;
                else open_pair = 'X';
                break;

            case '}' :
                cout << "{ 제거" << endl;
                open_pair = stack.Pop();
                if (open_pair != '{')
                    return false;
                else open_pair = 'X';
                break;

            case ']' :
                cout << "[ 제거" << endl;
                open_pair = stack.Pop();
                if (open_pair != '[')
                    return false;
                else open_pair = 'X';
                break;

            case '\0' :
                if (stack.IsEmpty()) {
                    return true;
                }
                return false;

            default :
                break;

            
            // bracket을 "" 로 묶으면 오류가 발생하고, ''로 묶으면 정상적으로 작동
        }

        i++;
    }

    
}