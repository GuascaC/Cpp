#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float h,c,a,x,y,Xf,Yf,Vr,A,B;
    cout<<"Vectition"<<endl<<"Bienvenido a Vectition,una calculadora de vectores programada en c++,antes de comenzar, repasemos los conceptos necesarios para el uso de este software."<<endl<<"Un vector es un segmento o recta en una plano cartesiano que representa una cantidad(magnitud) y una dirección(Ángulo) dentro de los 360 Grados."<<endl<<"Sumado a esto cuenta con un sentido(hacia donde señala la flecha) y un punto de aplicación(Inicio)."<<endl<<"También repasemos las tres leyes básicas de Isaac Newton(1643-1727)."<<endl<<"Primera ley o ley de la inercia"<<endl<<"‘Todo cuerpo continúa en su estado de reposo o movimiento uniforme en línea recta, no muy lejos de las fuerzas impresas a cambiar su posición’;Esta ley postula que un cuerpo va a estar en un estado de reposo indefinido hasta que se aplique una fuerza externa que rompa el equilibrio.’"<<endl<<"Segunda ley o ley fundamental de la dinámica";
    cout<<endl<<"‘El cambio de movimiento es directamente proporcional a la fuerza motriz impresa y ocurre según la línea recta a lo largo de la cual aquella fuerza se imprime.’Esta ley establece que la fuerza que se le aplica a un objeto se llama fuerza neta, y que un cambio en la velocidad de un objeto de denomina aceleración,este cambio puede ser tanto en la magnitud como en la dirección,También cabe resaltar que la fuerza es la masa por la aceleración."<<endl<<"Tercera ley (Acción-reacción)"<<endl<<"‘Con toda acción ocurre siempre una reacción igual y contraria: quiere decir que las acciones mutuas de dos cuerpos siempre son iguales y dirigidas en sentido opuesto’"<<endl<<"Esta ley explica como funciona un sistema en equilibrio dado que un objeto se va a encontrar en reposo puesto que la suma de todas sus fuerzas es 0, por lo que para cada fuerza que afecta a un cuerpo hay una fuerza de igual magnitud pero en sentido contrario, quiere decir opuesta, Por ejemplo la fuerza de gravedad y la fuerza normal";
    c=1;
while (c<=4){
    cout<<endl<<"Ingrese la Hipotenusa:";
    cin >>h;
    cout<<"Ingrese el ángulo:";
    cin>>a;
     if (a>=-360 && a<=360){
      a=a*0.01745;
      x=h*cos(a);
      y=h*sin(a);
      cout<<setprecision(2) << fixed<<"Vx es :"<<x<< endl;
      cout<<setprecision(2) << fixed<<"Vy es :"<<y<< endl;
      Xf=Xf+x;
      Yf=Yf+y;
      c=c+1 ;}
     else {
    cout<<"ERROR(El ángulo no corresponde a los 360)"<<endl;}}
cout<<"Vxf es :"<<Xf<<endl; 
cout<<"Vyf es :"<<Yf<<endl;
Vr=("%lf", sqrt((pow (Xf,2)+(pow (Yf,2)))));
cout<<"Vr es :"<<Vr<<endl<<"Fuentes: Rada García, Eloy (trad.) (2003). «Principios matemáticos de la filosofía natural». apud. Newton. Vida, pensamiento y obra, p. 199. A hombros de gigantes. Las grandes obras de la física y la Astronomía (Barcelona: Crítica); Isaac Newton, extractos de Principios matemáticos de la filosofía natural, cit., p. 199;Capecchi, Danilo,. The problem of the motion of bodies : a historical view of the development of classical mechanics. ISBN 978-3-319-04840-6. OCLC 883738404. Consultado el 23 de enero de 2021."<<endl<<"Copyright CGSoftware 2022";
}
