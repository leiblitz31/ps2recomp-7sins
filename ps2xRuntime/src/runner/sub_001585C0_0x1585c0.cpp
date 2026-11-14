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

// Function: sub_001585C0
// Address: 0x1585c0 - 0x1586d0
void sub_001585C0_0x1585c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001585C0_0x1585c0");
#endif

    switch (ctx->pc) {
        case 0x1585f4u: goto label_1585f4;
        case 0x158608u: goto label_158608;
        case 0x15862cu: goto label_15862c;
        case 0x158648u: goto label_158648;
        case 0x158660u: goto label_158660;
        case 0x158688u: goto label_158688;
        case 0x158698u: goto label_158698;
        case 0x1586b4u: goto label_1586b4;
        default: break;
    }

    ctx->pc = 0x1585c0u;

    // 0x1585c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1585c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1585c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1585c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1585c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1585c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1585cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1585ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1585d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1585d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1585d4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1585d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1585d8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1585d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1585dc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1585dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1585e0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1585e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1585e4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1585e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1585e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1585e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1585ec: 0xc05611c  jal         func_158470
    ctx->pc = 0x1585ECu;
    SET_GPR_U32(ctx, 31, 0x1585F4u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1585ECu, 0x1585F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1585F4u;
label_1585f4:
    // 0x1585f4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1585f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1585f8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1585f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1585fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1585fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x158600: 0xc041954  jal         func_106550
    ctx->pc = 0x158600u;
    SET_GPR_U32(ctx, 31, 0x158608u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x158600u, 0x158608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158608u;
label_158608:
    // 0x158608: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x158608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x15860c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158610: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x158610u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x158614: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x158614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158618: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x158618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x15861c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15861cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158624: 0xc0562b8  jal         func_158AE0
    ctx->pc = 0x158624u;
    SET_GPR_U32(ctx, 31, 0x15862Cu);
    ctx->pc = 0x158AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158AE0u, 0x158624u, 0x15862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15862Cu;
label_15862c:
    // 0x15862c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15862cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158630: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x158630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158634: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x158634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158638: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x158638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15863c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15863cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158640: 0xc041934  jal         func_1064D0
    ctx->pc = 0x158640u;
    SET_GPR_U32(ctx, 31, 0x158648u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x158640u, 0x158648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158648u;
label_158648:
    // 0x158648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x158648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15864c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15864cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158650: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x158650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x158654: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x158654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x158658: 0xc0561e8  jal         func_1587A0
    ctx->pc = 0x158658u;
    SET_GPR_U32(ctx, 31, 0x158660u);
    ctx->pc = 0x1587A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1587A0u, 0x158658u, 0x158660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158660u;
label_158660:
    // 0x158660: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x158660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158664: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x158664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x158668: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x158668u;
    {
        const bool branch_taken_0x158668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158668) {
            ctx->pc = 0x15868Cu;
            goto label_15868c;
        }
    }
    ctx->pc = 0x158670u;
    // 0x158670: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x158670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158674: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x158674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x158678: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x158678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15867c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15867cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158680: 0xc041934  jal         func_1064D0
    ctx->pc = 0x158680u;
    SET_GPR_U32(ctx, 31, 0x158688u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x158680u, 0x158688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158688u;
label_158688:
    // 0x158688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x158688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15868c:
    // 0x15868c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x15868cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158690: 0xc0561c8  jal         func_158720
    ctx->pc = 0x158690u;
    SET_GPR_U32(ctx, 31, 0x158698u);
    ctx->pc = 0x158720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158720u, 0x158690u, 0x158698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158698u;
label_158698:
    // 0x158698: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x158698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x15869c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x15869cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1586a0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1586a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1586a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1586a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1586a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1586a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1586ac: 0xc0561b4  jal         func_1586D0
    ctx->pc = 0x1586ACu;
    SET_GPR_U32(ctx, 31, 0x1586B4u);
    ctx->pc = 0x1586D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1586D0u, 0x1586ACu, 0x1586B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1586B4u;
label_1586b4:
    // 0x1586b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1586b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1586b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1586b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1586bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1586bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1586c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1586c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1586c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1586c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1586c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1586C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1586C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1586D0u;
}
