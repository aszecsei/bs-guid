# bs-guid

Simple, fast generation of [RFC4122](http://www.ietf.org/rfc/rfc4122.txt) UUIDs for Reason.

bs-guid is a statically typed interface to [node-uuid](https://github.com/kelektiv/node-uuid).

## Installation

```sh
yarn add bs-guid
```

In your `bsconfig.json`, include `"bs-guid"` in the `bs-dependencies`.

## Usage



### Version 1 (timestamp)

```reason
let uuidv1 = Uuid.V1.uuidv1();
```

### Version 3 (namespace)

```reason
/* ...using predefined DNS namespace */
let uuidv3_1 = Uuid.V3.uuidv3("hello.example.com", Uuid.DNS);

/* ...using predefined URL namespace */
let uuidv3_2 = Uuid.V3.uuidv3("http://example.com/hello", Uuid.URL);

/* ...using a custom namespace */
let namespace = "1b671a64-40d5-491e-99b0-da01ff1f3341";
let uuidv3_3 = Uuid.V3.uuidv3("Hello, world!", Uuid.Custom(namespace));
```

### Version 4 (random)
```reason
let uuidv4 = Uuid.V4.uuidv4();
```

### Version 5 (namespace)

```reason
/* ...using predefined DNS namespace */
let uuidv5_1 = Uuid.V5.uuidv5("hello.example.com", Uuid.DNS);

/* ...using predefined URL namespace */
let uuidv5_2 = Uuid.V5.uuidv5("http://example.com/hello", Uuid.URL);

/* ...using a custom namespace */
let namespace = "1b671a64-40d5-491e-99b0-da01ff1f3341";
let uuidv5_3 = Uuid.V5.uuidv5("Hello, world!", Uuid.Custom(namespace)));
```

## Development

```sh
yarn run start
```