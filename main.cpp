#include<iostream>
#include<string>
using namespace std;
int yearcode(int y)
{
    return (y+(y/4))%7;

}

int monthcode(char mon)
{
    if(mon==1)
        return 0;
    else if(mon==2)
    return 3;
    else if(mon==3)
        return 3;
    else if(mon==4)
        return 6;
    else if(mon==5)
        return 1;
    else if(mon==6)
        return 4;
    else if(mon==7)
        return 6;
     else if(mon==8)
        return 2;
      else if(mon==9)
        return 5;
       else if(mon==10)
        return 0;
        else if(mon==11)
            return 3;
        else
            return 5;
}

int centuarycode(int cen)
{
    if(cen==17)
        return 4;
    else if(cen==18)
        return 2;
    else if(cen==19)
        return 0;
    else if(cen==20)
        return 6;
    else if(cen==21)
        return 4;
    else if(cen==22)
        return 2;
    else
        return 0;
}
/* main program from here */
int main()
{
    int date;
    int month;
    cout<<"first enter date and next month and next year"<<"\n";
    cout<<"enter the date"<<"\n";
    cin>>date;
    cout<<"enter the month"<<"\n";
    cin>>month;
    cout<<"enter the year"<<"\n";
    cin>>year;
    int y;
    y=year%100;
    int c;
    c=year/100;
    int h;

    if(y%4 == 0)
    {
        if( y%100 == 0)
        {

            if ( y%400 == 0)

{
    if(month==1 || month==2)

                    h=(yearcode(y)+monthcode(month)+centuarycode(c)+date-1)%7;
                    else
                         h=(yearcode(y)+monthcode(month)+centuarycode(c)+date)%7;
        }

            else
                h=(yearcode(y)+monthcode(month)+centuarycode(c)+date)%7;
        }
        else


{
    if(month==1 || month==2)

                    h=(yearcode(y)+monthcode(month)+centuarycode(c)+date-1)%7;
                    else
                         h=(yearcode(y)+monthcode(month)+centuarycode(c)+date)%7;
        }

    }
    else
        h=(yearcode(y)+monthcode(month)+centuarycode(c)+date)%7;



     

#some comment


  if(h==0)
    cout<<"the day is sunday";
  else if(h==1)
    cout<<"the day is monday";
  else if(h==2)
    cout<<"the day is tuesday";
  else if(h==3)
  cout<<"the day is wednesday";
  else if(h==4)
    cout<<"the day is thursday";
  else if(h==5)
    cout<<"the day is friday";
  else
    cout<<"the day is saturday";

}
