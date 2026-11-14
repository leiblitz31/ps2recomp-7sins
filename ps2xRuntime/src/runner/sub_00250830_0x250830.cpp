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

// Function: sub_00250830
// Address: 0x250830 - 0x250890
void sub_00250830_0x250830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250830_0x250830");
#endif

    switch (ctx->pc) {
        case 0x25085cu: goto label_25085c;
        case 0x25087cu: goto label_25087c;
        default: break;
    }

    ctx->pc = 0x250830u;

    // 0x250830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x250834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250838: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x250838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25083c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25083cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x250840: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250844: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x250844u;
    {
        const bool branch_taken_0x250844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250844) {
            ctx->pc = 0x25087Cu;
            goto label_25087c;
        }
    }
    ctx->pc = 0x25084Cu;
    // 0x25084c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25084cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x250850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250854: 0xc094224  jal         func_250890
    ctx->pc = 0x250854u;
    SET_GPR_U32(ctx, 31, 0x25085Cu);
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x250854u, 0x25085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25085Cu;
label_25085c:
    // 0x25085c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25085cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250860: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x250860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x250864: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x250864u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x250868: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x250868u;
    {
        const bool branch_taken_0x250868 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x250868) {
            ctx->pc = 0x25087Cu;
            goto label_25087c;
        }
    }
    ctx->pc = 0x250870u;
    // 0x250870: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x250870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250874: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x250874u;
    SET_GPR_U32(ctx, 31, 0x25087Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x250874u, 0x25087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25087Cu;
label_25087c:
    // 0x25087c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25087cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250884: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x250884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x250888: 0x3e00008  jr          $ra
    ctx->pc = 0x250888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250890u;
}
