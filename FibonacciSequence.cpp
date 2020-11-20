
/* Funzione ricorsiva che dato un numero i >= 0 calcola il numero di Fibonacci
   i-esimo:

   L'i-esimo numero di Fibonacci F(i) e` definito attraverso la seguente
   definizione induttiva:

     F(i) = 0                 se i = 0
     F(i) = 1                 se i = 1
     F(i) = F(i-1) + F(i-2)   se i >= 2

*/


#include <iostream>
using namespace std;
long c = 1;

long fibonacci(long i)
{
    cout << c++<<endl; 
    if (i < 0) return -1; /* la puoi estendere per numeri negativi */

    if (i == 0) return 0;
    else if (i == 1) return 1;
    else return fibonacci(i - 1) + fibonacci(i - 2); /**ricorsività (stack trace) somma degli utlimi due numeri*/
}

int main(void)
{
    long n;
    cout<<"Inserire intero >= 0 : ";
    cin >> n;
    cout<< "il "<<n<<" numero di Fibonacci e'\n"<< fibonacci(n);
    return 0;
}

/*
  Nota: il numero di Fibonacci cresce molto velocemente. Per calcolare il
  numero di Fibonacci per numeri grandi, modificare la funzione sostituendo
  int con long
*/

