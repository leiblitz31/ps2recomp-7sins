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

// Function: sub_00491940
// Address: 0x491940 - 0x4919c0
void sub_00491940_0x491940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491940_0x491940");
#endif

    switch (ctx->pc) {
        case 0x491968u: goto label_491968;
        case 0x491978u: goto label_491978;
        default: break;
    }

    ctx->pc = 0x491940u;

    // 0x491940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x491940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x491944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x491944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x491948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x491948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49194c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49194cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x491950: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x491950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x491954: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x491954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x491958: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x491958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x49195c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x49195cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x491960: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x491960u;
    {
        const bool branch_taken_0x491960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491960) {
            ctx->pc = 0x49198Cu;
            goto label_49198c;
        }
    }
    ctx->pc = 0x491968u;
label_491968:
    // 0x491968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x491968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49196c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x49196cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x491970: 0xc1246a0  jal         func_491A80
    ctx->pc = 0x491970u;
    SET_GPR_U32(ctx, 31, 0x491978u);
    ctx->pc = 0x491A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491A80u, 0x491970u, 0x491978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491978u;
label_491978:
    // 0x491978: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x491978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49197c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x491980: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x491980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x491984: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x491984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x491988: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x491988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49198c:
    // 0x49198c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x49198cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x491990: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x491990u;
    {
        const bool branch_taken_0x491990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491990) {
            ctx->pc = 0x491968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_491968;
        }
    }
    ctx->pc = 0x491998u;
    // 0x491998: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x491998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49199c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49199cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4919a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4919a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4919a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4919a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4919a8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4919a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4919ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4919ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4919ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4919B4u;
    // 0x4919b4: 0x0  nop
    ctx->pc = 0x4919b4u;
    // NOP
    // 0x4919b8: 0x0  nop
    ctx->pc = 0x4919b8u;
    // NOP
    // 0x4919bc: 0x0  nop
    ctx->pc = 0x4919bcu;
    // NOP
    ctx->pc = 0x4919c0u;
}
