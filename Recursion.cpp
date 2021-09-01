//1. Two Phase :- Calling Phase and Returning Phase in Tree type structure(Tracing tree or recursion tree).
//2. Loop will have only asending phase,Wheres Recursion will have asending as well as decending phase.
//3. Recursion Functions are memory consuming functions as ther use stacks.
//4. Static Variables in Recursive tree , They do not make a copy each time the recursie function and performs as a global variable.
/* 
5. Types of Recursion:-
5.1.Tail Recursion
 The function is called at the end of recursion.(No operation at return time)
 Note:-Every funcn can be converted into a loop and vice versa.
 Tail Recursion is more efficient when converted to a loop.

5.2.Head Recursion
 The function is called at the start.(Operations done at returning time)
 Note:-Can be converted to a loop,But with an extra variable.

5.3.Linear and Tree Recursion
 If the function calls itself only once its Linear Recursion.
 If the function calls itself more then once its Tree Recurtion.

5.4.Indirect Recurion
 If the functions call makes a loop in themselves.

5.5. Nested Recursion
 When the parameter of a recursive function is itself a recursive function 
 */

// Sum of N natural numbers using Recursion

/*
#include<bits/stdc++.h>
using namespace std;
int sum(int num){
    if(num==0){
        return 0;
    }
    else {
        return sum(num-1)+num;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
*/

// Factorial using Recursion

/*
#include <bits/stdc++.h>
using namespace std;
int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return factorial(num - 1) * num;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
*/

//Power using Factorial

/*
#include<bits/stdc++.h>
using namespace std;
int power(int m,int n){
    if (n==0)
    {
        return 1;
    }
    else return power(m,n-1)*m;
    
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<power(m,n);
    return 0;
}
*/

//Taylor's Series using Recursion(Expansion of e^x)(O(n^2))
//Using of static variable
/*
#include <bits/stdc++.h>
using namespace std;
int taylor(int n, int x)
{
    static int p = 1, f = 1;
    int r;
    if (n == 0)
    {
        return 0;
    }
    else
    {
        r = taylor(n - 1, x);
        p = p * x;
        f = f * n;
        return r + (p / f);
    }
}
int main()
{
    int n, x;
    cin >> n >> x;
    taylor(n, x);
    return 0;
}
*/

// Taylor's series using Horner's rule(O(n))
/*
#include <bits/stdc++.h>
using namespace std;
int horner(int n, int x)
{
    static int s = 1;
    if (n == 0)
    {
        return s;
    }
    else
    {

        s = (s * (x / n)) + 1;
        return horner(n - 1, x);
    }
}
int main()
{
    int n, x;
    cin >> n >> x;
    cout << horner(n, x); 
    return 0;
}
*/

//Fibonacchi Series by Recursion
/*
#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
        return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout<<fibo(n);
    return 0;
}
*/

//nCr using recursion
/*
#include<bits/stdc++.h>
using namespace std;
int combination(int n,int r){
    if (n==r||r==0)
    {
        return 1;
    }
    else return combination(n-1,r)+combination(n-1,r-1);
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<combination(n,r);
    return 0;
}
*/

//Tower of Hanoi using Recursion
/*
#include <bits/stdc++.h>
using namespace std;
void toh(int n, int a, int b, int c)
{
    if (n > 0)
    {
        toh(n - 1, a, c, b);
        cout << "From " << a << " to " << c;
        toh(n - 1, b, a, c);
    }
}
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    toh(n, a, b, c);
    return 0;
}
*/