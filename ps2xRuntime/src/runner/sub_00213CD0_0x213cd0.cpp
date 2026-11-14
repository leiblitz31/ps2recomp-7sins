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

// Function: sub_00213CD0
// Address: 0x213cd0 - 0x213d50
void sub_00213CD0_0x213cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213CD0_0x213cd0");
#endif

    switch (ctx->pc) {
        case 0x213d04u: goto label_213d04;
        case 0x213d14u: goto label_213d14;
        case 0x213d34u: goto label_213d34;
        default: break;
    }

    ctx->pc = 0x213cd0u;

    // 0x213cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213cd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x213cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x213cdc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x213cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x213ce0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213ce4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x213CE4u;
    {
        const bool branch_taken_0x213ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213ce4) {
            ctx->pc = 0x213D34u;
            goto label_213d34;
        }
    }
    ctx->pc = 0x213CECu;
    // 0x213cec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x213cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213cf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213cf4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x213cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213cf8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x213cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x213cfc: 0xc084f80  jal         func_213E00
    ctx->pc = 0x213CFCu;
    SET_GPR_U32(ctx, 31, 0x213D04u);
    ctx->pc = 0x213E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213E00u, 0x213CFCu, 0x213D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D04u;
label_213d04:
    // 0x213d04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x213d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213d08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d0c: 0xc084f54  jal         func_213D50
    ctx->pc = 0x213D0Cu;
    SET_GPR_U32(ctx, 31, 0x213D14u);
    ctx->pc = 0x213D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213D50u, 0x213D0Cu, 0x213D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D14u;
label_213d14:
    // 0x213d14: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x213d14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213d18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x213d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x213d1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x213d1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x213d20: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213D20u;
    {
        const bool branch_taken_0x213d20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x213d20) {
            ctx->pc = 0x213D34u;
            goto label_213d34;
        }
    }
    ctx->pc = 0x213D28u;
    // 0x213d28: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x213d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213d2c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x213D2Cu;
    SET_GPR_U32(ctx, 31, 0x213D34u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x213D2Cu, 0x213D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D34u;
label_213d34:
    // 0x213d34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213d3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x213d3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x213d40: 0x3e00008  jr          $ra
    ctx->pc = 0x213D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213D48u;
    // 0x213d48: 0x0  nop
    ctx->pc = 0x213d48u;
    // NOP
    // 0x213d4c: 0x0  nop
    ctx->pc = 0x213d4cu;
    // NOP
    ctx->pc = 0x213d50u;
}
