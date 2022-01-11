class Solution {
public:
  
    static int getYear(string date){
        int year=0;
        for(int i=0;i<4;i++){
            year*=10;
            year+=(date[i]-'0');
        }
        return year;
    }
  
    static int getMonth(string date){
        int month=0;
        for(int i=5;i<7;i++){
            month*=10;
            month+=(date[i]-'0');
        }
        return month;
    }
  
    static int getDay(string date){
        int day=0;
        for(int i=8;i<=9;i++){
            day*=10;
            day+=(date[i]-'0');
        }
        return day;
    }
  
    static bool isLeapYear(int year){
        if( (year % 4 == 0 && year % 100 !=0) || (year % 100 ==0 && year % 400 == 0)) 
            return true;
        
        return false;
    }
  
    static int getNumberOfDaysInMonth(string date){
        int month = getMonth(date) ;
        int year = getYear(date);
        int totalDays=0;
        int months[14]={0,31,28 + isLeapYear(year),31,30,31,30,31,31,30,31,30,31};
        for(int m=1;m<month;m++){
            totalDays+=months[m];
        }
        return totalDays;
    }
  
    static int calcDays(string date){
        return getNumberOfDaysInMonth(date)+getDay(date);
    }
  
    int dayOfYear(string date) {
        return calcDays(date);
    }
};
// Runtime: 20 ms, faster than 56.32% of C++ online submissions for Day of the Year.
// Memory Usage: 6 MB, less than 51.62% of C++ online submissions for Day of the Year.
