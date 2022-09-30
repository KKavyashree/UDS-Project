#include<stdio.h>
#include"UDS_SID.h"
void UDS_SI_WMBA_3D(int DLC,int Service_Id,int data[])
{
	if(DLC < 9)
	{
		printf("POSITIVE RESPONCE\n\n");
				printf("%X 7D ",DLC);
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
