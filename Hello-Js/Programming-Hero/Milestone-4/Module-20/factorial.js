function getFactorial(num){
    var fact = 1
    for(var i = 1; i<=num; i++){
        fact *= i;
    }
    console.log(fact);
}

getFactorial(5)