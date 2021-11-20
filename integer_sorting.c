// sorting array in ascending order

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the size of array :");
    scanf("%d", &num);
    int numbers[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter the number :");
        scanf("%d",&numbers[i]);
    }
    //logic
    for (int i = 0; i < num; i++)
    {
        for (int j = i+1; j < num; j++)
        {
            if (numbers[i]>numbers[j])
            {
                int temp=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=temp;
            } 
        }
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d ",numbers[i]);
    }
    return 0;
}