class Solution {
public:
    int myAtoi(string str) {

        int i=0;
        int start=0; //flag when conversion start
        int countsym=0;
        int symval=1;

        long double temp=0;

        while(((int(str[i])<58 && int(str[i])>47) || int(str[i]==32) || int(str[i])==45 ||
               int(str[i]==43)) && i<str.size())
        {
            if(start && (int(str[i]==32)||int(str[i])==45 || int(str[i]==43)))
                break;


            if((int(str[i])<58 && int(str[i])>47)||( int(str[i])==45 || int(str[i]==43))){
                start=1;
                if(int(str[i])==45 || int(str[i]==43)){
                   if(int(str[i])==45)
                       symval=-1;
                }
            }


            if(int(str[i])<58 && int(str[i])>47){
                long x=int(str[i])-48;
                temp=temp*10+x;
            }


            i++;
        }
        temp=temp*symval;

        if(temp<INT_MIN)
            return INT_MIN;
        else if(temp>INT_MAX)
            return INT_MAX;
        else
            return temp;



    }
};
