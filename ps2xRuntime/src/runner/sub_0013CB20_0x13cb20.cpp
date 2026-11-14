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

// Function: sub_0013CB20
// Address: 0x13cb20 - 0x13cbe0
void sub_0013CB20_0x13cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CB20_0x13cb20");
#endif

    switch (ctx->pc) {
        case 0x13cb54u: goto label_13cb54;
        case 0x13cb64u: goto label_13cb64;
        case 0x13cb7cu: goto label_13cb7c;
        case 0x13cb90u: goto label_13cb90;
        case 0x13cbacu: goto label_13cbac;
        default: break;
    }

    ctx->pc = 0x13cb20u;

    // 0x13cb20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13cb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13cb24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13cb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13cb28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13cb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13cb2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13cb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13cb30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13cb34: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x13cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x13cb38: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x13cb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x13cb3c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13cb40: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x13cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13cb44: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x13cb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13cb48: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13cb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13cb4c: 0xc04f464  jal         func_13D190
    ctx->pc = 0x13CB4Cu;
    SET_GPR_U32(ctx, 31, 0x13CB54u);
    ctx->pc = 0x13D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D190u, 0x13CB4Cu, 0x13CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CB54u;
label_13cb54:
    // 0x13cb54: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13cb58: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x13cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13cb5c: 0xc04f33c  jal         func_13CCF0
    ctx->pc = 0x13CB5Cu;
    SET_GPR_U32(ctx, 31, 0x13CB64u);
    ctx->pc = 0x13CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF0u, 0x13CB5Cu, 0x13CB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CB64u;
label_13cb64:
    // 0x13cb64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13cb64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13cb6c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x13cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13cb70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb74: 0xc04e51c  jal         func_139470
    ctx->pc = 0x13CB74u;
    SET_GPR_U32(ctx, 31, 0x13CB7Cu);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x13CB74u, 0x13CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CB7Cu;
label_13cb7c:
    // 0x13cb7c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x13cb7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13cb80: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13cb84: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x13cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13cb88: 0xc04f2f8  jal         func_13CBE0
    ctx->pc = 0x13CB88u;
    SET_GPR_U32(ctx, 31, 0x13CB90u);
    ctx->pc = 0x13CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CBE0u, 0x13CB88u, 0x13CB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CB90u;
label_13cb90:
    // 0x13cb90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13cb90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cb94: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x13cb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x13cb98: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13cb9c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x13cb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13cba0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13cba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cba4: 0xc04e51c  jal         func_139470
    ctx->pc = 0x13CBA4u;
    SET_GPR_U32(ctx, 31, 0x13CBACu);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x13CBA4u, 0x13CBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CBACu;
label_13cbac:
    // 0x13cbac: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x13cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x13cbb0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13cbb4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13cbb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13cbbc: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x13cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x13cbc0: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x13cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13cbc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13cbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13cbc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13cbc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13cbcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13cbccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cbd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cbd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cbd4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13cbd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13cbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x13CBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CBE0u;
}
