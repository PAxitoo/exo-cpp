#include<iostream>
#include<cstdio>
#include<string>


using namespace std;

int main(void)
{
   int d;
   int i;
   string diviseur;

    cout<<"****Premier programme****"<<endl;
    std::cout<<"Saisissez un nombre puis appuyez sur entrée : ";
    std::cin >> d;
   i=1;
   while(i<=15)
   {
      if( d % i == 0)
      {
         if (diviseur.empty())
           diviseur = to_string(i);
         else
           diviseur += "," + to_string(i);
      }
      else
      {
         if (diviseur.empty())
           diviseur = to_string(i) + " ne divise pas " + to_string(d) ;
         else
           diviseur += "," + to_string(i) + " ne divise pas " + to_string(d);
      }
      i++;
   }
   cout << diviseur << " divise " << d << endl;

}