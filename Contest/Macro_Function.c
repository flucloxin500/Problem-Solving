// Bismillahir Rahmanir Rahim

/// Sorting

int cmp(const void * a, const void * b) 
{
	return ( *(int*)a - * (int*)b );
}

// Inside main function

qsort(a, element + 2, sizeof(int), cmp);