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

// Function: sub_0046BFF0
// Address: 0x46bff0 - 0x46c040
void sub_0046BFF0_0x46bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BFF0_0x46bff0");
#endif

    switch (ctx->pc) {
        case 0x46c028u: goto label_46c028;
        default: break;
    }

    ctx->pc = 0x46bff0u;

    // 0x46bff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46bff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46bff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46bff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46bff8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46bff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46bffc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46bffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46c000: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c004: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x46c004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x46c008: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46c008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c00c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x46c00cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x46c010: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46c010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c014: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x46c014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x46c018: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46c018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c01c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46c01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c020: 0xc11b010  jal         func_46C040
    ctx->pc = 0x46C020u;
    SET_GPR_U32(ctx, 31, 0x46C028u);
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x46C020u, 0x46C028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C028u;
label_46c028:
    // 0x46c028: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46c028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c02c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c030: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46c030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46c034: 0x3e00008  jr          $ra
    ctx->pc = 0x46C034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C03Cu;
    // 0x46c03c: 0x0  nop
    ctx->pc = 0x46c03cu;
    // NOP
    ctx->pc = 0x46c040u;
}
