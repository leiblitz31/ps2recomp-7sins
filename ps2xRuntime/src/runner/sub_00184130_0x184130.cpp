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

// Function: sub_00184130
// Address: 0x184130 - 0x1841a0
void sub_00184130_0x184130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184130_0x184130");
#endif

    switch (ctx->pc) {
        case 0x184150u: goto label_184150;
        case 0x184164u: goto label_184164;
        case 0x184178u: goto label_184178;
        default: break;
    }

    ctx->pc = 0x184130u;

    // 0x184130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x184130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x184134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184138: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x184138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18413c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x18413cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x184140: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x184140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x184144: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x184144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184148: 0xc061084  jal         func_184210
    ctx->pc = 0x184148u;
    SET_GPR_U32(ctx, 31, 0x184150u);
    ctx->pc = 0x184210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184210u, 0x184148u, 0x184150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184150u;
label_184150:
    // 0x184150: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x184150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184154: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x184154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x184158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18415c: 0xc061068  jal         func_1841A0
    ctx->pc = 0x18415Cu;
    SET_GPR_U32(ctx, 31, 0x184164u);
    ctx->pc = 0x1841A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1841A0u, 0x18415Cu, 0x184164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184164u;
label_184164:
    // 0x184164: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x184164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184168: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x184168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18416c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18416cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184170: 0xc061c88  jal         func_187220
    ctx->pc = 0x184170u;
    SET_GPR_U32(ctx, 31, 0x184178u);
    ctx->pc = 0x187220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187220u, 0x184170u, 0x184178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184178u;
label_184178:
    // 0x184178: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x184178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18417c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18417cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x184180: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x184180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184188: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x184188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18418c: 0x3e00008  jr          $ra
    ctx->pc = 0x18418Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18418Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184194u;
    // 0x184194: 0x0  nop
    ctx->pc = 0x184194u;
    // NOP
    // 0x184198: 0x0  nop
    ctx->pc = 0x184198u;
    // NOP
    // 0x18419c: 0x0  nop
    ctx->pc = 0x18419cu;
    // NOP
    ctx->pc = 0x1841a0u;
}
