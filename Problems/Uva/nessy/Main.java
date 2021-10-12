// import java.util.*;
// import java.io.*;
// class Main{
//   public static void main(String args[])throws IOException{
//     Main myWork = new Main();
//     myWork.Begin();
//   }
//   void Begin()throws IOException{
//     BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//     StringTokenizer st = new StringTokenizer(br.readLine());
//     // int n = Integer.parseInt(st.nextToken());
//     // int k = Integer.parseInt(st.nextToken());
//     Scanner entrada = new Scanner(System.in);
//     int n,m,t;
//     t = Integer.parseInt(st.nextToken());
//     while(t-->0){
//       n = Integer.parseInt(st.nextToken());
//       m = Integer.parseInt(st.nextToken());
//       // n = entrada.nextInt();
//       // m = entrada.nextInt();
//       int beams = (int)Math.ceil((m-2)/3.0)*(int)Math.ceil((n-2)/3.0);
//       System.out.println(beams);
//     }
//   }
// }

// AC
// https://onlinejudge.org/external/110/11044.pdf
// import java.util.*;
// import java.math.*;
// class Main {
// 	public static void main(String[] args) {
// 		Scanner sc = new Scanner(System.in);
//     int n,m,t;
//     t = sc.nextInt();
//     while(t-->0){
//       n = sc.nextInt();
//       m = sc.nextInt();
//       int beams = (int)Math.ceil((m-2)/3.0)*(int)Math.ceil((n-2)/3.0);
//       System.out.println(beams);
//     }
// 	}
// }

// test
// import java.util.*;
// import java.math.*;
// import java.io.*;
//
// class Main{
//
//   static String ReadLn (int maxLg)  // utility function to read from stdin
//     {
//         byte lin[] = new byte [maxLg];
//         int lg = 0, car = -1;
//         String line = "";
//
//         try
//         {
//             while (lg < maxLg)
//             {
//                 car = System.in.read();
//                 if ((car < 0) || (car == '\n')) break;
//                 lin [lg++] += car;
//             }
//         }
//         catch (IOException e)
//         {
//             return (null);
//         }
//
//         if ((car < 0) && (lg == 0)) return (null);  // eof
//         return (new String (lin, 0, lg));
//     }
//
//   public static void main(String[] args){
//     Main myWork = new Main();
//     myWork.Begin();
//   }
//
//   void Begin(){
//     StringTokenizer st = new StringTokenizer(Main.ReadLn(255));
//     int n,m,t;
//     t = Integer.parseInt(st.nextToken());
//     while(t-->0){
//       st = new StringTokenizer(Main.ReadLn(255));
//       n = Integer.parseInt(st.nextToken());
//       m = Integer.parseInt(st.nextToken());
//       int beams = (int)Math.ceil((m-2)/3.0)*(int)Math.ceil((n-2)/3.0);
//       System.out.println(beams);
//     }
//   }
// }

import java.util.*;

class Main {
		public static int howSonar(int n, int m) {
			int sonars;
			int x_axis, y_axis;

			if((n-2)%3!=0) {
				x_axis=(n-2)/3+1;
			}
			else
				x_axis=(n-2)/3;

			if((m-2)%3!=0) {
				y_axis=(m-2)/3+1;
			}
			else
				y_axis=(m-2)/3;
			sonars=x_axis*y_axis;
			return sonars;
		}

		 public static void main(String args[]) {
			 Scanner lectura;
			 lectura= new Scanner(System.in);
			 int a,n,m;
			 a=lectura.nextInt();
			 for(int i=0; i<a; i++) {
				 n=lectura.nextInt();
				 m=lectura.nextInt();
				 System.out.println(howSonar(n,m));
			 }
			 lectura.close();
		 }

	}
