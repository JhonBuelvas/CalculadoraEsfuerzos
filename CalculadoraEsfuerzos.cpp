#include <iostream>
#include <math.h>
#include <cstdlib> 
#include <stdio.h>
#include <stdlib.h>


using namespace std;
int main(int argc, char** argv) {
float R;
int OP;
int n,i,j,m,F[20]; 
double a,b,xi,xp,fxi,fxp,h,fa,fb,A,SI,SP;  	
int k,coe,l,f,u,op,sw,maxit;
int t[20],w[20],P[20];
double fpxi,e,p,fp,tol,x0, X[100],  FX[100],  x,  fx,  s;
  OP=99; 
		 while (OP != 0)
		       { 
		            system("pause"); 
		            system("cls");   
					cout<<"\n\n\t\t---------------------------------------------------------------------------------------------------------------\n\n"; 
		            cout<<"\t\t\t BIENVENIDO AL PROGRAMA PARA CALCULAR RAICES, INTERPOLACION POLINOMIAL Y INTEGRACION NUMERICA \n\n"; 
		            cout<<"\t\t\t\tDIGITE EL NUMERO RESPECTIVO A LA OPERACION: \n\n\t\t\t\t\t\t(1) CALCULO DE RAICES \n\t\t\t\t\t\t(2) INTERPOLACION POLINOMIAL \n \t\t\t\t\t\t(3) INTEGRACION NUMERICA \n \t\t\t\t\t\t(0) SALIR "; 
		            cout<<"\n\n\t\t---------------------------------------------------------------------------------------------------------------\n";
					cout<<"\n\n\t\t\t\t  DIGITE OPCION ====> ";cin>>OP;
		            cout<<"\n\n\t\t---------------------------------------------------------------------------------------------------------------\n";
		            
        
  
  switch (OP){
  	//calculo de raices
  	case 1:
                op=99;
                       while(op!=3){
  
       
		               system("cls");
	                   cout<<"\n\n\t\t------------------------------------------------------------\n";
		               cout<<"\t\t\tDIGITE EL NUMERO RESPECTIVO A LA OPERACION:\n";
		               cout<<"\n\n";
		               cout<<"\t\t(1) CREACION DEL POLINOMIO\n";
		               cout<<"\t\t(2) CALCULO DE LA RAIZ\n";
      	               cout<<"\t\t(3) REGRESAR AL MENU PRINCIPAL";
		               cout<<"\n\n";
		               cout<<"\n\n\t\t-------------------------------------------------------------\n";
		               cout<<"\t\tEscoja un opcion: "; 
		               cin>>op;
     	
	
	          switch(op) 
	            {
	               case 1:
	                        system("cls");	
				            cout<<"\aPOLINOMIO A DESARROLLAR  \n\n ";
				            cout<<"Digite el Grado de la Ecuacion: ";
				            cin>> n;
			
			                for(i=0;i<=n;i++){
			                	
				                 cout<<"Digite el coeficiente " <<i<<": ";
				                 cin>>t[i];
		  
			                 }
			                for(i=1;i<=n;i++){
			                	
				                  w[i-1]=t[i]*i;
		  
			                    }
		
			                cout<<"\nEL POLINOMIO ES:\n";
			                for(j=0;j<=n;j++)
			                   {
			                      cout<<t[j]<<"X^"<<j<<" + ";
			                    }
			                cout<<"\n\nSU DERIVA ES:\n";
			                for(j=0;j<=n-1;j++)
			                    {
			                       cout<<w[j]<<"X^"<<j<<" + ";
			                    }
			                system("pause");
			                break; 
		           case 2:
			                system("cls");
			                cout<<("\nDIGITE EL PUNTO DE PARTIDA (x0): ");
			                cin>>x0;
			                cout<<("\nDIGITE EL MAXIMO DE ITERACIONES: ");
			                cin>>maxit;
			                cout<<("\nINGRESE EL VALOR DE TOLERANCIA: ");
			                cin>>tol;
			                sw=0;i=0;
			                cout<<"\n""it""\t\t""x0""\t\t""fx0""\t\t""f'x0""\t\t""xi""\t\t""e""\t\t\n"; 
			                while((sw==0)&&(i<=maxit))
			                    {
				                  cout<<i<<"\t\t   ";
				
				                  cout<<x0<<" \t\t ";
				                  fxi=0;
				                  for(j=0;j<=n;j++)
				                    {
					                    fxi=fxi+t[j]*pow(x0,j);
				                    }
				
				                  cout<<fxi<<" \t\t  ";
				                  fpxi=0;
				                  for(k=0;k<=n-1;k++)
				                    {
					                  fpxi=fpxi+w[k]*pow(x0,k);
				                    }

				                  cout<<fpxi<<" \t\t  ";
				                  xi=x0-fxi/fpxi;

				                  cout<<xi<<" \t\t  ";
				                  e=fabs(xi-x0);
				                  cout<<e<<" \t\t  "<<"\n";
				                  if(e<=tol){
					                  sw=1;
				                    }
				                     else{
					                      i++;
					                      x0=xi;
					                    }
				
			
			                   }
			                if (sw==1)
			                     {
				                    cout<<"LA RAIZ ES: "<<xi;
			                    }else{
				                       cout<<"NO CONVERGE";
			                        }
                           system("pause");	
			               break;
                	case 3:system("cls");
                	        break; 
                    default:  cout<<"\nNO ES UN NUMERO ASOCIADO A UNO DE LOS PROCESOS\n\n"; 
					          system("pause");
               } 	
            }							
  	        break;
	//interpolacion 		   
    case 2:
	         op=99;
                       while(op!=3){
  
       
		               system("cls");
	                   cout<<"\n\n\t\t------------------------------------------------------------\n";
		               cout<<"\t\t\tDIGITE EL NUMERO RESPECTIVO A LA OPERACION:\n";
		               cout<<"\n\n";
		               cout<<"\t\t(1) CREACION DE LA TABLA\n";
		               cout<<"\t\t(2) DESARROLLO\n";
      	               cout<<"\t\t(3) REGRESAR AL MENU PRINCIPAL";
		               cout<<"\n\n";
		               cout<<"\n\n\t\t-------------------------------------------------------------\n";
		               cout<<"\t\tEscoja un opcion: "; 
		               cin>>op;
		               
		               switch(op) 
	                      {
	                              case 1:
	                                       system("cls");	
	                                       cout<<"\n\n INGRESE EL NUMERO DE PARES DE DATOS (x,fx) A INTERPOLAR: ";
                                           cin >> n;
     
                                           cout << "\n\n\nINGRESE VALORES DE x y sus f(x)\n\n";

                                           for ( i=0; i<n; i++ ) {

                                                    cout << "\nx" << i << ": ";
                                                    cin >> X[i];
                                               }
                                           for ( i=0; i<n; i++ ) {   
                                                    cout << "\nf(x" << i << "): ";
                                                    cin >> FX[i];
                                               }
                                            break;
								  case 2:
								  			system("cls");
											cout << "\n\nINGRESE EL PUNTO A EVALUAR EN EL POLINOMIO INTERPOLADO : " ;
                                            cin >> x;

                                            fx = 0;
                                            for( i=0; i<n; i++){
                                            s = 1;
                                            j = 0;
                                            while( j<n )
                                                 {
                                                    if( i != j){
                                                            s = s*( x - X[j] )/( X[i] - X[j]);
                                                        }
                                                          j++;
                                                 }
                                                   fx= fx + s*FX[i];
                                                 }

                                           cout << "\n\nEL VALOR DE LA FUNCION f( " << x << ") es : " << fx; 
                                           system("pause");
										   break;   
                                           
                              case 3:system("cls");
                                      break; 
                              default:  cout<<"\nNO ES UN NUMERO ASOCIADO A UNO DE LOS PROCESOS\n\n"; 
					                   system("pause");
                            }
                    }
  	                break;
  	//integracion numerica        
    case 3: 
	        op=99;
                       while(op!=3){
  
       
		               system("cls");
	                   cout<<"\n\n\t\t------------------------------------------------------------\n";
		               cout<<"\t\t\tDIGITE EL NUMERO RESPECTIVO A LA OPERACION:\n";
		               cout<<"\n";
		               cout<<"\t\t(1) CREACION DEL POLINOMIO\n";
		               cout<<"\t\t(2) DESARROLLO DE LA INTEGRAL\n";
      	               cout<<"\t\t(3) REGRESAR AL MENU PRINCIPAL";
		               cout<<"\n\n";
		               cout<<"\n\n\t\t-------------------------------------------------------------\n";
		               cout<<"\t\tEscoja un opcion: "; 
		               cin>>op;
     	
	
	          switch(op) 
	            {
	               case 1:
	                        system("cls");	
				            cout<<"\n\n\aPOLINOMIO A DESARROLLAR  \n ";
				            cout<<"\nDigite el Grado de la Ecuacion: ";
				            cin>> m;
			
			                for(i=0;i<=m;i++){
			                	
				                 cout<<"Digite el coeficiente " <<i<<": ";
				                 cin>>F[i];
		  
			                 }
			               
			                cout<<"\nLA FUNCION A INTEGRAR ES:\n";
			                for(j=0;j<=m;j++)
			                   {
			                      cout<<F[j]<<"X^"<<j<<" + ";
			                    }
			                system("pause");
			                break;
				   case 2:  
				            system("cls");	
							cout<<("\nDIGITE EL LIMITE INFERIOR DE LA INTEGRAL: ");
                            cin>>a;
                            cout<<("\nDIGITE EL LIMITE SUPERIOR DE LA INTEGRAL: ");
                            cin>>b;	
                            cout<<"\nDIGITE EL NUMERO DE PARTICIONES:";cin>>n;
                            h=((b-a)/n);	    
                            for (i=0;i<=m;i++){
		
		                           fa=fa+F[i]*pow(a,i);
		                           fb=fb+F[i]*pow(b,i);
		
	                            }
	                       SI=0;
	                       xi=0;
                        	for(i=1;i<=n-1;i++){
   	                               if(i%2!=0){
		                             	xi=a+(i*h);
		                              	fxi=0;
		                              	for(j=0;j<=m;j++){
				                              fxi=fxi+F[j]*pow(xi,j);
		                                	}
		                                SI=SI+fxi;
		                                } 
		
	                            }
	                        xp=0;
	                        SP=0;
	                        for(i=1;i<=n-1;i++){
	                            	if(i%2==0){	
		                                   xp=a+(i*h);
		                                   fxp=0;
		                                   for(j=0;j<=m;j++)
		                                        {
		                                            fxp=fxp+F[j]*pow(xp,j);
	    	                                    }
	                                        SP=SP+fxp;	
                                        }
                               	}
	
		
	                       	A= (h/3)*(fa+4*SI+2*SP+fb);
	                        cout<<"\nEL AREA APROXIMADO ES:"<<A<<"\n";
	                        system("pause");
	                        break;
	                case 3:system("cls"); 
	                        break; 
					default:  cout<<"\nNO ES UN NUMERO ASOCIADO A UNO DE LOS PROCESOS\n\n"; 
					         system("pause");
					 } 	
            }							
  	        break;       
  	         

	case 0: cout<<"MUCHAS GRACIAS PROFESOR!\n\n";
	        break;	     
		     
     default: cout<<"\nNO ES UN NUMERO ASOCIADO A UNA DE LAS OPERACIONES\n\n";
    }
}
 
 	
	
    system("pause");	
	return 0;
}
