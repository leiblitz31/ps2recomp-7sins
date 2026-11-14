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

// Function: sub_00258800
// Address: 0x258800 - 0x258860
void sub_00258800_0x258800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258800_0x258800");
#endif

    switch (ctx->pc) {
        case 0x25882cu: goto label_25882c;
        case 0x25884cu: goto label_25884c;
        default: break;
    }

    ctx->pc = 0x258800u;

    // 0x258800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25880c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25880cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x258810: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258814: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x258814u;
    {
        const bool branch_taken_0x258814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258814) {
            ctx->pc = 0x25884Cu;
            goto label_25884c;
        }
    }
    ctx->pc = 0x25881Cu;
    // 0x25881c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25881cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258820: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x258820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x258824: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x258824u;
    SET_GPR_U32(ctx, 31, 0x25882Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x258824u, 0x25882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25882Cu;
label_25882c:
    // 0x25882c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25882cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258830: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x258830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x258834: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x258834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x258838: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258838u;
    {
        const bool branch_taken_0x258838 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x258838) {
            ctx->pc = 0x25884Cu;
            goto label_25884c;
        }
    }
    ctx->pc = 0x258840u;
    // 0x258840: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258844: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x258844u;
    SET_GPR_U32(ctx, 31, 0x25884Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x258844u, 0x25884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25884Cu;
label_25884c:
    // 0x25884c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258854: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258858: 0x3e00008  jr          $ra
    ctx->pc = 0x258858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258860u;
}
