class Solution {
public:
    bool canAliceWin(int n) {
      if((n<=9) || (n>=19 && n<=26) || (n>=34 && n<=39) || (n>=45 && n<49)){
        return false;
      }
     return true;
    }
};