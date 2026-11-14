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

// Function: sub_00481020
// Address: 0x481020 - 0x4810e0
void sub_00481020_0x481020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481020_0x481020");
#endif

    switch (ctx->pc) {
        case 0x481050u: goto label_481050;
        case 0x481080u: goto label_481080;
        case 0x481090u: goto label_481090;
        default: break;
    }

    ctx->pc = 0x481020u;

    // 0x481020: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x481020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x481024: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x481024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x481028: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x481028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x48102c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48102cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x481030: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x481030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x481034: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x481034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x481038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x481038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48103c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x48103cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x481040: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x481040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x481044: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x481044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x481048: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x481048u;
    SET_GPR_U32(ctx, 31, 0x481050u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x481048u, 0x481050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481050u;
label_481050:
    // 0x481050: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x481050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481054: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x481054u;
    {
        const bool branch_taken_0x481054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x481054) {
            ctx->pc = 0x4810B8u;
            goto label_4810b8;
        }
    }
    ctx->pc = 0x48105Cu;
    // 0x48105c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x48105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x481060: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x481060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x481064: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x481064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481068: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x481068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x48106c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x48106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x481070: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x481070u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x481074: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x481074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481078: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x481078u;
    {
        const bool branch_taken_0x481078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x481078) {
            ctx->pc = 0x4810ACu;
            goto label_4810ac;
        }
    }
    ctx->pc = 0x481080u;
label_481080:
    // 0x481080: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x481080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x481084: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x481084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481088: 0xc0400e0  jal         func_100380
    ctx->pc = 0x481088u;
    SET_GPR_U32(ctx, 31, 0x481090u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x481088u, 0x481090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481090u;
label_481090:
    // 0x481090: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x481090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x481094: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x481094u;
    {
        const bool branch_taken_0x481094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x481094) {
            ctx->pc = 0x4810A4u;
            goto label_4810a4;
        }
    }
    ctx->pc = 0x48109Cu;
    // 0x48109c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x48109cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x4810a0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x4810a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_4810a4:
    // 0x4810a4: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x4810a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x4810a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4810a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4810ac:
    // 0x4810ac: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x4810ACu;
    {
        const bool branch_taken_0x4810ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x4810ac) {
            ctx->pc = 0x481080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_481080;
        }
    }
    ctx->pc = 0x4810B4u;
    // 0x4810b4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4810b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4810b8:
    // 0x4810b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4810b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4810bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4810bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4810c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4810c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4810c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4810c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4810c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4810c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4810cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4810ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4810d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4810d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4810d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x4810d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4810d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4810D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4810D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4810E0u;
}
