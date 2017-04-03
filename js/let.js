function foo (bar)
{
  if(bar){
    let  baz =bar ;
   
    if(baz)
    {
      let bam= "baz";
       console.log( bam) ;  // in the scope 
    }
  
  }
  console.log(baz); // error  
}

console .log( foo(5) );
