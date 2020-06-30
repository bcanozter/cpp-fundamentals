
## Integers
### Input
`> Enter 3 integers:`

`10 30 50`

### Output
You entered(a, b, c): 10,30,50

Integer sum(a+b+c): 90

  

### Unsigned vs Signed

Unsigned integer: 255

Signed integer: -1

  

## Char
### Input
`> Enter a lowercase char(a-z):`

`a`
### Output
A

  

## Float vs Double

Double : 3.141592653589793\
Float : 3.141592741012573

  
## Void pointer
```c++
void *myptr;
int number = 1;
myptr = &number;
int *mynumber = ((int*)(myptr));
*mynumber = *mynumber + 1;
cout << (*mynumber) << endl;
```
**Output**
2
