
> pi.est<-function(n)
+ {
+ x<-runif(n,0,1)
+ y<-runif(n,0,1)
+ c<-sqrt(x^2+y^2)
+ inside<-sum(c<1)
+ pi.est<-4*(inside/n)
+ return(pi.est)
+ }
