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

// Function: sub_001C1960
// Address: 0x1c1960 - 0x1c1f70
void sub_001C1960_0x1c1960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1960_0x1c1960");
#endif

    switch (ctx->pc) {
        case 0x1c19b0u: goto label_1c19b0;
        case 0x1c19bcu: goto label_1c19bc;
        case 0x1c19dcu: goto label_1c19dc;
        case 0x1c19e8u: goto label_1c19e8;
        case 0x1c1a60u: goto label_1c1a60;
        case 0x1c1a74u: goto label_1c1a74;
        case 0x1c1a84u: goto label_1c1a84;
        case 0x1c1aa0u: goto label_1c1aa0;
        case 0x1c1ac8u: goto label_1c1ac8;
        case 0x1c1ae8u: goto label_1c1ae8;
        case 0x1c1afcu: goto label_1c1afc;
        case 0x1c1b34u: goto label_1c1b34;
        case 0x1c1b44u: goto label_1c1b44;
        case 0x1c1b64u: goto label_1c1b64;
        case 0x1c1b84u: goto label_1c1b84;
        case 0x1c1d5cu: goto label_1c1d5c;
        case 0x1c1de4u: goto label_1c1de4;
        case 0x1c1e10u: goto label_1c1e10;
        case 0x1c1e1cu: goto label_1c1e1c;
        case 0x1c1e2cu: goto label_1c1e2c;
        case 0x1c1e44u: goto label_1c1e44;
        case 0x1c1e54u: goto label_1c1e54;
        case 0x1c1eacu: goto label_1c1eac;
        case 0x1c1edcu: goto label_1c1edc;
        case 0x1c1ef0u: goto label_1c1ef0;
        case 0x1c1f00u: goto label_1c1f00;
        default: break;
    }

    ctx->pc = 0x1c1960u;

    // 0x1c1960: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1c1960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x1c1964: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c1964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c1968: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1c1968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1c196c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c196cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c1970: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c1970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c1974: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c1974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c1978: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c1978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c197c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c197cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c1980: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c1980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c1984: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c1988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c198c: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x1c198cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x1c1990: 0xa3a001af  sb          $zero, 0x1AF($sp)
    ctx->pc = 0x1c1990u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 431), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1994: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x1c1994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
    // 0x1c1998: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x1c1998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
    // 0x1c199c: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x1c199cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
    // 0x1c19a0: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x1c19a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x1c19a4: 0xafa00194  sw          $zero, 0x194($sp)
    ctx->pc = 0x1c19a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 0));
    // 0x1c19a8: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x1c19a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x1c19ac: 0x27b700a0  addiu       $s7, $sp, 0xA0
    ctx->pc = 0x1c19acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c19b0:
    // 0x1c19b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c19b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19b4: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1C19B4u;
    SET_GPR_U32(ctx, 31, 0x1C19BCu);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1C19B4u, 0x1C19BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C19BCu;
label_1c19bc:
    // 0x1c19bc: 0x26f7000c  addiu       $s7, $s7, 0xC
    ctx->pc = 0x1c19bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    // 0x1c19c0: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x1c19c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1c19c4: 0x0  nop
    ctx->pc = 0x1c19c4u;
    // NOP
    // 0x1c19c8: 0x16e3fff9  bne         $s7, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C19C8u;
    {
        const bool branch_taken_0x1c19c8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c19c8) {
            ctx->pc = 0x1C19B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c19b0;
        }
    }
    ctx->pc = 0x1C19D0u;
    // 0x1c19d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c19d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19d4: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x1C19D4u;
    {
        const bool branch_taken_0x1c19d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c19d4) {
            ctx->pc = 0x1C1F1Cu;
            goto label_1c1f1c;
        }
    }
    ctx->pc = 0x1C19DCu;
label_1c19dc:
    // 0x1c19dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c19dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c19e0: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x1C19E0u;
    {
        const bool branch_taken_0x1c19e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c19e0) {
            ctx->pc = 0x1C1F04u;
            goto label_1c1f04;
        }
    }
    ctx->pc = 0x1C19E8u;
label_1c19e8:
    // 0x1c19e8: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1c19e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c19ec: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x1c19ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1c19f0: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1c19f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1c19f4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1c19f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c19f8: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x1c19f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1c19fc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1c19fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1c1a00: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1c1a00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c1a04: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1c1a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c1a08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c1a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c1a0c: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x1c1a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x1c1a10: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1c1a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c1a14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c1a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1a18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1a1c: 0x14830138  bne         $a0, $v1, . + 4 + (0x138 << 2)
    ctx->pc = 0x1C1A1Cu;
    {
        const bool branch_taken_0x1c1a1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c1a1c) {
            ctx->pc = 0x1C1F00u;
            goto label_1c1f00;
        }
    }
    ctx->pc = 0x1C1A24u;
    // 0x1c1a24: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1c1a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c1a28: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x1c1a28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c1a2c: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x1c1a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c1a30: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1c1a30u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1c1a34: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1c1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c1a38: 0x80420008  lb          $v0, 0x8($v0)
    ctx->pc = 0x1c1a38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c1a3c: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1c1a3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c1a40: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1c1a40u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1c1a44: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1c1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c1a48: 0x80420009  lb          $v0, 0x9($v0)
    ctx->pc = 0x1c1a48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1c1a4c: 0x23e3c  dsll32      $a3, $v0, 24
    ctx->pc = 0x1c1a4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c1a50: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x1c1a50u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x1c1a54: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x1c1a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1a58: 0xc0701bc  jal         func_1C06F0
    ctx->pc = 0x1C1A58u;
    SET_GPR_U32(ctx, 31, 0x1C1A60u);
    ctx->pc = 0x1C06F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C06F0u, 0x1C1A58u, 0x1C1A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A60u;
label_1c1a60:
    // 0x1c1a60: 0x14400127  bnez        $v0, . + 4 + (0x127 << 2)
    ctx->pc = 0x1C1A60u;
    {
        const bool branch_taken_0x1c1a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1a60) {
            ctx->pc = 0x1C1F00u;
            goto label_1c1f00;
        }
    }
    ctx->pc = 0x1C1A68u;
    // 0x1c1a68: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x1c1a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x1c1a6c: 0xc0709a8  jal         func_1C26A0
    ctx->pc = 0x1C1A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A74u);
    ctx->pc = 0x1C26A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C26A0u, 0x1C1A6Cu, 0x1C1A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A74u;
label_1c1a74:
    // 0x1c1a74: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x1c1a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x1c1a78: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1c1a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c1a7c: 0xc0708d8  jal         func_1C2360
    ctx->pc = 0x1C1A7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A84u);
    ctx->pc = 0x1C2360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2360u, 0x1C1A7Cu, 0x1C1A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A84u;
label_1c1a84:
    // 0x1c1a84: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1c1a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c1a88: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x1c1a88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c1a8c: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x1c1a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c1a90: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1c1a90u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1c1a94: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x1c1a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1a98: 0xc06f2a4  jal         func_1BCA90
    ctx->pc = 0x1C1A98u;
    SET_GPR_U32(ctx, 31, 0x1C1AA0u);
    ctx->pc = 0x1BCA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCA90u, 0x1C1A98u, 0x1C1AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1AA0u;
label_1c1aa0:
    // 0x1c1aa0: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x1c1aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x1c1aa4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1c1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c1aa8: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x1c1aa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c1aac: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1c1aacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c1ab0: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1c1ab0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1c1ab4: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x1c1ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1ab8: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x1c1ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1c1abc: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1c1abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c1ac0: 0xc070040  jal         func_1C0100
    ctx->pc = 0x1C1AC0u;
    SET_GPR_U32(ctx, 31, 0x1C1AC8u);
    ctx->pc = 0x1C0100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0100u, 0x1C1AC0u, 0x1C1AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1AC8u;
label_1c1ac8:
    // 0x1c1ac8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1c1ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c1acc: 0x9042000b  lbu         $v0, 0xB($v0)
    ctx->pc = 0x1c1accu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x1c1ad0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c1ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c1ad4: 0x18400017  blez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C1AD4u;
    {
        const bool branch_taken_0x1c1ad4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c1ad4) {
            ctx->pc = 0x1C1B34u;
            goto label_1c1b34;
        }
    }
    ctx->pc = 0x1C1ADCu;
    // 0x1c1adc: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x1c1adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x1c1ae0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C1AE0u;
    {
        const bool branch_taken_0x1c1ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1ae0) {
            ctx->pc = 0x1C1B08u;
            goto label_1c1b08;
        }
    }
    ctx->pc = 0x1C1AE8u;
label_1c1ae8:
    // 0x1c1ae8: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x1c1ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1aec: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1c1aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c1af0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c1af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1af4: 0xc07040c  jal         func_1C1030
    ctx->pc = 0x1C1AF4u;
    SET_GPR_U32(ctx, 31, 0x1C1AFCu);
    ctx->pc = 0x1C1030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1030u, 0x1C1AF4u, 0x1C1AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1AFCu;
label_1c1afc:
    // 0x1c1afc: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1c1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1c1b00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c1b04: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x1c1b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_1c1b08:
    // 0x1c1b08: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1c1b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1c1b0c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1c1b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c1b10: 0x9042000b  lbu         $v0, 0xB($v0)
    ctx->pc = 0x1c1b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x1c1b14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c1b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c1b18: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1c1b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c1b1c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C1B1Cu;
    {
        const bool branch_taken_0x1c1b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b1c) {
            ctx->pc = 0x1C1AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1ae8;
        }
    }
    ctx->pc = 0x1C1B24u;
    // 0x1c1b24: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x1c1b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1b28: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1c1b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c1b2c: 0xc070498  jal         func_1C1260
    ctx->pc = 0x1C1B2Cu;
    SET_GPR_U32(ctx, 31, 0x1C1B34u);
    ctx->pc = 0x1C1260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1260u, 0x1C1B2Cu, 0x1C1B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B34u;
label_1c1b34:
    // 0x1c1b34: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x1c1b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1b38: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x1c1b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1c1b3c: 0xc070114  jal         func_1C0450
    ctx->pc = 0x1C1B3Cu;
    SET_GPR_U32(ctx, 31, 0x1C1B44u);
    ctx->pc = 0x1C0450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0450u, 0x1C1B3Cu, 0x1C1B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B44u;
label_1c1b44:
    // 0x1c1b44: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1c1b44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c1b48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b4c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1c1b4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1b50: 0x2ec10002  sltiu       $at, $s6, 0x2
    ctx->pc = 0x1c1b50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c1b54: 0x14200089  bnez        $at, . + 4 + (0x89 << 2)
    ctx->pc = 0x1C1B54u;
    {
        const bool branch_taken_0x1c1b54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b54) {
            ctx->pc = 0x1C1D7Cu;
            goto label_1c1d7c;
        }
    }
    ctx->pc = 0x1C1B5Cu;
    // 0x1c1b5c: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1C1B5Cu;
    {
        const bool branch_taken_0x1c1b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1b5c) {
            ctx->pc = 0x1C1D64u;
            goto label_1c1d64;
        }
    }
    ctx->pc = 0x1C1B64u;
label_1c1b64:
    // 0x1c1b64: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x1c1b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1b68: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1c1b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c1b6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b70: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1c1b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1b74: 0x27a80184  addiu       $t0, $sp, 0x184
    ctx->pc = 0x1c1b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x1c1b78: 0x27a90180  addiu       $t1, $sp, 0x180
    ctx->pc = 0x1c1b78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1c1b7c: 0xc07013c  jal         func_1C04F0
    ctx->pc = 0x1C1B7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1B84u);
    ctx->pc = 0x1C04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C04F0u, 0x1C1B7Cu, 0x1C1B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B84u;
label_1c1b84:
    // 0x1c1b84: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x1c1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1c1b88: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x1c1b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1c1b8c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1c1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1c1b90: 0x2828023  subu        $s0, $s4, $v0
    ctx->pc = 0x1c1b90u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1c1b94: 0xa3a001ad  sb          $zero, 0x1AD($sp)
    ctx->pc = 0x1c1b94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 429), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1b98: 0xa3a001ac  sb          $zero, 0x1AC($sp)
    ctx->pc = 0x1c1b98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 428), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1b9c: 0xa3a001ab  sb          $zero, 0x1AB($sp)
    ctx->pc = 0x1c1b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 427), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1ba0: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1BA0u;
    {
        const bool branch_taken_0x1c1ba0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1c1ba0) {
            ctx->pc = 0x1C1BC4u;
            goto label_1c1bc4;
        }
    }
    ctx->pc = 0x1C1BA8u;
    // 0x1c1ba8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c1bac: 0x8c42be58  lw          $v0, -0x41A8($v0)
    ctx->pc = 0x1c1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1c1bb0: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x1c1bb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c1bb4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1BB4u;
    {
        const bool branch_taken_0x1c1bb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1bb4) {
            ctx->pc = 0x1C1BC4u;
            goto label_1c1bc4;
        }
    }
    ctx->pc = 0x1C1BBCu;
    // 0x1c1bbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1bc0: 0xa3a201ab  sb          $v0, 0x1AB($sp)
    ctx->pc = 0x1c1bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 427), (uint8_t)GPR_U32(ctx, 2));
label_1c1bc4:
    // 0x1c1bc4: 0x93a201ab  lbu         $v0, 0x1AB($sp)
    ctx->pc = 0x1c1bc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 427)));
    // 0x1c1bc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1BC8u;
    {
        const bool branch_taken_0x1c1bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1bc8) {
            ctx->pc = 0x1C1BE0u;
            goto label_1c1be0;
        }
    }
    ctx->pc = 0x1C1BD0u;
    // 0x1c1bd0: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1BD0u;
    {
        const bool branch_taken_0x1c1bd0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1c1bd0) {
            ctx->pc = 0x1C1BE0u;
            goto label_1c1be0;
        }
    }
    ctx->pc = 0x1C1BD8u;
    // 0x1c1bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1bdc: 0xa3a201ac  sb          $v0, 0x1AC($sp)
    ctx->pc = 0x1c1bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 428), (uint8_t)GPR_U32(ctx, 2));
label_1c1be0:
    // 0x1c1be0: 0x93a201ac  lbu         $v0, 0x1AC($sp)
    ctx->pc = 0x1c1be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x1c1be4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1BE4u;
    {
        const bool branch_taken_0x1c1be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1be4) {
            ctx->pc = 0x1C1C08u;
            goto label_1c1c08;
        }
    }
    ctx->pc = 0x1C1BECu;
    // 0x1c1bec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c1becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c1bf0: 0x8c42be5c  lw          $v0, -0x41A4($v0)
    ctx->pc = 0x1c1bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE5Cu));
    // 0x1c1bf4: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x1c1bf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c1bf8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1BF8u;
    {
        const bool branch_taken_0x1c1bf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1bf8) {
            ctx->pc = 0x1C1C08u;
            goto label_1c1c08;
        }
    }
    ctx->pc = 0x1C1C00u;
    // 0x1c1c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1c04: 0xa3a201ad  sb          $v0, 0x1AD($sp)
    ctx->pc = 0x1c1c04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 429), (uint8_t)GPR_U32(ctx, 2));
label_1c1c08:
    // 0x1c1c08: 0x93a201ad  lbu         $v0, 0x1AD($sp)
    ctx->pc = 0x1c1c08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 429)));
    // 0x1c1c0c: 0xa3a201ae  sb          $v0, 0x1AE($sp)
    ctx->pc = 0x1c1c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 430), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c1c10: 0x93a201ae  lbu         $v0, 0x1AE($sp)
    ctx->pc = 0x1c1c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 430)));
    // 0x1c1c14: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1C1C14u;
    {
        const bool branch_taken_0x1c1c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1c14) {
            ctx->pc = 0x1C1D10u;
            goto label_1c1d10;
        }
    }
    ctx->pc = 0x1C1C1Cu;
    // 0x1c1c1c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1c1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1c20: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1c1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c1c24: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x1c1c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1c1c28: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1c1c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1c2c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1c1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c1c30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c1c34: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c1c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c1c38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1c3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1c40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c1c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c1c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1c48: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C1C48u;
    {
        const bool branch_taken_0x1c1c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1c48) {
            ctx->pc = 0x1C1D10u;
            goto label_1c1d10;
        }
    }
    ctx->pc = 0x1C1C50u;
    // 0x1c1c50: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1c1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c1c54: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x1c1c54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c1c58: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c1c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c1c5c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c1c5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c1c60: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1c1c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1c64: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1c1c64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c1c68: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1c1c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1c1c6c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1c1c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c1c70: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1c1c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c1c74: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c1c78: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1c1c78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c1c7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1c1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c1c80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c1c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c1c84: 0x80630004  lb          $v1, 0x4($v1)
    ctx->pc = 0x1c1c84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c1c88: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1c1c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1c1c8c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1c1c8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1c1c90: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C1C90u;
    {
        const bool branch_taken_0x1c1c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c1c90) {
            ctx->pc = 0x1C1D10u;
            goto label_1c1d10;
        }
    }
    ctx->pc = 0x1C1C98u;
    // 0x1c1c98: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1c1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1c9c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1c1c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c1ca0: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x1c1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1c1ca4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1c1ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1ca8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1c1ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c1cac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c1cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c1cb0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c1cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c1cb4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1cbc: 0x8042000a  lb          $v0, 0xA($v0)
    ctx->pc = 0x1c1cbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1c1cc0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1c1cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c1cc4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1c1cc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1c1cc8: 0x16a20011  bne         $s5, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C1CC8u;
    {
        const bool branch_taken_0x1c1cc8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1cc8) {
            ctx->pc = 0x1C1D10u;
            goto label_1c1d10;
        }
    }
    ctx->pc = 0x1C1CD0u;
    // 0x1c1cd0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1c1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c1cd4: 0x9042000b  lbu         $v0, 0xB($v0)
    ctx->pc = 0x1c1cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x1c1cd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c1cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c1cdc: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1c1cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1ce0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1c1ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c1ce4: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1c1ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1c1ce8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1c1ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c1cec: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1c1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c1cf0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c1cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c1cf4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1c1cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c1cf8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1c1cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c1cfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c1cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c1d00: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x1c1d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x1c1d04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c1d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c1d08: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1D08u;
    {
        const bool branch_taken_0x1c1d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1d08) {
            ctx->pc = 0x1C1D1Cu;
            goto label_1c1d1c;
        }
    }
    ctx->pc = 0x1C1D10u;
label_1c1d10:
    // 0x1c1d10: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1c1d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c1d14: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C1D14u;
    {
        const bool branch_taken_0x1c1d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1d14) {
            ctx->pc = 0x1C1D60u;
            goto label_1c1d60;
        }
    }
    ctx->pc = 0x1C1D1Cu;
label_1c1d1c:
    // 0x1c1d1c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1c1d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1d20: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1c1d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c1d24: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x1c1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1c1d28: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1c1d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1d2c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1c1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c1d30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c1d34: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c1d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c1d38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c1d40: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x1c1d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x1c1d44: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x1c1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x1c1d48: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x1c1d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x1c1d4c: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x1c1d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x1c1d50: 0x8fa50174  lw          $a1, 0x174($sp)
    ctx->pc = 0x1c1d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1c1d54: 0xc0708d8  jal         func_1C2360
    ctx->pc = 0x1C1D54u;
    SET_GPR_U32(ctx, 31, 0x1C1D5Cu);
    ctx->pc = 0x1C2360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2360u, 0x1C1D54u, 0x1C1D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D5Cu;
label_1c1d5c:
    // 0x1c1d5c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c1d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c1d60:
    // 0x1c1d60: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1c1d60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1c1d64:
    // 0x1c1d64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c1d68: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1D68u;
    {
        const bool branch_taken_0x1c1d68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c1d68) {
            ctx->pc = 0x1C1D7Cu;
            goto label_1c1d7c;
        }
    }
    ctx->pc = 0x1C1D70u;
    // 0x1c1d70: 0x2b6102b  sltu        $v0, $s5, $s6
    ctx->pc = 0x1c1d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1c1d74: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x1C1D74u;
    {
        const bool branch_taken_0x1c1d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1d74) {
            ctx->pc = 0x1C1B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1b64;
        }
    }
    ctx->pc = 0x1C1D7Cu;
label_1c1d7c:
    // 0x1c1d7c: 0x1a400004  blez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1D7Cu;
    {
        const bool branch_taken_0x1c1d7c = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1c1d7c) {
            ctx->pc = 0x1C1D90u;
            goto label_1c1d90;
        }
    }
    ctx->pc = 0x1C1D84u;
    // 0x1c1d84: 0x26c2ffff  addiu       $v0, $s6, -0x1
    ctx->pc = 0x1c1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1c1d88: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1D88u;
    {
        const bool branch_taken_0x1c1d88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c1d88) {
            ctx->pc = 0x1C1D9Cu;
            goto label_1c1d9c;
        }
    }
    ctx->pc = 0x1C1D90u;
label_1c1d90:
    // 0x1c1d90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1d94: 0x16c20053  bne         $s6, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1C1D94u;
    {
        const bool branch_taken_0x1c1d94 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1d94) {
            ctx->pc = 0x1C1EE4u;
            goto label_1c1ee4;
        }
    }
    ctx->pc = 0x1C1D9Cu;
label_1c1d9c:
    // 0x1c1d9c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1c1d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1da0: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1c1da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1da4: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1c1da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1da8: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x1c1da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x1c1dac: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1c1dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1db0: 0xac4009c0  sw          $zero, 0x9C0($v0)
    ctx->pc = 0x1c1db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2496), GPR_U32(ctx, 0));
    // 0x1c1db4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1c1db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1c1db8: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x1c1db8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c1dbc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1c1dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c1dc0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1c1dc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1c1dc4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c1dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c1dc8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1DC8u;
    {
        const bool branch_taken_0x1c1dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1dc8) {
            ctx->pc = 0x1C1DECu;
            goto label_1c1dec;
        }
    }
    ctx->pc = 0x1C1DD0u;
    // 0x1c1dd0: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x1c1dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1dd4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c1dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1dd8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1c1dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ddc: 0xc070a00  jal         func_1C2800
    ctx->pc = 0x1C1DDCu;
    SET_GPR_U32(ctx, 31, 0x1C1DE4u);
    ctx->pc = 0x1C2800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2800u, 0x1C1DDCu, 0x1C1DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1DE4u;
label_1c1de4:
    // 0x1c1de4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C1DE4u;
    {
        const bool branch_taken_0x1c1de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1de4) {
            ctx->pc = 0x1C1E10u;
            goto label_1c1e10;
        }
    }
    ctx->pc = 0x1C1DECu;
label_1c1dec:
    // 0x1c1dec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c1decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1df0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1df4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1c1df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1c1df8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c1df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c1dfc: 0x24a574e0  addiu       $a1, $a1, 0x74E0
    ctx->pc = 0x1c1dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29920));
    // 0x1c1e00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e04: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1c1e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1e08: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1C1E08u;
    SET_GPR_U32(ctx, 31, 0x1C1E10u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1C1E08u, 0x1C1E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E10u;
label_1c1e10:
    // 0x1c1e10: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1c1e10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C1E14u;
    {
        const bool branch_taken_0x1c1e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e14) {
            ctx->pc = 0x1C1E48u;
            goto label_1c1e48;
        }
    }
    ctx->pc = 0x1C1E1Cu;
label_1c1e1c:
    // 0x1c1e1c: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x1c1e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x1c1e20: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1c1e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e24: 0xc0708c8  jal         func_1C2320
    ctx->pc = 0x1C1E24u;
    SET_GPR_U32(ctx, 31, 0x1C1E2Cu);
    ctx->pc = 0x1C2320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2320u, 0x1C1E24u, 0x1C1E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E2Cu;
label_1c1e2c:
    // 0x1c1e2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c1e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c1e30: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x1c1e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x1c1e34: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x1c1e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1e38: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x1c1e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x1c1e3c: 0xc070aac  jal         func_1C2AB0
    ctx->pc = 0x1C1E3Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E44u);
    ctx->pc = 0x1C2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2AB0u, 0x1C1E3Cu, 0x1C1E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E44u;
label_1c1e44:
    // 0x1c1e44: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1c1e44u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1c1e48:
    // 0x1c1e48: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x1c1e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x1c1e4c: 0xc0708b8  jal         func_1C22E0
    ctx->pc = 0x1C1E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E54u);
    ctx->pc = 0x1C22E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22E0u, 0x1C1E4Cu, 0x1C1E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E54u;
label_1c1e54:
    // 0x1c1e54: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x1c1e54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c1e58: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C1E58u;
    {
        const bool branch_taken_0x1c1e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e58) {
            ctx->pc = 0x1C1E1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1e1c;
        }
    }
    ctx->pc = 0x1C1E60u;
    // 0x1c1e60: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1c1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1e64: 0x8c4209c0  lw          $v0, 0x9C0($v0)
    ctx->pc = 0x1c1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2496)));
    // 0x1c1e68: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1E68u;
    {
        const bool branch_taken_0x1c1e68 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c1e68) {
            ctx->pc = 0x1C1E84u;
            goto label_1c1e84;
        }
    }
    ctx->pc = 0x1C1E70u;
    // 0x1c1e70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1e74: 0x0  nop
    ctx->pc = 0x1c1e74u;
    // NOP
    // 0x1c1e78: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1c1e78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c1e7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1E7Cu;
    {
        const bool branch_taken_0x1c1e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e7c) {
            ctx->pc = 0x1C1EA0u;
            goto label_1c1ea0;
        }
    }
    ctx->pc = 0x1C1E84u;
label_1c1e84:
    // 0x1c1e84: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c1e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c1e88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c1e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c1e8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c1e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c1e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c1e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1e94: 0x0  nop
    ctx->pc = 0x1c1e94u;
    // NOP
    // 0x1c1e98: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1c1e98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c1e9c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1c1e9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1c1ea0:
    // 0x1c1ea0: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x1c1ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1ea4: 0xc064d10  jal         func_193440
    ctx->pc = 0x1C1EA4u;
    SET_GPR_U32(ctx, 31, 0x1C1EACu);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x1C1EA4u, 0x1C1EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1EACu;
label_1c1eac:
    // 0x1c1eac: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x1c1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1eb0: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1c1eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1c1eb4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C1EB4u;
    {
        const bool branch_taken_0x1c1eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1eb4) {
            ctx->pc = 0x1C1EE4u;
            goto label_1c1ee4;
        }
    }
    ctx->pc = 0x1C1EBCu;
    // 0x1c1ebc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c1ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1ec0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1ec4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1c1ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1c1ec8: 0x278595e0  addiu       $a1, $gp, -0x6A20
    ctx->pc = 0x1c1ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940128));
    // 0x1c1ecc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c1eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1ed0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1c1ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1ed4: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1C1ED4u;
    SET_GPR_U32(ctx, 31, 0x1C1EDCu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1C1ED4u, 0x1C1EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1EDCu;
label_1c1edc:
    // 0x1c1edc: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1c1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1c1ee0: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1c1ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_1c1ee4:
    // 0x1c1ee4: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x1c1ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x1c1ee8: 0xc070864  jal         func_1C2190
    ctx->pc = 0x1C1EE8u;
    SET_GPR_U32(ctx, 31, 0x1C1EF0u);
    ctx->pc = 0x1C2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2190u, 0x1C1EE8u, 0x1C1EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1EF0u;
label_1c1ef0:
    // 0x1c1ef0: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x1c1ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x1c1ef4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c1ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c1ef8: 0xc0707dc  jal         func_1C1F70
    ctx->pc = 0x1C1EF8u;
    SET_GPR_U32(ctx, 31, 0x1C1F00u);
    ctx->pc = 0x1C1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F70u, 0x1C1EF8u, 0x1C1F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F00u;
label_1c1f00:
    // 0x1c1f00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c1f00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c1f04:
    // 0x1c1f04: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1c1f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1c1f08: 0x8c63be58  lw          $v1, -0x41A8($v1)
    ctx->pc = 0x1c1f08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1c1f0c: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1c1f0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c1f10: 0x1460feb5  bnez        $v1, . + 4 + (-0x14B << 2)
    ctx->pc = 0x1C1F10u;
    {
        const bool branch_taken_0x1c1f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f10) {
            ctx->pc = 0x1C19E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c19e8;
        }
    }
    ctx->pc = 0x1C1F18u;
    // 0x1c1f18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c1f18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1c1f1c:
    // 0x1c1f1c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1c1f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1c1f20: 0x8c63be5c  lw          $v1, -0x41A4($v1)
    ctx->pc = 0x1c1f20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE5Cu));
    // 0x1c1f24: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1c1f24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c1f28: 0x1460feac  bnez        $v1, . + 4 + (-0x154 << 2)
    ctx->pc = 0x1C1F28u;
    {
        const bool branch_taken_0x1c1f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f28) {
            ctx->pc = 0x1C19DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c19dc;
        }
    }
    ctx->pc = 0x1C1F30u;
    // 0x1c1f30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c1f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c1f34: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1c1f34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c1f38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c1f38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c1f3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c1f3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c1f40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c1f40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1f44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c1f44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1f48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c1f48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1f4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c1f4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1f50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1f54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1f58: 0x27bd01c0  addiu       $sp, $sp, 0x1C0
    ctx->pc = 0x1c1f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1c1f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1F64u;
    // 0x1c1f64: 0x0  nop
    ctx->pc = 0x1c1f64u;
    // NOP
    // 0x1c1f68: 0x0  nop
    ctx->pc = 0x1c1f68u;
    // NOP
    // 0x1c1f6c: 0x0  nop
    ctx->pc = 0x1c1f6cu;
    // NOP
    ctx->pc = 0x1c1f70u;
}
