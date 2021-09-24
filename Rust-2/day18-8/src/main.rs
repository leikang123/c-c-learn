/*消息传递
Rust 中一个实现消息传递并发的主要工具是通道（channel），通道有两部分组成，一个发送者（transmitter）和一个接收者（receiver）。
std::sync::mpsc 包含了消息传递的方法：
实例

 */
use std::thread;
use std::sync::mpsc;

fn main() {
    // 通道建立
    let (tx, rx) = mpsc::channel();

    thread::spawn(move || {
        let val = String::from("hi");
        tx.send(val).unwrap();
    });

    let received = rx.recv().unwrap();
    println!("Got: {}", received);
}
