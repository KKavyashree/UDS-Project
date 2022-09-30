#include<stdio.h>
#include"UDS_SID.h"
void UDS_SI_Authent_29(int DLC,int Service_Id,int subFunId,int data[])
{
	if(DLC< 0X04)
		{
			printf("POSITIVE RESPONCE\n\n");
			printf("%X 69 %X ",DLC,subFunId);
			for(int i=0;i<=3;i++)
				printf("%X ",data[i]);
			printf("\nAuthentication\n");
			if(subFunId == 0X01)
			{
				printf("DeAuthenticate subfunction\n");
			}
			else if(subFunId == 0X02)
			{
				printf("Verify Certificatwe Unidirectional subfunction\n");
			}
			else if(subFunId == 0X03)
			{
				printf("\nVerify Certificatwe Bidirectional subfunction\n");
			}
			else if(subFunId == 0X04)
			{
				printf("\nProofOfOwnership  subfunction\n");
			}
			else if(subFunId == 0X05)
			{
				printf("\nTransmitCertificate  subfunction\n");
			}
			else if(subFunId == 0X06)
			{
				printf("\nRequest Challenge for Authentication  subfunction\n");
			}
			else if(subFunId == 0X07)
			{
				printf("\nVerify Proof of Ownership Unidirectional  subfunction\n");
			}
			else if(subFunId == 0X08)
		    {
				printf("\nVerify Proof of Ownership Bidirectional  subfunction\n");
			}
			else if(subFunId == 0X09)
			{
				printf("\nAuthentication Configuration  subfunction\n");
			}
		}
		else
		{
			printf("NEGATIVE RESPONSE\n\n");
			printf("7F %X",Service_Id);
		}
}

