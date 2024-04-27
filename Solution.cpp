
#include <array>
#include <vector>
using namespace std;

class Solution {

    static constexpr array<int, 2> RANGE_OF_VALUES{ { 1, 100 } };

public:
    int sumOfUnique(const vector<int>& input) const {
        array<int, RANGE_OF_VALUES[1] + 1> frequency{};
        for (const auto& value : input) {
            ++frequency[value];
        }

        int sumOfUniqueValues = 0;
        for (int value = RANGE_OF_VALUES[0]; value <= RANGE_OF_VALUES[1]; ++value) {
            sumOfUniqueValues += (frequency[value] == 1) ? value : 0;
        }
        return sumOfUniqueValues;
    }
};
