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

// Function: sub_0029B540
// Address: 0x29b540 - 0x29b580
void sub_0029B540_0x29b540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B540_0x29b540");
#endif

    switch (ctx->pc) {
        case 0x29b56cu: goto label_29b56c;
        default: break;
    }

    ctx->pc = 0x29b540u;

    // 0x29b540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29b540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29b544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b548: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29b548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29b54c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x29b54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x29b550: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x29b550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x29b554: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29b554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b558: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x29b558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b55c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x29b55cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b560: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x29b560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x29b564: 0xc0a6d60  jal         func_29B580
    ctx->pc = 0x29B564u;
    SET_GPR_U32(ctx, 31, 0x29B56Cu);
    ctx->pc = 0x29B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B580u, 0x29B564u, 0x29B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B56Cu;
label_29b56c:
    // 0x29b56c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b570: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29b570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29b574: 0x3e00008  jr          $ra
    ctx->pc = 0x29B574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B57Cu;
    // 0x29b57c: 0x0  nop
    ctx->pc = 0x29b57cu;
    // NOP
    ctx->pc = 0x29b580u;
}
