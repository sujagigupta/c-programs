#include<stdio.h>                                                                                                                          
int main()  
                                                                   
{                                                                               
 int balance=0, deposit, withdraw;                                              
 float ci;                                                                      
 char op;                                                                       
                                                                                
 while(1)                                                                       
 {                                                                              
  printf("\nBanking System");                                                   
  printf("\n................");                                                 
  printf("\nD ->Deposit");                                                     
  printf("\nW ->Withdraw");                                                    
  printf("\nB ->Balance");                                                     
                                                 
  printf("\nQ ->Quit");                                                        
  printf("\nEnter operation: ");                                                
  scanf(" %c", &op);                                                            
  switch(op)                                                                    
  {                                                                             
   case 'D':                                                                    
     printf("\nEnter deposit amount: ");                                        
     scanf("%d", &deposit);                                                     
     balance += deposit;                                                        
     break;                                                                     
   case 'W':                                                                    
     printf("\nEnter withdraw amount: ");                                       
     scanf("%d", &withdraw);                                                    
     balance -= withdraw;                                                       
     break;                                                                     
   case 'B':                                                                    
     printf("Balance: %d", balance);                                            
     break;                                                                     
                                                                      
   case 'Q':                                                                    
     return 0 ;                                                                    
   default:                                                                     
     printf("Invalid Operation!");                                              
  }                                                                             
 }                                                                              
} 
