
using System;

public class Solution
{
    private static readonly int[] RANGE_OF_VALUES = { 1, 100 };

    public int SumOfUnique(int[] input)
    {
        int[] frequency = new int[RANGE_OF_VALUES[1] + 1];
        foreach (int value in input)
        {
            ++frequency[value];
        }

        int sumOfUniqueValues = 0;
        for (int value = RANGE_OF_VALUES[0]; value <= RANGE_OF_VALUES[1]; ++value)
        {
            sumOfUniqueValues += (frequency[value] == 1) ? value : 0;
        }
        return sumOfUniqueValues;
    }
}
