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

// Function: sub_00161C90
// Address: 0x161c90 - 0x161cc0
void sub_00161C90_0x161c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161C90_0x161c90");
#endif

    switch (ctx->pc) {
        case 0x161ca8u: goto label_161ca8;
        default: break;
    }

    ctx->pc = 0x161c90u;

    // 0x161c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161c98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x161c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x161c9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x161c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161ca0: 0xc0589c4  jal         func_162710
    ctx->pc = 0x161CA0u;
    SET_GPR_U32(ctx, 31, 0x161CA8u);
    ctx->pc = 0x162710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162710u, 0x161CA0u, 0x161CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161CA8u;
label_161ca8:
    // 0x161ca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161cac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x161cacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x161cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x161CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161CB8u;
    // 0x161cb8: 0x0  nop
    ctx->pc = 0x161cb8u;
    // NOP
    // 0x161cbc: 0x0  nop
    ctx->pc = 0x161cbcu;
    // NOP
    ctx->pc = 0x161cc0u;
}
