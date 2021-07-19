// squareroot using binary search upto p precision 
// Nishtha Gupta 
// 1910990157

#include <iostream>
using namespace std;

float squareroot(int number,int precision)
{
    int s=0,l=number;
    float ans;
    int mid;
    while(s<=l)
    {
        mid=(s+l)/2;
      if(mid*mid==number)
     { ans=mid;
      break;
     }
      
      if(mid*mid<number)
     { s=mid+1;
       ans=mid;
     }  
      else
     { l=mid-1;
     }
     
    }
 float increment=0.1;
for(int i=0;i<precision;i++)
{
    while(ans*ans<=number)
    {
        ans+=increment;
}

ans-=increment;
increment=increment/10;
}
return ans;
}

int main()
{
    int n,p;
    cin>>n>>p;
    cout<<squareroot(n,p)<<endl;

return 0;
}
