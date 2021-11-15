#include <iostream>
#include "StackByLinkedList.h"

using namespace std;

void toPostfix(char[]);

int main()
{
   char str[100];

   while (true)
   {
        cout << "���� ǥ������� ��ȯ�� ���ڿ��� �Է��ϼ���." << endl
             << "'0'�� �Է��ϸ� ���α׷��� ����˴ϴ�. " << endl;
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

            
            // bracket�� "" �� ������ ������ �߻��ϰ�, ''�� ������ ���������� �۵�
        }

        i++;
    }

    
}