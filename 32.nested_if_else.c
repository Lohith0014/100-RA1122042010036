int main()
{
    printf("RA2211042010036\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 0) {
        if (num == 0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    } 
    else
        printf("You entered a positive number.");
}
