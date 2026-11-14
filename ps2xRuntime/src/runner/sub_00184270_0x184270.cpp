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

// Function: sub_00184270
// Address: 0x184270 - 0x1842b0
void sub_00184270_0x184270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184270_0x184270");
#endif

    switch (ctx->pc) {
        case 0x184290u: goto label_184290;
        default: break;
    }

    ctx->pc = 0x184270u;

    // 0x184270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x184270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x184274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x184278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18427c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18427cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x184280: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x184280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184284: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x184284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184288: 0xc0610ac  jal         func_1842B0
    ctx->pc = 0x184288u;
    SET_GPR_U32(ctx, 31, 0x184290u);
    ctx->pc = 0x1842B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1842B0u, 0x184288u, 0x184290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184290u;
label_184290:
    // 0x184290: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184298: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x184298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18429c: 0x3e00008  jr          $ra
    ctx->pc = 0x18429Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18429Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1842A4u;
    // 0x1842a4: 0x0  nop
    ctx->pc = 0x1842a4u;
    // NOP
    // 0x1842a8: 0x0  nop
    ctx->pc = 0x1842a8u;
    // NOP
    // 0x1842ac: 0x0  nop
    ctx->pc = 0x1842acu;
    // NOP
    ctx->pc = 0x1842b0u;
}
