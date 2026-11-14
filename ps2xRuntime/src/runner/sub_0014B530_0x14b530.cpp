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

// Function: sub_0014B530
// Address: 0x14b530 - 0x14b570
void sub_0014B530_0x14b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B530_0x14b530");
#endif

    switch (ctx->pc) {
        case 0x14b54cu: goto label_14b54c;
        default: break;
    }

    ctx->pc = 0x14b530u;

    // 0x14b530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b538: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14b538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14b53c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b540: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14b540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b544: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x14B544u;
    SET_GPR_U32(ctx, 31, 0x14B54Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x14B544u, 0x14B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B54Cu;
label_14b54c:
    // 0x14b54c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b550: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14b550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14b554: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b55c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14b55cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14b560: 0x3e00008  jr          $ra
    ctx->pc = 0x14B560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B568u;
    // 0x14b568: 0x0  nop
    ctx->pc = 0x14b568u;
    // NOP
    // 0x14b56c: 0x0  nop
    ctx->pc = 0x14b56cu;
    // NOP
    ctx->pc = 0x14b570u;
}
