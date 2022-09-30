# tree-sitter-twig

[Twig](https://twig.symfony.com/) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

[![Build/test](https://github.com/gbprod/tree-sitter-twig/actions/workflows/ci.yml/badge.svg)](https://github.com/gbprod/tree-sitter-twig/actions/workflows/ci.yml)

## Installation

### Neovim

As this grammar is not (yet) available throught [`nvim-treesitter`](https://github.com/nvim-treesitter/nvim-treesitter),
you must install it manualy.

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

parser_config.twig = {
    install_info = {
        url = "https://github.com/gbprod/tree-sitter-twig",
        files = { "src/parser.c" },
    },
    filetype = "twig",
    maintainers = {  "@gbprod" },
}
```

Then we need some queries for nvim-treesitter:

Edit file `~/.config/nvim/queries/twig/highlights.scm` or execute `:TSEditQueryUserAfter highlights twig`
and copy the content of [`queries/highlights.scm`](https://github.com/gbprod/tree-sitter-twig/blob/main/queries/highlights.scm).

Edit file `~/.config/nvim/queries/twig/injections.scm` or execute `:TSEditQueryUserAfter injections twig` with the content:

```scheme
(content) @html
```

Now we can install the `twig` parser via nvim-treesitter.

```vim
:TSInstall twig
```
