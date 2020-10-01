int prob1() 
{
    short i;
    int sum = 0;

    for(i = 1; i < 1000; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    return sum;
}

int prob5() 
{
    char i;
    int does = 21;
    int status = 1;

    while(status) {
        for(i = 2; i <= 20; i++) {
            if(does % i != 0) {
                does++;
                break;
            } else if(i == 20) {
                status = 0;
            }
        }
    }

    return does;
}

int prob6() 
{
    int sumSquare = 0;
    int sum = 0;
    int i;

    for(i = 1; i < 101; i++) {
        sumSquare += i * i;
        sum += i;
    }

    return sum * sum - sumSquare;
}