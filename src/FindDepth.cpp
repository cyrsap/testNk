#include <algorithm>
#include "FindDepth.h"


size_t getDepth(TreeNode * aNode, size_t aCurrDepth) {
    if (!aNode) {
        return aCurrDepth;
    }

    return std::max(getDepth(aNode->leftChild, aCurrDepth + 1), getDepth(aNode->rightChild, aCurrDepth + 1));
}


size_t getTreeDepth(TreeNode *aRoot)
{
    return getDepth(aRoot, 0);
}
