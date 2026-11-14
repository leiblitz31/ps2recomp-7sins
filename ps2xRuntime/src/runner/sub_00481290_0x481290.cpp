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

// Function: sub_00481290
// Address: 0x481290 - 0x4812d0
void sub_00481290_0x481290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481290_0x481290");
#endif

    switch (ctx->pc) {
        case 0x4812b4u: goto label_4812b4;
        default: break;
    }

    ctx->pc = 0x481290u;

    // 0x481290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481298: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x481298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48129c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48129cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4812a0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x4812a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x4812a4: 0x24a512d0  addiu       $a1, $a1, 0x12D0
    ctx->pc = 0x4812a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4816));
    // 0x4812a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4812a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4812ac: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x4812ACu;
    SET_GPR_U32(ctx, 31, 0x4812B4u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x4812ACu, 0x4812B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4812B4u;
label_4812b4:
    // 0x4812b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4812b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4812b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4812b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4812bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4812BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4812BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4812C4u;
    // 0x4812c4: 0x0  nop
    ctx->pc = 0x4812c4u;
    // NOP
    // 0x4812c8: 0x0  nop
    ctx->pc = 0x4812c8u;
    // NOP
    // 0x4812cc: 0x0  nop
    ctx->pc = 0x4812ccu;
    // NOP
    ctx->pc = 0x4812d0u;
}
