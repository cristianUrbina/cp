import java.io.*;
import java.util.*;
import java.math.BigInteger;

class Main{
  static BigInteger f(int n){
    if(n==1) return BigInteger.ZERO;
    if(n==2) return BigInteger.ONE;
    BigInteger two = new BigInteger("2");
    two = two.pow(n-3);
    two = two.add(f(n-2));
    return two;
  }
  public static void main(String[] args) throws Exception{
    BufferedReader br = new BufferedReader(      // use BufferedReader
      new InputStreamReader(System.in));
    PrintWriter pw = new PrintWriter(            // and PrintWriter
      new BufferedWriter(new OutputStreamWriter(System.out))); // = fast IO
    while(true){
      try{
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        BigInteger result = f(n);
        pw.printf(result.toString()+"\n");
      }
      catch (NullPointerException e){
        break;
      }
    }
    pw.close();
  }
}
