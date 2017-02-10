#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int knapsack(weight,benifit,limit)
{

  var x=[];
  var curr_weight=0;

  for( var i =0 ; i<weight.length ; i++)
    {
       x[i]=0;
          if(curr_weight+weight[i]<limit)
            {
              x[i]=1;
              curr_weight+=weight[i];
            }
          else
          x[i]=(limit-curr_weight)/weight[i];

        }
    curr_weight=limit;
  return x  ;

}
int main()
{
    int n,small;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int weight[n],taka[n],index[n] , profit[n];;

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

    cout<<endl;
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
          if (profit[j]>profit[small])
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

     cout<<""<<x;
    return 0;
}
