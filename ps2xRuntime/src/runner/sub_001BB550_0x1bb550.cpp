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

// Function: sub_001BB550
// Address: 0x1bb550 - 0x1bb5f0
void sub_001BB550_0x1bb550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB550_0x1bb550");
#endif

    switch (ctx->pc) {
        case 0x1bb574u: goto label_1bb574;
        case 0x1bb588u: goto label_1bb588;
        case 0x1bb5a4u: goto label_1bb5a4;
        default: break;
    }

    ctx->pc = 0x1bb550u;

    // 0x1bb550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bb550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bb554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bb554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bb558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bb55c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1bb55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1bb560: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bb560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bb564: 0x8c42be5c  lw          $v0, -0x41A4($v0)
    ctx->pc = 0x1bb564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE5Cu));
    // 0x1bb568: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1bb568u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bb56c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x1BB56Cu;
    SET_GPR_U32(ctx, 31, 0x1BB574u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1BB56Cu, 0x1BB574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB574u;
label_1bb574:
    // 0x1bb574: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1bb574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb578: 0xac6200b4  sw          $v0, 0xB4($v1)
    ctx->pc = 0x1bb578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 2));
    // 0x1bb57c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bb57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb580: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BB580u;
    {
        const bool branch_taken_0x1bb580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb580) {
            ctx->pc = 0x1BB5BCu;
            goto label_1bb5bc;
        }
    }
    ctx->pc = 0x1BB588u;
label_1bb588:
    // 0x1bb588: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bb588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bb58c: 0x8c43be58  lw          $v1, -0x41A8($v0)
    ctx->pc = 0x1bb58cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1bb590: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1bb590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bb594: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bb598: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1bb598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bb59c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x1BB59Cu;
    SET_GPR_U32(ctx, 31, 0x1BB5A4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1BB59Cu, 0x1BB5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB5A4u;
label_1bb5a4:
    // 0x1bb5a4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1bb5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb5a8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1bb5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bb5ac: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1bb5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1bb5b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bb5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bb5b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1bb5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1bb5b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bb5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bb5bc:
    // 0x1bb5bc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bb5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bb5c0: 0x8c63be5c  lw          $v1, -0x41A4($v1)
    ctx->pc = 0x1bb5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE5Cu));
    // 0x1bb5c4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1bb5c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bb5c8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1BB5C8u;
    {
        const bool branch_taken_0x1bb5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb5c8) {
            ctx->pc = 0x1BB588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb588;
        }
    }
    ctx->pc = 0x1BB5D0u;
    // 0x1bb5d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bb5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb5d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb5d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb5d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1bb5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bb5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB5E4u;
    // 0x1bb5e4: 0x0  nop
    ctx->pc = 0x1bb5e4u;
    // NOP
    // 0x1bb5e8: 0x0  nop
    ctx->pc = 0x1bb5e8u;
    // NOP
    // 0x1bb5ec: 0x0  nop
    ctx->pc = 0x1bb5ecu;
    // NOP
    ctx->pc = 0x1bb5f0u;
}
