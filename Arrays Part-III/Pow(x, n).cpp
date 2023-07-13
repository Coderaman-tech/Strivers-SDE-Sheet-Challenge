class Solution {
public:

   double func(double x,long long n,double ans){
       if(n==0)
       return 1;
       if(n%2==0){
          double b=func(x,n/2,ans);
          ans=b*b;
          return ans;
       }
       else{
          double b=func(x,(n-1)/2,ans);
          ans=b*b;
          ans*= x;
          return ans;
       }
      
   }
    double myPow(double x, int n) {
        double ans=0.0;
         long long a=n;
        if(n<0){
           
            return 1/func(x,-1*a,ans);
        }
        else
        return func(x,a,ans);
    }
};
