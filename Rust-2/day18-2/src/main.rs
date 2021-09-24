use std::collections::HashMap;

/*fn main() {
    let mut map = HashMap::new();
   // 添加元素
    map.insert("color", "red");
    map.insert("size", "10 m^2");
    map.insert("yellow","1234");
   // 遍历模式
    for i in map.iter(){
        println!("{:?}",i)
    }
}*/


fn main() {
    let mut map = HashMap::new();
    map.insert(1, "a");

    if let Some(x) = map.get_mut(&1) {
        *x = "b";
    }
}