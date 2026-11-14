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

// Function: sub_001B1820
// Address: 0x1b1820 - 0x1b1f80
void sub_001B1820_0x1b1820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1820_0x1b1820");
#endif

    switch (ctx->pc) {
        case 0x1b1904u: goto label_1b1904;
        case 0x1b1910u: goto label_1b1910;
        case 0x1b1924u: goto label_1b1924;
        case 0x1b1940u: goto label_1b1940;
        case 0x1b1960u: goto label_1b1960;
        case 0x1b1990u: goto label_1b1990;
        case 0x1b19b0u: goto label_1b19b0;
        case 0x1b19ccu: goto label_1b19cc;
        case 0x1b19e8u: goto label_1b19e8;
        case 0x1b1a04u: goto label_1b1a04;
        case 0x1b1af0u: goto label_1b1af0;
        case 0x1b1b08u: goto label_1b1b08;
        case 0x1b1b1cu: goto label_1b1b1c;
        case 0x1b1b30u: goto label_1b1b30;
        case 0x1b1b48u: goto label_1b1b48;
        case 0x1b1b64u: goto label_1b1b64;
        case 0x1b1b80u: goto label_1b1b80;
        case 0x1b1b9cu: goto label_1b1b9c;
        case 0x1b1bb8u: goto label_1b1bb8;
        case 0x1b1bd4u: goto label_1b1bd4;
        case 0x1b1bf0u: goto label_1b1bf0;
        case 0x1b1c0cu: goto label_1b1c0c;
        case 0x1b1c28u: goto label_1b1c28;
        case 0x1b1c44u: goto label_1b1c44;
        case 0x1b1c60u: goto label_1b1c60;
        case 0x1b1c80u: goto label_1b1c80;
        case 0x1b1c9cu: goto label_1b1c9c;
        case 0x1b1cb8u: goto label_1b1cb8;
        case 0x1b1cd4u: goto label_1b1cd4;
        case 0x1b1cf0u: goto label_1b1cf0;
        case 0x1b1d0cu: goto label_1b1d0c;
        case 0x1b1d28u: goto label_1b1d28;
        case 0x1b1d44u: goto label_1b1d44;
        case 0x1b1d60u: goto label_1b1d60;
        case 0x1b1d7cu: goto label_1b1d7c;
        case 0x1b1d98u: goto label_1b1d98;
        case 0x1b1db4u: goto label_1b1db4;
        case 0x1b1dd0u: goto label_1b1dd0;
        case 0x1b1decu: goto label_1b1dec;
        case 0x1b1e08u: goto label_1b1e08;
        case 0x1b1e24u: goto label_1b1e24;
        case 0x1b1e40u: goto label_1b1e40;
        case 0x1b1e5cu: goto label_1b1e5c;
        case 0x1b1e78u: goto label_1b1e78;
        case 0x1b1e94u: goto label_1b1e94;
        case 0x1b1eb0u: goto label_1b1eb0;
        case 0x1b1eccu: goto label_1b1ecc;
        case 0x1b1ee8u: goto label_1b1ee8;
        case 0x1b1f04u: goto label_1b1f04;
        case 0x1b1f20u: goto label_1b1f20;
        case 0x1b1f3cu: goto label_1b1f3c;
        case 0x1b1f58u: goto label_1b1f58;
        default: break;
    }

    ctx->pc = 0x1b1820u;

    // 0x1b1820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b1820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b1824: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b1824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b1828: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b1828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b182c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b1830: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b1830u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b1834: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1b1834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1b1838: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b183c: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x1b183cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    // 0x1b1840: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b1840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1844: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1b1844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1848: 0xaca400b4  sw          $a0, 0xB4($a1)
    ctx->pc = 0x1b1848u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 180), GPR_U32(ctx, 4));
    // 0x1b184c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b184cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1850: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1854: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x1b1854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x1b1858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b185c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b185cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1860: 0xe44000c4  swc1        $f0, 0xC4($v0)
    ctx->pc = 0x1b1860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x1b1864: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1b1864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1868: 0xe48000c0  swc1        $f0, 0xC0($a0)
    ctx->pc = 0x1b1868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
    // 0x1b186c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1b186cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1870: 0xaca000bc  sw          $zero, 0xBC($a1)
    ctx->pc = 0x1b1870u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 188), GPR_U32(ctx, 0));
    // 0x1b1874: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1878: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b187c: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x1b187cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x1b1880: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1884: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1888: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x1b1888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x1b188c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b188cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1890: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1b1890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1894: 0xe4800164  swc1        $f0, 0x164($a0)
    ctx->pc = 0x1b1894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 356), bits); }
    // 0x1b1898: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b189c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1b189cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b18a0: 0xe4a000ec  swc1        $f0, 0xEC($a1)
    ctx->pc = 0x1b18a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 236), bits); }
    // 0x1b18a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b18a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b18a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b18ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b18acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b18b0: 0xe44000dc  swc1        $f0, 0xDC($v0)
    ctx->pc = 0x1b18b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 220), bits); }
    // 0x1b18b4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1b18b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b18b8: 0xe48000d8  swc1        $f0, 0xD8($a0)
    ctx->pc = 0x1b18b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 216), bits); }
    // 0x1b18bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b18bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b18c0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1b18c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b18c4: 0xe4a00174  swc1        $f0, 0x174($a1)
    ctx->pc = 0x1b18c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 372), bits); }
    // 0x1b18c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b18cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b18ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b18d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b18d4: 0xe440017c  swc1        $f0, 0x17C($v0)
    ctx->pc = 0x1b18d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 380), bits); }
    // 0x1b18d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b18d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b18dc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1b18dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b18e0: 0xe48000f0  swc1        $f0, 0xF0($a0)
    ctx->pc = 0x1b18e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
    // 0x1b18e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b18e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b18e8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1b18e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b18ec: 0xe4a000f4  swc1        $f0, 0xF4($a1)
    ctx->pc = 0x1b18ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 244), bits); }
    // 0x1b18f0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b18f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b18f4: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b18f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b18f8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b18f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b18fc: 0xc06c7e0  jal         func_1B1F80
    ctx->pc = 0x1B18FCu;
    SET_GPR_U32(ctx, 31, 0x1B1904u);
    ctx->pc = 0x1B1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F80u, 0x1B18FCu, 0x1B1904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1904u;
label_1b1904:
    // 0x1b1904: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b1904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1908: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B1908u;
    {
        const bool branch_taken_0x1b1908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1908) {
            ctx->pc = 0x1B1968u;
            goto label_1b1968;
        }
    }
    ctx->pc = 0x1B1910u;
label_1b1910:
    // 0x1b1910: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1914: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b1914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b1918: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b191c: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B191Cu;
    SET_GPR_U32(ctx, 31, 0x1B1924u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B191Cu, 0x1B1924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1924u;
label_1b1924:
    // 0x1b1924: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1b1924u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b1928: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b1928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b192c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1930: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b1930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b1934: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1938: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B1938u;
    SET_GPR_U32(ctx, 31, 0x1B1940u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B1938u, 0x1B1940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1940u;
label_1b1940:
    // 0x1b1940: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1940u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1944: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b1944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1948: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1b1948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b194c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1950: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b1950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b1954: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1958: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B1958u;
    SET_GPR_U32(ctx, 31, 0x1B1960u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B1958u, 0x1B1960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1960u;
label_1b1960:
    // 0x1b1960: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x1b1960u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b1964: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b1964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b1968:
    // 0x1b1968: 0x2e02000d  sltiu       $v0, $s0, 0xD
    ctx->pc = 0x1b1968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x1b196c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1B196Cu;
    {
        const bool branch_taken_0x1b196c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b196c) {
            ctx->pc = 0x1B1910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1910;
        }
    }
    ctx->pc = 0x1B1974u;
    // 0x1b1974: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1b1974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1b1978: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1b1978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b197c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b197cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1980: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b1980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b1984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1988: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B1988u;
    SET_GPR_U32(ctx, 31, 0x1B1990u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B1988u, 0x1B1990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1990u;
label_1b1990:
    // 0x1b1990: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x1b1990u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b1994: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1b1994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1b1998: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1b1998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b199c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b19a0: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b19a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b19a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b19a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b19a8: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B19A8u;
    SET_GPR_U32(ctx, 31, 0x1B19B0u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B19A8u, 0x1B19B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B19B0u;
label_1b19b0:
    // 0x1b19b0: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x1b19b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b19b4: 0xc7948390  lwc1        $f20, -0x7C70($gp)
    ctx->pc = 0x1b19b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b19b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b19b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b19bc: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b19bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b19c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b19c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b19c4: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B19C4u;
    SET_GPR_U32(ctx, 31, 0x1B19CCu);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B19C4u, 0x1B19CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B19CCu;
label_1b19cc:
    // 0x1b19cc: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x1b19ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b19d0: 0xc7948390  lwc1        $f20, -0x7C70($gp)
    ctx->pc = 0x1b19d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b19d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b19d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b19d8: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b19d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b19dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b19dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b19e0: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B19E0u;
    SET_GPR_U32(ctx, 31, 0x1B19E8u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B19E0u, 0x1B19E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B19E8u;
label_1b19e8:
    // 0x1b19e8: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x1b19e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b19ec: 0xc7948288  lwc1        $f20, -0x7D78($gp)
    ctx->pc = 0x1b19ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b19f0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b19f4: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b19f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b19f8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b19f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b19fc: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B19FCu;
    SET_GPR_U32(ctx, 31, 0x1B1A04u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B19FCu, 0x1B1A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A04u;
label_1b1a04:
    // 0x1b1a04: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x1b1a04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b1a08: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b1a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b1a0c: 0x24635df0  addiu       $v1, $v1, 0x5DF0
    ctx->pc = 0x1b1a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24048));
    // 0x1b1a10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1a14: 0xac430454  sw          $v1, 0x454($v0)
    ctx->pc = 0x1b1a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1108), GPR_U32(ctx, 3));
    // 0x1b1a18: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b1a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b1a1c: 0x246360b0  addiu       $v1, $v1, 0x60B0
    ctx->pc = 0x1b1a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24752));
    // 0x1b1a20: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1a24: 0xac430458  sw          $v1, 0x458($v0)
    ctx->pc = 0x1b1a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1112), GPR_U32(ctx, 3));
    // 0x1b1a28: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b1a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b1a2c: 0x246361e0  addiu       $v1, $v1, 0x61E0
    ctx->pc = 0x1b1a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25056));
    // 0x1b1a30: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1a34: 0xac43045c  sw          $v1, 0x45C($v0)
    ctx->pc = 0x1b1a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1116), GPR_U32(ctx, 3));
    // 0x1b1a38: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b1a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b1a3c: 0x246365b0  addiu       $v1, $v1, 0x65B0
    ctx->pc = 0x1b1a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26032));
    // 0x1b1a40: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1a44: 0xac430460  sw          $v1, 0x460($v0)
    ctx->pc = 0x1b1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1120), GPR_U32(ctx, 3));
    // 0x1b1a48: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b1a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b1a4c: 0x246366d0  addiu       $v1, $v1, 0x66D0
    ctx->pc = 0x1b1a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26320));
    // 0x1b1a50: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1a54: 0xac430464  sw          $v1, 0x464($v0)
    ctx->pc = 0x1b1a54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1124), GPR_U32(ctx, 3));
    // 0x1b1a58: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b1a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b1a5c: 0x24636850  addiu       $v1, $v1, 0x6850
    ctx->pc = 0x1b1a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26704));
    // 0x1b1a60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1a64: 0xac430468  sw          $v1, 0x468($v0)
    ctx->pc = 0x1b1a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1128), GPR_U32(ctx, 3));
    // 0x1b1a68: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b1a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b1a6c: 0x24636980  addiu       $v1, $v1, 0x6980
    ctx->pc = 0x1b1a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27008));
    // 0x1b1a70: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1a74: 0xac43046c  sw          $v1, 0x46C($v0)
    ctx->pc = 0x1b1a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1132), GPR_U32(ctx, 3));
    // 0x1b1a78: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b1a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b1a7c: 0x24636a20  addiu       $v1, $v1, 0x6A20
    ctx->pc = 0x1b1a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27168));
    // 0x1b1a80: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1a84: 0xac430470  sw          $v1, 0x470($v0)
    ctx->pc = 0x1b1a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1136), GPR_U32(ctx, 3));
    // 0x1b1a88: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b1a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b1a8c: 0x24636b60  addiu       $v1, $v1, 0x6B60
    ctx->pc = 0x1b1a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27488));
    // 0x1b1a90: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1a94: 0xac430474  sw          $v1, 0x474($v0)
    ctx->pc = 0x1b1a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1140), GPR_U32(ctx, 3));
    // 0x1b1a98: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b1a9c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1b1a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x1b1aa0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1aa4: 0xac430478  sw          $v1, 0x478($v0)
    ctx->pc = 0x1b1aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1144), GPR_U32(ctx, 3));
    // 0x1b1aa8: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b1aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b1aac: 0x24636ca0  addiu       $v1, $v1, 0x6CA0
    ctx->pc = 0x1b1aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27808));
    // 0x1b1ab0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1ab4: 0xac43047c  sw          $v1, 0x47C($v0)
    ctx->pc = 0x1b1ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1148), GPR_U32(ctx, 3));
    // 0x1b1ab8: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b1abc: 0x24636db0  addiu       $v1, $v1, 0x6DB0
    ctx->pc = 0x1b1abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28080));
    // 0x1b1ac0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1ac4: 0xac430480  sw          $v1, 0x480($v0)
    ctx->pc = 0x1b1ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1152), GPR_U32(ctx, 3));
    // 0x1b1ac8: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x1b1ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x1b1acc: 0x24636f60  addiu       $v1, $v1, 0x6F60
    ctx->pc = 0x1b1accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28512));
    // 0x1b1ad0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1ad4: 0xac430484  sw          $v1, 0x484($v0)
    ctx->pc = 0x1b1ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1156), GPR_U32(ctx, 3));
    // 0x1b1ad8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b1ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1adc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1ae0: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b1ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b1ae4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1ae8: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B1AE8u;
    SET_GPR_U32(ctx, 31, 0x1B1AF0u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B1AE8u, 0x1B1AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1AF0u;
label_1b1af0:
    // 0x1b1af0: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x1b1af0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1b1af4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1af8: 0x24440184  addiu       $a0, $v0, 0x184
    ctx->pc = 0x1b1af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
    // 0x1b1afc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b1afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b1b00: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x1B1B00u;
    SET_GPR_U32(ctx, 31, 0x1B1B08u);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x1B1B00u, 0x1B1B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B08u;
label_1b1b08:
    // 0x1b1b08: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1b0c: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1b10: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b1b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b1b14: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x1B1B14u;
    SET_GPR_U32(ctx, 31, 0x1B1B1Cu);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x1B1B14u, 0x1B1B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B1Cu;
label_1b1b1c:
    // 0x1b1b1c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1b20: 0x244401b4  addiu       $a0, $v0, 0x1B4
    ctx->pc = 0x1b1b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 436));
    // 0x1b1b24: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b1b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1b28: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x1B1B28u;
    SET_GPR_U32(ctx, 31, 0x1B1B30u);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x1B1B28u, 0x1B1B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B30u;
label_1b1b30:
    // 0x1b1b30: 0xc7948398  lwc1        $f20, -0x7C68($gp)
    ctx->pc = 0x1b1b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1b34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1b38: 0x24440184  addiu       $a0, $v0, 0x184
    ctx->pc = 0x1b1b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
    // 0x1b1b3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b40: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1B40u;
    SET_GPR_U32(ctx, 31, 0x1B1B48u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1B40u, 0x1B1B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B48u;
label_1b1b48:
    // 0x1b1b48: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1b48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1b4c: 0xc794839c  lwc1        $f20, -0x7C64($gp)
    ctx->pc = 0x1b1b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1b50: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1b54: 0x24440184  addiu       $a0, $v0, 0x184
    ctx->pc = 0x1b1b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
    // 0x1b1b58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b5c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1B5Cu;
    SET_GPR_U32(ctx, 31, 0x1B1B64u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1B5Cu, 0x1B1B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B64u;
label_1b1b64:
    // 0x1b1b64: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1b64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1b68: 0xc7948288  lwc1        $f20, -0x7D78($gp)
    ctx->pc = 0x1b1b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1b6c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1b70: 0x24440184  addiu       $a0, $v0, 0x184
    ctx->pc = 0x1b1b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
    // 0x1b1b74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1b78: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1B78u;
    SET_GPR_U32(ctx, 31, 0x1B1B80u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1B78u, 0x1B1B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B80u;
label_1b1b80:
    // 0x1b1b80: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1b80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1b84: 0xc79483a0  lwc1        $f20, -0x7C60($gp)
    ctx->pc = 0x1b1b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1b88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1b8c: 0x24440184  addiu       $a0, $v0, 0x184
    ctx->pc = 0x1b1b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
    // 0x1b1b90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1b94: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1B94u;
    SET_GPR_U32(ctx, 31, 0x1B1B9Cu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1B94u, 0x1B1B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B9Cu;
label_1b1b9c:
    // 0x1b1b9c: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1b9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1ba0: 0xc79481a0  lwc1        $f20, -0x7E60($gp)
    ctx->pc = 0x1b1ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1ba4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1ba8: 0x24440184  addiu       $a0, $v0, 0x184
    ctx->pc = 0x1b1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
    // 0x1b1bac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b1bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1bb0: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1BB0u;
    SET_GPR_U32(ctx, 31, 0x1B1BB8u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1BB0u, 0x1B1BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BB8u;
label_1b1bb8:
    // 0x1b1bb8: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1bb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1bbc: 0xc79483a4  lwc1        $f20, -0x7C5C($gp)
    ctx->pc = 0x1b1bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1bc0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1bc4: 0x24440184  addiu       $a0, $v0, 0x184
    ctx->pc = 0x1b1bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
    // 0x1b1bc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b1bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1bcc: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1BCCu;
    SET_GPR_U32(ctx, 31, 0x1B1BD4u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1BCCu, 0x1B1BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BD4u;
label_1b1bd4:
    // 0x1b1bd4: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1bd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1bd8: 0xc79483a8  lwc1        $f20, -0x7C58($gp)
    ctx->pc = 0x1b1bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1bdc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1be0: 0x24440184  addiu       $a0, $v0, 0x184
    ctx->pc = 0x1b1be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
    // 0x1b1be4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b1be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1be8: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1BE8u;
    SET_GPR_U32(ctx, 31, 0x1B1BF0u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1BE8u, 0x1B1BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BF0u;
label_1b1bf0:
    // 0x1b1bf0: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1bf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1bf4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b1bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b1bf8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1bfc: 0x24440184  addiu       $a0, $v0, 0x184
    ctx->pc = 0x1b1bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
    // 0x1b1c00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b1c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1c04: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1C04u;
    SET_GPR_U32(ctx, 31, 0x1B1C0Cu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1C04u, 0x1B1C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C0Cu;
label_1b1c0c:
    // 0x1b1c0c: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1c0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1c10: 0xc79483a8  lwc1        $f20, -0x7C58($gp)
    ctx->pc = 0x1b1c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1c14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1c18: 0x24440184  addiu       $a0, $v0, 0x184
    ctx->pc = 0x1b1c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
    // 0x1b1c1c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b1c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1c20: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1C20u;
    SET_GPR_U32(ctx, 31, 0x1B1C28u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1C20u, 0x1B1C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C28u;
label_1b1c28:
    // 0x1b1c28: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1c28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1c2c: 0xc79481b0  lwc1        $f20, -0x7E50($gp)
    ctx->pc = 0x1b1c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1c30: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1c34: 0x24440184  addiu       $a0, $v0, 0x184
    ctx->pc = 0x1b1c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
    // 0x1b1c38: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b1c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1c3c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1C3Cu;
    SET_GPR_U32(ctx, 31, 0x1B1C44u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1C3Cu, 0x1B1C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C44u;
label_1b1c44:
    // 0x1b1c44: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1c44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1c48: 0xc7948288  lwc1        $f20, -0x7D78($gp)
    ctx->pc = 0x1b1c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1c4c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1c50: 0x24440184  addiu       $a0, $v0, 0x184
    ctx->pc = 0x1b1c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
    // 0x1b1c54: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b1c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1c58: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1C58u;
    SET_GPR_U32(ctx, 31, 0x1B1C60u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1C58u, 0x1B1C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C60u;
label_1b1c60:
    // 0x1b1c60: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1c60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1c64: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1b1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1b1c68: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1b1c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b1c6c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1c70: 0x24440184  addiu       $a0, $v0, 0x184
    ctx->pc = 0x1b1c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
    // 0x1b1c74: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b1c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1c78: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1C78u;
    SET_GPR_U32(ctx, 31, 0x1B1C80u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1C78u, 0x1B1C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C80u;
label_1b1c80:
    // 0x1b1c80: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1c80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1c84: 0xc7948398  lwc1        $f20, -0x7C68($gp)
    ctx->pc = 0x1b1c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1c88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1c8c: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1c90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c94: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1C94u;
    SET_GPR_U32(ctx, 31, 0x1B1C9Cu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1C94u, 0x1B1C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C9Cu;
label_1b1c9c:
    // 0x1b1c9c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1c9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1ca0: 0xc794839c  lwc1        $f20, -0x7C64($gp)
    ctx->pc = 0x1b1ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1ca4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1ca8: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1cb0: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1CB0u;
    SET_GPR_U32(ctx, 31, 0x1B1CB8u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1CB0u, 0x1B1CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1CB8u;
label_1b1cb8:
    // 0x1b1cb8: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1cb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1cbc: 0xc7948288  lwc1        $f20, -0x7D78($gp)
    ctx->pc = 0x1b1cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1cc0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1cc4: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1cc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1ccc: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1CCCu;
    SET_GPR_U32(ctx, 31, 0x1B1CD4u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1CCCu, 0x1B1CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1CD4u;
label_1b1cd4:
    // 0x1b1cd4: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1cd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1cd8: 0xc79483a0  lwc1        $f20, -0x7C60($gp)
    ctx->pc = 0x1b1cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1cdc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1ce0: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1ce4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1ce8: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1CE8u;
    SET_GPR_U32(ctx, 31, 0x1B1CF0u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1CE8u, 0x1B1CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1CF0u;
label_1b1cf0:
    // 0x1b1cf0: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1cf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1cf4: 0xc79481a0  lwc1        $f20, -0x7E60($gp)
    ctx->pc = 0x1b1cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1cf8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1cfc: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1d00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b1d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1d04: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1D04u;
    SET_GPR_U32(ctx, 31, 0x1B1D0Cu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1D04u, 0x1B1D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D0Cu;
label_1b1d0c:
    // 0x1b1d0c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1d0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1d10: 0xc79483a4  lwc1        $f20, -0x7C5C($gp)
    ctx->pc = 0x1b1d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1d14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1d18: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1d1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b1d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1d20: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1D20u;
    SET_GPR_U32(ctx, 31, 0x1B1D28u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1D20u, 0x1B1D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D28u;
label_1b1d28:
    // 0x1b1d28: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1d28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1d2c: 0xc79483a8  lwc1        $f20, -0x7C58($gp)
    ctx->pc = 0x1b1d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1d30: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1d34: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1d38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b1d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1d3c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1D3Cu;
    SET_GPR_U32(ctx, 31, 0x1B1D44u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1D3Cu, 0x1B1D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D44u;
label_1b1d44:
    // 0x1b1d44: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1d44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1d48: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b1d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b1d4c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1d50: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1d54: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b1d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1d58: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1D58u;
    SET_GPR_U32(ctx, 31, 0x1B1D60u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1D58u, 0x1B1D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D60u;
label_1b1d60:
    // 0x1b1d60: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1d60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1d64: 0xc79483ac  lwc1        $f20, -0x7C54($gp)
    ctx->pc = 0x1b1d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1d68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1d6c: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1d70: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b1d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1d74: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1D74u;
    SET_GPR_U32(ctx, 31, 0x1B1D7Cu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1D74u, 0x1B1D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D7Cu;
label_1b1d7c:
    // 0x1b1d7c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1d7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1d80: 0xc79482a4  lwc1        $f20, -0x7D5C($gp)
    ctx->pc = 0x1b1d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1d84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1d88: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1d8c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b1d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1d90: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1D90u;
    SET_GPR_U32(ctx, 31, 0x1B1D98u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1D90u, 0x1B1D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D98u;
label_1b1d98:
    // 0x1b1d98: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1d98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1d9c: 0xc79483b0  lwc1        $f20, -0x7C50($gp)
    ctx->pc = 0x1b1d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1da0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1da4: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1da8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b1da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1dac: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1DACu;
    SET_GPR_U32(ctx, 31, 0x1B1DB4u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1DACu, 0x1B1DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DB4u;
label_1b1db4:
    // 0x1b1db4: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1db4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1db8: 0xc79483b4  lwc1        $f20, -0x7C4C($gp)
    ctx->pc = 0x1b1db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1dbc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1dc0: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1dc4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b1dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1dc8: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1DC8u;
    SET_GPR_U32(ctx, 31, 0x1B1DD0u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1DC8u, 0x1B1DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DD0u;
label_1b1dd0:
    // 0x1b1dd0: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1dd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1dd4: 0xc79481b0  lwc1        $f20, -0x7E50($gp)
    ctx->pc = 0x1b1dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1dd8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1ddc: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1de0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b1de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b1de4: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1DE4u;
    SET_GPR_U32(ctx, 31, 0x1B1DECu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1DE4u, 0x1B1DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DECu;
label_1b1dec:
    // 0x1b1dec: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1decu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1df0: 0xc79483b8  lwc1        $f20, -0x7C48($gp)
    ctx->pc = 0x1b1df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1df4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1df8: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1dfc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b1dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b1e00: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1E00u;
    SET_GPR_U32(ctx, 31, 0x1B1E08u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1E00u, 0x1B1E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E08u;
label_1b1e08:
    // 0x1b1e08: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1e08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1e0c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b1e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b1e10: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1e14: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1e18: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b1e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b1e1c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1E1Cu;
    SET_GPR_U32(ctx, 31, 0x1B1E24u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1E1Cu, 0x1B1E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E24u;
label_1b1e24:
    // 0x1b1e24: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1e24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1e28: 0xc79481b8  lwc1        $f20, -0x7E48($gp)
    ctx->pc = 0x1b1e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1e2c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1e30: 0x2444019c  addiu       $a0, $v0, 0x19C
    ctx->pc = 0x1b1e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x1b1e34: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b1e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b1e38: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1E38u;
    SET_GPR_U32(ctx, 31, 0x1B1E40u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1E38u, 0x1B1E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E40u;
label_1b1e40:
    // 0x1b1e40: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1e40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1e44: 0xc79483bc  lwc1        $f20, -0x7C44($gp)
    ctx->pc = 0x1b1e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1e48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1e4c: 0x244401b4  addiu       $a0, $v0, 0x1B4
    ctx->pc = 0x1b1e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 436));
    // 0x1b1e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e54: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1E54u;
    SET_GPR_U32(ctx, 31, 0x1B1E5Cu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1E54u, 0x1B1E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E5Cu;
label_1b1e5c:
    // 0x1b1e5c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1e5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1e60: 0xc79483c0  lwc1        $f20, -0x7C40($gp)
    ctx->pc = 0x1b1e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1e64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1e68: 0x244401b4  addiu       $a0, $v0, 0x1B4
    ctx->pc = 0x1b1e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 436));
    // 0x1b1e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1e70: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1E70u;
    SET_GPR_U32(ctx, 31, 0x1B1E78u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1E70u, 0x1B1E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E78u;
label_1b1e78:
    // 0x1b1e78: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1e78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1e7c: 0xc79483ac  lwc1        $f20, -0x7C54($gp)
    ctx->pc = 0x1b1e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1e80: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1e84: 0x244401b4  addiu       $a0, $v0, 0x1B4
    ctx->pc = 0x1b1e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 436));
    // 0x1b1e88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1e8c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1E8Cu;
    SET_GPR_U32(ctx, 31, 0x1B1E94u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1E8Cu, 0x1B1E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E94u;
label_1b1e94:
    // 0x1b1e94: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1e94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1e98: 0xc79483c4  lwc1        $f20, -0x7C3C($gp)
    ctx->pc = 0x1b1e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1e9c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1ea0: 0x244401b4  addiu       $a0, $v0, 0x1B4
    ctx->pc = 0x1b1ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 436));
    // 0x1b1ea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1ea8: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1EA8u;
    SET_GPR_U32(ctx, 31, 0x1B1EB0u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1EA8u, 0x1B1EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1EB0u;
label_1b1eb0:
    // 0x1b1eb0: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1eb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1eb4: 0xc79481b8  lwc1        $f20, -0x7E48($gp)
    ctx->pc = 0x1b1eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1eb8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1ebc: 0x244401b4  addiu       $a0, $v0, 0x1B4
    ctx->pc = 0x1b1ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 436));
    // 0x1b1ec0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b1ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1ec4: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1EC4u;
    SET_GPR_U32(ctx, 31, 0x1B1ECCu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1EC4u, 0x1B1ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1ECCu;
label_1b1ecc:
    // 0x1b1ecc: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1eccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1ed0: 0xc79483c8  lwc1        $f20, -0x7C38($gp)
    ctx->pc = 0x1b1ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1ed4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1ed8: 0x244401b4  addiu       $a0, $v0, 0x1B4
    ctx->pc = 0x1b1ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 436));
    // 0x1b1edc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b1edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1ee0: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1EE0u;
    SET_GPR_U32(ctx, 31, 0x1B1EE8u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1EE0u, 0x1B1EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1EE8u;
label_1b1ee8:
    // 0x1b1ee8: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1ee8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1eec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b1eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b1ef0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1ef4: 0x244401b4  addiu       $a0, $v0, 0x1B4
    ctx->pc = 0x1b1ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 436));
    // 0x1b1ef8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b1ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1efc: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1EFCu;
    SET_GPR_U32(ctx, 31, 0x1B1F04u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1EFCu, 0x1B1F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F04u;
label_1b1f04:
    // 0x1b1f04: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1f04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1f08: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b1f08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b1f0c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1f10: 0x244401b4  addiu       $a0, $v0, 0x1B4
    ctx->pc = 0x1b1f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 436));
    // 0x1b1f14: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b1f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1f18: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1F18u;
    SET_GPR_U32(ctx, 31, 0x1B1F20u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1F18u, 0x1B1F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F20u;
label_1b1f20:
    // 0x1b1f20: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1f20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1f24: 0xc794839c  lwc1        $f20, -0x7C64($gp)
    ctx->pc = 0x1b1f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1f28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1f2c: 0x244401b4  addiu       $a0, $v0, 0x1B4
    ctx->pc = 0x1b1f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 436));
    // 0x1b1f30: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b1f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1f34: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1F34u;
    SET_GPR_U32(ctx, 31, 0x1B1F3Cu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1F34u, 0x1B1F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F3Cu;
label_1b1f3c:
    // 0x1b1f3c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b1f3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b1f40: 0xc79483cc  lwc1        $f20, -0x7C34($gp)
    ctx->pc = 0x1b1f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1f44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1f48: 0x244401b4  addiu       $a0, $v0, 0x1B4
    ctx->pc = 0x1b1f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 436));
    // 0x1b1f4c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b1f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1f50: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B1F50u;
    SET_GPR_U32(ctx, 31, 0x1B1F58u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B1F50u, 0x1B1F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F58u;
label_1b1f58:
    // 0x1b1f58: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b1f58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1f5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b1f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1f60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b1f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1f64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b1f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1f68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b1f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1f6c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b1f6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b1f70: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1F78u;
    // 0x1b1f78: 0x0  nop
    ctx->pc = 0x1b1f78u;
    // NOP
    // 0x1b1f7c: 0x0  nop
    ctx->pc = 0x1b1f7cu;
    // NOP
    ctx->pc = 0x1b1f80u;
}
