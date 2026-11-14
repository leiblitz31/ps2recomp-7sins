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

// Function: sub_003C1818
// Address: 0x3c1818 - 0x3c1ae0
void sub_003C1818_0x3c1818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1818_0x3c1818");
#endif

    switch (ctx->pc) {
        case 0x3c1818u: goto label_3c1818;
        case 0x3c181cu: goto label_3c181c;
        case 0x3c1820u: goto label_3c1820;
        case 0x3c1824u: goto label_3c1824;
        case 0x3c1828u: goto label_3c1828;
        case 0x3c182cu: goto label_3c182c;
        case 0x3c1830u: goto label_3c1830;
        case 0x3c1834u: goto label_3c1834;
        case 0x3c1838u: goto label_3c1838;
        case 0x3c183cu: goto label_3c183c;
        case 0x3c1840u: goto label_3c1840;
        case 0x3c1844u: goto label_3c1844;
        case 0x3c1848u: goto label_3c1848;
        case 0x3c184cu: goto label_3c184c;
        case 0x3c1850u: goto label_3c1850;
        case 0x3c1854u: goto label_3c1854;
        case 0x3c1858u: goto label_3c1858;
        case 0x3c185cu: goto label_3c185c;
        case 0x3c1860u: goto label_3c1860;
        case 0x3c1864u: goto label_3c1864;
        case 0x3c1868u: goto label_3c1868;
        case 0x3c186cu: goto label_3c186c;
        case 0x3c1870u: goto label_3c1870;
        case 0x3c1874u: goto label_3c1874;
        case 0x3c1878u: goto label_3c1878;
        case 0x3c187cu: goto label_3c187c;
        case 0x3c1880u: goto label_3c1880;
        case 0x3c1884u: goto label_3c1884;
        case 0x3c1888u: goto label_3c1888;
        case 0x3c188cu: goto label_3c188c;
        case 0x3c1890u: goto label_3c1890;
        case 0x3c1894u: goto label_3c1894;
        case 0x3c1898u: goto label_3c1898;
        case 0x3c189cu: goto label_3c189c;
        case 0x3c18a0u: goto label_3c18a0;
        case 0x3c18a4u: goto label_3c18a4;
        case 0x3c18a8u: goto label_3c18a8;
        case 0x3c18acu: goto label_3c18ac;
        case 0x3c18b0u: goto label_3c18b0;
        case 0x3c18b4u: goto label_3c18b4;
        case 0x3c18b8u: goto label_3c18b8;
        case 0x3c18bcu: goto label_3c18bc;
        case 0x3c18c0u: goto label_3c18c0;
        case 0x3c18c4u: goto label_3c18c4;
        case 0x3c18c8u: goto label_3c18c8;
        case 0x3c18ccu: goto label_3c18cc;
        case 0x3c18d0u: goto label_3c18d0;
        case 0x3c18d4u: goto label_3c18d4;
        case 0x3c18d8u: goto label_3c18d8;
        case 0x3c18dcu: goto label_3c18dc;
        case 0x3c18e0u: goto label_3c18e0;
        case 0x3c18e4u: goto label_3c18e4;
        case 0x3c18e8u: goto label_3c18e8;
        case 0x3c18ecu: goto label_3c18ec;
        case 0x3c18f0u: goto label_3c18f0;
        case 0x3c18f4u: goto label_3c18f4;
        case 0x3c18f8u: goto label_3c18f8;
        case 0x3c18fcu: goto label_3c18fc;
        case 0x3c1900u: goto label_3c1900;
        case 0x3c1904u: goto label_3c1904;
        case 0x3c1908u: goto label_3c1908;
        case 0x3c190cu: goto label_3c190c;
        case 0x3c1910u: goto label_3c1910;
        case 0x3c1914u: goto label_3c1914;
        case 0x3c1918u: goto label_3c1918;
        case 0x3c191cu: goto label_3c191c;
        case 0x3c1920u: goto label_3c1920;
        case 0x3c1924u: goto label_3c1924;
        case 0x3c1928u: goto label_3c1928;
        case 0x3c192cu: goto label_3c192c;
        case 0x3c1930u: goto label_3c1930;
        case 0x3c1934u: goto label_3c1934;
        case 0x3c1938u: goto label_3c1938;
        case 0x3c193cu: goto label_3c193c;
        case 0x3c1940u: goto label_3c1940;
        case 0x3c1944u: goto label_3c1944;
        case 0x3c1948u: goto label_3c1948;
        case 0x3c194cu: goto label_3c194c;
        case 0x3c1950u: goto label_3c1950;
        case 0x3c1954u: goto label_3c1954;
        case 0x3c1958u: goto label_3c1958;
        case 0x3c195cu: goto label_3c195c;
        case 0x3c1960u: goto label_3c1960;
        case 0x3c1964u: goto label_3c1964;
        case 0x3c1968u: goto label_3c1968;
        case 0x3c196cu: goto label_3c196c;
        case 0x3c1970u: goto label_3c1970;
        case 0x3c1974u: goto label_3c1974;
        case 0x3c1978u: goto label_3c1978;
        case 0x3c197cu: goto label_3c197c;
        case 0x3c1980u: goto label_3c1980;
        case 0x3c1984u: goto label_3c1984;
        case 0x3c1988u: goto label_3c1988;
        case 0x3c198cu: goto label_3c198c;
        case 0x3c1990u: goto label_3c1990;
        case 0x3c1994u: goto label_3c1994;
        case 0x3c1998u: goto label_3c1998;
        case 0x3c199cu: goto label_3c199c;
        case 0x3c19a0u: goto label_3c19a0;
        case 0x3c19a4u: goto label_3c19a4;
        case 0x3c19a8u: goto label_3c19a8;
        case 0x3c19acu: goto label_3c19ac;
        case 0x3c19b0u: goto label_3c19b0;
        case 0x3c19b4u: goto label_3c19b4;
        case 0x3c19b8u: goto label_3c19b8;
        case 0x3c19bcu: goto label_3c19bc;
        case 0x3c19c0u: goto label_3c19c0;
        case 0x3c19c4u: goto label_3c19c4;
        case 0x3c19c8u: goto label_3c19c8;
        case 0x3c19ccu: goto label_3c19cc;
        case 0x3c19d0u: goto label_3c19d0;
        case 0x3c19d4u: goto label_3c19d4;
        case 0x3c19d8u: goto label_3c19d8;
        case 0x3c19dcu: goto label_3c19dc;
        case 0x3c19e0u: goto label_3c19e0;
        case 0x3c19e4u: goto label_3c19e4;
        case 0x3c19e8u: goto label_3c19e8;
        case 0x3c19ecu: goto label_3c19ec;
        case 0x3c19f0u: goto label_3c19f0;
        case 0x3c19f4u: goto label_3c19f4;
        case 0x3c19f8u: goto label_3c19f8;
        case 0x3c19fcu: goto label_3c19fc;
        case 0x3c1a00u: goto label_3c1a00;
        case 0x3c1a04u: goto label_3c1a04;
        case 0x3c1a08u: goto label_3c1a08;
        case 0x3c1a0cu: goto label_3c1a0c;
        case 0x3c1a10u: goto label_3c1a10;
        case 0x3c1a14u: goto label_3c1a14;
        case 0x3c1a18u: goto label_3c1a18;
        case 0x3c1a1cu: goto label_3c1a1c;
        case 0x3c1a20u: goto label_3c1a20;
        case 0x3c1a24u: goto label_3c1a24;
        case 0x3c1a28u: goto label_3c1a28;
        case 0x3c1a2cu: goto label_3c1a2c;
        case 0x3c1a30u: goto label_3c1a30;
        case 0x3c1a34u: goto label_3c1a34;
        case 0x3c1a38u: goto label_3c1a38;
        case 0x3c1a3cu: goto label_3c1a3c;
        case 0x3c1a40u: goto label_3c1a40;
        case 0x3c1a44u: goto label_3c1a44;
        case 0x3c1a48u: goto label_3c1a48;
        case 0x3c1a4cu: goto label_3c1a4c;
        case 0x3c1a50u: goto label_3c1a50;
        case 0x3c1a54u: goto label_3c1a54;
        case 0x3c1a58u: goto label_3c1a58;
        case 0x3c1a5cu: goto label_3c1a5c;
        case 0x3c1a60u: goto label_3c1a60;
        case 0x3c1a64u: goto label_3c1a64;
        case 0x3c1a68u: goto label_3c1a68;
        case 0x3c1a6cu: goto label_3c1a6c;
        case 0x3c1a70u: goto label_3c1a70;
        case 0x3c1a74u: goto label_3c1a74;
        case 0x3c1a78u: goto label_3c1a78;
        case 0x3c1a7cu: goto label_3c1a7c;
        case 0x3c1a80u: goto label_3c1a80;
        case 0x3c1a84u: goto label_3c1a84;
        case 0x3c1a88u: goto label_3c1a88;
        case 0x3c1a8cu: goto label_3c1a8c;
        case 0x3c1a90u: goto label_3c1a90;
        case 0x3c1a94u: goto label_3c1a94;
        case 0x3c1a98u: goto label_3c1a98;
        case 0x3c1a9cu: goto label_3c1a9c;
        case 0x3c1aa0u: goto label_3c1aa0;
        case 0x3c1aa4u: goto label_3c1aa4;
        case 0x3c1aa8u: goto label_3c1aa8;
        case 0x3c1aacu: goto label_3c1aac;
        case 0x3c1ab0u: goto label_3c1ab0;
        case 0x3c1ab4u: goto label_3c1ab4;
        case 0x3c1ab8u: goto label_3c1ab8;
        case 0x3c1abcu: goto label_3c1abc;
        case 0x3c1ac0u: goto label_3c1ac0;
        case 0x3c1ac4u: goto label_3c1ac4;
        case 0x3c1ac8u: goto label_3c1ac8;
        case 0x3c1accu: goto label_3c1acc;
        case 0x3c1ad0u: goto label_3c1ad0;
        case 0x3c1ad4u: goto label_3c1ad4;
        case 0x3c1ad8u: goto label_3c1ad8;
        case 0x3c1adcu: goto label_3c1adc;
        default: break;
    }

    ctx->pc = 0x3c1818u;

label_3c1818:
    // 0x3c1818: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c1818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3c181c:
    // 0x3c181c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3c181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3c1820:
    // 0x3c1820: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3c1820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3c1824:
    // 0x3c1824: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c1824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1828:
    // 0x3c1828: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3c1828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3c182c:
    // 0x3c182c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3c1830:
    // 0x3c1830: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c1830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c1834:
    // 0x3c1834: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c1834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c1838:
    // 0x3c1838: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3c1838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3c183c:
    // 0x3c183c: 0x52620001  beql        $s3, $v0, . + 4 + (0x1 << 2)
label_3c1840:
    if (ctx->pc == 0x3C1840u) {
        ctx->pc = 0x3C1840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C183Cu;
        // 0x3c1840: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1844u;
        goto label_3c1844;
    }
    ctx->pc = 0x3C183Cu;
    {
        const bool branch_taken_0x3c183c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c183c) {
            ctx->pc = 0x3C1840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C183Cu;
            // 0x3c1840: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1844u;
            goto label_3c1844;
        }
    }
    ctx->pc = 0x3C1844u;
label_3c1844:
    // 0x3c1844: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x3c1844u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c1848:
    // 0x3c1848: 0xc10378e  jal         func_40DE38
label_3c184c:
    if (ctx->pc == 0x3C184Cu) {
        ctx->pc = 0x3C184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1848u;
        // 0x3c184c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1850u;
        goto label_3c1850;
    }
    ctx->pc = 0x3C1848u;
    SET_GPR_U32(ctx, 31, 0x3C1850u);
    ctx->pc = 0x3C184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1848u;
    // 0x3c184c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE38u, 0x3C1848u, 0x3C1850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1850u;
label_3c1850:
    // 0x3c1850: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c1850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1854:
    // 0x3c1854: 0xc103790  jal         func_40DE40
label_3c1858:
    if (ctx->pc == 0x3C1858u) {
        ctx->pc = 0x3C1858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1854u;
        // 0x3c1858: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C185Cu;
        goto label_3c185c;
    }
    ctx->pc = 0x3C1854u;
    SET_GPR_U32(ctx, 31, 0x3C185Cu);
    ctx->pc = 0x3C1858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1854u;
    // 0x3c1858: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE40u, 0x3C1854u, 0x3C185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C185Cu;
label_3c185c:
    // 0x3c185c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c185cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c1860:
    // 0x3c1860: 0x12440064  beq         $s2, $a0, . + 4 + (0x64 << 2)
label_3c1864:
    if (ctx->pc == 0x3C1864u) {
        ctx->pc = 0x3C1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1860u;
        // 0x3c1864: 0x921023  subu        $v0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1868u;
        goto label_3c1868;
    }
    ctx->pc = 0x3C1860u;
    {
        const bool branch_taken_0x3c1860 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x3C1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1860u;
        // 0x3c1864: 0x921023  subu        $v0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1860) {
            ctx->pc = 0x3C19F4u;
            goto label_3c19f4;
        }
    }
    ctx->pc = 0x3C1868u;
label_3c1868:
    // 0x3c1868: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x3c1868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_3c186c:
    // 0x3c186c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_3c1870:
    if (ctx->pc == 0x3C1870u) {
        ctx->pc = 0x3C1870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C186Cu;
        // 0x3c1870: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1874u;
        goto label_3c1874;
    }
    ctx->pc = 0x3C186Cu;
    {
        const bool branch_taken_0x3c186c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C186Cu;
        // 0x3c1870: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c186c) {
            ctx->pc = 0x3C1908u;
            goto label_3c1908;
        }
    }
    ctx->pc = 0x3C1874u;
label_3c1874:
    // 0x3c1874: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x3c1874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_3c1878:
    // 0x3c1878: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_3c187c:
    if (ctx->pc == 0x3C187Cu) {
        ctx->pc = 0x3C187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1878u;
        // 0x3c187c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1880u;
        goto label_3c1880;
    }
    ctx->pc = 0x3C1878u;
    {
        const bool branch_taken_0x3c1878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1878) {
            ctx->pc = 0x3C187Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1878u;
            // 0x3c187c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C18F4u;
            goto label_3c18f4;
        }
    }
    ctx->pc = 0x3C1880u;
label_3c1880:
    // 0x3c1880: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x3c1880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_3c1884:
    // 0x3c1884: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_3c1888:
    if (ctx->pc == 0x3C1888u) {
        ctx->pc = 0x3C1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1884u;
        // 0x3c1888: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C188Cu;
        goto label_3c188c;
    }
    ctx->pc = 0x3C1884u;
    {
        const bool branch_taken_0x3c1884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1884) {
            ctx->pc = 0x3C1888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1884u;
            // 0x3c1888: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C18E0u;
            goto label_3c18e0;
        }
    }
    ctx->pc = 0x3C188Cu;
label_3c188c:
    // 0x3c188c: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x3c188cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
label_3c1890:
    // 0x3c1890: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_3c1894:
    if (ctx->pc == 0x3C1894u) {
        ctx->pc = 0x3C1894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1890u;
        // 0x3c1894: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1898u;
        goto label_3c1898;
    }
    ctx->pc = 0x3C1890u;
    {
        const bool branch_taken_0x3c1890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1890) {
            ctx->pc = 0x3C1894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1890u;
            // 0x3c1894: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C190Cu;
            goto label_3c190c;
        }
    }
    ctx->pc = 0x3C1898u;
label_3c1898:
    // 0x3c1898: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3c1898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c189c:
    // 0x3c189c: 0x1662000d  bne         $s3, $v0, . + 4 + (0xD << 2)
label_3c18a0:
    if (ctx->pc == 0x3C18A0u) {
        ctx->pc = 0x3C18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C189Cu;
        // 0x3c18a0: 0x26420004  addiu       $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C18A4u;
        goto label_3c18a4;
    }
    ctx->pc = 0x3C189Cu;
    {
        const bool branch_taken_0x3c189c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C189Cu;
        // 0x3c18a0: 0x26420004  addiu       $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c189c) {
            ctx->pc = 0x3C18D4u;
            goto label_3c18d4;
        }
    }
    ctx->pc = 0x3C18A4u;
label_3c18a4:
    // 0x3c18a4: 0xc10376a  jal         func_40DDA8
label_3c18a8:
    if (ctx->pc == 0x3C18A8u) {
        ctx->pc = 0x3C18A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C18A4u;
        // 0x3c18a8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C18ACu;
        goto label_3c18ac;
    }
    ctx->pc = 0x3C18A4u;
    SET_GPR_U32(ctx, 31, 0x3C18ACu);
    ctx->pc = 0x3C18A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C18A4u;
    // 0x3c18a8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3C18A4u, 0x3C18ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C18ACu;
label_3c18ac:
    // 0x3c18ac: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c18acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c18b0:
    // 0x3c18b0: 0xc1036da  jal         func_40DB68
label_3c18b4:
    if (ctx->pc == 0x3C18B4u) {
        ctx->pc = 0x3C18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C18B0u;
        // 0x3c18b4: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C18B8u;
        goto label_3c18b8;
    }
    ctx->pc = 0x3C18B0u;
    SET_GPR_U32(ctx, 31, 0x3C18B8u);
    ctx->pc = 0x3C18B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C18B0u;
    // 0x3c18b4: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C18B0u, 0x3C18B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C18B8u;
label_3c18b8:
    // 0x3c18b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c18bc:
    // 0x3c18bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c18bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c18c0:
    // 0x3c18c0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c18c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c18c4:
    // 0x3c18c4: 0xc1036a8  jal         func_40DAA0
label_3c18c8:
    if (ctx->pc == 0x3C18C8u) {
        ctx->pc = 0x3C18C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C18C4u;
        // 0x3c18c8: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C18CCu;
        goto label_3c18cc;
    }
    ctx->pc = 0x3C18C4u;
    SET_GPR_U32(ctx, 31, 0x3C18CCu);
    ctx->pc = 0x3C18C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C18C4u;
    // 0x3c18c8: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DAA0u, 0x3C18C4u, 0x3C18CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C18CCu;
label_3c18cc:
    // 0x3c18cc: 0x10000049  b           . + 4 + (0x49 << 2)
label_3c18d0:
    if (ctx->pc == 0x3C18D0u) {
        ctx->pc = 0x3C18D4u;
        goto label_3c18d4;
    }
    ctx->pc = 0x3C18CCu;
    {
        const bool branch_taken_0x3c18cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c18cc) {
            ctx->pc = 0x3C19F4u;
            goto label_3c19f4;
        }
    }
    ctx->pc = 0x3C18D4u;
label_3c18d4:
    // 0x3c18d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c18d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c18d8:
    // 0x3c18d8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3c18d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c18dc:
    // 0x3c18dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c18e0:
    // 0x3c18e0: 0x1262000c  beq         $s3, $v0, . + 4 + (0xC << 2)
label_3c18e4:
    if (ctx->pc == 0x3C18E4u) {
        ctx->pc = 0x3C18E8u;
        goto label_3c18e8;
    }
    ctx->pc = 0x3C18E0u;
    {
        const bool branch_taken_0x3c18e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c18e0) {
            ctx->pc = 0x3C1914u;
            goto label_3c1914;
        }
    }
    ctx->pc = 0x3C18E8u;
label_3c18e8:
    // 0x3c18e8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3c18e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3c18ec:
    // 0x3c18ec: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3c18ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3c18f0:
    // 0x3c18f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c18f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c18f4:
    // 0x3c18f4: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_3c18f8:
    if (ctx->pc == 0x3C18F8u) {
        ctx->pc = 0x3C18FCu;
        goto label_3c18fc;
    }
    ctx->pc = 0x3C18F4u;
    {
        const bool branch_taken_0x3c18f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c18f4) {
            ctx->pc = 0x3C1914u;
            goto label_3c1914;
        }
    }
    ctx->pc = 0x3C18FCu;
label_3c18fc:
    // 0x3c18fc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3c18fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3c1900:
    // 0x3c1900: 0x1244003c  beq         $s2, $a0, . + 4 + (0x3C << 2)
label_3c1904:
    if (ctx->pc == 0x3C1904u) {
        ctx->pc = 0x3C1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1900u;
        // 0x3c1904: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1908u;
        goto label_3c1908;
    }
    ctx->pc = 0x3C1900u;
    {
        const bool branch_taken_0x3c1900 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x3C1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1900u;
        // 0x3c1904: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1900) {
            ctx->pc = 0x3C19F4u;
            goto label_3c19f4;
        }
    }
    ctx->pc = 0x3C1908u;
label_3c1908:
    // 0x3c1908: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c1908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c190c:
    // 0x3c190c: 0x5662000d  bnel        $s3, $v0, . + 4 + (0xD << 2)
label_3c1910:
    if (ctx->pc == 0x3C1910u) {
        ctx->pc = 0x3C1910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C190Cu;
        // 0x3c1910: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1914u;
        goto label_3c1914;
    }
    ctx->pc = 0x3C190Cu;
    {
        const bool branch_taken_0x3c190c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c190c) {
            ctx->pc = 0x3C1910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C190Cu;
            // 0x3c1910: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1944u;
            goto label_3c1944;
        }
    }
    ctx->pc = 0x3C1914u;
label_3c1914:
    // 0x3c1914: 0xc10376a  jal         func_40DDA8
label_3c1918:
    if (ctx->pc == 0x3C1918u) {
        ctx->pc = 0x3C1918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1914u;
        // 0x3c1918: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C191Cu;
        goto label_3c191c;
    }
    ctx->pc = 0x3C1914u;
    SET_GPR_U32(ctx, 31, 0x3C191Cu);
    ctx->pc = 0x3C1918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1914u;
    // 0x3c1918: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3C1914u, 0x3C191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C191Cu;
label_3c191c:
    // 0x3c191c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c191cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1920:
    // 0x3c1920: 0xc1036da  jal         func_40DB68
label_3c1924:
    if (ctx->pc == 0x3C1924u) {
        ctx->pc = 0x3C1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1920u;
        // 0x3c1924: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1928u;
        goto label_3c1928;
    }
    ctx->pc = 0x3C1920u;
    SET_GPR_U32(ctx, 31, 0x3C1928u);
    ctx->pc = 0x3C1924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1920u;
    // 0x3c1924: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C1920u, 0x3C1928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1928u;
label_3c1928:
    // 0x3c1928: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c1928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c192c:
    // 0x3c192c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c192cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1930:
    // 0x3c1930: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c1930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1934:
    // 0x3c1934: 0xc1036a8  jal         func_40DAA0
label_3c1938:
    if (ctx->pc == 0x3C1938u) {
        ctx->pc = 0x3C1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1934u;
        // 0x3c1938: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C193Cu;
        goto label_3c193c;
    }
    ctx->pc = 0x3C1934u;
    SET_GPR_U32(ctx, 31, 0x3C193Cu);
    ctx->pc = 0x3C1938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1934u;
    // 0x3c1938: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DAA0u, 0x3C1934u, 0x3C193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C193Cu;
label_3c193c:
    // 0x3c193c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_3c1940:
    if (ctx->pc == 0x3C1940u) {
        ctx->pc = 0x3C1944u;
        goto label_3c1944;
    }
    ctx->pc = 0x3C193Cu;
    {
        const bool branch_taken_0x3c193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c193c) {
            ctx->pc = 0x3C19F4u;
            goto label_3c19f4;
        }
    }
    ctx->pc = 0x3C1944u;
label_3c1944:
    // 0x3c1944: 0x5662000d  bnel        $s3, $v0, . + 4 + (0xD << 2)
label_3c1948:
    if (ctx->pc == 0x3C1948u) {
        ctx->pc = 0x3C1948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1944u;
        // 0x3c1948: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C194Cu;
        goto label_3c194c;
    }
    ctx->pc = 0x3C1944u;
    {
        const bool branch_taken_0x3c1944 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c1944) {
            ctx->pc = 0x3C1948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1944u;
            // 0x3c1948: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C197Cu;
            goto label_3c197c;
        }
    }
    ctx->pc = 0x3C194Cu;
label_3c194c:
    // 0x3c194c: 0xc10376a  jal         func_40DDA8
label_3c1950:
    if (ctx->pc == 0x3C1950u) {
        ctx->pc = 0x3C1950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C194Cu;
        // 0x3c1950: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1954u;
        goto label_3c1954;
    }
    ctx->pc = 0x3C194Cu;
    SET_GPR_U32(ctx, 31, 0x3C1954u);
    ctx->pc = 0x3C1950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C194Cu;
    // 0x3c1950: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3C194Cu, 0x3C1954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1954u;
label_3c1954:
    // 0x3c1954: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c1954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1958:
    // 0x3c1958: 0xc1036da  jal         func_40DB68
label_3c195c:
    if (ctx->pc == 0x3C195Cu) {
        ctx->pc = 0x3C195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1958u;
        // 0x3c195c: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1960u;
        goto label_3c1960;
    }
    ctx->pc = 0x3C1958u;
    SET_GPR_U32(ctx, 31, 0x3C1960u);
    ctx->pc = 0x3C195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1958u;
    // 0x3c195c: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C1958u, 0x3C1960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1960u;
label_3c1960:
    // 0x3c1960: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c1960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c1964:
    // 0x3c1964: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c1964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1968:
    // 0x3c1968: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c1968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c196c:
    // 0x3c196c: 0xc1036a8  jal         func_40DAA0
label_3c1970:
    if (ctx->pc == 0x3C1970u) {
        ctx->pc = 0x3C1970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C196Cu;
        // 0x3c1970: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1974u;
        goto label_3c1974;
    }
    ctx->pc = 0x3C196Cu;
    SET_GPR_U32(ctx, 31, 0x3C1974u);
    ctx->pc = 0x3C1970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C196Cu;
    // 0x3c1970: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DAA0u, 0x3C196Cu, 0x3C1974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1974u;
label_3c1974:
    // 0x3c1974: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3c1978:
    if (ctx->pc == 0x3C1978u) {
        ctx->pc = 0x3C197Cu;
        goto label_3c197c;
    }
    ctx->pc = 0x3C1974u;
    {
        const bool branch_taken_0x3c1974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1974) {
            ctx->pc = 0x3C19F4u;
            goto label_3c19f4;
        }
    }
    ctx->pc = 0x3C197Cu;
label_3c197c:
    // 0x3c197c: 0x5662000d  bnel        $s3, $v0, . + 4 + (0xD << 2)
label_3c1980:
    if (ctx->pc == 0x3C1980u) {
        ctx->pc = 0x3C1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C197Cu;
        // 0x3c1980: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1984u;
        goto label_3c1984;
    }
    ctx->pc = 0x3C197Cu;
    {
        const bool branch_taken_0x3c197c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c197c) {
            ctx->pc = 0x3C1980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C197Cu;
            // 0x3c1980: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C19B4u;
            goto label_3c19b4;
        }
    }
    ctx->pc = 0x3C1984u;
label_3c1984:
    // 0x3c1984: 0xc10376a  jal         func_40DDA8
label_3c1988:
    if (ctx->pc == 0x3C1988u) {
        ctx->pc = 0x3C1988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1984u;
        // 0x3c1988: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C198Cu;
        goto label_3c198c;
    }
    ctx->pc = 0x3C1984u;
    SET_GPR_U32(ctx, 31, 0x3C198Cu);
    ctx->pc = 0x3C1988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1984u;
    // 0x3c1988: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3C1984u, 0x3C198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C198Cu;
label_3c198c:
    // 0x3c198c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c198cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c1990:
    // 0x3c1990: 0xc1036da  jal         func_40DB68
label_3c1994:
    if (ctx->pc == 0x3C1994u) {
        ctx->pc = 0x3C1994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1990u;
        // 0x3c1994: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1998u;
        goto label_3c1998;
    }
    ctx->pc = 0x3C1990u;
    SET_GPR_U32(ctx, 31, 0x3C1998u);
    ctx->pc = 0x3C1994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1990u;
    // 0x3c1994: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C1990u, 0x3C1998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1998u;
label_3c1998:
    // 0x3c1998: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c1998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c199c:
    // 0x3c199c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c199cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c19a0:
    // 0x3c19a0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c19a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c19a4:
    // 0x3c19a4: 0xc1036a8  jal         func_40DAA0
label_3c19a8:
    if (ctx->pc == 0x3C19A8u) {
        ctx->pc = 0x3C19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C19A4u;
        // 0x3c19a8: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C19ACu;
        goto label_3c19ac;
    }
    ctx->pc = 0x3C19A4u;
    SET_GPR_U32(ctx, 31, 0x3C19ACu);
    ctx->pc = 0x3C19A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C19A4u;
    // 0x3c19a8: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DAA0u, 0x3C19A4u, 0x3C19ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C19ACu;
label_3c19ac:
    // 0x3c19ac: 0x10000011  b           . + 4 + (0x11 << 2)
label_3c19b0:
    if (ctx->pc == 0x3C19B0u) {
        ctx->pc = 0x3C19B4u;
        goto label_3c19b4;
    }
    ctx->pc = 0x3C19ACu;
    {
        const bool branch_taken_0x3c19ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c19ac) {
            ctx->pc = 0x3C19F4u;
            goto label_3c19f4;
        }
    }
    ctx->pc = 0x3C19B4u;
label_3c19b4:
    // 0x3c19b4: 0x5662000d  bnel        $s3, $v0, . + 4 + (0xD << 2)
label_3c19b8:
    if (ctx->pc == 0x3C19B8u) {
        ctx->pc = 0x3C19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C19B4u;
        // 0x3c19b8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C19BCu;
        goto label_3c19bc;
    }
    ctx->pc = 0x3C19B4u;
    {
        const bool branch_taken_0x3c19b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c19b4) {
            ctx->pc = 0x3C19B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C19B4u;
            // 0x3c19b8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C19ECu;
            goto label_3c19ec;
        }
    }
    ctx->pc = 0x3C19BCu;
label_3c19bc:
    // 0x3c19bc: 0xc10376a  jal         func_40DDA8
label_3c19c0:
    if (ctx->pc == 0x3C19C0u) {
        ctx->pc = 0x3C19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C19BCu;
        // 0x3c19c0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C19C4u;
        goto label_3c19c4;
    }
    ctx->pc = 0x3C19BCu;
    SET_GPR_U32(ctx, 31, 0x3C19C4u);
    ctx->pc = 0x3C19C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C19BCu;
    // 0x3c19c0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3C19BCu, 0x3C19C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C19C4u;
label_3c19c4:
    // 0x3c19c4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c19c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c19c8:
    // 0x3c19c8: 0xc1036da  jal         func_40DB68
label_3c19cc:
    if (ctx->pc == 0x3C19CCu) {
        ctx->pc = 0x3C19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C19C8u;
        // 0x3c19cc: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C19D0u;
        goto label_3c19d0;
    }
    ctx->pc = 0x3C19C8u;
    SET_GPR_U32(ctx, 31, 0x3C19D0u);
    ctx->pc = 0x3C19CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C19C8u;
    // 0x3c19cc: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3C19C8u, 0x3C19D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C19D0u;
label_3c19d0:
    // 0x3c19d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3c19d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c19d4:
    // 0x3c19d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c19d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c19d8:
    // 0x3c19d8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3c19d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3c19dc:
    // 0x3c19dc: 0xc1036a8  jal         func_40DAA0
label_3c19e0:
    if (ctx->pc == 0x3C19E0u) {
        ctx->pc = 0x3C19E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C19DCu;
        // 0x3c19e0: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C19E4u;
        goto label_3c19e4;
    }
    ctx->pc = 0x3C19DCu;
    SET_GPR_U32(ctx, 31, 0x3C19E4u);
    ctx->pc = 0x3C19E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C19DCu;
    // 0x3c19e0: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DAA0u, 0x3C19DCu, 0x3C19E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C19E4u;
label_3c19e4:
    // 0x3c19e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3c19e8:
    if (ctx->pc == 0x3C19E8u) {
        ctx->pc = 0x3C19ECu;
        goto label_3c19ec;
    }
    ctx->pc = 0x3C19E4u;
    {
        const bool branch_taken_0x3c19e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c19e4) {
            ctx->pc = 0x3C19F4u;
            goto label_3c19f4;
        }
    }
    ctx->pc = 0x3C19ECu;
label_3c19ec:
    // 0x3c19ec: 0x1644ffc6  bne         $s2, $a0, . + 4 + (-0x3A << 2)
label_3c19f0:
    if (ctx->pc == 0x3C19F0u) {
        ctx->pc = 0x3C19F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C19ECu;
        // 0x3c19f0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C19F4u;
        goto label_3c19f4;
    }
    ctx->pc = 0x3C19ECu;
    {
        const bool branch_taken_0x3c19ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x3C19F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C19ECu;
        // 0x3c19f0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c19ec) {
            ctx->pc = 0x3C1908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1908;
        }
    }
    ctx->pc = 0x3C19F4u;
label_3c19f4:
    // 0x3c19f4: 0xc103790  jal         func_40DE40
label_3c19f8:
    if (ctx->pc == 0x3C19F8u) {
        ctx->pc = 0x3C19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C19F4u;
        // 0x3c19f8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C19FCu;
        goto label_3c19fc;
    }
    ctx->pc = 0x3C19F4u;
    SET_GPR_U32(ctx, 31, 0x3C19FCu);
    ctx->pc = 0x3C19F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C19F4u;
    // 0x3c19f8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE40u, 0x3C19F4u, 0x3C19FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C19FCu;
label_3c19fc:
    // 0x3c19fc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3c19fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3c1a00:
    // 0x3c1a00: 0xc10378e  jal         func_40DE38
label_3c1a04:
    if (ctx->pc == 0x3C1A04u) {
        ctx->pc = 0x3C1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A00u;
        // 0x3c1a04: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1A08u;
        goto label_3c1a08;
    }
    ctx->pc = 0x3C1A00u;
    SET_GPR_U32(ctx, 31, 0x3C1A08u);
    ctx->pc = 0x3C1A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1A00u;
    // 0x3c1a04: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DE38u, 0x3C1A00u, 0x3C1A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1A08u;
label_3c1a08:
    // 0x3c1a08: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3c1a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3c1a0c:
    // 0x3c1a0c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c1a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c1a10:
    // 0x3c1a10: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_3c1a14:
    if (ctx->pc == 0x3C1A14u) {
        ctx->pc = 0x3C1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A10u;
        // 0x3c1a14: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1A18u;
        goto label_3c1a18;
    }
    ctx->pc = 0x3C1A10u;
    {
        const bool branch_taken_0x3c1a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C1A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A10u;
        // 0x3c1a14: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1a10) {
            ctx->pc = 0x3C1A44u;
            goto label_3c1a44;
        }
    }
    ctx->pc = 0x3C1A18u;
label_3c1a18:
    // 0x3c1a18: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3c1a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c1a1c:
    // 0x3c1a1c: 0x0  nop
    ctx->pc = 0x3c1a1cu;
    // NOP
label_3c1a20:
    // 0x3c1a20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c1a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c1a24:
    // 0x3c1a24: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3c1a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3c1a28:
    // 0x3c1a28: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x3c1a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_3c1a2c:
    // 0x3c1a2c: 0x40f809  jalr        $v0
label_3c1a30:
    if (ctx->pc == 0x3C1A30u) {
        ctx->pc = 0x3C1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A2Cu;
        // 0x3c1a30: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1A34u;
        goto label_3c1a34;
    }
    ctx->pc = 0x3C1A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1A34u);
        ctx->pc = 0x3C1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A2Cu;
        // 0x3c1a30: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1A2Cu, 0x3C1A34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1A34u;
label_3c1a34:
    // 0x3c1a34: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3c1a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c1a38:
    // 0x3c1a38: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3c1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c1a3c:
    // 0x3c1a3c: 0x5462fff8  bnel        $v1, $v0, . + 4 + (-0x8 << 2)
label_3c1a40:
    if (ctx->pc == 0x3C1A40u) {
        ctx->pc = 0x3C1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A3Cu;
        // 0x3c1a40: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1A44u;
        goto label_3c1a44;
    }
    ctx->pc = 0x3C1A3Cu;
    {
        const bool branch_taken_0x3c1a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c1a3c) {
            ctx->pc = 0x3C1A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C1A3Cu;
            // 0x3c1a40: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C1A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1a20;
        }
    }
    ctx->pc = 0x3C1A44u;
label_3c1a44:
    // 0x3c1a44: 0xc103684  jal         func_40DA10
label_3c1a48:
    if (ctx->pc == 0x3C1A48u) {
        ctx->pc = 0x3C1A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A44u;
        // 0x3c1a48: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1A4Cu;
        goto label_3c1a4c;
    }
    ctx->pc = 0x3C1A44u;
    SET_GPR_U32(ctx, 31, 0x3C1A4Cu);
    ctx->pc = 0x3C1A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1A44u;
    // 0x3c1a48: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3C1A44u, 0x3C1A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1A4Cu;
label_3c1a4c:
    // 0x3c1a4c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3c1a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3c1a50:
    // 0x3c1a50: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3c1a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3c1a54:
    // 0x3c1a54: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3c1a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3c1a58:
    // 0x3c1a58: 0x40f809  jalr        $v0
label_3c1a5c:
    if (ctx->pc == 0x3C1A5Cu) {
        ctx->pc = 0x3C1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A58u;
        // 0x3c1a5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1A60u;
        goto label_3c1a60;
    }
    ctx->pc = 0x3C1A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1A60u);
        ctx->pc = 0x3C1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A58u;
        // 0x3c1a5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1A58u, 0x3C1A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1A60u;
label_3c1a60:
    // 0x3c1a60: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3c1a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c1a64:
    // 0x3c1a64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c1a68:
    // 0x3c1a68: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3c1a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c1a6c:
    // 0x3c1a6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c1a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c1a70:
    // 0x3c1a70: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3c1a70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c1a74:
    // 0x3c1a74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c1a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c1a78:
    // 0x3c1a78: 0x3e00008  jr          $ra
label_3c1a7c:
    if (ctx->pc == 0x3C1A7Cu) {
        ctx->pc = 0x3C1A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A78u;
        // 0x3c1a7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1A80u;
        goto label_3c1a80;
    }
    ctx->pc = 0x3C1A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A78u;
        // 0x3c1a7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1A80u;
label_3c1a80:
    // 0x3c1a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c1a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c1a84:
    // 0x3c1a84: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x3c1a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_3c1a88:
    // 0x3c1a88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c1a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3c1a8c:
    // 0x3c1a8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c1a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c1a90:
    // 0x3c1a90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c1a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c1a94:
    // 0x3c1a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c1a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c1a98:
    // 0x3c1a98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c1a98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c1a9c:
    // 0x3c1a9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3c1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1aa0:
    // 0x3c1aa0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3c1aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c1aa4:
    // 0x3c1aa4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3c1aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3c1aa8:
    // 0x3c1aa8: 0xc1036e0  jal         func_40DB80
label_3c1aac:
    if (ctx->pc == 0x3C1AACu) {
        ctx->pc = 0x3C1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1AA8u;
        // 0x3c1aac: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1AB0u;
        goto label_3c1ab0;
    }
    ctx->pc = 0x3C1AA8u;
    SET_GPR_U32(ctx, 31, 0x3C1AB0u);
    ctx->pc = 0x3C1AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1AA8u;
    // 0x3c1aac: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3C1AA8u, 0x3C1AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1AB0u;
label_3c1ab0:
    // 0x3c1ab0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c1ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c1ab4:
    // 0x3c1ab4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3c1ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_3c1ab8:
    // 0x3c1ab8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3c1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3c1abc:
    // 0x3c1abc: 0x40f809  jalr        $v0
label_3c1ac0:
    if (ctx->pc == 0x3C1AC0u) {
        ctx->pc = 0x3C1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1ABCu;
        // 0x3c1ac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1AC4u;
        goto label_3c1ac4;
    }
    ctx->pc = 0x3C1ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C1AC4u);
        ctx->pc = 0x3C1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1ABCu;
        // 0x3c1ac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1ABCu, 0x3C1AC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C1AC4u;
label_3c1ac4:
    // 0x3c1ac4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c1ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c1ac8:
    // 0x3c1ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c1ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c1acc:
    // 0x3c1acc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c1accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c1ad0:
    // 0x3c1ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c1ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c1ad4:
    // 0x3c1ad4: 0x3e00008  jr          $ra
label_3c1ad8:
    if (ctx->pc == 0x3C1AD8u) {
        ctx->pc = 0x3C1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1AD4u;
        // 0x3c1ad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C1ADCu;
        goto label_3c1adc;
    }
    ctx->pc = 0x3C1AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1AD4u;
        // 0x3c1ad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1ADCu;
label_3c1adc:
    // 0x3c1adc: 0x0  nop
    ctx->pc = 0x3c1adcu;
    // NOP
    ctx->pc = 0x3c1ae0u;
}
