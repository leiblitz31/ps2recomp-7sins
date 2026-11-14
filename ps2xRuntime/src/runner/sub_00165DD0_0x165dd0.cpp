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

// Function: sub_00165DD0
// Address: 0x165dd0 - 0x165e30
void sub_00165DD0_0x165dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165DD0_0x165dd0");
#endif

    switch (ctx->pc) {
        case 0x165dfcu: goto label_165dfc;
        case 0x165e1cu: goto label_165e1c;
        default: break;
    }

    ctx->pc = 0x165dd0u;

    // 0x165dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165dd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165dd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x165dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x165ddc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x165ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x165de0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165de4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x165DE4u;
    {
        const bool branch_taken_0x165de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165de4) {
            ctx->pc = 0x165E1Cu;
            goto label_165e1c;
        }
    }
    ctx->pc = 0x165DECu;
    // 0x165dec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x165decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165df0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165df4: 0xc05978c  jal         func_165E30
    ctx->pc = 0x165DF4u;
    SET_GPR_U32(ctx, 31, 0x165DFCu);
    ctx->pc = 0x165E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165E30u, 0x165DF4u, 0x165DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165DFCu;
label_165dfc:
    // 0x165dfc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x165dfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165e00: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x165e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x165e04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x165e04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x165e08: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165E08u;
    {
        const bool branch_taken_0x165e08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x165e08) {
            ctx->pc = 0x165E1Cu;
            goto label_165e1c;
        }
    }
    ctx->pc = 0x165E10u;
    // 0x165e10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x165e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165e14: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x165E14u;
    SET_GPR_U32(ctx, 31, 0x165E1Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x165E14u, 0x165E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E1Cu;
label_165e1c:
    // 0x165e1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165e24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x165e24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x165e28: 0x3e00008  jr          $ra
    ctx->pc = 0x165E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165E30u;
}
