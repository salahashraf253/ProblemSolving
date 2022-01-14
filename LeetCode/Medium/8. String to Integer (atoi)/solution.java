class Solution {
    static int toInteger(String s){
        if(s.length()==0)return 0;
        int res=0;
        int i=0;
        while (s.charAt(i)==' ' &&i<s.length()-1)i++;
        boolean isNegative=false;
        if(s.charAt(i)=='-'||s.charAt(i)=='+'){
            isNegative= s.charAt(i) == '-';
            i++;
        }
        for (;i<s.length();i++){
            if(s.charAt(i)>='0'&&s.charAt(i)<='9'){
                if(res > Integer.MAX_VALUE/10 ||(res==Integer.MAX_VALUE/10 && (s.charAt(i)-'0')>7)){
                return isNegative?Integer.MIN_VALUE:Integer.MAX_VALUE;
                }
                res*=10;
                res+=s.charAt(i)-'0';
            }
            else break;
        }
        return isNegative ? res*-1:res;
    }
    public int myAtoi(String s) {
        return toInteger(s);
    }
}
// Runtime: 3 ms, faster than 49.08% of Java online submissions for String to Integer (atoi).
// Memory Usage: 40 MB, less than 10.56% of Java online submissions for String to Integer (atoi).

