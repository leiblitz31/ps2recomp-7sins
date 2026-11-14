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

// Function: sub_00291690
// Address: 0x291690 - 0x291750
void sub_00291690_0x291690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291690_0x291690");
#endif

    switch (ctx->pc) {
        case 0x2916c8u: goto label_2916c8;
        case 0x291704u: goto label_291704;
        case 0x291714u: goto label_291714;
        default: break;
    }

    ctx->pc = 0x291690u;

    // 0x291690: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x291690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x291694: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x291694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x291698: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x291698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29169c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2916a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2916a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2916a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2916a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2916a8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2916a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2916ac: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2916acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2916b0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2916b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2916b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2916b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2916b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2916b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2916bc: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2916bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2916c0: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2916C0u;
    SET_GPR_U32(ctx, 31, 0x2916C8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2916C0u, 0x2916C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2916C8u;
label_2916c8:
    // 0x2916c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2916c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2916cc: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2916CCu;
    {
        const bool branch_taken_0x2916cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2916cc) {
            ctx->pc = 0x291728u;
            goto label_291728;
        }
    }
    ctx->pc = 0x2916D4u;
    // 0x2916d4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2916d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2916d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2916d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2916dc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2916dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2916e0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2916e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2916e4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2916e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2916e8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2916e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2916ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2916ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2916f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2916f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2916f4: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x2916f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2916f8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2916f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2916fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2916FCu;
    {
        const bool branch_taken_0x2916fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2916fc) {
            ctx->pc = 0x291718u;
            goto label_291718;
        }
    }
    ctx->pc = 0x291704u;
label_291704:
    // 0x291704: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x291704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x291708: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x291708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29170c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x29170Cu;
    SET_GPR_U32(ctx, 31, 0x291714u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x29170Cu, 0x291714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291714u;
label_291714:
    // 0x291714: 0x26520024  addiu       $s2, $s2, 0x24
    ctx->pc = 0x291714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_291718:
    // 0x291718: 0x0  nop
    ctx->pc = 0x291718u;
    // NOP
    // 0x29171c: 0x1653fff9  bne         $s2, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29171Cu;
    {
        const bool branch_taken_0x29171c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x29171c) {
            ctx->pc = 0x291704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291704;
        }
    }
    ctx->pc = 0x291724u;
    // 0x291724: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x291724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_291728:
    // 0x291728: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x291728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29172c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29172cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291730: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x291730u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291734: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x291734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291738: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x291738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29173c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29173cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291740: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x291740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x291744: 0x3e00008  jr          $ra
    ctx->pc = 0x291744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29174Cu;
    // 0x29174c: 0x0  nop
    ctx->pc = 0x29174cu;
    // NOP
    ctx->pc = 0x291750u;
}
