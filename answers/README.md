#P2T Linux Lab - Example

 int i,j,maxVal;
    int testdata[HIST_MAX_SIZE];//declaring an array testdata no idea what 
//HIST_MAX_Size  is defined in util.h
    
    /* TODO: Add ability to specify on the command line number of samples to generate */

    generateRandData(testdata,25);//using the previosly made function from util.c
				//included in main by #include "util.h" 
//what this does is kind of include the whole function in the main - this function is comletely run only in main, that is why no return is neccassary, since the function is in the main the testdata gets its memory location edited within the main and the memory is reserved while main runs and also therefore it is valid to use testdata again in the next maxVal declaration that testdata will be the same as the one that was just generated.

    maxVal = getMax_Int(testdata,25);//getting the max int from #include "util.h" which containts the function in util.c

    for (i=0; i < 25; i++) {
        printBar(testdata[i]);//prints one | and then # depending on the randomly generated numbers in testdata which can be no larger than 99 because modulus of 100 is taken from them this is done for 25 lines
    }

    printYAxis(maxVal);//prints one | and then _ depending on the maximum int value in the randomly generated testdata(max possible is 99)
    
printf("\nMaximum Value in Histogram is: %d\n", maxVal);

    return 0;
