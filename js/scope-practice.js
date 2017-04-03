A();

function C(){
  console.log("OOPs");
}

function E(f)
{
  console.log("E");
  f();
  var  f = F ;
}

var A = function(){
  
  console.log("A");
  B();
};

var C;

function G(){
  console.log("G");
  H();
  
  var H=function(){
    console.log("H");
    I();
  };
}

var D=d;

function d(){
  console.log("D");
  E();
}

function I(){
  console.log("I");
  J();
  J();
}

B=function(){
  console.log("B");
  C();
};

var F=function(){
  console.log("F");
  G();
};

var rest="KLMNOPQRSTUVWXYZ".split("");
for(var i=0; i< rest.length;i++){
  (function(i){
    
    window[rest[i]]=function(){
       console.log( rest[i]);
       if(i < (rest.length-1)){
         
       }
    
    
    };
    
  }(i);
}

var J=function(){
  j=function(){
    console.log("J");
    K();
  };
};

function C(){
  console.log("C");
  D();
}
