import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.*; 
import java.io.LineNumberReader;

/**
 *
 * @author user
 */
public class MetaJavaFileGenerator_V6{
    public static void main(String[] args) throws FileNotFoundException, IOException {

	String fileName = "";
	if (args.length > 0) {
    		fileName = args[0];
    	}else{
	        System.err.println("File name not provided!");
	        System.exit(1);
    	}

	
        BufferedReader PC=new BufferedReader(new FileReader("exp/Condition_And_Predicates.txt"));
        String r=PC.readLine();
        String predicate1 = r;
        int no_of_pred=0;
	Map<String,String> mapPredicate=new HashMap<String,String>();
        Map<String,String> mapDecisions=new HashMap<String,String>();
        
        while(r!=null){

int indexOfAnd = 0, indexOfOr = 0, count = 0;
Map<Integer,String> mapPosition=new HashMap<Integer,String>();
        while (true) {
            indexOfAnd = r.indexOf("&&", indexOfAnd);
            if (indexOfAnd != -1) {
                mapPosition.put(indexOfAnd, "&&");
                indexOfAnd += 2;
            } else {
                break;
            }
        }	
	while (true) {
            indexOfOr = r.indexOf("||", indexOfOr);
            if (indexOfOr != -1) {
                mapPosition.put(indexOfOr, "||");
                indexOfOr += 2;
            } else {
                break;
            }
        }
Map<Integer, String> sortedMapPosition = new TreeMap<Integer, String>(mapPosition);
List<Integer> sortedKeys = new ArrayList<Integer>(sortedMapPosition.keySet());	    
//Set<Integer> sortedKeys = sortedMapPosition.keySet();
	    String predicate = r;
	    String finalPredicateArray="";
	    String finalPredicateArray1="";
	    String decisionPredicate="";
	    String assertStmts1 = "";					
	   String assertStmts2 = "";
            if(r.contains("&&")||r.contains("||")){
		
            	r=r.replace("&&", "~");
            	r=r.replace("||", "~");
	    	r=r.replace("(", "");
	    	r=r.replace(")", "");
            	String p[]=r.split("~");
            	no_of_pred++;
	    	BufferedReader PC1=new BufferedReader(new FileReader("exp/predicateResults"+no_of_pred+".txt"));
	    	PrintWriter out_cp_onlyvalue=new PrintWriter("exp/meta/metaFileOfPred-"+no_of_pred+".txt");
            
            	String r1=PC1.readLine();
	    	String tVal[] = null;
		
	    	for(int n1=0;n1<p.length;n1++){
			int insertFlag = 0;
			while(r1!=null){
				String finalPredicate = "";
	        		tVal=r1.split(",");
				Integer sortedKeysIndex = -1;
				for(int n2=0;n2<tVal.length;n2++){
					if(insertFlag==0 && p[n2].contains("!")){
						p[n2] = p[n2].replace("!=","$");
						if(p[n2].contains("!")){
							p[n2] = p[n2].replace("!","!(");
							p[n2] = p[n2].replace("$","!=");
							p[n2] = p[n2]+")";
						}else
							p[n2] = p[n2].replace("$","!=");	
					}
					////System.out.println(tVal[n2]);
					//Integer mapIndex=sortedKeys.get(sortedKeysIndex);
					if(tVal[n2].equals("F")){
						
						if(sortedKeysIndex != -1){
							////System.out.println("!"+p[n2] + finalPredicate.contains(p[n2]));
                                			finalPredicate = finalPredicate + sortedMapPosition.get(sortedKeys.get(sortedKeysIndex))+ "!("+p[n2]+")";
						}else{
							
							////System.out.println("!"+p[n2] + finalPredicate.contains(p[n2]));
                                			finalPredicate = "!("+p[n2]+")";
						}
						

					}else{
						if(sortedKeysIndex != -1){
							////System.out.println(p[n2]);
			                        	finalPredicate = finalPredicate + sortedMapPosition.get(sortedKeys.get(sortedKeysIndex)) + p[n2];
						}else{
							////System.out.println(p[n2]);
			                        	finalPredicate = p[n2];
						}
					}
					
					sortedKeysIndex++;
//					if(insertFlag==0){
//					assertStmts1 = "__CPROVER_cover(("+p[n2]+") );";					
//					assertStmts2 = "__CPROVER_cover((!("+p[n2]+")) );";
//					finalPredicateArray1 = finalPredicateArray1 + assertStmts1 + "\n" +assertStmts2;
//					}
		
				}
				decisionPredicate = finalPredicate;
				finalPredicate = "__CPROVER_cover((!("+finalPredicate+")));{printf(\"FOUND at %d \\n \",__LINE__);}";
				finalPredicateArray = finalPredicateArray + "\n" +finalPredicate;	
				////System.out.println("*********************"+finalPredicate);
				out_cp_onlyvalue.println(finalPredicate);
				out_cp_onlyvalue.flush();	
				tVal=null;

				r1=PC1.readLine();
				insertFlag=1;
	
			}
			
			

	    	}
	         
	    	////System.out.println("*********************"+p.length);

            }
//            if(finalPredicateArray==""){
//					assertStmts1 = "__CPROVER_cover("+predicate+");";					
//					assertStmts2 = "__CPROVER_cover(!("+predicate+"));";
//										
//					finalPredicateArray = finalPredicateArray + "\n" +assertStmts1 + "\n" +assertStmts2;
//					}
	    //System.out.println("2*********************"+finalPredicateArray);
	    finalPredicateArray = finalPredicateArray + "\n" +finalPredicateArray1;
	    //System.out.println("1*********************"+predicate);
	    
	    
	    mapPredicate.put(predicate, finalPredicateArray);
            r=PC.readLine();

        }
	

	BufferedReader originalFile=new BufferedReader(new FileReader(fileName));
	String eachLine=originalFile.readLine();
	
	
        PrintWriter out_metaFile_V3=new PrintWriter("exp/meta/MetaWithBracesWhile-V3.c");
	////System.out.println("*********************"+mapPredicate.size());

	while(eachLine!=null){
		for(String eachPredicate : mapPredicate.keySet()){
			if(eachLine.contains(" while(")||eachLine.contains(" while (")||eachLine.contains(" while(") ||eachLine.contains("for(")||eachLine.contains(" for(")||eachLine.contains(" for (")||eachLine.contains("  for (")){
				int k1_f=eachPredicate.indexOf('(');
				int k2_f=eachPredicate.lastIndexOf(')');
				String eachPredicate1=eachPredicate.substring(1, eachPredicate.length()-1);
				////System.out.println("*********************eachPredicate "+eachPredicate1);
					if(eachLine.replaceAll("\\s+","").contains(eachPredicate1)){
						String assertStmts = mapPredicate.get(eachPredicate);
						
						eachLine=eachLine.replace(eachLine, eachLine +"\n" + assertStmts);
						
						
						int openBraces = 0;
						int closeBraces = 0;
						while(true){
							out_metaFile_V3.println(eachLine);
							out_metaFile_V3.flush();
							eachLine = originalFile.readLine();
							if(eachLine.contains("{")){
								openBraces++;
							}
							if(eachLine.contains("}")){
								if(openBraces==closeBraces)
									break;
								closeBraces++;
							}
						}
						eachLine=eachLine.replace(eachLine,assertStmts +"\n" +eachLine);

						break;
					}
					

				
			}
			
		}
		out_metaFile_V3.println(eachLine);
		out_metaFile_V3.flush();
		////System.out.println("*********************"+eachLine);
		
		eachLine = originalFile.readLine();
	}

	originalFile=new BufferedReader(new FileReader("exp/meta/MetaWithBracesWhile-V3.c"));
	eachLine=originalFile.readLine();
	
        out_metaFile_V3=new PrintWriter("exp/meta/MetaWithBraces-V4.c");
	////System.out.println("*********************"+mapPredicate.size());

	while(eachLine!=null){

		for(String eachPredicate : mapPredicate.keySet()){
			
			if(!(eachLine.contains(" while(")||eachLine.contains(" while (")||eachLine.contains(" while(") ||eachLine.contains(" for(")||eachLine.contains(" for (")||eachLine.contains("  for (") || eachLine.contains("__CPROVER_cover("))){
			String assertStmts = mapPredicate.get(eachPredicate);
			if(eachLine.replaceAll("\\s+","").contains(eachPredicate)){
				
				if(assertStmts.contains("||")){
					assertStmts=assertStmts.replace("||", "&&");
				}
				eachLine=eachLine.replace(eachLine,assertStmts +"\n" + eachLine);
				if(eachLine.contains("__CPROVER_cover(")){
					eachLine=eachLine.replace("__CPROVER_cover((!(", "if(");
					eachLine=eachLine.replace(")));{printf", "){printf");
				}
				////System.out.println("*********************eachLine1 "+eachLine);
				break;
			}
			}else  if(eachLine.contains("__CPROVER_cover(")){
				eachLine=eachLine.replace("||", "&&");
				eachLine=eachLine.replace("$", "");
//finalPredicate = "__CPROVER_cover((!("+finalPredicate+")));printf("FOUND at %d \n",__LINE__);";
				eachLine=eachLine.replace("__CPROVER_cover((!(", "if(");
				eachLine=eachLine.replace(")));{printf", "){printf");
			}
			
			
			
		}
		out_metaFile_V3.println(eachLine);
		out_metaFile_V3.flush();
		
		eachLine = originalFile.readLine();
	}
}
}
