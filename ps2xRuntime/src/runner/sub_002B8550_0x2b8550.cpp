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

// Function: sub_002B8550
// Address: 0x2b8550 - 0x2b8580
void sub_002B8550_0x2b8550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8550_0x2b8550");
#endif

    switch (ctx->pc) {
        case 0x2b856cu: goto label_2b856c;
        default: break;
    }

    ctx->pc = 0x2b8550u;

    // 0x2b8550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b8554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b8558: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b8558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b855c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b855cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8560: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b8560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2b8564: 0xc0adf00  jal         func_2B7C00
    ctx->pc = 0x2B8564u;
    SET_GPR_U32(ctx, 31, 0x2B856Cu);
    ctx->pc = 0x2B7C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C00u, 0x2B8564u, 0x2B856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B856Cu;
label_2b856c:
    // 0x2b856c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b856cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8570: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b8570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b8574: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B857Cu;
    // 0x2b857c: 0x0  nop
    ctx->pc = 0x2b857cu;
    // NOP
    ctx->pc = 0x2b8580u;
}
