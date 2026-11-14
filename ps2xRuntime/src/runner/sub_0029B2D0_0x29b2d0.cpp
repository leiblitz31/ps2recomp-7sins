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

// Function: sub_0029B2D0
// Address: 0x29b2d0 - 0x29b390
void sub_0029B2D0_0x29b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B2D0_0x29b2d0");
#endif

    switch (ctx->pc) {
        case 0x29b300u: goto label_29b300;
        case 0x29b330u: goto label_29b330;
        case 0x29b340u: goto label_29b340;
        default: break;
    }

    ctx->pc = 0x29b2d0u;

    // 0x29b2d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x29b2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29b2d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29b2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29b2d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29b2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29b2dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29b2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29b2e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29b2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29b2e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29b2e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b2ec: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x29b2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x29b2f0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x29b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29b2f4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x29b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29b2f8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x29B2F8u;
    SET_GPR_U32(ctx, 31, 0x29B300u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x29B2F8u, 0x29B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B300u;
label_29b300:
    // 0x29b300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29b300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b304: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x29B304u;
    {
        const bool branch_taken_0x29b304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b304) {
            ctx->pc = 0x29B368u;
            goto label_29b368;
        }
    }
    ctx->pc = 0x29B30Cu;
    // 0x29b30c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x29b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29b310: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29b310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29b314: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x29b314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b318: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x29b318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x29b31c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x29b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29b320: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x29b320u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29b324: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x29b324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b328: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29B328u;
    {
        const bool branch_taken_0x29b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b328) {
            ctx->pc = 0x29B35Cu;
            goto label_29b35c;
        }
    }
    ctx->pc = 0x29B330u;
label_29b330:
    // 0x29b330: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29b330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b334: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29b334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b338: 0xc0400e0  jal         func_100380
    ctx->pc = 0x29B338u;
    SET_GPR_U32(ctx, 31, 0x29B340u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x29B338u, 0x29B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B340u;
label_29b340:
    // 0x29b340: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x29b340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x29b344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B344u;
    {
        const bool branch_taken_0x29b344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b344) {
            ctx->pc = 0x29B354u;
            goto label_29b354;
        }
    }
    ctx->pc = 0x29B34Cu;
    // 0x29b34c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x29b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x29b350: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x29b350u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_29b354:
    // 0x29b354: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x29b354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x29b358: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29b358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_29b35c:
    // 0x29b35c: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x29B35Cu;
    {
        const bool branch_taken_0x29b35c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x29b35c) {
            ctx->pc = 0x29B330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b330;
        }
    }
    ctx->pc = 0x29B364u;
    // 0x29b364: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x29b364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29b368:
    // 0x29b368: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29b368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b36c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29b36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29b370: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29b370u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b374: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29b374u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b378: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29b378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b37c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b37cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b384: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x29b384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29b388: 0x3e00008  jr          $ra
    ctx->pc = 0x29B388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B390u;
}
