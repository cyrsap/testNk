#define CATCH_CONFIG_MAIN
#include <catch.hpp>

#include "FirstNPrimeNumers.h"
#include "TextAndLetters.h"
#include "MaxAndMinNumber.h"
#include "RemoveListElems.h"
#include "FindDepth.h"

TEST_CASE("First N prime numbers") {
    auto result = getFirstNPrimeNumbers(10);
    REQUIRE(result.size() == 10);
    REQUIRE(result[0] == 2);
    REQUIRE(result[1] == 3);
    REQUIRE(result[2] == 5);
    REQUIRE(result[3] == 7);
    REQUIRE(result[4] == 11);
    REQUIRE(result[5] == 13);
    REQUIRE(result[6] == 17);
    REQUIRE(result[7] == 19);
    REQUIRE(result[8] == 23);
    REQUIRE(result[9] == 29);
}

TEST_CASE("Letters quan") {
    auto result = getLettersStats("1 22 333 4444");
    REQUIRE(result.size() == 4);
    REQUIRE(result.find(0) == result.end());
    REQUIRE(result.find(1) != result.end());
    REQUIRE(result.find(2) != result.end());
    REQUIRE(result.find(3) != result.end());
    REQUIRE(result.find(4) != result.end());
    REQUIRE(result.find(5) == result.end());
}

TEST_CASE("Remove every fith elem") {
    List * root = new List;
    List * second = new List;
    List * third = new List;
    List * fourth = new List;
    root->next = second;
    root->payload = 1;
    second->next = third;
    second->payload = 2;
    third->next = fourth;
    third->payload = 3;
    fourth->next = nullptr;
    fourth->payload = 4;

    removeEveryNthElemFromList(root, 2);

    std::vector<int> vec;

    List * curr = root;
    while (curr) {
        vec.push_back(curr->payload);
        curr = curr->next;
    }

    REQUIRE(vec.size() == 2);
    REQUIRE(vec[0] == 1);
    REQUIRE(vec[1] == 3);

    delete root;
    delete third;
}

TEST_CASE("Bits") {
    auto result = getMinAndMaxFrom32bitbits(0x02);
    REQUIRE(result.first == 0x01);
    REQUIRE(result.second == 0x80000000);

    result = getMinAndMaxFrom32bitbits(0xF000);
    REQUIRE(result.first == 0x0F);
    REQUIRE(result.second == 0xF0000000);
}

TEST_CASE("Btree Depth") {
    TreeNode * root   = new TreeNode;
    TreeNode * left1  = new TreeNode;
    TreeNode * left2  = new TreeNode;
    TreeNode * left3  = new TreeNode;
    TreeNode * left4  = new TreeNode;
    TreeNode * right1 = new TreeNode;
    TreeNode * right2 = new TreeNode;

    root->leftChild = left1;
    root->rightChild = right1;
    left1->leftChild = left2;
    left2->leftChild = left3;
    left3->leftChild = left4;

    right1->rightChild = right2;

    REQUIRE(getTreeDepth(root) == 5);

    delete root;
    delete left1;
    delete left2;
    delete left3;
    delete left4;
    delete right1;
    delete right2;
}