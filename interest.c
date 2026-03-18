#define PERIOD 10
#define PRINCIPAL 5000.00

void main()
{

    int year;
    float amount,value,inrate;
    amount=PRINCIPAL;
    inrate=0.11;
    year=0;

    while(year<=PERIOD)
    {

        printf("%d\n",year,amount);
        value=amount+inrate*amount;
        year=year+1;
        amount=value;
    }
}
