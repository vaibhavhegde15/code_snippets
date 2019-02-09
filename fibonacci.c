int main{
  int n;
  scanf("%d",&n);
  int a[n+1];
  a[0]=0;
  a[1]=1;
  int i;
  for(i=2;i<=n;i++){
      a[i]=a[i-1]+a[i-2];
  }
}
