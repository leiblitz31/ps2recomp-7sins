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

// Function: sub_002E9F70
// Address: 0x2e9f70 - 0x2e9fd0
void sub_002E9F70_0x2e9f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9F70_0x2e9f70");
#endif

    switch (ctx->pc) {
        case 0x2e9f90u: goto label_2e9f90;
        case 0x2e9f9cu: goto label_2e9f9c;
        case 0x2e9fa4u: goto label_2e9fa4;
        case 0x2e9fb4u: goto label_2e9fb4;
        default: break;
    }

    ctx->pc = 0x2e9f70u;

    // 0x2e9f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e9f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e9f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e9f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e9f78: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x2e9f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2e9f7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e9f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e9f80: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2e9f80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e9f84: 0x30500040  andi        $s0, $v0, 0x40
    ctx->pc = 0x2e9f84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2e9f88: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E9F88u;
    SET_GPR_U32(ctx, 31, 0x2E9F90u);
    ctx->pc = 0x2E9F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9F88u;
    // 0x2e9f8c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E9F88u, 0x2E9F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F90u;
label_2e9f90:
    // 0x2e9f90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9f94: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E9F94u;
    SET_GPR_U32(ctx, 31, 0x2E9F9Cu);
    ctx->pc = 0x2E9F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9F94u;
    // 0x2e9f98: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E9F94u, 0x2E9F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F9Cu;
label_2e9f9c:
    // 0x2e9f9c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9F9Cu;
    {
        const bool branch_taken_0x2e9f9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F9Cu;
        // 0x2e9fa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f9c) {
            ctx->pc = 0x2E9FACu;
            goto label_2e9fac;
        }
    }
    ctx->pc = 0x2E9FA4u;
label_2e9fa4:
    // 0x2e9fa4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9FA4u;
    {
        const bool branch_taken_0x2e9fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FA4u;
        // 0x2e9fa8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9fa4) {
            ctx->pc = 0x2E9FBCu;
            goto label_2e9fbc;
        }
    }
    ctx->pc = 0x2E9FACu;
label_2e9fac:
    // 0x2e9fac: 0xc0ba1c8  jal         func_2E8720
    ctx->pc = 0x2E9FACu;
    SET_GPR_U32(ctx, 31, 0x2E9FB4u);
    ctx->pc = 0x2E9FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9FACu;
    // 0x2e9fb0: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E9FACu, 0x2E9FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9FB4u;
label_2e9fb4:
    // 0x2e9fb4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E9FB4u;
    {
        const bool branch_taken_0x2e9fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9fb4) {
            ctx->pc = 0x2E9FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9fa4;
        }
    }
    ctx->pc = 0x2E9FBCu;
label_2e9fbc:
    // 0x2e9fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e9fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FC0u;
        // 0x2e9fc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9FC8u;
    // 0x2e9fc8: 0x0  nop
    ctx->pc = 0x2e9fc8u;
    // NOP
    // 0x2e9fcc: 0x0  nop
    ctx->pc = 0x2e9fccu;
    // NOP
    ctx->pc = 0x2e9fd0u;
}
