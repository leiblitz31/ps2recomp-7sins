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

// Function: sub_00477090
// Address: 0x477090 - 0x4770e0
void sub_00477090_0x477090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477090_0x477090");
#endif

    switch (ctx->pc) {
        case 0x4770c8u: goto label_4770c8;
        default: break;
    }

    ctx->pc = 0x477090u;

    // 0x477090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x477090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x477094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x477094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x477098: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x477098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47709c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x47709cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4770a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4770a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4770a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4770a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4770a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4770a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4770ac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4770acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4770b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4770b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4770b4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x4770b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4770b8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4770b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4770bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4770bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4770c0: 0xc11dc38  jal         func_4770E0
    ctx->pc = 0x4770C0u;
    SET_GPR_U32(ctx, 31, 0x4770C8u);
    ctx->pc = 0x4770E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4770E0u, 0x4770C0u, 0x4770C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4770C8u;
label_4770c8:
    // 0x4770c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4770c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4770cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4770ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4770d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4770d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4770d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4770D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4770D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4770DCu;
    // 0x4770dc: 0x0  nop
    ctx->pc = 0x4770dcu;
    // NOP
    ctx->pc = 0x4770e0u;
}
