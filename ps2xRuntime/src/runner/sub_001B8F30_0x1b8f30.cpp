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

// Function: sub_001B8F30
// Address: 0x1b8f30 - 0x1b8f90
void sub_001B8F30_0x1b8f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8F30_0x1b8f30");
#endif

    switch (ctx->pc) {
        case 0x1b8f5cu: goto label_1b8f5c;
        case 0x1b8f7cu: goto label_1b8f7c;
        default: break;
    }

    ctx->pc = 0x1b8f30u;

    // 0x1b8f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b8f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8f38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b8f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b8f3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1b8f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1b8f40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b8f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8f44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B8F44u;
    {
        const bool branch_taken_0x1b8f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8f44) {
            ctx->pc = 0x1B8F7Cu;
            goto label_1b8f7c;
        }
    }
    ctx->pc = 0x1B8F4Cu;
    // 0x1b8f4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b8f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8f50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8f54: 0xc06e3e4  jal         func_1B8F90
    ctx->pc = 0x1B8F54u;
    SET_GPR_U32(ctx, 31, 0x1B8F5Cu);
    ctx->pc = 0x1B8F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F90u, 0x1B8F54u, 0x1B8F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8F5Cu;
label_1b8f5c:
    // 0x1b8f5c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1b8f5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8f60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b8f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b8f64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b8f64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b8f68: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8F68u;
    {
        const bool branch_taken_0x1b8f68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b8f68) {
            ctx->pc = 0x1B8F7Cu;
            goto label_1b8f7c;
        }
    }
    ctx->pc = 0x1B8F70u;
    // 0x1b8f70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b8f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8f74: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1B8F74u;
    SET_GPR_U32(ctx, 31, 0x1B8F7Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1B8F74u, 0x1B8F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8F7Cu;
label_1b8f7c:
    // 0x1b8f7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8f84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b8f84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b8f88: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8F90u;
}
