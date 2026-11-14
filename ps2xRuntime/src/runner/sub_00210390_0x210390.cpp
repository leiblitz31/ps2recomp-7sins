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

// Function: sub_00210390
// Address: 0x210390 - 0x2104f0
void sub_00210390_0x210390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210390_0x210390");
#endif

    switch (ctx->pc) {
        case 0x2103c4u: goto label_2103c4;
        case 0x2103d8u: goto label_2103d8;
        case 0x2103fcu: goto label_2103fc;
        case 0x210424u: goto label_210424;
        case 0x210448u: goto label_210448;
        case 0x210470u: goto label_210470;
        case 0x2104a0u: goto label_2104a0;
        case 0x2104b0u: goto label_2104b0;
        case 0x2104d4u: goto label_2104d4;
        default: break;
    }

    ctx->pc = 0x210390u;

    // 0x210390: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x210390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x210394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x210394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x210398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x210398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21039c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21039cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2103a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2103a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2103a4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2103a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2103a8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2103a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2103ac: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2103acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2103b0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2103b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2103b4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2103b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2103b8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2103b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2103bc: 0xc082b70  jal         func_20ADC0
    ctx->pc = 0x2103BCu;
    SET_GPR_U32(ctx, 31, 0x2103C4u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x2103BCu, 0x2103C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103C4u;
label_2103c4:
    // 0x2103c4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2103c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2103c8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2103c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2103cc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2103ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2103d0: 0xc041954  jal         func_106550
    ctx->pc = 0x2103D0u;
    SET_GPR_U32(ctx, 31, 0x2103D8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2103D0u, 0x2103D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103D8u;
label_2103d8:
    // 0x2103d8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2103d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2103dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2103dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2103e0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2103e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2103e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2103e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2103e8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2103e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2103ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2103ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2103f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2103f4: 0xc084220  jal         func_210880
    ctx->pc = 0x2103F4u;
    SET_GPR_U32(ctx, 31, 0x2103FCu);
    ctx->pc = 0x210880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210880u, 0x2103F4u, 0x2103FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103FCu;
label_2103fc:
    // 0x2103fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2103fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210400: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x210400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210404: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x210404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210408: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x210408u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x21040c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21040cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210410: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x210410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x210414: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x210414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210418: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x210418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x21041c: 0xc084200  jal         func_210800
    ctx->pc = 0x21041Cu;
    SET_GPR_U32(ctx, 31, 0x210424u);
    ctx->pc = 0x210800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210800u, 0x21041Cu, 0x210424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210424u;
label_210424:
    // 0x210424: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x210424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210428: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x210428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21042c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210430: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x210430u;
    {
        const bool branch_taken_0x210430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x210430) {
            ctx->pc = 0x210454u;
            goto label_210454;
        }
    }
    ctx->pc = 0x210438u;
    // 0x210438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21043c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x21043cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x210440: 0xc08418c  jal         func_210630
    ctx->pc = 0x210440u;
    SET_GPR_U32(ctx, 31, 0x210448u);
    ctx->pc = 0x210630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210630u, 0x210440u, 0x210448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210448u;
label_210448:
    // 0x210448: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x210448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x21044c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21044Cu;
    {
        const bool branch_taken_0x21044c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21044c) {
            ctx->pc = 0x210474u;
            goto label_210474;
        }
    }
    ctx->pc = 0x210454u;
label_210454:
    // 0x210454: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x210454u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x210458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21045c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x21045cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x210460: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x210460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x210464: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x210464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x210468: 0xc08416c  jal         func_2105B0
    ctx->pc = 0x210468u;
    SET_GPR_U32(ctx, 31, 0x210470u);
    ctx->pc = 0x2105B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2105B0u, 0x210468u, 0x210470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210470u;
label_210470:
    // 0x210470: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x210470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210474:
    // 0x210474: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x210474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x210478: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x210478u;
    {
        const bool branch_taken_0x210478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210478) {
            ctx->pc = 0x2104A4u;
            goto label_2104a4;
        }
    }
    ctx->pc = 0x210480u;
    // 0x210480: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x210480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210484: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x210484u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x210488: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x210488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21048c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x21048cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x210490: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210494: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x210494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x210498: 0xc084200  jal         func_210800
    ctx->pc = 0x210498u;
    SET_GPR_U32(ctx, 31, 0x2104A0u);
    ctx->pc = 0x210800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210800u, 0x210498u, 0x2104A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2104A0u;
label_2104a0:
    // 0x2104a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2104a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2104a4:
    // 0x2104a4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2104a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2104a8: 0xc084150  jal         func_210540
    ctx->pc = 0x2104A8u;
    SET_GPR_U32(ctx, 31, 0x2104B0u);
    ctx->pc = 0x210540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210540u, 0x2104A8u, 0x2104B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2104B0u;
label_2104b0:
    // 0x2104b0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2104b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2104b4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2104b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2104b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2104b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2104bc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2104bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2104c0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2104c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2104c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2104c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2104c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104cc: 0xc08413c  jal         func_2104F0
    ctx->pc = 0x2104CCu;
    SET_GPR_U32(ctx, 31, 0x2104D4u);
    ctx->pc = 0x2104F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2104F0u, 0x2104CCu, 0x2104D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2104D4u;
label_2104d4:
    // 0x2104d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2104d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2104d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2104d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2104dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2104dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2104e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2104e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2104e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2104e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2104e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2104E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2104E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2104F0u;
}
