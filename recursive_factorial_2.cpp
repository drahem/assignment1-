//Sheet 2 Problem 1: Recursive Factorial

#include <iostream>

using namespace std;

int fact(int);

void fact(int, int&);


int main() {

    int n;
    
do {
        
cout << "Enter a nonnegative integer: ";
  
      cin >> n;
 
   } 
while (n < 0);
  
  cout << n << "! is " << fact(n) << endl;
 
   return 0;
}


int fact(int n) 
{
   
 int f = 1;
  
  fact(n, f);
    
return f;

}


void fact(int n, int &f)
 {
    
if (n > 0) {

        f *= n;
 
       fact(n - 1, f);
  
  }
}
