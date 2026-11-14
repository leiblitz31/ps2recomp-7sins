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

// Function: sub_004A6088
// Address: 0x4a6088 - 0x4a6110
void sub_004A6088_0x4a6088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6088_0x4a6088");
#endif

    switch (ctx->pc) {
        case 0x4a60bcu: goto label_4a60bc;
        case 0x4a60f0u: goto label_4a60f0;
        default: break;
    }

    ctx->pc = 0x4a6088u;

    // 0x4a6088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a6088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a608c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a608cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a6090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a6090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a6094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a6094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6098: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x4a6098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4a609c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4a609cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4a60a0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A60A0u;
    {
        const bool branch_taken_0x4a60a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a60a0) {
            ctx->pc = 0x4A60A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A60A0u;
            // 0x4a60a4: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A60C0u;
            goto label_4a60c0;
        }
    }
    ctx->pc = 0x4A60A8u;
    // 0x4a60a8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4a60a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4a60ac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A60ACu;
    {
        const bool branch_taken_0x4a60ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a60ac) {
            ctx->pc = 0x4A60B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A60ACu;
            // 0x4a60b0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A60C0u;
            goto label_4a60c0;
        }
    }
    ctx->pc = 0x4A60B4u;
    // 0x4a60b4: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4A60B4u;
    SET_GPR_U32(ctx, 31, 0x4A60BCu);
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A60B4u, 0x4A60BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A60BCu;
label_4a60bc:
    // 0x4a60bc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x4a60bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_4a60c0:
    // 0x4a60c0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4a60c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x4a60c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a60c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a60c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a60c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a60cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A60CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A60D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A60CCu;
        // 0x4a60d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A60CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A60D4u;
    // 0x4a60d4: 0x0  nop
    ctx->pc = 0x4a60d4u;
    // NOP
    // 0x4a60d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a60d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a60dc: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a60dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a60e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a60e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a60e4: 0x24a52600  addiu       $a1, $a1, 0x2600
    ctx->pc = 0x4a60e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
    // 0x4a60e8: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A60E8u;
    SET_GPR_U32(ctx, 31, 0x4A60F0u);
    ctx->pc = 0x4A60ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A60E8u;
    // 0x4a60ec: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A60E8u, 0x4A60F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A60F0u;
label_4a60f0:
    // 0x4a60f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A60F0u;
    {
        const bool branch_taken_0x4a60f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A60F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A60F0u;
        // 0x4a60f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a60f0) {
            ctx->pc = 0x4A6100u;
            goto label_4a6100;
        }
    }
    ctx->pc = 0x4A60F8u;
    // 0x4a60f8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4a60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x4a60fc: 0x244260d0  addiu       $v0, $v0, 0x60D0
    ctx->pc = 0x4a60fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24784));
label_4a6100:
    // 0x4a6100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a6100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6104: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6104u;
        // 0x4a6108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A610Cu;
    // 0x4a610c: 0x0  nop
    ctx->pc = 0x4a610cu;
    // NOP
    ctx->pc = 0x4a6110u;
}
