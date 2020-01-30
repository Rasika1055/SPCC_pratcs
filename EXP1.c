%{
  #include<string.h>
int ch=0;
int word=0;
int sen=0;
int line=0;
int tab=0;
int blank=0;
int digit=0;
%}

%%
[0-9]+ {digit++;}
[a-zA-Z]+ {word++; if(strlen(yytext)>=1){ch=ch+strlen(yytext);} }

%%

int main(){
yyin=fopen("ex.txt","r");
yylex(); 
printf("\nThe count  of digit is :%d",digit);
printf("\nThe count of charcater is :%d",ch);
printf("\nThe count of word is :%d",word);

//printf("\nThe count of spaces is :%d",blank );
return 0;
}


