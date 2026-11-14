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

// Function: sub_00269930
// Address: 0x269930 - 0x2699c0
void sub_00269930_0x269930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269930_0x269930");
#endif

    switch (ctx->pc) {
        case 0x269974u: goto label_269974;
        case 0x269984u: goto label_269984;
        default: break;
    }

    ctx->pc = 0x269930u;

    // 0x269930: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x269930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x269934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x269934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x269938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26993c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26993cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x269940: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x269940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x269944: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x269944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x269948: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x269948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26994c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26994cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269950: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x269950u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x269954: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x269954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x269958: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x269958u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
    // 0x26995c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26995Cu;
    {
        const bool branch_taken_0x26995c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x26995c) {
            ctx->pc = 0x26996Cu;
            goto label_26996c;
        }
    }
    ctx->pc = 0x269964u;
    // 0x269964: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x269964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x269968: 0x280c3  sra         $s0, $v0, 3
    ctx->pc = 0x269968u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
label_26996c:
    // 0x26996c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26996Cu;
    {
        const bool branch_taken_0x26996c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26996c) {
            ctx->pc = 0x2699A0u;
            goto label_2699a0;
        }
    }
    ctx->pc = 0x269974u;
label_269974:
    // 0x269974: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x269974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269978: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x269978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26997c: 0xc09a670  jal         func_2699C0
    ctx->pc = 0x26997Cu;
    SET_GPR_U32(ctx, 31, 0x269984u);
    ctx->pc = 0x2699C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2699C0u, 0x26997Cu, 0x269984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269984u;
label_269984:
    // 0x269984: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x269984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269988: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x269988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x26998c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x26998cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x269990: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x269990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x269994: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x269994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x269998: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x269998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x26999c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x26999cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2699a0:
    // 0x2699a0: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2699A0u;
    {
        const bool branch_taken_0x2699a0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2699a0) {
            ctx->pc = 0x269974u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269974;
        }
    }
    ctx->pc = 0x2699A8u;
    // 0x2699a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2699a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2699ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2699acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2699b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2699b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2699b4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2699b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2699b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2699B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2699B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2699C0u;
}
