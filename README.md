znt:  

=======================================================================================================
The Zero-Initialized Template (znt) is a container format for each chromosome and a wrapper capable to combine multiple streams of data from disparate sources into a coherent record. (machine readable wrapper format for information exchange capable to combine multiple streams of data from disparate sources into a coherent record)

These files provided a good template for writing sequence reads, for example. 

 
The file specification is below:
=======================================================================================================
The first step is to create a large array file per chromosome and initialize to zero. 

Step 1:  count the number of nucleotides (n) in each chromosome
Step 2:  For (n = 0; n < chrLen; n++) {

                    fwrite(&nVal                    /* file pointer pointing to address in memory */ 
                    sizeof(X)-see below ,1,fp);     /* reserve a chunk of memory with size (X) initialize to zero */
                   
 }                    ** where: X= char, short int, long int






Name  	    Type    	      Size	              Range
----------------------------------------------------------------------
znt	        char          	1 (8-bit) byte	    0 to 255              |   /*char type */  
znt2	      int	            2 (16-bit) byte   	0 to 65,535           |   /*short int */  
znt4	      long int      	4 (32-bit) bytes	  0 to 4,294,967,295    |   /*full int */   




Utilities:
=======================================================================================================
* Program name:               * Description: 

init_hsG37.................program to initialize binary hs chromosome files to zeros that is designed to fwrite/fread                              binary 1 byte files
init_hg19..................program to initialize binary hs chromosome files to zeros that is designed to fread/fwrite                              binary 2 byte files
init_hsG32.................program to initialize binary chromosome files to zeros that is designed to fread/fwrite                                 binary 4 byte files 


