
/* 十进制d    八进制o   十六进制x*/


/*下面是控制字符*/
/* %d   十进制输出 */
/* %id  输出长整型数据（长整型占的字节byte和位bit多，表示的数的范围大） */
/* %md  m为指定输的宽度，如%3d占三个宽度的数字。用于调整输出的格式 */
/* %u   输出无符号整型（只能输出正数，输出负数会乱码） */
/* %c   输出一个字符 对应字符变量char a  每个字母对应一个asc码  */
        /* 数字输出%c是字母 字符‘a’输出%d是数字*/
/* %f   输出浮点型数包括float单精度 double双精度 longdouble长双精度 */
        /* 超过六位四舍五入 */
/* %.mf 输出浮点型保留m位小数，注意m前有个. */
/* %o   以八进制输出*/
/* %s   输出字符串 */
/* %x   以十六进制输出，很重要！！！！！！*/





/*下面是标识符,在ducfsx前加的，如%-d %+x %#o */
/* -     结果左对齐，右边填空格  */
/* +     输出符号（正或负）      */
/* 空格  输出正值冠空格 输出负值冠负号 */
/* #（念sharp） 对c,s,d,u类无影响 对o(八进制)类输出加前缀O 对x(十六进制)类加前缀Ox 对e,g,f有小数点时给出小数点 */
