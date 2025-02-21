#include "SpellBook.h"

// Add a raw pointer to a spell
void SpellBook::AddRawSpell(const std::string& spellName) {
    if (rawSpell) {
        std::cout << "A raw spell already exists. Deleting previous spell...\n";
        delete rawSpell; // Deleting existing raw pointer to avoid memory leak
    }
    rawSpell = new Spell(spellName);
    std::cout << "Added raw spell: " << rawSpell->GetName() << "\n";
}

// Add a unique_ptr spell, demonstrating exclusive ownership
void SpellBook::AddUniqueSpell(const std::string& spellName) {
    uniqueSpells.push_back(std::make_unique<Spell>(spellName));
    std::cout << "Added unique spell: " << spellName << "\n";
}

// Add a shared_ptr spell, allowing shared ownership or creating a new reference if it already exists
void SpellBook::AddSharedSpell(const std::string& spellName) {
    // Check if a shared spell with the same name already exists
    for (const auto& spell : sharedSpells) {
        if (spell->GetName() == spellName) {
            // If it exists, create another shared_ptr to the existing spell
            std::shared_ptr<Spell> newSpell = spell;
            std::cout << "Created another reference to existing shared spell: " << spellName
                << " (new ref count: " << newSpell.use_count() << ")\n";
            return;
        }
    }

    // Otherwise, create a new spell
    std::shared_ptr<Spell> newSpell = std::make_shared<Spell>(spellName);
    sharedSpells.push_back(newSpell);
    std::cout << "Added new shared spell: " << spellName << " (ref count: " << newSpell.use_count() << ")\n";
}

// Delete the raw pointer spell to demonstrate dangling pointers
void SpellBook::DeleteRawSpell() {
    if (rawSpell) {
        std::cout << "Deleting raw spell: " << rawSpell->GetName() << "\n";
        delete rawSpell;
        rawSpell = nullptr;
        std::cout << "Raw spell deleted. Attempting to access it now would cause undefined behavior.\n";
    }
    else {
        std::cout << "No raw spell to delete.\n";
    }
}

// Delete a shared_ptr spell to demonstrate reference counting
void SpellBook::DeleteSharedSpell() {
    if (!sharedSpells.empty()) {
        auto spell = sharedSpells.back();
        std::cout << "Deleting one reference to shared spell: " << spell->GetName()
            << " (current ref count: " << spell.use_count() << ")\n";
        sharedSpells.pop_back(); // Removes one shared_ptr reference
        std::cout << "After deletion, ref count is now: " << spell.use_count() << "\n";

        if (spell.use_count() == 0) {
            std::cout << "Shared spell " << spell->GetName() << " has been fully deleted.\n";
        }
        else {
            std::cout << "Shared spell " << spell->GetName() << " still exists in memory.\n";
        }
    }
    else {
        std::cout << "No shared spell to delete.\n";
    }
}

// View all spells across different pointer types
void SpellBook::ViewSpells() const {
    // View raw spell (checking for nullptr)
    std::cout << "Raw Spell: ";
    if (rawSpell) {
        std::cout << rawSpell->GetName() << "\n";
    }
    else {
        std::cout << "None\n";
    }

    // View unique spells
    std::cout << "Unique Spells: ";
    if (uniqueSpells.empty()) {
        std::cout << "None\n";
    }
    else {
        for (const auto& spell : uniqueSpells) {
            std::cout << spell->GetName() << " ";
        }
        std::cout << "\n";
    }

    // View shared spells, including reference count
    std::cout << "Shared Spells: ";
    if (sharedSpells.empty()) {
        std::cout << "None\n";
    }
    else {
        for (const auto& spell : sharedSpells) {
            std::cout << spell->GetName() << " (ref count: " << spell.use_count() << ") ";
        }
        std::cout << "\n";
    }
}