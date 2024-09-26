// You are using GCC
#include<iostream>
using namespace std;
class MatrixManipulator{
    public:
    void smatrix(int arr[][10],int r,int c,int c1,int c2){
        
        for(int i=0;i<r;i++){
            // for(int j=0;j<c;j++){
                int temp=arr[i][c1];
                arr[i][c1]=arr[i][c2];
                arr[i][c2]=temp;
                
            // }
        }
        
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<arr[i][j];
            }
            cout<<endl;
            
        }
        
    }
    
};

int main(){
    int t;
    cin>>t;
    while(t-- > 0){
        int r,c;
        cin>>r>>c;
        int arr[10][10];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>arr[i][j];
                
            }
        }
        int c1,c2;
        cin>>c1>>c2;
        
        MatrixManipulator m1;
        m1.smatrix(arr,r,c,c1,c2);
        
        
    }
    
    
    return 0;
}