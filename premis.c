#include<stdio.h>

int get_permis_num(){
	int rbit=0,wbit=0,xbit=0;
	int num;
	printf("~Read permission: Press 1 to grant permission or 0 to remove permission\n");
	scanf("%d",&rbit);
	printf("~Write permission: Press 1 to grant permission or 0 to remove permission\n");
	scanf("%d",&wbit);
	printf("~Execiute permission: Press 1 to grant permission or 0 to remove permission\n");
	scanf("%d",&xbit);
	if(rbit==1){
		if(wbit==1){
			if(xbit==1)
				num=7;
			else
				num=6;
			}
		else { if(xbit==1)	
				num=5;
			else
				num=4;
			}
		}
	else { if(wbit==1){
			if(xbit==1)
				num=3;
			else
				num=2;
			}
		else { if(xbit==1)
				num=1;
			else
				num=0;
			}
		
		}
	
	return num;
}

int main(){

	int un,gn,on;
	int perNum;
	printf("\n\tThis function will give you the permissions in numbers\n\t\t\t   !! Enjoi !!\n\n");
	printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\t\n");
	printf("\tplease enter the permissions for the user:\n");
	un=get_permis_num();
	printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\t\n");
	printf("\tplease enter the permissions for the group:\n");
	gn=get_permis_num();
	printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\t\n");
	printf("\tplease enter the permissions for the others:\n\n");
	on=get_permis_num();
	printf("\t\t\t---------\n");
	printf("The permission code is: | %d %d %d |\n",un,gn,on);
	printf("\t\t\t---------\n");


	return 0;
}
