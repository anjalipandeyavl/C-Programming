        // program showing the concept of bitwise operator
        
        #include<stdio.h>
        void main()
        {
                int a=9,b=10,c;
                
                c = a&b;
                printf("%d & %d = %d\n",a,b,c);
                
                c = a|b;
                printf("%d | %d = %d\n",a,b,c);        
        
                c = a^b;
                printf("%d ^ %d = %d\n",a,b,c);
        
                c = 4<<2;
                printf("%d << %d = %d\n",4,2,c);
        
                c = 4>>2;
                printf("%d >> %d = %d\n",4,2,c);
        
                c = ~a;
                printf("~%d = %d\n",a,c);
        
        }
        
        
        
        
        
        
