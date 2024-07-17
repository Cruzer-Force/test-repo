# include <stdio.h>
int main(){

int catmarks[6] = {94, 53, 80, 32, 56, 35};

int smallest = catmarks[0], i;

for(i=0 ; i<6 ; i++){
    if(catmarks[i] < smallest){
        smallest = catmarks[i];
    }
}
printf("The largest element is : %d",smallest);

return 0;

}








/* 
GENERAL SYNTAX FOR A FOR LOOP

for(initial value ; condition expression ; arithmetic operator(increment, decrement) ){
    statements to execute if the condition_expression evaluaes to TRUE
}

*/


