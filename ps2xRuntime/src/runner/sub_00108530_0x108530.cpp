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

// Function: sub_00108530
// Address: 0x108530 - 0x108640
void sub_00108530_0x108530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108530_0x108530");
#endif

    switch (ctx->pc) {
        case 0x108564u: goto label_108564;
        case 0x108578u: goto label_108578;
        case 0x10859cu: goto label_10859c;
        case 0x1085b8u: goto label_1085b8;
        case 0x1085d0u: goto label_1085d0;
        case 0x1085f8u: goto label_1085f8;
        case 0x108608u: goto label_108608;
        case 0x108624u: goto label_108624;
        default: break;
    }

    ctx->pc = 0x108530u;

    // 0x108530: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x108530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x108534: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x108534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x108538: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x108538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10853c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10853cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x108540: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x108540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x108544: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x108544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x108548: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x108548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x10854c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x10854cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x108550: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x108550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x108554: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x108554u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x108558: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x108558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10855c: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x10855Cu;
    SET_GPR_U32(ctx, 31, 0x108564u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x10855Cu, 0x108564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108564u;
label_108564:
    // 0x108564: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x108564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x108568: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x108568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x10856c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x10856cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x108570: 0xc041954  jal         func_106550
    ctx->pc = 0x108570u;
    SET_GPR_U32(ctx, 31, 0x108578u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x108570u, 0x108578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108578u;
label_108578:
    // 0x108578: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x108578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x10857c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108580: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x108580u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x108584: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x108584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108588: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x108588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x10858c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10858cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108590: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x108590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108594: 0xc04246c  jal         func_1091B0
    ctx->pc = 0x108594u;
    SET_GPR_U32(ctx, 31, 0x10859Cu);
    ctx->pc = 0x1091B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1091B0u, 0x108594u, 0x10859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10859Cu;
label_10859c:
    // 0x10859c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10859cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1085a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1085a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1085a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1085a8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1085a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1085ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1085acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085b0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1085B0u;
    SET_GPR_U32(ctx, 31, 0x1085B8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1085B0u, 0x1085B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1085B8u;
label_1085b8:
    // 0x1085b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1085b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1085bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085c0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1085c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1085c4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1085c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1085c8: 0xc0421c4  jal         func_108710
    ctx->pc = 0x1085C8u;
    SET_GPR_U32(ctx, 31, 0x1085D0u);
    ctx->pc = 0x108710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108710u, 0x1085C8u, 0x1085D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1085D0u;
label_1085d0:
    // 0x1085d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1085d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085d4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1085d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1085d8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1085D8u;
    {
        const bool branch_taken_0x1085d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1085d8) {
            ctx->pc = 0x1085FCu;
            goto label_1085fc;
        }
    }
    ctx->pc = 0x1085E0u;
    // 0x1085e0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1085e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1085e4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1085e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1085e8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1085e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1085ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1085ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085f0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1085F0u;
    SET_GPR_U32(ctx, 31, 0x1085F8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1085F0u, 0x1085F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1085F8u;
label_1085f8:
    // 0x1085f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1085f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1085fc:
    // 0x1085fc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1085fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108600: 0xc0421a4  jal         func_108690
    ctx->pc = 0x108600u;
    SET_GPR_U32(ctx, 31, 0x108608u);
    ctx->pc = 0x108690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108690u, 0x108600u, 0x108608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108608u;
label_108608:
    // 0x108608: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x108608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x10860c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x10860cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x108610: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x108610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x108614: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x108614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108618: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x108618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10861c: 0xc042190  jal         func_108640
    ctx->pc = 0x10861Cu;
    SET_GPR_U32(ctx, 31, 0x108624u);
    ctx->pc = 0x108640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108640u, 0x10861Cu, 0x108624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108624u;
label_108624:
    // 0x108624: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x108624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108628: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x108628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10862c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10862cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x108630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108634: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x108634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x108638: 0x3e00008  jr          $ra
    ctx->pc = 0x108638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108640u;
}
