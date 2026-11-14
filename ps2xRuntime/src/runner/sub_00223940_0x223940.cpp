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

// Function: sub_00223940
// Address: 0x223940 - 0x2239c0
void sub_00223940_0x223940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223940_0x223940");
#endif

    switch (ctx->pc) {
        case 0x223968u: goto label_223968;
        case 0x223978u: goto label_223978;
        default: break;
    }

    ctx->pc = 0x223940u;

    // 0x223940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x223940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x223944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x223944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x223948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22394c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22394cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x223950: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x223950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x223954: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x223954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x223958: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x223958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x22395c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x22395cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223960: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x223960u;
    {
        const bool branch_taken_0x223960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223960) {
            ctx->pc = 0x22398Cu;
            goto label_22398c;
        }
    }
    ctx->pc = 0x223968u;
label_223968:
    // 0x223968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22396c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x22396cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223970: 0xc088ea0  jal         func_223A80
    ctx->pc = 0x223970u;
    SET_GPR_U32(ctx, 31, 0x223978u);
    ctx->pc = 0x223A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A80u, 0x223970u, 0x223978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223978u;
label_223978:
    // 0x223978: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x223978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22397c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x223980: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x223980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x223984: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x223984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x223988: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x223988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22398c:
    // 0x22398c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223990: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x223990u;
    {
        const bool branch_taken_0x223990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223990) {
            ctx->pc = 0x223968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223968;
        }
    }
    ctx->pc = 0x223998u;
    // 0x223998: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x223998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22399c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22399cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2239a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2239a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2239a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2239a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2239a8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2239a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2239ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2239ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2239ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2239B4u;
    // 0x2239b4: 0x0  nop
    ctx->pc = 0x2239b4u;
    // NOP
    // 0x2239b8: 0x0  nop
    ctx->pc = 0x2239b8u;
    // NOP
    // 0x2239bc: 0x0  nop
    ctx->pc = 0x2239bcu;
    // NOP
    ctx->pc = 0x2239c0u;
}
