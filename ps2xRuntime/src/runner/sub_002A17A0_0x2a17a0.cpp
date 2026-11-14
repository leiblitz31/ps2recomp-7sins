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

// Function: sub_002A17A0
// Address: 0x2a17a0 - 0x2a1af0
void sub_002A17A0_0x2a17a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A17A0_0x2a17a0");
#endif

    switch (ctx->pc) {
        case 0x2a17e0u: goto label_2a17e0;
        case 0x2a17fcu: goto label_2a17fc;
        case 0x2a180cu: goto label_2a180c;
        case 0x2a1824u: goto label_2a1824;
        case 0x2a183cu: goto label_2a183c;
        case 0x2a186cu: goto label_2a186c;
        case 0x2a18b0u: goto label_2a18b0;
        case 0x2a18d4u: goto label_2a18d4;
        case 0x2a1918u: goto label_2a1918;
        case 0x2a193cu: goto label_2a193c;
        case 0x2a1974u: goto label_2a1974;
        case 0x2a1990u: goto label_2a1990;
        case 0x2a19a4u: goto label_2a19a4;
        case 0x2a19b4u: goto label_2a19b4;
        case 0x2a19f0u: goto label_2a19f0;
        case 0x2a1a14u: goto label_2a1a14;
        case 0x2a1a38u: goto label_2a1a38;
        case 0x2a1a5cu: goto label_2a1a5c;
        case 0x2a1a80u: goto label_2a1a80;
        case 0x2a1a98u: goto label_2a1a98;
        case 0x2a1aa8u: goto label_2a1aa8;
        case 0x2a1ab4u: goto label_2a1ab4;
        default: break;
    }

    ctx->pc = 0x2a17a0u;

    // 0x2a17a0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2a17a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2a17a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a17a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a17a8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a17a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2a17ac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a17acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a17b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a17b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a17b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a17b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a17b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a17b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a17bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a17bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a17c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a17c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a17c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a17c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a17c8: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x2a17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x2a17cc: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x2a17ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x2a17d0: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x2a17d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x2a17d4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2a17d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a17d8: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x2A17D8u;
    SET_GPR_U32(ctx, 31, 0x2A17E0u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x2A17D8u, 0x2A17E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A17E0u;
label_2a17e0:
    // 0x2a17e0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2a17e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17e4: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x2a17e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x2a17e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a17e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a17ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a17f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17f4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2A17F4u;
    {
        const bool branch_taken_0x2a17f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a17f4) {
            ctx->pc = 0x2A19C4u;
            goto label_2a19c4;
        }
    }
    ctx->pc = 0x2A17FCu;
label_2a17fc:
    // 0x2a17fc: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2a17fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a1800: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a1800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1804: 0xc0c8812  jal         func_322048
    ctx->pc = 0x2A1804u;
    SET_GPR_U32(ctx, 31, 0x2A180Cu);
    ctx->pc = 0x322048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322048u, 0x2A1804u, 0x2A180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A180Cu;
label_2a180c:
    // 0x2a180c: 0x1002006c  beq         $zero, $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x2A180Cu;
    {
        const bool branch_taken_0x2a180c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a180c) {
            ctx->pc = 0x2A19C0u;
            goto label_2a19c0;
        }
    }
    ctx->pc = 0x2A1814u;
    // 0x2a1814: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a1814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a1818: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2a1818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a181c: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2A181Cu;
    SET_GPR_U32(ctx, 31, 0x2A1824u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A181Cu, 0x2A1824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1824u;
label_2a1824:
    // 0x2a1824: 0x26220031  addiu       $v0, $s1, 0x31
    ctx->pc = 0x2a1824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 49));
    // 0x2a1828: 0x2be3c  dsll32      $s7, $v0, 24
    ctx->pc = 0x2a1828u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2a182c: 0x17be3f  dsra32      $s7, $s7, 24
    ctx->pc = 0x2a182cu;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
    // 0x2a1830: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a1830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a1834: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A1834u;
    SET_GPR_U32(ctx, 31, 0x2A183Cu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A1834u, 0x2A183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A183Cu;
label_2a183c:
    // 0x2a183c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a183cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a1840: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a1840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a1844: 0xa0570090  sb          $s7, 0x90($v0)
    ctx->pc = 0x2a1844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 144), (uint8_t)GPR_U32(ctx, 23));
    // 0x2a1848: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a1848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a184c: 0x9042019c  lbu         $v0, 0x19C($v0)
    ctx->pc = 0x2a184cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 412)));
    // 0x2a1850: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a1850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1854: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2A1854u;
    {
        const bool branch_taken_0x2a1854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1854) {
            ctx->pc = 0x2A18C4u;
            goto label_2a18c4;
        }
    }
    ctx->pc = 0x2A185Cu;
    // 0x2a185c: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x2a185cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a1860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a1860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1864: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A1864u;
    SET_GPR_U32(ctx, 31, 0x2A186Cu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A1864u, 0x2A186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A186Cu;
label_2a186c:
    // 0x2a186c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a1870: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2a1870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2a1874: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2a1874u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1878: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2a1878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2a187c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2a187cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2a1880: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2a1880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2a1884: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A1884u;
    {
        const bool branch_taken_0x2a1884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a1884) {
            ctx->pc = 0x2A1924u;
            goto label_2a1924;
        }
    }
    ctx->pc = 0x2A188Cu;
    // 0x2a188c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a188cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a1890: 0x8c420194  lw          $v0, 0x194($v0)
    ctx->pc = 0x2a1890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
    // 0x2a1894: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2a1894u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a1898: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A1898u;
    {
        const bool branch_taken_0x2a1898 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1898) {
            ctx->pc = 0x2A1924u;
            goto label_2a1924;
        }
    }
    ctx->pc = 0x2A18A0u;
    // 0x2a18a0: 0x24170032  addiu       $s7, $zero, 0x32
    ctx->pc = 0x2a18a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2a18a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a18a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18a8: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A18A8u;
    SET_GPR_U32(ctx, 31, 0x2A18B0u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A18A8u, 0x2A18B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A18B0u;
label_2a18b0:
    // 0x2a18b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a18b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a18b4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2a18b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2a18b8: 0xa0570000  sb          $s7, 0x0($v0)
    ctx->pc = 0x2a18b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 23));
    // 0x2a18bc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2A18BCu;
    {
        const bool branch_taken_0x2a18bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a18bc) {
            ctx->pc = 0x2A1924u;
            goto label_2a1924;
        }
    }
    ctx->pc = 0x2A18C4u;
label_2a18c4:
    // 0x2a18c4: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x2a18c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a18c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a18c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a18cc: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A18CCu;
    SET_GPR_U32(ctx, 31, 0x2A18D4u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A18CCu, 0x2A18D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A18D4u;
label_2a18d4:
    // 0x2a18d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a18d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a18d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2a18d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a18dc: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2a18dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a18e0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2a18e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2a18e4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2a18e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2a18e8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2a18e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2a18ec: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A18ECu;
    {
        const bool branch_taken_0x2a18ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a18ec) {
            ctx->pc = 0x2A1924u;
            goto label_2a1924;
        }
    }
    ctx->pc = 0x2A18F4u;
    // 0x2a18f4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a18f8: 0x8c420194  lw          $v0, 0x194($v0)
    ctx->pc = 0x2a18f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
    // 0x2a18fc: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2a18fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a1900: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A1900u;
    {
        const bool branch_taken_0x2a1900 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1900) {
            ctx->pc = 0x2A1924u;
            goto label_2a1924;
        }
    }
    ctx->pc = 0x2A1908u;
    // 0x2a1908: 0x24170031  addiu       $s7, $zero, 0x31
    ctx->pc = 0x2a1908u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2a190c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a190cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1910: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A1910u;
    SET_GPR_U32(ctx, 31, 0x2A1918u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A1910u, 0x2A1918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1918u;
label_2a1918:
    // 0x2a1918: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a1918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a191c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2a191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a1920: 0xa0570000  sb          $s7, 0x0($v0)
    ctx->pc = 0x2a1920u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 23));
label_2a1924:
    // 0x2a1924: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a1924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a1928: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2a1928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a192c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2a192cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a1930: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a1930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1934: 0xc08a320  jal         func_228C80
    ctx->pc = 0x2A1934u;
    SET_GPR_U32(ctx, 31, 0x2A193Cu);
    ctx->pc = 0x228C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C80u, 0x2A1934u, 0x2A193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A193Cu;
label_2a193c:
    // 0x2a193c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a193cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1940: 0x14100004  bne         $zero, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1940u;
    {
        const bool branch_taken_0x2a1940 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 16));
        if (branch_taken_0x2a1940) {
            ctx->pc = 0x2A1954u;
            goto label_2a1954;
        }
    }
    ctx->pc = 0x2A1948u;
    // 0x2a1948: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A1948u;
    {
        const bool branch_taken_0x2a1948 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1948) {
            ctx->pc = 0x2A1954u;
            goto label_2a1954;
        }
    }
    ctx->pc = 0x2A1950u;
    // 0x2a1950: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2a1950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a1954:
    // 0x2a1954: 0x10100017  beq         $zero, $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A1954u;
    {
        const bool branch_taken_0x2a1954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x2a1954) {
            ctx->pc = 0x2A19B4u;
            goto label_2a19b4;
        }
    }
    ctx->pc = 0x2A195Cu;
    // 0x2a195c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a195cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1960: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a1960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2a1964: 0x24a502b0  addiu       $a1, $a1, 0x2B0
    ctx->pc = 0x2a1964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 688));
    // 0x2a1968: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x2a1968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x2a196c: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x2A196Cu;
    SET_GPR_U32(ctx, 31, 0x2A1974u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x2A196Cu, 0x2A1974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1974u;
label_2a1974:
    // 0x2a1974: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2a1974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2a1978: 0x8c550018  lw          $s5, 0x18($v0)
    ctx->pc = 0x2a1978u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2a197c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2a197cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a1980: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2a1980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1984: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a1984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1988: 0xc0e2836  jal         func_38A0D8
    ctx->pc = 0x2A1988u;
    SET_GPR_U32(ctx, 31, 0x2A1990u);
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x2A1988u, 0x2A1990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1990u;
label_2a1990:
    // 0x2a1990: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2a1990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a1994: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a1994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1998: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2a1998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a199c: 0xc0c8784  jal         func_321E10
    ctx->pc = 0x2A199Cu;
    SET_GPR_U32(ctx, 31, 0x2A19A4u);
    ctx->pc = 0x321E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321E10u, 0x2A199Cu, 0x2A19A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A19A4u;
label_2a19a4:
    // 0x2a19a4: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a19a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a19a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a19a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a19ac: 0xc08a614  jal         func_229850
    ctx->pc = 0x2A19ACu;
    SET_GPR_U32(ctx, 31, 0x2A19B4u);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x2A19ACu, 0x2A19B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A19B4u;
label_2a19b4:
    // 0x2a19b4: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A19B4u;
    {
        const bool branch_taken_0x2a19b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a19b4) {
            ctx->pc = 0x2A19C0u;
            goto label_2a19c0;
        }
    }
    ctx->pc = 0x2A19BCu;
    // 0x2a19bc: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2a19bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a19c0:
    // 0x2a19c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a19c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a19c4:
    // 0x2a19c4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a19c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a19c8: 0x8c420194  lw          $v0, 0x194($v0)
    ctx->pc = 0x2a19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
    // 0x2a19cc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2a19ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a19d0: 0x1440ff8a  bnez        $v0, . + 4 + (-0x76 << 2)
    ctx->pc = 0x2A19D0u;
    {
        const bool branch_taken_0x2a19d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a19d0) {
            ctx->pc = 0x2A17FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a17fc;
        }
    }
    ctx->pc = 0x2A19D8u;
    // 0x2a19d8: 0x14140033  bne         $zero, $s4, . + 4 + (0x33 << 2)
    ctx->pc = 0x2A19D8u;
    {
        const bool branch_taken_0x2a19d8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 20));
        if (branch_taken_0x2a19d8) {
            ctx->pc = 0x2A1AA8u;
            goto label_2a1aa8;
        }
    }
    ctx->pc = 0x2A19E0u;
    // 0x2a19e0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a19e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a19e4: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2a19e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a19e8: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2A19E8u;
    SET_GPR_U32(ctx, 31, 0x2A19F0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A19E8u, 0x2A19F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A19F0u;
label_2a19f0:
    // 0x2a19f0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2a19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a19f4: 0x8c420194  lw          $v0, 0x194($v0)
    ctx->pc = 0x2a19f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
    // 0x2a19f8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2a19f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a19fc: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2A19FCu;
    {
        const bool branch_taken_0x2a19fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a19fc) {
            ctx->pc = 0x2A1A28u;
            goto label_2a1a28;
        }
    }
    ctx->pc = 0x2A1A04u;
    // 0x2a1a04: 0x24170032  addiu       $s7, $zero, 0x32
    ctx->pc = 0x2a1a04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2a1a08: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a1a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a1a0c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A1A0Cu;
    SET_GPR_U32(ctx, 31, 0x2A1A14u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A1A0Cu, 0x2A1A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A14u;
label_2a1a14:
    // 0x2a1a14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a1a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a1a18: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a1a1c: 0xa0570090  sb          $s7, 0x90($v0)
    ctx->pc = 0x2a1a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 144), (uint8_t)GPR_U32(ctx, 23));
    // 0x2a1a20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A1A20u;
    {
        const bool branch_taken_0x2a1a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1a20) {
            ctx->pc = 0x2A1A44u;
            goto label_2a1a44;
        }
    }
    ctx->pc = 0x2A1A28u;
label_2a1a28:
    // 0x2a1a28: 0x24170031  addiu       $s7, $zero, 0x31
    ctx->pc = 0x2a1a28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2a1a2c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a1a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a1a30: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A1A30u;
    SET_GPR_U32(ctx, 31, 0x2A1A38u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A1A30u, 0x2A1A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A38u;
label_2a1a38:
    // 0x2a1a38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a1a3c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a1a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a1a40: 0xa0570090  sb          $s7, 0x90($v0)
    ctx->pc = 0x2a1a40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 144), (uint8_t)GPR_U32(ctx, 23));
label_2a1a44:
    // 0x2a1a44: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a1a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a1a48: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2a1a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a1a4c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2a1a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a1a50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a1a50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a54: 0xc08a320  jal         func_228C80
    ctx->pc = 0x2A1A54u;
    SET_GPR_U32(ctx, 31, 0x2A1A5Cu);
    ctx->pc = 0x228C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C80u, 0x2A1A54u, 0x2A1A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A5Cu;
label_2a1a5c:
    // 0x2a1a5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a1a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a60: 0x10100011  beq         $zero, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A1A60u;
    {
        const bool branch_taken_0x2a1a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x2a1a60) {
            ctx->pc = 0x2A1AA8u;
            goto label_2a1aa8;
        }
    }
    ctx->pc = 0x2A1A68u;
    // 0x2a1a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1a6c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a1a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2a1a70: 0x24a502b0  addiu       $a1, $a1, 0x2B0
    ctx->pc = 0x2a1a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 688));
    // 0x2a1a74: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x2a1a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x2a1a78: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x2A1A78u;
    SET_GPR_U32(ctx, 31, 0x2A1A80u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x2A1A78u, 0x2A1A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A80u;
label_2a1a80:
    // 0x2a1a80: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2a1a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2a1a84: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2a1a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a1a88: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2a1a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2a1a8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a1a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1a90: 0xc0e2836  jal         func_38A0D8
    ctx->pc = 0x2A1A90u;
    SET_GPR_U32(ctx, 31, 0x2A1A98u);
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x2A1A90u, 0x2A1A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A98u;
label_2a1a98:
    // 0x2a1a98: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a1a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a1a9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a1a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1aa0: 0xc08a614  jal         func_229850
    ctx->pc = 0x2A1AA0u;
    SET_GPR_U32(ctx, 31, 0x2A1AA8u);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x2A1AA0u, 0x2A1AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1AA8u;
label_2a1aa8:
    // 0x2a1aa8: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a1aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a1aac: 0xc08a648  jal         func_229920
    ctx->pc = 0x2A1AACu;
    SET_GPR_U32(ctx, 31, 0x2A1AB4u);
    ctx->pc = 0x229920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229920u, 0x2A1AACu, 0x2A1AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1AB4u;
label_2a1ab4:
    // 0x2a1ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a1ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1ab8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a1ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a1abc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a1abcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1ac0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a1ac0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1ac4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a1ac4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a1ac8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a1ac8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1acc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a1accu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1ad0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a1ad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1ad4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a1ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1ad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1adc: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2a1adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a1ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1AE8u;
    // 0x2a1ae8: 0x0  nop
    ctx->pc = 0x2a1ae8u;
    // NOP
    // 0x2a1aec: 0x0  nop
    ctx->pc = 0x2a1aecu;
    // NOP
    ctx->pc = 0x2a1af0u;
}
