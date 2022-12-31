#include<stdio.h>

int main(void)
{	
	int* yildiz, yld;
	yildiz = &yld;
	printf("%d\n", yildiz);
	yildiz = yildiz + 1;
	printf("%d\n", yildiz);

	//Hocam cls kullandýðým için burasý siliniyor ama var.	
	
	int secim = 0;
	int indis = 0;
	int siraNumarasi = 0;
	int sira[25] = { '\0' };
	char isimler[25][20] = { '\0' };
	char numaralar[25][20] = { '\0' };
	char soyisimler[25][20] = { '\0' };
	char *cizgi = "------------------------------------------------------------------------------";
	
	while (1 == 1)
	{		
		//Ekrani temizlemek icin.
		system("cls");

		//Ekrana kisileri yazmak icin.
		printf("Sira\t\tIsim\t\tSoyisim\t\tNumara\n");
		printf("%s\n", cizgi);
		if (indis == 0)
		{
			printf("\n\tHic kayit bulunamadi.");
		}
		for (int i = 0; i < indis; i++)
		{
			printf("%d\t\t", sira[i]);
			printf("%s\t\t", isimler[i]);
			printf("%s\t\t", soyisimler[i]);
			printf("%s\t\t\n", numaralar[i]);
		}

		printf("\n\n\n%s\n", cizgi);
		printf("Kisi ekle                         (1)\n");
		printf("Arama yap                         (2)\n");
		printf("Kisileri isme gore sirala         (3)\n");
		printf("Kisileri soyisime gore sirala     (4)\n");
		printf("Kisileri numaralarina gore sirala (5)\n");
		printf("Cikis                             (6)\n");

		scanf_s("%d", &secim);

		switch (secim)
		{
			case 1:
				//Yeni kisi eklemek icin.
				system("cls");
				if (indis == 25)
				{
					printf("\nYeni kayit ekleyecek yer yoktur.");
					break;
				}
				sira[indis] = indis + 1;
				printf("Kisinin ismini giriniz: ");
				scanf_s("%s", isimler[indis], 20);
				printf("Kisinin soyismini giriniz: ");
				scanf_s("%s", soyisimler[indis], 20);
				printf("Kisinin numarasini giriniz: ");
				scanf_s("%s", numaralar[indis], 20);

				printf("\n- Kisi eklendi.\n");
				indis++;
				break;
			case 2:
				//Ýstenilen metota göre arama yapmak icin.
				system("cls");
				char aranan[20] = { '\0' };
				int sayac = 0;
				int arananIndis = 0;

				printf("Ada gore arama                (1)\n");
				printf("Soyada gore arama             (2)\n");
				printf("Telefon numarasina gore arama (3)\n");

				scanf_s("%d", &secim);

				if (secim == 1)
				{
					system("cls");

					printf("Aradiginiz ismi giriniz: ");
					scanf_s("%s", aranan, 20);

					for (int i = 0; i < 25; i++)
					{
						sayac = 0;
						for (int j = 0; j < 20; j++)
						{
							if (isimler[i][j] == aranan[j])
							{
								sayac++;
							}
						}

						if (sayac == 20)
						{
							arananIndis = i;
							break;
						}
					}
				}
				else if (secim == 2)
				{
					printf("Aradiginiz soyismi giriniz: ");
					scanf_s("%s", aranan, 20);

					for (int i = 0; i < 25; i++)
					{
						sayac = 0;
						for (int j = 0; j < 20; j++)
						{
							if (soyisimler[i][j] == aranan[j])
							{
								sayac++;
							}
						}

						if (sayac == 20)
						{
							arananIndis = i;
							break;
						}
					}
				}
				else if (secim == 3)
				{
					printf("Aradiginiz numarayi giriniz: ");
					scanf_s("%s", aranan, 20);

					for (int i = 0; i < 25; i++)
					{
						sayac = 0;
						for (int j = 0; j < 20; j++)
						{
							if (numaralar[i][j] == aranan[j])
							{
								sayac++;
							}
						}

						if (sayac == 20)
						{
							arananIndis = i;
							break;
						}
					}
				}

				system("cls");

				if (sayac != 20)
				{
					printf("Aradiginiz kayit bulunamadi.\n");
					printf("Menuye donmek icin     (3)\n");
					scanf_s("%d", &secim);
					break;
				}

				printf("Isim:    %s\n", isimler[arananIndis]);
				printf("Soyisim: %s\n", soyisimler[arananIndis]);
				printf("Numara:  %s\n", numaralar[arananIndis]);

				printf("%s\n", cizgi);

				printf("Kisiyi silmek icin     (1)\n");
				printf("Kisiyi duzenlemek icin (2)\n");
				printf("Menuye donmek icin     (3)\n");

				scanf_s("%d", &secim);

				if (secim == 1)
				{
					printf("Kisiyi silmek istediginize emin misiniz?\n");
					printf("Evet (1) | Hayir (2)\n");

					scanf_s("%d", &secim);

					if (secim == 2)
					{
						break;
					}

					for (int i = arananIndis; i < indis; i++)
					{
						for (int j = 0; j < 20; j++)
						{
							isimler[i][j] = isimler[i + 1][j];
							soyisimler[i][j] = soyisimler[i + 1][j];
							numaralar[i][j] = numaralar[i + 1][j];
						}
					}

					indis -= 1;
				}
				else if (secim == 2)
				{
					system("cls");

					printf("Kisinin ismini giriniz: ");
					scanf_s("%s", isimler[arananIndis], 20);
					printf("Kisinin soyisimini giriniz: ");
					scanf_s("%s", soyisimler[arananIndis], 20);
					printf("Kisinin numarasini giriniz: ");
					scanf_s("%s", numaralar[arananIndis], 20);
				}
				else
				{
					break;
				}
				break;
			case 3:
				//Kisileri isime gore siralamak icin.
				for (int j = 0; j < indis - 1; j++)
				{
					for (int i = 0; i < indis - j - 1; i++)
					{
						for (int c = 0; c < 20; c++)
						{
							if (isimler[i][c] > isimler[i + 1][c])
							{
								char geciciIsim[20] = { '\0' };
								char geciciSoyisim[20] = { '\0' };
								char geciciNumara[20] = { '\0' };
								for (int k = 0; k < 20; k++)
								{
									geciciIsim[k] = isimler[i][k];
									isimler[i][k] = isimler[i + 1][k];
									isimler[i + 1][k] = geciciIsim[k];

									geciciSoyisim[k] = soyisimler[i][k];
									soyisimler[i][k] = soyisimler[i + 1][k];
									soyisimler[i + 1][k] = geciciSoyisim[k];

									geciciNumara[k] = numaralar[i][k];
									numaralar[i][k] = numaralar[i + 1][k];
									numaralar[i + 1][k] = geciciNumara[k];
								}
								break;
							}
							else if (isimler[i][c] < isimler[i + 1][c])
								break;
						}
					}
				}
				break;
			case 4:
				//Kisileri soyisime gore siralamak icin.
				for (int j = 0; j < indis - 1; j++)
				{
					for (int i = 0; i < indis - j - 1; i++)
					{
						for (int c = 0; c < 20; c++)
						{
							if (soyisimler[i][c] > soyisimler[i + 1][c])
							{
								char geciciIsim[20] = { '\0' };
								char geciciSoyisim[20] = { '\0' };
								char geciciNumara[20] = { '\0' };
								for (int k = 0; k < 20; k++)
								{
									geciciIsim[k] = isimler[i][k];
									isimler[i][k] = isimler[i + 1][k];
									isimler[i + 1][k] = geciciIsim[k];

									geciciSoyisim[k] = soyisimler[i][k];
									soyisimler[i][k] = soyisimler[i + 1][k];
									soyisimler[i + 1][k] = geciciSoyisim[k];

									geciciNumara[k] = numaralar[i][k];
									numaralar[i][k] = numaralar[i + 1][k];
									numaralar[i + 1][k] = geciciNumara[k];
								}
								break;
							}
							else if (soyisimler[i][c] < soyisimler[i + 1][c])
								break;
						}
					}
				}
				break;
			case 5:
				//Kisileri numaralarina gore siralamak icin.
				for (int j = 0; j < indis - 1; j++)
				{
					for (int i = 0; i < indis - j - 1; i++)
					{
						for (int c = 0; c < 20; c++)
						{
							if (numaralar[i][c] > numaralar[i + 1][c])
							{
								char geciciIsim[20] = { '\0' };
								char geciciSoyisim[20] = { '\0' };
								char geciciNumara[20] = { '\0' };
								for (int k = 0; k < 20; k++)
								{
									geciciIsim[k] = isimler[i][k];
									isimler[i][k] = isimler[i + 1][k];
									isimler[i + 1][k] = geciciIsim[k];

									geciciSoyisim[k] = soyisimler[i][k];
									soyisimler[i][k] = soyisimler[i + 1][k];
									soyisimler[i + 1][k] = geciciSoyisim[k];

									geciciNumara[k] = numaralar[i][k];
									numaralar[i][k] = numaralar[i + 1][k];
									numaralar[i + 1][k] = geciciNumara[k];
								}
								break;
							}
							else if (numaralar[i][c] < numaralar[i + 1][c])
								break;
						}
					}
				}
				break;
			case 6:
				exit(0);
				break;
			default:
				break;
		}
	}
	return 0;
}