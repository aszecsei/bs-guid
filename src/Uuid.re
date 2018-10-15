type namespaces =
  | DNS
  | URL
  | Custom(string);

module V1 = {
  [@bs.module] external ex_uuidv1 : unit => string = "uuid/v1";
  let uuidv1 = ex_uuidv1;
}

module V3 = {
  [@bs.module] external ex_uuidv3 : string => string => string = "uuid/v3";
  [@bs.module "uuid/v3"] external ex_dns : string = "DNS";
  [@bs.module "uuid/v3"] external ex_url : string = "URL";
  let uuidv3 = (value, namespace) => switch (namespace) {
  | DNS => ex_uuidv3(value, ex_dns)
  | URL => ex_uuidv3(value, ex_url)
  | Custom(guid) => ex_uuidv3(value, guid)
  };
}

module V4 = {
  [@bs.module] external ex_uuidv4 : unit => string = "uuid/v4";
  let uuidv4 = ex_uuidv4;
}

module V5 = {
  [@bs.module] external ex_uuidv5 : string => string => string = "uuid/v5";
  [@bs.module "uuid/v5"] external ex_dns : string = "DNS";
  [@bs.module "uuid/v5"] external ex_url : string = "URL";
  let uuidv5 = (value, namespace) => switch (namespace) {
  | DNS => ex_uuidv5(value, ex_dns)
  | URL => ex_uuidv5(value, ex_url)
  | Custom(guid) => ex_uuidv5(value, guid)
  };
}