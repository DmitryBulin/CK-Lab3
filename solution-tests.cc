#include <gtest/gtest.h>
#include "solution.cc"
#include <vector>
#include <utility>

using namespace std;

vector<pair<vector<int>, vector<int>>> test_data;

TEST(SortTest, EqualSize)
{
    vector<vector<int>> tests = 
    {
        {{1, 2, 3}}
    };
    for (auto test : tests)
        ASSERT_EQ(MyOnSort(test).size(), test.size());
}

TEST(SortTest, RandomPositiveNumbers) {
    test_data = 
    {
        {{1, 4, 2}, {1, 2, 4}},
        {{1, 6, 645, 5, 77, 2, 1}, {1, 1, 2, 5, 6, 77, 645}},
        {{1, 2}, {1, 2}}
    };
    for (auto test : test_data)
        EXPECT_EQ(MyOnSort(test.first), test.second);
}

TEST(SortTest, NegativeNumbers)
{
    test_data = 
    {
        {{-1, -43, -4}, {-43, -4, -1}}
    };
    for (auto test : test_data)
        EXPECT_EQ(MyOnSort(test.first), test.second);
}

TEST(SortTest, LotsOfEqualNumbers)
{
    test_data = 
    {
        {{1, 1, 1, 2, 1, 1, 3, 1, 1, 1}, {1, 1, 1, 1, 1, 1, 1, 1, 2, 3}}
    };
    for (auto test : test_data)
        EXPECT_EQ(MyOnSort(test.first), test.second);
}