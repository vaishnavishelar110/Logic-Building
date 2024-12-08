#include<stdio.h>
void DisplayR()
{
     int i=1;
    if(i<=4)
    {
        printf("*\n");
        i++;
        DisplayR();   //Recursive call
    }

}
int main()
{
    DisplayR();
    return 0;
}