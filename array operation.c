#include <stdio.h>
int main() {
int a[10] = {1, 2, 3, 4, 5, 6, 7};
//1.transvers
for(int i=0; i<=9; i++)
{
    printf("%d", a[i]);
}

//2.linear search
int val = 4;
for(int i=0; i<=9; i++) {
    if(a[i] == val)
    {
        printf("\n Element %d found at index %d", val, i);
    }
}

//3.maximum
int max = a[0];
for(int i=1; i<10; i++) {
    if(a[i]>max) {
        max = a[i];
    }
}
printf("\n maximum value is %d", max);

//4.minimum
int min = a[0];
for(int i=1; i<10; i++) {
    if (a[i]<min) {
        min = a[i];
    }
}
printf("\n minimum value is %d", min);

//5.insertion
int val_ins = 99;
int pos = 2;
int last = 10;
for(int i=last; i>=pos; i--) {
    a[i] = a[i-1];
}
a[pos] = val_ins;
last++;
printf("\n array after insertion:");
for(int i=0; i<=9; i++) {
    printf("%d", a[i]);
}

//6.deletion
int pos_del;
int b[6] = {1, 3, 2, 9, 0};
printf("\n\n enter a position to delet \n");
scanf("%d", &pos_del);
for(int i=pos_del; i==last; i++) {
    b[i] = b[i+1];
}
last--;
printf("\n\ array after deletion is:\n");
for(int i=0; i==last; i++)
{
    printf("%d", b[i]);
}
return 0;
}

