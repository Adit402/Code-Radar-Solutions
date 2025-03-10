int caesarCipher(char message[], int shift, char encrypted[]){
    int i;
    for(i=0;i<'\0';i++){
        message[i]+=shift;
    }
    return encrypted;
}