/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(21111111)) == nospaces(" ___ \n.....\n(.,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(31111111)) == nospaces("  _  \n /_\\\n(.,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(41111111)) == nospaces(" ___ \n(_*_)\n(.,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(12111111)) == nospaces("_===_\n(...)\n( : )\n( : )"));
	CHECK(nospaces(snowman(13111111)) == nospaces("_===_\n(._.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(14111111)) == nospaces("_===_\n(. .)\n( : )\n( : )"));
	CHECK(nospaces(snowman(11211111)) == nospaces("_===_\n(o,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(11311111)) == nospaces("_===_\n(O,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(11411111)) == nospaces("_===_\n(-,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(11121111)) == nospaces("_===_\n(.,o)\n( : )\n( : )"));
	CHECK(nospaces(snowman(11131111)) == nospaces("_===_\n(.,O)\n( : )\n( : )"));
	CHECK(nospaces(snowman(11141111)) == nospaces("_===_\n(.,-)\n( : )\n( : )"));
	CHECK(nospaces(snowman(11112111)) == nospaces("_===_\n(.,.)\n\\( : )\n( : )"));
	CHECK(nospaces(snowman(11113111)) == nospaces("_===_\n(.,.)\n( : )\n/( : )"));
	CHECK(nospaces(snowman(11114111)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(11111211)) == nospaces("_===_\n(.,.)\n( : )/\n( : )"));
    CHECK(nospaces(snowman(11111311)) == nospaces("_===_\n(.,.)\n( : )\n( : )\\"));
	CHECK(nospaces(snowman(11111411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(11111121)) == nospaces("_===_\n(.,.)\n(] [)\n( : )"));
	CHECK(nospaces(snowman(11111131)) == nospaces("_===_\n(.,.)\n(> <)\n( : )"));
	CHECK(nospaces(snowman(11111141)) == nospaces("_===_\n(.,.)\n(   )\n( : )"));
	CHECK(nospaces(snowman(11111112)) == nospaces("_===_\n(.,.)\n( : )\n(" ")"));
	CHECK(nospaces(snowman(11111113)) == nospaces("_===_\n(.,.)\n( : )\n(___)"));
	CHECK(nospaces(snowman(11111114)) == nospaces("_===_\n(.,.)\n( : )\n(   )"));
    /* Add more checks here */
}

TEST_CASE("Wrong amount of digits") {
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(22));
	CHECK_THROWS(snowman(333));
	CHECK_THROWS(snowman(4444));
	CHECK_THROWS(snowman(11111));
	CHECK_THROWS(snowman(222222));
	CHECK_THROWS(snowman(3333333));
	CHECK_THROWS(snowman(111111111));
    /* Add more checks here */
}

TEST_CASE("Negative digit") {
    CHECK_THROWS(snowman(-1));
	CHECK_THROWS(snowman(122-43333));
	CHECK_THROWS(snowman(1111111-1));
}

TEST_CASE("Wrong digit") {
	CHECK_THROWS(snowman(51111111));
	CHECK_THROWS(snowman(19111111));
	CHECK_THROWS(snowman(11711111));
	CHECK_THROWS(snowman(11161111));
	CHECK_THROWS(snowman(11118111));
	CHECK_THROWS(snowman(11111011));
	CHECK_THROWS(snowman(11111151));
	CHECK_THROWS(snowman(11111118));
}


/* Add more test cases here */
