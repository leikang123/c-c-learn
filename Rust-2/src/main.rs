fn main() {
    let v = vec![1, 2, 4, 8];
    println!("{}", match v.get(2) {
        Some(value) => value.to_string(),
        None => "None".to_string()
    });
}