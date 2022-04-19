
/**
 * @param {number[]} input
 * @return {number}
 */
var findClosestNumber = function (input) {
    const maxValue = Math.pow(10, 5);
    let closest = maxValue + 1;
    for (let n of input) {
        if (Math.abs(n) < Math.abs(closest) || n === Math.abs(closest)) {
            closest = n;
        }
    }
    return closest;
};
