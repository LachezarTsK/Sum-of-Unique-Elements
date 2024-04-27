
function sumOfUnique(input: number[]): number {
    const RANGE_OF_VALUES = [1, 100];
    const frequency: number[] = new Array(RANGE_OF_VALUES[1] + 1).fill(0);
    for (let value of input) {
        ++frequency[value];
    }

    let sumOfUniqueValues = 0;
    for (let value = RANGE_OF_VALUES[0]; value <= RANGE_OF_VALUES[1]; ++value) {
        sumOfUniqueValues += (frequency[value] === 1) ? value : 0;
    }
    return sumOfUniqueValues;
};
