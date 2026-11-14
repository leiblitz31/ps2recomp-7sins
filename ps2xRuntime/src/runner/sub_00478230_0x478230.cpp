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

// Function: sub_00478230
// Address: 0x478230 - 0x478270
void sub_00478230_0x478230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478230_0x478230");
#endif

    switch (ctx->pc) {
        case 0x478254u: goto label_478254;
        default: break;
    }

    ctx->pc = 0x478230u;

    // 0x478230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x478230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x478234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x478234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x478238: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x478238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47823c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47823cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478240: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x478240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x478244: 0x24a58270  addiu       $a1, $a1, -0x7D90
    ctx->pc = 0x478244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935152));
    // 0x478248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x478248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47824c: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x47824Cu;
    SET_GPR_U32(ctx, 31, 0x478254u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x47824Cu, 0x478254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478254u;
label_478254:
    // 0x478254: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x478254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x478258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47825c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x47825cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x478260: 0x3e00008  jr          $ra
    ctx->pc = 0x478260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478268u;
    // 0x478268: 0x0  nop
    ctx->pc = 0x478268u;
    // NOP
    // 0x47826c: 0x0  nop
    ctx->pc = 0x47826cu;
    // NOP
    ctx->pc = 0x478270u;
}
