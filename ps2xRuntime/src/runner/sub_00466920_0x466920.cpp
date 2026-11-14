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

// Function: sub_00466920
// Address: 0x466920 - 0x466960
void sub_00466920_0x466920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466920_0x466920");
#endif

    switch (ctx->pc) {
        case 0x466944u: goto label_466944;
        default: break;
    }

    ctx->pc = 0x466920u;

    // 0x466920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x466920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x466924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466928: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x466928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46692c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46692cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x466930: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x466930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466934: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x466934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x466938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x466938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46693c: 0xc119a58  jal         func_466960
    ctx->pc = 0x46693Cu;
    SET_GPR_U32(ctx, 31, 0x466944u);
    ctx->pc = 0x466960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466960u, 0x46693Cu, 0x466944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466944u;
label_466944:
    // 0x466944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466948: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x466948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46694c: 0x3e00008  jr          $ra
    ctx->pc = 0x46694Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46694Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466954u;
    // 0x466954: 0x0  nop
    ctx->pc = 0x466954u;
    // NOP
    // 0x466958: 0x0  nop
    ctx->pc = 0x466958u;
    // NOP
    // 0x46695c: 0x0  nop
    ctx->pc = 0x46695cu;
    // NOP
    ctx->pc = 0x466960u;
}
