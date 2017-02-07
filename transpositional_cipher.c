#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char inp_str[20];
char key[10];

int find_min_index()
{  int i,min_ind=0;
    char min=key[0];
    for(i=1;i<strlen(key);i++)
    {   if(key[i]<min)
    {min=key[i];
        min_ind=i;
    }
    }
    //printf("%c %d",min,min_ind);
    key[min_ind]=122;
    return min_ind;
    
}


int main()
{
    int inp_str_len,min_index;
    int keylen;
    printf("hello");
    printf("how are you\n");
    
    printf("Enter the input string\n");
    scanf("%s",inp_str);
    inp_str_len=strlen(inp_str);
    printf("The entered input string length is %d\n",inp_str_len);
        int m;
        //printf("\nThe entered string is %s",inp_str);					
    printf("Enter the key ");
    scanf("%s",key);
    printf("The entered key is %s",key);
    keylen=strlen(key);
    printf("The transposition matrix:\n");

    for(m=0;m<inp_str_len;m++)
    {    printf("%c",inp_str[m]);
        if(m%(keylen)==keylen-1)
            printf("\n");
    }
    int i,j;
    printf("\nThe encrypted string is \n");
    for(i=0;i<keylen;i++)
    {    //printf("%c",key[i]);
    //find min ascii value index in key string
        min_index=find_min_index();
        //printf("The min_index is:%d\n",min_index);
        for(j=min_index;j<inp_str_len;j=j+keylen)
        {
            printf("%c",inp_str[j]);   
            
            
            
        }
        // and then in original inp_string print the corresponding index and then subsequent indices of inp string by adding 3 till the length of the inp string is crossed;
        
    
    }
    printf("\n\n");
}