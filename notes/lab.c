    #include <stdio.h>

    const int MAXSIZE = 16;
    static int values[16], arr2[16];
    static int i;  // bad idea to call a global variable i!
    void initArray(int[], int);
    void printArray(int[]);

    // This initializes element arr[i] to val for each array element
    void initArray(int arr[], int val)
    {
      for (i=MAXSIZE-1; i >= 0; i--)
        arr[i] = val;
      return;
    } 

    // This prints the contents of the argument array, with each element printed as "index: value" on its own line
    // For example, a 4-element array containing {9,10,11,12} would print as:
    //   0:  9
    //   1: 10
    //   2: 11
    //   3: 12    
    void printArray(int arr[])
    {
      for(i = 0; arr[i] != '\0'; i++)
      {
      	printf("%d: %d\n", i, arr[i]);
      }
    };

    int main()
    {
      int dummy;
      initArray(values,5);
      values[0]=9;
      initArray(arr2,5);
      arr2[1]=8;
      printf("values is:\n");
      printArray(values);
      printf("arr2 is:\n");
      printArray(arr2);
     
      return 0;
    };
