//
//  class05.hpp
//  Algorithm-ChengYun Zuo
//
//  Created by Yan on 2022/7/4.
//

#ifndef class05_hpp
#define class05_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>


using namespace std;

//二叉树数据结构
struct binaryNode{
    int value;
    binaryNode* left;
    binaryNode* right;
    
    binaryNode(int value):value(value), left(nullptr), right(nullptr) {}
};

//二叉树的遍历
class PreInPosTraversal{
public:
    //
    static void preOrderRecur(binaryNode* head);
    static void inOrderRecur(binaryNode* head);
    static void posOrderRecur(binaryNode* head);
    static void preOrderUnRecur(binaryNode* head);
    static void inOrderUnRecur(binaryNode* head);
    static void posOrderUnRecur1(binaryNode* head);
    static void posOrderUnRecur2(binaryNode* head);
};











#endif /* class05_hpp */
