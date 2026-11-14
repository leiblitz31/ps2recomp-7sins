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

// Function: sub_004774E0
// Address: 0x4774e0 - 0x477570
void sub_004774E0_0x4774e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004774E0_0x4774e0");
#endif

    switch (ctx->pc) {
        case 0x477524u: goto label_477524;
        case 0x477534u: goto label_477534;
        default: break;
    }

    ctx->pc = 0x4774e0u;

    // 0x4774e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4774e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4774e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4774e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4774e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4774e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4774ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4774ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x4774f0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x4774f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x4774f4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x4774f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x4774f8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4774f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4774fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4774fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x477500: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x477500u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x477504: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x477504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x477508: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x477508u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
    // 0x47750c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47750Cu;
    {
        const bool branch_taken_0x47750c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x47750c) {
            ctx->pc = 0x47751Cu;
            goto label_47751c;
        }
    }
    ctx->pc = 0x477514u;
    // 0x477514: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x477514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x477518: 0x280c3  sra         $s0, $v0, 3
    ctx->pc = 0x477518u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
label_47751c:
    // 0x47751c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x47751Cu;
    {
        const bool branch_taken_0x47751c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47751c) {
            ctx->pc = 0x477550u;
            goto label_477550;
        }
    }
    ctx->pc = 0x477524u;
label_477524:
    // 0x477524: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x477524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x477528: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x477528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47752c: 0xc11dd5c  jal         func_477570
    ctx->pc = 0x47752Cu;
    SET_GPR_U32(ctx, 31, 0x477534u);
    ctx->pc = 0x477570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477570u, 0x47752Cu, 0x477534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477534u;
label_477534:
    // 0x477534: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x477534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x477538: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x477538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x47753c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x47753cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x477540: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x477540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x477544: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x477544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x477548: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x477548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x47754c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x47754cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_477550:
    // 0x477550: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x477550u;
    {
        const bool branch_taken_0x477550 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x477550) {
            ctx->pc = 0x477524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_477524;
        }
    }
    ctx->pc = 0x477558u;
    // 0x477558: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x477558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47755c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47755cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x477560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477564: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x477564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x477568: 0x3e00008  jr          $ra
    ctx->pc = 0x477568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477570u;
}
