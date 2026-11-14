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

// Function: sub_004AE388
// Address: 0x4ae388 - 0x4ae4c0
void sub_004AE388_0x4ae388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE388_0x4ae388");
#endif

    switch (ctx->pc) {
        case 0x4ae3acu: goto label_4ae3ac;
        case 0x4ae3b4u: goto label_4ae3b4;
        case 0x4ae3bcu: goto label_4ae3bc;
        case 0x4ae400u: goto label_4ae400;
        case 0x4ae428u: goto label_4ae428;
        case 0x4ae478u: goto label_4ae478;
        case 0x4ae4a0u: goto label_4ae4a0;
        default: break;
    }

    ctx->pc = 0x4ae388u;

    // 0x4ae388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ae388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ae38c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ae38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ae390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ae394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae398: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4ae398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4ae39c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AE39Cu;
    {
        const bool branch_taken_0x4ae39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ae39c) {
            ctx->pc = 0x4AE3ACu;
            goto label_4ae3ac;
        }
    }
    ctx->pc = 0x4AE3A4u;
    // 0x4ae3a4: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4AE3A4u;
    SET_GPR_U32(ctx, 31, 0x4AE3ACu);
    ctx->pc = 0x4AE3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE3A4u;
    // 0x4ae3a8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4AE3A4u, 0x4AE3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE3ACu;
label_4ae3ac:
    // 0x4ae3ac: 0xc0bf66c  jal         func_2FD9B0
    ctx->pc = 0x4AE3ACu;
    SET_GPR_U32(ctx, 31, 0x4AE3B4u);
    ctx->pc = 0x4AE3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE3ACu;
    // 0x4ae3b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD9B0u, 0x4AE3ACu, 0x4AE3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE3B4u;
label_4ae3b4:
    // 0x4ae3b4: 0xc0bf65c  jal         func_2FD970
    ctx->pc = 0x4AE3B4u;
    SET_GPR_U32(ctx, 31, 0x4AE3BCu);
    ctx->pc = 0x4AE3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE3B4u;
    // 0x4ae3b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD970u, 0x4AE3B4u, 0x4AE3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE3BCu;
label_4ae3bc:
    // 0x4ae3bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ae3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae3c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE3C4u;
        // 0x4ae3c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE3CCu;
    // 0x4ae3cc: 0x0  nop
    ctx->pc = 0x4ae3ccu;
    // NOP
    // 0x4ae3d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ae3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ae3d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ae3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4ae3d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ae3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4ae3dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ae3dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae3e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ae3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4ae3e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae3e8: 0x8f82b8a4  lw          $v0, -0x475C($gp)
    ctx->pc = 0x4ae3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949028)));
    // 0x4ae3ec: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x4ae3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ae3f0: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AE3F0u;
    {
        const bool branch_taken_0x4ae3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4AE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE3F0u;
        // 0x4ae3f4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae3f0) {
            ctx->pc = 0x4AE408u;
            goto label_4ae408;
        }
    }
    ctx->pc = 0x4AE3F8u;
    // 0x4ae3f8: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x4AE3F8u;
    SET_GPR_U32(ctx, 31, 0x4AE400u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x4AE3F8u, 0x4AE400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE400u;
label_4ae400:
    // 0x4ae400: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4ae400u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae404: 0x0  nop
    ctx->pc = 0x4ae404u;
    // NOP
label_4ae408:
    // 0x4ae408: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x4ae408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x4ae40c: 0x8f82b8a4  lw          $v0, -0x475C($gp)
    ctx->pc = 0x4ae40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949028)));
    // 0x4ae410: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AE410u;
    {
        const bool branch_taken_0x4ae410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4AE414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE410u;
        // 0x4ae414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae410) {
            ctx->pc = 0x4AE428u;
            goto label_4ae428;
        }
    }
    ctx->pc = 0x4AE418u;
    // 0x4ae418: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AE418u;
    {
        const bool branch_taken_0x4ae418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AE41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE418u;
        // 0x4ae41c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae418) {
            ctx->pc = 0x4AE42Cu;
            goto label_4ae42c;
        }
    }
    ctx->pc = 0x4AE420u;
    // 0x4ae420: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x4AE420u;
    SET_GPR_U32(ctx, 31, 0x4AE428u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x4AE420u, 0x4AE428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE428u;
label_4ae428:
    // 0x4ae428: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4ae428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ae42c:
    // 0x4ae42c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ae42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ae430: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ae430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ae434: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ae434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae43c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE43Cu;
        // 0x4ae440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE444u;
    // 0x4ae444: 0x0  nop
    ctx->pc = 0x4ae444u;
    // NOP
    // 0x4ae448: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ae448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ae44c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ae44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4ae450: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ae450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4ae454: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ae454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae458: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ae458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4ae45c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae460: 0x8f82b8a4  lw          $v0, -0x475C($gp)
    ctx->pc = 0x4ae460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949028)));
    // 0x4ae464: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x4ae464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ae468: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AE468u;
    {
        const bool branch_taken_0x4ae468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4AE46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE468u;
        // 0x4ae46c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae468) {
            ctx->pc = 0x4AE480u;
            goto label_4ae480;
        }
    }
    ctx->pc = 0x4AE470u;
    // 0x4ae470: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x4AE470u;
    SET_GPR_U32(ctx, 31, 0x4AE478u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x4AE470u, 0x4AE478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE478u;
label_4ae478:
    // 0x4ae478: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4ae478u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae47c: 0x0  nop
    ctx->pc = 0x4ae47cu;
    // NOP
label_4ae480:
    // 0x4ae480: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x4ae480u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ae484: 0x8f82b8a4  lw          $v0, -0x475C($gp)
    ctx->pc = 0x4ae484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949028)));
    // 0x4ae488: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AE488u;
    {
        const bool branch_taken_0x4ae488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x4AE48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE488u;
        // 0x4ae48c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae488) {
            ctx->pc = 0x4AE4A0u;
            goto label_4ae4a0;
        }
    }
    ctx->pc = 0x4AE490u;
    // 0x4ae490: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AE490u;
    {
        const bool branch_taken_0x4ae490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE490u;
        // 0x4ae494: 0x2321023  subu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae490) {
            ctx->pc = 0x4AE4A4u;
            goto label_4ae4a4;
        }
    }
    ctx->pc = 0x4AE498u;
    // 0x4ae498: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x4AE498u;
    SET_GPR_U32(ctx, 31, 0x4AE4A0u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x4AE498u, 0x4AE4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE4A0u;
label_4ae4a0:
    // 0x4ae4a0: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x4ae4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_4ae4a4:
    // 0x4ae4a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ae4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ae4a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ae4a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ae4ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ae4acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae4b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE4B4u;
        // 0x4ae4b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE4BCu;
    // 0x4ae4bc: 0x0  nop
    ctx->pc = 0x4ae4bcu;
    // NOP
    ctx->pc = 0x4ae4c0u;
}
