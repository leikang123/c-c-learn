use std::thread;

fn main() {
    let s = "hello";

    let handle = thread::spawn(move || {
        println!("{}", s);
    });

    handle.join().unwrap();
}