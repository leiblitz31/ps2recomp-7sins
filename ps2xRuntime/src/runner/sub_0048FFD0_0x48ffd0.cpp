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

// Function: sub_0048FFD0
// Address: 0x48ffd0 - 0x490100
void sub_0048FFD0_0x48ffd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FFD0_0x48ffd0");
#endif

    switch (ctx->pc) {
        case 0x490014u: goto label_490014;
        case 0x49002cu: goto label_49002c;
        case 0x490050u: goto label_490050;
        case 0x490064u: goto label_490064;
        case 0x490088u: goto label_490088;
        case 0x4900a8u: goto label_4900a8;
        default: break;
    }

    ctx->pc = 0x48ffd0u;

    // 0x48ffd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x48ffd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x48ffd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x48ffd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x48ffd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48ffd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x48ffdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48ffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x48ffe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48ffe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48ffe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48ffe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48ffe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48ffe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48ffec: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x48ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x48fff0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x48fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x48fff4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x48fff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48fff8: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x48fff8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48fffc: 0x12400034  beqz        $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x48FFFCu;
    {
        const bool branch_taken_0x48fffc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x48fffc) {
            ctx->pc = 0x4900D0u;
            goto label_4900d0;
        }
    }
    ctx->pc = 0x490004u;
    // 0x490004: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x490004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x490008: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x490008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x49000c: 0xc123f6c  jal         func_48FDB0
    ctx->pc = 0x49000Cu;
    SET_GPR_U32(ctx, 31, 0x490014u);
    ctx->pc = 0x48FDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FDB0u, 0x49000Cu, 0x490014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490014u;
label_490014:
    // 0x490014: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x490014u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490018: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x490018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49001c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x49001cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x490020: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x490020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490024: 0xc04e51c  jal         func_139470
    ctx->pc = 0x490024u;
    SET_GPR_U32(ctx, 31, 0x49002Cu);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x490024u, 0x49002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49002Cu;
label_49002c:
    // 0x49002c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x49002cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x490030: 0x16120012  bne         $s0, $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x490030u;
    {
        const bool branch_taken_0x490030 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x490030) {
            ctx->pc = 0x49007Cu;
            goto label_49007c;
        }
    }
    ctx->pc = 0x490038u;
    // 0x490038: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x490038u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49003c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x49003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x490040: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x490040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x490044: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x490044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490048: 0xc04e51c  jal         func_139470
    ctx->pc = 0x490048u;
    SET_GPR_U32(ctx, 31, 0x490050u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x490048u, 0x490050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490050u;
label_490050:
    // 0x490050: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x490050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x490054: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x490054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x490058: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x490058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49005c: 0xc123fd4  jal         func_48FF50
    ctx->pc = 0x49005Cu;
    SET_GPR_U32(ctx, 31, 0x490064u);
    ctx->pc = 0x48FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FF50u, 0x49005Cu, 0x490064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490064u;
label_490064:
    // 0x490064: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x490064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x490068: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x490068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x49006c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49006cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x490070: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x490070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x490074: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x490074u;
    {
        const bool branch_taken_0x490074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490074) {
            ctx->pc = 0x4900D0u;
            goto label_4900d0;
        }
    }
    ctx->pc = 0x49007Cu;
label_49007c:
    // 0x49007c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x49007cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x490080: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x490080u;
    {
        const bool branch_taken_0x490080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490080) {
            ctx->pc = 0x4900C8u;
            goto label_4900c8;
        }
    }
    ctx->pc = 0x490088u;
label_490088:
    // 0x490088: 0x1632000d  bne         $s1, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x490088u;
    {
        const bool branch_taken_0x490088 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x490088) {
            ctx->pc = 0x4900C0u;
            goto label_4900c0;
        }
    }
    ctx->pc = 0x490090u;
    // 0x490090: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x490090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x490094: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x490094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x490098: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x490098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49009c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49009cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4900a0: 0xc123fd4  jal         func_48FF50
    ctx->pc = 0x4900A0u;
    SET_GPR_U32(ctx, 31, 0x4900A8u);
    ctx->pc = 0x48FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FF50u, 0x4900A0u, 0x4900A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4900A8u;
label_4900a8:
    // 0x4900a8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x4900a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4900ac: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x4900acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4900b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4900b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4900b4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4900b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4900b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4900B8u;
    {
        const bool branch_taken_0x4900b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4900b8) {
            ctx->pc = 0x4900D0u;
            goto label_4900d0;
        }
    }
    ctx->pc = 0x4900C0u;
label_4900c0:
    // 0x4900c0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4900c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4900c4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x4900c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4900c8:
    // 0x4900c8: 0x1620ffef  bnez        $s1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4900C8u;
    {
        const bool branch_taken_0x4900c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4900c8) {
            ctx->pc = 0x490088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_490088;
        }
    }
    ctx->pc = 0x4900D0u;
label_4900d0:
    // 0x4900d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4900d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4900d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4900d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4900d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4900d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4900dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4900dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4900e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4900e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4900e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4900e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4900e8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x4900e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x4900ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4900ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4900ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4900F4u;
    // 0x4900f4: 0x0  nop
    ctx->pc = 0x4900f4u;
    // NOP
    // 0x4900f8: 0x0  nop
    ctx->pc = 0x4900f8u;
    // NOP
    // 0x4900fc: 0x0  nop
    ctx->pc = 0x4900fcu;
    // NOP
    ctx->pc = 0x490100u;
}
