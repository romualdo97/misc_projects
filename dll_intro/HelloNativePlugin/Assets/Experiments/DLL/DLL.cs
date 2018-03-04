using UnityEngine;
using System.Runtime.InteropServices;
using System;

public class DLL : MonoBehaviour
{

    // Straight From the c++ Dll (unmanaged)
    [DllImport("TestDLL", EntryPoint = "TestDivide")]
    public static extern float StraightFromDllTestDivide(float a, float b);

    [DllImport("TestDLL", EntryPoint = "TestSort")]
    public static extern void SortDLL(int [] a, int length);

    [DllImport("HelloWorldDLL", EntryPoint = "sayHello")]
    public static extern float say_hello();

    public int[] a;

    // Use this for initialization
    void Start()
    {
        SortDLL(a, a.Length);

        float greet = 97.0f;
        Debug.Log(greet);
        greet = say_hello();
        Debug.Log(greet);

        //Debug.Log(hello().ToString());

        /* */
        // Call the C# DLL SharpMultiply function
        //float multiplyResult = TestCSharpLibrary.TestCSharpLibrary.SharpMultiply(3, 5);

        // Call the C# DLL TestDivide function which relies on the C++ DLL for this functionality
        //float divideResult = TestCSharpLibrary.TestCSharpLibrary.TestDivide(15, 3);

        /*float straightFromDllDivideResult = StraightFromDllTestDivide(20, 5);




        // Print it out to the console
       // Debug.Log(multiplyResult);
        //Debug.Log(divideResult);
        Debug.Log(straightFromDllDivideResult);

        float A = 0;
        float B = 0;
        float L = 50;
        for (int t = 0; t < L; t++)
        {

            int length = 1000000;
            int[] a = new int[length];
            int[] b = new int[length];
            for (int i = 0; i < length; i++)
                a[i] = b[i] = UnityEngine.Random.Range(-1000, 10000);




            float startA = Time.realtimeSinceStartup;
            Array.Sort(a);
            float endA = Time.realtimeSinceStartup;

            float startB = Time.realtimeSinceStartup;
            SortDLL(b, length);
            float endB = Time.realtimeSinceStartup;

            A += (endA - startA);
            B += (endB - startB);

            
        }

        Debug.Log((A/L) + "\t" + (B/L));
        */

        // Write the result into a file, so we can even see it working in a build
        //using (StreamWriter writer = new StreamWriter("debug.txt", true))
        //{
        //writer.WriteLine(multiplyResult);
        //writer.WriteLine(divideResult);
        //    writer.WriteLine(straightFromDllDivideResult);
        // }
        /* */

    }

    // Update is called once per frame
    void Update()
    {

    }
}