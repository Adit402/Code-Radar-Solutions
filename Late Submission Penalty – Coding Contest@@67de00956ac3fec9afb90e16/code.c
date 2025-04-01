int calculatePenalty(int date, int month, int year, int a, int b, int c){
    int fine;
    if(date>a && month==b && year==c){
        fine = (date-a)*10;
    }
    else if(date== a && month== b && year==c || year<c){
        fine = 0;
    }
    else if(month>b){
        fine = 200*(month-b) + (date-a);
    }
    else if(year>c){
        fine = 5000;
    }
    return fine;
}