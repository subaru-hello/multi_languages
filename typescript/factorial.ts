
function factorial(n: number): number {
    if(n < 2) {
        return 1;
    } else{
        return n * factorial( n - 1 )
    }
}

console.log(factorial(10))
// $  tsc ./typescript/factorial.ts && node ./typescript/factorial.js 
// 3628800
