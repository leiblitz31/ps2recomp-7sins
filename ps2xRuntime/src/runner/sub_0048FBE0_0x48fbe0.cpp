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

// Function: sub_0048FBE0
// Address: 0x48fbe0 - 0x48fca0
void sub_0048FBE0_0x48fbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FBE0_0x48fbe0");
#endif

    switch (ctx->pc) {
        case 0x48fc14u: goto label_48fc14;
        case 0x48fc24u: goto label_48fc24;
        case 0x48fc3cu: goto label_48fc3c;
        case 0x48fc50u: goto label_48fc50;
        case 0x48fc6cu: goto label_48fc6c;
        default: break;
    }

    ctx->pc = 0x48fbe0u;

    // 0x48fbe0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x48fbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x48fbe4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48fbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x48fbe8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48fbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48fbec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48fbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48fbf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48fbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48fbf4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x48fbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x48fbf8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x48fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x48fbfc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48fc00: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x48fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x48fc04: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x48fc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48fc08: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x48fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48fc0c: 0xc1240b8  jal         func_4902E0
    ctx->pc = 0x48FC0Cu;
    SET_GPR_U32(ctx, 31, 0x48FC14u);
    ctx->pc = 0x4902E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4902E0u, 0x48FC0Cu, 0x48FC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FC14u;
label_48fc14:
    // 0x48fc14: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x48fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48fc18: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x48fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48fc1c: 0xc123f6c  jal         func_48FDB0
    ctx->pc = 0x48FC1Cu;
    SET_GPR_U32(ctx, 31, 0x48FC24u);
    ctx->pc = 0x48FDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FDB0u, 0x48FC1Cu, 0x48FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FC24u;
label_48fc24:
    // 0x48fc24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48fc24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fc28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48fc2c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48fc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48fc30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48fc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fc34: 0xc04e51c  jal         func_139470
    ctx->pc = 0x48FC34u;
    SET_GPR_U32(ctx, 31, 0x48FC3Cu);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x48FC34u, 0x48FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FC3Cu;
label_48fc3c:
    // 0x48fc3c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x48fc3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48fc40: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x48fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48fc44: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x48fc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48fc48: 0xc123f28  jal         func_48FCA0
    ctx->pc = 0x48FC48u;
    SET_GPR_U32(ctx, 31, 0x48FC50u);
    ctx->pc = 0x48FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FCA0u, 0x48FC48u, 0x48FC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FC50u;
label_48fc50:
    // 0x48fc50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48fc50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fc54: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x48fc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x48fc58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48fc5c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48fc60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48fc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fc64: 0xc04e51c  jal         func_139470
    ctx->pc = 0x48FC64u;
    SET_GPR_U32(ctx, 31, 0x48FC6Cu);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x48FC64u, 0x48FC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FC6Cu;
label_48fc6c:
    // 0x48fc6c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x48fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x48fc70: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x48fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48fc74: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x48fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x48fc78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48fc7c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x48fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x48fc80: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x48fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x48fc84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48fc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48fc88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48fc88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48fc8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48fc8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48fc90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48fc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48fc94: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x48fc94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x48fc98: 0x3e00008  jr          $ra
    ctx->pc = 0x48FC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FCA0u;
}
