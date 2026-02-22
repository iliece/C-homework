#include <stdio.h>
#include <string.h>

int main() 
{
    char S[101];
    scanf("%s", &S);
    int answer[26];
    for(int u=0; u<26; u++){
        answer[u] = -1;
    }
    
    for(int u=0; u<strlen(S); u++){
        int idx = S[u] - 97;
        if(answer[idx] == -1){
            answer[idx] = u;    
        }
    }

    for(int u=0; u<26; u++){
        printf("%d ", answer[u]);
    }
    return 0;
}