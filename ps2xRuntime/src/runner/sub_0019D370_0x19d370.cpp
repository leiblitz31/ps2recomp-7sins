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

// Function: sub_0019D370
// Address: 0x19d370 - 0x19d400
void sub_0019D370_0x19d370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D370_0x19d370");
#endif

    switch (ctx->pc) {
        case 0x19d3b4u: goto label_19d3b4;
        case 0x19d3d4u: goto label_19d3d4;
        default: break;
    }

    ctx->pc = 0x19d370u;

    // 0x19d370: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19d370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19d374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19d374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19d378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d37c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19d380: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19d380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x19d384: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x19d384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x19d388: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x19d388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d38c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d390: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x19d390u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19d394: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19d394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19d398: 0x38103  sra         $s0, $v1, 4
    ctx->pc = 0x19d398u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 4));
    // 0x19d39c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D39Cu;
    {
        const bool branch_taken_0x19d39c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x19d39c) {
            ctx->pc = 0x19D3ACu;
            goto label_19d3ac;
        }
    }
    ctx->pc = 0x19D3A4u;
    // 0x19d3a4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x19d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x19d3a8: 0x28103  sra         $s0, $v0, 4
    ctx->pc = 0x19d3a8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 4));
label_19d3ac:
    // 0x19d3ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19D3ACu;
    {
        const bool branch_taken_0x19d3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d3ac) {
            ctx->pc = 0x19D3D8u;
            goto label_19d3d8;
        }
    }
    ctx->pc = 0x19D3B4u;
label_19d3b4:
    // 0x19d3b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d3b8: 0x2444fff0  addiu       $a0, $v0, -0x10
    ctx->pc = 0x19d3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x19d3bc: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x19d3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x19d3c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d3c4: 0x2445fff0  addiu       $a1, $v0, -0x10
    ctx->pc = 0x19d3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x19d3c8: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x19d3cc: 0xc065c64  jal         func_197190
    ctx->pc = 0x19D3CCu;
    SET_GPR_U32(ctx, 31, 0x19D3D4u);
    ctx->pc = 0x197190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197190u, 0x19D3CCu, 0x19D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D3D4u;
label_19d3d4:
    // 0x19d3d4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x19d3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_19d3d8:
    // 0x19d3d8: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19D3D8u;
    {
        const bool branch_taken_0x19d3d8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x19d3d8) {
            ctx->pc = 0x19D3B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d3b4;
        }
    }
    ctx->pc = 0x19D3E0u;
    // 0x19d3e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d3e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19d3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d3e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d3ec: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x19d3ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19d3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D3F8u;
    // 0x19d3f8: 0x0  nop
    ctx->pc = 0x19d3f8u;
    // NOP
    // 0x19d3fc: 0x0  nop
    ctx->pc = 0x19d3fcu;
    // NOP
    ctx->pc = 0x19d400u;
}
