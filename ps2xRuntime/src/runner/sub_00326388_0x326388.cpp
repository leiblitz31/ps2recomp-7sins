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

// Function: sub_00326388
// Address: 0x326388 - 0x326448
void sub_00326388_0x326388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326388_0x326388");
#endif

    switch (ctx->pc) {
        case 0x3263c0u: goto label_3263c0;
        case 0x326408u: goto label_326408;
        case 0x32641cu: goto label_32641c;
        case 0x326428u: goto label_326428;
        default: break;
    }

    ctx->pc = 0x326388u;

    // 0x326388: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x326388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32638c: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x32638cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x326390: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x326390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x326394: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x326394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x326398: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x326398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32639c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32639cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3263a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3263a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3263a4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3263a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3263a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3263a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3263ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3263acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3263b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3263b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3263b4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3263b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3263b8: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x3263b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x3263bc: 0x0  nop
    ctx->pc = 0x3263bcu;
    // NOP
label_3263c0:
    // 0x3263c0: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x3263c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3263c4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x3263c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3263c8: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3263C8u;
    {
        const bool branch_taken_0x3263c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x3263CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3263C8u;
        // 0x3263cc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3263c8) {
            ctx->pc = 0x3263D8u;
            goto label_3263d8;
        }
    }
    ctx->pc = 0x3263D0u;
    // 0x3263d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3263D0u;
    {
        const bool branch_taken_0x3263d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3263D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3263D0u;
        // 0x3263d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3263d0) {
            ctx->pc = 0x3263ECu;
            goto label_3263ec;
        }
    }
    ctx->pc = 0x3263D8u;
label_3263d8:
    // 0x3263d8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3263d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3263dc: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x3263dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3263e0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3263E0u;
    {
        const bool branch_taken_0x3263e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3263E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3263E0u;
        // 0x3263e4: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3263e0) {
            ctx->pc = 0x3263C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3263c0;
        }
    }
    ctx->pc = 0x3263E8u;
    // 0x3263e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3263e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3263ec:
    // 0x3263ec: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3263ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3263f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3263f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3263f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3263f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3263f8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3263F8u;
    {
        const bool branch_taken_0x3263f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3263FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3263F8u;
        // 0x3263fc: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3263f8) {
            ctx->pc = 0x32640Cu;
            goto label_32640c;
        }
    }
    ctx->pc = 0x326400u;
    // 0x326400: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x326400u;
    SET_GPR_U32(ctx, 31, 0x326408u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x326400u, 0x326408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326408u;
label_326408:
    // 0x326408: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x326408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_32640c:
    // 0x32640c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x32640cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x326410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326414: 0xc0c9b4e  jal         func_326D38
    ctx->pc = 0x326414u;
    SET_GPR_U32(ctx, 31, 0x32641Cu);
    ctx->pc = 0x326418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326414u;
    // 0x326418: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326D38u, 0x326414u, 0x32641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32641Cu;
label_32641c:
    // 0x32641c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32641cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326420: 0xc0c9b4e  jal         func_326D38
    ctx->pc = 0x326420u;
    SET_GPR_U32(ctx, 31, 0x326428u);
    ctx->pc = 0x326424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326420u;
    // 0x326424: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326D38u, 0x326420u, 0x326428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326428u;
label_326428:
    // 0x326428: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x326428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32642c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32642cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326430: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x326430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326434: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x326434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32643c: 0x3e00008  jr          $ra
    ctx->pc = 0x32643Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32643Cu;
        // 0x326440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32643Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326444u;
    // 0x326444: 0x0  nop
    ctx->pc = 0x326444u;
    // NOP
    ctx->pc = 0x326448u;
}
