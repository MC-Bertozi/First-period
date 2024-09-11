#include <stdio.h>
#include <time.h>
#include <graphics.h>

void botao(int x1, int y1, int x2, int y2, char rotulo[15], int estado);

main()
{
      initwindow(210,200,"Exercício",100,100);

      botao(50,50,160,80,"Mensagem 1",0);
      botao(50,100,160,130,"Mensagem 2",0);

      while(!kbhit())
      {
         if (mousex() >= 50 && mousex() <= 160 && mousey() >= 50 && mousey() <= 80 && ismouseclick(WM_LBUTTONDOWN))
         {
             botao(50,50,160,80,"Mensagem 1",1);
             delay(200);
             botao(50,50,160,80,"Mensagem 1",0);
             printf("Mensagem 1: Estudar para Progredir!\n");
         }

         if (mousex() >= 50 && mousex() <= 160 && mousey() >= 100 && mousey() <= 130 && ismouseclick(WM_LBUTTONDOWN))
         {
             botao(50,100,160,130,"Mensagem 2",1);
             delay(200);
             botao(50,100,160,130,"Mensagem 2",0);
             printf("Mensagem 2: Progredir para Transformar o Mundo!\n");
         }

         clearmouseclick(WM_LBUTTONDOWN);
      }

      // fecha o modo gráfico e retorna ao modo de saída-padrão (texto)
      closegraph();
}

void botao(int x1, int y1, int x2, int y2, char rotulo[15], int estado)
{
    if (estado == 0) // botao sem pressionamento
    {
        // area interior do botao
        setfillstyle(1,7);
        bar(x1,y1,x2,y2);

        // linhas de contorno
        setlinestyle(0,0,2);
        setcolor(15);
        line(x1,y1,x2,y1);
        line(x1,y1,x1,y2);
        setcolor(8);
        line(x2,y1+2,x2,y2);
        line(x1+2,y2,x2,y2);

        // rotulo do botao
        setbkcolor(7);
        setcolor(0);
        outtextxy(x1 + ((x2-x1-(strlen(rotulo)*8))/2) + 2, y1+8, rotulo);
    }
    else
    {
        if (estado == 1)
        {
            // area interior do botao
            setfillstyle(1,7);
            bar(x1,y1,x2,y2);

            // linhas de contorno
            setlinestyle(0,0,2);
            setcolor(8);
            line(x1,y1,x2,y1);
            line(x1,y1,x1,y2);
            setcolor(15);
            line(x2,y1+2,x2,y2);
            line(x1+2,y2,x2,y2);

            // rotulo do botao
            setbkcolor(7);
            setcolor(0);
            outtextxy(x1 + ((x2-x1-(strlen(rotulo)*8))/2) + 2, y1+9, rotulo);
        }
    }
}
