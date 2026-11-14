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

// Function: sub_00235290
// Address: 0x235290 - 0x2352f0
void sub_00235290_0x235290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235290_0x235290");
#endif

    switch (ctx->pc) {
        case 0x2352c8u: goto label_2352c8;
        case 0x2352dcu: goto label_2352dc;
        default: break;
    }

    ctx->pc = 0x235290u;

    // 0x235290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x235290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x235294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235298: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x235298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23529c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23529cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2352a0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2352a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2352a4: 0x8f83bbac  lw          $v1, -0x4454($gp)
    ctx->pc = 0x2352a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949804)));
    // 0x2352a8: 0x1003000c  beq         $zero, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2352A8u;
    {
        const bool branch_taken_0x2352a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2352a8) {
            ctx->pc = 0x2352DCu;
            goto label_2352dc;
        }
    }
    ctx->pc = 0x2352B0u;
    // 0x2352b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2352b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2352b4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2352b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2352b8: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2352b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2352bc: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x2352bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2352c0: 0xc08d350  jal         func_234D40
    ctx->pc = 0x2352C0u;
    SET_GPR_U32(ctx, 31, 0x2352C8u);
    ctx->pc = 0x234D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234D40u, 0x2352C0u, 0x2352C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2352C8u;
label_2352c8:
    // 0x2352c8: 0x8f82bbac  lw          $v0, -0x4454($gp)
    ctx->pc = 0x2352c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949804)));
    // 0x2352cc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2352ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2352d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2352d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2352d4: 0xc08d4bc  jal         func_2352F0
    ctx->pc = 0x2352D4u;
    SET_GPR_U32(ctx, 31, 0x2352DCu);
    ctx->pc = 0x2352F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2352F0u, 0x2352D4u, 0x2352DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2352DCu;
label_2352dc:
    // 0x2352dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2352dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2352e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2352e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2352e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2352E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2352E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2352ECu;
    // 0x2352ec: 0x0  nop
    ctx->pc = 0x2352ecu;
    // NOP
    ctx->pc = 0x2352f0u;
}
