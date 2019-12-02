#include<iostream>
using namespace std ;
class date
{
    int day , month , year , a[13];
public :
    date()
    {
        a[1]=31 ; a[2]= 28 ; a[3]=31 ;
        a[4]=30; a[5]= 31 ; a[6]=30;
        a[7]=31 ; a[8]= 31 ; a[9]=30;
        a[10]=31; a[11]= 30; a[12]=31 ;

    }
    date operator + (int n)
    {
        int i=0;
        for(i=1;i<=n ; i++)
        {
            day++;
            if(year%4==0 && month == 2 )
            {
                if(day > a[month]+1 )
                {
                    month ++ ;
                    day=1;
                }
            }
            else if(day > a[month ])
            {
                month ++ ;
                day = 1;
            }
            if(month > 12)
            {
                year ++ ;
                month = 1;
            }
        }
        return *this ;
    }
    int operator -(date &d2)
    {
        int n=0 ;
        while(d2.year != year || d2.month!= month || d2.day!= day)
        {
            n++;
            d2.day++;
            if(d2.year%4== 0 && d2.month == 2)
            {
                if(d2.day > d2.a[d2.month] + 1)
                {
                    d2.month ++ ;
                    d2.day = 1;
                }
            }
            else if(d2.day > d2.a[d2.month] )
                {
                    d2.month ++;
                    d2.day = 1;
                }
                if(d2.month > 12)
                {
                    d2.month = 1 ;
                    d2.year ++ ;
                }
            }
            return n ;
        }
        void getdate()
        {
             cout<<"Enter the day, month and year \n";
             cin>>day>>month>>year ;
        }
        friend ostream & operator <<(ostream & a, date &b);

};
ostream &operator <<(ostream &out , date &d)
{
    out <<d.day<<"-"<<d.month<<"-"<<d.year <<endl ;
    return out ;
}
int  main()
{
    int n ;
    date d1 , d2 , d3 ;
    d1.getdate();
    d2.getdate();
    cout<<"Enter the number of dates to increase \n";
    cin>>n;
    d1 =  d1 + n ;
    n = d1  - d2 ;
    cout<<d1 ;
    cout<<n ;
    return 4;
}
