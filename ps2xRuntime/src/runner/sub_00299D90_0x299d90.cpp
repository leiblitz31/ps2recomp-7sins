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

// Function: sub_00299D90
// Address: 0x299d90 - 0x299e10
void sub_00299D90_0x299d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299D90_0x299d90");
#endif

    switch (ctx->pc) {
        case 0x299dc4u: goto label_299dc4;
        case 0x299dd4u: goto label_299dd4;
        case 0x299df4u: goto label_299df4;
        default: break;
    }

    ctx->pc = 0x299d90u;

    // 0x299d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299d98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x299d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x299d9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x299d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x299da0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299da4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x299DA4u;
    {
        const bool branch_taken_0x299da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299da4) {
            ctx->pc = 0x299DF4u;
            goto label_299df4;
        }
    }
    ctx->pc = 0x299DACu;
    // 0x299dac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x299dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299db0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299db4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x299db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x299db8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x299db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x299dbc: 0xc0a67b0  jal         func_299EC0
    ctx->pc = 0x299DBCu;
    SET_GPR_U32(ctx, 31, 0x299DC4u);
    ctx->pc = 0x299EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EC0u, 0x299DBCu, 0x299DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299DC4u;
label_299dc4:
    // 0x299dc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x299dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299dc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299dcc: 0xc0a6784  jal         func_299E10
    ctx->pc = 0x299DCCu;
    SET_GPR_U32(ctx, 31, 0x299DD4u);
    ctx->pc = 0x299E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299E10u, 0x299DCCu, 0x299DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299DD4u;
label_299dd4:
    // 0x299dd4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x299dd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299dd8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x299dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x299ddc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x299ddcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x299de0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299DE0u;
    {
        const bool branch_taken_0x299de0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x299de0) {
            ctx->pc = 0x299DF4u;
            goto label_299df4;
        }
    }
    ctx->pc = 0x299DE8u;
    // 0x299de8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x299de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299dec: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x299DECu;
    SET_GPR_U32(ctx, 31, 0x299DF4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x299DECu, 0x299DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299DF4u;
label_299df4:
    // 0x299df4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299dfc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x299dfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x299e00: 0x3e00008  jr          $ra
    ctx->pc = 0x299E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299E08u;
    // 0x299e08: 0x0  nop
    ctx->pc = 0x299e08u;
    // NOP
    // 0x299e0c: 0x0  nop
    ctx->pc = 0x299e0cu;
    // NOP
    ctx->pc = 0x299e10u;
}
