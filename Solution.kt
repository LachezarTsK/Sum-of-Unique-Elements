
class Solution {

    companion object {
        val RANGE_OF_VALUES = intArrayOf(1, 100);
    }

    fun sumOfUnique(input: IntArray): Int {
        val frequency = IntArray(RANGE_OF_VALUES[1] + 1);
        for (value in input) {
            ++frequency[value];
        }

        var sumOfUniqueValues = 0;
        for (value in RANGE_OF_VALUES[0]..RANGE_OF_VALUES[1]) {
            sumOfUniqueValues += if (frequency[value] == 1) value else 0;
        }
        return sumOfUniqueValues;
    }
}
