import java.io.*;
import java.util.*;
import java.math.BigInteger;
class Main{
  public static void main(String[] args) throws Exception{
    BufferedReader br = new BufferedReader(
    new InputStreamReader(System.in));
    PrintWriter pw = new PrintWriter(
    new BufferedWriter(new OutputStreamWriter(System.out)));
    String line;
    while((line = br.readLine())!=null){
      StringTokenizer st = new StringTokenizer(line);
      BigInteger max_mult = new BigInteger("1");
      BigInteger min_mult = new BigInteger("1");
      BigInteger result = new BigInteger("-999999");
      BigInteger n;
      while((n=BigInteger.valueOf(Integer.parseInt(st.nextToken())))!=null&&!n.equals(new BigInteger("-999999"))){
        BigInteger maxAux = new BigInteger(max_mult.toString());
        max_mult = max_mult.multiply(n);
        max_mult = max_mult.max(n);
        max_mult = max_mult.max(min_mult.multiply(n));
        min_mult = min_mult.multiply(n);
        min_mult = min_mult.min(n);
        min_mult = min_mult.min(maxAux.multiply(n));
        result = result.max(max_mult);
      }
      pw.printf(result.toString()+"\n");
    }
    pw.close();
  }
}
