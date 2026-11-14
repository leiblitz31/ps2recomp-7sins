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

// Function: sub_00156030
// Address: 0x156030 - 0x156090
void sub_00156030_0x156030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156030_0x156030");
#endif

    switch (ctx->pc) {
        case 0x15605cu: goto label_15605c;
        case 0x15607cu: goto label_15607c;
        default: break;
    }

    ctx->pc = 0x156030u;

    // 0x156030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156038: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x156038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15603c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x15603cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x156040: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x156040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156044: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x156044u;
    {
        const bool branch_taken_0x156044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156044) {
            ctx->pc = 0x15607Cu;
            goto label_15607c;
        }
    }
    ctx->pc = 0x15604Cu;
    // 0x15604c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15604cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156054: 0xc055824  jal         func_156090
    ctx->pc = 0x156054u;
    SET_GPR_U32(ctx, 31, 0x15605Cu);
    ctx->pc = 0x156090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156090u, 0x156054u, 0x15605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15605Cu;
label_15605c:
    // 0x15605c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x15605cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156060: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x156060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x156064: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x156064u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x156068: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x156068u;
    {
        const bool branch_taken_0x156068 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x156068) {
            ctx->pc = 0x15607Cu;
            goto label_15607c;
        }
    }
    ctx->pc = 0x156070u;
    // 0x156070: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x156070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156074: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x156074u;
    SET_GPR_U32(ctx, 31, 0x15607Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x156074u, 0x15607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15607Cu;
label_15607c:
    // 0x15607c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156084: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x156084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x156088: 0x3e00008  jr          $ra
    ctx->pc = 0x156088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156090u;
}
