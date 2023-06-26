pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
    if(root==NULL) {
        pair<int,int> p;
        p.first = INT_MAX;
        p.second = INT_MIN;
        return p;
    }
    pair<int,int> leftAns = getMinAndMax(root->left);
    pair<int,int> rightAns = getMinAndMax(root->right);
    
    pair<int,int> ans;
    ans.first = min(root->data, min(leftAns.first,rightAns.first));
    ans.second = max(root->data, max(leftAns.second,rightAns.second));
    return ans;
}



void trav(BinaryTreeNode<int>* root,int &minx,int &maxx){
    
    if(root==NULL)
        return;
    
    minx=min(minx,root->data);
    maxx=max(maxx,root->data);
    
    trav(root->left,minx,maxx);
    trav(root->right,minx,maxx);
}

pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
    pair<int, int> p
    int minx=INT_MAX;
    int maxx=INT_MIN;
    
    trav(root,minx,maxx);
    
    //PairAns p;
    p.first=minx;
    p.second=maxx;
    return p; 
   
}