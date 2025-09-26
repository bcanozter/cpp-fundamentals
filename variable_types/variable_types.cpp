/* Author: Burak Can Ozter E-mail: burak.ozter@dal.ca */
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#define INTEGERS
#define CHARS
#define PRECISION
#define BOOLEAN
#define ARRAYS
#define REFERENCES
#define SIZEOF_DEMO

using namespace std;

int main() {

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
  scanf("%d%d%d", &a, &b, &c);
  cout << "You entered(a, b, c): " << a << "," << b << "," << c << endl;

  cout << "Integer sum(a+b+c): " << (a + b + c) << endl;

  ui = 255;
  signed_int = 255;
  cout << "Unsigned integer: " << unsigned(ui) << endl;
  cout << "Signed integer: " << signed(signed_int) << endl;
#endif

#ifdef CHARS
  /* lowercase to uppercase char */
  cout << "> Enter a lowercase char(a-z): " << endl;
  cin >> ch;

  if ((ch <= 'z') && (ch >= 'a'))
    cout << char((ch - 32)) << endl; // For uppercase to lowercase, add 32.
  else
    cout << "Character is not valid" << endl;
#endif

#ifdef PRECISION
  /* pi */
  d = 3.141592653589793;                                // double type
  f = 3.141592653589793;                                // float type
  cout << setprecision(16) << "Double : " << d << endl; // More precise
  cout << setprecision(16) << "Float  : " << f
       << endl; // Losing accuracy after 7 digits
#endif

#ifdef REFERENCES

  cout << "\n=== REFERENCES VS POINTERS ===" << endl;
//   void *myptr;
//   int number = 1;
//   myptr = &number;
//   int *mynumber = ((int *)(myptr));
//   *mynumber = *mynumber + 1;
//   cout << (*mynumber) << endl;

  int original = 42;
  int *pointer = &original;  // Pointer to original
  int &reference = original; // Reference to original

  cout << "Original value: " << original << endl;
  cout << "Pointer points to: " << *pointer << endl;
  cout << "Reference refers to: " << reference << endl;

  // Modify through pointer
  *pointer = 100;
  cout << "After pointer modification: " << original << endl;

  // Modify through reference
  reference = 200;
  cout << "After reference modification: " << original << endl;

  cout << "Address of original: " << &original << endl;
  cout << "Address stored in pointer: " << pointer << endl;
  cout << "Address of reference: " << &reference << endl;
#endif

#ifdef BOOLEAN

  bool flag1 = true;
  bool flag2 = false;
  bool result;

  cout << "\n=== BOOLEAN OPERATIONS ===" << endl;
  cout << "flag1: " << flag1 << ", flag2: " << flag2 << endl;

  result = flag1 && flag2; // AND
  cout << "flag1 && flag2: " << result << endl;

  result = flag1 || flag2; // OR
  cout << "flag1 || flag2: " << result << endl;

  result = !flag1; // NOT
  cout << "!flag1: " << result << endl;

  flag2 = 1;
  result = flag1 ^ flag2; // XOR
  cout << "flag1: " << flag1 << ", flag2: " << flag2 << endl;
  cout << "flag1 ^ flag2: " << result << endl;
  
  int x = 10, y = 20;
  cout << "x < y: " << (x < y) << endl;
  cout << "x == y: " << (x == y) << endl;
#endif

#ifdef ARRAYS

  cout << "\n=== ARRAYS AND CONTAINERS ===" << endl;

  // Static array
  int staticArray[5] = {1, 2, 3, 4, 5};
  cout << "Static array elements: ";
  for (int i = 0; i < 5; i++) {
    cout << staticArray[i] << " ";
  }
  cout << endl;

  // Dynamic vector
  vector<int> dynamicVector = {10, 20, 30, 40};
  cout << "Vector elements: ";
  for (int element : dynamicVector) {
    cout << element << " ";
  }
  cout << endl;
#endif

#ifdef SIZEOF_DEMO

  cout << "\n=== SIZE OF DATA TYPES ===" << endl;

  cout << "Size of int: " << sizeof(int) << " bytes" << endl;
  cout << "Size of char: " << sizeof(char) << " bytes" << endl;
  cout << "Size of float: " << sizeof(float) << " bytes" << endl;
  cout << "Size of double: " << sizeof(double) << " bytes" << endl;
  cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
  cout << "Size of long: " << sizeof(long) << " bytes" << endl;
  cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
  cout << "Size of string: " << sizeof(string) << " bytes" << endl;

  // Size of arrays
  int testArray[10];
  cout << "Size of int[10]: " << sizeof(testArray) << " bytes" << endl;
  cout << "Number of elements: " << sizeof(testArray) / sizeof(testArray[0])
       << endl;
#endif

  return 0;
}