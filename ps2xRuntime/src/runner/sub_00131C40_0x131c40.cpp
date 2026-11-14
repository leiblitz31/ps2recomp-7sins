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

// Function: sub_00131C40
// Address: 0x131c40 - 0x131cb0
void sub_00131C40_0x131c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131C40_0x131c40");
#endif

    switch (ctx->pc) {
        case 0x131c40u: goto label_131c40;
        case 0x131c44u: goto label_131c44;
        case 0x131c48u: goto label_131c48;
        case 0x131c4cu: goto label_131c4c;
        case 0x131c50u: goto label_131c50;
        case 0x131c54u: goto label_131c54;
        case 0x131c58u: goto label_131c58;
        case 0x131c5cu: goto label_131c5c;
        case 0x131c60u: goto label_131c60;
        case 0x131c64u: goto label_131c64;
        case 0x131c68u: goto label_131c68;
        case 0x131c6cu: goto label_131c6c;
        case 0x131c70u: goto label_131c70;
        case 0x131c74u: goto label_131c74;
        case 0x131c78u: goto label_131c78;
        case 0x131c7cu: goto label_131c7c;
        case 0x131c80u: goto label_131c80;
        case 0x131c84u: goto label_131c84;
        case 0x131c88u: goto label_131c88;
        case 0x131c8cu: goto label_131c8c;
        case 0x131c90u: goto label_131c90;
        case 0x131c94u: goto label_131c94;
        case 0x131c98u: goto label_131c98;
        case 0x131c9cu: goto label_131c9c;
        case 0x131ca0u: goto label_131ca0;
        case 0x131ca4u: goto label_131ca4;
        case 0x131ca8u: goto label_131ca8;
        case 0x131cacu: goto label_131cac;
        default: break;
    }

    ctx->pc = 0x131c40u;

label_131c40:
    // 0x131c40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x131c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_131c44:
    // 0x131c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_131c48:
    // 0x131c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_131c4c:
    // 0x131c4c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x131c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_131c50:
    // 0x131c50: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x131c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_131c54:
    // 0x131c54: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x131c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_131c58:
    // 0x131c58: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x131c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_131c5c:
    // 0x131c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131c60:
    // 0x131c60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131c64:
    // 0x131c64: 0xc04c73c  jal         func_131CF0
label_131c68:
    if (ctx->pc == 0x131C68u) {
        ctx->pc = 0x131C6Cu;
        goto label_131c6c;
    }
    ctx->pc = 0x131C64u;
    SET_GPR_U32(ctx, 31, 0x131C6Cu);
    ctx->pc = 0x131CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CF0u, 0x131C64u, 0x131C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C6Cu;
label_131c6c:
    // 0x131c6c: 0x3c100013  lui         $s0, 0x13
    ctx->pc = 0x131c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19 << 16));
label_131c70:
    // 0x131c70: 0x26101960  addiu       $s0, $s0, 0x1960
    ctx->pc = 0x131c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6496));
label_131c74:
    // 0x131c74: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x131c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_131c78:
    // 0x131c78: 0x200f809  jalr        $s0
label_131c7c:
    if (ctx->pc == 0x131C7Cu) {
        ctx->pc = 0x131C80u;
        goto label_131c80;
    }
    ctx->pc = 0x131C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x131C80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131C78u, 0x131C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x131C80u;
label_131c80:
    // 0x131c80: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x131c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_131c84:
    // 0x131c84: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x131c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_131c88:
    // 0x131c88: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x131c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_131c8c:
    // 0x131c8c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x131c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_131c90:
    // 0x131c90: 0xc04c72c  jal         func_131CB0
label_131c94:
    if (ctx->pc == 0x131C94u) {
        ctx->pc = 0x131C98u;
        goto label_131c98;
    }
    ctx->pc = 0x131C90u;
    SET_GPR_U32(ctx, 31, 0x131C98u);
    ctx->pc = 0x131CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CB0u, 0x131C90u, 0x131C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C98u;
label_131c98:
    // 0x131c98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_131c9c:
    // 0x131c9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_131ca0:
    // 0x131ca0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x131ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_131ca4:
    // 0x131ca4: 0x3e00008  jr          $ra
label_131ca8:
    if (ctx->pc == 0x131CA8u) {
        ctx->pc = 0x131CACu;
        goto label_131cac;
    }
    ctx->pc = 0x131CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131CACu;
label_131cac:
    // 0x131cac: 0x0  nop
    ctx->pc = 0x131cacu;
    // NOP
    ctx->pc = 0x131cb0u;
}
