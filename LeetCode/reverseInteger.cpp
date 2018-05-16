class Solution {
public:
    int reverse(int x) {
        if ((x==0)||(x>INT_MAX)){
            return 0;
        }
            
        int temp = abs(x);
        int rev=0;
        
        while(temp>0){
            if (rev > INT_MAX/10 || rev < INT_MIN/10){
                return 0;
            }
            rev = rev*10 + temp%10;
            temp = temp/10;
        }
        
        if(x<0){
            return -1*rev;
        }
        else{
            return rev;
        }
    }
};
