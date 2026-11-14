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

// Function: sub_00285380
// Address: 0x285380 - 0x2853c0
void sub_00285380_0x285380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285380_0x285380");
#endif

    switch (ctx->pc) {
        case 0x285398u: goto label_285398;
        case 0x2853acu: goto label_2853ac;
        default: break;
    }

    ctx->pc = 0x285380u;

    // 0x285380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285388: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x285388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28538c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x28538cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x285390: 0xc0a1570  jal         func_2855C0
    ctx->pc = 0x285390u;
    SET_GPR_U32(ctx, 31, 0x285398u);
    ctx->pc = 0x2855C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2855C0u, 0x285390u, 0x285398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285398u;
label_285398:
    // 0x285398: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x285398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28539c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x28539cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2853a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2853a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2853a4: 0xc0a14f0  jal         func_2853C0
    ctx->pc = 0x2853A4u;
    SET_GPR_U32(ctx, 31, 0x2853ACu);
    ctx->pc = 0x2853C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2853C0u, 0x2853A4u, 0x2853ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2853ACu;
label_2853ac:
    // 0x2853ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2853acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2853b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2853b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2853b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2853b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2853b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2853B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2853B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2853C0u;
}
