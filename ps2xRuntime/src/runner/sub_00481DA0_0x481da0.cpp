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

// Function: sub_00481DA0
// Address: 0x481da0 - 0x481e00
void sub_00481DA0_0x481da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481DA0_0x481da0");
#endif

    switch (ctx->pc) {
        case 0x481dccu: goto label_481dcc;
        case 0x481decu: goto label_481dec;
        default: break;
    }

    ctx->pc = 0x481da0u;

    // 0x481da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481da8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x481da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x481dac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x481dacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x481db0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481db4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x481DB4u;
    {
        const bool branch_taken_0x481db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x481db4) {
            ctx->pc = 0x481DECu;
            goto label_481dec;
        }
    }
    ctx->pc = 0x481DBCu;
    // 0x481dbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x481dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481dc0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x481dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x481dc4: 0xc120780  jal         func_481E00
    ctx->pc = 0x481DC4u;
    SET_GPR_U32(ctx, 31, 0x481DCCu);
    ctx->pc = 0x481E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481E00u, 0x481DC4u, 0x481DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481DCCu;
label_481dcc:
    // 0x481dcc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x481dccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481dd0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x481dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x481dd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x481dd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x481dd8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x481DD8u;
    {
        const bool branch_taken_0x481dd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x481dd8) {
            ctx->pc = 0x481DECu;
            goto label_481dec;
        }
    }
    ctx->pc = 0x481DE0u;
    // 0x481de0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x481de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481de4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x481DE4u;
    SET_GPR_U32(ctx, 31, 0x481DECu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x481DE4u, 0x481DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481DECu;
label_481dec:
    // 0x481dec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481df4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x481df4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x481df8: 0x3e00008  jr          $ra
    ctx->pc = 0x481DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481E00u;
}
