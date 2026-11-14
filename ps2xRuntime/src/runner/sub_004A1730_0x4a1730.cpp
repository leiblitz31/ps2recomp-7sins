#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A1730
// Address: 0x4a1730 - 0x4a1980
void sub_004A1730_0x4a1730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1730_0x4a1730");
#endif

    switch (ctx->pc) {
        case 0x4a1730u: goto label_4a1730;
        case 0x4a1734u: goto label_4a1734;
        case 0x4a1738u: goto label_4a1738;
        case 0x4a173cu: goto label_4a173c;
        case 0x4a1740u: goto label_4a1740;
        case 0x4a1744u: goto label_4a1744;
        case 0x4a1748u: goto label_4a1748;
        case 0x4a174cu: goto label_4a174c;
        case 0x4a1750u: goto label_4a1750;
        case 0x4a1754u: goto label_4a1754;
        case 0x4a1758u: goto label_4a1758;
        case 0x4a175cu: goto label_4a175c;
        case 0x4a1760u: goto label_4a1760;
        case 0x4a1764u: goto label_4a1764;
        case 0x4a1768u: goto label_4a1768;
        case 0x4a176cu: goto label_4a176c;
        case 0x4a1770u: goto label_4a1770;
        case 0x4a1774u: goto label_4a1774;
        case 0x4a1778u: goto label_4a1778;
        case 0x4a177cu: goto label_4a177c;
        case 0x4a1780u: goto label_4a1780;
        case 0x4a1784u: goto label_4a1784;
        case 0x4a1788u: goto label_4a1788;
        case 0x4a178cu: goto label_4a178c;
        case 0x4a1790u: goto label_4a1790;
        case 0x4a1794u: goto label_4a1794;
        case 0x4a1798u: goto label_4a1798;
        case 0x4a179cu: goto label_4a179c;
        case 0x4a17a0u: goto label_4a17a0;
        case 0x4a17a4u: goto label_4a17a4;
        case 0x4a17a8u: goto label_4a17a8;
        case 0x4a17acu: goto label_4a17ac;
        case 0x4a17b0u: goto label_4a17b0;
        case 0x4a17b4u: goto label_4a17b4;
        case 0x4a17b8u: goto label_4a17b8;
        case 0x4a17bcu: goto label_4a17bc;
        case 0x4a17c0u: goto label_4a17c0;
        case 0x4a17c4u: goto label_4a17c4;
        case 0x4a17c8u: goto label_4a17c8;
        case 0x4a17ccu: goto label_4a17cc;
        case 0x4a17d0u: goto label_4a17d0;
        case 0x4a17d4u: goto label_4a17d4;
        case 0x4a17d8u: goto label_4a17d8;
        case 0x4a17dcu: goto label_4a17dc;
        case 0x4a17e0u: goto label_4a17e0;
        case 0x4a17e4u: goto label_4a17e4;
        case 0x4a17e8u: goto label_4a17e8;
        case 0x4a17ecu: goto label_4a17ec;
        case 0x4a17f0u: goto label_4a17f0;
        case 0x4a17f4u: goto label_4a17f4;
        case 0x4a17f8u: goto label_4a17f8;
        case 0x4a17fcu: goto label_4a17fc;
        case 0x4a1800u: goto label_4a1800;
        case 0x4a1804u: goto label_4a1804;
        case 0x4a1808u: goto label_4a1808;
        case 0x4a180cu: goto label_4a180c;
        case 0x4a1810u: goto label_4a1810;
        case 0x4a1814u: goto label_4a1814;
        case 0x4a1818u: goto label_4a1818;
        case 0x4a181cu: goto label_4a181c;
        case 0x4a1820u: goto label_4a1820;
        case 0x4a1824u: goto label_4a1824;
        case 0x4a1828u: goto label_4a1828;
        case 0x4a182cu: goto label_4a182c;
        case 0x4a1830u: goto label_4a1830;
        case 0x4a1834u: goto label_4a1834;
        case 0x4a1838u: goto label_4a1838;
        case 0x4a183cu: goto label_4a183c;
        case 0x4a1840u: goto label_4a1840;
        case 0x4a1844u: goto label_4a1844;
        case 0x4a1848u: goto label_4a1848;
        case 0x4a184cu: goto label_4a184c;
        case 0x4a1850u: goto label_4a1850;
        case 0x4a1854u: goto label_4a1854;
        case 0x4a1858u: goto label_4a1858;
        case 0x4a185cu: goto label_4a185c;
        case 0x4a1860u: goto label_4a1860;
        case 0x4a1864u: goto label_4a1864;
        case 0x4a1868u: goto label_4a1868;
        case 0x4a186cu: goto label_4a186c;
        case 0x4a1870u: goto label_4a1870;
        case 0x4a1874u: goto label_4a1874;
        case 0x4a1878u: goto label_4a1878;
        case 0x4a187cu: goto label_4a187c;
        case 0x4a1880u: goto label_4a1880;
        case 0x4a1884u: goto label_4a1884;
        case 0x4a1888u: goto label_4a1888;
        case 0x4a188cu: goto label_4a188c;
        case 0x4a1890u: goto label_4a1890;
        case 0x4a1894u: goto label_4a1894;
        case 0x4a1898u: goto label_4a1898;
        case 0x4a189cu: goto label_4a189c;
        case 0x4a18a0u: goto label_4a18a0;
        case 0x4a18a4u: goto label_4a18a4;
        case 0x4a18a8u: goto label_4a18a8;
        case 0x4a18acu: goto label_4a18ac;
        case 0x4a18b0u: goto label_4a18b0;
        case 0x4a18b4u: goto label_4a18b4;
        case 0x4a18b8u: goto label_4a18b8;
        case 0x4a18bcu: goto label_4a18bc;
        case 0x4a18c0u: goto label_4a18c0;
        case 0x4a18c4u: goto label_4a18c4;
        case 0x4a18c8u: goto label_4a18c8;
        case 0x4a18ccu: goto label_4a18cc;
        case 0x4a18d0u: goto label_4a18d0;
        case 0x4a18d4u: goto label_4a18d4;
        case 0x4a18d8u: goto label_4a18d8;
        case 0x4a18dcu: goto label_4a18dc;
        case 0x4a18e0u: goto label_4a18e0;
        case 0x4a18e4u: goto label_4a18e4;
        case 0x4a18e8u: goto label_4a18e8;
        case 0x4a18ecu: goto label_4a18ec;
        case 0x4a18f0u: goto label_4a18f0;
        case 0x4a18f4u: goto label_4a18f4;
        case 0x4a18f8u: goto label_4a18f8;
        case 0x4a18fcu: goto label_4a18fc;
        case 0x4a1900u: goto label_4a1900;
        case 0x4a1904u: goto label_4a1904;
        case 0x4a1908u: goto label_4a1908;
        case 0x4a190cu: goto label_4a190c;
        case 0x4a1910u: goto label_4a1910;
        case 0x4a1914u: goto label_4a1914;
        case 0x4a1918u: goto label_4a1918;
        case 0x4a191cu: goto label_4a191c;
        case 0x4a1920u: goto label_4a1920;
        case 0x4a1924u: goto label_4a1924;
        case 0x4a1928u: goto label_4a1928;
        case 0x4a192cu: goto label_4a192c;
        case 0x4a1930u: goto label_4a1930;
        case 0x4a1934u: goto label_4a1934;
        case 0x4a1938u: goto label_4a1938;
        case 0x4a193cu: goto label_4a193c;
        case 0x4a1940u: goto label_4a1940;
        case 0x4a1944u: goto label_4a1944;
        case 0x4a1948u: goto label_4a1948;
        case 0x4a194cu: goto label_4a194c;
        case 0x4a1950u: goto label_4a1950;
        case 0x4a1954u: goto label_4a1954;
        case 0x4a1958u: goto label_4a1958;
        case 0x4a195cu: goto label_4a195c;
        case 0x4a1960u: goto label_4a1960;
        case 0x4a1964u: goto label_4a1964;
        case 0x4a1968u: goto label_4a1968;
        case 0x4a196cu: goto label_4a196c;
        case 0x4a1970u: goto label_4a1970;
        case 0x4a1974u: goto label_4a1974;
        case 0x4a1978u: goto label_4a1978;
        case 0x4a197cu: goto label_4a197c;
        default: break;
    }

    ctx->pc = 0x4a1730u;

label_4a1730:
    // 0x4a1730: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x4a1730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_4a1734:
    // 0x4a1734: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x4a1734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_4a1738:
    // 0x4a1738: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x4a1738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_4a173c:
    // 0x4a173c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a173cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a1740:
    // 0x4a1740: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x4a1740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_4a1744:
    // 0x4a1744: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4a1744u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a1748:
    // 0x4a1748: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x4a1748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_4a174c:
    // 0x4a174c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4a174cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a1750:
    // 0x4a1750: 0xafa50074  sw          $a1, 0x74($sp)
    ctx->pc = 0x4a1750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
label_4a1754:
    // 0x4a1754: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x4a1754u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4a1758:
    // 0x4a1758: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x4a1758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_4a175c:
    // 0x4a175c: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x4a175cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_4a1760:
    // 0x4a1760: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x4a1760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_4a1764:
    // 0x4a1764: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x4a1764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_4a1768:
    // 0x4a1768: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4a1768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4a176c:
    // 0x4a176c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4a176cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4a1770:
    // 0x4a1770: 0xc12976a  jal         func_4A5DA8
label_4a1774:
    if (ctx->pc == 0x4A1774u) {
        ctx->pc = 0x4A1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1770u;
        // 0x4a1774: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1778u;
        goto label_4a1778;
    }
    ctx->pc = 0x4A1770u;
    SET_GPR_U32(ctx, 31, 0x4A1778u);
    ctx->pc = 0x4A1774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1770u;
    // 0x4a1774: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5DA8u, 0x4A1770u, 0x4A1778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1778u;
label_4a1778:
    // 0x4a1778: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_4a177c:
    if (ctx->pc == 0x4A177Cu) {
        ctx->pc = 0x4A177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1778u;
        // 0x4a177c: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1780u;
        goto label_4a1780;
    }
    ctx->pc = 0x4A1778u;
    {
        const bool branch_taken_0x4a1778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1778u;
        // 0x4a177c: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1778) {
            ctx->pc = 0x4A17B0u;
            goto label_4a17b0;
        }
    }
    ctx->pc = 0x4A1780u;
label_4a1780:
    // 0x4a1780: 0x56e00001  bnel        $s7, $zero, . + 4 + (0x1 << 2)
label_4a1784:
    if (ctx->pc == 0x4A1784u) {
        ctx->pc = 0x4A1784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1780u;
        // 0x4a1784: 0xaef40000  sw          $s4, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1788u;
        goto label_4a1788;
    }
    ctx->pc = 0x4A1780u;
    {
        const bool branch_taken_0x4a1780 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a1780) {
            ctx->pc = 0x4A1784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A1780u;
            // 0x4a1784: 0xaef40000  sw          $s4, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A1788u;
            goto label_4a1788;
        }
    }
    ctx->pc = 0x4A1788u;
label_4a1788:
    // 0x4a1788: 0x10000070  b           . + 4 + (0x70 << 2)
label_4a178c:
    if (ctx->pc == 0x4A178Cu) {
        ctx->pc = 0x4A178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1788u;
        // 0x4a178c: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1790u;
        goto label_4a1790;
    }
    ctx->pc = 0x4A1788u;
    {
        const bool branch_taken_0x4a1788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1788u;
        // 0x4a178c: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1788) {
            ctx->pc = 0x4A194Cu;
            goto label_4a194c;
        }
    }
    ctx->pc = 0x4A1790u;
label_4a1790:
    // 0x4a1790: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a1790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a1794:
    // 0x4a1794: 0x10000015  b           . + 4 + (0x15 << 2)
label_4a1798:
    if (ctx->pc == 0x4A1798u) {
        ctx->pc = 0x4A1798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1794u;
        // 0x4a1798: 0x8c560000  lw          $s6, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A179Cu;
        goto label_4a179c;
    }
    ctx->pc = 0x4A1794u;
    {
        const bool branch_taken_0x4a1794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1794u;
        // 0x4a1798: 0x8c560000  lw          $s6, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1794) {
            ctx->pc = 0x4A17ECu;
            goto label_4a17ec;
        }
    }
    ctx->pc = 0x4A179Cu;
label_4a179c:
    // 0x4a179c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a17a0:
    // 0x4a17a0: 0x10000022  b           . + 4 + (0x22 << 2)
label_4a17a4:
    if (ctx->pc == 0x4A17A4u) {
        ctx->pc = 0x4A17A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A17A0u;
        // 0x4a17a4: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A17A8u;
        goto label_4a17a8;
    }
    ctx->pc = 0x4A17A0u;
    {
        const bool branch_taken_0x4a17a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A17A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A17A0u;
        // 0x4a17a4: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a17a0) {
            ctx->pc = 0x4A182Cu;
            goto label_4a182c;
        }
    }
    ctx->pc = 0x4A17A8u;
label_4a17a8:
    // 0x4a17a8: 0x10000068  b           . + 4 + (0x68 << 2)
label_4a17ac:
    if (ctx->pc == 0x4A17ACu) {
        ctx->pc = 0x4A17ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A17A8u;
        // 0x4a17ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A17B0u;
        goto label_4a17b0;
    }
    ctx->pc = 0x4A17A8u;
    {
        const bool branch_taken_0x4a17a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A17ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A17A8u;
        // 0x4a17ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a17a8) {
            ctx->pc = 0x4A194Cu;
            goto label_4a194c;
        }
    }
    ctx->pc = 0x4A17B0u;
label_4a17b0:
    // 0x4a17b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a17b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a17b4:
    // 0x4a17b4: 0x24505f10  addiu       $s0, $v0, 0x5F10
    ctx->pc = 0x4a17b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24336));
label_4a17b8:
    // 0x4a17b8: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x4a17b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4a17bc:
    // 0x4a17bc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x4a17bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a17c0:
    // 0x4a17c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a17c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a17c4:
    // 0x4a17c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a17c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a17c8:
    // 0x4a17c8: 0xc1297fc  jal         func_4A5FF0
label_4a17cc:
    if (ctx->pc == 0x4A17CCu) {
        ctx->pc = 0x4A17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A17C8u;
        // 0x4a17cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A17D0u;
        goto label_4a17d0;
    }
    ctx->pc = 0x4A17C8u;
    SET_GPR_U32(ctx, 31, 0x4A17D0u);
    ctx->pc = 0x4A17CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A17C8u;
    // 0x4a17cc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FF0u, 0x4A17C8u, 0x4A17D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A17D0u;
label_4a17d0:
    // 0x4a17d0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_4a17d4:
    if (ctx->pc == 0x4A17D4u) {
        ctx->pc = 0x4A17D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A17D0u;
        // 0x4a17d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A17D8u;
        goto label_4a17d8;
    }
    ctx->pc = 0x4A17D0u;
    {
        const bool branch_taken_0x4a17d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A17D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A17D0u;
        // 0x4a17d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a17d0) {
            ctx->pc = 0x4A1790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1790;
        }
    }
    ctx->pc = 0x4A17D8u;
label_4a17d8:
    // 0x4a17d8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x4a17d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_4a17dc:
    // 0x4a17dc: 0x2e220033  sltiu       $v0, $s1, 0x33
    ctx->pc = 0x4a17dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_4a17e0:
    // 0x4a17e0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_4a17e4:
    if (ctx->pc == 0x4A17E4u) {
        ctx->pc = 0x4A17E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A17E0u;
        // 0x4a17e4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A17E8u;
        goto label_4a17e8;
    }
    ctx->pc = 0x4A17E0u;
    {
        const bool branch_taken_0x4a17e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A17E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A17E0u;
        // 0x4a17e4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a17e0) {
            ctx->pc = 0x4A17C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a17c0;
        }
    }
    ctx->pc = 0x4A17E8u;
label_4a17e8:
    // 0x4a17e8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4a17e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a17ec:
    // 0x4a17ec: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4a17ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_4a17f0:
    // 0x4a17f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a17f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a17f4:
    // 0x4a17f4: 0x24505f10  addiu       $s0, $v0, 0x5F10
    ctx->pc = 0x4a17f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24336));
label_4a17f8:
    // 0x4a17f8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x4a17f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a17fc:
    // 0x4a17fc: 0x0  nop
    ctx->pc = 0x4a17fcu;
    // NOP
label_4a1800:
    // 0x4a1800: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a1800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a1804:
    // 0x4a1804: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a1804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a1808:
    // 0x4a1808: 0xc1297fc  jal         func_4A5FF0
label_4a180c:
    if (ctx->pc == 0x4A180Cu) {
        ctx->pc = 0x4A180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1808u;
        // 0x4a180c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1810u;
        goto label_4a1810;
    }
    ctx->pc = 0x4A1808u;
    SET_GPR_U32(ctx, 31, 0x4A1810u);
    ctx->pc = 0x4A180Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1808u;
    // 0x4a180c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FF0u, 0x4A1808u, 0x4A1810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1810u;
label_4a1810:
    // 0x4a1810: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_4a1814:
    if (ctx->pc == 0x4A1814u) {
        ctx->pc = 0x4A1814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1810u;
        // 0x4a1814: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1818u;
        goto label_4a1818;
    }
    ctx->pc = 0x4A1810u;
    {
        const bool branch_taken_0x4a1810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1810u;
        // 0x4a1814: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1810) {
            ctx->pc = 0x4A179Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a179c;
        }
    }
    ctx->pc = 0x4A1818u;
label_4a1818:
    // 0x4a1818: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x4a1818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_4a181c:
    // 0x4a181c: 0x2e220033  sltiu       $v0, $s1, 0x33
    ctx->pc = 0x4a181cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_4a1820:
    // 0x4a1820: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_4a1824:
    if (ctx->pc == 0x4A1824u) {
        ctx->pc = 0x4A1824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1820u;
        // 0x4a1824: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1828u;
        goto label_4a1828;
    }
    ctx->pc = 0x4A1820u;
    {
        const bool branch_taken_0x4a1820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1820u;
        // 0x4a1824: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1820) {
            ctx->pc = 0x4A1800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1800;
        }
    }
    ctx->pc = 0x4A1828u;
label_4a1828:
    // 0x4a1828: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a1828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a182c:
    // 0x4a182c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a182cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4a1830:
    // 0x4a1830: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4a1830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a1834:
    // 0x4a1834: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a1834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a1838:
    // 0x4a1838: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x4a1838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4a183c:
    // 0x4a183c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4a183cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4a1840:
    // 0x4a1840: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a1840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4a1844:
    // 0x4a1844: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x4a1844u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4a1848:
    // 0x4a1848: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x4a1848u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4a184c:
    // 0x4a184c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x4a184cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a1850:
    // 0x4a1850: 0xc12849e  jal         func_4A1278
label_4a1854:
    if (ctx->pc == 0x4A1854u) {
        ctx->pc = 0x4A1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1850u;
        // 0x4a1854: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1858u;
        goto label_4a1858;
    }
    ctx->pc = 0x4A1850u;
    SET_GPR_U32(ctx, 31, 0x4A1858u);
    ctx->pc = 0x4A1854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1850u;
    // 0x4a1854: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1278u, 0x4A1850u, 0x4A1858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1858u;
label_4a1858:
    // 0x4a1858: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a1858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a185c:
    // 0x4a185c: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x4a185cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a1860:
    // 0x4a1860: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x4a1860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a1864:
    // 0x4a1864: 0x6a63000f  ldl         $v1, 0xF($s3)
    ctx->pc = 0x4a1864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4a1868:
    // 0x4a1868: 0x6e630008  ldr         $v1, 0x8($s3)
    ctx->pc = 0x4a1868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4a186c:
    // 0x4a186c: 0x6a640017  ldl         $a0, 0x17($s3)
    ctx->pc = 0x4a186cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4a1870:
    // 0x4a1870: 0x6e640010  ldr         $a0, 0x10($s3)
    ctx->pc = 0x4a1870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4a1874:
    // 0x4a1874: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x4a1874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_4a1878:
    // 0x4a1878: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x4a1878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a187c:
    // 0x4a187c: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x4a187cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a1880:
    // 0x4a1880: 0xb3a3003f  sdl         $v1, 0x3F($sp)
    ctx->pc = 0x4a1880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a1884:
    // 0x4a1884: 0xb7a30038  sdr         $v1, 0x38($sp)
    ctx->pc = 0x4a1884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a1888:
    // 0x4a1888: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x4a1888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a188c:
    // 0x4a188c: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x4a188cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a1890:
    // 0x4a1890: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x4a1890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_4a1894:
    // 0x4a1894: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
label_4a1898:
    if (ctx->pc == 0x4A1898u) {
        ctx->pc = 0x4A1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1894u;
        // 0x4a1898: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A189Cu;
        goto label_4a189c;
    }
    ctx->pc = 0x4A1894u;
    {
        const bool branch_taken_0x4a1894 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1894u;
        // 0x4a1898: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1894) {
            ctx->pc = 0x4A1938u;
            goto label_4a1938;
        }
    }
    ctx->pc = 0x4A189Cu;
label_4a189c:
    // 0x4a189c: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x4a189cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4a18a0:
    // 0x4a18a0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x4a18a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4a18a4:
    // 0x4a18a4: 0x0  nop
    ctx->pc = 0x4a18a4u;
    // NOP
label_4a18a8:
    // 0x4a18a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a18a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a18ac:
    // 0x4a18ac: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4a18acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4a18b0:
    // 0x4a18b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a18b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a18b4:
    // 0x4a18b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a18b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a18b8:
    // 0x4a18b8: 0xc1297da  jal         func_4A5F68
label_4a18bc:
    if (ctx->pc == 0x4A18BCu) {
        ctx->pc = 0x4A18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A18B8u;
        // 0x4a18bc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A18C0u;
        goto label_4a18c0;
    }
    ctx->pc = 0x4A18B8u;
    SET_GPR_U32(ctx, 31, 0x4A18C0u);
    ctx->pc = 0x4A18BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A18B8u;
    // 0x4a18bc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5F68u, 0x4A18B8u, 0x4A18C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A18C0u;
label_4a18c0:
    // 0x4a18c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a18c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a18c4:
    // 0x4a18c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a18c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a18c8:
    // 0x4a18c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4a18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4a18cc:
    // 0x4a18cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a18ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4a18d0:
    // 0x4a18d0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4a18d4:
    if (ctx->pc == 0x4A18D4u) {
        ctx->pc = 0x4A18D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A18D0u;
        // 0x4a18d4: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A18D8u;
        goto label_4a18d8;
    }
    ctx->pc = 0x4A18D0u;
    {
        const bool branch_taken_0x4a18d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A18D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A18D0u;
        // 0x4a18d4: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a18d0) {
            ctx->pc = 0x4A18DCu;
            goto label_4a18dc;
        }
    }
    ctx->pc = 0x4A18D8u;
label_4a18d8:
    // 0x4a18d8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4a18d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4a18dc:
    // 0x4a18dc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x4a18dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_4a18e0:
    // 0x4a18e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a18e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a18e4:
    // 0x4a18e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a18e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a18e8:
    // 0x4a18e8: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x4a18e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_4a18ec:
    // 0x4a18ec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4a18ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4a18f0:
    // 0x4a18f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a18f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4a18f4:
    // 0x4a18f4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4a18f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a18f8:
    // 0x4a18f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4a18f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a18fc:
    // 0x4a18fc: 0x40f809  jalr        $v0
label_4a1900:
    if (ctx->pc == 0x4A1900u) {
        ctx->pc = 0x4A1900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A18FCu;
        // 0x4a1900: 0x27a90070  addiu       $t1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1904u;
        goto label_4a1904;
    }
    ctx->pc = 0x4A18FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A1904u);
        ctx->pc = 0x4A1900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A18FCu;
        // 0x4a1900: 0x27a90070  addiu       $t1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A18FCu, 0x4A1904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A1904u;
label_4a1904:
    // 0x4a1904: 0x1040ffa8  beqz        $v0, . + 4 + (-0x58 << 2)
label_4a1908:
    if (ctx->pc == 0x4A1908u) {
        ctx->pc = 0x4A1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1904u;
        // 0x4a1908: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A190Cu;
        goto label_4a190c;
    }
    ctx->pc = 0x4A1904u;
    {
        const bool branch_taken_0x4a1904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1904u;
        // 0x4a1908: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1904) {
            ctx->pc = 0x4A17A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a17a8;
        }
    }
    ctx->pc = 0x4A190Cu;
label_4a190c:
    // 0x4a190c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x4a190cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a1910:
    // 0x4a1910: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4a1910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4a1914:
    // 0x4a1914: 0xdfa40060  ld          $a0, 0x60($sp)
    ctx->pc = 0x4a1914u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4a1918:
    // 0x4a1918: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4a1918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4a191c:
    // 0x4a191c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x4a191cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_4a1920:
    // 0x4a1920: 0x232282b  sltu        $a1, $s1, $s2
    ctx->pc = 0x4a1920u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4a1924:
    // 0x4a1924: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x4a1924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_4a1928:
    // 0x4a1928: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x4a1928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
label_4a192c:
    // 0x4a192c: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x4a192cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_4a1930:
    // 0x4a1930: 0x14a0ffdd  bnez        $a1, . + 4 + (-0x23 << 2)
label_4a1934:
    if (ctx->pc == 0x4A1934u) {
        ctx->pc = 0x4A1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1930u;
        // 0x4a1934: 0x8fb40070  lw          $s4, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1938u;
        goto label_4a1938;
    }
    ctx->pc = 0x4A1930u;
    {
        const bool branch_taken_0x4a1930 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1930u;
        // 0x4a1934: 0x8fb40070  lw          $s4, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1930) {
            ctx->pc = 0x4A18A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a18a8;
        }
    }
    ctx->pc = 0x4A1938u;
label_4a1938:
    // 0x4a1938: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_4a193c:
    if (ctx->pc == 0x4A193Cu) {
        ctx->pc = 0x4A193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1938u;
        // 0x4a193c: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1940u;
        goto label_4a1940;
    }
    ctx->pc = 0x4A1938u;
    {
        const bool branch_taken_0x4a1938 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1938u;
        // 0x4a193c: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1938) {
            ctx->pc = 0x4A1948u;
            goto label_4a1948;
        }
    }
    ctx->pc = 0x4A1940u;
label_4a1940:
    // 0x4a1940: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x4a1940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_4a1944:
    // 0x4a1944: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4a1944u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_4a1948:
    // 0x4a1948: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4a1948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4a194c:
    // 0x4a194c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x4a194cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_4a1950:
    // 0x4a1950: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x4a1950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_4a1954:
    // 0x4a1954: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x4a1954u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4a1958:
    // 0x4a1958: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x4a1958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4a195c:
    // 0x4a195c: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x4a195cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4a1960:
    // 0x4a1960: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x4a1960u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4a1964:
    // 0x4a1964: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x4a1964u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4a1968:
    // 0x4a1968: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x4a1968u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4a196c:
    // 0x4a196c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4a196cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4a1970:
    // 0x4a1970: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4a1970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4a1974:
    // 0x4a1974: 0x3e00008  jr          $ra
label_4a1978:
    if (ctx->pc == 0x4A1978u) {
        ctx->pc = 0x4A1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1974u;
        // 0x4a1978: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A197Cu;
        goto label_4a197c;
    }
    ctx->pc = 0x4A1974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1974u;
        // 0x4a1978: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A197Cu;
label_4a197c:
    // 0x4a197c: 0x0  nop
    ctx->pc = 0x4a197cu;
    // NOP
    ctx->pc = 0x4a1980u;
}
