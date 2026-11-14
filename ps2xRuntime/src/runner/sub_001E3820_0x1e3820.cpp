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

// Function: sub_001E3820
// Address: 0x1e3820 - 0x1e3890
void sub_001E3820_0x1e3820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3820_0x1e3820");
#endif

    switch (ctx->pc) {
        case 0x1e383cu: goto label_1e383c;
        case 0x1e384cu: goto label_1e384c;
        case 0x1e385cu: goto label_1e385c;
        case 0x1e3874u: goto label_1e3874;
        default: break;
    }

    ctx->pc = 0x1e3820u;

    // 0x1e3820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e3820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e3824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3828: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e3828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e382c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e382cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e3830: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e3830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3834: 0xc078e2c  jal         func_1E38B0
    ctx->pc = 0x1E3834u;
    SET_GPR_U32(ctx, 31, 0x1E383Cu);
    ctx->pc = 0x1E38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E38B0u, 0x1E3834u, 0x1E383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E383Cu;
label_1e383c:
    // 0x1e383c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3840: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e3840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e3844: 0xc078e2c  jal         func_1E38B0
    ctx->pc = 0x1E3844u;
    SET_GPR_U32(ctx, 31, 0x1E384Cu);
    ctx->pc = 0x1E38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E38B0u, 0x1E3844u, 0x1E384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E384Cu;
label_1e384c:
    // 0x1e384c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1e384cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1e3850: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e3850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3854: 0xc078e24  jal         func_1E3890
    ctx->pc = 0x1E3854u;
    SET_GPR_U32(ctx, 31, 0x1E385Cu);
    ctx->pc = 0x1E3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3890u, 0x1E3854u, 0x1E385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E385Cu;
label_1e385c:
    // 0x1e385c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1e385cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3860: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1e3860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e3864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e3864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e3868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e386c: 0xc044820  jal         func_112080
    ctx->pc = 0x1E386Cu;
    SET_GPR_U32(ctx, 31, 0x1E3874u);
    ctx->pc = 0x112080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112080u, 0x1E386Cu, 0x1E3874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3874u;
label_1e3874:
    // 0x1e3874: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e3874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e387c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e387cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e3880: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3888u;
    // 0x1e3888: 0x0  nop
    ctx->pc = 0x1e3888u;
    // NOP
    // 0x1e388c: 0x0  nop
    ctx->pc = 0x1e388cu;
    // NOP
    ctx->pc = 0x1e3890u;
}
