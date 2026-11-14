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

// Function: sub_0017F150
// Address: 0x17f150 - 0x17f1a0
void sub_0017F150_0x17f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F150_0x17f150");
#endif

    switch (ctx->pc) {
        case 0x17f16cu: goto label_17f16c;
        case 0x17f180u: goto label_17f180;
        case 0x17f190u: goto label_17f190;
        default: break;
    }

    ctx->pc = 0x17f150u;

    // 0x17f150: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x17f150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x17f154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f158: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x17f158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x17f15c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x17f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x17f160: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x17f160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17f164: 0xc08424c  jal         func_210930
    ctx->pc = 0x17F164u;
    SET_GPR_U32(ctx, 31, 0x17F16Cu);
    ctx->pc = 0x210930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210930u, 0x17F164u, 0x17F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F16Cu;
label_17f16c:
    // 0x17f16c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x17f16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17f170: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x17f170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17f174: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x17f174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17f178: 0xc05fc68  jal         func_17F1A0
    ctx->pc = 0x17F178u;
    SET_GPR_U32(ctx, 31, 0x17F180u);
    ctx->pc = 0x17F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F1A0u, 0x17F178u, 0x17F180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F180u;
label_17f180:
    // 0x17f180: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x17f180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17f184: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17f184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17f188: 0xc0842a0  jal         func_210A80
    ctx->pc = 0x17F188u;
    SET_GPR_U32(ctx, 31, 0x17F190u);
    ctx->pc = 0x210A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210A80u, 0x17F188u, 0x17F190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F190u;
label_17f190:
    // 0x17f190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f194: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x17f194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17f198: 0x3e00008  jr          $ra
    ctx->pc = 0x17F198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F1A0u;
}
