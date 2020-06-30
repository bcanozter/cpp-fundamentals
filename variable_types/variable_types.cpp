/*
Author: Burak Can Ozter
E-mail: burak.ozter@dal.ca
*/
#include <iostream>
#include <string>
#include <iomanip>

#define INTEGERS
#define CHARS
#define PRECISION
#define VOID

using namespace std;

int main(){

    int a, b, c;
    uint8_t ui;
    int8_t signed_int;
    char ch;
    double d;
    float f;
    string s;

#ifdef INTEGERS
    /* Sum Integers */
    cout << "> Enter 3 integers: " << endl;
    scanf("%d%d%d",&a,&b,&c);
    cout << "You entered(a, b, c): " << a << "," << b <<  "," << c << endl; 
    cout << "Integer sum(a+b+c): " << (a+b+c) << endl;

    ui = 255;
    signed_int = 255;
    cout << "Unsigned integer: " << unsigned(ui) << endl;
    cout << "Signed integer: " << signed(signed_int) << endl;
#endif

#ifdef CHARS
    /* lowercase to uppercase char */
    cout << "> Enter a lowercase char(a-z): " << endl;
    cin >> ch;

    if((ch <= 'z') && (ch >= 'a'))
        cout << char((ch - 32)) << endl; //Uppercase to lowercase, add 32.
    else cout << "Character is not valid" << endl;
#endif

#ifdef PRECISION
    /* pi */
    d = 3.141592653589793; //double type
    f = 3.141592653589793; //float type
    cout << setprecision(16) << "Double : " << d << endl; //More precise
    cout << setprecision(16) << "Float  : " << f << endl; //Losing accuracy after 7 digits
#endif

#ifdef VOID
    void *myptr;
    int number = 1;
    myptr = &number;
    int *mynumber = ((int*)(myptr));
    *mynumber = *mynumber + 1;
    cout << (*mynumber) << endl;
#endif

}