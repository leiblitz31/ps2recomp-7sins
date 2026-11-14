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

// Function: sub_0046FEB0
// Address: 0x46feb0 - 0x46ff20
void sub_0046FEB0_0x46feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046FEB0_0x46feb0");
#endif

    switch (ctx->pc) {
        case 0x46feecu: goto label_46feec;
        case 0x46ff0cu: goto label_46ff0c;
        default: break;
    }

    ctx->pc = 0x46feb0u;

    // 0x46feb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46feb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46feb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46feb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46feb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46feb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46febc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x46febcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x46fec0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46fec4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x46FEC4u;
    {
        const bool branch_taken_0x46fec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fec4) {
            ctx->pc = 0x46FF0Cu;
            goto label_46ff0c;
        }
    }
    ctx->pc = 0x46FECCu;
    // 0x46fecc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46feccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46fed0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46fed4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x46FED4u;
    {
        const bool branch_taken_0x46fed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fed4) {
            ctx->pc = 0x46FEECu;
            goto label_46feec;
        }
    }
    ctx->pc = 0x46FEDCu;
    // 0x46fedc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46fee0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46fee4: 0xc0e9e5c  jal         func_3A7970
    ctx->pc = 0x46FEE4u;
    SET_GPR_U32(ctx, 31, 0x46FEECu);
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x46FEE4u, 0x46FEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FEECu;
label_46feec:
    // 0x46feec: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x46feecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46fef0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x46fef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x46fef4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x46fef4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x46fef8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46FEF8u;
    {
        const bool branch_taken_0x46fef8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x46fef8) {
            ctx->pc = 0x46FF0Cu;
            goto label_46ff0c;
        }
    }
    ctx->pc = 0x46FF00u;
    // 0x46ff00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ff04: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x46FF04u;
    SET_GPR_U32(ctx, 31, 0x46FF0Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x46FF04u, 0x46FF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46FF0Cu;
label_46ff0c:
    // 0x46ff0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ff10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46ff10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46ff14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46ff14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46ff18: 0x3e00008  jr          $ra
    ctx->pc = 0x46FF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46FF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46FF20u;
}
