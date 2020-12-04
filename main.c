#include <attendance.h>

int main()
{
	int conducted;
	float aggregate;
	char regno[20];
	char name[50];
	int attended,usual,fine,proof,condonation;

		printf("\nStudent Register Number : ");
        scanf("%s",regno);

        printf("\nStudent Name : ");
        scanf("%s",name);

		printf("\nNumber of classes conducted : ");
        scanf("%d",&conducted);

        printf("\nNumber of Classes Attended : ");
        scanf("%d",&attended);

        if(attended<=conducted)
        {
            aggregate=(attended*100)/conducted;
		    printf("\nAggregate Is : %f",aggregate);
        }

		else
		    printf("\nData Entered Is Invalid");

        printf("\nUsual Amount : ");
        scanf("%d",&usual);

		if(aggregate>75)
        {
            normal(aggregate,usual);
            printf("\n%s Is Eligible To Write Exams",regno);
            printf("\nAmount To Be Paid Is : %d",usual);
        }

		else
		{
		    if(aggregate<=75 && aggregate>65)
            {
                printf("\nConsult CAC");

		        printf("\nSubmission of Proofs : ");
		        scanf("%d",&proof);

		        printf("\nNumber of Condonations Till Time : ");
	            scanf("%d",&condonation);

	            if(proof==1 && condonation<2)
                {
                    printf("\nFine : ");
                    scanf("%d",&fine);

		            cac(aggregate,proof,condonation,usual,fine);

		            printf("\n%s Is Condoned",regno);
				    printf("\n%s Is Eligible To Write Exams",regno);
                    printf("\nAmount To Be Paid Is : %d",usual+fine);
                }
			    else
                    printf("\n%s Is Not Eligible To Write Exams",regno);
            }
             else
                    printf("\n%s Is Not Eligible To Write Exams",regno);
		}
		test_main();
  return 0;
}
