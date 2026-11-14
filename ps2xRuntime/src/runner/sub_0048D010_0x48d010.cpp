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

// Function: sub_0048D010
// Address: 0x48d010 - 0x48d0a0
void sub_0048D010_0x48d010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D010_0x48d010");
#endif

    switch (ctx->pc) {
        case 0x48d03cu: goto label_48d03c;
        case 0x48d054u: goto label_48d054;
        case 0x48d060u: goto label_48d060;
        case 0x48d080u: goto label_48d080;
        default: break;
    }

    ctx->pc = 0x48d010u;

    // 0x48d010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48d010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48d014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48d014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48d018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48d018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48d01c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48d01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48d020: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x48d020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x48d024: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48d024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48d028: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48D028u;
    {
        const bool branch_taken_0x48d028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d028) {
            ctx->pc = 0x48D044u;
            goto label_48d044;
        }
    }
    ctx->pc = 0x48D030u;
    // 0x48d030: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48d030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d034: 0xc12323c  jal         func_48C8F0
    ctx->pc = 0x48D034u;
    SET_GPR_U32(ctx, 31, 0x48D03Cu);
    ctx->pc = 0x48C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C8F0u, 0x48D034u, 0x48D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D03Cu;
label_48d03c:
    // 0x48d03c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x48D03Cu;
    {
        const bool branch_taken_0x48d03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d03c) {
            ctx->pc = 0x48D088u;
            goto label_48d088;
        }
    }
    ctx->pc = 0x48D044u;
label_48d044:
    // 0x48d044: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d048: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48d048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48d04c: 0xc123200  jal         func_48C800
    ctx->pc = 0x48D04Cu;
    SET_GPR_U32(ctx, 31, 0x48D054u);
    ctx->pc = 0x48C800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C800u, 0x48D04Cu, 0x48D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D054u;
label_48d054:
    // 0x48d054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48d054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48d058: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x48D058u;
    {
        const bool branch_taken_0x48d058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d058) {
            ctx->pc = 0x48D070u;
            goto label_48d070;
        }
    }
    ctx->pc = 0x48D060u;
label_48d060:
    // 0x48d060: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x48d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48d064: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x48d064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x48d068: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x48d068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x48d06c: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x48d06cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_48d070:
    // 0x48d070: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48d070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48d074: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48d074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48d078: 0xc1231f8  jal         func_48C7E0
    ctx->pc = 0x48D078u;
    SET_GPR_U32(ctx, 31, 0x48D080u);
    ctx->pc = 0x48C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C7E0u, 0x48D078u, 0x48D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48D080u;
label_48d080:
    // 0x48d080: 0x1602fff7  bne         $s0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x48D080u;
    {
        const bool branch_taken_0x48d080 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x48d080) {
            ctx->pc = 0x48D060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48d060;
        }
    }
    ctx->pc = 0x48D088u;
label_48d088:
    // 0x48d088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48d088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48d08c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48d08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48d090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48d090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48d094: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48d094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48d098: 0x3e00008  jr          $ra
    ctx->pc = 0x48D098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48D098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48D0A0u;
}
