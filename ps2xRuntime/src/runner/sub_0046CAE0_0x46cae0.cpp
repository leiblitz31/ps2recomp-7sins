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

// Function: sub_0046CAE0
// Address: 0x46cae0 - 0x46cb30
void sub_0046CAE0_0x46cae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CAE0_0x46cae0");
#endif

    switch (ctx->pc) {
        case 0x46cb18u: goto label_46cb18;
        default: break;
    }

    ctx->pc = 0x46cae0u;

    // 0x46cae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46cae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46cae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46cae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46cae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46caec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46caecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46caf0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46caf4: 0x24636cc8  addiu       $v1, $v1, 0x6CC8
    ctx->pc = 0x46caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27848));
    // 0x46caf8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46cafc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46cb00: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46cb04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cb08: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x46cb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x46cb0c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x46cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46cb10: 0xc11b2cc  jal         func_46CB30
    ctx->pc = 0x46CB10u;
    SET_GPR_U32(ctx, 31, 0x46CB18u);
    ctx->pc = 0x46CB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CB30u, 0x46CB10u, 0x46CB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CB18u;
label_46cb18:
    // 0x46cb18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46cb1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46cb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46cb20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46cb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46cb24: 0x3e00008  jr          $ra
    ctx->pc = 0x46CB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46CB2Cu;
    // 0x46cb2c: 0x0  nop
    ctx->pc = 0x46cb2cu;
    // NOP
    ctx->pc = 0x46cb30u;
}
