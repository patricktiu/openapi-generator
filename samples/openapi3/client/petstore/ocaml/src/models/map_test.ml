(*
 * This file has been generated by the OCamlClientCodegen generator for openapi-generator.
 *
 * Generated by: https://openapi-generator.tech
 *
 *)

type t = {
    map_map_of_string: (string * (string * string) list) list;
        map_of_enum_string: (string * Enums.map_of_enum_string) list;
    direct_map: (string * bool) list;
    indirect_map: (string * bool) list;
} [@@deriving yojson { strict = false }, show ];;

let create () : t = {
    map_map_of_string = [];
    map_of_enum_string = [];
    direct_map = [];
    indirect_map = [];
}

