
// Online C compiler to run C program online

#include <stdio.h>

struct sdistant{
  float real;
  float imagin;
};

struct sdistant read_dist(){
    struct sdistant s1;
    scanf("%f",&s1.real);
    scanf("%f",&s1.imagin);
    return s1;
}


struct sdistant  add_dist(struct sdistant s1,struct sdistant s2){
      struct sdistant s3;
      
      s3.real=(s1.real+s2.real);
      s3.imagin=s2.imagin+s1.imagin;  
    
    return s3;
}

int main() {
   struct sdistant s1,s2,s3;

   printf("Enter  lst complex number ");
   s1=read_dist();

   printf("Enter  2nd complex number ");
   s2=read_dist();
   s3=add_dist(s1,s2);

   printf("sum = %.2f + %.2f i ",s3.real,s3.imagin);
}