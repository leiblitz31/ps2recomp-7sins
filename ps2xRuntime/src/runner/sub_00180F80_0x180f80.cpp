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

// Function: sub_00180F80
// Address: 0x180f80 - 0x180ff0
void sub_00180F80_0x180f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180F80_0x180f80");
#endif

    switch (ctx->pc) {
        case 0x180f80u: goto label_180f80;
        case 0x180f84u: goto label_180f84;
        case 0x180f88u: goto label_180f88;
        case 0x180f8cu: goto label_180f8c;
        case 0x180f90u: goto label_180f90;
        case 0x180f94u: goto label_180f94;
        case 0x180f98u: goto label_180f98;
        case 0x180f9cu: goto label_180f9c;
        case 0x180fa0u: goto label_180fa0;
        case 0x180fa4u: goto label_180fa4;
        case 0x180fa8u: goto label_180fa8;
        case 0x180facu: goto label_180fac;
        case 0x180fb0u: goto label_180fb0;
        case 0x180fb4u: goto label_180fb4;
        case 0x180fb8u: goto label_180fb8;
        case 0x180fbcu: goto label_180fbc;
        case 0x180fc0u: goto label_180fc0;
        case 0x180fc4u: goto label_180fc4;
        case 0x180fc8u: goto label_180fc8;
        case 0x180fccu: goto label_180fcc;
        case 0x180fd0u: goto label_180fd0;
        case 0x180fd4u: goto label_180fd4;
        case 0x180fd8u: goto label_180fd8;
        case 0x180fdcu: goto label_180fdc;
        case 0x180fe0u: goto label_180fe0;
        case 0x180fe4u: goto label_180fe4;
        case 0x180fe8u: goto label_180fe8;
        case 0x180fecu: goto label_180fec;
        default: break;
    }

    ctx->pc = 0x180f80u;

label_180f80:
    // 0x180f80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x180f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_180f84:
    // 0x180f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_180f88:
    // 0x180f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_180f8c:
    // 0x180f8c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x180f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_180f90:
    // 0x180f90: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x180f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_180f94:
    // 0x180f94: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x180f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_180f98:
    // 0x180f98: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x180f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_180f9c:
    // 0x180f9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x180f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180fa0:
    // 0x180fa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x180fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180fa4:
    // 0x180fa4: 0xc0603fc  jal         func_180FF0
label_180fa8:
    if (ctx->pc == 0x180FA8u) {
        ctx->pc = 0x180FACu;
        goto label_180fac;
    }
    ctx->pc = 0x180FA4u;
    SET_GPR_U32(ctx, 31, 0x180FACu);
    ctx->pc = 0x180FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180FF0u, 0x180FA4u, 0x180FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180FACu;
label_180fac:
    // 0x180fac: 0x3c100018  lui         $s0, 0x18
    ctx->pc = 0x180facu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)24 << 16));
label_180fb0:
    // 0x180fb0: 0x2610fe40  addiu       $s0, $s0, -0x1C0
    ctx->pc = 0x180fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966848));
label_180fb4:
    // 0x180fb4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x180fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_180fb8:
    // 0x180fb8: 0x200f809  jalr        $s0
label_180fbc:
    if (ctx->pc == 0x180FBCu) {
        ctx->pc = 0x180FC0u;
        goto label_180fc0;
    }
    ctx->pc = 0x180FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x180FC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180FB8u, 0x180FC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180FC0u;
label_180fc0:
    // 0x180fc0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x180fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_180fc4:
    // 0x180fc4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x180fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_180fc8:
    // 0x180fc8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x180fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_180fcc:
    // 0x180fcc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x180fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_180fd0:
    // 0x180fd0: 0xc05f304  jal         func_17CC10
label_180fd4:
    if (ctx->pc == 0x180FD4u) {
        ctx->pc = 0x180FD8u;
        goto label_180fd8;
    }
    ctx->pc = 0x180FD0u;
    SET_GPR_U32(ctx, 31, 0x180FD8u);
    ctx->pc = 0x17CC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CC10u, 0x180FD0u, 0x180FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180FD8u;
label_180fd8:
    // 0x180fd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_180fdc:
    // 0x180fdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_180fe0:
    // 0x180fe0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x180fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_180fe4:
    // 0x180fe4: 0x3e00008  jr          $ra
label_180fe8:
    if (ctx->pc == 0x180FE8u) {
        ctx->pc = 0x180FECu;
        goto label_180fec;
    }
    ctx->pc = 0x180FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180FECu;
label_180fec:
    // 0x180fec: 0x0  nop
    ctx->pc = 0x180fecu;
    // NOP
    ctx->pc = 0x180ff0u;
}
