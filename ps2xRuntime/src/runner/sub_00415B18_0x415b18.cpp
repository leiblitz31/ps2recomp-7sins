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

// Function: sub_00415B18
// Address: 0x415b18 - 0x415b78
void sub_00415B18_0x415b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415B18_0x415b18");
#endif

    switch (ctx->pc) {
        case 0x415b44u: goto label_415b44;
        case 0x415b6cu: goto label_415b6c;
        default: break;
    }

    ctx->pc = 0x415b18u;

    // 0x415b18: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x415b18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415b1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x415b1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x415b20: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x415b20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415b24: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x415b24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415b28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x415b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415b2c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x415b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x415b30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x415b34: 0x2444c9c8  addiu       $a0, $v0, -0x3638
    ctx->pc = 0x415b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953416));
    // 0x415b38: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x415b38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415b3c: 0xc104a46  jal         func_412918
    ctx->pc = 0x415B3Cu;
    SET_GPR_U32(ctx, 31, 0x415B44u);
    ctx->pc = 0x415B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415B3Cu;
    // 0x415b40: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412918u, 0x415B3Cu, 0x415B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415B44u;
label_415b44:
    // 0x415b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x415b48: 0x3e00008  jr          $ra
    ctx->pc = 0x415B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415B48u;
        // 0x415b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415B50u;
    // 0x415b50: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x415b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415b54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x415b54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x415b58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x415b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415b5c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x415b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x415b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x415b64: 0xc104a56  jal         func_412958
    ctx->pc = 0x415B64u;
    SET_GPR_U32(ctx, 31, 0x415B6Cu);
    ctx->pc = 0x415B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415B64u;
    // 0x415b68: 0x2444c9c8  addiu       $a0, $v0, -0x3638 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412958u, 0x415B64u, 0x415B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415B6Cu;
label_415b6c:
    // 0x415b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x415b70: 0x3e00008  jr          $ra
    ctx->pc = 0x415B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415B70u;
        // 0x415b74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415B78u;
}
