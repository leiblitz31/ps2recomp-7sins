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

// Function: sub_002DF010
// Address: 0x2df010 - 0x2df090
void sub_002DF010_0x2df010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF010_0x2df010");
#endif

    switch (ctx->pc) {
        case 0x2df044u: goto label_2df044;
        case 0x2df054u: goto label_2df054;
        case 0x2df074u: goto label_2df074;
        default: break;
    }

    ctx->pc = 0x2df010u;

    // 0x2df010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df018: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2df018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2df01c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2df01cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2df020: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df024: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DF024u;
    {
        const bool branch_taken_0x2df024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df024) {
            ctx->pc = 0x2DF074u;
            goto label_2df074;
        }
    }
    ctx->pc = 0x2DF02Cu;
    // 0x2df02c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2df02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df030: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df034: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2df034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2df038: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2df038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2df03c: 0xc0b7c50  jal         func_2DF140
    ctx->pc = 0x2DF03Cu;
    SET_GPR_U32(ctx, 31, 0x2DF044u);
    ctx->pc = 0x2DF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF140u, 0x2DF03Cu, 0x2DF044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF044u;
label_2df044:
    // 0x2df044: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2df048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df04c: 0xc0b7c24  jal         func_2DF090
    ctx->pc = 0x2DF04Cu;
    SET_GPR_U32(ctx, 31, 0x2DF054u);
    ctx->pc = 0x2DF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF090u, 0x2DF04Cu, 0x2DF054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF054u;
label_2df054:
    // 0x2df054: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2df054u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df058: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2df058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2df05c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2df05cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2df060: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF060u;
    {
        const bool branch_taken_0x2df060 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2df060) {
            ctx->pc = 0x2DF074u;
            goto label_2df074;
        }
    }
    ctx->pc = 0x2DF068u;
    // 0x2df068: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2df068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df06c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DF06Cu;
    SET_GPR_U32(ctx, 31, 0x2DF074u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DF06Cu, 0x2DF074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF074u;
label_2df074:
    // 0x2df074: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df07c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df07cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df080: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF088u;
    // 0x2df088: 0x0  nop
    ctx->pc = 0x2df088u;
    // NOP
    // 0x2df08c: 0x0  nop
    ctx->pc = 0x2df08cu;
    // NOP
    ctx->pc = 0x2df090u;
}
