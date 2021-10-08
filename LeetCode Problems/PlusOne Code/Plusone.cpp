class Solution {
public:
vector plusOne(vector& digits) {

   for(int i = digits.size()-1;i>=0;i--){
       
       if(digits[i] < 9){
           digits[i]++;
           break;
       }
       else if(i != 0 && digits[i]==9){
           digits[i] = 0;
       }
       else{
         digits[0]=0;
         digits.insert(digits.begin(),1);
       }
   }
    return digits;
}
};
