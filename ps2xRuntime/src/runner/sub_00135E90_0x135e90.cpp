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

// Function: sub_00135E90
// Address: 0x135e90 - 0x135f10
void sub_00135E90_0x135e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135E90_0x135e90");
#endif

    switch (ctx->pc) {
        case 0x135eb8u: goto label_135eb8;
        case 0x135ec8u: goto label_135ec8;
        default: break;
    }

    ctx->pc = 0x135e90u;

    // 0x135e90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x135e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x135e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x135e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x135e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135ea0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x135ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x135ea4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x135ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x135ea8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x135ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x135eac: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x135eacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135eb0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x135EB0u;
    {
        const bool branch_taken_0x135eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135eb0) {
            ctx->pc = 0x135EDCu;
            goto label_135edc;
        }
    }
    ctx->pc = 0x135EB8u;
label_135eb8:
    // 0x135eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135ebc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x135ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135ec0: 0xc04d7c4  jal         func_135F10
    ctx->pc = 0x135EC0u;
    SET_GPR_U32(ctx, 31, 0x135EC8u);
    ctx->pc = 0x135F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F10u, 0x135EC0u, 0x135EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135EC8u;
label_135ec8:
    // 0x135ec8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x135ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135ecc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x135eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x135ed0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x135ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x135ed4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x135ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x135ed8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x135ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135edc:
    // 0x135edc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x135edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135ee0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x135EE0u;
    {
        const bool branch_taken_0x135ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135ee0) {
            ctx->pc = 0x135EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135eb8;
        }
    }
    ctx->pc = 0x135EE8u;
    // 0x135ee8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x135ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135eec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x135eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135ef0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135ef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135ef8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x135ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x135efc: 0x3e00008  jr          $ra
    ctx->pc = 0x135EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135F04u;
    // 0x135f04: 0x0  nop
    ctx->pc = 0x135f04u;
    // NOP
    // 0x135f08: 0x0  nop
    ctx->pc = 0x135f08u;
    // NOP
    // 0x135f0c: 0x0  nop
    ctx->pc = 0x135f0cu;
    // NOP
    ctx->pc = 0x135f10u;
}
