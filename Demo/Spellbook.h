#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include <string>

/// <summary>
/// Demo used to highlight unique vs raw vs shared ptr
/// </summary>
class Spell {
public:
    Spell(const std::string& name) : name(name) {}
    const std::string& GetName() const { return name; }
private:
    std::string name;
};

class SpellBook {
public:
    void AddRawSpell(const std::string& spellName);             
    void AddUniqueSpell(const std::string& spellName);
    void AddSharedSpell(const std::string& spellName);

    void DeleteRawSpell(); // Demonstrates dangling pointer risk
    void DeleteSharedSpell(); // Demonstrates reference counting with shared_ptr

    void ViewSpells() const;

private:
    // Raw pointer list
    Spell* rawSpell = nullptr; // For demo purposes, we’ll limit it to one raw spell

    // Unique pointer list
    std::vector<std::unique_ptr<Spell>> uniqueSpells;

    // Shared pointer list
    std::vector<std::shared_ptr<Spell>> sharedSpells;
};

