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

// Function: sub_0013D540
// Address: 0x13d540 - 0x13d5a0
void sub_0013D540_0x13d540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D540_0x13d540");
#endif

    switch (ctx->pc) {
        case 0x13d56cu: goto label_13d56c;
        case 0x13d584u: goto label_13d584;
        default: break;
    }

    ctx->pc = 0x13d540u;

    // 0x13d540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13d540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13d544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d548: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13d548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13d54c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13d550: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x13d550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x13d554: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x13d554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x13d558: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13d558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d55c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13d55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d560: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x13d560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d564: 0xc04f568  jal         func_13D5A0
    ctx->pc = 0x13D564u;
    SET_GPR_U32(ctx, 31, 0x13D56Cu);
    ctx->pc = 0x13D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D5A0u, 0x13D564u, 0x13D56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D56Cu;
label_13d56c:
    // 0x13d56c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d570: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13d570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d574: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13d574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d578: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x13d578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d57c: 0xc04f1a4  jal         func_13C690
    ctx->pc = 0x13D57Cu;
    SET_GPR_U32(ctx, 31, 0x13D584u);
    ctx->pc = 0x13C690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C690u, 0x13D57Cu, 0x13D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D584u;
label_13d584:
    // 0x13d584: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d588: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13d588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x13d58c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d594: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13d594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13d598: 0x3e00008  jr          $ra
    ctx->pc = 0x13D598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D5A0u;
}
