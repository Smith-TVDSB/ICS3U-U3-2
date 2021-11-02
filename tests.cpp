// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch.hpp"
#include "additionalFunctions.hpp"
#include "student.hpp" // student implementations

//TESTS

int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

TEST_CASE("Exercise One") //Named ExerciseOne, tagged with example
{
    CHECK(exerciseOne('Z')==26);
    CHECK(exerciseOne('A')==1);
    int count = 1;
    for(char i='A'; i <= 'Z';i++)
    {
        REQUIRE(exerciseOne(i)==count);
        count++;
    }   
}

TEST_CASE("Exercise Two")
{
    CHECK(exerciseTwo(7)=="1234567654321");
    CHECK(exerciseTwo(5)=="123454321");
    CHECK(exerciseTwo(10)=="12345678910987654321");
    CHECK(exerciseTwo(1)=="1");
    CHECK(exerciseTwo(0)=="");
    CHECK(exerciseTwo(-5)=="");
}

TEST_CASE("Exercise Three")
{
    CHECK(exerciseThree(7)==true);
    CHECK(exerciseThree(1)==false);
    CHECK(exerciseThree(2)==true);
    CHECK(exerciseThree(13)==true);

    for (int j=2; j<=100;j++)
    {
        if(inArray(primes,j))
        {
            REQUIRE(exerciseThree(j)==true);
        }
        else
        {
            REQUIRE(exerciseThree(j)==false);
        }
    }
}

// Notes for teacher: 
// can use variables and libraries
// can use logic operators and loops
// you can run a specific test by using ./tests <TEST CASE NAME HERE>


