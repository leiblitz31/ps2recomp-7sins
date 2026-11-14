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

// Function: sub_0044F860
// Address: 0x44f860 - 0x44f8b0
void sub_0044F860_0x44f860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F860_0x44f860");
#endif

    switch (ctx->pc) {
        case 0x44f898u: goto label_44f898;
        default: break;
    }

    ctx->pc = 0x44f860u;

    // 0x44f860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44f860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44f864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44f868: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44f868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44f86c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x44f86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x44f870: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f874: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x44f874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x44f878: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f87c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x44f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x44f880: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f884: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x44f884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x44f888: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x44f888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44f88c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44f88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f890: 0xc113e2c  jal         func_44F8B0
    ctx->pc = 0x44F890u;
    SET_GPR_U32(ctx, 31, 0x44F898u);
    ctx->pc = 0x44F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F8B0u, 0x44F890u, 0x44F898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F898u;
label_44f898:
    // 0x44f898: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f89c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f8a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44f8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44f8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x44F8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F8ACu;
    // 0x44f8ac: 0x0  nop
    ctx->pc = 0x44f8acu;
    // NOP
    ctx->pc = 0x44f8b0u;
}
