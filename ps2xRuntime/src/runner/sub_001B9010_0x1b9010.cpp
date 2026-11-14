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

// Function: sub_001B9010
// Address: 0x1b9010 - 0x1b90b0
void sub_001B9010_0x1b9010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9010_0x1b9010");
#endif

    switch (ctx->pc) {
        case 0x1b9074u: goto label_1b9074;
        case 0x1b9094u: goto label_1b9094;
        default: break;
    }

    ctx->pc = 0x1b9010u;

    // 0x1b9010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9018: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b9018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b901c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1b901cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b9020: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9024: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B9024u;
    {
        const bool branch_taken_0x1b9024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9024) {
            ctx->pc = 0x1B9094u;
            goto label_1b9094;
        }
    }
    ctx->pc = 0x1B902Cu;
    // 0x1b902c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9030: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b9030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9034: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B9034u;
    {
        const bool branch_taken_0x1b9034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9034) {
            ctx->pc = 0x1B9074u;
            goto label_1b9074;
        }
    }
    ctx->pc = 0x1B903Cu;
    // 0x1b903c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b903cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9040: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1b9040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9044: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9048: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b9048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b904c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9050: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b9050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9054: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b9054u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b9058: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1b9058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1b905c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b905cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b9060: 0x3012  mflo        $a2
    ctx->pc = 0x1b9060u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1b9064: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1b9064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1b9068: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1b9068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b906c: 0xc070df0  jal         func_1C37C0
    ctx->pc = 0x1B906Cu;
    SET_GPR_U32(ctx, 31, 0x1B9074u);
    ctx->pc = 0x1C37C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C37C0u, 0x1B906Cu, 0x1B9074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9074u;
label_1b9074:
    // 0x1b9074: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1b9074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9078: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b9078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b907c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b907cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b9080: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9080u;
    {
        const bool branch_taken_0x1b9080 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b9080) {
            ctx->pc = 0x1B9094u;
            goto label_1b9094;
        }
    }
    ctx->pc = 0x1B9088u;
    // 0x1b9088: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b9088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b908c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1B908Cu;
    SET_GPR_U32(ctx, 31, 0x1B9094u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1B908Cu, 0x1B9094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9094u;
label_1b9094:
    // 0x1b9094: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b9094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b909c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b909cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b90a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B90A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B90A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B90A8u;
    // 0x1b90a8: 0x0  nop
    ctx->pc = 0x1b90a8u;
    // NOP
    // 0x1b90ac: 0x0  nop
    ctx->pc = 0x1b90acu;
    // NOP
    ctx->pc = 0x1b90b0u;
}
