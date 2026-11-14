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

// Function: sub_004AB538
// Address: 0x4ab538 - 0x4ab5c0
void sub_004AB538_0x4ab538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB538_0x4ab538");
#endif

    switch (ctx->pc) {
        case 0x4ab560u: goto label_4ab560;
        case 0x4ab57cu: goto label_4ab57c;
        case 0x4ab5a8u: goto label_4ab5a8;
        default: break;
    }

    ctx->pc = 0x4ab538u;

    // 0x4ab538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ab538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ab53c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4ab53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4ab540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ab540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ab544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ab544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ab548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ab54c: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x4ab54cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x4ab550: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x4ab550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4ab554: 0x50d1000d  beql        $a2, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x4AB554u;
    {
        const bool branch_taken_0x4ab554 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 17));
        if (branch_taken_0x4ab554) {
            ctx->pc = 0x4AB558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB554u;
            // 0x4ab558: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB58Cu;
            goto label_4ab58c;
        }
    }
    ctx->pc = 0x4AB55Cu;
    // 0x4ab55c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4ab55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4ab560:
    // 0x4ab560: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4ab560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab564: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x4ab564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4ab568: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ab568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ab56c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4ab56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ab570: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4ab570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4ab574: 0xc12ae6c  jal         func_4AB9B0
    ctx->pc = 0x4AB574u;
    SET_GPR_U32(ctx, 31, 0x4AB57Cu);
    ctx->pc = 0x4AB578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB574u;
    // 0x4ab578: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB9B0u, 0x4AB574u, 0x4AB57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB57Cu;
label_4ab57c:
    // 0x4ab57c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x4ab57cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4ab580: 0x54d1fff7  bnel        $a2, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4AB580u;
    {
        const bool branch_taken_0x4ab580 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        if (branch_taken_0x4ab580) {
            ctx->pc = 0x4AB584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB580u;
            // 0x4ab584: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab560;
        }
    }
    ctx->pc = 0x4AB588u;
    // 0x4ab588: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x4ab588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4ab58c:
    // 0x4ab58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ab58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab590: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4ab590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4ab594: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ab594u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ab598: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4ab598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4ab59c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4ab59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4ab5a0: 0xc12aeb6  jal         func_4ABAD8
    ctx->pc = 0x4AB5A0u;
    SET_GPR_U32(ctx, 31, 0x4AB5A8u);
    ctx->pc = 0x4AB5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB5A0u;
    // 0x4ab5a4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABAD8u, 0x4AB5A0u, 0x4AB5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB5A8u;
label_4ab5a8:
    // 0x4ab5a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4ab5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ab5ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ab5acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ab5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ab5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB5B4u;
        // 0x4ab5b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB5BCu;
    // 0x4ab5bc: 0x0  nop
    ctx->pc = 0x4ab5bcu;
    // NOP
    ctx->pc = 0x4ab5c0u;
}
