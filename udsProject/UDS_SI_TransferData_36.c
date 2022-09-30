#include<stdio.h>
#include"UDS_SID.h"
void UDS_SI_TransferData_36(int DLC,int Service_Id,int data[])
{
	if(DLC <= 7)
	{
		printf("POSITIVE RESPONCE\n\n");
				printf("%X 96 ",DLC);
				for(int i=0;i<=3;i++)
					printf("%X ",data[i]);
				printf("\nWrite Memory By Address\n");
	}
	else
		{
			printf("NEGATIVE RESPONSE\n\n");
			printf("7F %X",Service_Id);
		}
}
