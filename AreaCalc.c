# include<stdio.h>
# include<math.h>
// Program to print are of certain shapes
void square(int sqSide);
void rectangle(int recLen,int recWid);
void circle(float radius);
int main(){
    int choice, sqSide, recLen, recWid;
    float radius;
    printf("Choose shape\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");
    scanf("%d", &choice);
    switch (choice){
        case 1:
        printf("Enter Length of side \n");
        scanf("%d", &sqSide);
        square(sqSide);
        break;
        case 2:
        printf("Enter Length and Breadth respectiely \n");
        scanf("%d", &recLen);
        scanf("%d", &recWid);
        rectangle(recLen,recWid);
        break;
        case 3:
        printf("Enter Radius \n");
        scanf("%f",&radius);
        circle(radius);
        break;
        default:
        printf("incorrect input, retry");
    }
        return 0;
}
void square(int side){
    printf("Area of Square is: %d\n", side*side);
}
void rectangle(int len, int wid){
    printf("Area of rectangle is: %d\n", len*wid);
}
void circle(float radius){
    printf("Area of circle is: %f\n", ((22*radius)/7));
}