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

// Function: sub_00184920
// Address: 0x184920 - 0x1849b0
void sub_00184920_0x184920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184920_0x184920");
#endif

    switch (ctx->pc) {
        case 0x184964u: goto label_184964;
        case 0x184974u: goto label_184974;
        default: break;
    }

    ctx->pc = 0x184920u;

    // 0x184920: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x184920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x184924: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x184924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x184928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18492c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18492cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x184930: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x184930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x184934: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x184934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x184938: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x184938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18493c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184940: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x184940u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x184944: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x184944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x184948: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x184948u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
    // 0x18494c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18494Cu;
    {
        const bool branch_taken_0x18494c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18494c) {
            ctx->pc = 0x18495Cu;
            goto label_18495c;
        }
    }
    ctx->pc = 0x184954u;
    // 0x184954: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x184954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x184958: 0x280c3  sra         $s0, $v0, 3
    ctx->pc = 0x184958u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
label_18495c:
    // 0x18495c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18495Cu;
    {
        const bool branch_taken_0x18495c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18495c) {
            ctx->pc = 0x184990u;
            goto label_184990;
        }
    }
    ctx->pc = 0x184964u;
label_184964:
    // 0x184964: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x184964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184968: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x184968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18496c: 0xc06126c  jal         func_1849B0
    ctx->pc = 0x18496Cu;
    SET_GPR_U32(ctx, 31, 0x184974u);
    ctx->pc = 0x1849B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1849B0u, 0x18496Cu, 0x184974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184974u;
label_184974:
    // 0x184974: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x184974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184978: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x184978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18497c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x18497cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x184980: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x184980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184984: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x184984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x184988: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x184988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x18498c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x18498cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_184990:
    // 0x184990: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x184990u;
    {
        const bool branch_taken_0x184990 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x184990) {
            ctx->pc = 0x184964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184964;
        }
    }
    ctx->pc = 0x184998u;
    // 0x184998: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x184998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18499c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18499cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1849a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1849a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1849a4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1849a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1849a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1849A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1849A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1849B0u;
}
