#include<Iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target)
{
    int tRow=matrix.size(); int tCol=matrix[0].size();
    int s=0; int e=(tRow*tCol)-1;int mid;
    cout<<s<<"=s,e="<<e<<endl;
    
    while(s<=e)
    {
        mid=matrix[tRow/2][tCol/2];
        // int rMid=tRow/2;
        // int cMid=tCol/2;
        if(matrix[tRow][tCol]==target)
        {
            return true;
        }
        else if(matrix[tRow][tCol]<target)
        {
            tRow=tRow+1; 
            tCol=tCol+1; 
            // s=rMid+1;
            // mid=matrix[tRow/2][tCol/2];
        }
        else
        {
            tRow=tRow-1; 
            tCol=tCol-1; 
        }
    }
    return false;
}

int main()
{
    vector<vector<int> >matrix={{0,1,2},{3,4,5},{6,7,8}};
    int target=3;
    bool ans=searchMatrix(matrix,target);
    if(ans)
    {
        cout<<target<<" is present in the given 2d array."<<endl;
    }
    else 
    {
        cout<<target<<" is not present in the given 2d array."<<endl;
    }
}