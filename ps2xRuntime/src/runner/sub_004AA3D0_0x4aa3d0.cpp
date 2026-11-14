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

// Function: sub_004AA3D0
// Address: 0x4aa3d0 - 0x4aa4c8
void sub_004AA3D0_0x4aa3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA3D0_0x4aa3d0");
#endif

    switch (ctx->pc) {
        case 0x4aa428u: goto label_4aa428;
        case 0x4aa440u: goto label_4aa440;
        case 0x4aa454u: goto label_4aa454;
        default: break;
    }

    ctx->pc = 0x4aa3d0u;

    // 0x4aa3d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aa3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aa3d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4aa3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4aa3d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4aa3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4aa3dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4aa3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa3e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aa3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aa3e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4aa3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4aa3e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4aa3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4aa3ec: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x4AA3ECu;
    {
        const bool branch_taken_0x4aa3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa3ec) {
            ctx->pc = 0x4AA3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AA3ECu;
            // 0x4aa3f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AA4B8u;
            goto label_4aa4b8;
        }
    }
    ctx->pc = 0x4AA3F4u;
    // 0x4aa3f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4aa3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aa3f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4aa3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4aa3fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4aa3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4aa400: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4aa400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aa404: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4aa404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4aa408: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4aa408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x4aa40c: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x4aa40cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4aa410: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4AA410u;
    {
        const bool branch_taken_0x4aa410 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA410u;
        // 0x4aa414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa410) {
            ctx->pc = 0x4AA458u;
            goto label_4aa458;
        }
    }
    ctx->pc = 0x4AA418u;
    // 0x4aa418: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4aa418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4aa41c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4aa41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4aa420: 0xc126464  jal         func_499190
    ctx->pc = 0x4AA420u;
    SET_GPR_U32(ctx, 31, 0x4AA428u);
    ctx->pc = 0x4AA424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA420u;
    // 0x4aa424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499190u, 0x4AA420u, 0x4AA428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA428u;
label_4aa428:
    // 0x4aa428: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AA428u;
    {
        const bool branch_taken_0x4aa428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA428u;
        // 0x4aa42c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa428) {
            ctx->pc = 0x4AA440u;
            goto label_4aa440;
        }
    }
    ctx->pc = 0x4AA430u;
    // 0x4aa430: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4aa430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4aa434: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4aa434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aa438: 0xc126368  jal         func_498DA0
    ctx->pc = 0x4AA438u;
    SET_GPR_U32(ctx, 31, 0x4AA440u);
    ctx->pc = 0x4AA43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA438u;
    // 0x4aa43c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498DA0u, 0x4AA438u, 0x4AA440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA440u;
label_4aa440:
    // 0x4aa440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4aa440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa444: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x4aa444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4aa448: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4aa448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aa44c: 0xc1263c0  jal         func_498F00
    ctx->pc = 0x4AA44Cu;
    SET_GPR_U32(ctx, 31, 0x4AA454u);
    ctx->pc = 0x4AA450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA44Cu;
    // 0x4aa450: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498F00u, 0x4AA44Cu, 0x4AA454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA454u;
label_4aa454:
    // 0x4aa454: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4aa454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4aa458:
    // 0x4aa458: 0x8f83c1f8  lw          $v1, -0x3E08($gp)
    ctx->pc = 0x4aa458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951416)));
    // 0x4aa45c: 0x2782c1f8  addiu       $v0, $gp, -0x3E08
    ctx->pc = 0x4aa45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951416));
    // 0x4aa460: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4aa460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4aa464: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4aa464u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4aa468: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4aa468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4aa46c: 0x34c6fffc  ori         $a2, $a2, 0xFFFC
    ctx->pc = 0x4aa46cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65532);
    // 0x4aa470: 0x8f82b880  lw          $v0, -0x4780($gp)
    ctx->pc = 0x4aa470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948992)));
    // 0x4aa474: 0x8f83c1f8  lw          $v1, -0x3E08($gp)
    ctx->pc = 0x4aa474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951416)));
    // 0x4aa478: 0x8f84b884  lw          $a0, -0x477C($gp)
    ctx->pc = 0x4aa478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948996)));
    // 0x4aa47c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4aa47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4aa480: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x4aa480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x4aa484: 0xaf90c1f8  sw          $s0, -0x3E08($gp)
    ctx->pc = 0x4aa484u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951416), GPR_U32(ctx, 16));
    // 0x4aa488: 0xaf82b880  sw          $v0, -0x4780($gp)
    ctx->pc = 0x4aa488u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948992), GPR_U32(ctx, 2));
    // 0x4aa48c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4aa48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4aa490: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4aa490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4aa494: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x4aa494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4aa498: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x4aa498u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4aa49c: 0xaf84b884  sw          $a0, -0x477C($gp)
    ctx->pc = 0x4aa49cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948996), GPR_U32(ctx, 4));
    // 0x4aa4a0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4aa4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4aa4a4: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x4aa4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x4aa4a8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4aa4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x4aa4ac: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4aa4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x4aa4b0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4aa4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x4aa4b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4aa4b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4aa4b8:
    // 0x4aa4b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4aa4b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa4bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aa4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA4C0u;
        // 0x4aa4c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA4C8u;
}
