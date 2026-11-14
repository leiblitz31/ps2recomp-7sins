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

// Function: sub_002476E0
// Address: 0x2476e0 - 0x247740
void sub_002476E0_0x2476e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002476E0_0x2476e0");
#endif

    switch (ctx->pc) {
        case 0x24770cu: goto label_24770c;
        case 0x24772cu: goto label_24772c;
        default: break;
    }

    ctx->pc = 0x2476e0u;

    // 0x2476e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2476e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2476e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2476e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2476e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2476e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2476ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2476ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2476f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2476f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2476f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2476F4u;
    {
        const bool branch_taken_0x2476f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2476f4) {
            ctx->pc = 0x24772Cu;
            goto label_24772c;
        }
    }
    ctx->pc = 0x2476FCu;
    // 0x2476fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2476fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247704: 0xc091dd0  jal         func_247740
    ctx->pc = 0x247704u;
    SET_GPR_U32(ctx, 31, 0x24770Cu);
    ctx->pc = 0x247740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247740u, 0x247704u, 0x24770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24770Cu;
label_24770c:
    // 0x24770c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x24770cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247710: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x247710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x247714: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x247714u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x247718: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x247718u;
    {
        const bool branch_taken_0x247718 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x247718) {
            ctx->pc = 0x24772Cu;
            goto label_24772c;
        }
    }
    ctx->pc = 0x247720u;
    // 0x247720: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247724: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x247724u;
    SET_GPR_U32(ctx, 31, 0x24772Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x247724u, 0x24772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24772Cu;
label_24772c:
    // 0x24772c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247734: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x247734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x247738: 0x3e00008  jr          $ra
    ctx->pc = 0x247738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247740u;
}
