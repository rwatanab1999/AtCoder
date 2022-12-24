#include <stdio.h>
#include <string.h>

int alpha[26] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int left[300000];
char s[300000]; 

int main(void)
{
    scanf("%s", s);
    int s_len = strlen(s);
    //printf("%d\n", s_len); //demo

    int l_count = -1;

    for(int i = 0; i < s_len; i++)
    {
        if(s[i] == '(')
        {
            //printf("( : l_count=%d\n", l_count); //demo
            l_count++;
            left[l_count] = i;
        }
        else if(s[i] == ')')
        {
            //printf(") : l_count=%d\n", l_count); //demo
          	//printf("-->%d\n", left[l_count]); //demo

            for(int k = 0; k < 26; k++)
            {
                if((left[l_count] <= alpha[k]) && (alpha[k] <= i-1))
                {
                    alpha[k] = -1;
                  	//char c_demo = 'a' + k; //demo
                    //printf("sute -->%c alpha[k]=%d\n", c_demo, alpha[k]);//demo
                }
            }
            l_count--;
        }
        else if('a' <= s[i] && s[i] <= 'z')
        {
            //printf("alpha=%c, i=%d\n", s[i], i); //demo
            int char_num = 'a';
            char_num = s[i] - 'a';
            if(alpha[char_num] != -1)
            {
              	//char c_demo = 'a' + char_num; //demo
              	//printf("====%c (char_num = %d)\n", c_demo, char_num);//demo
                printf("No");
                return (0);
            } 
            else
            {
                alpha[char_num] = i;
            }
        }
    }
    printf("Yes\n");

    return (0);
}