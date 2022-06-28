#include<iostream>
using namespace std;

void loopR(int a[][7],int row,int from,int untill){
    int zz;
    for(zz=from;zz<=untill;zz++){
        cout<<a[row][zz]<<" ";
    }
}

void loopD(int a[][7],int col,int from,int untill){
    int zz;
    for(zz=from;zz<=untill;zz++){
        cout<<a[zz][col]<<" ";
    }
    
}

void loopL(int a[][7],int row,int from,int untill){
    int zz;
    for(zz=from;zz>=untill;zz--){
        cout<<a[row][zz]<<" ";
    }
}
void loopU(int a[][7],int col,int from,int untill){
    int zz;
    for(zz=from;zz>=untill;zz--){
        cout<<a[zz][col]<<" ";
    }
    
}

int main(){

    int row=5,col=7;
    int a[5][7]={{0,1,2,3,4,5,6},
                 {7,8,9,10,11,12,13},
                 {14,15,16,17,18,19,20},
                 {21,22,23,24,25,26,27},
                 {28,29,30,31,32,33,34} };
                   
    int top=0,bottom=row-1,left=0,right=col-1;
    int loop=0;

    while(top<=bottom && left<=right){

        if(loop==0){ // left to right

            loopR(a,top,left,right);
            top++;
        }
        else if(loop==1){ // up to down
            loopD(a,right,top,bottom);
            right--;
        }   
        else if(loop==2){ // right to left
            loopL(a,bottom,right,left);
            bottom--;
        }
        else if(loop==3){ // bottom to up
            loopU(a,left,bottom,top);
            left++;
        }
        loop=(loop+1)%4;
    }
   
   
    return 0;
}