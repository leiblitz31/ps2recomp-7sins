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

// Function: sub_00385400
// Address: 0x385400 - 0x3855c0
void sub_00385400_0x385400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385400_0x385400");
#endif

    switch (ctx->pc) {
        case 0x385438u: goto label_385438;
        case 0x38544cu: goto label_38544c;
        case 0x385460u: goto label_385460;
        case 0x385474u: goto label_385474;
        case 0x385488u: goto label_385488;
        case 0x38549cu: goto label_38549c;
        case 0x3854b0u: goto label_3854b0;
        case 0x3854c4u: goto label_3854c4;
        case 0x385518u: goto label_385518;
        case 0x38552cu: goto label_38552c;
        case 0x385540u: goto label_385540;
        case 0x385554u: goto label_385554;
        case 0x385568u: goto label_385568;
        case 0x38557cu: goto label_38557c;
        case 0x385590u: goto label_385590;
        case 0x3855a4u: goto label_3855a4;
        default: break;
    }

    ctx->pc = 0x385400u;

    // 0x385400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x385400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x385404: 0x8f82bd00  lw          $v0, -0x4300($gp)
    ctx->pc = 0x385404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950144)));
    // 0x385408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x385408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38540c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38540cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385410: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x385410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x385414: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x385414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x385418: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x385418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x38541c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x385420: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x385420u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x385424: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x385424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x385428: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x385428u;
    {
        const bool branch_taken_0x385428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385428u;
        // 0x38542c: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385428) {
            ctx->pc = 0x385438u;
            goto label_385438;
        }
    }
    ctx->pc = 0x385430u;
    // 0x385430: 0xc0eef7c  jal         func_3BBDF0
    ctx->pc = 0x385430u;
    SET_GPR_U32(ctx, 31, 0x385438u);
    ctx->pc = 0x3BBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBDF0u, 0x385430u, 0x385438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385438u;
label_385438:
    // 0x385438: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x385438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38543c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38543Cu;
    {
        const bool branch_taken_0x38543c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38543c) {
            ctx->pc = 0x385440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38543Cu;
            // 0x385440: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385450u;
            goto label_385450;
        }
    }
    ctx->pc = 0x385444u;
    // 0x385444: 0xc0eef7c  jal         func_3BBDF0
    ctx->pc = 0x385444u;
    SET_GPR_U32(ctx, 31, 0x38544Cu);
    ctx->pc = 0x385448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385444u;
    // 0x385448: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBDF0u, 0x385444u, 0x38544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38544Cu;
label_38544c:
    // 0x38544c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x38544cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_385450:
    // 0x385450: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x385450u;
    {
        const bool branch_taken_0x385450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385450) {
            ctx->pc = 0x385454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385450u;
            // 0x385454: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385464u;
            goto label_385464;
        }
    }
    ctx->pc = 0x385458u;
    // 0x385458: 0xc0eef7c  jal         func_3BBDF0
    ctx->pc = 0x385458u;
    SET_GPR_U32(ctx, 31, 0x385460u);
    ctx->pc = 0x38545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385458u;
    // 0x38545c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBDF0u, 0x385458u, 0x385460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385460u;
label_385460:
    // 0x385460: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x385460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_385464:
    // 0x385464: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x385464u;
    {
        const bool branch_taken_0x385464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385464) {
            ctx->pc = 0x385468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385464u;
            // 0x385468: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385478u;
            goto label_385478;
        }
    }
    ctx->pc = 0x38546Cu;
    // 0x38546c: 0xc0eef7c  jal         func_3BBDF0
    ctx->pc = 0x38546Cu;
    SET_GPR_U32(ctx, 31, 0x385474u);
    ctx->pc = 0x385470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38546Cu;
    // 0x385470: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBDF0u, 0x38546Cu, 0x385474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385474u;
label_385474:
    // 0x385474: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x385474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_385478:
    // 0x385478: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x385478u;
    {
        const bool branch_taken_0x385478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385478) {
            ctx->pc = 0x38547Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385478u;
            // 0x38547c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38548Cu;
            goto label_38548c;
        }
    }
    ctx->pc = 0x385480u;
    // 0x385480: 0xc0eef7c  jal         func_3BBDF0
    ctx->pc = 0x385480u;
    SET_GPR_U32(ctx, 31, 0x385488u);
    ctx->pc = 0x385484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385480u;
    // 0x385484: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBDF0u, 0x385480u, 0x385488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385488u;
label_385488:
    // 0x385488: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x385488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_38548c:
    // 0x38548c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38548Cu;
    {
        const bool branch_taken_0x38548c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38548c) {
            ctx->pc = 0x385490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38548Cu;
            // 0x385490: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3854A0u;
            goto label_3854a0;
        }
    }
    ctx->pc = 0x385494u;
    // 0x385494: 0xc0eef7c  jal         func_3BBDF0
    ctx->pc = 0x385494u;
    SET_GPR_U32(ctx, 31, 0x38549Cu);
    ctx->pc = 0x385498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385494u;
    // 0x385498: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBDF0u, 0x385494u, 0x38549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38549Cu;
label_38549c:
    // 0x38549c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x38549cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3854a0:
    // 0x3854a0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3854A0u;
    {
        const bool branch_taken_0x3854a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3854a0) {
            ctx->pc = 0x3854A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3854A0u;
            // 0x3854a4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3854B4u;
            goto label_3854b4;
        }
    }
    ctx->pc = 0x3854A8u;
    // 0x3854a8: 0xc0eef7c  jal         func_3BBDF0
    ctx->pc = 0x3854A8u;
    SET_GPR_U32(ctx, 31, 0x3854B0u);
    ctx->pc = 0x3854ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3854A8u;
    // 0x3854ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBDF0u, 0x3854A8u, 0x3854B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3854B0u;
label_3854b0:
    // 0x3854b0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3854b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3854b4:
    // 0x3854b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3854B4u;
    {
        const bool branch_taken_0x3854b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3854B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3854B4u;
        // 0x3854b8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3854b4) {
            ctx->pc = 0x3854C8u;
            goto label_3854c8;
        }
    }
    ctx->pc = 0x3854BCu;
    // 0x3854bc: 0xc0eef7c  jal         func_3BBDF0
    ctx->pc = 0x3854BCu;
    SET_GPR_U32(ctx, 31, 0x3854C4u);
    ctx->pc = 0x3854C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3854BCu;
    // 0x3854c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBDF0u, 0x3854BCu, 0x3854C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3854C4u;
label_3854c4:
    // 0x3854c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3854c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3854c8:
    // 0x3854c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3854c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3854cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3854ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3854d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3854d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3854d4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x3854d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3854d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3854D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3854DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3854D8u;
        // 0x3854dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3854D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3854E0u;
    // 0x3854e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3854e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3854e4: 0x8f82bd00  lw          $v0, -0x4300($gp)
    ctx->pc = 0x3854e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950144)));
    // 0x3854e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3854e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3854ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3854ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3854f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3854f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3854f4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x3854f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3854f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3854f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3854fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3854fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x385500: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x385500u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x385504: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x385504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x385508: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x385508u;
    {
        const bool branch_taken_0x385508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385508u;
        // 0x38550c: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385508) {
            ctx->pc = 0x385518u;
            goto label_385518;
        }
    }
    ctx->pc = 0x385510u;
    // 0x385510: 0xc0eef00  jal         func_3BBC00
    ctx->pc = 0x385510u;
    SET_GPR_U32(ctx, 31, 0x385518u);
    ctx->pc = 0x3BBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBC00u, 0x385510u, 0x385518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385518u;
label_385518:
    // 0x385518: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x385518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38551c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38551Cu;
    {
        const bool branch_taken_0x38551c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38551c) {
            ctx->pc = 0x385520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38551Cu;
            // 0x385520: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385530u;
            goto label_385530;
        }
    }
    ctx->pc = 0x385524u;
    // 0x385524: 0xc0eef00  jal         func_3BBC00
    ctx->pc = 0x385524u;
    SET_GPR_U32(ctx, 31, 0x38552Cu);
    ctx->pc = 0x385528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385524u;
    // 0x385528: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBC00u, 0x385524u, 0x38552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38552Cu;
label_38552c:
    // 0x38552c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x38552cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_385530:
    // 0x385530: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x385530u;
    {
        const bool branch_taken_0x385530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385530) {
            ctx->pc = 0x385534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385530u;
            // 0x385534: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385544u;
            goto label_385544;
        }
    }
    ctx->pc = 0x385538u;
    // 0x385538: 0xc0eef00  jal         func_3BBC00
    ctx->pc = 0x385538u;
    SET_GPR_U32(ctx, 31, 0x385540u);
    ctx->pc = 0x38553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385538u;
    // 0x38553c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBC00u, 0x385538u, 0x385540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385540u;
label_385540:
    // 0x385540: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x385540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_385544:
    // 0x385544: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x385544u;
    {
        const bool branch_taken_0x385544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385544) {
            ctx->pc = 0x385548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385544u;
            // 0x385548: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385558u;
            goto label_385558;
        }
    }
    ctx->pc = 0x38554Cu;
    // 0x38554c: 0xc0eef00  jal         func_3BBC00
    ctx->pc = 0x38554Cu;
    SET_GPR_U32(ctx, 31, 0x385554u);
    ctx->pc = 0x385550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38554Cu;
    // 0x385550: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBC00u, 0x38554Cu, 0x385554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385554u;
label_385554:
    // 0x385554: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x385554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_385558:
    // 0x385558: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x385558u;
    {
        const bool branch_taken_0x385558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385558) {
            ctx->pc = 0x38555Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385558u;
            // 0x38555c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38556Cu;
            goto label_38556c;
        }
    }
    ctx->pc = 0x385560u;
    // 0x385560: 0xc0eef00  jal         func_3BBC00
    ctx->pc = 0x385560u;
    SET_GPR_U32(ctx, 31, 0x385568u);
    ctx->pc = 0x385564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385560u;
    // 0x385564: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBC00u, 0x385560u, 0x385568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385568u;
label_385568:
    // 0x385568: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x385568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_38556c:
    // 0x38556c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38556Cu;
    {
        const bool branch_taken_0x38556c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38556c) {
            ctx->pc = 0x385570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38556Cu;
            // 0x385570: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385580u;
            goto label_385580;
        }
    }
    ctx->pc = 0x385574u;
    // 0x385574: 0xc0eef00  jal         func_3BBC00
    ctx->pc = 0x385574u;
    SET_GPR_U32(ctx, 31, 0x38557Cu);
    ctx->pc = 0x385578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385574u;
    // 0x385578: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBC00u, 0x385574u, 0x38557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38557Cu;
label_38557c:
    // 0x38557c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x38557cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_385580:
    // 0x385580: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x385580u;
    {
        const bool branch_taken_0x385580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385580) {
            ctx->pc = 0x385584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385580u;
            // 0x385584: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385594u;
            goto label_385594;
        }
    }
    ctx->pc = 0x385588u;
    // 0x385588: 0xc0eef00  jal         func_3BBC00
    ctx->pc = 0x385588u;
    SET_GPR_U32(ctx, 31, 0x385590u);
    ctx->pc = 0x38558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385588u;
    // 0x38558c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBC00u, 0x385588u, 0x385590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385590u;
label_385590:
    // 0x385590: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x385590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_385594:
    // 0x385594: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385594u;
    {
        const bool branch_taken_0x385594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x385598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385594u;
        // 0x385598: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385594) {
            ctx->pc = 0x3855A8u;
            goto label_3855a8;
        }
    }
    ctx->pc = 0x38559Cu;
    // 0x38559c: 0xc0eef00  jal         func_3BBC00
    ctx->pc = 0x38559Cu;
    SET_GPR_U32(ctx, 31, 0x3855A4u);
    ctx->pc = 0x3855A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38559Cu;
    // 0x3855a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBC00u, 0x38559Cu, 0x3855A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3855A4u;
label_3855a4:
    // 0x3855a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3855a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3855a8:
    // 0x3855a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3855a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3855ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3855acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3855b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3855b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3855b4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x3855b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3855b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3855B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3855BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3855B8u;
        // 0x3855bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3855B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3855C0u;
}
