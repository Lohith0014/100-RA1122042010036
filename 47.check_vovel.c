int main()
{
    printf("RA2211042010036\n");
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c",&ch);

    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'
    		||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
    	        printf("%c is a Vowel", ch);
    }
    else
        printf("%c is a Consonant", ch);
    return 0;
    }
