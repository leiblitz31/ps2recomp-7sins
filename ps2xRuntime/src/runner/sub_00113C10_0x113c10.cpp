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

// Function: sub_00113C10
// Address: 0x113c10 - 0x113d50
void sub_00113C10_0x113c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113C10_0x113c10");
#endif

    switch (ctx->pc) {
        case 0x113c50u: goto label_113c50;
        case 0x113c60u: goto label_113c60;
        case 0x113c74u: goto label_113c74;
        case 0x113c84u: goto label_113c84;
        case 0x113c8cu: goto label_113c8c;
        case 0x113c98u: goto label_113c98;
        case 0x113cb4u: goto label_113cb4;
        case 0x113cc0u: goto label_113cc0;
        case 0x113cd8u: goto label_113cd8;
        case 0x113ce4u: goto label_113ce4;
        case 0x113cf4u: goto label_113cf4;
        case 0x113d08u: goto label_113d08;
        case 0x113d18u: goto label_113d18;
        case 0x113d30u: goto label_113d30;
        default: break;
    }

    ctx->pc = 0x113c10u;

    // 0x113c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113c14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113c18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x113c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x113C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113C24u;
    // 0x113c24: 0x0  nop
    ctx->pc = 0x113c24u;
    // NOP
    // 0x113c28: 0x0  nop
    ctx->pc = 0x113c28u;
    // NOP
    // 0x113c2c: 0x0  nop
    ctx->pc = 0x113c2cu;
    // NOP
    // 0x113c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x113c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x113c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x113c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x113c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x113c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x113c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x113c40: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x113c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x113c44: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x113c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113c48: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x113C48u;
    SET_GPR_U32(ctx, 31, 0x113C50u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x113C48u, 0x113C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C50u;
label_113c50:
    // 0x113c50: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x113c50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x113c54: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x113c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x113c58: 0xc044fcc  jal         func_113F30
    ctx->pc = 0x113C58u;
    SET_GPR_U32(ctx, 31, 0x113C60u);
    ctx->pc = 0x113F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113F30u, 0x113C58u, 0x113C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C60u;
label_113c60:
    // 0x113c60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x113c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113c64: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x113c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x113c68: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x113c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x113c6c: 0xc044fac  jal         func_113EB0
    ctx->pc = 0x113C6Cu;
    SET_GPR_U32(ctx, 31, 0x113C74u);
    ctx->pc = 0x113EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EB0u, 0x113C6Cu, 0x113C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C74u;
label_113c74:
    // 0x113c74: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x113c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x113c78: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x113c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x113c7c: 0xc044f9c  jal         func_113E70
    ctx->pc = 0x113C7Cu;
    SET_GPR_U32(ctx, 31, 0x113C84u);
    ctx->pc = 0x113E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113E70u, 0x113C7Cu, 0x113C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C84u;
label_113c84:
    // 0x113c84: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x113C84u;
    {
        const bool branch_taken_0x113c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113c84) {
            ctx->pc = 0x113CF4u;
            goto label_113cf4;
        }
    }
    ctx->pc = 0x113C8Cu;
label_113c8c:
    // 0x113c8c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x113c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x113c90: 0xc044f88  jal         func_113E20
    ctx->pc = 0x113C90u;
    SET_GPR_U32(ctx, 31, 0x113C98u);
    ctx->pc = 0x113E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113E20u, 0x113C90u, 0x113C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C98u;
label_113c98:
    // 0x113c98: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x113c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x113c9c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x113c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x113ca0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x113CA0u;
    {
        const bool branch_taken_0x113ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113ca0) {
            ctx->pc = 0x113CC4u;
            goto label_113cc4;
        }
    }
    ctx->pc = 0x113CA8u;
    // 0x113ca8: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x113ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x113cac: 0xc044f78  jal         func_113DE0
    ctx->pc = 0x113CACu;
    SET_GPR_U32(ctx, 31, 0x113CB4u);
    ctx->pc = 0x113DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113DE0u, 0x113CACu, 0x113CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113CB4u;
label_113cb4:
    // 0x113cb4: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x113cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x113cb8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x113CB8u;
    SET_GPR_U32(ctx, 31, 0x113CC0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x113CB8u, 0x113CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113CC0u;
label_113cc0:
    // 0x113cc0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x113cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_113cc4:
    // 0x113cc4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x113CC4u;
    {
        const bool branch_taken_0x113cc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x113cc4) {
            ctx->pc = 0x113CE8u;
            goto label_113ce8;
        }
    }
    ctx->pc = 0x113CCCu;
    // 0x113ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cd0: 0xc044f70  jal         func_113DC0
    ctx->pc = 0x113CD0u;
    SET_GPR_U32(ctx, 31, 0x113CD8u);
    ctx->pc = 0x113DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113DC0u, 0x113CD0u, 0x113CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113CD8u;
label_113cd8:
    // 0x113cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cdc: 0xc119c5c  jal         func_467170
    ctx->pc = 0x113CDCu;
    SET_GPR_U32(ctx, 31, 0x113CE4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x113CDCu, 0x113CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113CE4u;
label_113ce4:
    // 0x113ce4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x113ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113ce8:
    // 0x113ce8: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x113ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x113cec: 0xc044f60  jal         func_113D80
    ctx->pc = 0x113CECu;
    SET_GPR_U32(ctx, 31, 0x113CF4u);
    ctx->pc = 0x113D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D80u, 0x113CECu, 0x113CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113CF4u;
label_113cf4:
    // 0x113cf4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x113cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113cf8: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x113cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x113cfc: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x113cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x113d00: 0xc044df4  jal         func_1137D0
    ctx->pc = 0x113D00u;
    SET_GPR_U32(ctx, 31, 0x113D08u);
    ctx->pc = 0x1137D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1137D0u, 0x113D00u, 0x113D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D08u;
label_113d08:
    // 0x113d08: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x113d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x113d0c: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x113d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x113d10: 0xc041998  jal         func_106660
    ctx->pc = 0x113D10u;
    SET_GPR_U32(ctx, 31, 0x113D18u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x113D10u, 0x113D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D18u;
label_113d18:
    // 0x113d18: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x113D18u;
    {
        const bool branch_taken_0x113d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113d18) {
            ctx->pc = 0x113C8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113c8c;
        }
    }
    ctx->pc = 0x113D20u;
    // 0x113d20: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x113d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113d24: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x113d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x113d28: 0xc044f54  jal         func_113D50
    ctx->pc = 0x113D28u;
    SET_GPR_U32(ctx, 31, 0x113D30u);
    ctx->pc = 0x113D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D50u, 0x113D28u, 0x113D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D30u;
label_113d30:
    // 0x113d30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x113d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113d38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x113d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113d3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x113d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113d40: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x113d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x113d44: 0x3e00008  jr          $ra
    ctx->pc = 0x113D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113D4Cu;
    // 0x113d4c: 0x0  nop
    ctx->pc = 0x113d4cu;
    // NOP
    ctx->pc = 0x113d50u;
}
