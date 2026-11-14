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

// Function: sub_002FB0C8
// Address: 0x2fb0c8 - 0x2fb0f8
void sub_002FB0C8_0x2fb0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB0C8_0x2fb0c8");
#endif

    switch (ctx->pc) {
        case 0x2fb0e8u: goto label_2fb0e8;
        default: break;
    }

    ctx->pc = 0x2fb0c8u;

    // 0x2fb0c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fb0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fb0cc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2fb0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2fb0d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb0d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fb0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fb0d8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2fb0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2fb0dc: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2fb0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2fb0e0: 0xc0bebec  jal         func_2FAFB0
    ctx->pc = 0x2FB0E0u;
    SET_GPR_U32(ctx, 31, 0x2FB0E8u);
    ctx->pc = 0x2FB0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB0E0u;
    // 0x2fb0e4: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAFB0u, 0x2FB0E0u, 0x2FB0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB0E8u;
label_2fb0e8:
    // 0x2fb0e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fb0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0ECu;
        // 0x2fb0f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB0F4u;
    // 0x2fb0f4: 0x0  nop
    ctx->pc = 0x2fb0f4u;
    // NOP
    ctx->pc = 0x2fb0f8u;
}
