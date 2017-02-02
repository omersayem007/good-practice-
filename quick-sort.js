function partition(array,start,end)
{
  
  var pivot =array[end];
  var pindex=start;
  var temp;
  
  
  
   for(var i=pindex ; i<end-1 ;i++)
   {
    
      if(array[i]<=pivot)
        {
          temp=array[i];
          array[i]=array[pindex];
          array[pindex]=temp;
          
          pindex++;
        }
      
   }

  temp=pivot;
  array[end]=array[pindex];
  array[pindex]=temp;
  
  return array;
  
}

function quick_sort(array,start,end)
{
  if(start<end)
    {
      var pivot =partition(array,start,end);
      quick_sort(array,start,pivot-1);
      quick_sort(array,pivot+1 ,end);
      
    }
  return array;
}

console.log( partition( [7,2,1,6,8,5,3,4] ,0,7 ) );
