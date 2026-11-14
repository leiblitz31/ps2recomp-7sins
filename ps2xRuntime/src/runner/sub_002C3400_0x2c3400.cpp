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

// Function: sub_002C3400
// Address: 0x2c3400 - 0x2c3520
void sub_002C3400_0x2c3400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3400_0x2c3400");
#endif

    switch (ctx->pc) {
        case 0x2c3424u: goto label_2c3424;
        case 0x2c3430u: goto label_2c3430;
        case 0x2c3448u: goto label_2c3448;
        case 0x2c3454u: goto label_2c3454;
        case 0x2c346cu: goto label_2c346c;
        case 0x2c3484u: goto label_2c3484;
        case 0x2c34a4u: goto label_2c34a4;
        case 0x2c34b4u: goto label_2c34b4;
        case 0x2c34c8u: goto label_2c34c8;
        case 0x2c34d8u: goto label_2c34d8;
        case 0x2c34f0u: goto label_2c34f0;
        default: break;
    }

    ctx->pc = 0x2c3400u;

    // 0x2c3400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c3400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c3404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c3404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c3408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c340c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c340cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c3410: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2c3410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2c3414: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c3414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3418: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2c3418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2c341c: 0xc0afc98  jal         func_2BF260
    ctx->pc = 0x2C341Cu;
    SET_GPR_U32(ctx, 31, 0x2C3424u);
    ctx->pc = 0x2BF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF260u, 0x2C341Cu, 0x2C3424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3424u;
label_2c3424:
    // 0x2c3424: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c3424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3428: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C3428u;
    {
        const bool branch_taken_0x2c3428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3428) {
            ctx->pc = 0x2C345Cu;
            goto label_2c345c;
        }
    }
    ctx->pc = 0x2C3430u;
label_2c3430:
    // 0x2c3430: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c3430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c3434: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C3434u;
    {
        const bool branch_taken_0x2c3434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3434) {
            ctx->pc = 0x2C3458u;
            goto label_2c3458;
        }
    }
    ctx->pc = 0x2C343Cu;
    // 0x2c343c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c343cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c3440: 0xc0afcb0  jal         func_2BF2C0
    ctx->pc = 0x2C3440u;
    SET_GPR_U32(ctx, 31, 0x2C3448u);
    ctx->pc = 0x2BF2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF2C0u, 0x2C3440u, 0x2C3448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3448u;
label_2c3448:
    // 0x2c3448: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c3448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c344c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2C344Cu;
    SET_GPR_U32(ctx, 31, 0x2C3454u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2C344Cu, 0x2C3454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3454u;
label_2c3454:
    // 0x2c3454: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2c3454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2c3458:
    // 0x2c3458: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2c3458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2c345c:
    // 0x2c345c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c345cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3460: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2c3460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2c3464: 0xc0afc90  jal         func_2BF240
    ctx->pc = 0x2C3464u;
    SET_GPR_U32(ctx, 31, 0x2C346Cu);
    ctx->pc = 0x2BF240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF240u, 0x2C3464u, 0x2C346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C346Cu;
label_2c346c:
    // 0x2c346c: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2C346Cu;
    {
        const bool branch_taken_0x2c346c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c346c) {
            ctx->pc = 0x2C3430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3430;
        }
    }
    ctx->pc = 0x2C3474u;
    // 0x2c3474: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c3474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3478: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2c3478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2c347c: 0xc0afc4c  jal         func_2BF130
    ctx->pc = 0x2C347Cu;
    SET_GPR_U32(ctx, 31, 0x2C3484u);
    ctx->pc = 0x2BF130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF130u, 0x2C347Cu, 0x2C3484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3484u;
label_2c3484:
    // 0x2c3484: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c3484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3488: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x2c3488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2c348c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C348Cu;
    {
        const bool branch_taken_0x2c348c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c348c) {
            ctx->pc = 0x2C34BCu;
            goto label_2c34bc;
        }
    }
    ctx->pc = 0x2C3494u;
    // 0x2c3494: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c3494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3498: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2c3498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2c349c: 0xc0afc28  jal         func_2BF0A0
    ctx->pc = 0x2C349Cu;
    SET_GPR_U32(ctx, 31, 0x2C34A4u);
    ctx->pc = 0x2BF0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF0A0u, 0x2C349Cu, 0x2C34A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C34A4u;
label_2c34a4:
    // 0x2c34a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c34a8: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2c34a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2c34ac: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2C34ACu;
    SET_GPR_U32(ctx, 31, 0x2C34B4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2C34ACu, 0x2C34B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C34B4u;
label_2c34b4:
    // 0x2c34b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c34b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c34b8: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x2c34b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
label_2c34bc:
    // 0x2c34bc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2c34bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c34c0: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2C34C0u;
    SET_GPR_U32(ctx, 31, 0x2C34C8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2C34C0u, 0x2C34C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C34C8u;
label_2c34c8:
    // 0x2c34c8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2c34c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c34cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c34ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c34d0: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2C34D0u;
    SET_GPR_U32(ctx, 31, 0x2C34D8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2C34D0u, 0x2C34D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C34D8u;
label_2c34d8:
    // 0x2c34d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c34d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c34dc: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C34DCu;
    {
        const bool branch_taken_0x2c34dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c34dc) {
            ctx->pc = 0x2C34F4u;
            goto label_2c34f4;
        }
    }
    ctx->pc = 0x2C34E4u;
    // 0x2c34e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c34e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c34e8: 0xc0afab8  jal         func_2BEAE0
    ctx->pc = 0x2C34E8u;
    SET_GPR_U32(ctx, 31, 0x2C34F0u);
    ctx->pc = 0x2BEAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEAE0u, 0x2C34E8u, 0x2C34F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C34F0u;
label_2c34f0:
    // 0x2c34f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c34f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c34f4:
    // 0x2c34f4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2c34f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c34f8: 0xac71009c  sw          $s1, 0x9C($v1)
    ctx->pc = 0x2c34f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 17));
    // 0x2c34fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c34fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c3504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3508: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2c3508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c350c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C350Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C350Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3514u;
    // 0x2c3514: 0x0  nop
    ctx->pc = 0x2c3514u;
    // NOP
    // 0x2c3518: 0x0  nop
    ctx->pc = 0x2c3518u;
    // NOP
    // 0x2c351c: 0x0  nop
    ctx->pc = 0x2c351cu;
    // NOP
    ctx->pc = 0x2c3520u;
}
