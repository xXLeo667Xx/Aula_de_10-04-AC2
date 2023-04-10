#include <iostream>
using namespace std;

int main() {
    //declarando uma variavel de ponteiro
   int *ptr=new int;
   //valor atribuido
   *ptr=7;
   //interface de usuario de variavel de ponterio
   cout<<*ptr<<endl;
   //interface de usuario de endereco de memoria
   cout<<ptr<<endl;
   //deletar memoria da variavel
   delete ptr;
   //anular e limpar aqueles que eu n declarei para deletar
   ptr=nullptr;
   
   cout<<*ptr<<endl;
   cout<<ptr<<endl;
   
}