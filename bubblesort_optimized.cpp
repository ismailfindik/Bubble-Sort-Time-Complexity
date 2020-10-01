#include<stdio.h>
#include<conio.h>
#include<time.h>

int main(){
	int sayi,i,j,gecici;
	time_t start,end;
	time (&start);
	printf("Kac adet sayi gireceksiniz. : ");
	scanf("%d", &sayi);
	printf("\n%d adet sayi giriniz. : \n",sayi);
	int dizi[sayi];
	for(i=0; i<sayi; i++){
		printf("%d. sayi :\n ",i+1);
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<sayi;i++){
		printf("%d\n",dizi[i]);
	}
	for(i=1;i<sayi;i++){
        int swapped = false;
		for(j=0;j<sayi-1;j++){
			if(dizi[j+1] > dizi[j]){
				gecici = dizi[j];
				dizi[j] = dizi[j+1];
				dizi[j+1] = gecici;
                swapped = true;
			}
		}
		if (!swapped){
            break;
		}
	}

	for(i=0; i<sayi; i++)
	printf("%d ", dizi[i]);
	time (&end);
	 printf ("Program %.2lfsaniye surdu.n", difftime (end,start));
	getch();
}
