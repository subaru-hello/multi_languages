// const propsNumArr: number[] = [12, 23, 34]
function factorial(n) {
    if (n < 2) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}
console.log(factorial(10));
// > console.log(factorial(10))
// 3628800
