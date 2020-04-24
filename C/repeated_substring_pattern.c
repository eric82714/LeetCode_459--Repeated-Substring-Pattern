bool repeatedSubstringPattern(char * s){
    int n = strlen(s);
        
    for(int i = n / 2; i >= 1; i--) {
        if(n % i == 0) {
            int c = n / i, index = 0;
            char* t = malloc(n+1 * sizeof(char));
            for(int j = 0; j < c; j++) {
                for(int k = 0; k < i; k++) {
                    t[index] = s[k];
                    index ++;
                }                 
            }
            t[index] = '\0';
            if(strcmp(t, s) == 0) return true;
        }
    }
    
    return false;
}
