#FACTORIAL
int fac(int x){
  if(x==1){
  return x;}
return x*fac(x-1);


}
#FIBONACCI
int fibo(int k){
  if(k==0 || k==1){
  return 1;}
}return fibo(k-2)+fibo(k-1);
