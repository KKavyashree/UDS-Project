#include<stdio.h>
#include"UDS_SID.h"
#define TRUE 1
struct UDS{
	int DLC;
	int Service_Id;
	int subFunId;
	int data[3];
}s1;
int main()
{
	//while(TRUE)
	{
		printf("Enter the UDS request in following format\n\n");
		fflush(stdout);
		printf("DLC  Service_ID  Subfunction_Id(optional)  Data(4byte)\n\n ");
		fflush(stdout);
		scanf("%d%x%x",&s1.DLC,&s1.Service_Id,&s1.subFunId);
		for(int i=0;i<=3;i++)
		{
			scanf("%x",&s1.data[i]);
		}
		switch(s1.Service_Id)
		{
		case 0X2C: UDS_SI_DDDI_2C(s1.DLC,s1.Service_Id,s1.subFunId,s1.data);
		           break;
		case 0X29: UDS_SI_Authent_29(s1.DLC,s1.Service_Id,s1.subFunId,s1.data);
		           break;
		case 0X2E: UDS_SI_WDBI_2E(s1.DLC,s1.Service_Id,s1.data);
		           break;
		case 0X3D: UDS_SI_WMBA_3D(s1.DLC,s1.Service_Id,s1.data);
		           break;
		case 0X36: UDS_SI_TransferData_36(s1.DLC,s1.Service_Id,s1.data);
		           break;
		default:printf("NEGATIVE RESPONSE\n");
		        printf("7F %X\n",s1.Service_Id);

		}

	}
}
