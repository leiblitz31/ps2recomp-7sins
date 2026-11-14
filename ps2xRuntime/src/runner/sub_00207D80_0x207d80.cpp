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

// Function: sub_00207D80
// Address: 0x207d80 - 0x207e00
void sub_00207D80_0x207d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207D80_0x207d80");
#endif

    switch (ctx->pc) {
        case 0x207db4u: goto label_207db4;
        case 0x207dc4u: goto label_207dc4;
        case 0x207de4u: goto label_207de4;
        default: break;
    }

    ctx->pc = 0x207d80u;

    // 0x207d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x207d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207d88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x207d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x207d8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x207d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x207d90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207d94: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x207D94u;
    {
        const bool branch_taken_0x207d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207d94) {
            ctx->pc = 0x207DE4u;
            goto label_207de4;
        }
    }
    ctx->pc = 0x207D9Cu;
    // 0x207d9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x207d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207da0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207da4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x207da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207da8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x207da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x207dac: 0xc081fac  jal         func_207EB0
    ctx->pc = 0x207DACu;
    SET_GPR_U32(ctx, 31, 0x207DB4u);
    ctx->pc = 0x207EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207EB0u, 0x207DACu, 0x207DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207DB4u;
label_207db4:
    // 0x207db4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207dbc: 0xc081f80  jal         func_207E00
    ctx->pc = 0x207DBCu;
    SET_GPR_U32(ctx, 31, 0x207DC4u);
    ctx->pc = 0x207E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207E00u, 0x207DBCu, 0x207DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207DC4u;
label_207dc4:
    // 0x207dc4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x207dc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207dc8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x207dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207dcc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x207dccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x207dd0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207DD0u;
    {
        const bool branch_taken_0x207dd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x207dd0) {
            ctx->pc = 0x207DE4u;
            goto label_207de4;
        }
    }
    ctx->pc = 0x207DD8u;
    // 0x207dd8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207ddc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x207DDCu;
    SET_GPR_U32(ctx, 31, 0x207DE4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x207DDCu, 0x207DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207DE4u;
label_207de4:
    // 0x207de4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207dec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x207decu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207df0: 0x3e00008  jr          $ra
    ctx->pc = 0x207DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207DF8u;
    // 0x207df8: 0x0  nop
    ctx->pc = 0x207df8u;
    // NOP
    // 0x207dfc: 0x0  nop
    ctx->pc = 0x207dfcu;
    // NOP
    ctx->pc = 0x207e00u;
}
