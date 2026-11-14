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

// Function: sub_001153E0
// Address: 0x1153e0 - 0x115440
void sub_001153E0_0x1153e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001153E0_0x1153e0");
#endif

    switch (ctx->pc) {
        case 0x11540cu: goto label_11540c;
        case 0x11542cu: goto label_11542c;
        default: break;
    }

    ctx->pc = 0x1153e0u;

    // 0x1153e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1153e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1153e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1153e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1153e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1153e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1153ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1153ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1153f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1153f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1153f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1153F4u;
    {
        const bool branch_taken_0x1153f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1153f4) {
            ctx->pc = 0x11542Cu;
            goto label_11542c;
        }
    }
    ctx->pc = 0x1153FCu;
    // 0x1153fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1153fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115400: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x115400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115404: 0xc045510  jal         func_115440
    ctx->pc = 0x115404u;
    SET_GPR_U32(ctx, 31, 0x11540Cu);
    ctx->pc = 0x115440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115440u, 0x115404u, 0x11540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11540Cu;
label_11540c:
    // 0x11540c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x11540cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115410: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x115410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x115414: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x115414u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x115418: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115418u;
    {
        const bool branch_taken_0x115418 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x115418) {
            ctx->pc = 0x11542Cu;
            goto label_11542c;
        }
    }
    ctx->pc = 0x115420u;
    // 0x115420: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x115420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115424: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x115424u;
    SET_GPR_U32(ctx, 31, 0x11542Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x115424u, 0x11542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11542Cu;
label_11542c:
    // 0x11542c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115434: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x115434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115438: 0x3e00008  jr          $ra
    ctx->pc = 0x115438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115440u;
}
