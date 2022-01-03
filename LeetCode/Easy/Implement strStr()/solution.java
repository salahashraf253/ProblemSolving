class Solution {
    public static int strStr(String haystack, String needle) {
        if(needle.length()==0)
            return 0;
        if(needle.length()>haystack.length())
            return -1;

        boolean flag=false;
        for(int i=0;i<haystack.length();i++){
            if(Character.compare(haystack.charAt(i),needle.charAt(0)) ==0 ){
                if(i+needle.length()-1<haystack.length()){
                    flag=true;
                    for(int j=1;j<needle.length() && i+j<haystack.length();j++){
                        if(Character.compare(haystack.charAt(i+j),needle.charAt(j)) !=0){
                            flag=false;
                            break;
                        }
                    }
                    if(flag)
                        return i;
                }
            }
        }
        return -1;
    }
}
