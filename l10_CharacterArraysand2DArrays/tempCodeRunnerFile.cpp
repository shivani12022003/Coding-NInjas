
	int col=0;
    while(col<mCols){
	   for(int row=0; row<=nRows-1; row++){
		cout<<input[row][col]<<" ";
	   }
	   col++;
	   for(int row=nRows-1; row>=0; row--){
		cout<<input[row][col]<<" ";
	   }
	    col++;
    }