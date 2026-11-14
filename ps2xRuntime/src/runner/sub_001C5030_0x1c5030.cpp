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

// Function: sub_001C5030
// Address: 0x1c5030 - 0x1c5090
void sub_001C5030_0x1c5030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5030_0x1c5030");
#endif

    switch (ctx->pc) {
        case 0x1c505cu: goto label_1c505c;
        case 0x1c5074u: goto label_1c5074;
        default: break;
    }

    ctx->pc = 0x1c5030u;

    // 0x1c5030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c5030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c5034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c5034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c5038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c503c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1c503cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1c5040: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c5040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5044: 0x2c410081  sltiu       $at, $v0, 0x81
    ctx->pc = 0x1c5044u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x1c5048: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5048u;
    {
        const bool branch_taken_0x1c5048 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5048) {
            ctx->pc = 0x1C5068u;
            goto label_1c5068;
        }
    }
    ctx->pc = 0x1C5050u;
    // 0x1c5050: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c5050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5054: 0xc071424  jal         func_1C5090
    ctx->pc = 0x1C5054u;
    SET_GPR_U32(ctx, 31, 0x1C505Cu);
    ctx->pc = 0x1C5090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5090u, 0x1C5054u, 0x1C505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C505Cu;
label_1c505c:
    // 0x1c505c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c505cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5060: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5060u;
    {
        const bool branch_taken_0x1c5060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5060) {
            ctx->pc = 0x1C5078u;
            goto label_1c5078;
        }
    }
    ctx->pc = 0x1C5068u;
label_1c5068:
    // 0x1c5068: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1c5068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c506c: 0xc07145c  jal         func_1C5170
    ctx->pc = 0x1C506Cu;
    SET_GPR_U32(ctx, 31, 0x1C5074u);
    ctx->pc = 0x1C5170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5170u, 0x1C506Cu, 0x1C5074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5074u;
label_1c5074:
    // 0x1c5074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5078:
    // 0x1c5078: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c5078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c507c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c507cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5080: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5084: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c5084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c5088: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5090u;
}
