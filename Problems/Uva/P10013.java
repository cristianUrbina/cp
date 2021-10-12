// https://onlinejudge.org/external/100/10013.pdf
import java.io.*;
import java.util.*;
import java.math.BigInteger;
class P10013{
  public static void main(String[] args) throws Exception{
    BufferedReader br = new BufferedReader(
    new InputStreamReader(System.in));
    PrintWriter pw = new PrintWriter(
    new BufferedWriter(new OutputStreamWriter(System.out)));
    StringTokenizer st = new StringTokenizer(br.readLine());
    int n = Integer.parseInt(st.nextToken());
    while(n-->0){
      st = new StringTokenizer(br.readLine());
      st = new StringTokenizer(br.readLine());
      int m = Integer.parseInt(st.nextToken());
      String as="",bs="";
      char aChar,bChar;
      while(m-->0){
        st = new StringTokenizer(br.readLine());
        aChar = st.nextToken().charAt(0);
        bChar = st.nextToken().charAt(0);
        as+=aChar;
        bs+=bChar;
      }
      BigInteger a = new BigInteger(as);
      BigInteger b = new BigInteger(bs);
      pw.printf(a.add(b).toString()+"\n");
      if(n>0)pw.printf("\n");
    }
    pw.close();
  }
}
