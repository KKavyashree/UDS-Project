#include<stdio.h>
#include"UDS_SID.h"
void UDS_SI_DDDI_2C(int DLC,int Service_Id,int subFunId,int data[])
{
	if(DLC< 0X04)
	{
		printf("POSITIVE RESPONCE\n\n");
		printf("%X 6C %X ",DLC,subFunId);
		for(int i=0;i<=3;i++)
			printf("%X ",data[i]);
		printf("\nDynamically Define Data Identifier\n");
		if(subFunId == 0X01)
		{
			printf("Define By Identifier\n");
		}
		else if(subFunId == 0X02)
		{
			printf("Define By Memory Address\n");
		}
		else if(subFunId == 0X03)
		{
			printf("Clear Dynamically Defined Data Identifier\n\n");
		}
	}
	else
	{
		printf("NEGATIVE RESPONSE\n\n");
		printf("7F %X",Service_Id);
	}
}
