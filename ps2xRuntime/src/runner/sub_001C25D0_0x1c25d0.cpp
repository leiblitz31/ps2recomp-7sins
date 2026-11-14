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

// Function: sub_001C25D0
// Address: 0x1c25d0 - 0x1c2640
void sub_001C25D0_0x1c25d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C25D0_0x1c25d0");
#endif

    switch (ctx->pc) {
        case 0x1c25ecu: goto label_1c25ec;
        default: break;
    }

    ctx->pc = 0x1c25d0u;

    // 0x1c25d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c25d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c25d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c25d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c25d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c25d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c25dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c25dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c25e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1c25e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1c25e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C25E4u;
    {
        const bool branch_taken_0x1c25e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c25e4) {
            ctx->pc = 0x1C2614u;
            goto label_1c2614;
        }
    }
    ctx->pc = 0x1C25ECu;
label_1c25ec:
    // 0x1c25ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c25f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c25f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c25f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c25f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c25fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c25fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2600: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c2600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c2604: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1c2604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1c2608: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c2608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c260c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1c260cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c2610: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1c2610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1c2614:
    // 0x1c2614: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c2614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2618: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C2618u;
    {
        const bool branch_taken_0x1c2618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2618) {
            ctx->pc = 0x1C25ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c25ec;
        }
    }
    ctx->pc = 0x1C2620u;
    // 0x1c2620: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c2620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2628: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c2628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c262c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C262Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C262Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2634u;
    // 0x1c2634: 0x0  nop
    ctx->pc = 0x1c2634u;
    // NOP
    // 0x1c2638: 0x0  nop
    ctx->pc = 0x1c2638u;
    // NOP
    // 0x1c263c: 0x0  nop
    ctx->pc = 0x1c263cu;
    // NOP
    ctx->pc = 0x1c2640u;
}
