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

// Function: sub_00181680
// Address: 0x181680 - 0x181710
void sub_00181680_0x181680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181680_0x181680");
#endif

    switch (ctx->pc) {
        case 0x1816c4u: goto label_1816c4;
        case 0x1816e4u: goto label_1816e4;
        default: break;
    }

    ctx->pc = 0x181680u;

    // 0x181680: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x181680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x181684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18168c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18168cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x181690: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x181690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x181694: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x181694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x181698: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x181698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18169c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1816a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1816a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1816a4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1816a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1816a8: 0x38103  sra         $s0, $v1, 4
    ctx->pc = 0x1816a8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1816ac: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1816ACu;
    {
        const bool branch_taken_0x1816ac = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1816ac) {
            ctx->pc = 0x1816BCu;
            goto label_1816bc;
        }
    }
    ctx->pc = 0x1816B4u;
    // 0x1816b4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1816b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1816b8: 0x28103  sra         $s0, $v0, 4
    ctx->pc = 0x1816b8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
label_1816bc:
    // 0x1816bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1816BCu;
    {
        const bool branch_taken_0x1816bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1816bc) {
            ctx->pc = 0x1816E8u;
            goto label_1816e8;
        }
    }
    ctx->pc = 0x1816C4u;
label_1816c4:
    // 0x1816c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1816c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1816c8: 0x2444fff0  addiu       $a0, $v0, -0x10
    ctx->pc = 0x1816c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1816cc: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1816ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1816d0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1816d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1816d4: 0x2445fff0  addiu       $a1, $v0, -0x10
    ctx->pc = 0x1816d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1816d8: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1816d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1816dc: 0xc05f268  jal         func_17C9A0
    ctx->pc = 0x1816DCu;
    SET_GPR_U32(ctx, 31, 0x1816E4u);
    ctx->pc = 0x17C9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C9A0u, 0x1816DCu, 0x1816E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1816E4u;
label_1816e4:
    // 0x1816e4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1816e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1816e8:
    // 0x1816e8: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1816E8u;
    {
        const bool branch_taken_0x1816e8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1816e8) {
            ctx->pc = 0x1816C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1816c4;
        }
    }
    ctx->pc = 0x1816F0u;
    // 0x1816f0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1816f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1816f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1816f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1816f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1816f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1816fc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1816fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x181700: 0x3e00008  jr          $ra
    ctx->pc = 0x181700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181708u;
    // 0x181708: 0x0  nop
    ctx->pc = 0x181708u;
    // NOP
    // 0x18170c: 0x0  nop
    ctx->pc = 0x18170cu;
    // NOP
    ctx->pc = 0x181710u;
}
