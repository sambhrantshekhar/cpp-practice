#include <iostream>
#include <string>


using namespace std;
int main(){
  int n;
  /*std::cout << "hello please input a number: " << std::endl;
  std::cin >> n;
  
  std::cout <<  "the number was " << n << std::endl;*/

  string name;
  //int age;
  cout << "Enter your name " << endl;
  getline(std::cin,name);
 // std::cout << "Enter age " << std::endl;
 // std::cin >> age;

  cout <<"Your name is " << name /*<< " and your age is " << age */<< endl;
} 