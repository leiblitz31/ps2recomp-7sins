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

// Function: sub_00269290
// Address: 0x269290 - 0x2693f0
void sub_00269290_0x269290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269290_0x269290");
#endif

    switch (ctx->pc) {
        case 0x2692c4u: goto label_2692c4;
        case 0x2692d8u: goto label_2692d8;
        case 0x2692fcu: goto label_2692fc;
        case 0x269324u: goto label_269324;
        case 0x269348u: goto label_269348;
        case 0x269370u: goto label_269370;
        case 0x2693a0u: goto label_2693a0;
        case 0x2693b0u: goto label_2693b0;
        case 0x2693ccu: goto label_2693cc;
        default: break;
    }

    ctx->pc = 0x269290u;

    // 0x269290: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x269290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x269294: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x269294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x269298: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x269298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26929c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2692a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2692a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2692a4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2692a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2692a8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2692a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2692ac: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2692acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2692b0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2692b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2692b4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2692b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2692b8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2692b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2692bc: 0xc09a570  jal         func_2695C0
    ctx->pc = 0x2692BCu;
    SET_GPR_U32(ctx, 31, 0x2692C4u);
    ctx->pc = 0x2695C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2695C0u, 0x2692BCu, 0x2692C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2692C4u;
label_2692c4:
    // 0x2692c4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2692c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2692c8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2692c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2692cc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2692ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2692d0: 0xc041954  jal         func_106550
    ctx->pc = 0x2692D0u;
    SET_GPR_U32(ctx, 31, 0x2692D8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2692D0u, 0x2692D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2692D8u;
label_2692d8:
    // 0x2692d8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2692d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2692dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2692dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2692e0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2692e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2692e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2692e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2692e8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2692e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2692ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2692ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2692f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2692f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2692f4: 0xc09abc4  jal         func_26AF10
    ctx->pc = 0x2692F4u;
    SET_GPR_U32(ctx, 31, 0x2692FCu);
    ctx->pc = 0x26AF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26AF10u, 0x2692F4u, 0x2692FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2692FCu;
label_2692fc:
    // 0x2692fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2692fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269300: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x269300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269304: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x269304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x269308: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x269308u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x26930c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26930cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269310: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x269310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x269314: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x269314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269318: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x269318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x26931c: 0xc09a550  jal         func_269540
    ctx->pc = 0x26931Cu;
    SET_GPR_U32(ctx, 31, 0x269324u);
    ctx->pc = 0x269540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269540u, 0x26931Cu, 0x269324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269324u;
label_269324:
    // 0x269324: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269328: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x269328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26932c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26932cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269330: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x269330u;
    {
        const bool branch_taken_0x269330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x269330) {
            ctx->pc = 0x269354u;
            goto label_269354;
        }
    }
    ctx->pc = 0x269338u;
    // 0x269338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26933c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x26933cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x269340: 0xc09a580  jal         func_269600
    ctx->pc = 0x269340u;
    SET_GPR_U32(ctx, 31, 0x269348u);
    ctx->pc = 0x269600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269600u, 0x269340u, 0x269348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269348u;
label_269348:
    // 0x269348: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x269348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x26934c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26934Cu;
    {
        const bool branch_taken_0x26934c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26934c) {
            ctx->pc = 0x269374u;
            goto label_269374;
        }
    }
    ctx->pc = 0x269354u;
label_269354:
    // 0x269354: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x269354u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x269358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26935c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x26935cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x269360: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x269360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x269364: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x269364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x269368: 0xc09a530  jal         func_2694C0
    ctx->pc = 0x269368u;
    SET_GPR_U32(ctx, 31, 0x269370u);
    ctx->pc = 0x2694C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2694C0u, 0x269368u, 0x269370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269370u;
label_269370:
    // 0x269370: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269374:
    // 0x269374: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x269374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x269378: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x269378u;
    {
        const bool branch_taken_0x269378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269378) {
            ctx->pc = 0x2693A4u;
            goto label_2693a4;
        }
    }
    ctx->pc = 0x269380u;
    // 0x269380: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x269380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x269384: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x269384u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x269388: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x269388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26938c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x26938cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x269390: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x269390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269394: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x269394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x269398: 0xc09a550  jal         func_269540
    ctx->pc = 0x269398u;
    SET_GPR_U32(ctx, 31, 0x2693A0u);
    ctx->pc = 0x269540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269540u, 0x269398u, 0x2693A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2693A0u;
label_2693a0:
    // 0x2693a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2693a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2693a4:
    // 0x2693a4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2693a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2693a8: 0xc09a510  jal         func_269440
    ctx->pc = 0x2693A8u;
    SET_GPR_U32(ctx, 31, 0x2693B0u);
    ctx->pc = 0x269440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269440u, 0x2693A8u, 0x2693B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2693B0u;
label_2693b0:
    // 0x2693b0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x2693b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2693b4: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2693b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2693b8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2693b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2693bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2693bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2693c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2693c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2693c4: 0xc09a4fc  jal         func_2693F0
    ctx->pc = 0x2693C4u;
    SET_GPR_U32(ctx, 31, 0x2693CCu);
    ctx->pc = 0x2693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2693F0u, 0x2693C4u, 0x2693CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2693CCu;
label_2693cc:
    // 0x2693cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2693ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2693d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2693d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2693d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2693d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2693d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2693d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2693dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2693dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2693e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2693E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2693E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2693E8u;
    // 0x2693e8: 0x0  nop
    ctx->pc = 0x2693e8u;
    // NOP
    // 0x2693ec: 0x0  nop
    ctx->pc = 0x2693ecu;
    // NOP
    ctx->pc = 0x2693f0u;
}
