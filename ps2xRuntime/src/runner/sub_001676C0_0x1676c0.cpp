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

// Function: sub_001676C0
// Address: 0x1676c0 - 0x167820
void sub_001676C0_0x1676c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001676C0_0x1676c0");
#endif

    switch (ctx->pc) {
        case 0x1676f4u: goto label_1676f4;
        case 0x167708u: goto label_167708;
        case 0x16772cu: goto label_16772c;
        case 0x167754u: goto label_167754;
        case 0x167778u: goto label_167778;
        case 0x1677a0u: goto label_1677a0;
        case 0x1677d0u: goto label_1677d0;
        case 0x1677e0u: goto label_1677e0;
        case 0x167804u: goto label_167804;
        default: break;
    }

    ctx->pc = 0x1676c0u;

    // 0x1676c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1676c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1676c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1676c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1676c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1676c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1676cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1676ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1676d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1676d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1676d4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1676d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1676d8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1676d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1676dc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1676dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1676e0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1676e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1676e4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1676e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1676e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1676e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1676ec: 0xc0599e8  jal         func_1667A0
    ctx->pc = 0x1676ECu;
    SET_GPR_U32(ctx, 31, 0x1676F4u);
    ctx->pc = 0x1667A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1667A0u, 0x1676ECu, 0x1676F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1676F4u;
label_1676f4:
    // 0x1676f4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1676f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1676f8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1676f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1676fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1676fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x167700: 0xc041954  jal         func_106550
    ctx->pc = 0x167700u;
    SET_GPR_U32(ctx, 31, 0x167708u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x167700u, 0x167708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167708u;
label_167708:
    // 0x167708: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x167708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x16770c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16770cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167710: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x167710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167714: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x167714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167718: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x167718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x16771c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16771cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167720: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x167720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167724: 0xc059eec  jal         func_167BB0
    ctx->pc = 0x167724u;
    SET_GPR_U32(ctx, 31, 0x16772Cu);
    ctx->pc = 0x167BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167BB0u, 0x167724u, 0x16772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16772Cu;
label_16772c:
    // 0x16772c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16772cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167730: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x167730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167734: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x167734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167738: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x167738u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x16773c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16773cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167740: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x167740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x167744: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x167744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167748: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x167748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x16774c: 0xc059ecc  jal         func_167B30
    ctx->pc = 0x16774Cu;
    SET_GPR_U32(ctx, 31, 0x167754u);
    ctx->pc = 0x167B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B30u, 0x16774Cu, 0x167754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167754u;
label_167754:
    // 0x167754: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x167754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167758: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x167758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16775c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167760: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x167760u;
    {
        const bool branch_taken_0x167760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167760) {
            ctx->pc = 0x167784u;
            goto label_167784;
        }
    }
    ctx->pc = 0x167768u;
    // 0x167768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16776c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x16776cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x167770: 0xc059e58  jal         func_167960
    ctx->pc = 0x167770u;
    SET_GPR_U32(ctx, 31, 0x167778u);
    ctx->pc = 0x167960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167960u, 0x167770u, 0x167778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167778u;
label_167778:
    // 0x167778: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x167778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x16777c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16777Cu;
    {
        const bool branch_taken_0x16777c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16777c) {
            ctx->pc = 0x1677A4u;
            goto label_1677a4;
        }
    }
    ctx->pc = 0x167784u;
label_167784:
    // 0x167784: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x167784u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x167788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16778c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x16778cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167790: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x167790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x167794: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x167794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x167798: 0xc059e38  jal         func_1678E0
    ctx->pc = 0x167798u;
    SET_GPR_U32(ctx, 31, 0x1677A0u);
    ctx->pc = 0x1678E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1678E0u, 0x167798u, 0x1677A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1677A0u;
label_1677a0:
    // 0x1677a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1677a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1677a4:
    // 0x1677a4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1677a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1677a8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1677A8u;
    {
        const bool branch_taken_0x1677a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1677a8) {
            ctx->pc = 0x1677D4u;
            goto label_1677d4;
        }
    }
    ctx->pc = 0x1677B0u;
    // 0x1677b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1677b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1677b4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1677b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1677b8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1677b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1677bc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1677bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1677c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1677c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1677c4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1677c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1677c8: 0xc059ecc  jal         func_167B30
    ctx->pc = 0x1677C8u;
    SET_GPR_U32(ctx, 31, 0x1677D0u);
    ctx->pc = 0x167B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B30u, 0x1677C8u, 0x1677D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1677D0u;
label_1677d0:
    // 0x1677d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1677d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1677d4:
    // 0x1677d4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1677d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1677d8: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1677D8u;
    SET_GPR_U32(ctx, 31, 0x1677E0u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1677D8u, 0x1677E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1677E0u;
label_1677e0:
    // 0x1677e0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1677e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1677e4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1677e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1677e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1677e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1677ec: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1677ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1677f0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1677f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1677f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1677f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1677f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1677f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1677fc: 0xc059e08  jal         func_167820
    ctx->pc = 0x1677FCu;
    SET_GPR_U32(ctx, 31, 0x167804u);
    ctx->pc = 0x167820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167820u, 0x1677FCu, 0x167804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167804u;
label_167804:
    // 0x167804: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x167804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167808: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16780c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16780cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167814: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x167814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x167818: 0x3e00008  jr          $ra
    ctx->pc = 0x167818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167820u;
}
