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

// Function: sub_0023CD80
// Address: 0x23cd80 - 0x23cde0
void sub_0023CD80_0x23cd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CD80_0x23cd80");
#endif

    switch (ctx->pc) {
        case 0x23cda8u: goto label_23cda8;
        case 0x23cdc0u: goto label_23cdc0;
        default: break;
    }

    ctx->pc = 0x23cd80u;

    // 0x23cd80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23cd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23cd84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23cd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23cd88: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23cd8c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x23cd90: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x23cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x23cd94: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x23cd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x23cd98: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x23cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x23cd9c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x23cd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23cda0: 0xc08f378  jal         func_23CDE0
    ctx->pc = 0x23CDA0u;
    SET_GPR_U32(ctx, 31, 0x23CDA8u);
    ctx->pc = 0x23CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CDE0u, 0x23CDA0u, 0x23CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CDA8u;
label_23cda8:
    // 0x23cda8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cdac: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23cdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23cdb0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23cdb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cdb4: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x23cdb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23cdb8: 0xc08f958  jal         func_23E560
    ctx->pc = 0x23CDB8u;
    SET_GPR_U32(ctx, 31, 0x23CDC0u);
    ctx->pc = 0x23E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E560u, 0x23CDB8u, 0x23CDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CDC0u;
label_23cdc0:
    // 0x23cdc0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cdc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23cdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cdc8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x23cdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23cdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x23CDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CDD4u;
    // 0x23cdd4: 0x0  nop
    ctx->pc = 0x23cdd4u;
    // NOP
    // 0x23cdd8: 0x0  nop
    ctx->pc = 0x23cdd8u;
    // NOP
    // 0x23cddc: 0x0  nop
    ctx->pc = 0x23cddcu;
    // NOP
    ctx->pc = 0x23cde0u;
}
