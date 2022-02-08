 if (root == NULL)
    {
        return;
    }
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != NULL)
    {

        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":";

        if (front->left)
        {
            if (front->left->data != -1)
            {
                cout << "L:" << front->left->data << ",";
                pendingNodes.push(front->left);
            }
        }
        else
        {
            cout << "L:"<< "-1"<< ",";
        }


        if (front->right)
        {
            if (front->right->data != -1)
            {
                cout << "R:" << front->right->data;
                pendingNodes.push(front->right);
            }
        }
        else
        {
            cout << "R:"<< "-1";
        }

        cout<<endl;
    }
