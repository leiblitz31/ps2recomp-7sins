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

// Function: sub_002CAFE0
// Address: 0x2cafe0 - 0x2cb040
void sub_002CAFE0_0x2cafe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAFE0_0x2cafe0");
#endif

    switch (ctx->pc) {
        case 0x2cb00cu: goto label_2cb00c;
        case 0x2cb02cu: goto label_2cb02c;
        default: break;
    }

    ctx->pc = 0x2cafe0u;

    // 0x2cafe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cafe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cafe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cafe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cafe8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cafe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cafec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2cafecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2caff0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2caff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2caff4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CAFF4u;
    {
        const bool branch_taken_0x2caff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caff4) {
            ctx->pc = 0x2CB02Cu;
            goto label_2cb02c;
        }
    }
    ctx->pc = 0x2CAFFCu;
    // 0x2caffc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2caffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb000: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb004: 0xc0b2c10  jal         func_2CB040
    ctx->pc = 0x2CB004u;
    SET_GPR_U32(ctx, 31, 0x2CB00Cu);
    ctx->pc = 0x2CB040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB040u, 0x2CB004u, 0x2CB00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB00Cu;
label_2cb00c:
    // 0x2cb00c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2cb00cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb010: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2cb010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cb014: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cb014u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cb018: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB018u;
    {
        const bool branch_taken_0x2cb018 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cb018) {
            ctx->pc = 0x2CB02Cu;
            goto label_2cb02c;
        }
    }
    ctx->pc = 0x2CB020u;
    // 0x2cb020: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cb020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb024: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2CB024u;
    SET_GPR_U32(ctx, 31, 0x2CB02Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2CB024u, 0x2CB02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB02Cu;
label_2cb02c:
    // 0x2cb02c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb034: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cb034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cb038: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB040u;
}
