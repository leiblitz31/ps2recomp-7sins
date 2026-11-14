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

// Function: sub_00286BF0
// Address: 0x286bf0 - 0x286c30
void sub_00286BF0_0x286bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286BF0_0x286bf0");
#endif

    switch (ctx->pc) {
        case 0x286c0cu: goto label_286c0c;
        case 0x286c20u: goto label_286c20;
        default: break;
    }

    ctx->pc = 0x286bf0u;

    // 0x286bf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x286bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x286bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x286bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x286bf8: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x286bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x286bfc: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x286bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x286c00: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x286c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x286c04: 0xc0a3768  jal         func_28DDA0
    ctx->pc = 0x286C04u;
    SET_GPR_U32(ctx, 31, 0x286C0Cu);
    ctx->pc = 0x28DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DDA0u, 0x286C04u, 0x286C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C0Cu;
label_286c0c:
    // 0x286c0c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x286c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286c10: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x286c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286c14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x286c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c18: 0xc0a1b0c  jal         func_286C30
    ctx->pc = 0x286C18u;
    SET_GPR_U32(ctx, 31, 0x286C20u);
    ctx->pc = 0x286C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286C30u, 0x286C18u, 0x286C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C20u;
label_286c20:
    // 0x286c20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x286c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286c24: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x286c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x286c28: 0x3e00008  jr          $ra
    ctx->pc = 0x286C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286C30u;
}
