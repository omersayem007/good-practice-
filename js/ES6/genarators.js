function* ctgjabo()
{
  console.log("cumilla");
  yield;
  console.log("chittagong!!!");
  
}


var bari=ctgjabo();

console.log(bari.next() );
console.log(bari.next() );
