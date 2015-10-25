#include <stdio.h>
#include <stdlib.h>

#define INIT_LEN 2

#define FALSE 0
#define TRUE 1

typedef struct{
    char * element;
    int length;
    int capacity;
}SqList;

void Initialize(SqList & s){
    s.element = (char *) malloc (INIT_LEN * sizeof(char));
    s.length = 0;
    s.capacity = INIT_LEN;
}

void InsertAtEnd(SqList & s, char e){
    if(s.length + 1 > s.capacity){
        char * temp = s.element;
        s.element = (char *) malloc ((2 * s.capacity + 1)*sizeof(char));
        int i = 0;
        for (i = 0; i < s.length; i++) {
            s.element[i] = temp[i];
        }
        s.capacity = 2 * s.capacity + 1;
    }
    s.element[s.length] = e;
    s.length++;
}

void Output(SqList s){
    int i = 0;
    for (i = 0; i < s.length; i++) {
        printf("%c ", s.element[i]);
    }
}

int GetLength(SqList s){
    return s.length;
}

int IsEmpty(SqList s){
    return s.length == 0;
}

int GetIndexOf(SqList s, int loc){
    if(loc > s.length || loc < 1){
        return FALSE;
    }
    
    return s.element[loc - 1];
}

int GetCharAt(SqList s, char e){
    int i = 0;
    for(i = 0; i < s.length; i++){
        if(s.element[i] == e){
            return i + 1;
        }
    }
    
    return FALSE;
}

int InsertAtIndex(SqList & s, int loc, char e){
    if(loc > s.length + 1 || loc < 1){
        return FALSE;
    }
    
    if(s.length + 1 > s.capacity){
        char * temp = s.element;
        s.element = (char *) malloc ((2 * s.capacity + 1)*sizeof(char));
        int i = 0;
        for (i = 0; i < s.length; i++) {
            s.element[i] = temp[i];
        }
        s.capacity = 2 * s.capacity + 1;
    }
    
    int i = 0;
    for (i = s.length; i >= loc; i--) {
        s.element[i] = s.element[i-1];
    }
    s.element[loc-1] = e;
    s.length++;
    return TRUE;
}

int DropElem(SqList & s, int loc){
    if(loc < 1 || loc > s.length + 1){
        return FALSE;
    }
    
    int i = loc - 1;
    for (i = loc - 1; i < s.length - 1; i++) {
        s.element[i] = s.element[i+1];
    }
    s.length--;
    
    return TRUE;
}

void DropSqList(SqList & s){
    free(s.element);
    s.length = 0;
    s.capacity = 0;
}

int main(){
    SqList s;
    Initialize(s);
    InsertAtEnd(s, 'a');
    InsertAtEnd(s, 'b');
    InsertAtEnd(s, 'c');
    InsertAtEnd(s, 'd');
    InsertAtEnd(s, 'e');
    
    printf("After insert at end: ");
    Output(s);
    printf("\nLenght: %d", GetLength(s));
    if(IsEmpty(s)){
        printf("\nS is empty");
    } else {
        printf("\nS is not empty");
    }
    
    if(GetIndexOf(s, 3)){
        printf("\n3-th element is: %c", GetIndexOf(s, 3));
    }
    
    int loc = GetCharAt(s, 'a');
    if(loc){
        printf("\nThe element 'a' is exist, at: %d-th", loc);
    } else {
        printf("\nThe element 'a' is not exist.");
    }
    
    if(InsertAtIndex(s, 4, 'f') == 0){
        printf("\nThe insertion location was invaild");
    }
    
    printf("\nAfter insert 4-th element: ");
    Output(s);
    
    DropElem(s, 3);
    printf("\nAfter drop 3-th element: ");
    Output(s);
    
    DropSqList(s);
    return 0;
}


