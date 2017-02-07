function knapsack(w,benifit,limit)
{
  var x=[];
  for( var i =0 ; i<w.length ;i++)
    {
      x[i]=0;
     var weight=0;
      while(weight<limit)
        {
          i=best();
          if(weight+w[i]<limit)
            {
              x[i]=1;
              weight=weight+w[i];
            }
          else
            x[i]=(w-weight)/w[i];
          weight=limit;
        }
    }
  return x ;
  
}
console.log(knapsack([2,3,4,5],[3,4,5,6],5));
