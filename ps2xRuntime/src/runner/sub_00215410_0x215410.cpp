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

// Function: sub_00215410
// Address: 0x215410 - 0x215470
void sub_00215410_0x215410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215410_0x215410");
#endif

    switch (ctx->pc) {
        case 0x215430u: goto label_215430;
        case 0x215458u: goto label_215458;
        default: break;
    }

    ctx->pc = 0x215410u;

    // 0x215410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x215418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21541c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x21541cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x215420: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x215420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215424: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x215424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215428: 0xc08ec68  jal         func_23B1A0
    ctx->pc = 0x215428u;
    SET_GPR_U32(ctx, 31, 0x215430u);
    ctx->pc = 0x23B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1A0u, 0x215428u, 0x215430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215430u;
label_215430:
    // 0x215430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215434: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x215434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x215438: 0x3e00008  jr          $ra
    ctx->pc = 0x215438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215440u;
    // 0x215440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215448: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x215448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21544c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x21544cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215450: 0xc08ec70  jal         func_23B1C0
    ctx->pc = 0x215450u;
    SET_GPR_U32(ctx, 31, 0x215458u);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x215450u, 0x215458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215458u;
label_215458:
    // 0x215458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21545c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x21545cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x215460: 0x3e00008  jr          $ra
    ctx->pc = 0x215460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215468u;
    // 0x215468: 0x0  nop
    ctx->pc = 0x215468u;
    // NOP
    // 0x21546c: 0x0  nop
    ctx->pc = 0x21546cu;
    // NOP
    ctx->pc = 0x215470u;
}
