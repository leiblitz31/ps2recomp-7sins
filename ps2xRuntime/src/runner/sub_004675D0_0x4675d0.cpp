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

// Function: sub_004675D0
// Address: 0x4675d0 - 0x467640
void sub_004675D0_0x4675d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004675D0_0x4675d0");
#endif

    switch (ctx->pc) {
        case 0x4675f0u: goto label_4675f0;
        case 0x467624u: goto label_467624;
        default: break;
    }

    ctx->pc = 0x4675d0u;

    // 0x4675d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4675d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4675d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4675d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4675d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4675d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4675dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4675dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4675e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x4675e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x4675e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4675e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4675e8: 0xc11a218  jal         func_468860
    ctx->pc = 0x4675E8u;
    SET_GPR_U32(ctx, 31, 0x4675F0u);
    ctx->pc = 0x468860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468860u, 0x4675E8u, 0x4675F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4675F0u;
label_4675f0:
    // 0x4675f0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x4675f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x4675f4: 0x24636ba0  addiu       $v1, $v1, 0x6BA0
    ctx->pc = 0x4675f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27552));
    // 0x4675f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4675f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4675fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4675fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x467600: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x467600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x467604: 0x24636bb8  addiu       $v1, $v1, 0x6BB8
    ctx->pc = 0x467604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27576));
    // 0x467608: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46760c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x46760cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x467610: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x467610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467614: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x467614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x467618: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x467618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46761c: 0xc119dc4  jal         func_467710
    ctx->pc = 0x46761Cu;
    SET_GPR_U32(ctx, 31, 0x467624u);
    ctx->pc = 0x467710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467710u, 0x46761Cu, 0x467624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467624u;
label_467624:
    // 0x467624: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x467628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46762c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46762cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x467630: 0x3e00008  jr          $ra
    ctx->pc = 0x467630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467638u;
    // 0x467638: 0x0  nop
    ctx->pc = 0x467638u;
    // NOP
    // 0x46763c: 0x0  nop
    ctx->pc = 0x46763cu;
    // NOP
    ctx->pc = 0x467640u;
}
