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

// Function: sub_00181280
// Address: 0x181280 - 0x1813e0
void sub_00181280_0x181280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181280_0x181280");
#endif

    switch (ctx->pc) {
        case 0x1812b4u: goto label_1812b4;
        case 0x1812c8u: goto label_1812c8;
        case 0x1812ecu: goto label_1812ec;
        case 0x181314u: goto label_181314;
        case 0x181338u: goto label_181338;
        case 0x181360u: goto label_181360;
        case 0x181390u: goto label_181390;
        case 0x1813a0u: goto label_1813a0;
        case 0x1813bcu: goto label_1813bc;
        default: break;
    }

    ctx->pc = 0x181280u;

    // 0x181280: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x181280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x181284: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x181284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x181288: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x181288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18128c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18128cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x181290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181294: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x181294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x181298: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x181298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x18129c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x18129cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1812a0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1812a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1812a4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1812a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1812a8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1812a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1812ac: 0xc05f288  jal         func_17CA20
    ctx->pc = 0x1812ACu;
    SET_GPR_U32(ctx, 31, 0x1812B4u);
    ctx->pc = 0x17CA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA20u, 0x1812ACu, 0x1812B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1812B4u;
label_1812b4:
    // 0x1812b4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1812b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1812b8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1812b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1812bc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1812bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1812c0: 0xc041954  jal         func_106550
    ctx->pc = 0x1812C0u;
    SET_GPR_U32(ctx, 31, 0x1812C8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1812C0u, 0x1812C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1812C8u;
label_1812c8:
    // 0x1812c8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1812c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1812cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1812ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1812d0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1812d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1812d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1812d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1812d8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1812d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1812dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1812dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1812e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1812e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1812e4: 0xc0609d0  jal         func_182740
    ctx->pc = 0x1812E4u;
    SET_GPR_U32(ctx, 31, 0x1812ECu);
    ctx->pc = 0x182740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182740u, 0x1812E4u, 0x1812ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1812ECu;
label_1812ec:
    // 0x1812ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1812ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1812f0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1812f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1812f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1812f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1812f8: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1812f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1812fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1812fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181300: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x181300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x181304: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x181304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181308: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x181308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x18130c: 0xc0605c4  jal         func_181710
    ctx->pc = 0x18130Cu;
    SET_GPR_U32(ctx, 31, 0x181314u);
    ctx->pc = 0x181710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181710u, 0x18130Cu, 0x181314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181314u;
label_181314:
    // 0x181314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181318: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x181318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18131c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181320: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x181320u;
    {
        const bool branch_taken_0x181320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x181320) {
            ctx->pc = 0x181344u;
            goto label_181344;
        }
    }
    ctx->pc = 0x181328u;
    // 0x181328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18132c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x18132cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x181330: 0xc06054c  jal         func_181530
    ctx->pc = 0x181330u;
    SET_GPR_U32(ctx, 31, 0x181338u);
    ctx->pc = 0x181530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181530u, 0x181330u, 0x181338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181338u;
label_181338:
    // 0x181338: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x181338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18133c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18133Cu;
    {
        const bool branch_taken_0x18133c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18133c) {
            ctx->pc = 0x181364u;
            goto label_181364;
        }
    }
    ctx->pc = 0x181344u;
label_181344:
    // 0x181344: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x181344u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x181348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18134c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x18134cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x181350: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x181350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x181354: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x181354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x181358: 0xc06052c  jal         func_1814B0
    ctx->pc = 0x181358u;
    SET_GPR_U32(ctx, 31, 0x181360u);
    ctx->pc = 0x1814B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1814B0u, 0x181358u, 0x181360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181360u;
label_181360:
    // 0x181360: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181364:
    // 0x181364: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x181364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x181368: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x181368u;
    {
        const bool branch_taken_0x181368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181368) {
            ctx->pc = 0x181394u;
            goto label_181394;
        }
    }
    ctx->pc = 0x181370u;
    // 0x181370: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x181370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181374: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x181374u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x181378: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x181378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18137c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x18137cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x181380: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x181380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181384: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x181384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x181388: 0xc0605c4  jal         func_181710
    ctx->pc = 0x181388u;
    SET_GPR_U32(ctx, 31, 0x181390u);
    ctx->pc = 0x181710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181710u, 0x181388u, 0x181390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181390u;
label_181390:
    // 0x181390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181394:
    // 0x181394: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x181394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x181398: 0xc06050c  jal         func_181430
    ctx->pc = 0x181398u;
    SET_GPR_U32(ctx, 31, 0x1813A0u);
    ctx->pc = 0x181430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181430u, 0x181398u, 0x1813A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1813A0u;
label_1813a0:
    // 0x1813a0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1813a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1813a4: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1813a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1813a8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1813a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1813ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1813acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1813b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1813b4: 0xc0604f8  jal         func_1813E0
    ctx->pc = 0x1813B4u;
    SET_GPR_U32(ctx, 31, 0x1813BCu);
    ctx->pc = 0x1813E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1813E0u, 0x1813B4u, 0x1813BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1813BCu;
label_1813bc:
    // 0x1813bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1813bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1813c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1813c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1813c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1813c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1813c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1813c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1813cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1813ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1813d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1813D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1813D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1813D8u;
    // 0x1813d8: 0x0  nop
    ctx->pc = 0x1813d8u;
    // NOP
    // 0x1813dc: 0x0  nop
    ctx->pc = 0x1813dcu;
    // NOP
    ctx->pc = 0x1813e0u;
}
