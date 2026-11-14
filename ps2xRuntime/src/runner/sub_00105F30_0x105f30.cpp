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

// Function: sub_00105F30
// Address: 0x105f30 - 0x105f90
void sub_00105F30_0x105f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105F30_0x105f30");
#endif

    switch (ctx->pc) {
        case 0x105f5cu: goto label_105f5c;
        case 0x105f7cu: goto label_105f7c;
        default: break;
    }

    ctx->pc = 0x105f30u;

    // 0x105f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x105f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x105f38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x105f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x105f3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x105f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x105f40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x105f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105f44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x105F44u;
    {
        const bool branch_taken_0x105f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105f44) {
            ctx->pc = 0x105F7Cu;
            goto label_105f7c;
        }
    }
    ctx->pc = 0x105F4Cu;
    // 0x105f4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x105f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105f50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f54: 0xc0417e4  jal         func_105F90
    ctx->pc = 0x105F54u;
    SET_GPR_U32(ctx, 31, 0x105F5Cu);
    ctx->pc = 0x105F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F90u, 0x105F54u, 0x105F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F5Cu;
label_105f5c:
    // 0x105f5c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x105f5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105f60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x105f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x105f64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105f64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105f68: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105F68u;
    {
        const bool branch_taken_0x105f68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x105f68) {
            ctx->pc = 0x105F7Cu;
            goto label_105f7c;
        }
    }
    ctx->pc = 0x105F70u;
    // 0x105f70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x105f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105f74: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x105F74u;
    SET_GPR_U32(ctx, 31, 0x105F7Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x105F74u, 0x105F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F7Cu;
label_105f7c:
    // 0x105f7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x105f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105f84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x105f84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x105f88: 0x3e00008  jr          $ra
    ctx->pc = 0x105F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105F90u;
}
