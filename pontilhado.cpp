#include <iostream>
using namespace std;
//declarando uma variavel
int main() {
   //declarando varivel var igual a 3
   int Var = 3;
   //varivel colocando um endereco 
   int* pVar;
   //colocando o valor na varivel de endereco 
   pVar = &Var;
   //interface de usuario valor da variavel 
   cout<<Var<<endl;
   cout<<*pVar<<endl;
   //interface de endereco 
   cout<<pVar<<endl;
   
}