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

// Function: sub_0014ABD0
// Address: 0x14abd0 - 0x14ac30
void sub_0014ABD0_0x14abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ABD0_0x14abd0");
#endif

    switch (ctx->pc) {
        case 0x14abf8u: goto label_14abf8;
        case 0x14ac10u: goto label_14ac10;
        default: break;
    }

    ctx->pc = 0x14abd0u;

    // 0x14abd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14abd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14abd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14abd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14abd8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14abd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14abdc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x14abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x14abe0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x14abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x14abe4: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x14abe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x14abe8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x14abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x14abec: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x14abecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14abf0: 0xc052b1c  jal         func_14AC70
    ctx->pc = 0x14ABF0u;
    SET_GPR_U32(ctx, 31, 0x14ABF8u);
    ctx->pc = 0x14AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC70u, 0x14ABF0u, 0x14ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ABF8u;
label_14abf8:
    // 0x14abf8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14abfc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x14abfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ac00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14ac00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac04: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x14ac04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ac08: 0xc054750  jal         func_151D40
    ctx->pc = 0x14AC08u;
    SET_GPR_U32(ctx, 31, 0x14AC10u);
    ctx->pc = 0x151D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151D40u, 0x14AC08u, 0x14AC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC10u;
label_14ac10:
    // 0x14ac10: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x14ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ac14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ac14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ac18: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x14ac18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14ac1c: 0x3e00008  jr          $ra
    ctx->pc = 0x14AC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AC24u;
    // 0x14ac24: 0x0  nop
    ctx->pc = 0x14ac24u;
    // NOP
    // 0x14ac28: 0x0  nop
    ctx->pc = 0x14ac28u;
    // NOP
    // 0x14ac2c: 0x0  nop
    ctx->pc = 0x14ac2cu;
    // NOP
    ctx->pc = 0x14ac30u;
}
