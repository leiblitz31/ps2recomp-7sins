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

// Function: sub_002482B0
// Address: 0x2482b0 - 0x248530
void sub_002482B0_0x2482b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002482B0_0x2482b0");
#endif

    switch (ctx->pc) {
        case 0x2482ccu: goto label_2482cc;
        case 0x248324u: goto label_248324;
        case 0x248378u: goto label_248378;
        case 0x248390u: goto label_248390;
        case 0x2483a0u: goto label_2483a0;
        case 0x2483b0u: goto label_2483b0;
        case 0x2483c8u: goto label_2483c8;
        case 0x2483ecu: goto label_2483ec;
        case 0x2483f8u: goto label_2483f8;
        case 0x248404u: goto label_248404;
        case 0x24841cu: goto label_24841c;
        case 0x248434u: goto label_248434;
        case 0x248454u: goto label_248454;
        case 0x248478u: goto label_248478;
        case 0x248498u: goto label_248498;
        case 0x2484e4u: goto label_2484e4;
        case 0x2484f4u: goto label_2484f4;
        default: break;
    }

    ctx->pc = 0x2482b0u;

    // 0x2482b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2482b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2482b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2482b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2482b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2482b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2482bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2482bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2482c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2482c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2482c4: 0xc094304  jal         func_250C10
    ctx->pc = 0x2482C4u;
    SET_GPR_U32(ctx, 31, 0x2482CCu);
    ctx->pc = 0x250C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250C10u, 0x2482C4u, 0x2482CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482CCu;
label_2482cc:
    // 0x2482cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2482ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2482d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2482d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2482d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2482D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2482D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2482DCu;
    // 0x2482dc: 0x0  nop
    ctx->pc = 0x2482dcu;
    // NOP
    // 0x2482e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2482e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2482e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2482e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2482e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2482e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2482ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2482ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2482f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2482f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2482f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2482f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2482f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2482f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2482fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2482fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x248300: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x248300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x248304: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x248304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x248308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x248308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24830c: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x24830cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x248310: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x248310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x248314: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x248314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x248318: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x248318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24831c: 0xc0911dc  jal         func_244770
    ctx->pc = 0x24831Cu;
    SET_GPR_U32(ctx, 31, 0x248324u);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x24831Cu, 0x248324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248324u;
label_248324:
    // 0x248324: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x248324u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x248328: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x248328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24832c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x248330: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x248330u;
    {
        const bool branch_taken_0x248330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x248330) {
            ctx->pc = 0x248348u;
            goto label_248348;
        }
    }
    ctx->pc = 0x248338u;
    // 0x248338: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x248338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24833c: 0x8c560008  lw          $s6, 0x8($v0)
    ctx->pc = 0x24833cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x248340: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x248340u;
    {
        const bool branch_taken_0x248340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248340) {
            ctx->pc = 0x248350u;
            goto label_248350;
        }
    }
    ctx->pc = 0x248348u;
label_248348:
    // 0x248348: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x248348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24834c: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x24834cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_248350:
    // 0x248350: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x248350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248354: 0x24150014  addiu       $s5, $zero, 0x14
    ctx->pc = 0x248354u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x248358: 0x24140014  addiu       $s4, $zero, 0x14
    ctx->pc = 0x248358u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x24835c: 0x1010000d  beq         $zero, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x24835Cu;
    {
        const bool branch_taken_0x24835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x24835c) {
            ctx->pc = 0x248394u;
            goto label_248394;
        }
    }
    ctx->pc = 0x248364u;
    // 0x248364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248368: 0x24050419  addiu       $a1, $zero, 0x419
    ctx->pc = 0x248368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1049));
    // 0x24836c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x24836cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x248370: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x248370u;
    SET_GPR_U32(ctx, 31, 0x248378u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x248370u, 0x248378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248378u;
label_248378:
    // 0x248378: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x248378u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24837c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24837cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248380: 0x2405041a  addiu       $a1, $zero, 0x41A
    ctx->pc = 0x248380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1050));
    // 0x248384: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x248384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x248388: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x248388u;
    SET_GPR_U32(ctx, 31, 0x248390u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x248388u, 0x248390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248390u;
label_248390:
    // 0x248390: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x248390u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248394:
    // 0x248394: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x248394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x248398: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x248398u;
    SET_GPR_U32(ctx, 31, 0x2483A0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x248398u, 0x2483A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483A0u;
label_2483a0:
    // 0x2483a0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2483a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2483a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2483a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2483a8: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2483A8u;
    SET_GPR_U32(ctx, 31, 0x2483B0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2483A8u, 0x2483B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483B0u;
label_2483b0:
    // 0x2483b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2483b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2483b4: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2483B4u;
    {
        const bool branch_taken_0x2483b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2483b4) {
            ctx->pc = 0x2483CCu;
            goto label_2483cc;
        }
    }
    ctx->pc = 0x2483BCu;
    // 0x2483bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2483bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2483c0: 0xc0941f8  jal         func_2507E0
    ctx->pc = 0x2483C0u;
    SET_GPR_U32(ctx, 31, 0x2483C8u);
    ctx->pc = 0x2507E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2507E0u, 0x2483C0u, 0x2483C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483C8u;
label_2483c8:
    // 0x2483c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2483c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2483cc:
    // 0x2483cc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2483ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2483d0: 0xac530048  sw          $s3, 0x48($v0)
    ctx->pc = 0x2483d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 19));
    // 0x2483d4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2483d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2483d8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2483d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2483dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2483dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2483e0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2483e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2483e4: 0xc0947c8  jal         func_251F20
    ctx->pc = 0x2483E4u;
    SET_GPR_U32(ctx, 31, 0x2483ECu);
    ctx->pc = 0x251F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251F20u, 0x2483E4u, 0x2483ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483ECu;
label_2483ec:
    // 0x2483ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2483ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2483f0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2483F0u;
    {
        const bool branch_taken_0x2483f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2483f0) {
            ctx->pc = 0x2484C8u;
            goto label_2484c8;
        }
    }
    ctx->pc = 0x2483F8u;
label_2483f8:
    // 0x2483f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2483f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2483fc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2483FCu;
    {
        const bool branch_taken_0x2483fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2483fc) {
            ctx->pc = 0x2484B8u;
            goto label_2484b8;
        }
    }
    ctx->pc = 0x248404u;
label_248404:
    // 0x248404: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x248404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x248408: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x248408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24840c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24840cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248410: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x248410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248414: 0xc092158  jal         func_248560
    ctx->pc = 0x248414u;
    SET_GPR_U32(ctx, 31, 0x24841Cu);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x248414u, 0x24841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24841Cu;
label_24841c:
    // 0x24841c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x24841cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248424: 0x2405055a  addiu       $a1, $zero, 0x55A
    ctx->pc = 0x248424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1370));
    // 0x248428: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x248428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24842c: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x24842Cu;
    SET_GPR_U32(ctx, 31, 0x248434u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x24842Cu, 0x248434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248434u;
label_248434:
    // 0x248434: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x248434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x248438: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x248438u;
    {
        const bool branch_taken_0x248438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248438) {
            ctx->pc = 0x2484A8u;
            goto label_2484a8;
        }
    }
    ctx->pc = 0x248440u;
    // 0x248440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248444: 0x24050557  addiu       $a1, $zero, 0x557
    ctx->pc = 0x248444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1367));
    // 0x248448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x248448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24844c: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x24844Cu;
    SET_GPR_U32(ctx, 31, 0x248454u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x24844Cu, 0x248454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248454u;
label_248454:
    // 0x248454: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x248454u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x248458: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x248458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24845c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x24845Cu;
    {
        const bool branch_taken_0x24845c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24845c) {
            ctx->pc = 0x2484A8u;
            goto label_2484a8;
        }
    }
    ctx->pc = 0x248464u;
    // 0x248464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248468: 0x24050558  addiu       $a1, $zero, 0x558
    ctx->pc = 0x248468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1368));
    // 0x24846c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24846cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248470: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x248470u;
    SET_GPR_U32(ctx, 31, 0x248478u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x248470u, 0x248478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248478u;
label_248478:
    // 0x248478: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x248478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24847c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24847Cu;
    {
        const bool branch_taken_0x24847c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24847c) {
            ctx->pc = 0x2484A8u;
            goto label_2484a8;
        }
    }
    ctx->pc = 0x248484u;
    // 0x248484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248488: 0x24050559  addiu       $a1, $zero, 0x559
    ctx->pc = 0x248488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1369));
    // 0x24848c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24848cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248490: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x248490u;
    SET_GPR_U32(ctx, 31, 0x248498u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x248490u, 0x248498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248498u;
label_248498:
    // 0x248498: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x248498u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x24849c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x24849cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2484a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2484A0u;
    {
        const bool branch_taken_0x2484a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2484a0) {
            ctx->pc = 0x2484B4u;
            goto label_2484b4;
        }
    }
    ctx->pc = 0x2484A8u;
label_2484a8:
    // 0x2484a8: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x2484a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2484ac: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2484acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2484b0: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x2484b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
label_2484b4:
    // 0x2484b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2484b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2484b8:
    // 0x2484b8: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x2484b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x2484bc: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2484BCu;
    {
        const bool branch_taken_0x2484bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2484bc) {
            ctx->pc = 0x248404u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248404;
        }
    }
    ctx->pc = 0x2484C4u;
    // 0x2484c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2484c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2484c8:
    // 0x2484c8: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x2484c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2484cc: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2484CCu;
    {
        const bool branch_taken_0x2484cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2484cc) {
            ctx->pc = 0x2483F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2483f8;
        }
    }
    ctx->pc = 0x2484D4u;
    // 0x2484d4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2484d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2484d8: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2484d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2484dc: 0xc09214c  jal         func_248530
    ctx->pc = 0x2484DCu;
    SET_GPR_U32(ctx, 31, 0x2484E4u);
    ctx->pc = 0x248530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248530u, 0x2484DCu, 0x2484E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484E4u;
label_2484e4:
    // 0x2484e4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2484e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2484e8: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x2484e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x2484ec: 0xc0920a0  jal         func_248280
    ctx->pc = 0x2484ECu;
    SET_GPR_U32(ctx, 31, 0x2484F4u);
    ctx->pc = 0x248280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248280u, 0x2484ECu, 0x2484F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484F4u;
label_2484f4:
    // 0x2484f4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2484f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2484f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2484f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2484fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2484fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x248500: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x248500u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x248504: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x248504u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x248508: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x248508u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24850c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24850cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x248510: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x248510u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248514: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x248514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248518: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x248518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24851c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24851cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248520: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x248520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x248524: 0x3e00008  jr          $ra
    ctx->pc = 0x248524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24852Cu;
    // 0x24852c: 0x0  nop
    ctx->pc = 0x24852cu;
    // NOP
    ctx->pc = 0x248530u;
}
