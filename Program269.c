#include<stdio.h>
void DisplayR()
{
    static int i=1;
    if(i<=4)
    {
        printf("*\n");
        i++;
        DisplayR();   //Recursive call
    }

}
int main()
{
    printf("inside main\n");
    DisplayR();
    printf("end of main\n");
    return 0;
}