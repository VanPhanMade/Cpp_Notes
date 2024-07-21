#include "Operators.h"
#include <iostream>
using namespace std;

Operators::Operators()
{
    cout << " ------ Arithmetic Operators ------" << endl;
    // ---------------- Arithmetic Operators ----------------
    int a = 8, b = 3; 

    // Addition operator
    cout << "a + b = " << (a + b) << endl;

    // Subtraction operator
    cout << "a - b = " << (a - b) << endl;

    // Multiplication operator
    cout << "a * b = " << (a * b) << endl;

    // Division operator
    cout << "a / b = " << (a / b) << endl;

    // Modulo operator
    cout << "a % b = " << (a % b) << endl;

    // ---------------- Relational operators ----------------
    int c = 6, d = 4;

    // Equal to operator
    cout << "c == b is " << (c == d) << endl;

    // Greater than operator
    cout << "c > b is " << (c > d) << endl;

    // Greater than or Equal to operator
    cout << "c >= b is " << (c >= d) << endl;

    //  Lesser than operator
    cout << "c < b is " << (c < d) << endl;

    // Lesser than or Equal to operator
    cout << "c <= b is " << (c <= d) << endl;

    // true
    cout << "c != b is " << (c != d) << endl;

    // ---------------- Logical operators ----------------
    int e = 6, f = 4;

    // Logical AND operator
    cout << "a && b is " << (e && f) << endl;

    // Logical OR operator
    cout << "a || b is " << (e || f) << endl;

    // Logical NOT operator
    cout << "!b is " << (!f) << endl;

    // ---------------- Bitwise operators ----------------
    int g = 6, h = 4;

    // Binary AND operator
    cout << "a & b is " << (g & h) << endl;

    // Binary OR operator
    cout << "a | b is " << (g | h) << endl;

    // Binary XOR operator
    cout << "a ^ b is " << (g ^ h) << endl;

    // Left Shift operator
    cout << "a<<1 is " << (g << 1) << endl;

    // Right Shift operator
    cout << "a>>1 is " << (g >> 1) << endl;

    // One’s Complement operator
    cout << "~(a) is " << ~(g) << endl;

    // ---------------- Assignment operators ----------------
    int i = 6, j = 4;

    // Assignment Operator
    cout << "a = " << i << endl;

    //  Add and Assignment Operator
    cout << "a += b is " << (i += j) << endl;

    // Subtract and Assignment Operator
    cout << "a -= b is " << (i -= j) << endl;

    //  Multiply and Assignment Operator
    cout << "a *= b is " << (i *= j) << endl;

    //  Divide and Assignment Operator
    cout << "a /= b is " << (i /= j) << endl;

    // ---------------- Ternary operators ----------------
    int k = 3, l = 4;

    // Conditional Operator
    int result = (k < l) ? l : k;
    cout << "The greatest number is " << result << endl;

    // ---------------- Memory operators ----------------
    int m = 6;                      
    int* n;                         
    int o;                          
    //  & Operator (address of)     
    n = &m;                         
                                    
    // * Operator (dereference)     
    o = *n;                         
    cout << " a = " << m << endl;   
    cout << " b = " << n << endl;   
    cout << " c = " << o << endl;   

    // () Function call                     
    // [] Array                             
    // . Member select via obj              
    // -> Member select via pointer         
    // ++/- Postfix                         
    // ++/- Prefix                          
    // * Dereference                        
    // & Address                            
    // sizeof
    // << >> injection
    // , comma operator

    
    // https://press.rebus.community/programmingfundamentals/chapter/increment-and-decrement-operators/
    int age = 44;
    cout << " Postfix age = " << age++ << endl;
    cout << " Postfix age = " << ++age << endl; 
    cout << " Final age = " << age << endl;
}
