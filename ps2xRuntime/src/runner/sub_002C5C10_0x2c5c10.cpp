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

// Function: sub_002C5C10
// Address: 0x2c5c10 - 0x2c5da0
void sub_002C5C10_0x2c5c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5C10_0x2c5c10");
#endif

    switch (ctx->pc) {
        case 0x2c5c40u: goto label_2c5c40;
        case 0x2c5c50u: goto label_2c5c50;
        case 0x2c5c70u: goto label_2c5c70;
        case 0x2c5c88u: goto label_2c5c88;
        case 0x2c5c98u: goto label_2c5c98;
        case 0x2c5cb4u: goto label_2c5cb4;
        case 0x2c5cc0u: goto label_2c5cc0;
        case 0x2c5cccu: goto label_2c5ccc;
        case 0x2c5ce0u: goto label_2c5ce0;
        case 0x2c5cf4u: goto label_2c5cf4;
        case 0x2c5d0cu: goto label_2c5d0c;
        case 0x2c5d28u: goto label_2c5d28;
        case 0x2c5d40u: goto label_2c5d40;
        case 0x2c5d5cu: goto label_2c5d5c;
        case 0x2c5d74u: goto label_2c5d74;
        default: break;
    }

    ctx->pc = 0x2c5c10u;

    // 0x2c5c10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c5c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c5c14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c5c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c5c18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c5c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c5c1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c5c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c5c20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c5c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c5c24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c5c28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5c2c: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2c5c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2c5c30: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2c5c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c5c34: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c5c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c5c38: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C5C38u;
    SET_GPR_U32(ctx, 31, 0x2C5C40u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C5C38u, 0x2C5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5C40u;
label_2c5c40:
    // 0x2c5c40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c5c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c48: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2C5C48u;
    SET_GPR_U32(ctx, 31, 0x2C5C50u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2C5C48u, 0x2C5C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5C50u;
label_2c5c50:
    // 0x2c5c50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5C50u;
    {
        const bool branch_taken_0x2c5c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5c50) {
            ctx->pc = 0x2C5C64u;
            goto label_2c5c64;
        }
    }
    ctx->pc = 0x2C5C58u;
    // 0x2c5c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5c5c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2C5C5Cu;
    {
        const bool branch_taken_0x2c5c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5c5c) {
            ctx->pc = 0x2C5D78u;
            goto label_2c5d78;
        }
    }
    ctx->pc = 0x2C5C64u;
label_2c5c64:
    // 0x2c5c64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c68: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2C5C68u;
    SET_GPR_U32(ctx, 31, 0x2C5C70u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2C5C68u, 0x2C5C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5C70u;
label_2c5c70:
    // 0x2c5c70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c5c70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c74: 0x1240003f  beqz        $s2, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C5C74u;
    {
        const bool branch_taken_0x2c5c74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5c74) {
            ctx->pc = 0x2C5D74u;
            goto label_2c5d74;
        }
    }
    ctx->pc = 0x2C5C7Cu;
    // 0x2c5c7c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c5c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c5c80: 0xc0965f8  jal         func_2597E0
    ctx->pc = 0x2C5C80u;
    SET_GPR_U32(ctx, 31, 0x2C5C88u);
    ctx->pc = 0x2597E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2597E0u, 0x2C5C80u, 0x2C5C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5C88u;
label_2c5c88:
    // 0x2c5c88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c5c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c8c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c5c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c5c90: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C5C90u;
    SET_GPR_U32(ctx, 31, 0x2C5C98u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C5C90u, 0x2C5C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5C98u;
label_2c5c98:
    // 0x2c5c98: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c5c98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c5c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ca0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2c5ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c5ca4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c5ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5ca8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c5ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5cac: 0xc09ad30  jal         func_26B4C0
    ctx->pc = 0x2C5CACu;
    SET_GPR_U32(ctx, 31, 0x2C5CB4u);
    ctx->pc = 0x26B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B4C0u, 0x2C5CACu, 0x2C5CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5CB4u;
label_2c5cb4:
    // 0x2c5cb4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c5cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c5cb8: 0xc0525e4  jal         func_149790
    ctx->pc = 0x2C5CB8u;
    SET_GPR_U32(ctx, 31, 0x2C5CC0u);
    ctx->pc = 0x149790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149790u, 0x2C5CB8u, 0x2C5CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5CC0u;
label_2c5cc0:
    // 0x2c5cc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c5cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5cc4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2C5CC4u;
    {
        const bool branch_taken_0x2c5cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5cc4) {
            ctx->pc = 0x2C5D50u;
            goto label_2c5d50;
        }
    }
    ctx->pc = 0x2C5CCCu;
label_2c5ccc:
    // 0x2c5ccc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2c5cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c5cd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c5cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5cd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c5cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5cd8: 0xc099f94  jal         func_267E50
    ctx->pc = 0x2C5CD8u;
    SET_GPR_U32(ctx, 31, 0x2C5CE0u);
    ctx->pc = 0x267E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267E50u, 0x2C5CD8u, 0x2C5CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5CE0u;
label_2c5ce0:
    // 0x2c5ce0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C5CE0u;
    {
        const bool branch_taken_0x2c5ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ce0) {
            ctx->pc = 0x2C5D4Cu;
            goto label_2c5d4c;
        }
    }
    ctx->pc = 0x2C5CE8u;
    // 0x2c5ce8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2c5ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c5cec: 0xc048094  jal         func_120250
    ctx->pc = 0x2C5CECu;
    SET_GPR_U32(ctx, 31, 0x2C5CF4u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C5CECu, 0x2C5CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5CF4u;
label_2c5cf4:
    // 0x2c5cf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5cf8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c5cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c5cfc: 0x24a5e150  addiu       $a1, $a1, -0x1EB0
    ctx->pc = 0x2c5cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959440));
    // 0x2c5d00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c5d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d04: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2C5D04u;
    SET_GPR_U32(ctx, 31, 0x2C5D0Cu);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2C5D04u, 0x2C5D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D0Cu;
label_2c5d0c:
    // 0x2c5d0c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c5d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c5d10: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x2c5d10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c5d14: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2c5d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c5d18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c5d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c5d1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d20: 0xc0af028  jal         func_2BC0A0
    ctx->pc = 0x2C5D20u;
    SET_GPR_U32(ctx, 31, 0x2C5D28u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x2C5D20u, 0x2C5D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D28u;
label_2c5d28:
    // 0x2c5d28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5d2c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2c5d2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5d30: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c5d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c5d34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c5d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5d38: 0xc096218  jal         func_258860
    ctx->pc = 0x2C5D38u;
    SET_GPR_U32(ctx, 31, 0x2C5D40u);
    ctx->pc = 0x258860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258860u, 0x2C5D38u, 0x2C5D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D40u;
label_2c5d40:
    // 0x2c5d40: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c5d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C5D44u;
    {
        const bool branch_taken_0x2c5d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5d44) {
            ctx->pc = 0x2C5D78u;
            goto label_2c5d78;
        }
    }
    ctx->pc = 0x2C5D4Cu;
label_2c5d4c:
    // 0x2c5d4c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2c5d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2c5d50:
    // 0x2c5d50: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c5d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c5d54: 0xc0525dc  jal         func_149770
    ctx->pc = 0x2C5D54u;
    SET_GPR_U32(ctx, 31, 0x2C5D5Cu);
    ctx->pc = 0x149770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149770u, 0x2C5D54u, 0x2C5D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D5Cu;
label_2c5d5c:
    // 0x2c5d5c: 0x1602ffdb  bne         $s0, $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2C5D5Cu;
    {
        const bool branch_taken_0x2c5d5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c5d5c) {
            ctx->pc = 0x2C5CCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5ccc;
        }
    }
    ctx->pc = 0x2C5D64u;
    // 0x2c5d64: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c5d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c5d68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c5d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5d6c: 0xc096218  jal         func_258860
    ctx->pc = 0x2C5D6Cu;
    SET_GPR_U32(ctx, 31, 0x2C5D74u);
    ctx->pc = 0x258860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258860u, 0x2C5D6Cu, 0x2C5D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D74u;
label_2c5d74:
    // 0x2c5d74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5d78:
    // 0x2c5d78: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c5d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5d7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c5d7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5d80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c5d80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5d84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c5d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5d88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5d8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5d90: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2c5d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c5d94: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5D9Cu;
    // 0x2c5d9c: 0x0  nop
    ctx->pc = 0x2c5d9cu;
    // NOP
    ctx->pc = 0x2c5da0u;
}
