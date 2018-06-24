#ifndef NOKIATESTS_FINDDEPTH_H
#define NOKIATESTS_FINDDEPTH_H

#include <cstddef>

struct TreeNode
{
    TreeNode *leftChild {nullptr};
    TreeNode *rightChild {nullptr};
};

size_t getTreeDepth(TreeNode * aRoot);


#endif //NOKIATESTS_FINDDEPTH_H
