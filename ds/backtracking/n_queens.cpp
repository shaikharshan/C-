#include <bits/stdc++.h> 
void addsolution(vector<vector<int>> &ans,vector<vector<int>> &board,int n)
{
	vector<int> temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			temp.push_back(board[i][j]);
		}
	}
	ans.push_back(temp);
}
bool issafe(int row,int col,vector<vector<int>> &ans,vector<vector<int>> &board,int n)
{
	int x= row;
	int y = col;
	//row
	while(y>=0)
	{
		if(board[x][y]==1)
		{
			return false;
		}
		y--;
	}
	//diagonals
	x=row;
	y=col;
	while(row>=0 && col>=0)
	{
		if(board[x][y]==1)
		{
			return false;
		}
		y--;
		x--;
	}
	x=row;
	y=col;
	while(row>=0 && col>=0)
	{
		if(board[x][y]==1)
		{
			return false;
		}
		y--;
		x++;
	}
	return true;
}
void solve(int col,vector<vector<int>> &ans,vector<vector<int>> &board,int n)
{
	//base case 
	if(col==n)
	{
		addsolution(ans,board,n);
		return;
	}
	for(int row=0;row<n;row++)
	{
	if(issafe(row,col,ans,board,n))
	{
		//queen can be placed
		board[row][col]=1;
		solve(col+1,ans,board,n);
		//backtracking
		board[row][col]=0;
	}
	}
	

}
vector<vector<int>> nQueens(int n)
{
	// Write your code here
	vector<vector<int>> board(n,vector<int>(n,0));
	vector<vector<int>> ans;
	solve(0,ans,board,n);
	return ans;

	
}