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

// Function: sub_004897C0
// Address: 0x4897c0 - 0x4898a0
void sub_004897C0_0x4897c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004897C0_0x4897c0");
#endif

    switch (ctx->pc) {
        case 0x48980cu: goto label_48980c;
        case 0x48981cu: goto label_48981c;
        case 0x489838u: goto label_489838;
        case 0x489860u: goto label_489860;
        case 0x489878u: goto label_489878;
        default: break;
    }

    ctx->pc = 0x4897c0u;

    // 0x4897c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4897c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4897c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4897c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4897c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4897c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4897cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4897ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4897d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4897d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4897d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4897d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4897d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4897d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4897dc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x4897dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x4897e0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4897e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4897e4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4897E4u;
    {
        const bool branch_taken_0x4897e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4897e4) {
            ctx->pc = 0x489878u;
            goto label_489878;
        }
    }
    ctx->pc = 0x4897ECu;
    // 0x4897ec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4897ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4897f0: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x4897f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4897f4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4897F4u;
    {
        const bool branch_taken_0x4897f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4897f4) {
            ctx->pc = 0x48981Cu;
            goto label_48981c;
        }
    }
    ctx->pc = 0x4897FCu;
    // 0x4897fc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x4897fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x489800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x489800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489804: 0xc1083aa  jal         func_420EA8
    ctx->pc = 0x489804u;
    SET_GPR_U32(ctx, 31, 0x48980Cu);
    ctx->pc = 0x420EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420EA8u, 0x489804u, 0x48980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48980Cu;
label_48980c:
    // 0x48980c: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x48980cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x489810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x489810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489814: 0xc1067c6  jal         func_419F18
    ctx->pc = 0x489814u;
    SET_GPR_U32(ctx, 31, 0x48981Cu);
    ctx->pc = 0x419F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419F18u, 0x489814u, 0x48981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48981Cu;
label_48981c:
    // 0x48981c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x489820: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x489820u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x489824: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x489824u;
    {
        const bool branch_taken_0x489824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x489824) {
            ctx->pc = 0x489844u;
            goto label_489844;
        }
    }
    ctx->pc = 0x48982Cu;
    // 0x48982c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48982cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489830: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x489830u;
    SET_GPR_U32(ctx, 31, 0x489838u);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x489830u, 0x489838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489838u;
label_489838:
    // 0x489838: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x489838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48983c: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x48983cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x489840: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x489840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_489844:
    // 0x489844: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x489844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x489848: 0x8c500064  lw          $s0, 0x64($v0)
    ctx->pc = 0x489848u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x48984c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x48984Cu;
    {
        const bool branch_taken_0x48984c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x48984c) {
            ctx->pc = 0x48986Cu;
            goto label_48986c;
        }
    }
    ctx->pc = 0x489854u;
    // 0x489854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x489854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489858: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x489858u;
    SET_GPR_U32(ctx, 31, 0x489860u);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x489858u, 0x489860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489860u;
label_489860:
    // 0x489860: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x489860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x489864: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x489864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x489868: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x489868u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_48986c:
    // 0x48986c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x48986cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x489870: 0xc105fc4  jal         func_417F10
    ctx->pc = 0x489870u;
    SET_GPR_U32(ctx, 31, 0x489878u);
    ctx->pc = 0x417F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417F10u, 0x489870u, 0x489878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489878u;
label_489878:
    // 0x489878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x489878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48987c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x48987cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x489880: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x489880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x489884: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x489884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x489888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x489888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48988c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48988cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x489890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489894: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x489894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x489898: 0x3e00008  jr          $ra
    ctx->pc = 0x489898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4898A0u;
}
