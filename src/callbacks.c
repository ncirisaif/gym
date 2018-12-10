#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "fonctions.h"


void on_button1_clicked(GtkButton       *objet_graphique,gpointer         user_data)
{
GtkWidget *nom;
GtkWidget *pwd;
GtkWidget *output;
GtkWidget *window1;
GtkWidget *window2;

char login[30],mdp[30];
int ver;

nom=lookup_widget(objet_graphique,"entry1");
pwd=lookup_widget(objet_graphique,"entry2");
output=lookup_widget(objet_graphique,"label3");
strcpy(login,gtk_entry_get_text(GTK_ENTRY(nom)));
strcpy(mdp,gtk_entry_get_text(GTK_ENTRY(pwd)));
 ver =verifier(login,mdp);
if (ver==1)
{
window1=lookup_widget(objet_graphique,"window1");
window2=create_window2();
gtk_widget_show(window2);
gtk_widget_hide(window1);
}
else

{

gtk_label_set_text(GTK_LABEL(output),"erreur");

}
}


void
on_button2_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *window3;
window2 = lookup_widget(objet_graphique,"window2"); 

window3=create_window3();		
		gtk_widget_show (window3);
		gtk_widget_hide (window2);

}


void
on_button6_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
char nom[50];char prenom[50];char adresse[50];char tel[50];char cin[50];int d;int m;int y ; char rib[50];
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *window3;
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;

window3=lookup_widget(objet_graphique,"window3");
input1= lookup_widget(objet_graphique,"entry4");
input2= lookup_widget(objet_graphique,"entry6");
input3= lookup_widget(objet_graphique,"entry5");
input4= lookup_widget(objet_graphique,"entry7");
input5= lookup_widget(objet_graphique,"entry8");
input6= lookup_widget(objet_graphique,"entry12");

jour=lookup_widget(objet_graphique,"spinbutton7");
mois=lookup_widget(objet_graphique,"spinbutton8");
annee=lookup_widget(objet_graphique,"spinbutton9");
d=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
m=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
y=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));

strcpy(nom,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(adresse,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(tel,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(cin,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(rib,gtk_entry_get_text(GTK_ENTRY(input6)));

ajouter(nom,prenom,adresse,tel,cin,rib,d,m,y);

}



void
on_button7_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window4;
GtkWidget *window3;
window4=lookup_widget(GTK_WIDGET(objet_graphique),"window4");
window3=create_window3();
gtk_widget_show(window3);
gtk_widget_destroy(window4);
}


void
on_button9_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *window3;
window3 = lookup_widget(objet_graphique,"window3"); 
window2=create_window2();
		
		gtk_widget_show (window2);
		gtk_widget_hide (window3);

}


void
on_button8_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *window4;
window4=lookup_widget(objet_graphique,"window4");
window2=create_window2();
gtk_widget_show(window2);
gtk_widget_hide(window4);
}


void
on_button10_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *window5;
window5=lookup_widget(objet_graphique,"window5");
window2=create_window2();
gtk_widget_show(window2);
gtk_widget_hide(window5);
}


void
on_button11_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window8;
GtkWidget *window6;
window8=lookup_widget(objet_graphique,"window8");

gtk_widget_show(window6);
gtk_widget_hide(window8);

GtkWidget  *listeview     ;

window6=create_window6();	
listeview = lookup_widget(window6,"treeview3");
afficher_horaire(listeview);
gtk_widget_show (window6);
}


void
on_button12_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *window7;
window7=lookup_widget(objet_graphique,"window7");
window2=create_window2();
gtk_widget_show(window2);
gtk_widget_hide(window7);
}


void
on_button3_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *window6;
window2=lookup_widget(objet_graphique,"window2");

gtk_widget_show(window6);
gtk_widget_hide(window2);
GtkWidget  *listeview     ;

window6=create_window6();	
listeview = lookup_widget(window6,"treeview3");
afficher_horaire(listeview);
gtk_widget_show (window6);
}


void
on_button4_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *window7;
window2=lookup_widget(objet_graphique,"window2");
gtk_widget_show(window7);
gtk_widget_hide(window2);

GtkWidget  *listeview    ;

window7=create_window7();	
listeview = lookup_widget(window7,"treeview4");
afficher_rdv(listeview);
gtk_widget_show (window7);
}


void
on_button5_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *window5;
window2 = lookup_widget(objet_graphique,"window2"); 

		
		gtk_widget_show (window5);
		gtk_widget_hide (window2);

GtkWidget  *listeview     ;

window5=create_window5();	
listeview = lookup_widget(window5,"treeview2");
afficher2(listeview);
gtk_widget_show (window5);

}



void
on_button13_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *combobox1; //comobox pour la période

 GtkWidget *jour; //spinbuttun pour le choix du jour
 GtkWidget *mois; //spinbuttun pour le choix du mois 
GtkWidget *annee; //spinbuttun pour le choix de l’année
Datee d;
char temps[20];

combobox1=lookup_widget(objet_graphique, "combobox1");
 jour=lookup_widget(objet_graphique, "spinbutton1"); mois=lookup_widget(objet_graphique, "spinbutton2"); 
annee=lookup_widget(objet_graphique, "spinbutton3"); 

d.jour=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
d.mois=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois));
d.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));
strcpy(d.temps,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1)));


ajouter_horaire(d);



}


void
on_button15_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window6;
GtkWidget *window8;
window6=lookup_widget(objet_graphique,"window6");
window8=create_window8();
gtk_widget_show(window8);
gtk_widget_hide(window6);
}


void
on_button14_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *window6;
window6=lookup_widget(objet_graphique,"window6");
window2=create_window2();
gtk_widget_show(window2);
gtk_widget_hide(window6);
}


gboolean
on_window3_enter_notify_event          (GtkWidget       *widget,
                                        GdkEventCrossing *event,
                                        gpointer         user_data)
{

  return FALSE;
}


void
on_button16_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window9;
GtkWidget *window7;
window7=lookup_widget(objet_graphique,"window7");
window9=create_window9();
gtk_widget_show(window9);
gtk_widget_hide(window7);
}


void
on_button17_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{


GtkWidget *jour1;
 GtkWidget *temps1;
 GtkWidget *mois1;
 GtkWidget *annee1;
 GtkWidget *output;




int res;
char temp1[20]; char sorti[50];
 char nom1[50];char prenom1[50];
 GtkWidget *combobox2; //comobox pour la période

 GtkWidget *input10;
 GtkWidget *input11;
Date1 d1;

temps1=lookup_widget(button,"spinbutton3");
jour1=lookup_widget(button,"spinbutton4");
mois1=lookup_widget(button,"spinbutton5");
annee1=lookup_widget(button,"spinbutton6");
output=lookup_widget(button,"label92");

combobox2=lookup_widget(button, "combobox2");

input10= lookup_widget(button,"entry10");
input11= lookup_widget(button,"entry11");

d1.jour1=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON (jour1));
d1.mois1=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON (mois1));
d1.annee1=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON (annee1));

strcpy(d1.temps1,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2)));

strcpy(nom1,gtk_entry_get_text(GTK_ENTRY(input10)));
strcpy(prenom1,gtk_entry_get_text(GTK_ENTRY(input11)));


res=verifier_rend(d1);
if (res==1){
strcpy(sorti,"rendez-vous non dsiponible");
}
else {
ajouter_rdv(nom1,prenom1,d1);
strcpy(sorti,"rendez-vous disponible");

}
gtk_label_set_text(GTK_LABEL(output),sorti);
}








void
on_button18_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window9;
GtkWidget *window7;
window9=lookup_widget(objet_graphique,"window9");
gtk_widget_show(window7);
gtk_widget_hide(window9);

GtkWidget  *listeview    ;

window7=create_window7();	
listeview = lookup_widget(window7,"treeview4");
afficher_rdv(listeview);
gtk_widget_show (window7);
}


void
on_button20_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window3;
GtkWidget *window1;
window3=lookup_widget(objet_graphique,"window3");
window1=create_window1();
gtk_widget_show(window1);
gtk_widget_hide(window3);
}


void
on_button21_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window1;
GtkWidget *window4;
window4=lookup_widget(objet_graphique,"window4");
window1=create_window1();
gtk_widget_show(window1);
gtk_widget_hide(window4);
}


void
on_button22_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window5;
GtkWidget *window1;
window5=lookup_widget(objet_graphique,"window5");
window1=create_window1();
gtk_widget_show(window1);
gtk_widget_hide(window5);
}


void
on_button23_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window8;
GtkWidget *window1;
window8=lookup_widget(objet_graphique,"window8");
window1=create_window1();
gtk_widget_show(window1);
gtk_widget_hide(window8);
}


void
on_button24_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window7;
GtkWidget *window1;
window7=lookup_widget(objet_graphique,"window7");
window1=create_window1();
gtk_widget_show(window1);
gtk_widget_hide(window7);
}


void
on_button25_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window6;
GtkWidget *window1;
window6=lookup_widget(objet_graphique,"window6");
window1=create_window1();
gtk_widget_show(window1);
gtk_widget_hide(window6);
}


void
on_button26_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window9;
GtkWidget *window1;
window9=lookup_widget(objet_graphique,"window9");
window1=create_window1();
gtk_widget_show(window9);
gtk_widget_hide(window1);
}


void
on_button19_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2;
GtkWidget *window1;
window2=lookup_widget(objet_graphique,"window2");
window1=create_window1();
gtk_widget_show(window1);
gtk_widget_hide(window2);
}


void
on_button27_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_main_quit();
}


void
on_button28_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{

GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *window3;
GtkWidget *jourr;
GtkWidget *moiss;
GtkWidget *anneee;

FILE* f1;
kprofil p;
Datee m;


window3=lookup_widget(objet_graphique,"window3");
input1= lookup_widget(objet_graphique,"entry4");
input2= lookup_widget(objet_graphique,"entry6");
input3= lookup_widget(objet_graphique,"entry5");
input4= lookup_widget(objet_graphique,"entry7");
input5= lookup_widget(objet_graphique,"entry8");
input6= lookup_widget(objet_graphique,"entry12");
jourr=lookup_widget(GTK_WIDGET(objet_graphique),"spinbutton7");
moiss=lookup_widget(GTK_WIDGET(objet_graphique),"spinbutton8");
anneee=lookup_widget(GTK_WIDGET(objet_graphique),"spinbutton9");
f1=fopen("myspace.txt","r");
fscanf(f1,"%s %s %s %s %s %s %d %d %d",p.nom,p.prenom,p.adresse,p.tel,p.cin,p.rib,&m.jour,&m.mois,&m.annee);

gtk_entry_set_text (GTK_ENTRY(input1),p.nom);
gtk_entry_set_text (GTK_ENTRY(input2),p.prenom);
gtk_entry_set_text (GTK_ENTRY(input3),p.adresse);
gtk_entry_set_text (GTK_ENTRY(input4),p.tel);
gtk_entry_set_text (GTK_ENTRY(input5),p.cin);
gtk_entry_set_text (GTK_ENTRY(input6),p.rib);
gtk_spin_button_set_value(GTK_SPIN_BUTTON(jourr),m.jour);
gtk_spin_button_set_value(GTK_SPIN_BUTTON(moiss),m.mois);
gtk_spin_button_set_value(GTK_SPIN_BUTTON(anneee),m.annee);
fclose(f1);


}

void
on_button29_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{GtkWidget *window5;
GtkWidget *window10;
window5=lookup_widget(objet_graphique,"window5");
window10=create_window10();
gtk_widget_show(window10);
gtk_widget_hide(window5);

}


void
on_Ajouter_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{char nom[50];char prenom[50];char tel[50];char sexe[50];char poids[50];char taille[50];char maladies[50];char conseils[50];
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;

GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input7;
GtkWidget *input6;
GtkWidget *combobox5;


GtkWidget *window5;
GtkWidget *window3;

input1= lookup_widget(objet_graphique,"entry13");
input2= lookup_widget(objet_graphique,"entry14");
input3= lookup_widget(objet_graphique,"entry15");

input4= lookup_widget(objet_graphique,"entry17");
input5= lookup_widget(objet_graphique,"entry18");
input6= lookup_widget(objet_graphique,"entry19");
input7= lookup_widget(objet_graphique,"entry20");
combobox5=lookup_widget(objet_graphique, "combobox5");


strcpy(nom,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(tel,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(sexe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox5)));
strcpy(poids,gtk_entry_get_text(GTK_ENTRY(input7)));
strcpy(taille,gtk_entry_get_text(GTK_ENTRY(input6)));

strcpy(maladies,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(conseils,gtk_entry_get_text(GTK_ENTRY(input5)));


ajouter2(nom,prenom,tel,sexe,poids,taille,maladies,conseils);


}


void
on_button33_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *window10;
GtkWidget *window5;
window10=lookup_widget(button,"window10");
gtk_widget_show(window5);
gtk_widget_hide(window10);

GtkWidget  *listeview    ;

window5=create_window5();	
listeview = lookup_widget(window5,"treeview2");
afficher2(listeview);
gtk_widget_show (window5);

}


void
on_treeview4_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_button34_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button35_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button36_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button38_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *window1;
GtkWidget *window10;
window10=lookup_widget(button,"window10");
window1=create_window1();
gtk_widget_show(window1);
gtk_widget_hide(window10);

}


void
on_treeview3_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)

{
GtkWidget *entry1,*entry2,*entry3,*entry4;
GtkTreeIter iter;
GtkTreeModel *model;
gchar *string,*string1,*string2,*string3;

model=gtk_tree_view_get_model(treeview);
gtk_tree_model_get_iter(model,&iter,path);
gtk_tree_model_get(model,&iter,0,&string,-1);
gtk_tree_model_get(model,&iter,1,&string1,-1);
gtk_tree_model_get(model,&iter,2,&string2,-1);
gtk_tree_model_get(model,&iter,3,&string3,-1);


entry1=lookup_widget(GTK_TREE_VIEW(treeview),"entry21");
entry2=lookup_widget(GTK_TREE_VIEW(treeview),"entry22");
entry3=lookup_widget(GTK_TREE_VIEW(treeview),"entry23");
entry4=lookup_widget(GTK_TREE_VIEW(treeview),"entry24");


gtk_entry_set_text(GTK_ENTRY(entry1),string);
gtk_entry_set_text(GTK_ENTRY(entry2),string1);
gtk_entry_set_text(GTK_ENTRY(entry3),string2);
gtk_entry_set_text(GTK_ENTRY(entry4),string3);
}


void
on_button39_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

GtkWidget *input1,*input2,*input3,*input4;
FILE *f4 ; FILE *f5;

char jour[30],mois[30],annee[30],temps[30] ; 
char j[30],m[30],a[30],t[30];

input1=lookup_widget(GTK_WIDGET(button),"entry21");
input2=lookup_widget(GTK_WIDGET(button),"entry22");
input3=lookup_widget(GTK_WIDGET(button),"entry23");
input4=lookup_widget(GTK_WIDGET(button),"entry24");




strcpy(jour,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(mois,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(annee,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(temps,gtk_entry_get_text(GTK_ENTRY(input4)));


f4=fopen("horaire.txt","r");
f5=fopen("horairetemp.txt","a");


if(f4 !=NULL){
     while(fscanf(f4," %s %s %s %s \n",j,m,a,t)!=EOF)
     {
       if((strcmp(j,jour)!=0)&&(strcmp(m,mois)!=0)&&(strcmp(a,annee)!=0)&&(strcmp(t,temps)!=0))
    fprintf(f5," %s %s %s %s \n",j,m,a,t);
    }
}
fclose(f4);
fprintf(f5," %s %s %s %s \n",jour,mois,annee,temps);
fclose(f5);
remove("horaire.txt");
rename("horairetemp.txt","horaire.txt");




}


void
on_button40_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{GtkWidget *input1,*input2,*input3,*input4;
FILE *f;FILE *f1;

char jour[30],mois[30],annee[30],temps[30] ; char j[30],m[30],a[30],t[30];

input1=lookup_widget(GTK_WIDGET(button),"entry21");
input2=lookup_widget(GTK_WIDGET(button),"entry22");
input3=lookup_widget(GTK_WIDGET(button),"entry23");
input4=lookup_widget(GTK_WIDGET(button),"entry24");



strcpy(jour,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(mois,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(annee,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(temps,gtk_entry_get_text(GTK_ENTRY(input4)));

f=fopen("horaire.txt","r");
f1=fopen("horairetemp.txt","a");


if(f !=NULL){
     while(fscanf(f," %s %s %s %s\n",j,m,a,t)!=EOF)
     {
       if((strcmp(j,jour)!=0)||(strcmp(m,mois)!=0))
    fprintf(f1," %s %s %s %s \n",j,m,a,t);
    }
}
fclose(f);
fclose(f1);
remove("horaire.txt");
rename("horairetemp.txt","horaire.txt");

}


void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkWidget *entry1,*entry2,*entry3,*entry4,*entry5,*entry6,*entry7,*entry8;
GtkTreeIter iter;
GtkTreeModel *model;
gchar *string,*string1,*string2,*string3,*string4,*string5,*string6,*string7;

model=gtk_tree_view_get_model(treeview);
gtk_tree_model_get_iter(model,&iter,path);
gtk_tree_model_get(model,&iter,0,&string,-1);
gtk_tree_model_get(model,&iter,1,&string1,-1);
gtk_tree_model_get(model,&iter,2,&string2,-1);
gtk_tree_model_get(model,&iter,3,&string3,-1);
gtk_tree_model_get(model,&iter,4,&string4,-1);
gtk_tree_model_get(model,&iter,5,&string5,-1);
gtk_tree_model_get(model,&iter,6,&string6,-1);
gtk_tree_model_get(model,&iter,7,&string7,-1);


entry1=lookup_widget(GTK_TREE_VIEW(treeview),"entry32");
entry2=lookup_widget(GTK_TREE_VIEW(treeview),"entry25");
entry3=lookup_widget(GTK_TREE_VIEW(treeview),"entry26");
entry4=lookup_widget(GTK_TREE_VIEW(treeview),"entry27");
entry5=lookup_widget(GTK_TREE_VIEW(treeview),"entry28");
entry6=lookup_widget(GTK_TREE_VIEW(treeview),"entry29");
entry7=lookup_widget(GTK_TREE_VIEW(treeview),"entry30");
entry8=lookup_widget(GTK_TREE_VIEW(treeview),"entry31");


gtk_entry_set_text(GTK_ENTRY(entry1),string);
gtk_entry_set_text(GTK_ENTRY(entry2),string1);
gtk_entry_set_text(GTK_ENTRY(entry3),string2);
gtk_entry_set_text(GTK_ENTRY(entry4),string3);
gtk_entry_set_text(GTK_ENTRY(entry5),string4);
gtk_entry_set_text(GTK_ENTRY(entry6),string5);
gtk_entry_set_text(GTK_ENTRY(entry7),string6);
gtk_entry_set_text(GTK_ENTRY(entry8),string7);
}


void
on_button41_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *input1,*input2,*input3,*input4,*input5,*input6,*input7,*input8;
FILE *f4 ; FILE *f5;

char nom[30],prenom[30],tel[30],sexe[30],poids[30],taille[30],maladies[30],conseils[30] ; 
char j[30],m[30],a[30],t[30],e[30],f[30],g[30],h[30];

input1=lookup_widget(GTK_WIDGET(button),"entry32");
input2=lookup_widget(GTK_WIDGET(button),"entry25");
input3=lookup_widget(GTK_WIDGET(button),"entry26");
input4=lookup_widget(GTK_WIDGET(button),"entry27");

input5=lookup_widget(GTK_WIDGET(button),"entry28");
input6=lookup_widget(GTK_WIDGET(button),"entry29");
input7=lookup_widget(GTK_WIDGET(button),"entry30");
input8=lookup_widget(GTK_WIDGET(button),"entry31");



strcpy(nom,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(tel,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(sexe,gtk_entry_get_text(GTK_ENTRY(input4)));

strcpy(poids,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(taille,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(maladies,gtk_entry_get_text(GTK_ENTRY(input7)));
strcpy(conseils,gtk_entry_get_text(GTK_ENTRY(input8)));

f4=fopen("myfiche.txt","r");
f5=fopen("myfichetmp.txt","a");


if(f4 !=NULL){
     while(fscanf(f4," %s %s %s %s %s %s %s %s \n",j,m,a,t,e,f,g,h)!=EOF)
     {
       if((strcmp(j,nom)!=0)&&(strcmp(m,prenom)!=0)&&(strcmp(a,tel)!=0)&&(strcmp(t,sexe)!=0)&&(strcmp(e,poids)!=0)&&(strcmp(f,taille)!=0)&&(strcmp(g,maladies)!=0)&&(strcmp(h,conseils)!=0))
    fprintf(f5," %s %s %s %s %s %s %s %s \n",j,m,a,t,e,f,g,h);
    }
}
fclose(f4);
fprintf(f5," %s %s %s %s %s %s %s %s \n",nom,prenom,tel,sexe,poids,taille,maladies,conseils);
fclose(f5);
remove("myfiche.txt");
rename("myfichetmp.txt","myfiche.txt");
}


void
on_button42_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *input1,*input2,*input3,*input4,*input5,*input6,*input7,*input8;
FILE *f4 ; FILE *f5;

char nom[30],prenom[30],tel[30],sexe[30],poids[30],taille[30],maladies[30],conseils[30] ; char j[30],m[30],a[30],t[30],e[30],f[30],g[30],h[30];

input1=lookup_widget(GTK_WIDGET(button),"entry32");
input2=lookup_widget(GTK_WIDGET(button),"entry25");
input3=lookup_widget(GTK_WIDGET(button),"entry26");
input4=lookup_widget(GTK_WIDGET(button),"entry27");

input5=lookup_widget(GTK_WIDGET(button),"entry28");
input6=lookup_widget(GTK_WIDGET(button),"entry29");
input7=lookup_widget(GTK_WIDGET(button),"entry30");
input8=lookup_widget(GTK_WIDGET(button),"entry31");



strcpy(nom,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(tel,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(sexe,gtk_entry_get_text(GTK_ENTRY(input4)));

strcpy(poids,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(taille,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(maladies,gtk_entry_get_text(GTK_ENTRY(input7)));
strcpy(conseils,gtk_entry_get_text(GTK_ENTRY(input8)));

f4=fopen("myfiche.txt","r");
f5=fopen("myfichetmp.txt","a");


if(f4 !=NULL){
     while(fscanf(f4," %s %s %s %s %s %s %s %s \n",j,m,a,t,e,f,g,h)!=EOF)
     {
       if((strcmp(j,nom)!=0)||(strcmp(m,prenom)!=0)||(strcmp(a,tel)!=0)||(strcmp(t,sexe)!=0)||(strcmp(e,poids)!=0)||(strcmp(f,taille)!=0)||(strcmp(g,maladies)!=0)||(strcmp(h,conseils)!=0))
    fprintf(f5," %s %s %s %s %s %s %s %s \n",j,m,a,t,e,f,g,h);
    }
}
fclose(f4);
fclose(f5);
remove("myfiche.txt");
rename("myfichetmp.txt","myfiche.txt");

}


void
on_button45_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_main_quit();
}


void
on_button43_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window11;
GtkWidget *window1y;
window11=lookup_widget(button,"window11");
window1y=create_window1y();
gtk_widget_show(window1y);
gtk_widget_hide(window11);
}


void
on_button44_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window11;
GtkWidget *window1;
window11=lookup_widget(button,"window11");
window1=create_window1();
gtk_widget_show(window1);
gtk_widget_hide(window11);
}
void
on_button27y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
gtk_main_quit();
}


void
on_button1y_clicked(GtkButton       *objet_graphique,gpointer         user_data)
{
GtkWidget *nom;
GtkWidget *pwd;
GtkWidget *output;
GtkWidget *window1y;
GtkWidget *window2y;

char login[30],mdp[30];
int ver;

nom=lookup_widget(objet_graphique,"entry1y");
pwd=lookup_widget(objet_graphique,"entry2y");
output=lookup_widget(objet_graphique,"label3y");
strcpy(login,gtk_entry_get_text(GTK_ENTRY(nom)));
strcpy(mdp,gtk_entry_get_text(GTK_ENTRY(pwd)));
 ver =verifiery(login,mdp);
if (ver==1)
{
window1y=lookup_widget(objet_graphique,"window1y");
window2y=create_window2y();
gtk_widget_show(window2y);
gtk_widget_hide(window1y);
}
else

{

gtk_label_set_text(GTK_LABEL(output),"erreur");

}
}


void
on_button19y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2y;
GtkWidget *window1y;
window2y=lookup_widget(objet_graphique,"window2y");
window1y=create_window1y();
gtk_widget_show(window1y);
gtk_widget_hide(window2y);
}

void
on_button5y_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2y;
GtkWidget *window5y;
window2y=lookup_widget(objet_graphique,"window2y");
gtk_widget_show(window5y);
gtk_widget_hide(window2y);

GtkWidget  *listeview    ;

window5y=create_window5y();	
listeview = lookup_widget(window5y,"treeview2y");
affichery(listeview);
gtk_widget_show (window5y);
}

void
on_button4y_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2y;
GtkWidget *window7y;
window2y=lookup_widget(objet_graphique,"window2y");
gtk_widget_show(window7y);
gtk_widget_hide(window2y);

GtkWidget  *listeview    ;

window7y=create_window7y();	
listeview = lookup_widget(window7y,"treeview4y");
afficher_rdvy(listeview);
gtk_widget_show (window7y);
}


void
on_button3y_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2y;
GtkWidget *window6y;
window2y=lookup_widget(objet_graphique,"window2y");

gtk_widget_show(window6y);
gtk_widget_hide(window2y);
GtkWidget  *listeview     ;

window6y=create_window6y();	
listeview = lookup_widget(window6y,"treeview3y");
afficher_horairey(listeview);
gtk_widget_show (window6y);
}



void
on_button2y_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2y;
GtkWidget *window3y;
window2y = lookup_widget(objet_graphique,"window2y"); 

window3y=create_window3y();		
		gtk_widget_show (window3y);
		gtk_widget_hide (window2y);

}


void
on_button6y_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
char nom[50];char prenom[50];char adresse[50];char tel[50];char cin[50];int d;int m;int y ; char rib[50];
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *window3y;
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;

window3y=lookup_widget(objet_graphique,"window3y");
input1= lookup_widget(objet_graphique,"entry4y");
input2= lookup_widget(objet_graphique,"entry6y");
input3= lookup_widget(objet_graphique,"entry5y");
input4= lookup_widget(objet_graphique,"entry7y");
input5= lookup_widget(objet_graphique,"entry8y");
input6= lookup_widget(objet_graphique,"entry12y");

jour=lookup_widget(objet_graphique,"spinbutton7y");
mois=lookup_widget(objet_graphique,"spinbutton8y");
annee=lookup_widget(objet_graphique,"spinbutton9y");
d=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
m=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
y=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));

strcpy(nom,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(adresse,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(tel,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(cin,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(rib,gtk_entry_get_text(GTK_ENTRY(input6)));

ajoutery(nom,prenom,adresse,tel,cin,rib,d,m,y);

}


void
on_button9y_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2y;
GtkWidget *window3y;
window3y = lookup_widget(objet_graphique,"window3y"); 
window2y=create_window2y();
		
		gtk_widget_show (window2y);
		gtk_widget_hide (window3y);

}


void
on_button28y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{

GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *window3y;
GtkWidget *jourr;
GtkWidget *moiss;
GtkWidget *anneee;

FILE* f1;
kprofil p;
Datee m;


window3y=lookup_widget(objet_graphique,"window3y");
input1= lookup_widget(objet_graphique,"entry4y");
input2= lookup_widget(objet_graphique,"entry6y");
input3= lookup_widget(objet_graphique,"entry5y");
input4= lookup_widget(objet_graphique,"entry7y");
input5= lookup_widget(objet_graphique,"entry8y");
input6= lookup_widget(objet_graphique,"entry12y");
jourr=lookup_widget(GTK_WIDGET(objet_graphique),"spinbutton7y");
moiss=lookup_widget(GTK_WIDGET(objet_graphique),"spinbutton8y");
anneee=lookup_widget(GTK_WIDGET(objet_graphique),"spinbutton9y");
f1=fopen("myspacey.txt","r");
fscanf(f1,"%s %s %s %s %s %s %d %d %d",p.nom,p.prenom,p.adresse,p.tel,p.cin,p.rib,&m.jour,&m.mois,&m.annee);

gtk_entry_set_text (GTK_ENTRY(input1),p.nom);
gtk_entry_set_text (GTK_ENTRY(input2),p.prenom);
gtk_entry_set_text (GTK_ENTRY(input3),p.adresse);
gtk_entry_set_text (GTK_ENTRY(input4),p.tel);
gtk_entry_set_text (GTK_ENTRY(input5),p.cin);
gtk_entry_set_text (GTK_ENTRY(input6),p.rib);
gtk_spin_button_set_value(GTK_SPIN_BUTTON(jourr),m.jour);
gtk_spin_button_set_value(GTK_SPIN_BUTTON(moiss),m.mois);
gtk_spin_button_set_value(GTK_SPIN_BUTTON(anneee),m.annee);
fclose(f1);


}


void
on_button20y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window3y;
GtkWidget *window1y;
window3y=lookup_widget(objet_graphique,"window3y");
window1y=create_window1y();
gtk_widget_show(window1y);
gtk_widget_hide(window3y);
}



void
on_button21y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window1y;
GtkWidget *window4y;
window4y=lookup_widget(objet_graphique,"window4y");
window1y=create_window1y();
gtk_widget_show(window1y);
gtk_widget_hide(window4y);
}


void
on_button7y_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window4y;
GtkWidget *window3y;
window4y=lookup_widget(GTK_WIDGET(objet_graphique),"window4y");
window3y=create_window3y();
gtk_widget_show(window3y);
gtk_widget_destroy(window4y);
}


void
on_button8y_clicked                     (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2y;
GtkWidget *window4y;
window4y=lookup_widget(objet_graphique,"window4y");
window2y=create_window2y();
gtk_widget_show(window2y);
gtk_widget_hide(window4y);
}


void
on_button22y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window5y;
GtkWidget *window1y;
window5y=lookup_widget(objet_graphique,"window5y");
window1y=create_window1y();
gtk_widget_show(window1y);
gtk_widget_hide(window5y);
}


void
on_button10y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2y;
GtkWidget *window5y;
window5y=lookup_widget(objet_graphique,"window5y");
window2y=create_window2y();
gtk_widget_show(window2y);
gtk_widget_hide(window5y);
}


void
on_button13y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *combobox1y; //comobox pour la période

 GtkWidget *jour; //spinbuttun pour le choix du jour
 GtkWidget *mois; //spinbuttun pour le choix du mois 
GtkWidget *annee; //spinbuttun pour le choix de l’année
Datee d;
 GtkWidget *output;int res ;
char msg[50];
char temps[20];

combobox1y=lookup_widget(objet_graphique, "combobox1y");
 jour=lookup_widget(objet_graphique, "spinbutton1y"); 
mois=lookup_widget(objet_graphique, "spinbutton2y"); 
annee=lookup_widget(objet_graphique, "spinbutton3y"); 
output=lookup_widget(objet_graphique,"label71y");

d.jour=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
d.mois=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois));
d.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));
strcpy(d.temps,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1y)));

res=verifier_horairey(d);
if (res==1){
strcpy(msg,"horaire existe déja");
}
else {
ajouter_horairey(d);
strcpy(msg,"ajout fait avec succés");

}
gtk_label_set_text(GTK_LABEL(output),msg);
}



void
on_button23y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window8y;
GtkWidget *window1y;
window8y=lookup_widget(objet_graphique,"window8y");
window1y=create_window1y();
gtk_widget_show(window1y);
gtk_widget_hide(window8y);
}


void
on_button11y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window8y;
GtkWidget *window6y;
window8y=lookup_widget(objet_graphique,"window8y");

gtk_widget_show(window6y);
gtk_widget_hide(window8y);

GtkWidget  *listeview     ;

window6y=create_window6y();	
listeview = lookup_widget(window6y,"treeview3y");
afficher_horairey(listeview);
gtk_widget_show (window6y);
}


void
on_button12y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2y;
GtkWidget *window7y;
window7y=lookup_widget(objet_graphique,"window7y");
window2y=create_window2y();
gtk_widget_show(window2y);
gtk_widget_hide(window7y);
}


void
on_button16y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window9y;
GtkWidget *window7y;
window7y=lookup_widget(objet_graphique,"window7y");
window9y=create_window9y();
gtk_widget_show(window9y);
gtk_widget_hide(window7y);
}

void
on_button24y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window7y;
GtkWidget *window1y;
window7y=lookup_widget(objet_graphique,"window7y");
window1y=create_window1y();
gtk_widget_show(window1y);
gtk_widget_hide(window7y);
}


void
on_button25y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window6y;
GtkWidget *window1y;
window6y=lookup_widget(objet_graphique,"window6y");
window1y=create_window1y();
gtk_widget_show(window1y);
gtk_widget_hide(window6y);
}


void
on_button15y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window6y;
GtkWidget *window8y;
window6y=lookup_widget(objet_graphique,"window6y");
window8y=create_window8y();
gtk_widget_show(window8y);
gtk_widget_hide(window6y);
}


void
on_button14y_clicked(GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window2y;
GtkWidget *window6y;
window6y=lookup_widget(objet_graphique,"window6y");
window2y=create_window2y();
gtk_widget_show(window2y);
gtk_widget_hide(window6y);
}


gboolean
on_window3y_enter_notify_event          (GtkWidget       *widget,
                                        GdkEventCrossing *event,
                                        gpointer         user_data)
{

  return FALSE;
}


void
on_button18y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window9y;
GtkWidget *window7y;
window9y=lookup_widget(objet_graphique,"window9y");
gtk_widget_show(window7y);
gtk_widget_hide(window9y);

GtkWidget  *listeview    ;

window7y=create_window7y();	
listeview = lookup_widget(window7y,"treeview4y");
afficher_rdvy(listeview);
gtk_widget_show (window7y);
}



void
on_button26y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window9y;
GtkWidget *window1y;
window9y=lookup_widget(objet_graphique,"window9y");
window1y=create_window1y();
gtk_widget_show(window9y);
gtk_widget_hide(window1y);
}


void
on_button29y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *window9y;
GtkWidget *window10y;
window9y=lookup_widget(objet_graphique,"window9y");
window10y=create_window10y();
gtk_widget_show(window10y);
gtk_widget_hide(window9y);
}


void
on_button17y_clicked                    (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{
  char nom1[50];char prenom1[50];
 GtkWidget *combobox2y; //comobox pour la période

 GtkWidget *input10;
 GtkWidget *input11;
 GtkWidget *jour1; //spinbuttun pour le choix du jour
 GtkWidget *mois1; //spinbuttun pour le choix du mois 
GtkWidget *annee1; //spinbuttun pour le choix de l’année
Date1 d1; GtkWidget *output;int res ;
char temps1[20]; char sorti[50];

input10= lookup_widget(objet_graphique,"entry10y");
input11= lookup_widget(objet_graphique,"entry11y");
combobox2y=lookup_widget(objet_graphique, "combobox2y");
jour1=lookup_widget(objet_graphique, "spinbutton4y"); 
mois1=lookup_widget(objet_graphique, "spinbutton5y"); 
annee1=lookup_widget(objet_graphique, "spinbutton6y"); 
output=lookup_widget(objet_graphique,"label69y");

strcpy(nom1,gtk_entry_get_text(GTK_ENTRY(input10)));
strcpy(prenom1,gtk_entry_get_text(GTK_ENTRY(input11)));
d1.jour1=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour1));
d1.mois1=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois1));
d1.annee1=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee1));
strcpy(d1.temps1,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2y)));

res=verifier_rendy(d1);
if (res==1){
strcpy(sorti,"rendez-vous invalide");
}
else {
ajouter_rdvy(nom1,prenom1,d1);
strcpy(sorti,"rendez-vous ajouter");

}
gtk_label_set_text(GTK_LABEL(output),sorti);
}





void
on_treeview4y_row_activated            (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkWidget *entry1,*entry2,*entry3,*entry4,*entry5,*entry6;
GtkTreeIter iter;
GtkTreeModel *model;
gchar *string,*string1,*string2,*string3,*string4,*string5;

model=gtk_tree_view_get_model(treeview);
gtk_tree_model_get_iter(model,&iter,path);
gtk_tree_model_get(model,&iter,0,&string,-1);
gtk_tree_model_get(model,&iter,1,&string1,-1);
gtk_tree_model_get(model,&iter,2,&string2,-1);
gtk_tree_model_get(model,&iter,3,&string3,-1);
gtk_tree_model_get(model,&iter,4,&string4,-1);
gtk_tree_model_get(model,&iter,5,&string5,-1);

entry1=lookup_widget(GTK_TREE_VIEW(treeview),"entry20y");
entry2=lookup_widget(GTK_TREE_VIEW(treeview),"entry21y");
entry3=lookup_widget(GTK_TREE_VIEW(treeview),"entry22y");
entry4=lookup_widget(GTK_TREE_VIEW(treeview),"entry23y");
entry5=lookup_widget(GTK_TREE_VIEW(treeview),"entry24y");
entry6=lookup_widget(GTK_TREE_VIEW(treeview),"entry25y");

gtk_entry_set_text(GTK_ENTRY(entry1),string);
gtk_entry_set_text(GTK_ENTRY(entry2),string1);
gtk_entry_set_text(GTK_ENTRY(entry3),string2);
gtk_entry_set_text(GTK_ENTRY(entry4),string3);
gtk_entry_set_text(GTK_ENTRY(entry5),string4);
gtk_entry_set_text(GTK_ENTRY(entry6),string5);
}


void
on_button31y_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
 GtkWidget *input1,*input2,*input3,*input4,*input5,*input6;
FILE *f;FILE *f1;
char ch1[30],ch2[30];
char nom[30],jour[30],mois[30],annee[30],temps[30],prenom[30];char j[30],m[30],a[30],t[30];

input1=lookup_widget(GTK_WIDGET(button),"entry20y");
input2=lookup_widget(GTK_WIDGET(button),"entry21y");
input3=lookup_widget(GTK_WIDGET(button),"entry22y");
input4=lookup_widget(GTK_WIDGET(button),"entry23y");
input5=lookup_widget(GTK_WIDGET(button),"entry24y");
input6=lookup_widget(GTK_WIDGET(button),"entry25y");

strcpy(nom,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(jour,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(mois,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(annee,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(temps,gtk_entry_get_text(GTK_ENTRY(input6)));

f=fopen("RDV_KINE.txt","r");
f1=fopen("RDVtemp.txt","a");


if(f !=NULL){
     while(fscanf(f,"%s %s %s %s %s %s\n",ch1,ch2,j,m,a,t)!=EOF)
     {
       if((strcmp(j,jour)!=0)||(strcmp(m,mois)!=0))
    fprintf(f1,"%s %s %s %s %s %s \n",ch1,ch2,j,m,a,t);
    }
}
fclose(f);
fclose(f1);
remove("RDV_KINE.txt");
rename("RDVtemp.txt","RDV_KINE.txt");

}


void
on_button30y_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button33y_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *input1,*input2,*input3,*input4;
FILE *f4 ; FILE *f5;

char jour[30],mois[30],annee[30],temps[30] ; 
char j[30],m[30],a[30],t[30];

input1=lookup_widget(GTK_WIDGET(button),"entry40y");
input2=lookup_widget(GTK_WIDGET(button),"entry41y");
input3=lookup_widget(GTK_WIDGET(button),"entry42y");
input4=lookup_widget(GTK_WIDGET(button),"entry43y");


strcpy(jour,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(mois,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(annee,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(temps,gtk_entry_get_text(GTK_ENTRY(input4)));


f4=fopen("horairey.txt","r");
f5=fopen("horairetmp.txt","a");


if(f4 !=NULL){
     while(fscanf(f4," %s %s %s %s\n",j,m,a,t)!=EOF)
     {
       if((strcmp(j,jour)!=0)&&(strcmp(m,mois)!=0)&&(strcmp(a,annee)!=0)&&(strcmp(t,temps)!=0))
    fprintf(f5," %s %s %s %s \n",j,m,a,t);
    }
}
fclose(f4);
fprintf(f5,"%s %s %s %s\n",jour,mois,annee,temps);
fclose(f5);
remove("horairey.txt");
rename("horairetmp.txt","horairey.txt");
}


void
on_button32y_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *input1,*input2,*input3,*input4;
FILE *f;FILE *f1;
GtkWidget *window6y;


char jour[30],mois[30],annee[30],temps[30] ; char j[30],m[30],a[30],t[30];

input1=lookup_widget(GTK_WIDGET(button),"entry40y");
input2=lookup_widget(GTK_WIDGET(button),"entry41y");
input3=lookup_widget(GTK_WIDGET(button),"entry42y");
input4=lookup_widget(GTK_WIDGET(button),"entry43y");



strcpy(jour,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(mois,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(annee,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(temps,gtk_entry_get_text(GTK_ENTRY(input4)));

f=fopen("horairey.txt","r");
f1=fopen("horairetemp.txt","a");


if(f !=NULL){
     while(fscanf(f," %s %s %s %s\n",j,m,a,t)!=EOF)
     {
       if((strcmp(j,jour)!=0)||(strcmp(m,mois)!=0))
    fprintf(f1," %s %s %s %s \n",j,m,a,t);
    }
}
fclose(f);
fclose(f1);
remove("horairey.txt");
rename("horairetemp.txt","horairey.txt");

window6y=lookup_widget(button,"window6y");
window6y=create_window6y();
gtk_widget_show(window6y);
gtk_widget_hide(window6y);
}


void
on_treeview3y_row_activated            (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkWidget *entry1,*entry2,*entry3,*entry4;
GtkTreeIter iter;
GtkTreeModel *model;
gchar *string,*string1,*string2,*string3;

model=gtk_tree_view_get_model(treeview);
gtk_tree_model_get_iter(model,&iter,path);
gtk_tree_model_get(model,&iter,0,&string,-1);
gtk_tree_model_get(model,&iter,1,&string1,-1);
gtk_tree_model_get(model,&iter,2,&string2,-1);
gtk_tree_model_get(model,&iter,3,&string3,-1);


entry1=lookup_widget(GTK_TREE_VIEW(treeview),"entry40y");
entry2=lookup_widget(GTK_TREE_VIEW(treeview),"entry41y");
entry3=lookup_widget(GTK_TREE_VIEW(treeview),"entry42y");
entry4=lookup_widget(GTK_TREE_VIEW(treeview),"entry43y");


gtk_entry_set_text(GTK_ENTRY(entry1),string);
gtk_entry_set_text(GTK_ENTRY(entry2),string1);
gtk_entry_set_text(GTK_ENTRY(entry3),string2);
gtk_entry_set_text(GTK_ENTRY(entry4),string3);

}




void
on_button79_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window1;
GtkWidget *window11;
window1 = lookup_widget(button,"window1"); 

window11=create_window11();		
		gtk_widget_show (window11);
		gtk_widget_hide (window1);
}


void
on_button80_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window1y;
GtkWidget *window11;
window1y = lookup_widget(button,"window1y"); 

window11=create_window11();		
		gtk_widget_show (window11);
		gtk_widget_hide (window1y);
}

