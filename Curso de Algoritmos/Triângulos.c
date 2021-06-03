#include <stdio.h>

int main()
{
    int l1,l2,l3;
    printf("escreva a primeira reta: ");
    scanf("%d", &l1);
    printf("escreva a segunda reta: ");
    scanf("%d", &l2);
    printf("escreva a terceira reta: ");
    scanf("%d", &l3);
    
        if((l1<l2+l3) && (l2<l3+l1) && (l3<l2+l1)){
            printf("Pode formar um triângulo\n");
        }else if (!((l1<l2+l3) && (l2<l3+l1) && (l3<l2+l1))){
            printf("Não pode formar um triangulo\n");
        }
        else if((l1==l2) && (l2==l3)){
            printf("Todos as retas são iguais\n");
        }
        else if((l1|=l2) && (l2|=l3));{
            printf("Ao menos uma das retas são diferentes\n");
        }

}
