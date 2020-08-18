#include <iostream>
using namespace std;


void countMazePath(int endrow, int endcol, int curr_row, int curr_col,string S) {
	if(curr_row == endrow and curr_col == endcol) {
	    cout<<S<<"\n";
		return ;
	}
	if(curr_row > endrow or curr_col > endcol) {
		return;
	}
	
		countMazePath(endrow, endcol, curr_row, curr_col+1,S+"H");
		countMazePath(endrow, endcol, curr_row+1, curr_col,S+"V");
		countMazePath(endrow, endcol, curr_row+1, curr_col+1,S+"D");
		

}

int main()
{
    string S;
	countMazePath(2,2,0,0,S);
	return 0;
}

