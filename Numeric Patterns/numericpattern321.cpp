#include <iostream>
using namespace std;

int main()
{
   
   int size=5;
   int top=0;
   int bottom=size-1;
   
   for(int i=0;i<size;i++){
       for(int j=0;j<size;j++){
           
           if(i==top+1){
               if(j==size-1)
                    cout<<2<<" ";
                else
                    cout<<" "<<" ";  
           }
           
           else if(i==bottom-1){
               cout<<2;
               break;
           }
           
           else{
             cout<<2<<" ";
            }
            
       }
       cout<<endl;
   }

    return 0;
}
