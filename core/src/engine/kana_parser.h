﻿#pragma once

#include <map>
#include <string>
#include <vector>

#include "model.h"

namespace voicevox::core::engine {
const int LOOP_LIMIT = 300;
const std::string UNVOICE_SYMBOL = "_";
const std::string ACCENT_SYMBOL = "'";
const std::string NOPAUSE_DELIMITER = "/";
const std::string PAUSE_DELIMITER = "、";
const std::string WIDE_INTERROGATION_MARK = "？";

static const std::map<std::string, MoraModel> text2mora_with_unvoice();

template <typename N>
std::string extract_one_character(const std::string& text, N pos, N* size);

AccentPhraseModel text_to_accent_phrase(std::string phrase);
std::vector<AccentPhraseModel> parse_kana(std::string text);
std::string create_kana(std::vector<AccentPhraseModel> accent_phrases);
}  // namespace voicevox::core::engine
