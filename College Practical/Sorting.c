 #include <stdio.h>

void print(int a[], int n) {
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
}

void bubble(int a[], int n) {
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]) {
                int t=a[j]; a[j]=a[j+1]; a[j+1]=t;
            }
}

void selection(int a[], int n) {
    for(int i=0;i<n-1;i++) {
        int min=i;
        for(int j=i+1;j<n;j++)
            if(a[j]<a[min]) min=j;

        int t=a[i]; a[i]=a[min]; a[min]=t;
    }
}

void insertion(int a[], int n) {
    for(int i=1;i<n;i++) {
        int key=a[i], j=i-1;

        while(j>=0 && a[j]>key) {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

void merge(int a[], int l, int m, int r) {
    int i=l,j=m+1,k=0,b[100];

    while(i<=m && j<=r)
        b[k++]=(a[i]<a[j]) ? a[i++] : a[j++];

    while(i<=m) b[k++]=a[i++];
    while(j<=r) b[k++]=a[j++];

    for(i=l,k=0;i<=r;i++,k++)
        a[i]=b[k];
}

void mergeSort(int a[], int l, int r) {
    if(l<r) {
        int m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int partition(int a[], int l, int r) {
    int pivot=a[r], i=l-1;

    for(int j=l;j<r;j++)
        if(a[j]<pivot) {
            i++;
            int t=a[i]; a[i]=a[j]; a[j]=t;
        }

    int t=a[i+1]; a[i+1]=a[r]; a[r]=t;
    return i+1;
}

void quickSort(int a[], int l, int r) {
    if(l<r) {
        int p=partition(a,l,r);
        quickSort(a,l,p-1);
        quickSort(a,p+1,r);
    }
}

int main() {
    int a[100], n, ch;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    do {
        printf("\n1.Bubble  2.Selection  3.Insertion");
        printf("\n4.Merge   5.Quick      6.Exit\n");
        scanf("%d",&ch);

        switch(ch) {
            case 1: bubble(a,n); break;
            case 2: selection(a,n); break;
            case 3: insertion(a,n); break;
            case 4: mergeSort(a,0,n-1); break;
            case 5: quickSort(a,0,n-1); break;
        }

        if(ch>=1 && ch<=5) {
            printf("Sorted: ");
            print(a,n);
        }

    } while(ch!=6);

    return 0;
}
