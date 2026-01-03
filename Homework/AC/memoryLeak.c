A memory leak occurs when the program allocates memory but never realses it i.e. it stays occuppied till the end of the program.
and become unusable till the end of the program 
free(ptr) is not called

solution
free(ptr);
ptr=NULL;