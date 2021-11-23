#include <iostream>
#include "StackByLinkedList.h"

using namespace std;

bool testPair(char[]);

int main()
{
   char str[100];

   while (true)
   {
        cout << "�˻��� ������ �Է��ϼ���." << endl
             << "'0'�� �Է��ϸ� ���α׷��� ����˴ϴ�. " << endl;
        cin >> str;

        if (str[0] == '0') // cpp를 포함한 대부분의 언어에서 작은 따옴표는 char, 큰 따옴표는 string으로 인식한다.  
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
                cout << "���ÿ� ����" << endl;
                stack.Push(currChar);
                break;

            case ')' :
                cout << "( ����" << endl;
                open_pair = stack.Pop();
                if (open_pair != '(')
                    return false;
                else open_pair = 'X';
                break;

            case '}' :
                cout << "{ ����" << endl;
                open_pair = stack.Pop();
                if (open_pair != '{')
                    return false;
                else open_pair = 'X';
                break;

            case ']' :
                cout << "[ ����" << endl;
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

            
            // bracket�� "" �� ������ ������ �߻��ϰ�, ''�� ������ ���������� �۵�
        }

        i++;
    }

    
}