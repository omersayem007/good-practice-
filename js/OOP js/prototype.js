function foo( me)
{
  this.me=me;
  
}

foo.prototype.identify = function(){
  
  return "I am " + this.me ;
}

foo.prototype.speak = function(){
  return " Hello " + this.identify() +".";
}

var a1 = new foo("sayem");


console.log( a1.speak() );
