/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
main()
{
    char c;
    unsigned char uc;
    short s;
    long l;
    int i;
    float f;
    double d;
    unsigned int ui;
    unsigned long ul;

    printf("DIGITE UM NUMERO SHORT: ");
    scanf("%d",&s);
    printf("DIGITE UM NUMERO LONG: ");
    scanf("%ld",&l);
    printf("DIGITE UM NUMERO INT: ");
    scanf("%d",&i);
    printf("DIGITE UM NUMERO FLOAT: ");
    scanf("%f",&f);
    printf("DIGITE UM NUMERO DOUBLE: ");
    scanf("%lf",&d);
    printf("DIGITE UM CARACTER: ");
    scanf("%c",&c);
    c = getchar();

    printf("        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");


    printf("%9d%19d%19d\n",s,l,i);
    printf("%19.1f%21.0lf%18c\n",f,d,c);
}






