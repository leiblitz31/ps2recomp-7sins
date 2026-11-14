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

// Function: sub_002E7B90
// Address: 0x2e7b90 - 0x2e7c80
void sub_002E7B90_0x2e7b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7B90_0x2e7b90");
#endif

    switch (ctx->pc) {
        case 0x2e7bc0u: goto label_2e7bc0;
        case 0x2e7bccu: goto label_2e7bcc;
        case 0x2e7bdcu: goto label_2e7bdc;
        case 0x2e7becu: goto label_2e7bec;
        case 0x2e7c04u: goto label_2e7c04;
        case 0x2e7c24u: goto label_2e7c24;
        case 0x2e7c54u: goto label_2e7c54;
        default: break;
    }

    ctx->pc = 0x2e7b90u;

    // 0x2e7b90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e7b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e7b94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e7b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e7b98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e7b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e7b9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e7b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e7ba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e7ba4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e7ba8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2e7ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2e7bac: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2e7bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2e7bb0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e7bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7bb4: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e7bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2e7bb8: 0xc0b9a28  jal         func_2E68A0
    ctx->pc = 0x2E7BB8u;
    SET_GPR_U32(ctx, 31, 0x2E7BC0u);
    ctx->pc = 0x2E68A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68A0u, 0x2E7BB8u, 0x2E7BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7BC0u;
label_2e7bc0:
    // 0x2e7bc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7bc4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2E7BC4u;
    {
        const bool branch_taken_0x2e7bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7bc4) {
            ctx->pc = 0x2E7C44u;
            goto label_2e7c44;
        }
    }
    ctx->pc = 0x2E7BCCu;
label_2e7bcc:
    // 0x2e7bcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e7bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e7bd0: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2e7bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e7bd4: 0xc044598  jal         func_111660
    ctx->pc = 0x2E7BD4u;
    SET_GPR_U32(ctx, 31, 0x2E7BDCu);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x2E7BD4u, 0x2E7BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7BDCu;
label_2e7bdc:
    // 0x2e7bdc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e7bdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7be0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e7be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7be4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E7BE4u;
    {
        const bool branch_taken_0x2e7be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7be4) {
            ctx->pc = 0x2E7C34u;
            goto label_2e7c34;
        }
    }
    ctx->pc = 0x2E7BECu;
label_2e7bec:
    // 0x2e7bec: 0x8fb30060  lw          $s3, 0x60($sp)
    ctx->pc = 0x2e7becu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e7bf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e7bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e7bf4: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2e7bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e7bf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e7bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7bfc: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x2E7BFCu;
    SET_GPR_U32(ctx, 31, 0x2E7C04u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x2E7BFCu, 0x2E7C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C04u;
label_2e7c04:
    // 0x2e7c04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e7c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7c08: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E7C08u;
    {
        const bool branch_taken_0x2e7c08 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7c08) {
            ctx->pc = 0x2E7C30u;
            goto label_2e7c30;
        }
    }
    ctx->pc = 0x2E7C10u;
    // 0x2e7c10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e7c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e7c14: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x2e7c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x2e7c18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7c1c: 0xc09d660  jal         func_275980
    ctx->pc = 0x2E7C1Cu;
    SET_GPR_U32(ctx, 31, 0x2E7C24u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2E7C1Cu, 0x2E7C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C24u;
label_2e7c24:
    // 0x2e7c24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e7c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7c28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E7C28u;
    {
        const bool branch_taken_0x2e7c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7c28) {
            ctx->pc = 0x2E7C60u;
            goto label_2e7c60;
        }
    }
    ctx->pc = 0x2E7C30u;
label_2e7c30:
    // 0x2e7c30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e7c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e7c34:
    // 0x2e7c34: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x2e7c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2e7c38: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2E7C38u;
    {
        const bool branch_taken_0x2e7c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7c38) {
            ctx->pc = 0x2E7BECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7bec;
        }
    }
    ctx->pc = 0x2E7C40u;
    // 0x2e7c40: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2e7c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2e7c44:
    // 0x2e7c44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e7c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7c48: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e7c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2e7c4c: 0xc0b9a20  jal         func_2E6880
    ctx->pc = 0x2E7C4Cu;
    SET_GPR_U32(ctx, 31, 0x2E7C54u);
    ctx->pc = 0x2E6880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6880u, 0x2E7C4Cu, 0x2E7C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7C54u;
label_2e7c54:
    // 0x2e7c54: 0x1602ffdd  bne         $s0, $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2E7C54u;
    {
        const bool branch_taken_0x2e7c54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7c54) {
            ctx->pc = 0x2E7BCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7bcc;
        }
    }
    ctx->pc = 0x2E7C5Cu;
    // 0x2e7c5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e7c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7c60:
    // 0x2e7c60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e7c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e7c64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e7c64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7c68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e7c68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7c6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7c70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7c74: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2e7c74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e7c78: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7C80u;
}
