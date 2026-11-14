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

// Function: sub_00153F40
// Address: 0x153f40 - 0x153f80
void sub_00153F40_0x153f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153F40_0x153f40");
#endif

    switch (ctx->pc) {
        case 0x153f5cu: goto label_153f5c;
        default: break;
    }

    ctx->pc = 0x153f40u;

    // 0x153f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153f44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153f48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x153f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x153f4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x153f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153f50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x153f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153f54: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x153F54u;
    SET_GPR_U32(ctx, 31, 0x153F5Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x153F54u, 0x153F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153F5Cu;
label_153f5c:
    // 0x153f5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x153f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153f60: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x153f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x153f64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x153f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153f6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x153f6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x153f70: 0x3e00008  jr          $ra
    ctx->pc = 0x153F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153F78u;
    // 0x153f78: 0x0  nop
    ctx->pc = 0x153f78u;
    // NOP
    // 0x153f7c: 0x0  nop
    ctx->pc = 0x153f7cu;
    // NOP
    ctx->pc = 0x153f80u;
}
