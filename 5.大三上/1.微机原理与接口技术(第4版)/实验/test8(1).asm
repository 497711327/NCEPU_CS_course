;*************************;
;*  8253��ʽ0������ʵ��  *;
;*************************;
io8253a        equ 283h
io8253b        equ 280h
code segment
    assume  cs:code
start: mov al,14h     	  ;15----14h
     mov dx,io8253a
     out dx,al
     mov dx,io8253b     	 ;�ͼ�����ֵ
     mov al,0fh   		;10---0fh 0000
     out dx,al
lll:     in al,dx        	 ;��������ֵ
     call disp        		;����ʾ�ӳ���
     push dx  
     mov ah,06h 
     mov dl,0ffh
     int 21h
     pop dx
     jz lll
     mov ah,4ch       ;�˳�
     int 21h
disp  proc near        ;��ʾ�ӳ���
     push dx
     and al,0fh  		 ;0f0---0fh    
     mov dl,al
     cmp dl,9         ;�ж��Ƿ�<=9
     jle  num  		;jge-----jle num      
     add dl,7         
num: add dl,30h
     mov ah,02h       ;��ʾ
     int 21h
     mov dl,0dh       ;�ӻس���
     int 21h
     mov dl,0ah       ;�ӻ��з�
     int 21h
     pop dx
     ret              ;�ӳ��򷵻�
disp endp
code ends
end start 