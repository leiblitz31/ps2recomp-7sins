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

// Function: sub_00214730
// Address: 0x214730 - 0x214780
void sub_00214730_0x214730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214730_0x214730");
#endif

    switch (ctx->pc) {
        case 0x214768u: goto label_214768;
        default: break;
    }

    ctx->pc = 0x214730u;

    // 0x214730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x214734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214738: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x214738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21473c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x21473cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x214740: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214744: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x214744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x214748: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21474c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x21474cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x214750: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214754: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x214754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x214758: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x214758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21475c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21475cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214760: 0xc0851e0  jal         func_214780
    ctx->pc = 0x214760u;
    SET_GPR_U32(ctx, 31, 0x214768u);
    ctx->pc = 0x214780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214780u, 0x214760u, 0x214768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214768u;
label_214768:
    // 0x214768: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21476c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21476cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214770: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x214770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x214774: 0x3e00008  jr          $ra
    ctx->pc = 0x214774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21477Cu;
    // 0x21477c: 0x0  nop
    ctx->pc = 0x21477cu;
    // NOP
    ctx->pc = 0x214780u;
}
