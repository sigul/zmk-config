// as found in QMK

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ < │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ' │ ì │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ è │ + │ ù │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┤
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ò │ à │      │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──────┤
 * │        │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │        │
 * ├─────┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define IT_LT LS(TILDE)  // <
#define IT_1    N1    // 1
#define IT_2    N2    // 2
#define IT_3    N3    // 3
#define IT_4    N4    // 4
#define IT_5    N5    // 5
#define IT_6    N6    // 6
#define IT_7    N7    // 7
#define IT_8    N8    // 8
#define IT_9    N9    // 9
#define IT_0    N0    // 0
#define IT_QUOT MINUS// '
#define IT_IGRV EQUAL// ì
// Row 2
#define IT_Q    Q    // Q
#define IT_W    W    // W
#define IT_E    E    // E
#define IT_R    R    // R
#define IT_T    T    // T
#define IT_Y    Y    // Y
#define IT_U    U    // U
#define IT_I    I    // I
#define IT_O    O    // O
#define IT_P    P    // P
#define IT_EGRV LBKT // è
#define IT_PLUS RBRC // +
#define IT_UGRV BSLH // ù
// Row 3
#define IT_A    A    // A
#define IT_S    S    // S
#define IT_D    D    // D
#define IT_F    F    // F
#define IT_G    G    // G
#define IT_H    H    // H
#define IT_J    J    // J
#define IT_K    K    // K
#define IT_L    L    // L
#define IT_OGRV SEMI // ò
#define IT_AGRV SQT // à
// Row 4
#define IT_BSLH NON_US_BSLH // (backslash, not physically present)
#define IT_Z    Z    // Z
#define IT_X    X    // X
#define IT_C    C    // C
#define IT_V    V    // V
#define IT_B    B    // B
#define IT_N    N    // N
#define IT_M    M    // M
#define IT_COMMA COMMA// ,
#define IT_DOT  DOT  // .
#define IT_MINUS SLASH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ > │ ! │ " │ £ │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ^ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │   │   │   │   │   │   │   │   │   │ é │ * │ § │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┤
 * │      │   │   │   │   │   │   │   │   │   │ ç │ ° │      │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──────┤
 * │        │   │   │   │   │   │   │   │ ; │ : │ _ │        │
 * ├─────┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define IT_GT TILDE // >
#define IT_EXCL LS(IT_1)    // !
#define IT_DQUO LS(IT_2)    // "
#define IT_PND  LS(IT_3)    // £
#define IT_DLLR  LS(IT_4)    // $
#define IT_PRCNT LS(IT_5)    // %
#define IT_AMPS LS(IT_6)    // &
#define IT_SLSH AMPS        // /
#define IT_LPAR LS(IT_8)    // (
#define IT_RPAR LS(IT_9)    // )
#define IT_EQUAL  LS(IT_0)    // =
#define IT_QMARK LS(IT_QUOT) // ?
#define IT_CARET LS(IT_IGRV) // ^
// Row 2
#define IT_EACU LS(IT_EGRV) // é
#define IT_ASTRK LS(IT_PLUS) // *
#define IT_SECT LS(IT_UGRV) // §
// Row 3
#define IT_LCCE LS(IT_OGRV) // ç
#define IT_DEG  LS(IT_AGRV) // °
// Row 4
#define IT_PIPE LS(IT_SLSH) // | (not physically present)
#define IT_SCLN LS(IT_COMMA) // ;
#define IT_COLN LS(IT_DOT)  // :
#define IT_UNDER LS(IT_MINUS) // _

/* Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ≤ │ « │ “ │ ‘ │ ¥ │ ~ │ ‹ │ ÷ │ ´ │ ` │ ≠ │ ¡ │ ˆ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ „ │ Ω │ € │ ® │ ™ │ Æ │ ¨ │ Œ │ Ø │ π │ [ │ ] │ ¶ │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┤
 * │      │ Å │ ß │ ∂ │ ƒ │ ∞ │ ∆ │ ª │ º │ ¬ │ @ │ # │      │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──────┤
 * │        │ ∑ │ † │ © │ √ │ ∫ │ ˜ │ µ │ … │ • │ – │        │
 * ├─────┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define IT_LTEQ LA(IT_LT) // ≤
#define IT_LDAQ LA(IT_1)    // «
#define IT_LDQU LA(IT_2)    // “
#define IT_LSQU LA(IT_3)    // ‘
#define IT_YEN  LA(IT_4)    // ¥
#define IT_TILDE LA(IT_5)    // ~
#define IT_LSAQ LA(IT_6)    // ‹
#define IT_DIV  LA(IT_7)    // ÷
#define IT_ACUT LA(IT_8)    // ´ (dead)
#define IT_DGRV LA(IT_9)    // ` (dead)
#define IT_NEQL LA(IT_0)    // ≠
#define IT_IEXL LA(IT_QUOT) // ¡
#define IT_DCIR LA(IT_IGRV) // ˆ (dead)
// Row 2
#define IT_DLQU LA(IT_Q)    // „
#define IT_OMEG LA(IT_W)    // Ω
#define IT_EURO LA(IT_E)    // €
#define IT_REGD LA(IT_R)    // ®
#define IT_TM   LA(IT_T)    // ™
#define IT_AE   LA(IT_Y)    // Æ
#define IT_DIAE LA(IT_U)    // ¨ (dead)
#define IT_OE   LA(IT_I)    // Œ
#define IT_OSTR LA(IT_O)    // Ø
#define IT_PI   LA(IT_P)    // π
#define IT_LBKT LA(IT_EGRV) // [
#define IT_RBKT LA(IT_PLUS) // ]
// Row 3
#define IT_ARNG LA(IT_A)    // Å
#define IT_SS   LA(IT_S)    // ß
#define IT_PDIF LA(IT_D)    // ∂
#define IT_FHK  LA(IT_F)    // ƒ
#define IT_INFN LA(IT_G)    // ∞
#define IT_INCR LA(IT_H)    // ∆
#define IT_FORD LA(IT_J)    // ª
#define IT_MORD LA(IT_K)    // º
#define IT_NOT  LA(IT_L)    // ¬
#define IT_AT   LA(IT_OGRV) // @
#define IT_HASH LA(IT_AGRV) // #
#define IT_PILC LA(IT_UGRV) // ¶
// Row 4
#define IT_GRAVE  LA(IT_SLSH) // ` (not physically present)
#define IT_NARS LA(IT_Z)    // ∑
#define IT_DAGG LA(IT_X)    // †
#define IT_COPY LA(IT_C)    // ©
#define IT_SQRT LA(IT_V)    // √
#define IT_INTG LA(IT_B)    // ∫
#define IT_STIL LA(IT_N)    // ˜ (dead)
#define IT_MICR LA(IT_M)    // µ
#define IT_ELLP LA(IT_COMMA) // …
#define IT_BULT LA(IT_DOT)  // •
#define IT_NDSH LA(IT_MINUS) // –

/* Shift+Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ≥ │ » │ ” │ ’ │ ¢ │ ‰ │ › │ ⁄ │  │   │ ≈ │ ¿ │ ± │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ ‚ │ À │ È │ Ì │ Ò │   │ Ù │   │   │ ∏ │ { │ } │ ◊ │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┤
 * │      │   │ ¯ │ ˘ │ ˙ │ ˚ │ ¸ │ ˝ │ ˛ │ ˇ │ Ç │ ∞ │      │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──────┤
 * │        │   │ ‡ │ Á │ É │ Í │ Ó │ Ú │   │ · │ — │        │
 * ├─────┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define IT_GTEQ LS(LA(IT_LT)) // ≥
#define IT_RDAQ LS(LA(IT_1))    // »
#define IT_RDQU LS(LA(IT_2))    // ”
#define IT_RSQU LS(LA(IT_3))    // ’
#define IT_CENT LS(LA(IT_4))    // ¢
#define IT_PERM LS(LA(IT_5))    // ‰
#define IT_RSAQ LS(LA(IT_6))    // ›
#define IT_FRSL LS(LA(IT_7))    // ⁄
#define IT_APPL LS(LA(IT_8))    //  (Apple logo)
#define IT_AEQL LS(LA(IT_0))    // ≈
#define IT_IQUE LS(LA(IT_QUOT)) // ¿
#define IT_PLMN LS(LA(IT_IGRV)) // ±
// Row 2
#define IT_SLQU LS(LA(IT_Q))    // ‚
#define IT_CAGR LS(LA(IT_W))    // À
#define IT_CEGR LS(LA(IT_E))    // È
#define IT_CIGR LS(LA(IT_R))    // Ì
#define IT_COGR LS(LA(IT_T))    // Ò
#define IT_CUGR LS(LA(IT_U))    // Ù
#define IT_NARP LS(LA(IT_P))    // ∏
#define IT_LBRC LS(LA(IT_EGRV)) // {
#define IT_RBRC LS(LA(IT_PLUS)) // }
#define IT_LOZN LS(LA(IT_UGRV)) // ◊
// Row 3
#define IT_MACR LS(LA(IT_S))    // ¯
#define IT_BREV LS(LA(IT_D))    // ˘
#define IT_DOTA LS(LA(IT_F))    // ˙
#define IT_RGNA LS(LA(IT_G))    // ˚
#define IT_CEDL LS(LA(IT_H))    // ¸
#define IT_DACU LS(LA(IT_J))    // ˝
#define IT_OGON LS(LA(IT_K))    // ˛
#define IT_CARN LS(LA(IT_L))    // ˇ
#define IT_CCCE LS(LA(IT_OGRV)) // Ç
// Row 4
#define IT_DDAG LS(LA(IT_X))    // ‡
#define IT_CAAC LS(LA(IT_C))    // Á
#define IT_CEAC LS(LA(IT_V))    // É
#define IT_CIAC LS(LA(IT_B))    // Í
#define IT_COAC LS(LA(IT_N))    // Ó
#define IT_CUAC LS(LA(IT_M))    // Ú
#define IT_MDDT LS(LA(IT_DOT))  // ·
#define IT_MDSH LS(LA(IT_MINUSS)) // —