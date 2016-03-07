/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}
TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_FALSE( minefield.isSafe(4,5) );
}
TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_FALSE( minefield.isSafe(4,5) );
	//ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}
TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_TRUE( minefield.isSafe(3,5) );
	//ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}
TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_FALSE( minefield.isSafe(4,8) );
	//ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}
TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_FALSE( minefield.isSafe(14,5) );
	//ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}
