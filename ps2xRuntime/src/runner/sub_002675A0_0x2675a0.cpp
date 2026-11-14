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

// Function: sub_002675A0
// Address: 0x2675a0 - 0x267700
void sub_002675A0_0x2675a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002675A0_0x2675a0");
#endif

    switch (ctx->pc) {
        case 0x2675d4u: goto label_2675d4;
        case 0x2675e8u: goto label_2675e8;
        case 0x26760cu: goto label_26760c;
        case 0x267634u: goto label_267634;
        case 0x267658u: goto label_267658;
        case 0x267680u: goto label_267680;
        case 0x2676b0u: goto label_2676b0;
        case 0x2676c0u: goto label_2676c0;
        case 0x2676e4u: goto label_2676e4;
        default: break;
    }

    ctx->pc = 0x2675a0u;

    // 0x2675a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2675a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2675a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2675a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2675a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2675a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2675ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2675acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2675b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2675b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2675b4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2675b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2675b8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2675b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2675bc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2675bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2675c0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2675c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2675c4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2675c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2675c8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2675c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2675cc: 0xc099e30  jal         func_2678C0
    ctx->pc = 0x2675CCu;
    SET_GPR_U32(ctx, 31, 0x2675D4u);
    ctx->pc = 0x2678C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2678C0u, 0x2675CCu, 0x2675D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2675D4u;
label_2675d4:
    // 0x2675d4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2675d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2675d8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2675d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2675dc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2675dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2675e0: 0xc041954  jal         func_106550
    ctx->pc = 0x2675E0u;
    SET_GPR_U32(ctx, 31, 0x2675E8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2675E0u, 0x2675E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2675E8u;
label_2675e8:
    // 0x2675e8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2675e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2675ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2675ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2675f0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2675f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2675f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2675f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2675f8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2675f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2675fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2675fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x267600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267604: 0xc09a134  jal         func_2684D0
    ctx->pc = 0x267604u;
    SET_GPR_U32(ctx, 31, 0x26760Cu);
    ctx->pc = 0x2684D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2684D0u, 0x267604u, 0x26760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26760Cu;
label_26760c:
    // 0x26760c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26760cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267610: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x267610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267614: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x267614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267618: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x267618u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x26761c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26761cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267620: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x267620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267624: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x267624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267628: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x267628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x26762c: 0xc099e10  jal         func_267840
    ctx->pc = 0x26762Cu;
    SET_GPR_U32(ctx, 31, 0x267634u);
    ctx->pc = 0x267840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267840u, 0x26762Cu, 0x267634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267634u;
label_267634:
    // 0x267634: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x267634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267638: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x267638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26763c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26763cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267640: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x267640u;
    {
        const bool branch_taken_0x267640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x267640) {
            ctx->pc = 0x267664u;
            goto label_267664;
        }
    }
    ctx->pc = 0x267648u;
    // 0x267648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26764c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x26764cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267650: 0xc099e40  jal         func_267900
    ctx->pc = 0x267650u;
    SET_GPR_U32(ctx, 31, 0x267658u);
    ctx->pc = 0x267900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267900u, 0x267650u, 0x267658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267658u;
label_267658:
    // 0x267658: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x267658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x26765c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26765Cu;
    {
        const bool branch_taken_0x26765c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26765c) {
            ctx->pc = 0x267684u;
            goto label_267684;
        }
    }
    ctx->pc = 0x267664u;
label_267664:
    // 0x267664: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x267664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x267668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26766c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x26766cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x267670: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x267670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267674: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x267674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x267678: 0xc099df0  jal         func_2677C0
    ctx->pc = 0x267678u;
    SET_GPR_U32(ctx, 31, 0x267680u);
    ctx->pc = 0x2677C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2677C0u, 0x267678u, 0x267680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267680u;
label_267680:
    // 0x267680: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x267680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_267684:
    // 0x267684: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x267684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x267688: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x267688u;
    {
        const bool branch_taken_0x267688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267688) {
            ctx->pc = 0x2676B4u;
            goto label_2676b4;
        }
    }
    ctx->pc = 0x267690u;
    // 0x267690: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x267690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267694: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x267694u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x267698: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x267698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26769c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x26769cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2676a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2676a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2676a4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2676a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2676a8: 0xc099e10  jal         func_267840
    ctx->pc = 0x2676A8u;
    SET_GPR_U32(ctx, 31, 0x2676B0u);
    ctx->pc = 0x267840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267840u, 0x2676A8u, 0x2676B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2676B0u;
label_2676b0:
    // 0x2676b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2676b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2676b4:
    // 0x2676b4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2676b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2676b8: 0xc099dd4  jal         func_267750
    ctx->pc = 0x2676B8u;
    SET_GPR_U32(ctx, 31, 0x2676C0u);
    ctx->pc = 0x267750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267750u, 0x2676B8u, 0x2676C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2676C0u;
label_2676c0:
    // 0x2676c0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2676c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2676c4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2676c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2676c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2676c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2676cc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2676ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2676d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2676d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2676d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2676d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2676d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2676d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2676dc: 0xc099dc0  jal         func_267700
    ctx->pc = 0x2676DCu;
    SET_GPR_U32(ctx, 31, 0x2676E4u);
    ctx->pc = 0x267700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267700u, 0x2676DCu, 0x2676E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2676E4u;
label_2676e4:
    // 0x2676e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2676e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2676e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2676e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2676ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2676ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2676f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2676f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2676f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2676f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2676f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2676F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2676F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267700u;
}
