#include<bits/stdc++.h>
using namespace std;

int main()
{
    double d=1e20;
    cout<<d<<endl;//scientific notation
    cout<<fixed<<d<<endl;/*reguler decimal
    number style showing*/
    cout<<fixed<<setprecision(30)<<d<<endl;
    return 0;
}
/*The 'fixed' manipulator ensures it 
shows as a regular decimal number 
rather than scientific notation 
(1.000000e20)

'setprecision(30)' 
forces 30 digits after the decimal 
point, even though they're all zeros
in this case*/

//What is e? 
//'e' indicates an exponent of 10.
/*
In the context of your code 
double d=1e20, the 'e' refers to 
scientific notation, not the 
mathematical 
constant e (≈2.71828).In scientific
notation:1e20 means 1 × 10²⁰The 'e'
stands for "exponent"It represents
1 followed 
by 20 zeros: 100000000000000000000
This is a common way to write very
large or very small numbers in 
programming. Some 
examples:1e3 = 1000 (10³)1e-3 = 0.001 
(10⁻³)2.5e2 = 250 (2.5 × 10²)So in your
code, 1e20 is just a concise way 
to write a very large number rather 
than typing out all 21 digits.
 */
