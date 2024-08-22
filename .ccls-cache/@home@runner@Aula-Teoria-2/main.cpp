#include <iostream>

int x=1; // variavel global

void f(){
  // usa variavel global
  std::cout << "dentro da funcao f: "<<x<<std::endl;
}

void f2(int x){  
  // parametro
  std::cout << "dentro da funcao f2: "<<x<<std::endl;}

int main() { 
  int x=2; //variavel local
  std::cout <<"dentro da main: "<< x <<std::endl;
  f();
  f2(x);
  {
  int x = 3; // variavel dentro do bloco
  std::cout <<"dentro do bloco na main: "<< x <<std::endl;
  }
}