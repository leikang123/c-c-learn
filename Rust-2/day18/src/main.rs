fn main() {
    let  mut x = vec![2,34,56,677,65,21];
       for i in &mut x {
           // 遍历完后每个数字加上1
           *i +=1;
           println!("{}",i);
       }
}
