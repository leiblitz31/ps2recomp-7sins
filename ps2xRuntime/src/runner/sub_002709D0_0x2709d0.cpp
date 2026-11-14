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

// Function: sub_002709D0
// Address: 0x2709d0 - 0x270a40
void sub_002709D0_0x2709d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002709D0_0x2709d0");
#endif

    switch (ctx->pc) {
        case 0x2709ecu: goto label_2709ec;
        default: break;
    }

    ctx->pc = 0x2709d0u;

    // 0x2709d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2709d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2709d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2709d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2709d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2709d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2709dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2709dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2709e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2709e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2709e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2709E4u;
    {
        const bool branch_taken_0x2709e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2709e4) {
            ctx->pc = 0x270A14u;
            goto label_270a14;
        }
    }
    ctx->pc = 0x2709ECu;
label_2709ec:
    // 0x2709ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2709ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2709f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2709f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2709f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2709f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2709f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2709f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2709fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2709fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270a00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x270a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x270a04: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x270a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x270a08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x270a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270a0c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x270a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x270a10: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x270a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_270a14:
    // 0x270a14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x270a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270a18: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x270A18u;
    {
        const bool branch_taken_0x270a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270a18) {
            ctx->pc = 0x2709ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2709ec;
        }
    }
    ctx->pc = 0x270A20u;
    // 0x270a20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x270a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270a24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x270a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270a28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x270a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x270a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x270A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270A34u;
    // 0x270a34: 0x0  nop
    ctx->pc = 0x270a34u;
    // NOP
    // 0x270a38: 0x0  nop
    ctx->pc = 0x270a38u;
    // NOP
    // 0x270a3c: 0x0  nop
    ctx->pc = 0x270a3cu;
    // NOP
    ctx->pc = 0x270a40u;
}
