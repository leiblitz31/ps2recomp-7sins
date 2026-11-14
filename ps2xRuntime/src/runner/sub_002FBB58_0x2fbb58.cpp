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

// Function: sub_002FBB58
// Address: 0x2fbb58 - 0x2fbba8
void sub_002FBB58_0x2fbb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBB58_0x2fbb58");
#endif

    switch (ctx->pc) {
        case 0x2fbb78u: goto label_2fbb78;
        case 0x2fbb88u: goto label_2fbb88;
        case 0x2fbb94u: goto label_2fbb94;
        default: break;
    }

    ctx->pc = 0x2fbb58u;

    // 0x2fbb58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fbb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2fbb5c: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x2fbb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x2fbb60: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fbb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fbb64: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x2fbb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x2fbb68: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2fbb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2fbb6c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2fbb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2fbb70: 0xc0beca4  jal         func_2FB290
    ctx->pc = 0x2FBB70u;
    SET_GPR_U32(ctx, 31, 0x2FBB78u);
    ctx->pc = 0x2FBB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBB70u;
    // 0x2fbb74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB290u, 0x2FBB70u, 0x2FBB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBB78u;
label_2fbb78:
    // 0x2fbb78: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2fbb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fbb7c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2fbb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2fbb80: 0xc0beca4  jal         func_2FB290
    ctx->pc = 0x2FBB80u;
    SET_GPR_U32(ctx, 31, 0x2FBB88u);
    ctx->pc = 0x2FBB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBB80u;
    // 0x2fbb84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB290u, 0x2FBB80u, 0x2FBB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBB88u;
label_2fbb88:
    // 0x2fbb88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fbb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbb8c: 0xc0bee8e  jal         func_2FBA38
    ctx->pc = 0x2FBB8Cu;
    SET_GPR_U32(ctx, 31, 0x2FBB94u);
    ctx->pc = 0x2FBB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBB8Cu;
    // 0x2fbb90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBA38u, 0x2FBB8Cu, 0x2FBB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBB94u;
label_2fbb94:
    // 0x2fbb94: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2fbb94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fbb98: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2fbb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2fbb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBB9Cu;
        // 0x2fbba0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBBA4u;
    // 0x2fbba4: 0x0  nop
    ctx->pc = 0x2fbba4u;
    // NOP
    ctx->pc = 0x2fbba8u;
}
