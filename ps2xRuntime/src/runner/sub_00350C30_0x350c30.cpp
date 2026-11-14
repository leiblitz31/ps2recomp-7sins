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

// Function: sub_00350C30
// Address: 0x350c30 - 0x350ca0
void sub_00350C30_0x350c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350C30_0x350c30");
#endif

    switch (ctx->pc) {
        case 0x350c54u: goto label_350c54;
        case 0x350c84u: goto label_350c84;
        default: break;
    }

    ctx->pc = 0x350c30u;

    // 0x350c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x350c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x350c34: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x350c34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x350c38: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x350c38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x350c3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350c40: 0x24c64568  addiu       $a2, $a2, 0x4568
    ctx->pc = 0x350c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17768));
    // 0x350c44: 0x24e74608  addiu       $a3, $a3, 0x4608
    ctx->pc = 0x350c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17928));
    // 0x350c48: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x350c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x350c4c: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x350C4Cu;
    SET_GPR_U32(ctx, 31, 0x350C54u);
    ctx->pc = 0x350C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350C4Cu;
    // 0x350c50: 0x2405012f  addiu       $a1, $zero, 0x12F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x350C4Cu, 0x350C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C54u;
label_350c54:
    // 0x350c54: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350C54u;
    {
        const bool branch_taken_0x350c54 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x350C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C54u;
        // 0x350c58: 0xaf82a85c  sw          $v0, -0x57A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350c54) {
            ctx->pc = 0x350C64u;
            goto label_350c64;
        }
    }
    ctx->pc = 0x350C5Cu;
    // 0x350c5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x350C5Cu;
    {
        const bool branch_taken_0x350c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C5Cu;
        // 0x350c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350c5c) {
            ctx->pc = 0x350C90u;
            goto label_350c90;
        }
    }
    ctx->pc = 0x350C64u;
label_350c64:
    // 0x350c64: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x350c64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x350c68: 0x3c070035  lui         $a3, 0x35
    ctx->pc = 0x350c68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)53 << 16));
    // 0x350c6c: 0x24c60f20  addiu       $a2, $a2, 0xF20
    ctx->pc = 0x350c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3872));
    // 0x350c70: 0x24e70f38  addiu       $a3, $a3, 0xF38
    ctx->pc = 0x350c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3896));
    // 0x350c74: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x350c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x350c78: 0x2405012f  addiu       $a1, $zero, 0x12F
    ctx->pc = 0x350c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    // 0x350c7c: 0xc0e28ec  jal         func_38A3B0
    ctx->pc = 0x350C7Cu;
    SET_GPR_U32(ctx, 31, 0x350C84u);
    ctx->pc = 0x350C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350C7Cu;
    // 0x350c80: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3B0u, 0x350C7Cu, 0x350C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C84u;
label_350c84:
    // 0x350c84: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x350c84u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x350c88: 0xaf82a858  sw          $v0, -0x57A8($gp)
    ctx->pc = 0x350c88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944856), GPR_U32(ctx, 2));
    // 0x350c8c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x350c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_350c90:
    // 0x350c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350c94: 0x3e00008  jr          $ra
    ctx->pc = 0x350C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C94u;
        // 0x350c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350C9Cu;
    // 0x350c9c: 0x0  nop
    ctx->pc = 0x350c9cu;
    // NOP
    ctx->pc = 0x350ca0u;
}
