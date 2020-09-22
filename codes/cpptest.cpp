// cpptest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "vector.h"

void test_vector();


int main()
{
    test_vector();
    //std::cout << "Hello World!\n";
}

#pragma region vector测试

void test_vector()
{
   

    using namespace std;
    using namespace lmath;

    cout << "===========  构造   ===================" << endl;
    Vector3 v1(1.0);
    Vector3 v2(1.0, 3.0);
    Vector3 v3(2.0, 5.0, 8.0);
    cout << "v1(" << v1.x << "," << v1.y << "," << v1.z << ")" << endl;
    cout << "v2(" << v2.x << "," << v2.y << "," << v2.z << ")" << endl;
    cout << "v3(" << v3.x << ","<<v3.y << "," << v3.z << ")" << endl;
    cout << "=====================================" << endl;

    cout << "===========  引用构造   ===================" << endl;
    Vector3 v4 = Vector3(v1);
    Vector3 v5 = Vector3(v2);
    Vector3 v6 = Vector3(v3);
    cout << "v4(" << v4.x << "," << v4.y << "," << v4.z << ")" << endl;
    cout << "v5(" << v5.x << "," << v5.y << "," << v5.z << ")" << endl;
    cout << "v6(" << v6.x << "," << v6.y << "," << v6.z << ")" << endl;
    cout << "=====================================" << endl;

    v4.x = 7;
    v4.y = 9;
    v4.z = 11;

    cout << "===========  运算符   ===================" << endl;
    cout << "===========  运算符 1. 取反  ============" << endl;
    Vector3 v7 = -v1;
    Vector3 v8 = -v2;
    Vector3 v9 = -v3;
    cout << "v7 = -v1 = (" << v7.x << "," << v7.y << "," << v7.z << ")" << endl;
    cout << "v8 = -v2 = (" << v8.x << "," << v8.y << "," << v8.z << ")" << endl;
    cout << "v9 = -v3 = (" << v9.x << "," << v9.y << "," << v9.z << ")" << endl;
    
    cout << "===========  运算符 2. 相加  ============" << endl;
    Vector3 v10 = v4 + v1;
    Vector3 v11 = v5 + v2;
    Vector3 v12 = v6 + v3;
    cout << "v10 = v4 + v1 (" << v10.x << "," << v10.y << "," << v10.z << ")" << endl;
    cout << "v11 = v5 + v2(" << v11.x << "," << v11.y << "," << v11.z << ")" << endl;
    cout << "v12 = v6 + v3(" << v12.x << "," << v12.y << "," << v12.z << ")" << endl;

    cout << "===========  运算符 3. 相减  ============" << endl;
    Vector3 v13 = v4 - v1;
    Vector3 v14 = v5 - v2;
    Vector3 v15 = v6 - v3;
    cout << "v13 = v4 - v1 (" << v13.x << "," << v13.y << "," << v13.z << ")" << endl;
    cout << "v14 = v5 - v2(" << v14.x << "," << v14.y << "," << v14.z << ")" << endl;
    cout << "v15 = v6 - v3(" << v15.x << "," << v15.y << "," << v15.z << ")" << endl;

    cout << "===========  运算符 4. 相乘(标量)  ==========" << endl;
    Vector3 v16 = v4 * 10;
    Vector3 v17 = v5 * 10;
    Vector3 v18 = v6 * 10;
    cout << "v16 = v4 * 10 (" << v16.x << "," << v16.y << "," << v16.z << ")" << endl;
    cout << "v17 = v5 * 10(" << v17.x << "," << v17.y << "," << v17.z << ")" << endl;
    cout << "v18 = v6 * 10(" << v18.x << "," << v18.y << "," << v18.z << ")" << endl;

    cout << "===========  运算符 5. 相除(标量)  ============" << endl;
    Vector3 v19 = v4 / 10;
    Vector3 v20 = v5 / 10;
    Vector3 v21 = v6 / 11;
    cout << "v19 = v4 / 10 (" << v19.x << "," << v19.y << "," << v19.z << ")" << endl;
    cout << "v20 = v5 / 10(" << v20.x << "," << v20.y << "," << v20.z << ")" << endl;
    cout << "v21 = v6 / 10(" << v21.x << "," << v21.y << "," << v21.z << ")" << endl;

    cout << "===========  运算符 6. +=  ============" << endl;
    Vector3 v22 = v4 += v1;
    Vector3 v23 = v5 += v2;
    Vector3 v24 = v6 += v3;
    cout << "v22 = v4 += v1 (" << v22.x << "," << v22.y << "," << v22.z << ")" << endl;
    cout << "v23 = v5 += v2(" << v23.x << "," << v23.y << "," << v23.z << ")" << endl;
    cout << "v24 = v6 += v3(" << v24.x << "," << v24.y << "," << v24.z << ")" << endl;

    cout << "===========  运算符 7. -=  ============" << endl;
    Vector3 v25 = v4 -= v1;
    Vector3 v26 = v5 -= v2;
    Vector3 v27 = v6 -= v3;
    cout << "v25 = v4 -= v1 (" << v25.x << "," << v25.y << "," << v25.z << ")" << endl;
    cout << "v26 = v5 -= v2(" << v26.x << "," << v26.y << "," << v26.z << ")" << endl;
    cout << "v27 = v6 -= v3(" << v27.x << "," << v27.y << "," << v27.z << ")" << endl;


    cout << "===========  运算符 8. *=  ============" << endl;
    Vector3 v28 = v4 *= 10;
    Vector3 v29 = v5 *= 10;
    Vector3 v30 = v6 *= 10;
    cout << "v28 = v4 += 10 (" << v28.x << "," << v28.y << "," << v28.z << ")" << endl;
    cout << "v29 = v5 += 10(" << v29.x << "," << v29.y << "," << v29.z << ")" << endl;
    cout << "v30 = v6 += 10(" << v30.x << "," << v30.y << "," << v30.z << ")" << endl;

    cout << "===========  运算符 9. /=  ============" << endl;
    Vector3 v31 = v4 /= 10;
    Vector3 v32 = v5 /= 10;
    Vector3 v33 = v6 /= 10;
    cout << "v31 = v4 /= 10 (" << v31.x << "," << v31.y << "," << v31.z << ")" << endl;
    cout << "v32 = v5 /= 10(" << v32.x << "," << v32.y << "," << v32.z << ")" << endl;
    cout << "v33 = v6 /= 10(" << v33.x << "," << v33.y << "," << v33.z << ")" << endl;

    cout << "===========  运算符 10. 点乘  ============" << endl;
    Vector3 v34 = v4 * v1;
    Vector3 v35 = v5 * v2;
    Vector3 v36 = v6 * v3;
    cout << "v34 = v4 * v1 (" << v34.x << "," << v34.y << "," << v34.z << ")" << endl;
    cout << "v35 = v5 * v2(" << v35.x << "," << v35.y << "," << v35.z << ")" << endl;
    cout << "v36 = v6 * v3(" << v36.x << "," << v36.y << "," << v36.z << ")" << endl;

    cout << "===========  运算符 11. magnitude  ============" << endl;
    Vector3 v37 = Vector3(v3);
    Vector3 v38 = Vector3(v4);
    Vector3 v39 = Vector3(v5);

    cout << "v37== Vector3(v3).magnitude (" << magnitude(v37) << ")" << endl;
    cout << "v38 == Vector3(v4).magnitude(" << magnitude(v38) << ")" << endl;
    cout << "v39 == Vector3(v5).magnitude(" << magnitude(v39) << ")" << endl;

    cout << "===========  运算符 12. Cross  ============" << endl;
    Vector3 v40 = Cross(v4 , v1);
    Vector3 v41 = Cross(v5, v2);
    Vector3 v42 = Cross(v6, v3);
    cout << "v40 =Cross(v4 , v1) (" << v40.x << "," << v40.y << "," << v40.z << ")" << endl;
    cout << "v41 = Cross(v5, v2)(" << v41.x << "," << v41.y << "," << v41.z << ")" << endl;
    cout << "v42 = Cross(v6, v3)(" << v42.x << "," << v42.y << "," << v42.z << ")" << endl;

    cout << "===========  运算符 137. distance  ============" << endl;
    float v43 = distance(v3, v1);
    float v44 = distance(v4, v2);
    float v45 = distance(v5, v3);

    cout << "v37 = (v3 v1).distance (" << v43 << ")" << endl;
    cout << "v38 = (v4 v2).distance (" << v44 << ")" << endl;
    cout << "v39 = (v5 v3).distance (" << v45 << ")" << endl;
    cout << "=====================================" << endl;
}

#pragma endregion
