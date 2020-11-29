/*
 * @lc app=leetcode.cn id=429 lang=cpp
 *
 * [429] N叉树的层序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if (!root) return res;
        queue<Node*> que;
        que.push(root);
        while (!que.empty()) {
            int n = que.size();
            vector<int> vec;
            for (int i = 0; i < n; i ++) {
                Node *node = que.front();
                que.pop();
                vec.push_back(node->val);
                for (int i = 0; i < node->children.size(); i++) {
                    if (node->children[i]) que.push(node->children[i]);
                }
            }
            res.push_back(vec);
        }
        return res;
    }
};
// @lc code=end

