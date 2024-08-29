int numberOfSteps(int num){
    int a = 0;
    while(num > 0) {
        if (num % 2) num--;
        else num /= 2;
        a++;
    }
    return a;
}
