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

// Function: sub_00258580
// Address: 0x258580 - 0x2585e0
void sub_00258580_0x258580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258580_0x258580");
#endif

    switch (ctx->pc) {
        case 0x2585acu: goto label_2585ac;
        case 0x2585ccu: goto label_2585cc;
        default: break;
    }

    ctx->pc = 0x258580u;

    // 0x258580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258588: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25858c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25858cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x258590: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x258590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258594: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x258594u;
    {
        const bool branch_taken_0x258594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258594) {
            ctx->pc = 0x2585CCu;
            goto label_2585cc;
        }
    }
    ctx->pc = 0x25859Cu;
    // 0x25859c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25859cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2585a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2585a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2585a4: 0xc096178  jal         func_2585E0
    ctx->pc = 0x2585A4u;
    SET_GPR_U32(ctx, 31, 0x2585ACu);
    ctx->pc = 0x2585E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2585E0u, 0x2585A4u, 0x2585ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2585ACu;
label_2585ac:
    // 0x2585ac: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2585acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2585b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2585b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2585b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2585b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2585b8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2585B8u;
    {
        const bool branch_taken_0x2585b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2585b8) {
            ctx->pc = 0x2585CCu;
            goto label_2585cc;
        }
    }
    ctx->pc = 0x2585C0u;
    // 0x2585c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2585c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2585c4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2585C4u;
    SET_GPR_U32(ctx, 31, 0x2585CCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2585C4u, 0x2585CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2585CCu;
label_2585cc:
    // 0x2585cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2585ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2585d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2585d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2585d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2585d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2585d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2585D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2585D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2585E0u;
}
