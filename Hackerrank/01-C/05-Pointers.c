void update(int *a,int *b) {
    
    int Sum,Diff;

    Sum  = (*a) + (*b);
    Diff = (*a) - (*b);

    if(Diff > 0)
    {
        Diff = (*a) - (*b);
    }
    else {
        Diff = (*b) - (*a);
    }
    printf("%d\n%d",Sum , Diff);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}