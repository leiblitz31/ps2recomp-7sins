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

// Function: sub_00115380
// Address: 0x115380 - 0x1153e0
void sub_00115380_0x115380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115380_0x115380");
#endif

    switch (ctx->pc) {
        case 0x1153acu: goto label_1153ac;
        case 0x1153ccu: goto label_1153cc;
        default: break;
    }

    ctx->pc = 0x115380u;

    // 0x115380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115388: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x115388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11538c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11538cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x115390: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x115390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115394: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x115394u;
    {
        const bool branch_taken_0x115394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115394) {
            ctx->pc = 0x1153CCu;
            goto label_1153cc;
        }
    }
    ctx->pc = 0x11539Cu;
    // 0x11539c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11539cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1153a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1153a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1153a4: 0xc0454f8  jal         func_1153E0
    ctx->pc = 0x1153A4u;
    SET_GPR_U32(ctx, 31, 0x1153ACu);
    ctx->pc = 0x1153E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1153E0u, 0x1153A4u, 0x1153ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1153ACu;
label_1153ac:
    // 0x1153ac: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1153acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1153b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1153b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1153b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1153b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1153b8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1153B8u;
    {
        const bool branch_taken_0x1153b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1153b8) {
            ctx->pc = 0x1153CCu;
            goto label_1153cc;
        }
    }
    ctx->pc = 0x1153C0u;
    // 0x1153c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1153c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1153c4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1153C4u;
    SET_GPR_U32(ctx, 31, 0x1153CCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1153C4u, 0x1153CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1153CCu;
label_1153cc:
    // 0x1153cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1153ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1153d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1153d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1153d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1153d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1153d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1153D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1153D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1153E0u;
}
