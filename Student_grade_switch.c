#include<stdio.h>
void main()
{
        int physics,chemistry,biology,maths,computer,sum,percentage;
        printf("\n Enter five subjects marks:\n");
        scanf("%d%d%d%d%d",&physics,&chemistry,&biology,&maths,&computer);
        sum=(physics+chemistry+biology+maths+computer);
        percentage=sum/5;
        switch(percentage/10)
        {
        	case 10: printf("\n Grade A+");break;
        	case 9: printf("\n Grade A");
        	break;
        	case 8: printf("\n Grade B");
        	break;
        	case 7: printf("\n Grade C");
        	break;
        	case 6: printf("\n Grade D");
        	break;
        	case 5:
        	case 4: printf("\n Grade E");
        	break;
        	default : printf("\n Grade F");
        }
}