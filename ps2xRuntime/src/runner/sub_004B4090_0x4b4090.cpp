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

// Function: sub_004B4090
// Address: 0x4b4090 - 0x4b40c0
void sub_004B4090_0x4b4090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4090_0x4b4090");
#endif

    switch (ctx->pc) {
        case 0x4b40b0u: goto label_4b40b0;
        default: break;
    }

    ctx->pc = 0x4b4090u;

    // 0x4b4090: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4b4090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4094: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b4094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b4098: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b4098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b409c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4b409cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b40a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b40a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b40a4: 0x2444ee50  addiu       $a0, $v0, -0x11B0
    ctx->pc = 0x4b40a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962768));
    // 0x4b40a8: 0xc12d448  jal         func_4B5120
    ctx->pc = 0x4B40A8u;
    SET_GPR_U32(ctx, 31, 0x4B40B0u);
    ctx->pc = 0x4B40ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B40A8u;
    // 0x4b40ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5120u, 0x4B40A8u, 0x4B40B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B40B0u;
label_4b40b0:
    // 0x4b40b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b40b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b40b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b40b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B40B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B40B8u;
        // 0x4b40bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B40B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B40C0u;
}
