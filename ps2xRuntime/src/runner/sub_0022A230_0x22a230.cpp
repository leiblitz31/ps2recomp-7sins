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

// Function: sub_0022A230
// Address: 0x22a230 - 0x22a270
void sub_0022A230_0x22a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A230_0x22a230");
#endif

    switch (ctx->pc) {
        case 0x22a250u: goto label_22a250;
        default: break;
    }

    ctx->pc = 0x22a230u;

    // 0x22a230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22a230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22a234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a238: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22a238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22a23c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22a23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22a240: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22a240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a244: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22a244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a248: 0xc08a89c  jal         func_22A270
    ctx->pc = 0x22A248u;
    SET_GPR_U32(ctx, 31, 0x22A250u);
    ctx->pc = 0x22A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A270u, 0x22A248u, 0x22A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A250u;
label_22a250:
    // 0x22a250: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22a250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a258: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22a258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22a25c: 0x3e00008  jr          $ra
    ctx->pc = 0x22A25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A264u;
    // 0x22a264: 0x0  nop
    ctx->pc = 0x22a264u;
    // NOP
    // 0x22a268: 0x0  nop
    ctx->pc = 0x22a268u;
    // NOP
    // 0x22a26c: 0x0  nop
    ctx->pc = 0x22a26cu;
    // NOP
    ctx->pc = 0x22a270u;
}
