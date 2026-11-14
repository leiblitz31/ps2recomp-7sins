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

// Function: sub_00254740
// Address: 0x254740 - 0x254770
void sub_00254740_0x254740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254740_0x254740");
#endif

    switch (ctx->pc) {
        case 0x254758u: goto label_254758;
        default: break;
    }

    ctx->pc = 0x254740u;

    // 0x254740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254748: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x254748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25474c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25474cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254750: 0xc0951dc  jal         func_254770
    ctx->pc = 0x254750u;
    SET_GPR_U32(ctx, 31, 0x254758u);
    ctx->pc = 0x254770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254770u, 0x254750u, 0x254758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254758u;
label_254758:
    // 0x254758: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25475c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25475cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254760: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x254760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x254764: 0x3e00008  jr          $ra
    ctx->pc = 0x254764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25476Cu;
    // 0x25476c: 0x0  nop
    ctx->pc = 0x25476cu;
    // NOP
    ctx->pc = 0x254770u;
}
