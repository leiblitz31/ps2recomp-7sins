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

// Function: sub_00115BF0
// Address: 0x115bf0 - 0x115d40
void sub_00115BF0_0x115bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115BF0_0x115bf0");
#endif

    switch (ctx->pc) {
        case 0x115c0cu: goto label_115c0c;
        case 0x115c20u: goto label_115c20;
        case 0x115c30u: goto label_115c30;
        case 0x115c38u: goto label_115c38;
        case 0x115c44u: goto label_115c44;
        case 0x115c54u: goto label_115c54;
        case 0x115c74u: goto label_115c74;
        case 0x115c80u: goto label_115c80;
        case 0x115c98u: goto label_115c98;
        case 0x115ca4u: goto label_115ca4;
        case 0x115cbcu: goto label_115cbc;
        case 0x115cccu: goto label_115ccc;
        case 0x115ce0u: goto label_115ce0;
        case 0x115cf4u: goto label_115cf4;
        case 0x115d08u: goto label_115d08;
        case 0x115d18u: goto label_115d18;
        default: break;
    }

    ctx->pc = 0x115bf0u;

    // 0x115bf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x115bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x115bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x115bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x115bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x115bfc: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x115bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x115c00: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x115c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x115c04: 0xc044fcc  jal         func_113F30
    ctx->pc = 0x115C04u;
    SET_GPR_U32(ctx, 31, 0x115C0Cu);
    ctx->pc = 0x113F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113F30u, 0x115C04u, 0x115C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C0Cu;
label_115c0c:
    // 0x115c0c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x115c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115c10: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x115c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x115c14: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x115c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x115c18: 0xc044fac  jal         func_113EB0
    ctx->pc = 0x115C18u;
    SET_GPR_U32(ctx, 31, 0x115C20u);
    ctx->pc = 0x113EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EB0u, 0x115C18u, 0x115C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C20u;
label_115c20:
    // 0x115c20: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x115c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x115c24: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x115c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x115c28: 0xc044f9c  jal         func_113E70
    ctx->pc = 0x115C28u;
    SET_GPR_U32(ctx, 31, 0x115C30u);
    ctx->pc = 0x113E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113E70u, 0x115C28u, 0x115C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C30u;
label_115c30:
    // 0x115c30: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x115C30u;
    {
        const bool branch_taken_0x115c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115c30) {
            ctx->pc = 0x115CF4u;
            goto label_115cf4;
        }
    }
    ctx->pc = 0x115C38u;
label_115c38:
    // 0x115c38: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x115c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x115c3c: 0xc044f88  jal         func_113E20
    ctx->pc = 0x115C3Cu;
    SET_GPR_U32(ctx, 31, 0x115C44u);
    ctx->pc = 0x113E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113E20u, 0x115C3Cu, 0x115C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C44u;
label_115c44:
    // 0x115c44: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x115c44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x115c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c4c: 0xc0457f0  jal         func_115FC0
    ctx->pc = 0x115C4Cu;
    SET_GPR_U32(ctx, 31, 0x115C54u);
    ctx->pc = 0x115FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FC0u, 0x115C4Cu, 0x115C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C54u;
label_115c54:
    // 0x115c54: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x115C54u;
    {
        const bool branch_taken_0x115c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115c54) {
            ctx->pc = 0x115CE8u;
            goto label_115ce8;
        }
    }
    ctx->pc = 0x115C5Cu;
    // 0x115c5c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x115c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x115c60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x115C60u;
    {
        const bool branch_taken_0x115c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115c60) {
            ctx->pc = 0x115C84u;
            goto label_115c84;
        }
    }
    ctx->pc = 0x115C68u;
    // 0x115c68: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x115c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x115c6c: 0xc044f78  jal         func_113DE0
    ctx->pc = 0x115C6Cu;
    SET_GPR_U32(ctx, 31, 0x115C74u);
    ctx->pc = 0x113DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113DE0u, 0x115C6Cu, 0x115C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C74u;
label_115c74:
    // 0x115c74: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x115c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x115c78: 0xc119c5c  jal         func_467170
    ctx->pc = 0x115C78u;
    SET_GPR_U32(ctx, 31, 0x115C80u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x115C78u, 0x115C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C80u;
label_115c80:
    // 0x115c80: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x115c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_115c84:
    // 0x115c84: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x115C84u;
    {
        const bool branch_taken_0x115c84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x115c84) {
            ctx->pc = 0x115CA8u;
            goto label_115ca8;
        }
    }
    ctx->pc = 0x115C8Cu;
    // 0x115c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c90: 0xc044f70  jal         func_113DC0
    ctx->pc = 0x115C90u;
    SET_GPR_U32(ctx, 31, 0x115C98u);
    ctx->pc = 0x113DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113DC0u, 0x115C90u, 0x115C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C98u;
label_115c98:
    // 0x115c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c9c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x115C9Cu;
    SET_GPR_U32(ctx, 31, 0x115CA4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x115C9Cu, 0x115CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115CA4u;
label_115ca4:
    // 0x115ca4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x115ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115ca8:
    // 0x115ca8: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x115ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x115cac: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x115cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x115cb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115cb4: 0xc045750  jal         func_115D40
    ctx->pc = 0x115CB4u;
    SET_GPR_U32(ctx, 31, 0x115CBCu);
    ctx->pc = 0x115D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115D40u, 0x115CB4u, 0x115CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115CBCu;
label_115cbc:
    // 0x115cbc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x115cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115cc0: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x115cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x115cc4: 0xc0450c0  jal         func_114300
    ctx->pc = 0x115CC4u;
    SET_GPR_U32(ctx, 31, 0x115CCCu);
    ctx->pc = 0x114300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114300u, 0x115CC4u, 0x115CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115CCCu;
label_115ccc:
    // 0x115ccc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x115cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115cd0: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x115cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x115cd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x115cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115cd8: 0xc04513c  jal         func_1144F0
    ctx->pc = 0x115CD8u;
    SET_GPR_U32(ctx, 31, 0x115CE0u);
    ctx->pc = 0x1144F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1144F0u, 0x115CD8u, 0x115CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115CE0u;
label_115ce0:
    // 0x115ce0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x115CE0u;
    {
        const bool branch_taken_0x115ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115ce0) {
            ctx->pc = 0x115CF4u;
            goto label_115cf4;
        }
    }
    ctx->pc = 0x115CE8u;
label_115ce8:
    // 0x115ce8: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x115ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x115cec: 0xc044f60  jal         func_113D80
    ctx->pc = 0x115CECu;
    SET_GPR_U32(ctx, 31, 0x115CF4u);
    ctx->pc = 0x113D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D80u, 0x115CECu, 0x115CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115CF4u;
label_115cf4:
    // 0x115cf4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x115cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115cf8: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x115cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x115cfc: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x115cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x115d00: 0xc044df4  jal         func_1137D0
    ctx->pc = 0x115D00u;
    SET_GPR_U32(ctx, 31, 0x115D08u);
    ctx->pc = 0x1137D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1137D0u, 0x115D00u, 0x115D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D08u;
label_115d08:
    // 0x115d08: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x115d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x115d0c: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x115d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x115d10: 0xc041998  jal         func_106660
    ctx->pc = 0x115D10u;
    SET_GPR_U32(ctx, 31, 0x115D18u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x115D10u, 0x115D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D18u;
label_115d18:
    // 0x115d18: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x115D18u;
    {
        const bool branch_taken_0x115d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115d18) {
            ctx->pc = 0x115C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115c38;
        }
    }
    ctx->pc = 0x115D20u;
    // 0x115d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x115d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115d28: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x115d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x115d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x115D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115D34u;
    // 0x115d34: 0x0  nop
    ctx->pc = 0x115d34u;
    // NOP
    // 0x115d38: 0x0  nop
    ctx->pc = 0x115d38u;
    // NOP
    // 0x115d3c: 0x0  nop
    ctx->pc = 0x115d3cu;
    // NOP
    ctx->pc = 0x115d40u;
}
