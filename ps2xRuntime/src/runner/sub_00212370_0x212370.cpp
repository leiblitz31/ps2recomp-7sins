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

// Function: sub_00212370
// Address: 0x212370 - 0x2124d0
void sub_00212370_0x212370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212370_0x212370");
#endif

    switch (ctx->pc) {
        case 0x2123a4u: goto label_2123a4;
        case 0x2123b8u: goto label_2123b8;
        case 0x2123dcu: goto label_2123dc;
        case 0x212404u: goto label_212404;
        case 0x212428u: goto label_212428;
        case 0x212450u: goto label_212450;
        case 0x212480u: goto label_212480;
        case 0x212490u: goto label_212490;
        case 0x2124b4u: goto label_2124b4;
        default: break;
    }

    ctx->pc = 0x212370u;

    // 0x212370: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x212370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x212374: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x212374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x212378: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x212378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21237c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21237cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x212380: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x212380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x212384: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x212384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x212388: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x212388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x21238c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x21238cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x212390: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x212390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x212394: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x212394u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x212398: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x212398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21239c: 0xc060260  jal         func_180980
    ctx->pc = 0x21239Cu;
    SET_GPR_U32(ctx, 31, 0x2123A4u);
    ctx->pc = 0x180980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180980u, 0x21239Cu, 0x2123A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123A4u;
label_2123a4:
    // 0x2123a4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2123a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2123a8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2123a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2123ac: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2123acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2123b0: 0xc041954  jal         func_106550
    ctx->pc = 0x2123B0u;
    SET_GPR_U32(ctx, 31, 0x2123B8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2123B0u, 0x2123B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123B8u;
label_2123b8:
    // 0x2123b8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2123b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2123bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2123bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2123c0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2123c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2123c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2123c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2123c8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2123c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2123cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2123ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2123d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2123d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2123d4: 0xc060a20  jal         func_182880
    ctx->pc = 0x2123D4u;
    SET_GPR_U32(ctx, 31, 0x2123DCu);
    ctx->pc = 0x182880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182880u, 0x2123D4u, 0x2123DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123DCu;
label_2123dc:
    // 0x2123dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2123dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2123e0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2123e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2123e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2123e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2123e8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x2123e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2123ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2123ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2123f0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2123f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2123f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2123f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2123f8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x2123f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2123fc: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2123FCu;
    SET_GPR_U32(ctx, 31, 0x212404u);
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2123FCu, 0x212404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212404u;
label_212404:
    // 0x212404: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x212404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212408: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x212408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21240c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212410: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x212410u;
    {
        const bool branch_taken_0x212410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x212410) {
            ctx->pc = 0x212434u;
            goto label_212434;
        }
    }
    ctx->pc = 0x212418u;
    // 0x212418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21241c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x21241cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x212420: 0xc06011c  jal         func_180470
    ctx->pc = 0x212420u;
    SET_GPR_U32(ctx, 31, 0x212428u);
    ctx->pc = 0x180470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180470u, 0x212420u, 0x212428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212428u;
label_212428:
    // 0x212428: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x212428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x21242c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21242Cu;
    {
        const bool branch_taken_0x21242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21242c) {
            ctx->pc = 0x212454u;
            goto label_212454;
        }
    }
    ctx->pc = 0x212434u;
label_212434:
    // 0x212434: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x212434u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x212438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21243c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x21243cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x212440: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x212440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x212444: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x212444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x212448: 0xc084948  jal         func_212520
    ctx->pc = 0x212448u;
    SET_GPR_U32(ctx, 31, 0x212450u);
    ctx->pc = 0x212520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212520u, 0x212448u, 0x212450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212450u;
label_212450:
    // 0x212450: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x212450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212454:
    // 0x212454: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x212454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x212458: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x212458u;
    {
        const bool branch_taken_0x212458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212458) {
            ctx->pc = 0x212484u;
            goto label_212484;
        }
    }
    ctx->pc = 0x212460u;
    // 0x212460: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x212460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x212464: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x212464u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x212468: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x212468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21246c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x21246cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x212470: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x212470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212474: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x212474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x212478: 0xc0849c0  jal         func_212700
    ctx->pc = 0x212478u;
    SET_GPR_U32(ctx, 31, 0x212480u);
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x212478u, 0x212480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212480u;
label_212480:
    // 0x212480: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x212480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212484:
    // 0x212484: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x212484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x212488: 0xc060218  jal         func_180860
    ctx->pc = 0x212488u;
    SET_GPR_U32(ctx, 31, 0x212490u);
    ctx->pc = 0x180860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180860u, 0x212488u, 0x212490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212490u;
label_212490:
    // 0x212490: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x212490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x212494: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x212494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x212498: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x212498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x21249c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x21249cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2124a0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2124a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2124a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2124a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2124a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2124ac: 0xc084934  jal         func_2124D0
    ctx->pc = 0x2124ACu;
    SET_GPR_U32(ctx, 31, 0x2124B4u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x2124ACu, 0x2124B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2124B4u;
label_2124b4:
    // 0x2124b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2124b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2124b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2124b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2124bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2124bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2124c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2124c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2124c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2124c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2124c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2124C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2124C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2124D0u;
}
