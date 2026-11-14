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

// Function: sub_002181F0
// Address: 0x2181f0 - 0x218260
void sub_002181F0_0x2181f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002181F0_0x2181f0");
#endif

    switch (ctx->pc) {
        case 0x21820cu: goto label_21820c;
        default: break;
    }

    ctx->pc = 0x2181f0u;

    // 0x2181f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2181f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2181f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2181f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2181f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2181f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2181fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2181fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x218200: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x218200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x218204: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x218204u;
    {
        const bool branch_taken_0x218204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218204) {
            ctx->pc = 0x218234u;
            goto label_218234;
        }
    }
    ctx->pc = 0x21820Cu;
label_21820c:
    // 0x21820c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x21820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218210: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x218210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218214: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x218214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218218: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x218218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x21821c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x21821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218220: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x218220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x218224: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x218224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x218228: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x218228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21822c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x21822cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x218230: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x218230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_218234:
    // 0x218234: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x218234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218238: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x218238u;
    {
        const bool branch_taken_0x218238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218238) {
            ctx->pc = 0x21820Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21820c;
        }
    }
    ctx->pc = 0x218240u;
    // 0x218240: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x218240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x218244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218248: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x218248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21824c: 0x3e00008  jr          $ra
    ctx->pc = 0x21824Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21824Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218254u;
    // 0x218254: 0x0  nop
    ctx->pc = 0x218254u;
    // NOP
    // 0x218258: 0x0  nop
    ctx->pc = 0x218258u;
    // NOP
    // 0x21825c: 0x0  nop
    ctx->pc = 0x21825cu;
    // NOP
    ctx->pc = 0x218260u;
}
