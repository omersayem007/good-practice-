function exponent ( base ,expo )
{
  
expo--;
  return expo === 0 ? base : base*exponent( base ,expo);
  
}

console.log( exponent(8,3) );
