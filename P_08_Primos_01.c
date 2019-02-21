#include<stdio.h>
int Primo(x)
{
	int i, a, b=0;
	for(i=2; i<x; i++)
	{
		a=x%i;
		if(a==0)
		{
			b=1;
		}
	}
	if(b==1)
	{
		printf("\tEl numero %d NO es primo.\n",x);
	}
	else
	{
		printf("\tEl numero %d SI es primo.\n",x);
	}
}
int main()
{
	int o, n;
	system("color f9");
	printf("\n\t\t\tPrograma 08 Numeros Primos");
	printf("\n\t\t\t__________________________");
	printf("\n\tEste programa te ayudara a saber si un numero entero positivo");
	printf("\n\tes primo.");
	printf("\n\tUn numero es primo cuando solo es divisible entre si mismo y el 1.\n\n\n");

	system("pause");
	system("cls");
	do{
		printf("\tDame el numero: ");
		scanf("%d",&n);
		while(n<=0)
		{
			printf("\tDebe ser mayor que 0.\n");
			printf("\tDame el numero: ");
		    scanf("%d",&n);
		}
		if (n==1)
		{
			printf("\tEl 1 es cosiderado la unidad.\n");
		}
		else
		{
			Primo(n);
		}
		printf("\tDesea consultar para otro numero?\n");
		printf("\t\tSi=1\tNo=0\t");
		scanf("%d",&o);
		while(o!=1 && o!=0)
		{
			printf("\tOpcion no valida intente de nuevo.\n");
			printf("\t\tSi=1\tNo=0\t");
		    scanf("%d",&o);
		}
		system("cls");
	}while(o==1);
	return 0;
}
