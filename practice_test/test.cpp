#include "pch.h"
#include "../number_english/numbers.h"
#define TEST(test_case_name, test_name)

TEST(dig1_test, result) 
{
	EXPECT_EQ(two, dig1(2));
	EXPECT_EQ(minus two, dig1(-2));
	EXPECT_EQ(zero, dig1(0));
}
TEST(dig2_test, result)
{
	EXPECT_EQ(twenty, dig(20));
	EXPECT_EQ(minus ninety nine, dig2(- 99));
	EXPECT_EQ(eighty seven, dig2(87));
}
TEST(dig3_test, result)
{
	EXPECT_EQ(one hundred, dig3(100));
	EXPECT_EQ(minus six hundred seventy four, dig3(-674));
	EXPECT_EQ(nine hundred ninety nine, dig3(999));
}
TEST(dig4, result)
{
	EXPECT_EQ(three thousand, dig4(3000));
	EXPECT_EQ(minus six thousand seven hundred fifty four, dig4(-6754));
	EXPECT_EQ(nine thousand nine hundred ninety nine, dig4(9999));
}
TEST(dig5, error) {
	EXPECT_EQ(ten thousand, dig5(10000));
	EXPECT_EQ(minus twenty nine thousand, dig5(-29000));
	EXPECT_EQ(twenty three thousand four hundred fifty six, dig5(23456));
}