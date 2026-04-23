import java.util.*

fun main() {
    Scanner(System.`in`).nextLine().split(' ').run {
        println(Integer.parseInt(get(0)) - Integer.parseInt(get(1)))
    }
}