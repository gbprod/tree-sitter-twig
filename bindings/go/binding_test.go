package tree_sitter_twig_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-twig"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_twig.Language())
	if language == nil {
		t.Errorf("Error loading Twig grammar")
	}
}
