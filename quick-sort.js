function partition(array,start,end)
{
  
  var pivot =array[end];
  var pindex=array[start];
  
  for(var i= pindex ;i<end-1 ;i++)
    {
      if(array[i]<=array[pivot])
        {
          
        }
        
    }
}

function quick_sort(array,start,end)
{
  if(start<end)
    {
      var pivot =partition(array,start,end);
      quicksort(array,start,pivot-1);
      quicksort(array,pivot+1 ,end);
      
    }
  
}

console.log(quick_sort( [2,7,3,5,4],0,4 ))
