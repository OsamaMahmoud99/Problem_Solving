/**************************************/

void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    int *S = malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
    {
        float P = (tr[i].a + tr[i].b + tr[i].c)/2.0;
         S[i] = (P*(P-tr[i].a)*(P-tr[i].b)*(P-tr[i].c));    
        
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(S[j] > S[j+1])
            {
                int temp = S[j];
                S[j] = S[j+1];
                S[j+1] = temp;
                
                temp = tr[j].a;
                tr[j].a=tr[j+1].a;
                tr[j+1].a = temp;
                temp = tr[j].b;
                tr[j].b = tr[j+1].b;
                tr[j+1].b = temp;
                temp = tr[j].c;
                tr[j].c = tr[j+1].c;
                tr[j+1].c = temp;
            }
        }
        
    }

    
    
}
