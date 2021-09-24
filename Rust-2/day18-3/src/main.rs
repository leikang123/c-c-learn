// "类"往往是面向对象的编程语言中常用到的概念。"类"封装的是数据，是对同一类数据实体以及其处理方法的抽象。
// 在 Rust 中，我们可以使用结构体或枚举类来实现类的功能：
// 定义结构体类
/*pub struct ClassName {
    pub field: Type,
}
// 定义实现结构体
pub impl ClassName {
    // 方法函数
    fn some_method(&self) {
        // 方法函数体
    }
}
// 枚举类
pub enum EnumName {
    // 枚举的种类
    A,
    B,
}
// 实现枚举类
pub impl EnumName {
    // 枚举方法体
    fn some_method(&self) {

    }
}

 */

second::rs;
pub struct ClassName {
    field: i32,
}

impl ClassName {
    pub fn new(value: i32) -> ClassName {
        ClassName {
            field: value
        }
    }

    pub fn public_method(&self) {
        println!("from public method");
        self.private_method();
    }

    fn private_method(&self) {
        println!("from private method");
    }
}
mod second;
use second::ClassName;

fn main() {
    let object = ClassName::new(1024);
    object.public_method();
}