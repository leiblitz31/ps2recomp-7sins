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

// Function: sub_0010A600
// Address: 0x10a600 - 0x10a660
void sub_0010A600_0x10a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A600_0x10a600");
#endif

    switch (ctx->pc) {
        case 0x10a62cu: goto label_10a62c;
        case 0x10a64cu: goto label_10a64c;
        default: break;
    }

    ctx->pc = 0x10a600u;

    // 0x10a600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a608: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10a608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10a60c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10a60cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x10a610: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10a610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a614: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10A614u;
    {
        const bool branch_taken_0x10a614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a614) {
            ctx->pc = 0x10A64Cu;
            goto label_10a64c;
        }
    }
    ctx->pc = 0x10A61Cu;
    // 0x10a61c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a620: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10a620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a624: 0xc042998  jal         func_10A660
    ctx->pc = 0x10A624u;
    SET_GPR_U32(ctx, 31, 0x10A62Cu);
    ctx->pc = 0x10A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A660u, 0x10A624u, 0x10A62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A62Cu;
label_10a62c:
    // 0x10a62c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10a62cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a630: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10a630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x10a634: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10a634u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10a638: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A638u;
    {
        const bool branch_taken_0x10a638 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10a638) {
            ctx->pc = 0x10A64Cu;
            goto label_10a64c;
        }
    }
    ctx->pc = 0x10A640u;
    // 0x10a640: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a644: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x10A644u;
    SET_GPR_U32(ctx, 31, 0x10A64Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x10A644u, 0x10A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A64Cu;
label_10a64c:
    // 0x10a64c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a654: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10a654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10a658: 0x3e00008  jr          $ra
    ctx->pc = 0x10A658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A660u;
}
