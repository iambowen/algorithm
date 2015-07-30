// http://www.spoj.com/problems/TEST/

import scala.io.StdIn._
import scala.util.control.Breaks._

object Main extends App {
  def main() {
    // var a = readLine
    // while(a.toInt != 42){
    //   println(a)
    //   a = readLine
    // }

    // while((var a = readLine).toInt != 42){
    //   println(a)
    // }

     Iterator.continually(readLine).takeWhile(_ != "42").foreach(println)
  }
  main
}
