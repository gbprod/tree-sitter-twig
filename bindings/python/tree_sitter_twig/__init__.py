"Twig grammar for tree-sitter"

from . import _binding
from tree_sitter import Language

def language() -> Language:
    return Language(_binding.language())

__all__ = ["language"]
