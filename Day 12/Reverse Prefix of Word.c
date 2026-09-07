char* reversePrefix(char* word, char ch) {
    int i, j;
    
    for(i = 0; word[i] != '\0'; i++) {
        if(word[i] == ch) {
            for(j = 0; j < i; j++, i--) {
                char t = word[j];
                word[j] = word[i];
                word[i] = t;
            }
            break;
        }
    }
    return word;
}
