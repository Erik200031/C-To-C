#include <iostream> 
using namespace std; 
struct B { 
double d ; 
} ; 

void xfooB ( B* const dis  ) { 
cout << "Base" ; 
} 
 
struct A { 
B ob ; 
int b ; 
} ; 

void xfooA ( A* const dis  ) { 
cout << "Derived" ; 
} 
 
int main ( ) { 
A obb ; 
B* ref = (B*) &obb ; 
xfooA ( &obb ) ; 
} 
