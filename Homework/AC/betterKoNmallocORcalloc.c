Neither malloc() nor calloc() is better in all cases it depends on requirements
malloc is faster than calloc but calloc is safer than malloc as it initialized memory to zero
while malloc does not initialized only allocates and contains garbage values 
so for faster programs use malloc() and for safer and zero value use calloc()