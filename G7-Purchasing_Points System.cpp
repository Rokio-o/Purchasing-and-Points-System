#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;
bool userExists = false;
struct User {
    string name;
    int points;
};

User newUser;
vector<User> users;
User* activeUser;

//function prototype
void line(string divline);
void transac1(int transId);
void transac2(int transId);
void transac3(int transId);
void transac4(int transId);
void transac5(int transId);
void transac6(int transId);
void transac7(int transId);
void transac8(int transId);
void transac9(int transId);
void transac10(int transId);
void transac11(int transId);
void transac12(int transId);
void transac13(int transId);
void transac14(int transId);
void transac15(int transId);
void ptscoupnconvrt(char ptsaction);

//global variable
int Cmarker, marker_qty, marker_bill, marker_qty1, marker_bill1, marker_qty2, marker_bill2, marker_qty3, marker_bill3;
int Cclrpen, clrpen_qty, clrpen_bill, clrpen_qty1, clrpen_bill1, clrpen_qty2, clrpen_bill2;
int Ctape, tape_qty, tape_bill, tape_qty1, tape_bill1, tape_qty2, tape_bill2, tape_qty3, tape_bill3;
int Cglue, glue_qty, glue_bill, glue_qty1, glue_bill1, glue_qty2, glue_bill2;
int Cbook, book_qty, book_bill, book_qty1, book_bill1, book_qty2, book_bill2, book_qty3, book_bill3, book_qty4, book_bill4;
int scissor_qty, scissor_bill, BP_qty, BP_bill, ruler_qty, ruler_bill;
int Cpen, pen_qty, pen_bill, pen_qty1, pen_bill1, pen_qty2, pen_bill2, pen_qty3, pen_bill3;
int Ccrayons, crayon_qty, crayon_bill, crayon_qty1, crayon_bill1, crayon_qty2, crayon_bill2, crayon_qty3, crayon_bill3;
int Ceraser, erase_qty, erase_bill, erase_qty1, erase_bill1, erase_qty2, erase_bill2;
int Cpencil, pncl_qty, pncl_bill, pncl_qty1, pncl_qty2, pncl_bill1, pncl_bill2, sharp_qty, sharp_bill;
int Cnotebook, nb_qty, nb_bill, nb_qty2, nb_bill2, nb_bill1 ,nb_qty1;
int Cpadpaper, pad_qty, pad_bill, pad_qty1, pad_bill1, pad_qty2, pad_bill2, pad_qty3, pad_bill3, pad_qty4, pad_bill4, pad_qty5, pad_bill5, pad_qty6, pad_bill6, pad_qty7, pad_bill7, pad_qty8, pad_bill8;
int transId;
char Cpentype, dictio;
string name, agreement, userRecord, userName, modePay, gcashPay;
char res, ans, ptsaction;
float pts, totbill, amount, change, deductedBill, totqty;
string divline="___________________________________________________________________________________________________________________________";
int couponAmt;

//calling void functions
void line(string divline){
    cout << "\t\t" << divline << "\n";
}
void transac1(int transId){
                    line(divline);
            do{
                    cout << "\n\t\tYou selected: Notebook\n";
                    cout << "\t\t\t1. Composition\t\tP12.00\n";
                    cout << "\t\t\t2. Writing\t\tP10.00\n";
                    cout << "\n\t\tChoose what kind of notebook[1-2]: ";
                    cin >> Cnotebook;
                   
                   
                    switch(Cnotebook){
                    
					
                        case 1:{
                        cout<<"\n\t\tHow many pieces of Composition Notebook?: ";
                        cin>>nb_qty1;
                        nb_bill1=nb_qty1*12.00;
                        cout<<"\t\tComposition Notebook Bill: "<<nb_bill1<<endl;
                        line(divline);
                        break;
                        }
                       
                        case 2:{
                        cout<<"\n\t\tHow many pieces of Writing Notebook?: ";
                        cin>>nb_qty2;
                        nb_bill2=nb_qty2*10.00;
                        cout<<"\t\tWriting Notebook Bill: "<<nb_bill2<<endl;
                        line(divline);
                        break;
                        }
                    } //end of switch case 1 Notebook options
                if (Cnotebook > 2) {
						cout<<"\n\t\t[ERORR]Invalid input. Please select again.\n";
					}
               	} while (Cnotebook < 1 || Cnotebook > 2); 
} //end of notebook transaction

void transac2(int transId){
                    line(divline);
                do{
                	cout << "\n\t\tYou selected: Pad Paper\n";
                    cout << "\t\t\t1. For grade 1\t\tP10.00\n";
                    cout << "\t\t\t2. For grade 2\t\tP10.00\n";
                    cout << "\t\t\t3. For grade 3\t\tP10.00\n";
                    cout << "\t\t\t4. For grade 4\t\tP15.00\n";
                    cout << "\t\t\t5. For grade 5\t\tP15.00\n";
                    cout << "\t\t\t6. For grade 6\t\tP15.00\n";
                    cout << "\t\t\t7. Intermediate Pad\tP45.00\n";
                    cout << "\t\t\t8. Yellow Pad\t\tP50.00\n\n";
                    cout << "\n\t\tChoose what kind of Pad paper[1-8]: ";
                    cin >> Cpadpaper;
                   
                    switch(Cpadpaper){
                        case 1:{
                        cout<<"\n\t\tHow many pieces of Grade 1 Pad Paper?: ";
                        cin>>pad_qty1;
                        pad_bill1=pad_qty1*10.00;
                        cout<<"\t\tGrade 1 Pad Paper Bill: "<<pad_bill1<<endl;
                        line(divline);
                        break;
                        }
                     
                        case 2:{
                        cout<<"\n\t\tHow many pieces of Grade 2 Pad Paper?: ";
                        cin>>pad_qty2;
                        pad_bill2=pad_qty2*10.00;
                        cout<<"\t\tGrade 2 Pad Paper Bill: "<<pad_bill2<<endl;
                        line(divline);
                        break;
                        }
                     
                        case 3:{
                        cout<<"\n\t\tHow many pieces of Grade 3 Pad Paper?: ";
                        cin>>pad_qty3;
                        pad_bill3=pad_qty3*10.00;
                        cout<<"\t\tGrade 3 Pad Paper Bill: "<<pad_bill3<<endl;
                        line(divline);
                        break;
                        }
                     
                        case 4:{
                        cout<<"\n\t\tHow many pieces of Grade 4 Pad Paper?: ";
                        cin>>pad_qty4;
                        pad_bill4=pad_qty4*15.00;
                        cout<<"\t\tGrade 4 Pad Paper Bill: "<<pad_bill4<<endl;
                        line(divline);
                        break;
                        }
                     
                        case 5:{
                        cout<<"\n\t\tHow many pieces of Grade 5 Pad Paper?: ";
                        cin>>pad_qty5;
                        pad_bill5=pad_qty5*15.00;
                        cout<<"\t\tGrade 5 Pad Paper Bill: "<<pad_bill5<<endl;
                        line(divline);
                        break;
                        }
                     
                        case 6:{
                        cout<<"\n\t\tHow many pieces of Grade 6 Pad Paper?: ";
                        cin>>pad_qty6;
                        pad_bill6=pad_qty6*15.00;
                        cout<<"\t\tGrade 6 Pad Paper Bill: "<<pad_bill6<<endl;
                        line(divline);
                        break;
                        }
                     
                        case 7:{
                        cout<<"\n\t\tHow many pieces of Intermediate Pad Paper?: ";
                        cin>>pad_qty7;
                        pad_bill7=pad_qty7*45.00;
                        cout<<"\t\tIntermediate Pad Paper Bill: "<<pad_bill7<<endl;
                        line(divline);
                        break;
                        }
                     
                        case 8:{
                        cout<<"\n\t\tHow many pieces of Yellow Pad Paper?: ";
                        cin>>pad_qty8;
                        pad_bill8=pad_qty8*50.00;
                        cout<<"\t\tYellow Pad Paper Bill: "<<pad_bill8<<endl;
                        line(divline);
                        break;
                        }
                    } //end of switch for pad paper options
                if (Cpadpaper > 8) {
						cout<<"\n\t\t[ERORR]Invalid input. Please select again.\n";
					}	
				} while (Cpadpaper < 1 || Cpadpaper > 8);
                    
}//end of pad paper transaction

void transac3(int transId){
                    line(divline);
                do{
                	cout << "\n\t\tYou selected: Pencil\n";
                    cout << "\t\t\t1. No.2 Regular Mongol Pencil\t\tP8.00\n";
                    cout << "\t\t\t2. No.2 Jumbo/XL Mongol Pencil\t\tP10.00\n";
                    cout << "\n\t\tChoose what kind of Mongol Pencil[1-2]: ";
                    cin >> Cpencil;
                 
                    switch(Cpencil){
                        case 1:{
                        cout<<"\n\t\tHow many pieces of No.2 Regular Mongol Pencil?: ";
                        cin>>pncl_qty1;
                        pncl_bill1=pncl_qty1*8.00;
                        cout<<"\t\tNo.2 Regular Mongol Pencil Bill: "<<pncl_bill1<<endl;
                        line(divline);
                        break;
                        }
                     
                        case 2:{
                        cout<<"\n\t\tHow many pieces of No.2 Jumbo/XL Mongol Pencil?: ";
                        cin>>pncl_qty2;
                        pncl_bill2=pncl_qty2*10.00;
                        cout<<"\t\tNo.2 Jumbo/XL Mongol Pencil Bill: "<<pncl_bill2<<endl;
                        line(divline);
                        break;
                        }
                    } //end of switch for pencil options
                	if (Cpencil > 2){
                		cout<<"\n\t\t[ERORR]Invalid input. Please select again.\n";
					}
				} while (Cpencil < 1 || Cpencil > 2);
}//end of pencil transaction

void transac4(int transid){
					line(divline);               
				    cout<<"\n\t\tYou selected: Pencil Sharpener\n";
                    cout<<"\t\t\tPencil Sharpener\t\tP8.00\n";
                    cout<<"\n\t\tHow many pieces of Pencil Sharpener?: ";
                    cin>>sharp_qty;
                    sharp_bill=sharp_qty*8.00;
                    cout<<"\t\tPencil Sharpener Bill: "<<sharp_bill<<endl;
                    line(divline);
}// end of sharpener transaction

void transac5(int transId){
                    line(divline);
                    do {
                    	cout << "\n\t\tYou selected: Erasers\n";
                    cout << "\t\t\t1. Pencil Eraser (Rubber)\t\tP5.00\n";
                    cout << "\t\t\t2. Pen eraser (Correction Tape)\t\tP25.00\n";
                    cout << "\n\t\tChoose what kind of Eraser[1-2]: ";
                    cin >> Ceraser;
                 
                    switch(Ceraser){
                        case 1:{
                        cout<<"\n\t\tHow many pieces of Pencil Eraser (Rubber)?: ";
                        cin>>erase_qty1;
                        erase_bill1=erase_qty1*5.00;
                        cout<<"\t\tPencil Eraser (Rubber) Bill: "<<erase_bill1<<endl;
                        line(divline);
                        break;
                        }
                     
                        case 2:{
                        cout<<"\n\t\tHow many pieces of Pen eraser (Correction Tape)?: ";
                        cin>>erase_qty2;
                        erase_bill2=erase_qty2*25.00;
                        cout<<"\t\tPen eraser (Correction Tape) Bill: "<<erase_bill2<<endl;
                        line(divline);
                        break;
                        }
                    }// end of switch eraser options
                    	if (Ceraser > 2){
                		cout<<"\n\t\t[ERORR]Invalid input. Please select again.\n";
                	}
					}while (Ceraser< 1 || Ceraser > 2);
}// end of eraser transaction

void transac6(int transId){
                    line(divline);
                    do {
                    	cout << "\n\t\tYou selected: Crayola Crayons\n";
                    cout << "\t\t\t1. 8 pieces crayola crayons\t\tP16.00\n";
                    cout << "\t\t\t2. 16 pieces crayola crayons\t\tP38.00\n";
                    cout << "\t\t\t3. 64 pieces crayola crayons\t\tP130.00\n";
                    cout << "\n\t\tChoose what kind of Crayons[1-3]: ";
                    cin >> Ccrayons;
                 
                    switch(Ccrayons){
                        case 1:{
                        cout<<"\n\t\tHow many pieces of 8 pieces crayola crayons?: ";
                        cin>>crayon_qty1;
                        crayon_bill1=crayon_qty1*16.00;
                        cout<<"\t\t8 pieces crayola crayons Bill: "<<crayon_bill1<<endl;
                        line(divline);
                        break;
                        }
                     
                        case 2:{
                        cout<<"\n\t\tHow many pieces of 16 pieces crayola crayons?: ";
                        cin>>crayon_qty2;
                        crayon_bill2=crayon_qty2*38.00;
                        cout<<"\t\t16 pieces crayola crayons Bill: "<<crayon_bill2<<endl;
                        line(divline);
                        break;
                        }
                     
                        case 3:{
                        cout<<"\n\t\tHow many pieces of 64 pieces crayola crayons?: ";
                        cin>>crayon_qty3;
                        crayon_bill3=crayon_qty3*130.00;
                        cout<<"\t\t64 pieces crayola crayons Bill: "<<crayon_bill3<<endl;
                        line(divline);
                        break;
                        }
                    } //end of switch crayola crayons options
                    	if (Ccrayons > 3){
                    		cout<<"\n\t\t[ERORR]Invalid input. Please select again.\n";
						}
					} while (Ccrayons< 1 || Ccrayons > 3);
}// end of crayons transaction

void transac7(int transId) {
                        line(divline);
                        cout << "\n\t\tYou selected: Pens\n";
                        cout << "\n\t\tChoose if Ballpen or Signpen [B/S]: ";
                        cin >> Cpentype;

                            if (Cpentype == 'B') {
                                cout << "\t\tBallpen\t\tP10.00\n\n";
                                cout << "\t\t\t1. Black Ballpen\n";
                                cout << "\t\t\t2. Blue Ballpen\n";
                                cout << "\t\t\t3. Red Ballpen\n";
                            } else if (Cpentype == 'S') {
                                cout << "\t\tSignpen\tP15.00\n\n";
                                cout << "\t\t\t1. Black Signpen\n";
                                cout << "\t\t\t2. Blue Signpen\n";
                                cout << "\t\t\t3. Red Signpen\n";
                            } else {
                                cout << "\t\tInvalid input. Exiting pen transaction." << endl;
                                return;
                            }

                            cout << "\n\t\tChoose what color of the pen[1-3]: ";
                            cin >> Cpen;

                                switch (Cpen) {
                                    case 1:
                                        cout << "\n\t\tHow many pieces of Black Pen?: ";
                                        cin >> pen_qty1;
                                        pen_bill1 = pen_qty1 * 8.00;
                                        cout << "\t\tBlack Pen Bill: " << pen_bill1 << endl;
                                        line(divline);
                                        break;
                           
                                    case 2:
                                        cout << "\n\t\tHow many pieces of Blue Pen?: ";
                                        cin >> pen_qty2;
                                        pen_bill2 = pen_qty2 * 8.00;
                                        cout << "\t\tBlue Pen Bill: " << pen_bill2 << endl;
                                        line(divline);
                                        break;
                           
                                    case 3:
                                        cout << "\n\t\tHow many pieces of Red Pen?: ";
                                        cin >> pen_qty3;
                                        pen_bill3 = pen_qty3 * 8.00;
                                        cout << "\t\tRed Pen Bill: " << pen_bill3 << endl;
                                        line(divline);
                                        break;
                           
                                    default:
                                        cout << "\t\tInvalid color choice. Exiting pen transaction." << endl;
                                        line(divline);
                                        break;
                                }
                            }
void transac8(int transId){
                        line(divline);
                        cout<<"\n\t\tYou selected: Scissors\n";
                        cout<<"\t\t\tScissors\t\tP15.00\n";
                        cout<<"\n\t\tHow many pieces of Scissors?: ";
                        cin>>scissor_qty;
                        scissor_bill=scissor_qty*15.00;
                        cout<<"\t\tScissors' Bill: "<<scissor_bill<<endl;
                        line(divline);
}//end of scissors transaction

void transac9(int transId){
                line(divline);
                cout<<"\n\t\tYou selected: Backpack\n";
                cout<<"\t\t\tBackpack\t\tP350.00\n";
                cout<<"\n\t\tHow many pieces of Backpack?: ";
                cin>>BP_qty;
                BP_bill=BP_qty*350.00;
                cout<<"\t\tBackpack Bill: "<<BP_bill<<endl;
                line(divline);
}

void transac10(int transId){
                line(divline);
                cout << "\n\t\tYou selected: Book\n";
                cout<<"\t\t\t1.Story Book\t\tP50.00\n";
                cout<<"\t\t\t2.Dictionary\t\tP100.00\n";
                cout<<"\t\t\t3.Coloring Book\t\tP30.00\n";
                cout << "\n\t\tChoose what kind of Book[1-3]: ";

                cin>>Cbook;
                        switch(Cbook)
                            {
                                case 1:
                                cout<<"\n\t\tYou selected: Story Book\n";
                                cout<<"\t\t\tStory Book\t\tP50.00\n";
                                cout<<"\n\t\tHow many pieces of Story Book?: ";
                                cin>>book_qty1;
                                book_bill1=book_qty1*50.00;
                                cout<<"\t\tStory Books Bill:" <<book_bill1 << endl;
                                line(divline);
                                break;
                             
                                case 2:
                                cout<<"\n\t\tYou selected: Dictionary\n";
                                cout<<"\t\t\tE: English Dictionary\t\tP100.00\n";
                                cout<<"\t\t\tT: Tagalog Dictionary\t\tP100.00\n";
                                cout<<"\n\t\t\tEnglish or Tagalog? Press E if english press T if tagalog: ";
                                cin>>dictio;
                                    if(dictio=='E')
                                    {
                                        cout<<"\n\t\tYou selected: English Dictionary\n";
                                        cout<<"\n\t\tHow many pieces of English Dictionary?: ";
                                        cin>>book_qty2;
                                        book_bill2=book_qty2*100.00;
                                        cout<<"\t\tEnglish Dictionary Bill:" <<book_bill2 << endl;
                                        line(divline);
                                    }
                                    else if(dictio=='T')
                                    {
                                        cout<<"\n\t\tYou selected: Tagalog Dictionary\n";
                                        cout<<"\n\t\tHow Many pieces of Tagalog Dictionary?: ";
                                        cin>>book_qty3;
                                        book_bill3=book_qty3 * 100.00;
                                        cout<<"\t\tTagalog Dictionary Bill: " <<book_bill3 << endl;
                                        line(divline);
                                    }
                                    else
                                    {
                                        cout<<"\n\t\tInvalid";
                                        line(divline);
                                    }
                                    break;
                             
                                case 3:
                                cout<<"\n\t\tYou selected: Coloring Book\n";
                                cout<<"\t\t\tColoring Book\t\tP30.00\n";
                                cout<<"\n\t\tHow many pieces of Coloring Book?: ";
                                cin>>book_qty4;
                                book_bill4=book_qty4*30.00;
                                cout<<"\t\tColoring Book Bill: "<<book_bill4<<endl;
                                line(divline);
                                break;
                            }//End of switch book options
}//end of book transaction

void transac11(int transId){
                line(divline);
                cout<<"\n\t\tYou selected: Ruler\n";
                cout<<"\t\t\tRuler  P12.00\n";
                cout<<"\n\t\tHow many pieces of Ruler?: ";
                cin>>ruler_qty;
                ruler_bill=ruler_qty*12.00;
                cout<<"\t\tRuler Bill: "<<ruler_bill<<endl;
                line(divline);
}//end of ruler transaction

void transac12(int transId){
                line(divline);
            do {
            	cout<<"\n\t\tYou selected: Glue\n";
                cout<<"\t\t\t1. Glue stick\t\tP10.00\n";
                cout<<"\t\t\t2. Liquid Glue\t\tP18.00\n";
                cout<<"\n\t\tChoose what kind of  glue[1-2]: ";
                cin>>Cglue;
                        switch(Cglue)
                            {
                                case 1:
                                cout<<"\n\t\tHow many pieces of Glue Stick?: ";
                                cin>>glue_qty1;
                                glue_bill1=glue_qty1*10.00;
                                cout<<"\t\tGlue Stick Bill: "<<glue_bill1<<endl;
                                line(divline);
                                break;
                         
                                case 2:
                                cout<<"\n\t\tHow many pieces of Liquid Glue?: ";
                                cin>>glue_qty2;
                                glue_bill2=glue_qty2*18.00;
                                cout<<"\t\tLiquid Glue Bill: "<<glue_bill2<<endl;
                                line(divline);
                                break;
                            }//end of switch case 12 glue options
            	if (Cglue>2){
            			cout<<"\n\t\t[ERORR]Invalid input. Please select again.\n";
				}
			}while  (Cglue< 1 || Cglue > 2);
}//end of glue transaction

void transac13(int transId){
                line(divline);
            do{
            	cout<<"\n\t\tYou selected: Tapes\n";
                cout<<"\t\t\t1. Double Sided Tape\t\tP12.00";
                cout<<"\n\t\t\t2. Transparent Tape\t\tP15.00";
                cout<<"\n\t\t\t3. Masking Tape\t\t\tP25.00";
                cout<<"\n\n\t\tChoose what kind of Tape [1-3]: ";
                cin>>Ctape;
                        switch(Ctape)
                            {
                                case 1:
                                cout<<"\n\t\tHow many pieces of Double Sided Tape?: ";
                                cin>>tape_qty1;
                                tape_bill1=tape_qty1*12.00;
                                cout<<"\t\tDouble Sided Tape Bill: "<<tape_bill1<<endl;
                                line(divline);
                                break;
                             
                                case 2:
                                cout<<"\n\t\tHow many pieces of Transparent Tape?: ";
                                cin>>tape_qty2;
                                tape_bill2=tape_qty2*15.00;
                                cout<<"\t\tTransparent Tape Bill: "<<tape_bill2<<endl;
                                line(divline);
                                break;
                             
                                case 3:
                                cout<<"\n\t\tHow many pieces of Masking Tape?: ";
                                cin>>tape_qty3;
                                tape_bill3=tape_qty3*25.00;
                                cout<<"\t\tMasking Tape Bill: "<<tape_bill3<<endl;
                                line(divline);
                                break;  
                            }//end of switch tape options
            	if (Ctape>3){
            			cout<<"\n\t\t[ERORR]Invalid input. Please select again.\n";
            		}
			}while (Ctape < 1 || Ctape > 3);
}//end of tape transaction

void transac14(int transId){
            line(divline);
        do{
        	cout<<"\n\t\tYou selected: Color Pencils\n";
            cout<<"\t\t\t1. 8 pieces\t\tP30.00";    
            cout<<"\n\t\t\t2. 24 pieces\t\tP120.00";
            cout<<"\n\n\t\tChoose what kind of Color Pencils [1-2]: ";
            cin>>Cclrpen;
                        switch(Cclrpen)
                            {
                                case 1:
                                cout<<"\n\t\tHow many pieces of 8 Pieces Color Pencils?: ";
                                cin>>clrpen_qty1;
                                clrpen_bill1=clrpen_qty1 * 30.00;
                                cout<<"\t\t8 Pieces Color Pencils Bill: " <<clrpen_bill1<<endl;
                                line(divline);
                                break;
                             
                                case 2:
                                cout<<"\n\t\tHow many pieces of 24 pieces Color Pencils?: ";
                                cin>>clrpen_qty2;
                                clrpen_bill2=clrpen_qty2* 120.00;
                                cout<<"\t\tColor Pencils Bill: " <<clrpen_bill2<<endl;
                                line(divline);
                                break;
                            }//end of switch case 14 color Pencils options
        	if (Cclrpen > 2){
        		cout<<"\n\t\t[ERORR]Invalid input. Please select again.\n";
			}
		}while (Cclrpen < 1 || Cclrpen > 2);
}//end of color pencil transaction

void transac15(int transacId){
                line(divline);
            do {
            	cout<<"\n\t\tYou selected: Markers\n";
                cout<<"\t\tPermanent Markers\t\tP28.00";
                cout<<"\n\t\t\t 1. Black Marker";
                cout<<"\n\t\t\t 2. Red Marker";
                cout<<"\n\t\t\t 3. Blue Marker";
                cout<<"\n\n\t\tChoose the color of Marker: ";
                cin>>Cmarker;
                        switch(Cmarker)
                            {
                                case 1:
                                cout<<"\n\t\tHow many pieces of Black Marker?: ";
                                cin>>marker_qty1;
                                marker_bill1=marker_qty1*28.00;
                                cout<<"\t\tBlack Marker Bill:"<<marker_bill1<<endl;
                                line(divline);
                                break;
                         
                                case 2:
                                cout<<"\n\t\tHow many pieces of Red Marker?: ";
                                cin>>marker_qty2;
                                marker_bill2=marker_qty2*28.00;
                                cout<<"\t\tMarker Bill:"<<marker_bill2<<endl;
                                line(divline);
                                break;
                         
                                case 3:
                                cout<<"\n\t\tHow many pieces of Blue Marker?: ";
                                cin>>marker_qty3;
                                marker_bill3=marker_qty3*28.00;
                                cout<<"\t\tBlue Marker Bill:"<<marker_bill3 << endl << "\n";
                                line(divline);
                                break;
                            }//end switch case 15 marker options	
            	if (Cmarker > 3) {
            		cout<<"\n\t\t[ERORR]Invalid input. Please select again.\n";
				}
			}while (Cmarker < 1 || Cmarker >3);
}//end of marker transaction

void ptscoupnconvrt(char ptsaction){
	cout << "\t\t1 Coupon is worth 20% off in any pizza hut branches!\n";
    cout << "\t\t\t1 Coupon = 100 points\n";
    cout << "\t\tHow many coupons would you like to get?: ";
    cin >> couponAmt;
    couponAmt = couponAmt * 100;
    pts = pts - couponAmt;
    cout << "\t\tRemaining Points: "<< pts << endl;
}
int main()
        {
        // read file and store locally
        ifstream file("filename.txt");
        string yea;
        while (getline(file, yea)) {
            istringstream iss(yea);
            User user;
            iss >> user.name >> user.points;
            users.push_back(user);
        }
        file.close();

//Display main title
    cout<<"\t\t===========================================================================================================================\n";
    cout<<"\n";
    cout<<"\t\t####   #   #  ####    ###   #   #    #     ####  #####     #####   ###      ####    ###   #   #    #    #####  #####    #   \n";
    cout<<" \t\t#   #  #   #  #   #  #   #  #   #   # #   #      #           #    #   #     #   #  #   #  ##  #   # #     #    #        #   \n";
    cout<<" \t\t####   #   #  ####   #      #####  #   #   ###   ####        #    #   #     #   #  #   #  # # #  #   #    #    ####     #   \n";
    cout<<" \t\t#      #   #  # #    #   #  #   #  #####      #  #           #    #   #     #   #  #   #  #  ##  #####    #    #            \n";
    cout<<" \t\t#       ###   #  ##   ###   #   #  #   #  ####   #####       #     ###      ####    ###   #   #  #   #    #    #####    #   \n";  
    cout<<"\n";
    cout<<"\t\t===========================================================================================================================\n\n";
   
    cout<<"\t\tWELCOME TO CS11S1 GROUP 7 ITE 001 PROJECT\n";
    cout<<"\t\tA Computerized Purchasing and Points-System for Donating Educational Materials of Education Foundation Philippines\n\n";
   
    cout<<"\t\tPLEASE READ BEFORE PROCEEDING:\n";
    cout<<"\t\t>> Purchase the products that you want to donate to students that needs school supplies\n";
    cout<<"\t\t>> This program will record your name and points earned for the sake of transaction accuracy\n";
    line(divline);
     do {
        cout << "\n\t\tDo you agree & understand? [Yes/No]: ";
        cin >> agreement;

//agreement
        if (agreement == "Yes" || agreement == "yes") {
            cout << "\n\n\t\tChoose: First/Another\n";
            cout << "\t\t\tFirst:  First time purchasing donation\n";
            cout << "\t\t\tAnother:  Another set of purchasing donation\n";
            cout << "\t\tDecision: ";
            cin >> userRecord;
           
            while (userRecord != "First" && userRecord != "Another") {
                cout << "\t\tInvalid choice. Please enter either 'First' or 'Another': ";
                cin >> userRecord;
            }
            
            cout << "\n\t\tEnter your name: ";
            cin >> userName;


            // check if user exists
            for (User& user : users) {
                if (user.name == userName) {
                    userExists = true;
                    activeUser = &user;
                    break;
                }
            }

            // if user doesn't exist
            if (userExists == false){
                newUser.name = userName;
                newUser.points = 0;
                activeUser = &newUser;
            }
           
            break; // Break out of the loop if a valid choice is made
           
        } else if (agreement == "No" || agreement == "no") {
            cout << "\n\t\tThank you for visiting our program! Have a great day ahead!\n";
            return 0;
        } else {
            cout << "\n\t\tInvalid Output\n";
        }
    } while (true); 


    line(divline);
    cout << "\n\t\tHello, " << activeUser->name << "! Welcome to our program.\n";
    cout << "\t\tYour total points is: " << activeUser->points <<endl;//DATA BASE POINT SYSTEM
           
        cout << "\n\n\t\tChoose and Type: A/Q\n";
        cout << "\t\t\tA: Add product to the cart\n";
        cout << "\t\t\tQ: Quit\n";
        cout << "\t\tDecision: ";
        cin >> ans;


        if (ans == 'Q' || ans == 'q') {
            cout << "\n\t\tThank you for using our program! Have a great day!\n";
        } else if (ans == 'A' || ans == 'a') {
            do {
                bool validId = false;

                do {
                    cout << "\n\n\t\t\t\t\t\t||======================================================||\n";
                    cout << "\t\t\t\t\t\t||   LIST OF AVAILABLE SCHOOL SUPPLIES TO BE DONATED\t||\n";
                    cout << "\t\t\t\t\t\t||======================================================||\n";
                    cout << "\t\t\t\t\t\t||\t\tID\t|\t\tNAME\t\t||\n";
                    cout << "\t\t\t\t\t\t||======================================================||\n";
                    cout << "\t\t\t\t\t\t||\t\t1\t|\tNotebook\t\t||\n";
                    cout << "\t\t\t\t\t\t||\t\t2\t|\tPad Papers\t\t||\n";
                    cout << "\t\t\t\t\t\t||\t\t3\t|\tPencil\t\t\t||\n";
                    cout << "\t\t\t\t\t\t||\t\t4\t|\tPencil Sharpener\t||\n";
                    cout << "\t\t\t\t\t\t||\t\t5\t|\tEraser\t\t\t||\n";
                    cout << "\t\t\t\t\t\t||\t\t6\t|\tCrayola Crayons\t\t||\n";
                    cout << "\t\t\t\t\t\t||\t\t7\t|\tPen\t\t\t||\n";
                    cout << "\t\t\t\t\t\t||\t\t8\t|\tScissors\t\t||\n";
                    cout << "\t\t\t\t\t\t||\t\t9\t|\tBackpack\t\t||\n";
                    cout << "\t\t\t\t\t\t||\t\t10\t|\tBook\t\t\t||\n";
                    cout << "\t\t\t\t\t\t||\t\t11\t|\tRuler\t\t\t||\n";
                    cout << "\t\t\t\t\t\t||\t\t12\t|\tGlue\t\t\t||\n";
                    cout << "\t\t\t\t\t\t||\t\t13\t|\tTape\t\t\t||\n";
                    cout << "\t\t\t\t\t\t||\t\t14\t|\tColor Pencil\t\t||\n";
                    cout << "\t\t\t\t\t\t||\t\t15\t|\tMarkers\t\t\t||\n";
                    cout << "\t\t\t\t\t\t||======================================================||\n";

                    cout << "\n\t\t===> Select the ID of the school supply [1-15]: ";
                    cin >> transId;

                    // Check if the entered ID is valid (exists in the list)
                    if (transId >= 1 && transId <= 15) {
                        validId = true;
                    } else {
                        cout << "\t\tInvalid ID. Please select a valid ID from the list.\n";
                    }
                } while (!validId); // Loop until a valid ID is entered


                // Call transaction function based on transId
                switch (transId) {
                    case 1:
                    transac1(transId);
                    break;
                    
                   
                    case 2:
                    transac2(transId);
                    break;
                   
                    case 3:
                    transac3(transId);
                    break;
                   
                    case 4:
                    transac4(transId);
                    break;
                   
                    case 5:
                    transac5(transId);
                    break;
                   
                    case 6:
                    transac6(transId);
                    break;
                   
                    case 7:
                    transac7(transId);
                    break;
                   
                    case 8:
                    transac8(transId);
                    break;
                   
                    case 9:
                    transac9(transId);
                    break;
                   
                    case 10:
                    transac10(transId);
                    break;
                   
                    case 11:
                    transac11(transId);
                    break;
                   
                    case 12:
                    transac12(transId);
                    break;
                   
                    case 13:
                    transac13(transId);
                    break;
                   
                    case 14:
                    transac14(transId);
                    break;
                   
                    case 15:
                    transac15(transId);
                    break;
                }
                

                cout << "\t\t===> Do you want to add another product in your cart? Y/N: ";
                cin >> ans;

            } while (ans == 'Y' || ans == 'y'); // Continue adding products until 'N' or 'n' is entered
           
    //Quantity
     nb_qty = nb_qty1 + nb_qty2;
     pad_qty = pad_qty1 + pad_qty2 + pad_qty3 + pad_qty4 + pad_qty5 + pad_qty6 + pad_qty7 + pad_qty8;
     pncl_qty = pncl_qty1 + pncl_qty2;
     erase_qty = erase_qty1 + erase_qty2;
     crayon_qty = crayon_qty1 + crayon_qty2 + crayon_qty3;
     pen_qty = pen_qty1 + pen_qty2 + pen_qty3;
     book_qty = book_qty1 + book_qty2 + book_qty3 + book_qty4;
     glue_qty = glue_qty1 + glue_qty2;
     tape_qty = tape_qty1 + tape_qty2 + tape_qty3;
     clrpen_qty = clrpen_qty1 + clrpen_qty2;
     marker_qty = marker_qty1 + marker_qty2 + marker_qty3;
     
     //Bill
     nb_bill = nb_bill1 + nb_bill2;
     pad_bill = pad_bill1 + pad_bill2 + pad_bill3 + pad_bill4 + pad_bill5 + pad_bill6 + pad_bill7 + pad_bill8;
     pncl_bill = pncl_bill1 + pncl_bill2;
     erase_bill = erase_bill1 + erase_bill2;
     crayon_bill = crayon_bill1 + crayon_bill2 + crayon_bill3;
     pen_bill = pen_bill1 + pen_bill2 + pen_bill3;
     book_bill = book_bill1 + book_bill2 + book_bill3 + book_bill4;
     glue_bill = glue_bill1 + glue_bill2;
     tape_bill = tape_bill1 + tape_bill2 + tape_bill3;
     clrpen_bill = clrpen_bill1 + clrpen_bill2;
     marker_bill = marker_bill1 + marker_bill2 + marker_bill3;

    //Display purchase summary
   cout<<"\n\n\n\t\t   **************************************************************************************************************\n\n";
   cout<<"\t\t\t    *SUMMARY OF PURCHASES\t\t\t\t***\tQUANTITY\t***\tPRICE\t\t\n*";
   cout<<"\n\t\t   **************************************************************************************************************";
   cout<<"\n\t\t   *\t Notebook\t\t\t\t\t\t***\t\t\t***\t\t\t*";
   cout<<"\n\t\t   *\t 1. Composition Notebook\t\t\t\t***\t"<<  nb_qty1 <<"\t\t***\t"<<  nb_bill1 <<"\t\t*";
   cout<<"\n\t\t   *\t 2. Writing Notebook\t\t\t\t\t***\t"<<  nb_qty2 <<"\t\t***\t"<<  nb_bill2 <<"\t\t*";
   cout<<"\n\t\t   **************************************************************************************************************";
   cout<<"\n\t\t   *\t Pad Papers\t\t\t\t\t\t***\t\t\t***\t\t\t*";
   cout<<"\n\t\t   *\t 1. Grade 1\t\t\t\t\t\t***\t"<< pad_qty1 <<"\t\t***\t"<< pad_bill1 <<"\t\t*";
   cout<<"\n\t\t   *\t 2. Grade 2\t\t\t\t\t\t***\t"<< pad_qty2 <<"\t\t***\t"<< pad_bill2 <<"\t\t*";
   cout<<"\n\t\t   *\t 3. Grade 3\t\t\t\t\t\t***\t"<< pad_qty3 <<"\t\t***\t"<< pad_bill3 <<"\t\t*";
   cout<<"\n\t\t   *\t 4. Grade 4\t\t\t\t\t\t***\t"<< pad_qty4 <<"\t\t***\t"<< pad_bill4 <<"\t\t*";
   cout<<"\n\t\t   *\t 5. Grade 5\t\t\t\t\t\t***\t"<< pad_qty5 <<"\t\t***\t"<< pad_bill5 <<"\t\t*";
   cout<<"\n\t\t   *\t 6. Grade 6\t\t\t\t\t\t***\t"<< pad_qty6 <<"\t\t***\t"<< pad_bill6 <<"\t\t*";
   cout<<"\n\t\t   *\t 7. Intermediate Pad\t\t\t\t\t***\t"<< pad_qty7 <<"\t\t***\t"<< pad_bill7 <<"\t\t*";
   cout<<"\n\t\t   *\t 8. Yellow Pad\t\t\t\t\t\t***\t"<< pad_qty8 <<"\t\t***\t"<< pad_bill8 <<"\t\t*";
   cout<<"\n\t\t   **************************************************************************************************************";
   cout<<"\n\t\t   *\t Pencil\t\t\t\t\t\t\t***\t\t\t***\t\t\t*";
   cout<<"\n\t\t   *\t 1. No.2 Regular Mongol Pencil\t\t\t\t***\t"<< pncl_qty1 <<"\t\t***\t"<< pncl_bill1 <<"\t\t*";
   cout<<"\n\t\t   *\t 2. No.2 Jumbo/XL Mongol Pencil\t\t\t\t***\t"<< pncl_qty2 <<"\t\t***\t"<< pncl_bill2 <<"\t\t*";
   cout<<"\n\t\t   **************************************************************************************************************";
   cout<<"\n\t\t   *\t Pencil Sharpener\t\t\t\t\t***\t"<< sharp_qty <<"\t\t***\t"<< sharp_bill <<"\t\t*";
   cout<<"\n\t\t   **************************************************************************************************************";
   cout<<"\n\t\t   *\t Eraser\t\t\t\t\t\t\t***\t\t\t***\t\t\t*";
   cout<<"\n\t\t   *\t 1. Pencil Eraser (Rubber)\t\t\t\t***\t"<< erase_qty1 <<"\t\t***\t"<< erase_bill1 <<"\t\t*";
   cout<<"\n\t\t   *\t 2. Pen Eraser (Correction Tape)\t\t\t***\t"<< erase_qty2 <<"\t\t***\t"<< erase_bill2 <<"\t\t*";
   cout<<"\n\t\t   **************************************************************************************************************";
   cout<<"\n\t\t   *\t Crayola Crayons\t\t\t\t\t***\t\t\t***\t\t\t*";
   cout<<"\n\t\t   *\t 1. 8 pieces\t\t\t\t\t\t***\t"<< crayon_qty1 <<"\t\t***\t"<< crayon_bill1 <<"\t\t*";
   cout<<"\n\t\t   *\t 2. 16 pieces\t\t\t\t\t\t***\t"<< crayon_qty2 <<"\t\t***\t"<< crayon_bill2 <<"\t\t*";
   cout<<"\n\t\t   *\t 3. 64 pieces\t\t\t\t\t\t***\t"<< crayon_qty3 <<"\t\t***\t"<< crayon_bill3 <<"\t\t*";
   cout<<"\n\t\t   **************************************************************************************************************";
   cout<<"\n\t\t   *\t Pen (Ballpen/Signpen)\t\t\t\t\t***\t\t\t***\t\t\t*";
   cout<<"\n\t\t   *\t 1. Black\t\t\t\t\t\t***\t"<< pen_qty1 <<"\t\t***\t"<< pen_bill1 <<"\t\t*";
   cout<<"\n\t\t   *\t 2. Blue\t\t\t\t\t\t***\t"<< pen_qty2 <<"\t\t***\t"<< pen_bill2 <<"\t\t*";
   cout<<"\n\t\t   *\t 3. Red\t\t\t\t\t\t\t***\t"<< pen_qty3 <<"\t\t***\t"<< pen_bill3 <<"\t\t*";
   cout<<"\n\t\t   **************************************************************************************************************";
   cout<<"\n\t\t   *\t Scissors\t\t\t\t\t\t***\t"<< scissor_qty <<"\t\t***\t"<< scissor_bill <<"\t\t*";
   cout<<"\n\t\t   **************************************************************************************************************";
   cout<<"\n\t\t   *\t Backpack\t\t\t\t\t\t***\t"<< BP_qty <<"\t\t***\t"<< BP_bill <<"\t\t*";
   cout<<"\n\t\t   **************************************************************************************************************";
   cout<<"\n\t\t   *\t Book\t\t\t\t\t\t\t***\t\t\t***\t\t\t*";
   cout<<"\n\t\t   *\t 1. Story Book\t\t\t\t\t\t***\t"<< book_qty1 <<"\t\t***\t"<< book_bill1 <<"\t\t*";
   cout<<"\n\t\t   *\t 2. Dictionary\t\t\t\t\t\t***\t"<< book_qty3 <<"\t\t***\t"<< book_bill3 <<"\t\t*";
   cout<<"\n\t\t   *\t 3. Coloring Book\t\t\t\t\t***\t"<< book_qty4 <<"\t\t***\t"<< book_bill4 <<"\t\t*";
   cout<<"\n\t\t   **************************************************************************************************************";
   cout<<"\n\t\t   *\t Ruler\t\t\t\t\t\t\t***\t"<< ruler_qty <<"\t\t***\t"<<ruler_bill <<"\t\t*";  
   cout<<"\n\t\t   **************************************************************************************************************";
   cout<<"\n\t\t   *\t Glue\t\t\t\t\t\t\t***\t\t\t***\t\t\t*";
   cout<<"\n\t\t   *\t 1. Glue Stick\t\t\t\t\t\t***\t"<< glue_qty1 <<"\t\t***\t"<< glue_bill1 <<"\t\t*";
   cout<<"\n\t\t   *\t 2. Liquid Glue\t\t\t\t\t\t***\t"<< glue_qty2 <<"\t\t***\t"<< glue_bill2 <<"\t\t*";
   cout<<"\n\t\t   **************************************************************************************************************";
   cout<<"\n\t\t   *\t Tape\t\t\t\t\t\t\t***\t\t\t***\t\t\t*";
   cout<<"\n\t\t   *\t 1. Double Sided\t\t\t\t\t***\t"<< tape_qty1 <<"\t\t***\t"<< tape_bill1 <<"\t\t*";
   cout<<"\n\t\t   *\t 2. Transparent\t\t\t\t\t\t***\t"<< tape_qty2 <<"\t\t***\t"<< tape_bill2 <<"\t\t*";
   cout<<"\n\t\t   *\t 3. Masking Tape\t\t\t\t\t***\t"<< tape_qty3 <<"\t\t***\t"<< tape_bill3 <<"\t\t*";
   cout<<"\n\t\t   **************************************************************************************************************";
   cout<<"\n\t\t   *\t Color Pencil\t\t\t\t\t\t***\t\t\t***\t\t\t*";
   cout<<"\n\t\t   *\t 1. 8 Pieces\t\t\t\t\t\t***\t"<< clrpen_qty1 <<"\t\t***\t"<< clrpen_bill1 <<"\t\t*";
   cout<<"\n\t\t   *\t 2. 24 Pieces\t\t\t\t\t\t***\t"<< clrpen_qty2 <<"\t\t***\t"<< clrpen_bill2 <<"\t\t*";
   cout<<"\n\t\t   **************************************************************************************************************";
   cout<<"\n\t\t   *\t Markers\t\t\t\t\t\t***\t\t\t***\t\t\t*";
   cout<<"\n\t\t   *\t 1. Black Markers\t\t\t\t\t***\t"<< marker_qty1 <<"\t\t***\t"<< marker_bill1 <<"\t\t*";
   cout<<"\n\t\t   *\t 2. Red Markers\t\t\t\t\t\t***\t"<< marker_qty2 <<"\t\t***\t"<< marker_bill2 <<"\t\t*";
   cout<<"\n\t\t   *\t 3. Blue Markers\t\t\t\t\t***\t"<< marker_qty3 <<"\t\t***\t"<< marker_bill3 <<"\t\t*";
   cout<<"\n\t\t   *****************************************************************************************************************\n\n\n";
     
    //Total quantity and bill
    totqty = nb_qty + pad_qty + pncl_qty + sharp_qty + erase_qty + crayon_qty + pen_qty + scissor_qty + BP_qty + book_qty + ruler_qty + glue_qty + tape_qty + clrpen_qty + marker_qty;
    totbill = nb_bill + pad_bill + pncl_bill + sharp_bill + erase_bill + crayon_bill + pen_bill + scissor_bill + BP_bill + book_bill + ruler_bill + glue_bill + tape_bill + clrpen_bill + marker_bill;
   
    // Display user information and purchased products
    line(divline);
    cout << endl << "\t\tName of Donor: " << userName << endl;
    cout << "\t\t\tTotal no. of products purchased: " <<totqty <<endl;
    cout <<"\t\t\tTotal price of products purchased: " <<totbill;

    pts = totbill * 0.20;
    cout << endl << "\n\t\tPoints Earned: " << pts << endl;


    // Add Points to Current User
    activeUser->points += (int) pts;
    users.push_back(*activeUser);


    // Write to file
    ofstream fileOut("filename.txt");
    for (const User& user : users) {
        fileOut << user.name << "\t\t\t " << user.points << endl;
    }
    fileOut.close();
   
    if (pts >= 100) {
        line(divline);
        cout << "\n\t\tSelect an action [C/D/R] " << endl;
        cout << "\t\tCoupon / Discount / Record" << endl;
        cout << "\t\t\tCoupon: Get a physical coupon" << endl;
        cout << "\t\t\tDiscount: Get a discount from the total payment" << endl;
        cout << "\t\t\tRecord: Save your points in your account" << endl;
        cout << "\t\tInput your choice: ";
        cin >> ptsaction;
       
        switch (ptsaction) {
            case 'C':
            	cout << "\n\t\tPlease claim you coupon after the paying.\n";
                ptscoupnconvrt(ptsaction);
                line(divline);
                break;
            case 'D':
                deductedBill = totbill - pts;
                cout << "\n\t\tPoints is used as a Discount:"<<endl;
                cout << "\n\t\tYour total bill is now: " << deductedBill<<endl;
                line(divline);
                break;
            case 'R':
                cout << "\n\t\tYour points have been added to your accumulated points.\n";
                cout << "\n\t\tYour total points is: " << pts << endl;
                line(divline);
                break;
            default:
                cout << "\n\t\tInvalid. Please try again.";
                break;
        }
    } else {
        cout << "\n\t\tYour points do not meet the minimum requirements to be used.\n";
        line(divline);
    }
   
    cout << endl << "\n\t\tMode of your Payment" << endl;
    cout << "\t\t\tGC: Gcash" << endl;
    cout << "\t\t\tOV: Over the counter" << endl;
    cout << endl << "\t\tEnter the mode of your payment: ";
    cin >> modePay;


    if (modePay == "GC" || modePay == "gc") {
        line(divline);
        cout << "\n\t\tPlease send the exact total payment to this Gcash account:\n";
        cout << "\t\t\tGcash username: E********a G***o\n";
        cout << "\t\t\tGcash number: 09398169299\n\n";
        cout << "\t\tType 'Done' if you have already sent the payment: ";
        cin >> gcashPay;

        if (gcashPay == "Done" || gcashPay == "done") {
            line(divline);
            cout << "\n\n\t\t\t\t\tThank you for purchasing! The group will ensure your donation is distributed soon!\n";
            cout << "\t\t\t\t\tVisit the Education Foundation of the Philippines' official website for updates:\n";
            cout << "\t\t\t\t\t\tLink: https://www.edfoundationph.org\n\n";
            cout << "\t\t\t\t\tTHANK YOU AND HAVE A GREAT DAY AHEAD!\n";
            line(divline);
        }
    } else if (modePay == "OV" || modePay == "ov") {
        bool sufficientPayment = false;

        do {
            line(divline);
            cout << "\t\tEnter the amount of your payment: ";
            cin >> amount;

            cout << "\t\tYou paid: " << amount << endl;

            if (amount < totbill) {
                cout << "\t\tThe payment is not enough to cover the total bill. Please pay the exact amount.\n";
            } else {
                sufficientPayment = true;
                change = amount - totbill;

                if (change >= 1) {
                    cout << "\t\tYour change is: " << change << endl;
                }
            line(divline);
            cout << "\n\n\t\t\t\t\tThank you for purchasing! The group will ensure your donation will be distributed soon!\n";
            cout << "\t\t\t\t\tVisit the Education Foundation of the Philippines' official website for updates:\n";
            cout << "\t\t\t\t\t\tLink: https://www.edfoundationph.org\n\n";
            cout << "\t\t\t\t\tTHANK YOU AND HAVE A GREAT DAY AHEAD!\n";
            line(divline);
            }
        } while (!sufficientPayment);
    }
	
	    return 0;
}
}


