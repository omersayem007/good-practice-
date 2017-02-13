#include<iostream>
using namespace std;

int knapsack(int weight[],int taka[],int n, int limit)
{
    int B[n+1][limit+1];

    for(int i=0;i<=limit;i++)
    {
        B[0][i]=0;
    }
    for(int i=0;i<=n;i++)
    {
        B[i][0]=0;
    }

   for(int i=1 ;i<=limit;i++)
    {
         for(int w=1 ;w<=n;w++)

        {

             if(weight[i]<w)
        {
                if ( taka[i]+ B[i-1,w-weight[i]] > B[i-1,w] )
                {

                 B[i,w] = taka[i]+B[i-1,w-weight[i]];
                }

			else
				B[i,w] = B[i-1,w];
        }
		else B[i,w] =B[i-1,w]  ;

        }



    }


}


int main()
{
     int n,small,limit;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int weight[n],taka[n];

    cout<<"Enter weights :"<<endl;

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
    knapsack(weight,taka,n,limit);

}
