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

// Function: sub_002534B0
// Address: 0x2534b0 - 0x253530
void sub_002534B0_0x2534b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002534B0_0x2534b0");
#endif

    switch (ctx->pc) {
        case 0x2534d4u: goto label_2534d4;
        case 0x2534e4u: goto label_2534e4;
        case 0x2534f0u: goto label_2534f0;
        case 0x253500u: goto label_253500;
        case 0x253514u: goto label_253514;
        default: break;
    }

    ctx->pc = 0x2534b0u;

label_2534b0:
    // 0x2534b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2534b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2534b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2534b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2534b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2534b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2534bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2534bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2534c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2534c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2534c4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2534c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2534c8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2534c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2534cc: 0xc094c10  jal         func_253040
    ctx->pc = 0x2534CCu;
    SET_GPR_U32(ctx, 31, 0x2534D4u);
    ctx->pc = 0x253040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253040u, 0x2534CCu, 0x2534D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2534D4u;
label_2534d4:
    // 0x2534d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2534d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2534d8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2534d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2534dc: 0xc092464  jal         func_249190
    ctx->pc = 0x2534DCu;
    SET_GPR_U32(ctx, 31, 0x2534E4u);
    ctx->pc = 0x249190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249190u, 0x2534DCu, 0x2534E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2534E4u;
label_2534e4:
    // 0x2534e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2534e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2534e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2534E8u;
    {
        const bool branch_taken_0x2534e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2534e8) {
            ctx->pc = 0x253504u;
            goto label_253504;
        }
    }
    ctx->pc = 0x2534F0u;
label_2534f0:
    // 0x2534f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2534f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2534f4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2534f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2534f8: 0xc094d2c  jal         func_2534B0
    ctx->pc = 0x2534F8u;
    SET_GPR_U32(ctx, 31, 0x253500u);
    ctx->pc = 0x2534B0u;
    goto label_2534b0;
    ctx->pc = 0x253500u;
label_253500:
    // 0x253500: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x253500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_253504:
    // 0x253504: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x253504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253508: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x253508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x25350c: 0xc09245c  jal         func_249170
    ctx->pc = 0x25350Cu;
    SET_GPR_U32(ctx, 31, 0x253514u);
    ctx->pc = 0x249170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249170u, 0x25350Cu, 0x253514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253514u;
label_253514:
    // 0x253514: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x253514u;
    {
        const bool branch_taken_0x253514 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x253514) {
            ctx->pc = 0x2534F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2534f0;
        }
    }
    ctx->pc = 0x25351Cu;
    // 0x25351c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25351cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253524: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x253524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x253528: 0x3e00008  jr          $ra
    ctx->pc = 0x253528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253530u;
}
