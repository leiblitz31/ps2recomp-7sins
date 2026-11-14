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

// Function: sub_001892F0
// Address: 0x1892f0 - 0x189350
void sub_001892F0_0x1892f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001892F0_0x1892f0");
#endif

    switch (ctx->pc) {
        case 0x18931cu: goto label_18931c;
        case 0x18933cu: goto label_18933c;
        default: break;
    }

    ctx->pc = 0x1892f0u;

    // 0x1892f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1892f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1892f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1892f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1892f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1892f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1892fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1892fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x189300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189304: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x189304u;
    {
        const bool branch_taken_0x189304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189304) {
            ctx->pc = 0x18933Cu;
            goto label_18933c;
        }
    }
    ctx->pc = 0x18930Cu;
    // 0x18930c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18930cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189310: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x189310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x189314: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x189314u;
    SET_GPR_U32(ctx, 31, 0x18931Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x189314u, 0x18931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18931Cu;
label_18931c:
    // 0x18931c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x18931cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189320: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x189320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x189324: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x189324u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x189328: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189328u;
    {
        const bool branch_taken_0x189328 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x189328) {
            ctx->pc = 0x18933Cu;
            goto label_18933c;
        }
    }
    ctx->pc = 0x189330u;
    // 0x189330: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x189330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189334: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x189334u;
    SET_GPR_U32(ctx, 31, 0x18933Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x189334u, 0x18933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18933Cu;
label_18933c:
    // 0x18933c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18933cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189344: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x189344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x189348: 0x3e00008  jr          $ra
    ctx->pc = 0x189348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189350u;
}
