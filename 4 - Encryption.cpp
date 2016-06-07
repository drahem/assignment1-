#include <iostream>

using namespace std;

int main()
{
int D , D1 ,D2 , D3 , D4 , temp ;
cout << "Enter four digit number to encryption it : ";
cin >> D ;
D1 = D % 10000 / 1000 ;
D2 = D % 1000 / 100 ;
D3 = D % 100 / 10 ;
D4 = D % 10 / 1 ;

D1 = (D1+7) % 10 ;
D2 = (D2+7) % 10 ;
D3 = (D3+7) % 10 ;
D4 = (D4+7) % 10 ;

temp = D1 ;
D1 = D3 ;
D3 = temp ;

temp = D2 ;
D2 = D4 ;
D4 = temp;

cout << "The number after encryption is : " << (D1*1000)+(D2*100)+(D3*10)+D4;

return 0;
}
