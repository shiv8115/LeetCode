class Solution {
public: string s;   //global variable

void preorder(TreeNode* root)
    {
        s+=to_string(root->val);   //insert the value of root
        
        if(root->left)
        {
           s+="(";
            preorder(root->left);
            s+=")";
        }
        
        if(root->right)
        { 
            if(root->left==NULL)  //checking if left child is NULL ,if yes inserting ( )(
            {
			   s+="()(";
			}
           else
           {
		      s+="(";
		   }
             preorder(root->right);
             s+=")";  
        }
        
    }
    string tree2str(TreeNode* root) {
           
        preorder(root);   //calling the preorder function
        return s;        
    }
	};