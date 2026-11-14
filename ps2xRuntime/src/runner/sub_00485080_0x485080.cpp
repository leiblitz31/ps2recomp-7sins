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

// Function: sub_00485080
// Address: 0x485080 - 0x485140
void sub_00485080_0x485080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485080_0x485080");
#endif

    switch (ctx->pc) {
        case 0x4850b0u: goto label_4850b0;
        case 0x4850e0u: goto label_4850e0;
        case 0x4850f0u: goto label_4850f0;
        default: break;
    }

    ctx->pc = 0x485080u;

    // 0x485080: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x485080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x485084: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x485084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x485088: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x485088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x48508c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x485090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x485090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x485094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x485094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x485098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x485098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48509c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x48509cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x4850a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x4850a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4850a4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4850a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4850a8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x4850A8u;
    SET_GPR_U32(ctx, 31, 0x4850B0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x4850A8u, 0x4850B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4850B0u;
label_4850b0:
    // 0x4850b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4850b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4850b4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4850B4u;
    {
        const bool branch_taken_0x4850b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4850b4) {
            ctx->pc = 0x485118u;
            goto label_485118;
        }
    }
    ctx->pc = 0x4850BCu;
    // 0x4850bc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x4850bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4850c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4850c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4850c4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x4850c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4850c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4850c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4850cc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x4850ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4850d0: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x4850d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4850d4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x4850d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4850d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4850D8u;
    {
        const bool branch_taken_0x4850d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4850d8) {
            ctx->pc = 0x48510Cu;
            goto label_48510c;
        }
    }
    ctx->pc = 0x4850E0u;
label_4850e0:
    // 0x4850e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4850e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4850e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4850e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4850e8: 0xc0400e0  jal         func_100380
    ctx->pc = 0x4850E8u;
    SET_GPR_U32(ctx, 31, 0x4850F0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x4850E8u, 0x4850F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4850F0u;
label_4850f0:
    // 0x4850f0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x4850f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x4850f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4850F4u;
    {
        const bool branch_taken_0x4850f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4850f4) {
            ctx->pc = 0x485104u;
            goto label_485104;
        }
    }
    ctx->pc = 0x4850FCu;
    // 0x4850fc: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x4850fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x485100: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x485100u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_485104:
    // 0x485104: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x485104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x485108: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x485108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_48510c:
    // 0x48510c: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x48510Cu;
    {
        const bool branch_taken_0x48510c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x48510c) {
            ctx->pc = 0x4850E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4850e0;
        }
    }
    ctx->pc = 0x485114u;
    // 0x485114: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x485114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_485118:
    // 0x485118: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x485118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48511c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x48511cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x485120: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x485120u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x485124: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x485124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x485128: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x485128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48512c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48512cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485134: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x485134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x485138: 0x3e00008  jr          $ra
    ctx->pc = 0x485138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485140u;
}
