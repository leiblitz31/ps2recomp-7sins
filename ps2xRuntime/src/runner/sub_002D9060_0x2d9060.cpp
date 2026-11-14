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

// Function: sub_002D9060
// Address: 0x2d9060 - 0x2d90d0
void sub_002D9060_0x2d9060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9060_0x2d9060");
#endif

    switch (ctx->pc) {
        case 0x2d9060u: goto label_2d9060;
        case 0x2d9064u: goto label_2d9064;
        case 0x2d9068u: goto label_2d9068;
        case 0x2d906cu: goto label_2d906c;
        case 0x2d9070u: goto label_2d9070;
        case 0x2d9074u: goto label_2d9074;
        case 0x2d9078u: goto label_2d9078;
        case 0x2d907cu: goto label_2d907c;
        case 0x2d9080u: goto label_2d9080;
        case 0x2d9084u: goto label_2d9084;
        case 0x2d9088u: goto label_2d9088;
        case 0x2d908cu: goto label_2d908c;
        case 0x2d9090u: goto label_2d9090;
        case 0x2d9094u: goto label_2d9094;
        case 0x2d9098u: goto label_2d9098;
        case 0x2d909cu: goto label_2d909c;
        case 0x2d90a0u: goto label_2d90a0;
        case 0x2d90a4u: goto label_2d90a4;
        case 0x2d90a8u: goto label_2d90a8;
        case 0x2d90acu: goto label_2d90ac;
        case 0x2d90b0u: goto label_2d90b0;
        case 0x2d90b4u: goto label_2d90b4;
        case 0x2d90b8u: goto label_2d90b8;
        case 0x2d90bcu: goto label_2d90bc;
        case 0x2d90c0u: goto label_2d90c0;
        case 0x2d90c4u: goto label_2d90c4;
        case 0x2d90c8u: goto label_2d90c8;
        case 0x2d90ccu: goto label_2d90cc;
        default: break;
    }

    ctx->pc = 0x2d9060u;

label_2d9060:
    // 0x2d9060: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d9060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2d9064:
    // 0x2d9064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d9068:
    // 0x2d9068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2d906c:
    // 0x2d906c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d906cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2d9070:
    // 0x2d9070: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2d9070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2d9074:
    // 0x2d9074: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2d9074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_2d9078:
    // 0x2d9078: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x2d9078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_2d907c:
    // 0x2d907c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d907cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9080:
    // 0x2d9080: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d9080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9084:
    // 0x2d9084: 0xc0b6434  jal         func_2D90D0
label_2d9088:
    if (ctx->pc == 0x2D9088u) {
        ctx->pc = 0x2D908Cu;
        goto label_2d908c;
    }
    ctx->pc = 0x2D9084u;
    SET_GPR_U32(ctx, 31, 0x2D908Cu);
    ctx->pc = 0x2D90D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D90D0u, 0x2D9084u, 0x2D908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D908Cu;
label_2d908c:
    // 0x2d908c: 0x3c10002e  lui         $s0, 0x2E
    ctx->pc = 0x2d908cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46 << 16));
label_2d9090:
    // 0x2d9090: 0x26108e80  addiu       $s0, $s0, -0x7180
    ctx->pc = 0x2d9090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938240));
label_2d9094:
    // 0x2d9094: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x2d9094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2d9098:
    // 0x2d9098: 0x200f809  jalr        $s0
label_2d909c:
    if (ctx->pc == 0x2D909Cu) {
        ctx->pc = 0x2D90A0u;
        goto label_2d90a0;
    }
    ctx->pc = 0x2D9098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2D90A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9098u, 0x2D90A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D90A0u;
label_2d90a0:
    // 0x2d90a0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d90a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2d90a4:
    // 0x2d90a4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2d90a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2d90a8:
    // 0x2d90a8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2d90a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2d90ac:
    // 0x2d90ac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2d90acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2d90b0:
    // 0x2d90b0: 0xc0b42c4  jal         func_2D0B10
label_2d90b4:
    if (ctx->pc == 0x2D90B4u) {
        ctx->pc = 0x2D90B8u;
        goto label_2d90b8;
    }
    ctx->pc = 0x2D90B0u;
    SET_GPR_U32(ctx, 31, 0x2D90B8u);
    ctx->pc = 0x2D0B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B10u, 0x2D90B0u, 0x2D90B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D90B8u;
label_2d90b8:
    // 0x2d90b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d90b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d90bc:
    // 0x2d90bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d90bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d90c0:
    // 0x2d90c0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2d90c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2d90c4:
    // 0x2d90c4: 0x3e00008  jr          $ra
label_2d90c8:
    if (ctx->pc == 0x2D90C8u) {
        ctx->pc = 0x2D90CCu;
        goto label_2d90cc;
    }
    ctx->pc = 0x2D90C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D90C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D90CCu;
label_2d90cc:
    // 0x2d90cc: 0x0  nop
    ctx->pc = 0x2d90ccu;
    // NOP
    ctx->pc = 0x2d90d0u;
}
