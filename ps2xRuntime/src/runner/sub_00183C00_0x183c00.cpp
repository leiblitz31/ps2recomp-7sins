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

// Function: sub_00183C00
// Address: 0x183c00 - 0x183c80
void sub_00183C00_0x183c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183C00_0x183c00");
#endif

    switch (ctx->pc) {
        case 0x183c34u: goto label_183c34;
        case 0x183c44u: goto label_183c44;
        case 0x183c64u: goto label_183c64;
        default: break;
    }

    ctx->pc = 0x183c00u;

    // 0x183c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183c08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x183c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x183c0c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x183c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x183c10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183c14: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x183C14u;
    {
        const bool branch_taken_0x183c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183c14) {
            ctx->pc = 0x183C64u;
            goto label_183c64;
        }
    }
    ctx->pc = 0x183C1Cu;
    // 0x183c1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x183c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183c20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183c24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x183c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183c28: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x183c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x183c2c: 0xc05de84  jal         func_177A10
    ctx->pc = 0x183C2Cu;
    SET_GPR_U32(ctx, 31, 0x183C34u);
    ctx->pc = 0x177A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177A10u, 0x183C2Cu, 0x183C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183C34u;
label_183c34:
    // 0x183c34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183c38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c3c: 0xc060f20  jal         func_183C80
    ctx->pc = 0x183C3Cu;
    SET_GPR_U32(ctx, 31, 0x183C44u);
    ctx->pc = 0x183C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183C80u, 0x183C3Cu, 0x183C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183C44u;
label_183c44:
    // 0x183c44: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x183c44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183c48: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x183c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x183c4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x183c4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x183c50: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x183C50u;
    {
        const bool branch_taken_0x183c50 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x183c50) {
            ctx->pc = 0x183C64u;
            goto label_183c64;
        }
    }
    ctx->pc = 0x183C58u;
    // 0x183c58: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183c5c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x183C5Cu;
    SET_GPR_U32(ctx, 31, 0x183C64u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x183C5Cu, 0x183C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183C64u;
label_183c64:
    // 0x183c64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183c6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x183c6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183c70: 0x3e00008  jr          $ra
    ctx->pc = 0x183C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183C78u;
    // 0x183c78: 0x0  nop
    ctx->pc = 0x183c78u;
    // NOP
    // 0x183c7c: 0x0  nop
    ctx->pc = 0x183c7cu;
    // NOP
    ctx->pc = 0x183c80u;
}
