#include<iostream>
using namespace std;
int top, status;


void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int pop (int stack[])
{
    int ret;
    if (top == -1)
    {   ret = 0;
	status = 0;
    }
    else
    {   status = 1;
	ret = stack [top];
	--top;
    }
return ret;
}

int knapsack(int *weight,int *index,int n,int limit)
{
   int top = -1;
  int x[n];
  int curr_weight=0;

  for( int i =0 ; i<n ; i++)
    {
       x[i]=0;

       int  j=pop(index);

                 if(curr_weight+weight[j]<limit)
            {
              x[i]=1;
              curr_weight+=weight[j];
            }
          else
          x[i]=(limit-curr_weight)/weight[j];

        }
    curr_weight=limit;*/

    cout<<"boooooooom !!!:"<<endl;
    for(int i=0 ;i<n ;i++)
   {
     cout<<""<<x[i];

   }

  return 0  ;

}
int main()
{
    int n,small,limit;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int weight[n],taka[n],index[n] , profit[n],x[n];

    cout<<"Enter weight times :"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>weight[i];
    }
    cout<<"Enter taka :"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>taka[i];

    }
    cout<<"Enter the max weight limit :"<<endl;
    cin>>limit ;
    for(int i=0;i<n;i++)
    {
      profit[i]=(taka[i]/weight[i]);
    }

    for (int i=0;i<n;i++)
    {
        index[i]=i;

    }
     cout<<endl;
  for (int i=0;i<n;i++)
    {
        cout<<index[i]<<" ";

    }
    cout<<endl;
    for (int i=0;i<n-1;i++)
    {
       small = i;
        for (int j=i+1;j<n;j++)
          if (profit[j]<profit[small])
            small=j;
        swap(&profit[small],&profit[i]);
        swap(&index[small],&index[i]);
    }
    cout<<"the sorted array"<<endl;
     for (int i=0;i<n;i++)
    {
        cout<<profit[i]<<" ";

    }
     cout<<endl;

    for (int i=0;i<n;i++)
    {
        cout<<index[i]<<" ";

    }
    cout<<endl;


   knapsack(weight,index,n,limit);




    return 0;
}
