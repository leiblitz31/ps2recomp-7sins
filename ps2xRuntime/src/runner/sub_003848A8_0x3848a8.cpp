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

// Function: sub_003848A8
// Address: 0x3848a8 - 0x384b08
void sub_003848A8_0x3848a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003848A8_0x3848a8");
#endif

    switch (ctx->pc) {
        case 0x3848e0u: goto label_3848e0;
        case 0x3848f4u: goto label_3848f4;
        case 0x384908u: goto label_384908;
        case 0x384928u: goto label_384928;
        case 0x384944u: goto label_384944;
        case 0x384958u: goto label_384958;
        case 0x38496cu: goto label_38496c;
        case 0x384990u: goto label_384990;
        case 0x3849acu: goto label_3849ac;
        case 0x3849c0u: goto label_3849c0;
        case 0x3849d4u: goto label_3849d4;
        case 0x3849e4u: goto label_3849e4;
        case 0x384a08u: goto label_384a08;
        case 0x384a38u: goto label_384a38;
        case 0x384a50u: goto label_384a50;
        case 0x384aa8u: goto label_384aa8;
        case 0x384ac8u: goto label_384ac8;
        default: break;
    }

    ctx->pc = 0x3848a8u;

    // 0x3848a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3848a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3848ac: 0x8f82bd00  lw          $v0, -0x4300($gp)
    ctx->pc = 0x3848acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950144)));
    // 0x3848b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3848b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3848b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3848b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3848b8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3848b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3848bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3848bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3848c0: 0xc2a021  addu        $s4, $a2, $v0
    ctx->pc = 0x3848c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3848c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3848c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3848c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3848c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3848cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3848ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3848d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3848d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3848d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3848d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3848d8: 0xc103322  jal         func_40CC88
    ctx->pc = 0x3848D8u;
    SET_GPR_U32(ctx, 31, 0x3848E0u);
    ctx->pc = 0x3848DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3848D8u;
    // 0x3848dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3848D8u, 0x3848E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3848E0u;
label_3848e0:
    // 0x3848e0: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3848E0u;
    {
        const bool branch_taken_0x3848e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3848E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3848E0u;
        // 0x3848e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3848e0) {
            ctx->pc = 0x3849E4u;
            goto label_3849e4;
        }
    }
    ctx->pc = 0x3848E8u;
    // 0x3848e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3848e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3848ec: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x3848ECu;
    SET_GPR_U32(ctx, 31, 0x3848F4u);
    ctx->pc = 0x3848F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3848ECu;
    // 0x3848f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3848ECu, 0x3848F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3848F4u;
label_3848f4:
    // 0x3848f4: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3848F4u;
    {
        const bool branch_taken_0x3848f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3848F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3848F4u;
        // 0x3848f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3848f4) {
            ctx->pc = 0x3849E4u;
            goto label_3849e4;
        }
    }
    ctx->pc = 0x3848FCu;
    // 0x3848fc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3848fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x384900: 0x26900008  addiu       $s0, $s4, 0x8
    ctx->pc = 0x384900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x384904: 0x0  nop
    ctx->pc = 0x384904u;
    // NOP
label_384908:
    // 0x384908: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x384908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38490c: 0x2331804  sllv        $v1, $s3, $s1
    ctx->pc = 0x38490cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 17) & 0x1F));
    // 0x384910: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x384910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x384914: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x384914u;
    {
        const bool branch_taken_0x384914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384914u;
        // 0x384918: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384914) {
            ctx->pc = 0x384974u;
            goto label_384974;
        }
    }
    ctx->pc = 0x38491Cu;
    // 0x38491c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38491cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384920: 0xc0e11a6  jal         func_384698
    ctx->pc = 0x384920u;
    SET_GPR_U32(ctx, 31, 0x384928u);
    ctx->pc = 0x384924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384920u;
    // 0x384924: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384698u, 0x384920u, 0x384928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384928u;
label_384928:
    // 0x384928: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x384928u;
    {
        const bool branch_taken_0x384928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384928u;
        // 0x38492c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384928) {
            ctx->pc = 0x384AE8u;
            goto label_384ae8;
        }
    }
    ctx->pc = 0x384930u;
    // 0x384930: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x384930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x384934: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x384934u;
    {
        const bool branch_taken_0x384934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x384938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384934u;
        // 0x384938: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384934) {
            ctx->pc = 0x384974u;
            goto label_384974;
        }
    }
    ctx->pc = 0x38493Cu;
    // 0x38493c: 0xc0ef360  jal         func_3BCD80
    ctx->pc = 0x38493Cu;
    SET_GPR_U32(ctx, 31, 0x384944u);
    ctx->pc = 0x3BCD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCD80u, 0x38493Cu, 0x384944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384944u;
label_384944:
    // 0x384944: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x384944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x384948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x384948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38494c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x38494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x384950: 0xc0ef372  jal         func_3BCDC8
    ctx->pc = 0x384950u;
    SET_GPR_U32(ctx, 31, 0x384958u);
    ctx->pc = 0x384954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384950u;
    // 0x384954: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCDC8u, 0x384950u, 0x384958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384958u;
label_384958:
    // 0x384958: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x384958u;
    {
        const bool branch_taken_0x384958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384958u;
        // 0x38495c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384958) {
            ctx->pc = 0x3849DCu;
            goto label_3849dc;
        }
    }
    ctx->pc = 0x384960u;
    // 0x384960: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x384960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x384964: 0xc0eee8c  jal         func_3BBA30
    ctx->pc = 0x384964u;
    SET_GPR_U32(ctx, 31, 0x38496Cu);
    ctx->pc = 0x384968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384964u;
    // 0x384968: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBA30u, 0x384964u, 0x38496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38496Cu;
label_38496c:
    // 0x38496c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x38496Cu;
    {
        const bool branch_taken_0x38496c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38496Cu;
        // 0x384970: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38496c) {
            ctx->pc = 0x3849DCu;
            goto label_3849dc;
        }
    }
    ctx->pc = 0x384974u;
label_384974:
    // 0x384974: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x384974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384978: 0x531004  sllv        $v0, $s3, $v0
    ctx->pc = 0x384978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x38497c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x38497cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x384980: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x384980u;
    {
        const bool branch_taken_0x384980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x384984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384980u;
        // 0x384984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384980) {
            ctx->pc = 0x3849ECu;
            goto label_3849ec;
        }
    }
    ctx->pc = 0x384988u;
    // 0x384988: 0xc0e11a6  jal         func_384698
    ctx->pc = 0x384988u;
    SET_GPR_U32(ctx, 31, 0x384990u);
    ctx->pc = 0x38498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384988u;
    // 0x38498c: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384698u, 0x384988u, 0x384990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384990u;
label_384990:
    // 0x384990: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x384990u;
    {
        const bool branch_taken_0x384990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384990u;
        // 0x384994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384990) {
            ctx->pc = 0x384AE8u;
            goto label_384ae8;
        }
    }
    ctx->pc = 0x384998u;
    // 0x384998: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x384998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x38499c: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x38499Cu;
    {
        const bool branch_taken_0x38499c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38499c) {
            ctx->pc = 0x3849A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38499Cu;
            // 0x3849a0: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3849F0u;
            goto label_3849f0;
        }
    }
    ctx->pc = 0x3849A4u;
    // 0x3849a4: 0xc0ef360  jal         func_3BCD80
    ctx->pc = 0x3849A4u;
    SET_GPR_U32(ctx, 31, 0x3849ACu);
    ctx->pc = 0x3BCD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCD80u, 0x3849A4u, 0x3849ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3849ACu;
label_3849ac:
    // 0x3849ac: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3849acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3849b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3849b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3849b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3849b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3849b8: 0xc0ef372  jal         func_3BCDC8
    ctx->pc = 0x3849B8u;
    SET_GPR_U32(ctx, 31, 0x3849C0u);
    ctx->pc = 0x3849BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3849B8u;
    // 0x3849bc: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCDC8u, 0x3849B8u, 0x3849C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3849C0u;
label_3849c0:
    // 0x3849c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3849C0u;
    {
        const bool branch_taken_0x3849c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3849C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3849C0u;
        // 0x3849c4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3849c0) {
            ctx->pc = 0x3849DCu;
            goto label_3849dc;
        }
    }
    ctx->pc = 0x3849C8u;
    // 0x3849c8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3849c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3849cc: 0xc0eee8c  jal         func_3BBA30
    ctx->pc = 0x3849CCu;
    SET_GPR_U32(ctx, 31, 0x3849D4u);
    ctx->pc = 0x3849D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3849CCu;
    // 0x3849d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBA30u, 0x3849CCu, 0x3849D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3849D4u;
label_3849d4:
    // 0x3849d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3849D4u;
    {
        const bool branch_taken_0x3849d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3849D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3849D4u;
        // 0x3849d8: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3849d4) {
            ctx->pc = 0x3849F0u;
            goto label_3849f0;
        }
    }
    ctx->pc = 0x3849DCu;
label_3849dc:
    // 0x3849dc: 0xc0e1498  jal         func_385260
    ctx->pc = 0x3849DCu;
    SET_GPR_U32(ctx, 31, 0x3849E4u);
    ctx->pc = 0x3849E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3849DCu;
    // 0x3849e0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385260u, 0x3849DCu, 0x3849E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3849E4u;
label_3849e4:
    // 0x3849e4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3849E4u;
    {
        const bool branch_taken_0x3849e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3849E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3849E4u;
        // 0x3849e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3849e4) {
            ctx->pc = 0x384AE8u;
            goto label_384ae8;
        }
    }
    ctx->pc = 0x3849ECu;
label_3849ec:
    // 0x3849ec: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3849ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_3849f0:
    // 0x3849f0: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x3849f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3849f4: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x3849F4u;
    {
        const bool branch_taken_0x3849f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3849F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3849F4u;
        // 0x3849f8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3849f4) {
            ctx->pc = 0x384908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384908;
        }
    }
    ctx->pc = 0x3849FCu;
    // 0x3849fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3849fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a00: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x384a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x384a04: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x384a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_384a08:
    // 0x384a08: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x384a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x384a0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a14: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x384A14u;
    {
        const bool branch_taken_0x384a14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x384A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A14u;
        // 0x384a18: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384a14) {
            ctx->pc = 0x384A50u;
            goto label_384a50;
        }
    }
    ctx->pc = 0x384A1Cu;
    // 0x384a1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x384a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x384a20: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x384a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x384a24: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x384a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x384a28: 0x12240018  beq         $s1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x384A28u;
    {
        const bool branch_taken_0x384a28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x384A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A28u;
        // 0x384a2c: 0x8e080000  lw          $t0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384a28) {
            ctx->pc = 0x384A8Cu;
            goto label_384a8c;
        }
    }
    ctx->pc = 0x384A30u;
    // 0x384a30: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x384a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x384a34: 0x0  nop
    ctx->pc = 0x384a34u;
    // NOP
label_384a38:
    // 0x384a38: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x384a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x384a3c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x384a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x384a40: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x384A40u;
    {
        const bool branch_taken_0x384a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A40u;
        // 0x384a44: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x384a40) {
            ctx->pc = 0x384A5Cu;
            goto label_384a5c;
        }
    }
    ctx->pc = 0x384A48u;
    // 0x384a48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x384A48u;
    {
        const bool branch_taken_0x384a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A48u;
        // 0x384a4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384a48) {
            ctx->pc = 0x384A54u;
            goto label_384a54;
        }
    }
    ctx->pc = 0x384A50u;
label_384a50:
    // 0x384a50: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x384a50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_384a54:
    // 0x384a54: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x384a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x384a58: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x384a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_384a5c:
    // 0x384a5c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x384A5Cu;
    {
        const bool branch_taken_0x384a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A5Cu;
        // 0x384a60: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384a5c) {
            ctx->pc = 0x384A90u;
            goto label_384a90;
        }
    }
    ctx->pc = 0x384A64u;
    // 0x384a64: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x384a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x384a68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x384a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x384a6c: 0x10a0fff8  beqz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x384A6Cu;
    {
        const bool branch_taken_0x384a6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x384A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A6Cu;
        // 0x384a70: 0x72080  sll         $a0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384a6c) {
            ctx->pc = 0x384A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384a50;
        }
    }
    ctx->pc = 0x384A74u;
    // 0x384a74: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x384a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x384a78: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x384a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x384a7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x384a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x384a80: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x384a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x384a84: 0x5623ffec  bnel        $s1, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x384A84u;
    {
        const bool branch_taken_0x384a84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x384a84) {
            ctx->pc = 0x384A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384A84u;
            // 0x384a88: 0x8ca2002c  lw          $v0, 0x2C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384a38;
        }
    }
    ctx->pc = 0x384A8Cu;
label_384a8c:
    // 0x384a8c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x384a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_384a90:
    // 0x384a90: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x384A90u;
    {
        const bool branch_taken_0x384a90 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x384a90) {
            ctx->pc = 0x384AB8u;
            goto label_384ab8;
        }
    }
    ctx->pc = 0x384A98u;
    // 0x384a98: 0x5500000d  bnel        $t0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x384A98u;
    {
        const bool branch_taken_0x384a98 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x384a98) {
            ctx->pc = 0x384A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384A98u;
            // 0x384a9c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384AD0u;
            goto label_384ad0;
        }
    }
    ctx->pc = 0x384AA0u;
    // 0x384aa0: 0xc103db0  jal         func_40F6C0
    ctx->pc = 0x384AA0u;
    SET_GPR_U32(ctx, 31, 0x384AA8u);
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x384AA0u, 0x384AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384AA8u;
label_384aa8:
    // 0x384aa8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x384AA8u;
    {
        const bool branch_taken_0x384aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384AA8u;
        // 0x384aac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384aa8) {
            ctx->pc = 0x384ACCu;
            goto label_384acc;
        }
    }
    ctx->pc = 0x384AB0u;
    // 0x384ab0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x384AB0u;
    {
        const bool branch_taken_0x384ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384AB0u;
        // 0x384ab4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ab0) {
            ctx->pc = 0x384AE0u;
            goto label_384ae0;
        }
    }
    ctx->pc = 0x384AB8u;
label_384ab8:
    // 0x384ab8: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x384AB8u;
    {
        const bool branch_taken_0x384ab8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x384ab8) {
            ctx->pc = 0x384ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384AB8u;
            // 0x384abc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384AD0u;
            goto label_384ad0;
        }
    }
    ctx->pc = 0x384AC0u;
    // 0x384ac0: 0xc103da2  jal         func_40F688
    ctx->pc = 0x384AC0u;
    SET_GPR_U32(ctx, 31, 0x384AC8u);
    ctx->pc = 0x384AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384AC0u;
    // 0x384ac4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x384AC0u, 0x384AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384AC8u;
label_384ac8:
    // 0x384ac8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x384ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_384acc:
    // 0x384acc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x384accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_384ad0:
    // 0x384ad0: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x384ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x384ad4: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x384AD4u;
    {
        const bool branch_taken_0x384ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384AD4u;
        // 0x384ad8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ad4) {
            ctx->pc = 0x384A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384a08;
        }
    }
    ctx->pc = 0x384ADCu;
    // 0x384adc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x384adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_384ae0:
    // 0x384ae0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x384ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ae4: 0x246100b  movn        $v0, $s2, $a2
    ctx->pc = 0x384ae4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
label_384ae8:
    // 0x384ae8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x384ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x384aec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x384aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x384af0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x384af0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x384af4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x384af4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x384af8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x384af8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384afc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x384afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384b00: 0x3e00008  jr          $ra
    ctx->pc = 0x384B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B00u;
        // 0x384b04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384B08u;
}
