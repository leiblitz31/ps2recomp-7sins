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

// Function: sub_00217950
// Address: 0x217950 - 0x217990
void sub_00217950_0x217950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217950_0x217950");
#endif

    switch (ctx->pc) {
        case 0x217970u: goto label_217970;
        default: break;
    }

    ctx->pc = 0x217950u;

    // 0x217950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217958: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x217958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21795c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x21795cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x217960: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x217960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217964: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x217964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217968: 0xc085e64  jal         func_217990
    ctx->pc = 0x217968u;
    SET_GPR_U32(ctx, 31, 0x217970u);
    ctx->pc = 0x217990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217990u, 0x217968u, 0x217970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217970u;
label_217970:
    // 0x217970: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x217970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217978: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x217978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21797c: 0x3e00008  jr          $ra
    ctx->pc = 0x21797Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21797Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217984u;
    // 0x217984: 0x0  nop
    ctx->pc = 0x217984u;
    // NOP
    // 0x217988: 0x0  nop
    ctx->pc = 0x217988u;
    // NOP
    // 0x21798c: 0x0  nop
    ctx->pc = 0x21798cu;
    // NOP
    ctx->pc = 0x217990u;
}
