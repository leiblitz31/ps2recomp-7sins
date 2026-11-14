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

// Function: sub_00479690
// Address: 0x479690 - 0x479710
void sub_00479690_0x479690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479690_0x479690");
#endif

    switch (ctx->pc) {
        case 0x4796bcu: goto label_4796bc;
        case 0x4796f8u: goto label_4796f8;
        default: break;
    }

    ctx->pc = 0x479690u;

    // 0x479690: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x479690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x479694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x479694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x479698: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x479698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47969c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x47969cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4796a0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x4796a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x4796a4: 0xffa70040  sd          $a3, 0x40($sp)
    ctx->pc = 0x4796a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 7));
    // 0x4796a8: 0xa3a80050  sb          $t0, 0x50($sp)
    ctx->pc = 0x4796a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 8));
    // 0x4796ac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4796acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4796b0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x4796b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4796b4: 0xc11dd5c  jal         func_477570
    ctx->pc = 0x4796B4u;
    SET_GPR_U32(ctx, 31, 0x4796BCu);
    ctx->pc = 0x477570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477570u, 0x4796B4u, 0x4796BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4796BCu;
label_4796bc:
    // 0x4796bc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4796bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4796c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4796c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4796c4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4796c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4796c8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4796c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4796cc: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x4796ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x4796d0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4796D0u;
    {
        const bool branch_taken_0x4796d0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4796d0) {
            ctx->pc = 0x4796E0u;
            goto label_4796e0;
        }
    }
    ctx->pc = 0x4796D8u;
    // 0x4796d8: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x4796d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x4796dc: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x4796dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_4796e0:
    // 0x4796e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4796e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4796e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4796e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4796e8: 0xdfa70040  ld          $a3, 0x40($sp)
    ctx->pc = 0x4796e8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4796ec: 0x83a80050  lb          $t0, 0x50($sp)
    ctx->pc = 0x4796ecu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4796f0: 0xc11e5c4  jal         func_479710
    ctx->pc = 0x4796F0u;
    SET_GPR_U32(ctx, 31, 0x4796F8u);
    ctx->pc = 0x479710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479710u, 0x4796F0u, 0x4796F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4796F8u;
label_4796f8:
    // 0x4796f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4796f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4796fc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4796fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x479700: 0x3e00008  jr          $ra
    ctx->pc = 0x479700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479708u;
    // 0x479708: 0x0  nop
    ctx->pc = 0x479708u;
    // NOP
    // 0x47970c: 0x0  nop
    ctx->pc = 0x47970cu;
    // NOP
    ctx->pc = 0x479710u;
}
