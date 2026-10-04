{
  description = "solutions repository";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-26.05";
  };

  outputs =
    {
      self,
      nixpkgs,
    }:
    let
      systems = [
        "aarch64-linux"
        "x86_64-linux"
      ];
      forAllSystems =
        f:
        nixpkgs.lib.genAttrs systems (
          system:
          f {
            pkgs = import nixpkgs {
              inherit system;
            };
          }
        );
    in
    {
      formatter.x86_64-linux = nixpkgs.legacyPackages.x86_64-linux.nixfmt;
      devShells = forAllSystems (
        { pkgs }: {
          default = pkgs.mkShell {
            stdenv = pkgs.clangStdenv;
            packages = with pkgs; [
              clang-tools
            ];
          };
        }
      );
    };
}
