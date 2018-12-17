#include "gmock/gmock.h"
#include "Soundex.h"
using ::testing::Eq;
class SoundexEncoding:public testing::Test
{
public:
    Soundex soundex;
};
TEST_F(SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{

   //Arrange
   //Act
   //Assert
   ASSERT_THAT(soundex.encode("A"), Eq("A000"));
}

TEST_F(SoundexEncoding, PadsWithZerosToEnsureThreeDigits)
{
    //Arrange
    //Act
    //Assert
    ASSERT_THAT(soundex.encode("I"), Eq("I000"));
}

TEST_F(SoundexEncoding, ReplaceConsonantsWithAppropriateDigits)
{
    //Arrange
    //Act
    //Assert
    ASSERT_THAT(soundex.encode("Ab"), Eq("A100"));
}

TEST_F(SoundexEncoding, IgnoreNonAlphabetics)
{
    //Arrange
    //Act
    //Assert
    ASSERT_THAT(soundex.encode("Ab"), Eq("A100"));
}
TEST_F(SoundexEncoding, ReplaceMultipleConsonants)
{
    //Arrange
    //Act
    //Assert
    ASSERT_THAT(soundex.encode("Ab"), Eq("A100"));
}
TEST_F(SoundexEncoding, LimitLengthToFourCharacters)
{
    //Arrange
    //Act
    //Assert
    ASSERT_THAT(soundex.encode("Ab"), Eq("A100"));
}
TEST_F(SoundexEncoding, CombineDuplicateEncoding)
{
    //Arrange
    //Act
    //Assert
    ASSERT_THAT(soundex.encode("Ab"), Eq("A100"));
}
TEST_F(SoundexEncoding, UpperCaseFirstLetter)
{
    //Arrange
    //Act
    //Assert
    ASSERT_THAT(soundex.encode("Ab"), Eq("A100"));
}

TEST_F(SoundexEncoding, IgnoreVowelsLikeLetters)
{
    //Arrange
    //Act
    //Assert
    ASSERT_THAT(soundex.encode("Ab"), Eq("A100"));
}