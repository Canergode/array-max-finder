#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float numbers[100];

    // Get array size from user (must be between 1 and 99)
    printf("How many numbers will you enter:\n");
    scanf("%d",&n);

    // Validate input
    while(n>=100 || n<=0)
    {
        printf("How many numbers will you enter:\n");
        scanf("%d",&n);
    }

    // Get array elements from user
     for(i=0;i<n;i++)
     {
        printf("%d.number:",i+1);
        scanf("%f",&numbers[i]);
     }

     // Find maximum value
     for(i=1;i<n;i++)
     {
        if(numbers[0]<numbers[i])
        {
           numbers[0]=numbers[i];
        }
     }

     // Print the maximum element
      printf("Maximum element:%.2f",numbers[0]);

    return 0;
}
