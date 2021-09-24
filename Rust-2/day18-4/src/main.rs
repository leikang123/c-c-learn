use std::thread;
use std::time::Duration;

/*fn spawn_function() {
    for i in 0..5 {
        println!("spawned thread print {}", i);
        thread::sleep(Duration::from_millis(1));
    }
}

 */

fn main() {
    // 定义spawn线程
    thread::spawn(||{
    for i in 0..3 {
        println!("spawn thread print {}", i);
        thread::sleep(Duration::from_millis(1));
    }
    });
    // 主线程
    for i in 0 .. 3{
        println!("main thread print {}",i);
        thread::sleep(Duration::from_millis(1));
    }
}