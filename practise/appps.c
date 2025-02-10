#include<stdio.h>
#include<conio.h>
int main(){
    int ch, i=1;
    do
    {
        printf("Welcome to world of Lens & Mirrors\n");
        printf("Press 1, for Lens\n");
        printf("Press 2, for Mirrors\n");
        scanf("%d",&ch);
    
        if(ch==1){
            printf("Press 1, for convex lens\n");
            printf("Press 2, for concave lens\n");
            scanf("%d",&ch);
            if(ch==1){
                printf("Press 1, for object at infinity\n");
                printf("Press 2, for object beyond second focus\n");
                printf("Press 3, for object at between second and first focus\n");
                printf("Press 4, for object at first focus\n");
                printf("Press 5, for object at second focus\n");
                printf("Press 6, for object at between first focus and optical centre\n");
                scanf("%d",&ch);
                if(ch==1){
                    printf("Image is at focus2\n");
                    printf("The nature of the image is real and inverted\n");
                    printf("The size of the image is diminished,pointsized\n");
                }
                else if(ch==2){
                    printf("Image is between second focus2 and first focus2\n");
                    printf("The nature of the image is real and inverted\n");
                    printf("The size of the image is diminished\n");
                }
                else if(ch==3){
                    printf("Image is beyond second focus2\n");
                    printf("The nature of the image is real and inverted\n");
                    printf("The size of the image is enlarged\n");
                }
                else if(ch==4){
                    printf("Image is at infinity\n");
                    printf("The nature of the image is real and inverted\n");
                    printf("The size of the image is infinitely larged\n");
                }
                else if(ch==5){
                    printf("Image is at second focus2\n");
                    printf("The nature of the image is real and inverted\n");
                    printf("The size of the image is same size\n");
                }
                else if(ch==6){
                    printf("Image is at the same side as the object\n");
                    printf("The nature of the image is virtual and erect\n");
                    printf("The size of the image is enlarged\n");
                }
                else 
                printf("INVALID INPUT\n");
            }
            else if(ch==2){
                printf("Press 1, for object at infinity\n");
                printf("Press 2, for object beyond infinity and optical centre\n");
                scanf("%d",&ch);
                if(ch==1){
                    printf("Image is at focus1\n");
                    printf("The nature of the image is virtual and erect\n");
                    printf("The size of the image is highly diminished,pointsized\n");
                }
                else if(ch==2){
                    printf("Image is between focus1 and optical centre\n");
                    printf("The nature of the image is virtual and erect\n");
                    printf("The size of the image is diminished\n");
                }
                else
                printf("INVALID INPUT\n");
            }
        }
        else if(ch==2){
            printf("Press 1, for cocave mirror\n");
            printf("Press 2, for convex mirror\n");
            scanf("%d",&ch);
            if(ch==1){
                printf("Press 1, for object at infinity\n");
                printf("Press 2, for object beyond the centre of curvature\n");
                printf("Press 3, for object at the centre of curvature\n");
                printf("Press 4, for object at between centre of curvature and focus\n");
                printf("Press 5, for object at focus\n");
                scanf("%d",&ch);
                if(ch==1){
                    printf("Image is at the focus\n");
                    printf("The nature of the image is real and inverted\n");
                    printf("The size of the image is highly diminished\n");
                }
                else if(ch==2){
                    printf("Image is between centre of curvature and focus \n");
                    printf("The nature of the image is real and inverted\n");
                    printf("The size of the image is diminished\n");
                }
                else if(ch==3){
                    printf("Image is at centre of curvature\n");
                    printf("The nature of the image is real and inverted\n");
                    printf("The size of the image is of same size\n");
                }
                else if(ch==4){
                    printf("Image is beyond centre of curvature\n");
                    printf("The nature of the image is real and inverted\n");
                    printf("The size of the image is enlarged\n");
                }
                else if(ch==5){
                    printf("Image is at infinity\n");
                    printf("The nature of the image is real and inverted\n");
                    printf("The size of the image is highly larged\n");
                }
                else
                printf("INVALID INPUT\n");
                
            }
            else if(ch==2){
                printf("Press 1, for object at infinity\n");
                printf("Press 2, for object beyond infinity and optical centre\n");
                scanf("%d",&ch);
                if(ch==1){
                    printf("Image is at focus, behind the mirror\n");
                    printf("The nature of the image is virtual and erect\n");
                    printf("The size of the image is highly diminished\n");
                }
                else if(ch==2){
                    printf("Image is between pole and focus, behind the mirror\n");
                    printf("The nature of the image is virtual and erect\n");
                    printf("The size of the image is diminished\n");
                }
                else
                printf("INVALID INPUT\n");
            }
        }
        else
            printf("INVALID INPUT\n");
            printf("Press 1, to continue again\n");
            printf("Or press any no. except 1 to leave\n");
            scanf("%d",&i);
            printf("\n");
    } while (i==1);
    printf("\nYour desicion to leave the page is accepted\n");
    printf("Made with love by raj\n");
    printf("Press any key to exit\n");
    getch();
}