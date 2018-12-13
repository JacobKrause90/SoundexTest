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