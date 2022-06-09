#include "gtest/gtest.h"
int ScrabbleScore(std::string& word); 
std::string word;

TEST(word, EmptyWordGives0)
{
  word = "";
  ASSERT_EQ(ScrabbleScore(word), 0);
}

TEST(word, CabbageGives13)
{
  word = "cabbage";
  ASSERT_EQ(ScrabbleScore(word), 13);
}

TEST(word, AllOnePointsLettersGive10)
{
  word = "aeioulnrst";
  ASSERT_EQ(ScrabbleScore(word), 10);
}

TEST(word, AllTwoPointsLettersGive4)
{
  word = "dg";
  ASSERT_EQ(ScrabbleScore(word), 4); 
}

TEST(word, AllThreePointsLettersGive12)
{
  word = "bcmp";
  ASSERT_EQ(ScrabbleScore(word), 12); 
}

TEST(word, AllFourPointsLettersGive16)
{
  word = "fhvwy";
  ASSERT_EQ(ScrabbleScore(word), 16); 
}

TEST(word, AllFivesPointsLettersGive5)
{
  word = "k";
  ASSERT_EQ(ScrabbleScore(word), 5); 
}

TEST(word, AllEightPointsLettersGive16)
{
  word = "jx";
  ASSERT_EQ(ScrabbleScore(word), 16); 
}

TEST(word, AllTenPointsLettersGive20)
{
  word = "qz";
  ASSERT_EQ(ScrabbleScore(word), 20); 
}
