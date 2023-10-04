#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#pragma warning(disable:4996)
using namespace std;
#include <iomanip> 
int main()
{
    //读取输入没有行号和列号的矩阵1 2 3 
                             //4 5 6
                             //7 8 9
    /*vector<vector<int>> arr;
    string input;
    while (getline(cin, input)) {
        if (input.size() > 0) {
            stringstream stringin(input);
            int num;
            vector<int> a;
            while (stringin >> num) {
                a.push_back(num);
            }
            arr.push_back(a);
        }
    }*/

    //输入数组中带有中括号和逗号
    /*vector<vector<int>> arr;
    string input;
    char *tok;
    while (getline(cin, input))
    {
        if (input.size() > 0)
        {
            vector<int> a;
            tok = strtok((char*)input.c_str(), " ,[]");
            while (tok != NULL)
            {
                a.push_back(stoi(tok));
                tok = strtok(NULL, " ,[]");
            }
            arr.push_back(a);
        }
    }*/

    //读取连续字符�?
    /*vector<vector<char>> arr;
    string input;
    while (getline(cin, input))
    {
        if (input.size() > 0)
        {
            vector<char> a;
            for (int i = 0; i < input.size(); i++)
            {
                a.push_back(input[i]);
            }
            arr.push_back(a);
        }
    }*/
    double number = 3.14159265359;

    // 使用 std::setprecision 来设置输出精度为2位小�?
   cout <<setprecision(2) << number << endl;
   float num1 = 3.14159265359;
   double num2 = 3.14159265359;

   // 使用%.2f来限制浮点数的精度为2位小�?
   printf("浮点�?1: %.3f\n", num1);
   printf("浮点�?2: %.2f\n", num2);

   int num = 1225225;

   // 使用%d�?%5d来限制整数的宽度�?5�?
   printf("�̻�����: %5d\n", num);


    return 0;
}
