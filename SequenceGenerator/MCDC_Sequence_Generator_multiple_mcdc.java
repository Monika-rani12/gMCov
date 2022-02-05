/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
//package sjg_project;
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class MCDC_Sequence_Generator_multiple_mcdc{
    public static void main(String[] args) throws IOException {
    	String fileName = "";
    	if (args.length > 0) {
    		fileName = args[0];
    	}else{
	        System.err.println("File name not provided!");
	        System.exit(1);
    	}
         BufferedReader fpReadPredicate1 = null;
        try {
            //---------enter the c file name to generate the conditions and prediactes
            //fpReadPredicate1 = new BufferedReader(new FileReader("nsichneu.c"));
            fpReadPredicate1 = new BufferedReader(new FileReader(fileName));
            String r=fpReadPredicate1.readLine();
            PrintWriter out_cp=new PrintWriter("exp/Condition_And_Predicates.txt");
            while(r!=null){
            //if((!r.contains("#")&&!r.contains("//"))&&(r.contains(" if(")||r.contains(" if (")||r.contains(" while(")||r.contains(" while (")||r.contains(" for(")||r.contains(" for (")||r.contains("<=")||r.contains("==")||r.contains(">=")||r.contains("!=")||r.contains("<")||r.contains(">")||r.contains("&&")||r.contains("||"))){
            if((!r.contains("#")&&!r.contains("//")&&!r.contains("<<")&&!r.contains("'>'")&&!r.contains("'<'")&&!r.contains(">>"))&&(((r.contains(" if(")||r.contains(" if (")||r.contains("    if (")||r.contains(" while(")||r.contains(" while (")||r.contains(" while(")||r.contains("while(1)")||r.contains("while(0)")||r.contains(" for(")||r.contains(" for (")||r.contains("   for (")))||((r.contains("<=")||r.contains("==")||r.contains(">=")||r.contains("!=")||r.contains("<")||r.contains(">")||r.contains("&&")||r.contains("||"))))){
            
            if(r.contains(" for(")||r.contains(" for (")||r.contains("  for (")){
            int k1_f=r.indexOf(';');
            int k2_f=r.lastIndexOf(';');
            r=r.substring(k1_f + 1, k2_f);
            r="("+r+")";
            }
            r=r.trim();
            int p1=r.indexOf('(');
            int p2=r.lastIndexOf(')');
            r=r.substring(p1, p2+1);
            r=r.replace(" ", "");
            out_cp.println(r);
	    //System.out.println("*********************"+r);
            out_cp.flush();
            }
            r=fpReadPredicate1.readLine();
            }
          //--------------------------------------------------------

          //---------------Creating a java file corresponding to every predicate in order to evalaute the truth values with the dont care items.
           

        } catch (FileNotFoundException ex) {
            Logger.getLogger(MCDC_Sequence_Generator_multiple_mcdc.class.getName()).log(Level.SEVERE, null, ex);
        }

    }
}


















