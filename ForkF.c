#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

main(){
    	int return_value;
    	int numero;
    	printf("Escribe un numero \n" );
    	scanf("%d", &numero);
    	
	printf("Creando procesos con fork\n");
	return_value=fork();
	if(return_value==0){
	    
	    int fact = 1;
	    for(int i=1; i<=numero; i++){
	        fact = fact * i;
	    }
	    
    
		printf("El pid del proceso hijo es %d el factorial es: %d \n", getpid(), fact);
		}
		else {
     
     int suma = 0;
     for(int i=0; i<=numero; i++){
         suma = suma + i;
}
		printf("El pid del proceso padre es %d la sumatoria es: %d \n", getpid(), suma);
}
}
