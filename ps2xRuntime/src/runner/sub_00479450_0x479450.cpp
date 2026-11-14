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

// Function: sub_00479450
// Address: 0x479450 - 0x4794e0
void sub_00479450_0x479450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479450_0x479450");
#endif

    switch (ctx->pc) {
        case 0x479494u: goto label_479494;
        case 0x4794b4u: goto label_4794b4;
        default: break;
    }

    ctx->pc = 0x479450u;

    // 0x479450: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x479450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x479454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x479454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x479458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x479458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47945c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x47945cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x479460: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x479460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x479464: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x479464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x479468: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x479468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47946c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479470: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x479470u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x479474: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x479474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x479478: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x479478u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
    // 0x47947c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47947Cu;
    {
        const bool branch_taken_0x47947c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x47947c) {
            ctx->pc = 0x47948Cu;
            goto label_47948c;
        }
    }
    ctx->pc = 0x479484u;
    // 0x479484: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x479484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x479488: 0x280c3  sra         $s0, $v0, 3
    ctx->pc = 0x479488u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
label_47948c:
    // 0x47948c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x47948Cu;
    {
        const bool branch_taken_0x47948c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47948c) {
            ctx->pc = 0x4794B8u;
            goto label_4794b8;
        }
    }
    ctx->pc = 0x479494u;
label_479494:
    // 0x479494: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x479494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x479498: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x479498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x47949c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x47949cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x4794a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4794a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4794a4: 0x2445fff8  addiu       $a1, $v0, -0x8
    ctx->pc = 0x4794a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x4794a8: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x4794a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x4794ac: 0xc11dd5c  jal         func_477570
    ctx->pc = 0x4794ACu;
    SET_GPR_U32(ctx, 31, 0x4794B4u);
    ctx->pc = 0x477570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477570u, 0x4794ACu, 0x4794B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4794B4u;
label_4794b4:
    // 0x4794b4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4794b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4794b8:
    // 0x4794b8: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x4794B8u;
    {
        const bool branch_taken_0x4794b8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x4794b8) {
            ctx->pc = 0x479494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_479494;
        }
    }
    ctx->pc = 0x4794C0u;
    // 0x4794c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4794c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4794c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4794c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4794c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4794c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4794cc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4794ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4794d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4794D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4794D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4794D8u;
    // 0x4794d8: 0x0  nop
    ctx->pc = 0x4794d8u;
    // NOP
    // 0x4794dc: 0x0  nop
    ctx->pc = 0x4794dcu;
    // NOP
    ctx->pc = 0x4794e0u;
}
