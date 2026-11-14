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

// Function: sub_0015E620
// Address: 0x15e620 - 0x15e780
void sub_0015E620_0x15e620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E620_0x15e620");
#endif

    switch (ctx->pc) {
        case 0x15e654u: goto label_15e654;
        case 0x15e668u: goto label_15e668;
        case 0x15e68cu: goto label_15e68c;
        case 0x15e6b4u: goto label_15e6b4;
        case 0x15e6d8u: goto label_15e6d8;
        case 0x15e700u: goto label_15e700;
        case 0x15e730u: goto label_15e730;
        case 0x15e740u: goto label_15e740;
        case 0x15e764u: goto label_15e764;
        default: break;
    }

    ctx->pc = 0x15e620u;

    // 0x15e620: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x15e620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x15e624: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15e624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15e628: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15e62c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15e630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e634: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x15e634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x15e638: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x15e638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x15e63c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x15e63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x15e640: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x15e640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x15e644: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x15e644u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x15e648: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x15e648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e64c: 0xc057954  jal         func_15E550
    ctx->pc = 0x15E64Cu;
    SET_GPR_U32(ctx, 31, 0x15E654u);
    ctx->pc = 0x15E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E550u, 0x15E64Cu, 0x15E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E654u;
label_15e654:
    // 0x15e654: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x15e654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x15e658: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x15e658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x15e65c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x15e65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15e660: 0xc041954  jal         func_106550
    ctx->pc = 0x15E660u;
    SET_GPR_U32(ctx, 31, 0x15E668u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x15E660u, 0x15E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E668u;
label_15e668:
    // 0x15e668: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x15e668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x15e66c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e670: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x15e670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15e674: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x15e674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e678: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x15e678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x15e67c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15e67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e680: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15e680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e684: 0xc058b10  jal         func_162C40
    ctx->pc = 0x15E684u;
    SET_GPR_U32(ctx, 31, 0x15E68Cu);
    ctx->pc = 0x162C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162C40u, 0x15E684u, 0x15E68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E68Cu;
label_15e68c:
    // 0x15e68c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15e68cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e690: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x15e690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e694: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x15e694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e698: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x15e698u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e69c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e6a0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x15e6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15e6a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15e6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e6a8: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x15e6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x15e6ac: 0xc057a30  jal         func_15E8C0
    ctx->pc = 0x15E6ACu;
    SET_GPR_U32(ctx, 31, 0x15E6B4u);
    ctx->pc = 0x15E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E8C0u, 0x15E6ACu, 0x15E6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E6B4u;
label_15e6b4:
    // 0x15e6b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e6b8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x15e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15e6bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e6c0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15E6C0u;
    {
        const bool branch_taken_0x15e6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15e6c0) {
            ctx->pc = 0x15E6E4u;
            goto label_15e6e4;
        }
    }
    ctx->pc = 0x15E6C8u;
    // 0x15e6c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e6cc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x15e6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15e6d0: 0xc057a50  jal         func_15E940
    ctx->pc = 0x15E6D0u;
    SET_GPR_U32(ctx, 31, 0x15E6D8u);
    ctx->pc = 0x15E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E940u, 0x15E6D0u, 0x15E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E6D8u;
label_15e6d8:
    // 0x15e6d8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x15e6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x15e6dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15E6DCu;
    {
        const bool branch_taken_0x15e6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e6dc) {
            ctx->pc = 0x15E704u;
            goto label_15e704;
        }
    }
    ctx->pc = 0x15E6E4u;
label_15e6e4:
    // 0x15e6e4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x15e6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e6e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e6ec: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x15e6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15e6f0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x15e6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15e6f4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x15e6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x15e6f8: 0xc057a10  jal         func_15E840
    ctx->pc = 0x15E6F8u;
    SET_GPR_U32(ctx, 31, 0x15E700u);
    ctx->pc = 0x15E840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E840u, 0x15E6F8u, 0x15E700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E700u;
label_15e700:
    // 0x15e700: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e704:
    // 0x15e704: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x15e704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15e708: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15E708u;
    {
        const bool branch_taken_0x15e708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e708) {
            ctx->pc = 0x15E734u;
            goto label_15e734;
        }
    }
    ctx->pc = 0x15E710u;
    // 0x15e710: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x15e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e714: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x15e714u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e718: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x15e718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15e71c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15e71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15e720: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15e720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e724: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x15e724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15e728: 0xc057a30  jal         func_15E8C0
    ctx->pc = 0x15E728u;
    SET_GPR_U32(ctx, 31, 0x15E730u);
    ctx->pc = 0x15E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E8C0u, 0x15E728u, 0x15E730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E730u;
label_15e730:
    // 0x15e730: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e734:
    // 0x15e734: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x15e734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e738: 0xc0579f4  jal         func_15E7D0
    ctx->pc = 0x15E738u;
    SET_GPR_U32(ctx, 31, 0x15E740u);
    ctx->pc = 0x15E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E7D0u, 0x15E738u, 0x15E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E740u;
label_15e740:
    // 0x15e740: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x15e740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x15e744: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x15e744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x15e748: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15e748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e74c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x15e74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15e750: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x15e750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e754: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15e754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e758: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15e758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e75c: 0xc0579e0  jal         func_15E780
    ctx->pc = 0x15E75Cu;
    SET_GPR_U32(ctx, 31, 0x15E764u);
    ctx->pc = 0x15E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E780u, 0x15E75Cu, 0x15E764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E764u;
label_15e764:
    // 0x15e764: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15e764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e768: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e76c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e76cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e774: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x15e774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15e778: 0x3e00008  jr          $ra
    ctx->pc = 0x15E778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E780u;
}
