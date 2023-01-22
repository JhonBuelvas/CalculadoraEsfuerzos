//SIMULADOR DE PROPIEDADES MECANICAS
#include <iostream>
#include <math.h>
#include <cstdlib> 
#include <stdio.h>
#include <stdlib.h>


using namespace std;
int main(int argc, char** argv) {
float a,b;
int OP, OA,U; 
double sigma, p, A, L,E,delta,D, d,sigmax, sigmay, tao, c, R,F,fi, G;
double taomax, sigmamax, sigmamin, dteta, teta, M; 
  OP=99; 
		 while (OP != 0)
		       { 
		            system("pause"); 
		            system("cls");    
		            cout<<"\t\t\t\t:::::::::::::::::BIENVENIDO A LA CALCULADORA DE PROPIEDADES MECANICAS::::::::::::::::: \n\n"; 
		            cout<<"\t\t\t\tDIGITE EL NUMERO RESPECTIVO A LA PROPIEDAD MECANICA QUE DESEA CONOCER: \n\n\t\t\t\t\t\t(1) ESFUERZO NORMAL POR CARGA AXIAL\n\t\t\t\t\t\t(2) ESFUERZO CORTANTE POR CARGA TRANSVERSAL\n \t\t\t\t\t\t(3) PAR TORSIONAL \n \t\t\t\t\t\t(4) CIRCULO DE MOHR \n\t\t\t\t\t\t(0) SALIR "; 
		            cout<<"\n\n\t\t\t  DIGITE OPCION ====> ";cin>>OP;
		            
		            
        
  
  switch (OP){
  	//ESFUERZO NORMAL POR CARGA AXIAL
  	case 1:
		while (OP != 5)
		{ 
			system("pause"); 
			system("cls");    
			cout<<"\t\t\t\t\t\t\t ESFUERZO NORMAL POR CARGA AXIAL \n"; 
			cout<<"\n\t\t\t\t-----------------------------------------------------------------------\n\n";
			cout<<"\t\t\t\tDIGITE EL NUMERO RESPECTIVO A LA PROPIEDAD MECANICA POR CARGA AXIAL: \n\n\t\t\t\t\t\t(1) ESFUERZO NORMAL \n\t\t\t\t\t\t(2) DEFORMACION   \n\t\t\t\t\t\t(3) DISEÑO DE EJES   \n\t\t\t\t\t\t(5) REGRESAR AL MENU PRINCIPAL "; 
			cout<<"\n\n\t\t\t\tDIGITE OPCION ====> ";cin>>OP;
			
				switch (OP){
				//ESFUERZO NORMAL
				case 1:  
							system("cls"); 
							cout<<"\n\n\t\t--------------------------------------------\n";	             	
							cout<<"\n\t\tESCOJA EL SISTEMA DE UNIDADES:\n\n "; 
							cout<<"\n\t\t(1) SISTEMA INTERNACIONAL\n\t\t(2) SISTEMA INGLES "; 
							cout<<"\n\n\t\t--------------------------------------------\n";
							cout<<"\n\n\t\tDIGITE OPCION ====>"; cin>>U;
							system("cls"); 
							if(U==1)
							{
								cout<<"\n\nIngrese la fuerza en N y el area en m^2:\n\n ";								  	
								cout<<"\nDIGITE EL VALOR DE LA CARGA: "; cin>>p;
								cout<<"\nDIGITE EL AREA TRANSVERSAL DEL ELEMENTO: "; cin>>A;
								sigma=p/A;
								cout<<"\nEL ESFUERZO NORMAL POR CARGA AXIAL ES:"<<sigma<<" Pa"<<"\n";    		         
								
							}else if(U==2)
									{
									cout<<"\n\nIngrese la fuerza en lb y el area en in^2:\n\n ";	
									cout<<"\nDIGITE EL VALOR DE LA CARGA: "; cin>>p;
									cout<<"\nDIGITE EL AREA TRANSVERSAL DEL ELEMENTO: "; cin>>A;
									sigma=p/A;
									cout<<"\nEL ESFUERZO NORMAL POR CARGA AXIAL ES:"<<sigma<<" PSI"<<"\n";
									}
		
							break;
				//ELOGANCION         
				case 2: 
							system("cls"); 
							cout<<"\n\n\t\t--------------------------------------------\n";	             	
							cout<<"\n\t\tESCOJA EL SISTEMA DE UNIDADES:\n\n "; 
							cout<<"\n\t\t(1) SISTEMA INTERNACIONAL\n\t\t(2) SISTEMA INGLES "; 
							cout<<"\n\n\t\t--------------------------------------------\n";
							cout<<"\n\n\t\tDIGITE OPCION ====>"; cin>>U;
							system("cls"); 
							if(U==1)
							{
								cout<<"\n\nIngrese la fuerza en N, la longitud y el diametro en m, y el modulo en N/m^2:\n\n ";
								cout<<"DIGITE EL VALOR DE LA CARGA: "; cin>>p;
								cout<<"DIGITE LA LONGITUD DE LA VARILLA:"; cin>>L; 
								cout<<"DIGITE EL MODULO DE ELASTICIDAD:";cin>>E;
								cout<<"DIGITE EL DIAMETRO DE LA VARILLA: "; cin>>d;
								delta=(4*p*L)/(3.14159*E*pow(d,2));
								cout<<"\nLA ELONGACION DE LA VARILLA ES:"<<delta<<" m"<<" \n"; 		         
								
							}else if(U==2)
									{
										cout<<"\n\nIngrese la fuerza en lb, la longitud y el diametro en in, y el modulo en lb/in^2:\n\n ";
										cout<<"DIGITE EL VALOR DE LA CARGA : "; cin>>p;
										cout<<"DIGITE LA LONGITUD DE LA VARILLA: "; cin>>L; 
										cout<<"DIGITE EL MODULO DE ELASTICIDAD: ";cin>>E;
										cout<<"DIGITE EL DIAMETRO TRANSVERSAL DE LA VARILLA: "; cin>>d;
										delta=(4*p*L)/(3.14159*E*pow(d,2));
										cout<<"\n LA ELONGACION DE LA VARILLA ES: "<<delta<<" in"<<" \n"; 
									} 	                    
						
							break;
					//DISEÑO DE EJES        
				case 3:  
							system("cls"); 
							cout<<"\n\n\t\t--------------------------------------------\n";	             	
							cout<<"\n\t\tESCOJA EL SISTEMA DE UNIDADES:\n\n "; 
							cout<<"\n\t\t(1) SISTEMA INTERNACIONAL\n\t\t(2) SISTEMA INGLES "; 
							cout<<"\n\n\t\t--------------------------------------------\n";
							cout<<"\n\n\t\tDIGITE OPCION ====>"; cin>>U;
					
							system("cls"); 
							if(U==1)
							{
								cout<<"\n\nIngrese la fuerza en N, la longitud y el diametro en m, y el modulo en N/m^2:\n\n ";
								cout<<"DIGITE EL VALOR DE LA CARGA: "; cin>>p;
								cout<<"DIGITE LA LONGITUD DEL EJE:"; cin>>L; 
								cout<<"DIGITE EL MODULO DE ELASTICIDAD:";cin>>E;
								cout<<"DIGITE LA ELONGACION DEL EJE: "; cin>>delta;
								A=(p*L)/(delta*E);
								D=(4*A)/3.14159;
								d=sqrt(D);
								cout<<"\nEL DIAMETRO DEL EJE ES:"<<d<<" m"<<" \n"; 	    		         
								
							}else if(U==2)
									{
									cout<<"\n\nIngrese la fuerza en lb, la longitud y la elongacion en in, y el modulo en lb/in^2:\n\n ";	
									cout<<"DIGITE EL VALOR DE LA CARGA: "; cin>>p;
									cout<<"DIGITE LA LONGITUD DEL EJE:"; cin>>L; 
									cout<<"DIGITE EL MODULO DE ELASTICIDAD:";cin>>E;
									cout<<"DIGITE LA ELONGACION DEL EJE:"; cin>>delta;
									A=(p*L)/(delta*E);
									D=(4*A)/3.14159;
									d=sqrt(D);
									cout<<"\nEL DIAMETRO DEL EJE ES:"<<d<<" in"<<" \n"; 	
									}
		
							break;
				case 5:  cout<<"HASTA LA PROXIMA!\n\n";
							break;         
				}
		}
	break;
//ESFUERZO CORTANTE POR CARGA TRANSVERSAL 			   
    case 2:
	         while (OP != 5)
		       { 
		            system("pause"); 
		            system("cls");    
		            cout<<"\t\t\t\t\t\t\tESFUERZO CORTANTE POR CARGA TRANSVERSAL \n"; 
		            cout<<"\n\t\t\t\t-----------------------------------------------------------------------\n\n";
		            cout<<"\t\t\t\tDIGITE EL NUMERO RESPECTIVO A LA PROPIEDAD MECANICA POR CARGA TRANSVERSAL: \n\n\t\t\t\t\t\t(1) ESFUERZO CORTANTE \n\t\t\t\t\t\t(2) FUERZA CORTANTE   \n\t\t\t\t\t\t(3) DISEÑO DE PASADORES   \n\t\t\t\t\t\t(5) REGRESAR AL MENU PRINCIPAL "; 
		            cout<<"\n\n\t\t\t\tDIGITE OPCION ====> ";cin>>OP;
		            
		             switch (OP){
		             	//ESFUERZO CORTANTE
		             	case 1:  
	                             system("cls"); 
								 cout<<"\n\n\t\t--------------------------------------------\n";	             	
		             	         cout<<"\n\t\tESCOJA EL SISTEMA DE UNIDADES:\n\n "; 
								 cout<<"\n\t\t(1) SISTEMA INTERNACIONAL\n\t\t(2) SISTEMA INGLES "; 
								 cout<<"\n\n\t\t--------------------------------------------\n";
								 cout<<"\n\n\t\tDIGITE OPCION ====>"; cin>>U;
								 system("cls"); 
		             	         if(U==1)
								  {
                                       cout<<"\n\nIngrese la fuerza en N y el area en m^2:\n\n ";								  	
                                       cout<<"\nDIGITE EL VALOR DE LA CARGA: "; cin>>p;
                                       cout<<"\nDIGITE EL AREA TRANSVERSAL DEL ELEMENTO: "; cin>>A;
			                           tao=p/A;
  	                                   cout<<"\nEL ESFUERZO CORTANTE POR CARGA TRANSVERSAL ES:"<<tao<<" Pa"<<"\n";    		         
		                                
  	                              }else if(U==2)
									     {
									     	cout<<"\n\nIngrese la fuerza en lb y el area en in^2:\n\n ";	
									     	cout<<"\nDIGITE EL VALOR DE LA CARGA: "; cin>>p;
                                            cout<<"\nDIGITE EL AREA TRANSVERSAL DEL ELEMENTO: "; cin>>A;
			                                tao=p/A;
  	                                        cout<<"\nEL ESFUERZO CORTANTE POR CARGA TRANSVERSAL ES:"<<tao<<" PSI"<<"\n";
                                         }
  	          
  	                             break;
  	                    //FUERZA CORTANTE        
  	                    case 2: 
                                 system("cls"); 
								 cout<<"\n\n\t\t--------------------------------------------\n";	             	
		             	         cout<<"\n\t\tESCOJA EL SISTEMA DE UNIDADES:\n\n "; 
								 cout<<"\n\t\t(1) SISTEMA INTERNACIONAL\n\t\t(2) SISTEMA INGLES "; 
								 cout<<"\n\n\t\t--------------------------------------------\n";
								 cout<<"\n\n\t\tDIGITE OPCION ====>"; cin>>U;
								 system("cls"); 
		             	         if(U==1)
								  {
								  	   cout<<"\n\nIngrese el esfuerzo en N/m^2 y el area en m^2:\n\n ";								  	
                                       cout<<"\nDIGITE EL VALOR DEL ESFUERZO CORTANTE: "; cin>>tao;
                                       cout<<"\nDIGITE EL AREA TRANSVERSAL DEL ELEMENTO: "; cin>>A;
			                           p=tao*A;
			                           F=p/2; 
  	                                   cout<<"\nLA FUERZA CORTANTE DE CADA LADO DEL ELEMENTO ES:"<<F<<" N"<<"\n";		         
		                                
  	                              }else if(U==2)
									     {
									     	cout<<"\n\nIngrese el esfuerzo en lb/in^2 y el area en in^2:\n\n ";								  	
                                            cout<<"\nDIGITE EL VALOR DEL ESFUERZO CORTANTE: "; cin>>tao;
                                            cout<<"\nDIGITE EL AREA TRANSVERSAL DEL ELEMENTO: "; cin>>A;
			                                p=tao*A;
			                                F=p/2; 
  	                                        cout<<"\nLA FUERZA CORTANTE DE CADA LADO DEL ELEMENTO ES:"<<F<<" lb"<<"\n"; 
                                         } 	                    
  	                            
  	                             break;
  	                     //DISEÑO DE PASADORES      
  	                   	case 3:  
	                             system("cls"); 
								 cout<<"\n\n\t\t--------------------------------------------\n";	             	
		             	         cout<<"\n\t\tESCOJA EL SISTEMA DE UNIDADES:\n\n "; 
								 cout<<"\n\t\t(1) SISTEMA INTERNACIONAL\n\t\t(2) SISTEMA INGLES "; 
								 cout<<"\n\n\t\t--------------------------------------------\n";
								 cout<<"\n\n\t\tDIGITE OPCION ====>"; cin>>U;
							
								 system("cls"); 
		             	         if(U==1)
								  {
                                       cout<<"\n\nIngrese el esfuerzo en N/m^2 y la carga en N:\n\n ";								  	
                                       cout<<"\nDIGITE EL VALOR DEL ESFUERZO CORTANTE: "; cin>>tao;
                                       cout<<"\nDIGITE EL VALOR DE LA CARGA: "; cin>>p;
			                           D=(4*p)/(3.14159*tao);
			                           d=sqrt(D);
  	                                  cout<<"\nEL DIAMETRO DEL EJE ES:"<<d<<" m"<<" \n"; 	    		         
		                                
  	                              }else if(U==2)
									     {
									     	 cout<<"\n\nIngrese el esfuerzo en lb/in^2 y la carga en lb:\n\n ";								  	
                                             cout<<"\nDIGITE EL VALOR DEL ESFUERZO CORTANTE: "; cin>>tao;
                                             cout<<"\nDIGITE EL VALOR DE LA CARGA: "; cin>>p;
			                                 D=(4*p)/(3.14159*tao);
			                                 d=sqrt(D);
  	                                         cout<<"\nEL DIAMETRO DEL EJE ES:"<<d<<" in"<<" \n"; 	
                                         }
  	          
  	                             break;
  	                    case 5:  cout<<"HASTA LA PROXIMA!\n\n";
	                             break;         
					 }
		        }
  	        break;
  //PAR TORCIONAL	        
    case 3: 
	          while (OP != 5)
		       { 
		            system("pause"); 
		            system("cls");    
		            cout<<"\t\t\t\t\t\t\t ESFUERZO CORTANTE POR TORSION \n"; 
		            cout<<"\n\t\t\t\t-----------------------------------------------------------------------\n\n";
		            cout<<"\t\t\t\tDIGITE EL NUMERO RESPECTIVO A LA PROPIEDAD MECANICA POR TORSION: \n\n\t\t\t\t\t\t(1) ESFUERZO CORTANTE \n\t\t\t\t\t\t(2) ANGULO DE GIRO   \n\t\t\t\t\t\t(3) TRANSMISION DE POTENCIA   \n\t\t\t\t\t\t(5) REGRESAR AL MENU PRINCIPAL "; 
		            cout<<"\n\n\t\t\t\tDIGITE OPCION ====> ";cin>>OP;
		            
		             switch (OP){
		             	//ESFUERZO CORTANTE
		             	case 1:  
	                             system("cls"); 
								 cout<<"\n\n\t\t--------------------------------------------\n";	             	
		             	         cout<<"\n\t\tESCOJA EL SISTEMA DE UNIDADES:\n\n "; 
								 cout<<"\n\t\t(1) SISTEMA INTERNACIONAL\n\t\t(2) SISTEMA INGLES "; 
								 cout<<"\n\n\t\t--------------------------------------------\n";
								 cout<<"\n\n\t\tDIGITE OPCION ====>"; cin>>U;
								 system("cls"); 
		             	         if(U==1)
								  {
                                       cout<<"\n\nIngrese el momento torsor en N*m, y y el diametro en m:\n\n ";								  	
                                       cout<<"\nDIGA EL VALOR DEL MOMENTO TORSOR: "; cin>>M;
                                       cout<<"\nDIGITE EL DIAMETRO DE EJE: "; cin>>d;
			                           tao=(16*M)/(3.14159*pow(d,3));
  	                                   cout<<"\nEL ESFUERZO CORTANTE POR POR TORSION ES:"<<tao<<" Pa"<<"\n";    		         
		                                
  	                              }else if(U==2)
									     {
									     	 cout<<"\n\nIngrese el momento torsor en lb*in, y y el diametro en in:\n\n ";								  	
                                             cout<<"\nDIGA EL VALOR DEL MOMENTO TORSOR: "; cin>>M;
                                             cout<<"\nDIGITE EL DIAMETRO DE EJE: "; cin>>d;
			                                 tao=(16*M)/(3.14159*pow(d,3));
  	                                         cout<<"\nEL ESFUERZO CORTANTE POR POR TORSION ES:"<<tao<<" PSI"<<"\n";  
                                         }
  	          
  	                             break;
  	                    //ANGULO DE GIRO       
  	                    case 2: 
                                 system("cls"); 
								 cout<<"\n\n\t\t--------------------------------------------\n";	             	
		             	         cout<<"\n\t\tESCOJA EL SISTEMA DE UNIDADES:\n\n "; 
								 cout<<"\n\t\t(1) SISTEMA INTERNACIONAL\n\t\t(2) SISTEMA INGLES "; 
								 cout<<"\n\n\t\t--------------------------------------------\n";
								 cout<<"\n\n\t\tDIGITE OPCION ====>"; cin>>U;
								 system("cls"); 
		             	         if(U==1)
								  {
								  	 cout<<"\n\nIngrese las unidades de momento torsor en N*m, la longitud y diametro en m, y el modulo en N/m^2:\n\n ";	
                                     cout<<"DIGITE EL VALOR DEL MOMENTO TORSOR: "; cin>>M;
  	                                 cout<<"DIGITE LA LONGITUD DEL EJE:"; cin>>L; 
  	                                 cout<<"DIGITE EL MODULO DE RIGIDES:";cin>>G;
                                     cout<<"DIGITE LA EL DIAMETRO DEL EJE:"; cin>>d;
			                         fi=(32*M*L)/(3.14159*pow(d,4)*G);
  	                                 cout<<"\nEL ANGULO DE GIRO ES:"<<fi<<" rad"<<"\n";		         
		                                
  	                              }else if(U==2)
									     {
									     	cout<<"\n\nIngrese las unidades de momento torsor en lb*in, la longitud y diametro en in, y el modulo en lb/in^2:\n\n ";	
                                            cout<<"DIGITE EL VALOR DEL MOMENTO TORSOR: "; cin>>M;
  	                                        cout<<"DIGITE LA LONGITUD DEL EJE:"; cin>>L; 
  	                                        cout<<"DIGITE EL MODULO DE RIGIDES:";cin>>G;
                                            cout<<"DIGITE LA EL DIAMETRO DEL EJE:"; cin>>d;
			                                fi=(32*M*L)/(3.14159*pow(d,4)*G);
  	                                        cout<<"\nEL ANGULO DE GIRO ES:"<<fi<<" rad"<<"\n";
                                         } 	                    
  	                            
  	                             break;
  	                     //TRANSMICION DE POTENCIA      
  	                   	case 3:  
	                             system("cls"); 
								 cout<<"\n\n\t\t--------------------------------------------\n";	             	
		             	         cout<<"\n\t\tESCOJA EL SISTEMA DE UNIDADES:\n\n "; 
								 cout<<"\n\t\t(1) SISTEMA INTERNACIONAL\n\t\t(2) SISTEMA INGLES "; 
								 cout<<"\n\n\t\t--------------------------------------------\n";
								 cout<<"\n\n\t\tDIGITE OPCION ====>"; cin>>U;
							
								 system("cls"); 
		             	         if(U==1)
								  {
                                     cout<<"\n\nIngrese las unidades de esfuerzo cortante en N*m, la longitud y diametro en m, el modulo en N/m^2 y la frecuencia de rotacion en Hz:\n\n ";	
                                     cout<<"DIGITE EL VALOR DEL ESFUERZO CORTANTE: "; cin>>tao;
  	                                 cout<<"DIGITE LA FRECUENCIA DE ROTACION:"; cin>>F; 
  	                                 cout<<"DIGITE EL MODULO DE RIGIDES:";cin>>G;
                                     cout<<"DIGITE LA EL DIAMETRO DEL EJE:"; cin>>d;
			                         M=(3.14159*pow(d,3)*tao)/16;
			                         p=2*3.14159*F*M;
  	                                 cout<<"\nLA POTENCIA QUE PUEDE TRANSMITIR EL EJE ES:"<<p<<" N*m/s"<<" \n";	    		         
		                                
  	                              }else if(U==2)
									     {
									     	 cout<<"\n\nIngrese las unidades de esfuerzo cortante en lb*in, la longitud y diametro en in, el modulo en lb/in^2 y la frecuencia de rotacion en Hz:\n\n ";	
                                             cout<<"DIGITE EL VALOR DEL ESFUERZO CORTANTE: "; cin>>tao;
  	                                         cout<<"DIGITE LA FRECUENCIA DE ROTACION:"; cin>>F; 
  	                                         cout<<"DIGITE EL MODULO DE RIGIDES:";cin>>G;
                                             cout<<"DIGITE LA EL DIAMETRO DEL EJE:"; cin>>d;
			                                 M=(3.14159*pow(d,3)*tao)/16;
			                                 p=2*3.14159*F*M;
  	                                         cout<<"\nLA POTENCIA QUE PUEDE TRANSMITIR EL EJE ES:"<<p<<" lb*in/s";	
                                         }
  	          
  	                             break;
  	                    case 5:  cout<<"HASTA LA PROXIMA!\n\n";
	                             break;         
					 }
		        }
  	         break;
 
  	//CIRCULO DE MOHR
  	case  4:
                system("cls"); 
			    cout<<"\n\n\t\t--------------------------------------------\n";	             	
		        cout<<"\n\t\tESCOJA EL SISTEMA DE UNIDADES:\n\n "; 
				cout<<"\n\t\t(1) SISTEMA INTERNACIONAL\n\t\t(2) SISTEMA INGLES "; 
				cout<<"\n\n\t\t--------------------------------------------\n";
				cout<<"\n\n\t\tDIGITE OPCION ====>"; cin>>U;
				system("cls"); 
		        if(U==1)
				 {
                    cout<<"\n\nIngrese los esfuerzos normales y cortantes en unidades de KN/m^2:\n\n ";								  	
                    cout<<"\nDIGITE EL ESFUERZO NORMAL EN X: "; cin>>sigmax;
                    cout<<"\nDIGITE EL ESFUERZO NORMAL EN Y: "; cin>>sigmay;
                    cout<<"\nDIGITE EL ESFUERZO CORTANTE: "; cin>>tao;
			        c=(sigmax+sigmay)/2;
			        R=pow(c,2)+pow(tao,2);
			        taomax=sqrt(R); 
			        sigmamax=c+taomax;
			        sigmamin=c-taomax;
			        p=tao/c;
			        dteta=(atan(p)*180)/3.14159265;
			        teta=dteta/2;
			        cout<<"\n\n--------------------------------------------------------\n";	 
  	                cout<<"\nEL ESFUERZO NORMAL MAXIMO ES:"<<sigmamax<<" MPa"<<"\n"; 
					cout<<"\nEL ESFUERZO NORMAL MINIMO ES:"<<sigmamin<<" MPa"<<"\n"; 
					cout<<"\nEL ESFUERZO CORTANTE MAXIMO ES:"<<taomax<<" MPa"<<"\n"; 
					cout<<"\nEL ANGULO DE ROTACION DEL PLANO, DONDE SE ENCUENTRAN LOS ESFUERZOS NORMALES MAXIMOS Y MINIMOS ES:"<<teta<<"\n ";    		         
		                                
  	            }else if(U==2)
						{
							cout<<"\n\nIngrese los esfuerzos normales y cortantes en unidades de lb/in^2:\n\n ";								  	
                            cout<<"\nDIGITE EL ESFUERZO NORMAL EN X: "; cin>>sigmax;
                            cout<<"\nDIGITE EL ESFUERZO NORMAL EN Y: "; cin>>sigmay;
                            cout<<"\nDIGITE EL ESFUERZO CORTANTE: "; cin>>tao;
			                c=(sigmax+sigmay)/2;
			                R=pow(c,2)+pow(tao,2);
			                taomax=sqrt(R); 
			                sigmamax=c+taomax;
			                sigmamin=c-taomax;
			                p=tao/c;
			                dteta=(atan(p)*180)/3.14159265;
			                teta=dteta/2;
			                cout<<"\n\n-------------------------------------------------------\n";	 
  	                        cout<<"\nEL ESFUERZO NORMAL MAXIMO ES:"<<sigmamax<<" PSI"<<"\n"; 
					        cout<<"\nEL ESFUERZO NORMAL MINIMO ES:"<<sigmamin<<" PSI"<<"\n"; 
					        cout<<"\nEL ESFUERZO CORTANTE MAXIMO ES:"<<taomax<<" PSI"<<"\n"; 
					        cout<<"\nEL ANGULO DE ROTACION DEL PLANO, DONDE SE ENCUENTRAN LOS ESFUERZOS NORMALES MAXIMOS Y MINIMOS ES:"<<teta<<" \n"; 
                        }
  	        break;        

	case 0: cout<<"HASTA LA PROXIMA!\n\n";
	        break;	     
		     
     default: cout<<"\nNO ES UN NUMERO ASOCIADO A LA PROPIEDAD MECANICA\n\n";
    }
}
 
 	
	
    system("pause");	
	return 0;
}