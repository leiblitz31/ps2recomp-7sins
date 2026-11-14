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

// Function: sub_0032A678
// Address: 0x32a678 - 0x32a778
void sub_0032A678_0x32a678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A678_0x32a678");
#endif

    switch (ctx->pc) {
        case 0x32a6acu: goto label_32a6ac;
        case 0x32a6c0u: goto label_32a6c0;
        case 0x32a6d0u: goto label_32a6d0;
        case 0x32a6f4u: goto label_32a6f4;
        case 0x32a71cu: goto label_32a71c;
        case 0x32a75cu: goto label_32a75c;
        default: break;
    }

    ctx->pc = 0x32a678u;

    // 0x32a678: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32a678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32a67c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x32a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x32a680: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32a680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32a684: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32a684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32a688: 0x24712318  addiu       $s1, $v1, 0x2318
    ctx->pc = 0x32a688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 8984));
    // 0x32a68c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32a68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x32a690: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32a690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32a694: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32a694u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F2328u));
    // 0x32a698: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x32A698u;
    {
        const bool branch_taken_0x32a698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A698u;
        // 0x32a69c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a698) {
            ctx->pc = 0x32A724u;
            goto label_32a724;
        }
    }
    ctx->pc = 0x32A6A0u;
    // 0x32a6a0: 0x24040116  addiu       $a0, $zero, 0x116
    ctx->pc = 0x32a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x32a6a4: 0xc106406  jal         func_419018
    ctx->pc = 0x32A6A4u;
    SET_GPR_U32(ctx, 31, 0x32A6ACu);
    ctx->pc = 0x32A6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A6A4u;
    // 0x32a6a8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419018u, 0x32A6A4u, 0x32A6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A6ACu;
label_32a6ac:
    // 0x32a6ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x32a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32a6b0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x32a6b0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x32a6b4: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x32a6b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x32a6b8: 0xc106406  jal         func_419018
    ctx->pc = 0x32A6B8u;
    SET_GPR_U32(ctx, 31, 0x32A6C0u);
    ctx->pc = 0x32A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A6B8u;
    // 0x32a6bc: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419018u, 0x32A6B8u, 0x32A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A6C0u;
label_32a6c0:
    // 0x32a6c0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x32a6c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x32a6c4: 0x36040004  ori         $a0, $s0, 0x4
    ctx->pc = 0x32a6c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x32a6c8: 0xc0ca9f8  jal         func_32A7E0
    ctx->pc = 0x32A6C8u;
    SET_GPR_U32(ctx, 31, 0x32A6D0u);
    ctx->pc = 0x32A6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A6C8u;
    // 0x32a6cc: 0x202200a  movz        $a0, $s0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A7E0u, 0x32A6C8u, 0x32A6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A6D0u;
label_32a6d0:
    // 0x32a6d0: 0x8f85a660  lw          $a1, -0x59A0($gp)
    ctx->pc = 0x32a6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944352)));
    // 0x32a6d4: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x32a6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x32a6d8: 0x8f87a664  lw          $a3, -0x599C($gp)
    ctx->pc = 0x32a6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944356)));
    // 0x32a6dc: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x32a6dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x32a6e0: 0x2508b278  addiu       $t0, $t0, -0x4D88
    ctx->pc = 0x32a6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947448));
    // 0x32a6e4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x32a6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x32a6e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x32a6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32a6ec: 0xc10408c  jal         func_410230
    ctx->pc = 0x32A6ECu;
    SET_GPR_U32(ctx, 31, 0x32A6F4u);
    ctx->pc = 0x32A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A6ECu;
    // 0x32a6f0: 0x35290123  ori         $t1, $t1, 0x123 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)291);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x32A6ECu, 0x32A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A6F4u;
label_32a6f4:
    // 0x32a6f4: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x32a6f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x32a6f8: 0x8f85a668  lw          $a1, -0x5998($gp)
    ctx->pc = 0x32a6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944360)));
    // 0x32a6fc: 0x8f87a66c  lw          $a3, -0x5994($gp)
    ctx->pc = 0x32a6fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944364)));
    // 0x32a700: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x32a700u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x32a704: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x32a704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x32a708: 0x2508b2a0  addiu       $t0, $t0, -0x4D60
    ctx->pc = 0x32a708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947488));
    // 0x32a70c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x32a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32a710: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x32a710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32a714: 0xc10408c  jal         func_410230
    ctx->pc = 0x32A714u;
    SET_GPR_U32(ctx, 31, 0x32A71Cu);
    ctx->pc = 0x32A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A714u;
    // 0x32a718: 0x35290123  ori         $t1, $t1, 0x123 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)291);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x32A714u, 0x32A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A71Cu;
label_32a71c:
    // 0x32a71c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x32a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x32a720: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32a720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_32a724:
    // 0x32a724: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x32a724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32a728: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x32a728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x32a72c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32a72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32a730: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x32a730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x32a734: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x32a734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x32a738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32a738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a73c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32a740: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x32a740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x32a744: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32a744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a748: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x32a748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x32a74c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x32a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x32a750: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x32a750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x32a754: 0xc0ca8de  jal         func_32A378
    ctx->pc = 0x32A754u;
    SET_GPR_U32(ctx, 31, 0x32A75Cu);
    ctx->pc = 0x32A758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A754u;
    // 0x32a758: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A378u, 0x32A754u, 0x32A75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A75Cu;
label_32a75c:
    // 0x32a75c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x32a75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a760: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32a760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32a764: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32a764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32a768: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32a768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a76c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32a76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a770: 0x3e00008  jr          $ra
    ctx->pc = 0x32A770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A770u;
        // 0x32a774: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A778u;
}
