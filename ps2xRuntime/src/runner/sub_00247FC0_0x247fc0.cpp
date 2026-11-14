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

// Function: sub_00247FC0
// Address: 0x247fc0 - 0x248030
void sub_00247FC0_0x247fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247FC0_0x247fc0");
#endif

    switch (ctx->pc) {
        case 0x247fe0u: goto label_247fe0;
        case 0x247ff4u: goto label_247ff4;
        case 0x248008u: goto label_248008;
        default: break;
    }

    ctx->pc = 0x247fc0u;

    // 0x247fc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x247fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x247fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247fc8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x247fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x247fcc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x247fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x247fd0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x247fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x247fd4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x247fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247fd8: 0xc092028  jal         func_2480A0
    ctx->pc = 0x247FD8u;
    SET_GPR_U32(ctx, 31, 0x247FE0u);
    ctx->pc = 0x2480A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2480A0u, 0x247FD8u, 0x247FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FE0u;
label_247fe0:
    // 0x247fe0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247fe4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x247fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247fe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247fec: 0xc09200c  jal         func_248030
    ctx->pc = 0x247FECu;
    SET_GPR_U32(ctx, 31, 0x247FF4u);
    ctx->pc = 0x248030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248030u, 0x247FECu, 0x247FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247FF4u;
label_247ff4:
    // 0x247ff4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247ff8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x247ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247ffc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248000: 0xc093b70  jal         func_24EDC0
    ctx->pc = 0x248000u;
    SET_GPR_U32(ctx, 31, 0x248008u);
    ctx->pc = 0x24EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24EDC0u, 0x248000u, 0x248008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248008u;
label_248008:
    // 0x248008: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x248008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24800c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24800cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x248010: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x248010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248018: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x248018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24801c: 0x3e00008  jr          $ra
    ctx->pc = 0x24801Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24801Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248024u;
    // 0x248024: 0x0  nop
    ctx->pc = 0x248024u;
    // NOP
    // 0x248028: 0x0  nop
    ctx->pc = 0x248028u;
    // NOP
    // 0x24802c: 0x0  nop
    ctx->pc = 0x24802cu;
    // NOP
    ctx->pc = 0x248030u;
}
