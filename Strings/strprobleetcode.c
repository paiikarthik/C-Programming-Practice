//string problem
int strStr(char* haystack, char* needle) {
    char str[]="";
    int k=0;
    for(int i=0; haystack[i]!='\0';i++){
        int j;
        for(j=0; needle[j]!='\0';j++){
             if (haystack[i+j]!=needle[j]){
                break;
             }     
        }
        
       if(needle[j]=='\0')
          return i;
    }
    return -1;
}
