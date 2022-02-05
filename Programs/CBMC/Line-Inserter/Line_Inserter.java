/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
//package sjg_project;
//This script is to list down the atomic conditions present in a C file. If you
//want to extract each atom in a single line then, you need to preprocess the 
//C program with CIL, so that each predicate can be break down in different lines,
//and this script can detect that atom and paste in a text file.
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.Iterator;

public class Line_Inserter {
    public static void main(String[] args) throws IOException {
    	String fileName = "";
    	if (args.length > 0) {
    		fileName = args[0];
    	}else{
	        System.err.println("File name not provided!");
	        System.exit(1);
    	}
    	 BufferedReader fpReadPredicate2 = null;
         BufferedReader fpReadPredicate1 = null;
        try {
            //---------enter the c file name to generate the conditions and prediactes
 
        //==========Computing total number of Guards present in C program=================            
            fpReadPredicate2 = new BufferedReader(new FileReader(fileName));
            String r2=fpReadPredicate2.readLine();
            PrintWriter out_cp2=new PrintWriter("List_of_guards.txt");
            int totalGuards = 0;
            while(r2!=null){
            if((!r2.contains("#")&&!r2.contains("//")&&!r2.contains("/*")&&!r2.contains("<<")&&!r2.contains("'>'")&&!r2.contains("'<'")&&!r2.contains(">>"))&&(((r2.contains(" if(")||r2.contains(" if (")|| r2.contains("    if (") || r2.contains("if(") || r2.contains("if (") || r2.contains("} else {") || r2.contains("}else {") || r2.contains(" while(")||r2.contains(" while (")||r2.contains(" while(")||r2.contains("while(1)")||r2.contains("while(0)")||r2.contains(" for(")||r2.contains(" for (")||r2.contains("   for (")))||((r2.contains("<=")||r2.contains("==")||r2.contains(">=")||r2.contains("!=")||r2.contains("<")||r2.contains(">")||r2.contains("&&")||r2.contains("||"))))){
            
//            if(r2.contains(" for(")||r2.contains(" for (")||r2.contains("  for (")){
//            int k12_f=r2.indexOf(';');
//            int k22_f=r2.lastIndexOf(';');
//            r2=r2.substring(k12_f + 1, k22_f);
//            r2="("+r2+")";
//            }
            out_cp2.println(r2);
            totalGuards++;
            out_cp2.flush();
            }
            r2=fpReadPredicate2.readLine();
            }
       //==========Computing of total Guards End========================================
       
       //==========Creating multiple versions of C program by inserting kappa++ in each guard=======
             int i = 1;
             int j = 1;
            fpReadPredicate1 = new BufferedReader(new FileReader(fileName));
            String r=fpReadPredicate1.readLine();
            PrintWriter out_cp=new PrintWriter("PS-"+fileName);
            while(j <= totalGuards){ 
//            fpReadPredicate1 = new BufferedReader(new FileReader(fileName));
//            String r=fpReadPredicate1.readLine();
//            PrintWriter out_cp=new PrintWriter(fileName+"_"+ j +".c");            
            i=1;
            while(r!=null){
            
            if((!r.contains("#")&&!r.contains("//")&&!r.contains("/*")&&!r.contains("<<")&&!r.contains("'>'")&&!r.contains("'<'")&&!r.contains(">>"))&&(((r.contains(" if(")||r.contains(" if (")|| r.contains("    if (") || r.contains("if(") || r.contains("if (") || r.contains("} else {") || r.contains("}else {") ||r.contains(" while(")||r.contains(" while (")||r.contains(" while(")||r.contains("while(1)")||r.contains("while(0)")||r.contains(" for(")||r.contains(" for (")||r.contains("   for (")))||((r.contains("<=")||r.contains("==")||r.contains(">=")||r.contains("!=")||r.contains("<")||r.contains(">")||r.contains("&&")||r.contains("||"))))){
            
//            if(r.contains(" for(")||r.contains(" for (")||r.contains("  for (")){
//            int k1_f=r.indexOf(';');
//            int k2_f=r.lastIndexOf(';');
//            //r=r.substring(k1_f + 1, k2_f);
//            //r="("+r+")";
//            }
if(r.contains(" if(")||r.contains(" if (")|| r.contains("    if (") || r.contains("if(") || r.contains("if (") ||r.contains(" while(")||r.contains(" while (")||r.contains(" while(")||r.contains("while(1)")||r.contains("while(0)")||r.contains(" for(")||r.contains(" for (")||r.contains("   for (")){
            out_cp.println("printf(\"POINT: "+ i +"\\n\");" + "\n");
            }
            
            i++;
            
            //if(i == j)
            {
            out_cp.println(r + "\n" + "printf(\"POINT: "+ i +"\\n\");");
            

            }
            //else
            {
            //out_cp.println(r);
            }
            
            i++;
            out_cp.flush();
            }
            else
            {
            out_cp.println(r);
            out_cp.flush();
            }
            r=fpReadPredicate1.readLine();
            }
            
            j++;

            }
          //--------------------------------------------------------

        } catch (FileNotFoundException ex) {
            Logger.getLogger(Line_Inserter.class.getName()).log(Level.SEVERE, null, ex);
        }

    }
}


















