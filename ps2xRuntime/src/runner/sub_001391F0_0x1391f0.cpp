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

// Function: sub_001391F0
// Address: 0x1391f0 - 0x139260
void sub_001391F0_0x1391f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001391F0_0x1391f0");
#endif

    switch (ctx->pc) {
        case 0x139230u: goto label_139230;
        default: break;
    }

    ctx->pc = 0x1391f0u;

    // 0x1391f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1391f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1391f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1391f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1391f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1391f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1391fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1391fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139200: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x139200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x139204: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x139204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139208: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x139208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13920c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x13920cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139210: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x139210u;
    {
        const bool branch_taken_0x139210 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x139210) {
            ctx->pc = 0x139224u;
            goto label_139224;
        }
    }
    ctx->pc = 0x139218u;
    // 0x139218: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x139218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13921c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13921Cu;
    {
        const bool branch_taken_0x13921c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13921c) {
            ctx->pc = 0x139234u;
            goto label_139234;
        }
    }
    ctx->pc = 0x139224u;
label_139224:
    // 0x139224: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x139224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139228: 0xc04f3c4  jal         func_13CF10
    ctx->pc = 0x139228u;
    SET_GPR_U32(ctx, 31, 0x139230u);
    ctx->pc = 0x13CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CF10u, 0x139228u, 0x139230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139230u;
label_139230:
    // 0x139230: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x139230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_139234:
    // 0x139234: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x139234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139238: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x139238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x13923c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139240: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139244: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139248: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13924c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13924cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x139250: 0x3e00008  jr          $ra
    ctx->pc = 0x139250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139258u;
    // 0x139258: 0x0  nop
    ctx->pc = 0x139258u;
    // NOP
    // 0x13925c: 0x0  nop
    ctx->pc = 0x13925cu;
    // NOP
    ctx->pc = 0x139260u;
}
