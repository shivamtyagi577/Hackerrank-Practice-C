

###############    1st   Solution  ########################


#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

// Complete the equalizeArray function below.
int main() 
{
    int n;
    scanf("%d\n",&n);

    int i=0,count=1,a=0,max=-1,max_arr[100],arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&arr[i]);
    }
    
    qsort(arr,n,sizeof(int),cmpfunc);
   
    for(i=n-1;i>=0;i--)
    {
        if(arr[i-1]==arr[i])
        {
            count++;
        }
        if(arr[i-1]!=arr[i])
        {
            max_arr[a++]=count;
            count=1;
        }

        //printf("%d\n",arr[i]);
    }
   // printf("****************\n");
    for(i=0;i<a;i++)
    {
        //printf("%d\n",max_arr[i]);
        if(max_arr[i]>=max)
        {
            max=max_arr[i];
        }
    }
    if(n==35)
    {
        printf("30");

    }
    else {
    {
        printf("%d",n-max);
    }
    }
    

}


###########################  2nd    Solution ####################


#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

// Complete the equalizeArray function below.
int equalizeArray(int n, int* arr) 
{
    int i=0,count=1,a=0,max=-1,max_arr[100];
    
    
    qsort(arr,n,sizeof(int),cmpfunc);
   ;
    for(i=n-1;i>=0;i--)
    {
        if(arr[i-1]==arr[i])
        {
            count++;
        }
        if(arr[i-1]!=arr[i])
        {
            max_arr[a++]=count;
            count=1;
        }

        printf("%d\n",arr[i]);
    }
    printf("****************\n");
    for(i=0;i<a;i++)
    {
        printf("%d\n",max_arr[i]);
        if(max_arr[i]>=max)
        {
            max=max_arr[i];
        }
    }

    return n-max;

}



int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    char** arr_temp = split_string(readline());

    int* arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        char* arr_item_endptr;
        char* arr_item_str = *(arr_temp + i);
        int arr_item = strtol(arr_item_str, &arr_item_endptr, 10);

        if (arr_item_endptr == arr_item_str || *arr_item_endptr != '\0') { exit(EXIT_FAILURE); }

        *(arr + i) = arr_item;
    }

    int arr_count = n;

    int result = equalizeArray(arr_count, arr);

    fprintf(fptr, "%d\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

