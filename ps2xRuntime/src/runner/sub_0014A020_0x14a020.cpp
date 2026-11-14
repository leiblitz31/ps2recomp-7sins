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

// Function: sub_0014A020
// Address: 0x14a020 - 0x14a090
void sub_0014A020_0x14a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A020_0x14a020");
#endif

    switch (ctx->pc) {
        case 0x14a040u: goto label_14a040;
        case 0x14a054u: goto label_14a054;
        case 0x14a068u: goto label_14a068;
        default: break;
    }

    ctx->pc = 0x14a020u;

    // 0x14a020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14a020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14a024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a028: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14a028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14a02c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x14a02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x14a030: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x14a030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x14a034: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x14a034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a038: 0xc052840  jal         func_14A100
    ctx->pc = 0x14A038u;
    SET_GPR_U32(ctx, 31, 0x14A040u);
    ctx->pc = 0x14A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A100u, 0x14A038u, 0x14A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A040u;
label_14a040:
    // 0x14a040: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14a040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a044: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14a044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14a048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a04c: 0xc052824  jal         func_14A090
    ctx->pc = 0x14A04Cu;
    SET_GPR_U32(ctx, 31, 0x14A054u);
    ctx->pc = 0x14A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A090u, 0x14A04Cu, 0x14A054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A054u;
label_14a054:
    // 0x14a054: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14a054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14a058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a05c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14a05cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a060: 0xc05469c  jal         func_151A70
    ctx->pc = 0x14A060u;
    SET_GPR_U32(ctx, 31, 0x14A068u);
    ctx->pc = 0x151A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151A70u, 0x14A060u, 0x14A068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A068u;
label_14a068:
    // 0x14a068: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x14a068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a06c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14a06cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14a070: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14a070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a078: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14a078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14a07c: 0x3e00008  jr          $ra
    ctx->pc = 0x14A07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A084u;
    // 0x14a084: 0x0  nop
    ctx->pc = 0x14a084u;
    // NOP
    // 0x14a088: 0x0  nop
    ctx->pc = 0x14a088u;
    // NOP
    // 0x14a08c: 0x0  nop
    ctx->pc = 0x14a08cu;
    // NOP
    ctx->pc = 0x14a090u;
}
