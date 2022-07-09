void countFreq(int a[10],int n,int Freq[10])   
 {
     for (int i = 0; i < n; i++)
	{
		int Count = 1;
		for(int j = i + 1; j < n; j++)
		{
    		if(a[i] == a[j])   
    		{
    			Count++;
    			Freq[j] = 0;    
    		}
    	}
    	if(Freq[i] != 0)        /* If frequency of current element is not counted */
    	{
    		Freq[i] = Count;
		}
	}
    /* Print frequency of each element*/
 	printf("\n The Frequency of the elements in this Array is : \n");
 	for (int i = 0; i < n; i++)
  	{
  		if(Freq[i] != 0)        
  		{
  			printf("%d Occurs %d Times \n", a[i], Freq[i]);
		}		
  	}
 }
