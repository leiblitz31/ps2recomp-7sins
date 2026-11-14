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

// Function: sub_0038E890
// Address: 0x38e890 - 0x38e8e8
void sub_0038E890_0x38e890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E890_0x38e890");
#endif

    switch (ctx->pc) {
        case 0x38e8acu: goto label_38e8ac;
        case 0x38e8d0u: goto label_38e8d0;
        default: break;
    }

    ctx->pc = 0x38e890u;

    // 0x38e890: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x38e890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e894: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38e894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38e898: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38e898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e89c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x38e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x38e8a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38e8a4: 0xc104a64  jal         func_412990
    ctx->pc = 0x38E8A4u;
    SET_GPR_U32(ctx, 31, 0x38E8ACu);
    ctx->pc = 0x38E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E8A4u;
    // 0x38e8a8: 0x2444ae00  addiu       $a0, $v0, -0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412990u, 0x38E8A4u, 0x38E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E8ACu;
label_38e8ac:
    // 0x38e8ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x38E8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8B0u;
        // 0x38e8b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E8B8u;
    // 0x38e8b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38e8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e8bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38e8bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38e8c0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38e8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x38e8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38e8c8: 0xc104c74  jal         func_4131D0
    ctx->pc = 0x38E8C8u;
    SET_GPR_U32(ctx, 31, 0x38E8D0u);
    ctx->pc = 0x38E8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E8C8u;
    // 0x38e8cc: 0x2484ae00  addiu       $a0, $a0, -0x5200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4131D0u, 0x38E8C8u, 0x38E8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E8D0u;
label_38e8d0:
    // 0x38e8d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x38E8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8D4u;
        // 0x38e8d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E8DCu;
    // 0x38e8dc: 0x0  nop
    ctx->pc = 0x38e8dcu;
    // NOP
    // 0x38e8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x38E8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E8E0u;
        // 0x38e8e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E8E8u;
}
