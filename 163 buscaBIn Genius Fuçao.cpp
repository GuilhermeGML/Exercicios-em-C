int BuscaBin(int x, int t, int vet[]){
	int es, di, meio;
	es=0;
	di=t;
	meio=(di-es)/2;
	while(vet[meio]!=x){
		meio=(di-es)/2;
		if(vet[meio]==x){
			return meio;
			break;
		}
		if(vet[meio]>x){
			es=meio;
		} else{
			di=meio;
		}
	}
	
}
