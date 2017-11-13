#include <iostream>
using namespace std;

main()
{
	int flag=-1;
	int array_size =6;
	int data[6] = {22,6,89,35,73,2};
	// int cari=73;
	int cari;


	int index_awal = 0;
	int index_akhir = 4;
	int middle;
	 // int position=-1;

	
	// biner
	for (int i = 0; i < array_size; i++)
	 {
	 	/* code */
	 	for (int y = 0; y < array_size; y++)
	 	{
	 		/* code */
		 		if (data[y] > data[y+1])
		 	{
		 		/* code */
		 		int temp;
		 		temp = data[y+1];
		 		data[y+1] = data[y];
		 		data[y] = temp;
		 	}
	 	}
	 	// for (int k = 0; k < array_size; k++)
	 	// {
	 	// 	/* code */
	 	// 	cout << data [k] << "   ";
	 	// }

	 	// cout << endl;
	 }
	 for (int i = 0; i < array_size; i++)
	 {
	 	/* code */
	 	cout << data[i] << " ";
	 }

	 cout << "nilai cari = ";
	 cin >> cari;

	 index_akhir=array_size-1;
	 while(index_awal <= index_akhir)
	 {
	 	middle = (index_awal + index_akhir) / 2;
	 	
	 	if (cari < data[middle])
	 	{
	 		/* code */
	 		index_akhir = middle - 1;
	 		cout << index_akhir;
	 	}
	 	else if (cari > data[middle])
	 	{
	 		/* code */
	 		index_awal = middle + 1;
	 		cout << index_awal;
	 	}
	 	else{
	 		index_awal = index_akhir +1;
	 		

	 		cout << index_awal << "  " << index_akhir << "  " << middle;

	 	}

	 }
	 if (cari == data[middle])
	 {
	 	/* code */
	 	cout << "data " << cari << " tidak ditemukan";
	 }
	 else{
	 	cout << "data ditemukan diindex " << middle;
	 }


}