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

// Function: sub_00223AE0
// Address: 0x223ae0 - 0x223b30
void sub_00223AE0_0x223ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223AE0_0x223ae0");
#endif

    switch (ctx->pc) {
        case 0x223b18u: goto label_223b18;
        default: break;
    }

    ctx->pc = 0x223ae0u;

    // 0x223ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223ae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x223ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x223aec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x223aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x223af0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x223af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223af4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x223af4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223af8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223afc: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x223afcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x223b00: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x223b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223b04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x223b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223b08: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x223b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x223b0c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x223b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x223b10: 0xc042844  jal         func_10A110
    ctx->pc = 0x223B10u;
    SET_GPR_U32(ctx, 31, 0x223B18u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x223B10u, 0x223B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B18u;
label_223b18:
    // 0x223b18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223b1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223b20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x223b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x223b24: 0x3e00008  jr          $ra
    ctx->pc = 0x223B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223B2Cu;
    // 0x223b2c: 0x0  nop
    ctx->pc = 0x223b2cu;
    // NOP
    ctx->pc = 0x223b30u;
}
