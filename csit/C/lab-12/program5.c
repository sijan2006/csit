#include <stdio.h>
struct distance
{
    int dkm1, dm1;
    int dkm2, dm2;
};
struct sum
{
    int sumkm, summ;
};
struct diff
{
    int dkm, dm;
};

struct sum calculateSum(struct distance s);
struct diff calculateDiff(struct distance s);

void main()
{
    struct distance s;
    struct sum su;
    struct diff di;
    printf("Enter first distance (km and m): ");
    scanf("%d%d", &s.dkm1, &s.dm1);
    printf("Enter second distance (km and m): ");
    scanf("%d%d", &s.dkm2, &s.dm2);
    su = calculateSum(s);
    di = calculateDiff(s);
    printf("Sum of distances: %d km %d m\n", su.sumkm, su.summ);
    printf("Difference of distances: %d km %d m\n", di.dkm, di.dm);
}
struct sum calculateSum(struct distance s)
{
    struct sum su;
    su.sumkm = (s.dm1 + s.dm2) / 1000 + s.dkm1 + s.dkm2;
    su.summ = (s.dm1 + s.dm2) % 1000;
    return su;
}

struct diff calculateDiff(struct distance s)
{
    struct diff di;
    di.dm = s.dm2 - s.dm1;
    di.dkm = s.dkm2 - s.dkm1;
    return di;
}
