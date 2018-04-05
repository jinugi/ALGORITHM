
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "iostream"
#include "string"
 #include <iostream>

#include <string>
using namespace std;
#define EMPTY_VALUE 0
#define STACK_SIZE 10000
class stack{
    public:
    void push(int i){index++;STACK[index] = i;}
    int pop(){
        if(index == EMPTY_VALUE)
            return -1;

        return STACK[index--];
    }

    int top(void)
    {
        if(index == EMPTY_VALUE)
            return -1;

        return STACK[index];
    }
    int size(){return index;}
    int empty(){return (index == (EMPTY_VALUE));}
    void init(){index = 0;}
    private:
    int index;
    int STACK[STACK_SIZE];
};

 

int main(int argc, char* argv[])
{

  int count = 4;
  int dummy;
  int *COMMAND;

  stack pStack;

  pStack.init();
  std::cin>>count;
  if((count < 1)||(count > 10000))
  {
    std::cout<<"INPUT FAIL\n";
    return 0;
  }

  cin.ignore();

  for(int i = 0; i<count;i++)
  {
     std::size_t found;
     string arg;
     std::getline(std::cin, arg);

     if(!arg.find("push"))
     {
        int data;
        data = atoi(&arg.c_str()[5]);
        if((data < 1)||(data > 100000))
        {
            std::cout<<"INPUT FAIL\n";
        }
        else
        {
            pStack.push(data);

        }
     }
     else if(!arg.find("pop"))
     {
           std::cout<<pStack.pop()<<"\n";
     }
     else if(!arg.find("top"))
     {
           std::cout<<pStack.top()<<"\n";
     }
     else if(!arg.find("size"))
     {
           std::cout<<pStack.size()<<"\n";
     }
     else if(!arg.find("empty"))
     {
           std::cout<<pStack.empty()<<"\n";
     }
     else
     {
        std::cout<<"INPUT FAIL\n";
     }

  }
  return 0;
}
