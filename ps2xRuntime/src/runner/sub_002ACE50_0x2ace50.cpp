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

// Function: sub_002ACE50
// Address: 0x2ace50 - 0x2acf20
void sub_002ACE50_0x2ace50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACE50_0x2ace50");
#endif

    switch (ctx->pc) {
        case 0x2ace84u: goto label_2ace84;
        case 0x2aceb8u: goto label_2aceb8;
        case 0x2acec8u: goto label_2acec8;
        default: break;
    }

    ctx->pc = 0x2ace50u;

    // 0x2ace50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ace50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ace54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ace54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ace58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ace58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ace5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ace5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ace60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ace60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ace64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ace64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ace68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ace68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ace6c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x2ace6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x2ace70: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2ace70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ace74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ace74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ace78: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2ace78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2ace7c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2ACE7Cu;
    SET_GPR_U32(ctx, 31, 0x2ACE84u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2ACE7Cu, 0x2ACE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE84u;
label_2ace84:
    // 0x2ace84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ace84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace88: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2ACE88u;
    {
        const bool branch_taken_0x2ace88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ace88) {
            ctx->pc = 0x2ACEF0u;
            goto label_2acef0;
        }
    }
    ctx->pc = 0x2ACE90u;
    // 0x2ace90: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2ace90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ace94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ace94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ace98: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2ace98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace9c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2ace9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2acea0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2acea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2acea4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2acea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2acea8: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x2acea8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2aceac: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2aceacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aceb0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2ACEB0u;
    {
        const bool branch_taken_0x2aceb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aceb0) {
            ctx->pc = 0x2ACEE4u;
            goto label_2acee4;
        }
    }
    ctx->pc = 0x2ACEB8u;
label_2aceb8:
    // 0x2aceb8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2aceb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2acebc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2acebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acec0: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2ACEC0u;
    SET_GPR_U32(ctx, 31, 0x2ACEC8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2ACEC0u, 0x2ACEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACEC8u;
label_2acec8:
    // 0x2acec8: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2acec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x2acecc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACECCu;
    {
        const bool branch_taken_0x2acecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acecc) {
            ctx->pc = 0x2ACEDCu;
            goto label_2acedc;
        }
    }
    ctx->pc = 0x2ACED4u;
    // 0x2aced4: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x2aced4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2aced8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2aced8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2acedc:
    // 0x2acedc: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x2acedcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2acee0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2acee0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2acee4:
    // 0x2acee4: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x2ACEE4u;
    {
        const bool branch_taken_0x2acee4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x2acee4) {
            ctx->pc = 0x2ACEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aceb8;
        }
    }
    ctx->pc = 0x2ACEECu;
    // 0x2aceec: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2aceecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2acef0:
    // 0x2acef0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2acef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acef4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2acef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2acef8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2acef8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2acefc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2acefcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2acf00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2acf00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acf04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2acf04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acf08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2acf08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acf0c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2acf0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2acf10: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACF18u;
    // 0x2acf18: 0x0  nop
    ctx->pc = 0x2acf18u;
    // NOP
    // 0x2acf1c: 0x0  nop
    ctx->pc = 0x2acf1cu;
    // NOP
    ctx->pc = 0x2acf20u;
}
