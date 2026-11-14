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

// Function: sub_00104370
// Address: 0x104370 - 0x1043e0
void sub_00104370_0x104370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104370_0x104370");
#endif

    switch (ctx->pc) {
        case 0x1043acu: goto label_1043ac;
        case 0x1043ccu: goto label_1043cc;
        default: break;
    }

    ctx->pc = 0x104370u;

    // 0x104370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x104370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x104374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x104378: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x104378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10437c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10437cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x104380: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x104380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104384: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x104384u;
    {
        const bool branch_taken_0x104384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104384) {
            ctx->pc = 0x1043CCu;
            goto label_1043cc;
        }
    }
    ctx->pc = 0x10438Cu;
    // 0x10438c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x10438cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x104390: 0x24635770  addiu       $v1, $v1, 0x5770
    ctx->pc = 0x104390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22384));
    // 0x104394: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x104394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104398: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x104398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10439c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10439cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1043a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1043a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1043a4: 0xc0854b8  jal         func_2152E0
    ctx->pc = 0x1043A4u;
    SET_GPR_U32(ctx, 31, 0x1043ACu);
    ctx->pc = 0x2152E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2152E0u, 0x1043A4u, 0x1043ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043ACu;
label_1043ac:
    // 0x1043ac: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1043acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1043b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1043b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1043b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1043b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1043b8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1043B8u;
    {
        const bool branch_taken_0x1043b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1043b8) {
            ctx->pc = 0x1043CCu;
            goto label_1043cc;
        }
    }
    ctx->pc = 0x1043C0u;
    // 0x1043c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1043c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1043c4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1043C4u;
    SET_GPR_U32(ctx, 31, 0x1043CCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1043C4u, 0x1043CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043CCu;
label_1043cc:
    // 0x1043cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1043ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1043d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1043d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1043d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1043d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1043d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1043D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1043D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1043E0u;
}
