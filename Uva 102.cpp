#include <stdio.h>
int main(){
    int a[9],i;
    while(scanf("%d",&a[0])!=EOF){
        for(i=1;i<9;i++)
            scanf("%d",&a[i]);

      int   BCG=a[1]+a[2]+a[3]+a[4]+a[6]+a[8];
       int  BGC=a[1]+a[2]+a[3]+a[5]+a[6]+a[7];
       int CBG=a[0]+a[1]+a[4]+a[5]+a[6]+a[8];
       int  CGB=a[0]+a[1]+a[3]+a[5]+a[7]+a[8];
       int  GCB=a[0]+a[2]+a[3]+a[4]+a[7]+a[8];
       int  GBC=a[0]+a[2]+a[4]+a[5]+a[6]+a[7];
int mincost=BCG;
 if(BGC < mincost) mincost = BGC;
        if (CBG < mincost) mincost = CBG;
        if (CGB < mincost) mincost = CGB;
        if (GCB < mincost) mincost = GCB;
        if (GBC < mincost) mincost = GBC;
        if(mincost==BCG)
            printf("BCG %d\n", BCG);
            else if(mincost==BGC)
            printf("BGC %d\n",BGC);
        else if(mincost==CBG)
            printf("CBG %d\n",CBG);
        else if(mincost==CGB)
            printf("CGB %d\n",CGB);
        else if(mincost==GCB)
            printf("GCB %d\n",GCB);
        else
            printf("GBC %d\n",GBC);

    }
    return 0;
}
