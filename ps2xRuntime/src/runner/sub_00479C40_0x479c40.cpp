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

// Function: sub_00479C40
// Address: 0x479c40 - 0x479e20
void sub_00479C40_0x479c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479C40_0x479c40");
#endif

    switch (ctx->pc) {
        case 0x479c40u: goto label_479c40;
        case 0x479c44u: goto label_479c44;
        case 0x479c48u: goto label_479c48;
        case 0x479c4cu: goto label_479c4c;
        case 0x479c50u: goto label_479c50;
        case 0x479c54u: goto label_479c54;
        case 0x479c58u: goto label_479c58;
        case 0x479c5cu: goto label_479c5c;
        case 0x479c60u: goto label_479c60;
        case 0x479c64u: goto label_479c64;
        case 0x479c68u: goto label_479c68;
        case 0x479c6cu: goto label_479c6c;
        case 0x479c70u: goto label_479c70;
        case 0x479c74u: goto label_479c74;
        case 0x479c78u: goto label_479c78;
        case 0x479c7cu: goto label_479c7c;
        case 0x479c80u: goto label_479c80;
        case 0x479c84u: goto label_479c84;
        case 0x479c88u: goto label_479c88;
        case 0x479c8cu: goto label_479c8c;
        case 0x479c90u: goto label_479c90;
        case 0x479c94u: goto label_479c94;
        case 0x479c98u: goto label_479c98;
        case 0x479c9cu: goto label_479c9c;
        case 0x479ca0u: goto label_479ca0;
        case 0x479ca4u: goto label_479ca4;
        case 0x479ca8u: goto label_479ca8;
        case 0x479cacu: goto label_479cac;
        case 0x479cb0u: goto label_479cb0;
        case 0x479cb4u: goto label_479cb4;
        case 0x479cb8u: goto label_479cb8;
        case 0x479cbcu: goto label_479cbc;
        case 0x479cc0u: goto label_479cc0;
        case 0x479cc4u: goto label_479cc4;
        case 0x479cc8u: goto label_479cc8;
        case 0x479cccu: goto label_479ccc;
        case 0x479cd0u: goto label_479cd0;
        case 0x479cd4u: goto label_479cd4;
        case 0x479cd8u: goto label_479cd8;
        case 0x479cdcu: goto label_479cdc;
        case 0x479ce0u: goto label_479ce0;
        case 0x479ce4u: goto label_479ce4;
        case 0x479ce8u: goto label_479ce8;
        case 0x479cecu: goto label_479cec;
        case 0x479cf0u: goto label_479cf0;
        case 0x479cf4u: goto label_479cf4;
        case 0x479cf8u: goto label_479cf8;
        case 0x479cfcu: goto label_479cfc;
        case 0x479d00u: goto label_479d00;
        case 0x479d04u: goto label_479d04;
        case 0x479d08u: goto label_479d08;
        case 0x479d0cu: goto label_479d0c;
        case 0x479d10u: goto label_479d10;
        case 0x479d14u: goto label_479d14;
        case 0x479d18u: goto label_479d18;
        case 0x479d1cu: goto label_479d1c;
        case 0x479d20u: goto label_479d20;
        case 0x479d24u: goto label_479d24;
        case 0x479d28u: goto label_479d28;
        case 0x479d2cu: goto label_479d2c;
        case 0x479d30u: goto label_479d30;
        case 0x479d34u: goto label_479d34;
        case 0x479d38u: goto label_479d38;
        case 0x479d3cu: goto label_479d3c;
        case 0x479d40u: goto label_479d40;
        case 0x479d44u: goto label_479d44;
        case 0x479d48u: goto label_479d48;
        case 0x479d4cu: goto label_479d4c;
        case 0x479d50u: goto label_479d50;
        case 0x479d54u: goto label_479d54;
        case 0x479d58u: goto label_479d58;
        case 0x479d5cu: goto label_479d5c;
        case 0x479d60u: goto label_479d60;
        case 0x479d64u: goto label_479d64;
        case 0x479d68u: goto label_479d68;
        case 0x479d6cu: goto label_479d6c;
        case 0x479d70u: goto label_479d70;
        case 0x479d74u: goto label_479d74;
        case 0x479d78u: goto label_479d78;
        case 0x479d7cu: goto label_479d7c;
        case 0x479d80u: goto label_479d80;
        case 0x479d84u: goto label_479d84;
        case 0x479d88u: goto label_479d88;
        case 0x479d8cu: goto label_479d8c;
        case 0x479d90u: goto label_479d90;
        case 0x479d94u: goto label_479d94;
        case 0x479d98u: goto label_479d98;
        case 0x479d9cu: goto label_479d9c;
        case 0x479da0u: goto label_479da0;
        case 0x479da4u: goto label_479da4;
        case 0x479da8u: goto label_479da8;
        case 0x479dacu: goto label_479dac;
        case 0x479db0u: goto label_479db0;
        case 0x479db4u: goto label_479db4;
        case 0x479db8u: goto label_479db8;
        case 0x479dbcu: goto label_479dbc;
        case 0x479dc0u: goto label_479dc0;
        case 0x479dc4u: goto label_479dc4;
        case 0x479dc8u: goto label_479dc8;
        case 0x479dccu: goto label_479dcc;
        case 0x479dd0u: goto label_479dd0;
        case 0x479dd4u: goto label_479dd4;
        case 0x479dd8u: goto label_479dd8;
        case 0x479ddcu: goto label_479ddc;
        case 0x479de0u: goto label_479de0;
        case 0x479de4u: goto label_479de4;
        case 0x479de8u: goto label_479de8;
        case 0x479decu: goto label_479dec;
        case 0x479df0u: goto label_479df0;
        case 0x479df4u: goto label_479df4;
        case 0x479df8u: goto label_479df8;
        case 0x479dfcu: goto label_479dfc;
        case 0x479e00u: goto label_479e00;
        case 0x479e04u: goto label_479e04;
        case 0x479e08u: goto label_479e08;
        case 0x479e0cu: goto label_479e0c;
        case 0x479e10u: goto label_479e10;
        case 0x479e14u: goto label_479e14;
        case 0x479e18u: goto label_479e18;
        case 0x479e1cu: goto label_479e1c;
        default: break;
    }

    ctx->pc = 0x479c40u;

label_479c40:
    // 0x479c40: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x479c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_479c44:
    // 0x479c44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x479c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_479c48:
    // 0x479c48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x479c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_479c4c:
    // 0x479c4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x479c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_479c50:
    // 0x479c50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x479c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_479c54:
    // 0x479c54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x479c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_479c58:
    // 0x479c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x479c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_479c5c:
    // 0x479c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x479c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_479c60:
    // 0x479c60: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x479c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
label_479c64:
    // 0x479c64: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x479c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_479c68:
    // 0x479c68: 0x90420023  lbu         $v0, 0x23($v0)
    ctx->pc = 0x479c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
label_479c6c:
    // 0x479c6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x479c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_479c70:
    // 0x479c70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x479c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_479c74:
    // 0x479c74: 0x2aa00  sll         $s5, $v0, 8
    ctx->pc = 0x479c74u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_479c78:
    // 0x479c78: 0x32a20f00  andi        $v0, $s5, 0xF00
    ctx->pc = 0x479c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3840);
label_479c7c:
    // 0x479c7c: 0x38420500  xori        $v0, $v0, 0x500
    ctx->pc = 0x479c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1280);
label_479c80:
    // 0x479c80: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x479c80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_479c84:
    // 0x479c84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x479c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_479c88:
    // 0x479c88: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_479c8c:
    if (ctx->pc == 0x479C8Cu) {
        ctx->pc = 0x479C90u;
        goto label_479c90;
    }
    ctx->pc = 0x479C88u;
    {
        const bool branch_taken_0x479c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x479c88) {
            ctx->pc = 0x479D38u;
            goto label_479d38;
        }
    }
    ctx->pc = 0x479C90u;
label_479c90:
    // 0x479c90: 0x8f82b4b0  lw          $v0, -0x4B50($gp)
    ctx->pc = 0x479c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948016)));
label_479c94:
    // 0x479c94: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_479c98:
    if (ctx->pc == 0x479C98u) {
        ctx->pc = 0x479C9Cu;
        goto label_479c9c;
    }
    ctx->pc = 0x479C94u;
    {
        const bool branch_taken_0x479c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479c94) {
            ctx->pc = 0x479D38u;
            goto label_479d38;
        }
    }
    ctx->pc = 0x479C9Cu;
label_479c9c:
    // 0x479c9c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x479c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_479ca0:
    // 0x479ca0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x479ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_479ca4:
    // 0x479ca4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x479ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_479ca8:
    // 0x479ca8: 0xc115ee8  jal         func_457BA0
label_479cac:
    if (ctx->pc == 0x479CACu) {
        ctx->pc = 0x479CB0u;
        goto label_479cb0;
    }
    ctx->pc = 0x479CA8u;
    SET_GPR_U32(ctx, 31, 0x479CB0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x479CA8u, 0x479CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479CB0u;
label_479cb0:
    // 0x479cb0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_479cb4:
    if (ctx->pc == 0x479CB4u) {
        ctx->pc = 0x479CB8u;
        goto label_479cb8;
    }
    ctx->pc = 0x479CB0u;
    {
        const bool branch_taken_0x479cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479cb0) {
            ctx->pc = 0x479D38u;
            goto label_479d38;
        }
    }
    ctx->pc = 0x479CB8u;
label_479cb8:
    // 0x479cb8: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x479cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_479cbc:
    // 0x479cbc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_479cc0:
    if (ctx->pc == 0x479CC0u) {
        ctx->pc = 0x479CC4u;
        goto label_479cc4;
    }
    ctx->pc = 0x479CBCu;
    {
        const bool branch_taken_0x479cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479cbc) {
            ctx->pc = 0x479D38u;
            goto label_479d38;
        }
    }
    ctx->pc = 0x479CC4u;
label_479cc4:
    // 0x479cc4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x479cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_479cc8:
    // 0x479cc8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x479cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_479ccc:
    // 0x479ccc: 0x8fa60194  lw          $a2, 0x194($sp)
    ctx->pc = 0x479cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_479cd0:
    // 0x479cd0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x479cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_479cd4:
    // 0x479cd4: 0x24e71420  addiu       $a3, $a3, 0x1420
    ctx->pc = 0x479cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5152));
label_479cd8:
    // 0x479cd8: 0x24080058  addiu       $t0, $zero, 0x58
    ctx->pc = 0x479cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_479cdc:
    // 0x479cdc: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x479cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_479ce0:
    // 0x479ce0: 0x25291440  addiu       $t1, $t1, 0x1440
    ctx->pc = 0x479ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5184));
label_479ce4:
    // 0x479ce4: 0xc113940  jal         func_44E500
label_479ce8:
    if (ctx->pc == 0x479CE8u) {
        ctx->pc = 0x479CECu;
        goto label_479cec;
    }
    ctx->pc = 0x479CE4u;
    SET_GPR_U32(ctx, 31, 0x479CECu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x479CE4u, 0x479CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479CECu;
label_479cec:
    // 0x479cec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x479cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_479cf0:
    // 0x479cf0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x479cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_479cf4:
    // 0x479cf4: 0x24a51490  addiu       $a1, $a1, 0x1490
    ctx->pc = 0x479cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5264));
label_479cf8:
    // 0x479cf8: 0xc115c24  jal         func_457090
label_479cfc:
    if (ctx->pc == 0x479CFCu) {
        ctx->pc = 0x479D00u;
        goto label_479d00;
    }
    ctx->pc = 0x479CF8u;
    SET_GPR_U32(ctx, 31, 0x479D00u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x479CF8u, 0x479D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479D00u;
label_479d00:
    // 0x479d00: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x479d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_479d04:
    // 0x479d04: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x479d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_479d08:
    // 0x479d08: 0x40f809  jalr        $v0
label_479d0c:
    if (ctx->pc == 0x479D0Cu) {
        ctx->pc = 0x479D10u;
        goto label_479d10;
    }
    ctx->pc = 0x479D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x479D10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479D08u, 0x479D10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x479D10u;
label_479d10:
    // 0x479d10: 0xaf82b4b0  sw          $v0, -0x4B50($gp)
    ctx->pc = 0x479d10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948016), GPR_U32(ctx, 2));
label_479d14:
    // 0x479d14: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x479d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_479d18:
    // 0x479d18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_479d1c:
    if (ctx->pc == 0x479D1Cu) {
        ctx->pc = 0x479D20u;
        goto label_479d20;
    }
    ctx->pc = 0x479D18u;
    {
        const bool branch_taken_0x479d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479d18) {
            ctx->pc = 0x479D28u;
            goto label_479d28;
        }
    }
    ctx->pc = 0x479D20u;
label_479d20:
    // 0x479d20: 0xd  break       0
    ctx->pc = 0x479d20u;
    runtime->handleBreak(rdram, ctx);
label_479d24:
    // 0x479d24: 0x0  nop
    ctx->pc = 0x479d24u;
    // NOP
label_479d28:
    // 0x479d28: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x479d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_479d2c:
    // 0x479d2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x479d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_479d30:
    // 0x479d30: 0xc11392c  jal         func_44E4B0
label_479d34:
    if (ctx->pc == 0x479D34u) {
        ctx->pc = 0x479D38u;
        goto label_479d38;
    }
    ctx->pc = 0x479D30u;
    SET_GPR_U32(ctx, 31, 0x479D38u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x479D30u, 0x479D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479D38u;
label_479d38:
    // 0x479d38: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x479d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_479d3c:
    // 0x479d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x479d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_479d40:
    // 0x479d40: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x479d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_479d44:
    // 0x479d44: 0xc1075c0  jal         func_41D700
label_479d48:
    if (ctx->pc == 0x479D48u) {
        ctx->pc = 0x479D4Cu;
        goto label_479d4c;
    }
    ctx->pc = 0x479D44u;
    SET_GPR_U32(ctx, 31, 0x479D4Cu);
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x479D44u, 0x479D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479D4Cu;
label_479d4c:
    // 0x479d4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x479d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_479d50:
    // 0x479d50: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_479d54:
    if (ctx->pc == 0x479D54u) {
        ctx->pc = 0x479D58u;
        goto label_479d58;
    }
    ctx->pc = 0x479D50u;
    {
        const bool branch_taken_0x479d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x479d50) {
            ctx->pc = 0x479DECu;
            goto label_479dec;
        }
    }
    ctx->pc = 0x479D58u;
label_479d58:
    // 0x479d58: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x479d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_479d5c:
    // 0x479d5c: 0x8c540018  lw          $s4, 0x18($v0)
    ctx->pc = 0x479d5cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_479d60:
    // 0x479d60: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x479d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_479d64:
    // 0x479d64: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x479d64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_479d68:
    // 0x479d68: 0x10000019  b           . + 4 + (0x19 << 2)
label_479d6c:
    if (ctx->pc == 0x479D6Cu) {
        ctx->pc = 0x479D70u;
        goto label_479d70;
    }
    ctx->pc = 0x479D68u;
    {
        const bool branch_taken_0x479d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479d68) {
            ctx->pc = 0x479DD0u;
            goto label_479dd0;
        }
    }
    ctx->pc = 0x479D70u;
label_479d70:
    // 0x479d70: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x479d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_479d74:
    // 0x479d74: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x479d74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_479d78:
    // 0x479d78: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x479d78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_479d7c:
    // 0x479d7c: 0x10000011  b           . + 4 + (0x11 << 2)
label_479d80:
    if (ctx->pc == 0x479D80u) {
        ctx->pc = 0x479D84u;
        goto label_479d84;
    }
    ctx->pc = 0x479D7Cu;
    {
        const bool branch_taken_0x479d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479d7c) {
            ctx->pc = 0x479DC4u;
            goto label_479dc4;
        }
    }
    ctx->pc = 0x479D84u;
label_479d84:
    // 0x479d84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x479d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_479d88:
    // 0x479d88: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x479d88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_479d8c:
    // 0x479d8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x479d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_479d90:
    // 0x479d90: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x479d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_479d94:
    // 0x479d94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x479d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_479d98:
    // 0x479d98: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x479d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
label_479d9c:
    // 0x479d9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x479d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_479da0:
    // 0x479da0: 0x2c4100ff  sltiu       $at, $v0, 0xFF
    ctx->pc = 0x479da0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
label_479da4:
    // 0x479da4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_479da8:
    if (ctx->pc == 0x479DA8u) {
        ctx->pc = 0x479DACu;
        goto label_479dac;
    }
    ctx->pc = 0x479DA4u;
    {
        const bool branch_taken_0x479da4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x479da4) {
            ctx->pc = 0x479DC4u;
            goto label_479dc4;
        }
    }
    ctx->pc = 0x479DACu;
label_479dac:
    // 0x479dac: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x479dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_479db0:
    // 0x479db0: 0xc1075d0  jal         func_41D740
label_479db4:
    if (ctx->pc == 0x479DB4u) {
        ctx->pc = 0x479DB8u;
        goto label_479db8;
    }
    ctx->pc = 0x479DB0u;
    SET_GPR_U32(ctx, 31, 0x479DB8u);
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x479DB0u, 0x479DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479DB8u;
label_479db8:
    // 0x479db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x479db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_479dbc:
    // 0x479dbc: 0x1000000c  b           . + 4 + (0xC << 2)
label_479dc0:
    if (ctx->pc == 0x479DC0u) {
        ctx->pc = 0x479DC4u;
        goto label_479dc4;
    }
    ctx->pc = 0x479DBCu;
    {
        const bool branch_taken_0x479dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479dbc) {
            ctx->pc = 0x479DF0u;
            goto label_479df0;
        }
    }
    ctx->pc = 0x479DC4u;
label_479dc4:
    // 0x479dc4: 0x1620ffef  bnez        $s1, . + 4 + (-0x11 << 2)
label_479dc8:
    if (ctx->pc == 0x479DC8u) {
        ctx->pc = 0x479DCCu;
        goto label_479dcc;
    }
    ctx->pc = 0x479DC4u;
    {
        const bool branch_taken_0x479dc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x479dc4) {
            ctx->pc = 0x479D84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_479d84;
        }
    }
    ctx->pc = 0x479DCCu;
label_479dcc:
    // 0x479dcc: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x479dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_479dd0:
    // 0x479dd0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x479dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_479dd4:
    // 0x479dd4: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x479dd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_479dd8:
    // 0x479dd8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_479ddc:
    if (ctx->pc == 0x479DDCu) {
        ctx->pc = 0x479DE0u;
        goto label_479de0;
    }
    ctx->pc = 0x479DD8u;
    {
        const bool branch_taken_0x479dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x479dd8) {
            ctx->pc = 0x479D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_479d70;
        }
    }
    ctx->pc = 0x479DE0u;
label_479de0:
    // 0x479de0: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x479de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_479de4:
    // 0x479de4: 0xc1075d0  jal         func_41D740
label_479de8:
    if (ctx->pc == 0x479DE8u) {
        ctx->pc = 0x479DECu;
        goto label_479dec;
    }
    ctx->pc = 0x479DE4u;
    SET_GPR_U32(ctx, 31, 0x479DECu);
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x479DE4u, 0x479DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479DECu;
label_479dec:
    // 0x479dec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x479decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_479df0:
    // 0x479df0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x479df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_479df4:
    // 0x479df4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x479df4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_479df8:
    // 0x479df8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x479df8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_479dfc:
    // 0x479dfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x479dfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_479e00:
    // 0x479e00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x479e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_479e04:
    // 0x479e04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x479e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_479e08:
    // 0x479e08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x479e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_479e0c:
    // 0x479e0c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x479e0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_479e10:
    // 0x479e10: 0x3e00008  jr          $ra
label_479e14:
    if (ctx->pc == 0x479E14u) {
        ctx->pc = 0x479E18u;
        goto label_479e18;
    }
    ctx->pc = 0x479E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479E18u;
label_479e18:
    // 0x479e18: 0x0  nop
    ctx->pc = 0x479e18u;
    // NOP
label_479e1c:
    // 0x479e1c: 0x0  nop
    ctx->pc = 0x479e1cu;
    // NOP
    ctx->pc = 0x479e20u;
}
