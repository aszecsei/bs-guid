/* v1 */
let uuidv1 = Uuid.V1.uuidv1();
Js.log(uuidv1);

/* ...v3 using predefined DNS namespace */
let uuidv3_1 = Uuid.V3.uuidv3("hello.example.com", Uuid.DNS);
Js.log(uuidv3_1);

/* ...v3 using predefined URL namespace */
let uuidv3_2 = Uuid.V3.uuidv3("http://example.com/hello", Uuid.URL);
Js.log(uuidv3_2);

/* ...v3 using a custom namespace */
let namespace1 = "1b671a64-40d5-491e-99b0-da01ff1f3341";
let uuidv3_3 = Uuid.V3.uuidv3("Hello, world!", Uuid.Custom(namespace1));
Js.log(uuidv3_3);

/* v4 */
let uuidv4 = Uuid.V4.uuidv4();
Js.log(uuidv4);

/* ...v5 using predefined DNS namespace */
let uuidv5_1 = Uuid.V5.uuidv5("hello.example.com", Uuid.DNS);
Js.log(uuidv5_1);

/* ...v5 using predefined URL namespace */
let uuidv5_2 = Uuid.V5.uuidv5("http://example.com/hello", Uuid.URL);
Js.log(uuidv5_2);

/* ...v5 using a custom namespace */
let namespace2 = "1b671a64-40d5-491e-99b0-da01ff1f3341";
let uuidv5_3 = Uuid.V5.uuidv5("Hello, world!", Uuid.Custom(namespace2));
Js.log(uuidv5_3);