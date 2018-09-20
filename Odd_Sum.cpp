/* **************************************************************************

    * File Name : Odd_Sum.cpp

    * Creation Date : 2018-09-11 23:00:39

    * Last Modified : 2018-09-20 13:36:03

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
    int numOfInput; //資料組數
    int firstNum, secondNum; //開始與結束數字
    
    cin >> numOfInput; //輸入組數
    for(int i = 0; i < numOfInput; i++)
    {
        int total = 0; //加總
        cin >> firstNum >> secondNum; //輸入開始與結束
        if(firstNum % 2 == 0)
            firstNum++; //如果開始數字為偶數，移至下一個數字
        for(int j = firstNum; j <= secondNum; j += 2)
            total += j; //加總所有奇數數字
        cout << "Case " << i + 1 << ": "<< total << endl; //印出
    }
    return 0;
}
