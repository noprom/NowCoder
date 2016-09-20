//
//  main.cpp
//  二叉树遍历
//
//  Created by noprom on 9/20/16.
//  Copyright © 2016 tyee.noprom@qq.com. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

struct Node {
    char ch;
    struct Node *lchild, *rchild;
    Node(char c): ch(c), lchild(NULL), rchild(NULL){}
};

int i = 0;
string str;

Node * createTree() {
    char c = str[i++];
    if (c == '#') {
        return NULL;
    }
    Node * root = new Node(c);
    root->lchild = createTree();
    root->rchild = createTree();
    return root;
}

void inOrderTraverse(Node* root) {
    if (root == NULL) {
        return;
    }
    inOrderTraverse(root->lchild);
    cout << root->ch << " ";
    inOrderTraverse(root->rchild);
}

int main(int argc, const char * argv[]) {
    while (cin >> str) {
        i = 0;
        Node *root = createTree();
        inOrderTraverse(root);
        cout << endl;
    }
    return 0;
}

/*
 题目描述
 
 编一个程序，读入用户输入的一串先序遍历字符串，根据此字符串建立一个二叉树（以指针方式存储）。 例如如下的先序遍历字符串： ABC##DE#G##F### 其中“#”表示的是空格，空格字符代表空树。建立起此二叉树以后，再对二叉树进行中序遍历，输出遍历结果。
 输入描述:
 输入包括1行字符串，长度不超过100。
 
 
 输出描述:
 可能有多组测试数据，对于每组数据，
 输出将输入字符串建立二叉树后中序遍历的序列，每个字符后面都有一个空格。
 每个输出结果占一行。
 
 输入例子:
 abc##de#g##f###
 
 输出例子:
 c b e g d f a
*/