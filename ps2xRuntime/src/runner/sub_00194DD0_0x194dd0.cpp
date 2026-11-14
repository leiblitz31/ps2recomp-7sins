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

// Function: sub_00194DD0
// Address: 0x194dd0 - 0x194e50
void sub_00194DD0_0x194dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194DD0_0x194dd0");
#endif

    switch (ctx->pc) {
        case 0x194e04u: goto label_194e04;
        case 0x194e14u: goto label_194e14;
        case 0x194e34u: goto label_194e34;
        default: break;
    }

    ctx->pc = 0x194dd0u;

    // 0x194dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194dd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194dd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x194ddc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x194ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x194de0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194de4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x194DE4u;
    {
        const bool branch_taken_0x194de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194de4) {
            ctx->pc = 0x194E34u;
            goto label_194e34;
        }
    }
    ctx->pc = 0x194DECu;
    // 0x194dec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x194decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194df0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194df4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x194df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194df8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x194df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x194dfc: 0xc0653bc  jal         func_194EF0
    ctx->pc = 0x194DFCu;
    SET_GPR_U32(ctx, 31, 0x194E04u);
    ctx->pc = 0x194EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194EF0u, 0x194DFCu, 0x194E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194E04u;
label_194e04:
    // 0x194e04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e0c: 0xc065394  jal         func_194E50
    ctx->pc = 0x194E0Cu;
    SET_GPR_U32(ctx, 31, 0x194E14u);
    ctx->pc = 0x194E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194E50u, 0x194E0Cu, 0x194E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194E14u;
label_194e14:
    // 0x194e14: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x194e14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194e18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x194e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194e1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x194e1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x194e20: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194E20u;
    {
        const bool branch_taken_0x194e20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x194e20) {
            ctx->pc = 0x194E34u;
            goto label_194e34;
        }
    }
    ctx->pc = 0x194E28u;
    // 0x194e28: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e2c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x194E2Cu;
    SET_GPR_U32(ctx, 31, 0x194E34u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x194E2Cu, 0x194E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194E34u;
label_194e34:
    // 0x194e34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194e3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x194e3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x194e40: 0x3e00008  jr          $ra
    ctx->pc = 0x194E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194E48u;
    // 0x194e48: 0x0  nop
    ctx->pc = 0x194e48u;
    // NOP
    // 0x194e4c: 0x0  nop
    ctx->pc = 0x194e4cu;
    // NOP
    ctx->pc = 0x194e50u;
}
