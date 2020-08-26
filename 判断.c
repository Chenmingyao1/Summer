bool isUnique(char* astr){
    int len = strlen(astr);
    int i,j;
    if(len == 1) return 1;
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(astr[i]==astr[j]){
                return 0;
            }
        }
    }
    return 1;
}

