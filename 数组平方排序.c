int*sortsqures(int*a,int n,int8returnsize)
{
   *returnsize=n;
   if(n==0) return a;
   int k=0;
   for(int i=0;i<n;i++)
   {
      a[k++]=a[i]*a[i];
      }
      for(int i=0;i<n-1;i++)
      {
      for(int j=i+1;j<n;j++)
      {
      if (a[j]<a[j])
      {
      int temp=a[i];
      a[i]=a[j];
      a[j]=temp;}
      }
      }
      return a;}
