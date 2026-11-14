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

// Function: sub_00261C00
// Address: 0x261c00 - 0x261c80
void sub_00261C00_0x261c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261C00_0x261c00");
#endif

    switch (ctx->pc) {
        case 0x261c34u: goto label_261c34;
        case 0x261c44u: goto label_261c44;
        case 0x261c64u: goto label_261c64;
        default: break;
    }

    ctx->pc = 0x261c00u;

    // 0x261c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x261c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x261c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261c08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x261c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x261c0c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x261c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x261c10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261c14: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x261C14u;
    {
        const bool branch_taken_0x261c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261c14) {
            ctx->pc = 0x261C64u;
            goto label_261c64;
        }
    }
    ctx->pc = 0x261C1Cu;
    // 0x261c1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x261c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261c20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261c24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x261c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261c28: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x261c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x261c2c: 0xc09874c  jal         func_261D30
    ctx->pc = 0x261C2Cu;
    SET_GPR_U32(ctx, 31, 0x261C34u);
    ctx->pc = 0x261D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261D30u, 0x261C2Cu, 0x261C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C34u;
label_261c34:
    // 0x261c34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261c38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x261c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c3c: 0xc098720  jal         func_261C80
    ctx->pc = 0x261C3Cu;
    SET_GPR_U32(ctx, 31, 0x261C44u);
    ctx->pc = 0x261C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261C80u, 0x261C3Cu, 0x261C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C44u;
label_261c44:
    // 0x261c44: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x261c44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261c48: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x261c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x261c4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x261c4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x261c50: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x261C50u;
    {
        const bool branch_taken_0x261c50 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x261c50) {
            ctx->pc = 0x261C64u;
            goto label_261c64;
        }
    }
    ctx->pc = 0x261C58u;
    // 0x261c58: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261c5c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x261C5Cu;
    SET_GPR_U32(ctx, 31, 0x261C64u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x261C5Cu, 0x261C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C64u;
label_261c64:
    // 0x261c64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261c6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x261c6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x261c70: 0x3e00008  jr          $ra
    ctx->pc = 0x261C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261C78u;
    // 0x261c78: 0x0  nop
    ctx->pc = 0x261c78u;
    // NOP
    // 0x261c7c: 0x0  nop
    ctx->pc = 0x261c7cu;
    // NOP
    ctx->pc = 0x261c80u;
}
