package tree_sitter_twig_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_twig "github.com/tree-sitter/tree-sitter-twig/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_twig.Language())
	if language == nil {
		t.Errorf("Error loading Twig grammar")
	}
}
