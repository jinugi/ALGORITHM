
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

static void swap(int* A, int* B)
{
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;
}

static void sort(int* input, int count)
{
    //descending

    for(int i =0; i<count; i++)
    {
        for(int j =0; j<(count-1);j++)
        {
            if(input[j]>input[j+1])
                swap(&input[j], &input[j+1]);
        }
    }
}

static int CenterValue(int* input, int cnt)
{
  int centervalue = 0;
  
  int* temp = new int[cnt];

  memcpy(temp, input, cnt*sizeof(int));
  
  //for(int i=0; i<cnt; i++)
  //  cout<<temp[i];

//  cout<<"\n";

  sort(&temp[0],cnt);
  
  centervalue = temp[((cnt+1)/2)-1];

 // cout<<"center value = "<<centervalue<<"\n";
  return centervalue;
}
int main(int argc, char* argv[])
{
    int sum = 0;
    int N = 0;
    int* buffer;
    int K; // # of ceter value 
    cin>>N>>K;

//    cout<<"N ="<<N<<"K = "<<K<<"\n";

    if(N < 1 || N > 250000)
    {
        cout<<"Invalid input\n";
	return 0;
    }
    if(K < 1 || K > 5000)
    {
        cout<<"Invalid input\n";
	return 0;
    }

    if(K > N)
    {
        cout<<"Invalid input\n";
	return 0;
    }

    buffer = new int[N];

    for(int i = 0; i<N ;i++)
    {
        int data;
        cin>>data;
        if((data < 0)||(data > 65535))
	{
           cout<<"Invalid input\n";
	   return 0;
	}
        buffer[i] = data;
    }
    
    for(int j = 0; j<(N-K+1); j++)
    {
       int centervalue = 0;
       centervalue = CenterValue(&buffer[j],K);
       sum += centervalue; 
    }
    //cout<<"Result = "<<sum<<"\n";
    cout<<sum<<"\n";
    return 0;
}

 
