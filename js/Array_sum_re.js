function sum( arr,i )
{
  i--;
  
  return i=== 0 ? arr[i] : arr[i]+sum( arr , i) ;
  
}

console.log( sum( [5,3,4] , 3) );
