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

// Function: sub_00194FF0
// Address: 0x194ff0 - 0x195050
void sub_00194FF0_0x194ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194FF0_0x194ff0");
#endif

    switch (ctx->pc) {
        case 0x19501cu: goto label_19501c;
        case 0x19503cu: goto label_19503c;
        default: break;
    }

    ctx->pc = 0x194ff0u;

    // 0x194ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194ff8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x194ffc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x194ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x195000: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195004: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x195004u;
    {
        const bool branch_taken_0x195004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195004) {
            ctx->pc = 0x19503Cu;
            goto label_19503c;
        }
    }
    ctx->pc = 0x19500Cu;
    // 0x19500c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19500cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195014: 0xc065414  jal         func_195050
    ctx->pc = 0x195014u;
    SET_GPR_U32(ctx, 31, 0x19501Cu);
    ctx->pc = 0x195050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195050u, 0x195014u, 0x19501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19501Cu;
label_19501c:
    // 0x19501c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x19501cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195020: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x195020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x195024: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x195024u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x195028: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195028u;
    {
        const bool branch_taken_0x195028 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x195028) {
            ctx->pc = 0x19503Cu;
            goto label_19503c;
        }
    }
    ctx->pc = 0x195030u;
    // 0x195030: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x195030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195034: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x195034u;
    SET_GPR_U32(ctx, 31, 0x19503Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x195034u, 0x19503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19503Cu;
label_19503c:
    // 0x19503c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195044: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x195044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x195048: 0x3e00008  jr          $ra
    ctx->pc = 0x195048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195050u;
}
