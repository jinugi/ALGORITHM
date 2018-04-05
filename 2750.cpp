#include <iostream>
#include <string>


using namespace std;

static void swap(int* A, int* B)
{
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;
}

int main(int argc, char* argv[])
{

    int count;
    int* buffer;
    cin>>count;

    buffer = new int[count];

    for(int i = 0; i<count ;i++)
    {
        int data;
        cin>>data;
        buffer[i] = data;
    }

 

    //descending

    for(int i =0; i<count; i++)
    {
        for(int j =0; j<(count-1);j++)
        {
            if(buffer[j]>buffer[j+1])
                swap(&buffer[j], &buffer[j+1]);
        }
    }

    cout<<"Result\n";
    

    for(int i = 0; i<count ;i++)
    {
        cout<<buffer[i]<<"\n";
    }
    return 0;
}

 
