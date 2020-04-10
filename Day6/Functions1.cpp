//
//  Functions1.cpp
//
//
//  Created by Neera on 15/06/16.
//
//

#include <iostream>
using namespace std;
void Hello_World();
void ASCII(char ch);
void Vowel(char ch);
void Even_Odd(int i);
void Age(int i);
void Grade(int a, int b, int c, int d, int e);
void Triangle (int a, int b, int c);
void Even(int n);
void Odd(int n);
void Table(int a);
int Factorial(int d);
int Power(int x, int y);
int Sum_of_digits(int n);
int Sum_of_last_digits(int n);
void Reverse(int i);
void Fibonicci(int a, int b);
void Prime(int f);
int main()
{
    char ch;
    int choice, n, a, b, c, e, d, f, x, y, i, p, l;
    cout << "\t0.Hello World" << endl;
    cout << "\t1.ASCII Value" << endl;
    cout << "\t2.Vowel or Not" << endl;
    cout << "\t3.Even or Odd" << endl;
    cout << "\t4.Age" << endl;
    cout << "\t5.Grade" << endl;
    cout << "\t6.Triangle" << endl;
    cout << "\t7.Even" << endl;
    cout << "\t8.Odd" << endl;
    cout << "\t9.Table" << endl;
    cout << "\t10.Factorial" << endl;
    cout << "\t11.Power" << endl;
    cout << "\t12.Sum Of Digits" << endl;
    cout << "\t13.Sum of Last Digits" << endl;
    cout << "\t14.Reverse" << endl;
    cout << "\t15.Fibonicci" << endl;
    cout << "\t16.Prime" << endl;
    cout << "\tEnter Your Choice:" << endl;
    cin >> choice;
    switch (choice) {
    case 0: cout << "\t Hello World" << endl;
        break;
    case 1: cout << "\t Enter the character" << endl;
        cin >> ch;
        ASCII(ch);
        break;
    case 2: cout << "\t Enter the alphabet" << endl;
        cin >> ch;
        Vowel(ch);
        break;
    case 3: cout << "\t Enter the Number" << endl;
        cin >> i;
        Even_Odd(i);
        break;
    case 4: cout << "\t Enter the Age" << endl;
        cin >> i;
        Age(i);
        break;
    case 5: cout << "\t Enter the marks of 5 subjects" << endl;
        cin >> a >> b >> c >> d >> e;
        Grade(a, b, c, d, e);
        break;
    case 6: cout << "\t Enter the sides of the triangle" << endl;
        cin >> a >> b >> c;
        Triangle(a, b, c);
        break;
    case 7: cout << "\t Even:" << endl;
        n = 1;
        Even(n);
        break;
    case 8: cout << "\t Odd:" << endl;
        n = 50 ;
        Odd(n);
        break;
    case 9: cout << "\t Enter the number" << endl;
        cin >> a;
        Table(a);
        break;
    case 10: cout << "\t Enter the number" << endl;
        cin >> d;
        n = Factorial(d);
        cout << n << endl;
        break;
    case 11: cout << "\t Enter Value 1" << endl;
        cin >> x;
        cout << "\t Enter Value 2" << endl;
        cin >> y;
        p = Power(x, y);
        cout << p << endl;
        break;
    case 12: cout << "\t Enter the number" << endl;
        cin >> n;
        l = Sum_of_digits(n);
        cout << l << endl;
        break;
    case 13: cout << "\t Enter the number" << endl;
        cin >> n;
        l = Sum_of_last_digits(n);
        cout << l << endl;
        break;
    case 14: cout << "\t Enter the number" << endl;
        cin >> i;
        Reverse(i);
        break;
    case 15: cout << "\t Enter the 1st number" << endl;
        cin >> a;
        cout << "\t Enter the 2nd number" << endl;
        cin >> b;
        Fibonicci(a, b);
        break;
    case 16: cout << "Prime numbers between 0 to 50 are" << endl;
        f = 2;
        Prime(f);
        break;
    }
    return 0;
}
void Hello_World()
{
    cout << "Hello World";
}
void ASCII(char ch)
{
    int i = ch;
    cout << '\t' << i << endl;
}
void Vowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "\tVowel" << endl;
    }
    else {
        cout << "\tNot" << endl;
    }
}
void Even_Odd(int i)
{
    if (i % 2 == 0) {
        cout << "\tEven" << endl;
    }
    else {
        cout << "\tOdd" << endl;
    }
}
void Age(int i)
{
    if (i > 0 && i < 13) {
        cout << "CHILD" << endl;
    }
    else if (i >= 13 && i < 18) {
        cout << "TEENAGER" << endl ;
    }
    else {
        cout << "ADULT" << endl ;
    }
}
void Grade(int a, int b, int c, int d, int e)
{
    int f;
    f = a + b + c + d + e ;

    if (f >= 450) {
        cout << "A" << endl;
    }
    else if (f >= 350 && f < 450) {
        cout << "B" << endl;
    }
    else if (f >= 250 && f < 350) {
        cout << "C" << endl;
    }
    else {
        cout << "Try Again" << endl;
    }
}
void Triangle(int a, int b, int c)
{
    if (a == b && b == c && c == a) {
        cout << "Equilateral" << endl ;
    }
    else if (a == b || b == c || c == a) {
        cout << "Isoceless" << endl ;
    }
    else {
        cout << "Scalene" << endl ;
    }
}
void Even(int n)
{
    for (; n <= 50; n++) {
        if (n % 2 == 0) {
            cout << n << endl;
        }
    }
}
void Odd(int n)
{
    for (; n <= 50; --n) {
        if (n % 2 == 1) {
            cout << n << endl;
        }
    }
}
void Table(int a)
{
    int b, r;
    for (b = 1; b <= 10; b++) {
        r = a * b;
        cout << a << "*" << b << "=" << r << endl;
    }
}
int Factorial(int d)
{
    int m;
    for (m = 1; d > 0; d--) {
        m = m * d;
    }
    return m;
}
int Power(int x, int y)
{
    int z;
    for (z = 1; y > 0; y--) {
        z = z * x;
    }
    return z;
}
int Sum_of_digits(int n)
{
    int sum, r;
    for (sum = 0; n > 0;) {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    return sum;
}
int Sum_of_last_digits(int n)
{
    int sum, r;
    r = n % 10;
    for (; n > 10;) {
        n = n / 10;
    }
    sum = n + r;
    return sum;
}
void Reverse(int i)
{
    int s;
    for (; i > 0;) {
        s = i % 10;
        cout << s << "";
        i = i / 10;
    }
    cout << endl;
}
void Fibonicci(int a, int b)
{
    int c, n;
    for (n = 10; n > 0; n--) {
        c = a + b;
        a = b;
        b = c;
        cout << c << "\n";
    }
}
void Prime(int f)
{
    int j, flag;
    for (f = 2; f <= 50; f++) {
        for (j = 2, flag = 0; j <= f / 2; j++) {
            if (f % j == 0) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            cout << f << "\n";
        }
    }
}