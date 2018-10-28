#include<stdio.h>
int main()
{
    long long int brown[3],green[3],clean[3],sum;
    long long int BCG,BGC,CBG,CGB,GBC,GCB,min;
    while(scanf("%lld ",&brown[0])==1)
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld %lld",&green[0],&clean[0],&brown[1],&green[1],&clean[1],&brown[2],&green[2],&clean[2]);
        sum=brown[0]+green[0]+clean[0]+brown[1]+green[1]+clean[1]+brown[2]+green[2]+clean[2];

        BCG=sum-brown[0]-green[2]-clean[1];

        BGC=sum-brown[0]-green[1]-clean[2];

        CBG=sum-brown[1]-green[2]-clean[0];

        CGB=sum-brown[2]-green[1]-clean[0];

        GBC=sum-brown[1]-green[0]-clean[2];

        GCB=sum-brown[2]-green[0]-clean[1];

        min=(BCG<BGC)?BCG:BGC;
        min=(min<CBG)?min:CBG;
        min=(min<CGB)?min:CGB;
        min=(min<GBC)?min:GBC;
        min=(min<GCB)?min:GCB;

        if(min==BCG) printf("BCG");

        else if(min==BGC) printf("BGC");

        else if(min==CBG) printf("CBG");

        else if(min==CGB) printf("CGB");

        else if(min==GBC) printf("GBC");

        else if(min==GCB) printf("GCB");

        printf(" %lld\n",min);
    }
    return 0;
}
