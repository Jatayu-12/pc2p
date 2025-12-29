#include<iostream>

 namespace Student{
    void announce(){
        std::cout << "I am learning Namespaces !" << std::endl;
    }
 }
using std::cout;
using std::endl;
int main(){
    Student::announce();
    cout << "Hello World!!" << endl;
}