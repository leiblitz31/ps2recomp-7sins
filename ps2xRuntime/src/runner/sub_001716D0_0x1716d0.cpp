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

// Function: sub_001716D0
// Address: 0x1716d0 - 0x171810
void sub_001716D0_0x1716d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001716D0_0x1716d0");
#endif

    switch (ctx->pc) {
        case 0x1716ecu: goto label_1716ec;
        case 0x17173cu: goto label_17173c;
        case 0x171750u: goto label_171750;
        case 0x171764u: goto label_171764;
        case 0x171774u: goto label_171774;
        case 0x171788u: goto label_171788;
        case 0x171798u: goto label_171798;
        case 0x1717acu: goto label_1717ac;
        case 0x1717bcu: goto label_1717bc;
        case 0x1717c8u: goto label_1717c8;
        case 0x1717d8u: goto label_1717d8;
        case 0x1717ecu: goto label_1717ec;
        default: break;
    }

    ctx->pc = 0x1716d0u;

    // 0x1716d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1716d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1716d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1716d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1716d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1716d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1716dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1716dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1716e0: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x1716e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1716e4: 0xc0557e8  jal         func_155FA0
    ctx->pc = 0x1716E4u;
    SET_GPR_U32(ctx, 31, 0x1716ECu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x1716E4u, 0x1716ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1716ECu;
label_1716ec:
    // 0x1716ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1716ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1716f0: 0x24633d10  addiu       $v1, $v1, 0x3D10
    ctx->pc = 0x1716f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15632));
    // 0x1716f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1716f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1716f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1716f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1716fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1716fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171704: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x171704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x171708: 0x3e00008  jr          $ra
    ctx->pc = 0x171708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171710u;
    // 0x171710: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x171710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x171714: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x171714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x171718: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x171718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17171c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17171cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x171720: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x171724: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x171724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x171728: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x171728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x17172c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17172cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x171730: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x171730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x171734: 0xc040304  jal         func_100C10
    ctx->pc = 0x171734u;
    SET_GPR_U32(ctx, 31, 0x17173Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x171734u, 0x17173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17173Cu;
label_17173c:
    // 0x17173c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x17173cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x171740: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x171740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x171744: 0x24a54670  addiu       $a1, $a1, 0x4670
    ctx->pc = 0x171744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18032));
    // 0x171748: 0xc055b50  jal         func_156D40
    ctx->pc = 0x171748u;
    SET_GPR_U32(ctx, 31, 0x171750u);
    ctx->pc = 0x156D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156D40u, 0x171748u, 0x171750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171750u;
label_171750:
    // 0x171750: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x171750u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x171754: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x171754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x171758: 0x27859030  addiu       $a1, $gp, -0x6FD0
    ctx->pc = 0x171758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938672));
    // 0x17175c: 0xc040304  jal         func_100C10
    ctx->pc = 0x17175Cu;
    SET_GPR_U32(ctx, 31, 0x171764u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x17175Cu, 0x171764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171764u;
label_171764:
    // 0x171764: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x171764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x171768: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x171768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17176c: 0xc05c618  jal         func_171860
    ctx->pc = 0x17176Cu;
    SET_GPR_U32(ctx, 31, 0x171774u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x17176Cu, 0x171774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171774u;
label_171774:
    // 0x171774: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x171774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171778: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x171778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17177c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17177cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x171780: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x171780u;
    SET_GPR_U32(ctx, 31, 0x171788u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x171780u, 0x171788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171788u;
label_171788:
    // 0x171788: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x171788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17178c: 0x27859038  addiu       $a1, $gp, -0x6FC8
    ctx->pc = 0x17178cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938680));
    // 0x171790: 0xc040304  jal         func_100C10
    ctx->pc = 0x171790u;
    SET_GPR_U32(ctx, 31, 0x171798u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x171790u, 0x171798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171798u;
label_171798:
    // 0x171798: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x171798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17179c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17179cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1717a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1717a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1717a4: 0xc05c63c  jal         func_1718F0
    ctx->pc = 0x1717A4u;
    SET_GPR_U32(ctx, 31, 0x1717ACu);
    ctx->pc = 0x1718F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1718F0u, 0x1717A4u, 0x1717ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717ACu;
label_1717ac:
    // 0x1717ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1717acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1717b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1717b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1717b4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1717B4u;
    SET_GPR_U32(ctx, 31, 0x1717BCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1717B4u, 0x1717BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717BCu;
label_1717bc:
    // 0x1717bc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1717bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1717c0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1717C0u;
    SET_GPR_U32(ctx, 31, 0x1717C8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1717C0u, 0x1717C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717C8u;
label_1717c8:
    // 0x1717c8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1717c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1717cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1717ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1717d0: 0xc055b50  jal         func_156D40
    ctx->pc = 0x1717D0u;
    SET_GPR_U32(ctx, 31, 0x1717D8u);
    ctx->pc = 0x156D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156D40u, 0x1717D0u, 0x1717D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717D8u;
label_1717d8:
    // 0x1717d8: 0x325000ff  andi        $s0, $s2, 0xFF
    ctx->pc = 0x1717d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1717dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1717dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1717e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1717e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1717e4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1717E4u;
    SET_GPR_U32(ctx, 31, 0x1717ECu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1717E4u, 0x1717ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717ECu;
label_1717ec:
    // 0x1717ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1717ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1717f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1717f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1717f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1717f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1717f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1717f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1717fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1717fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171800: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x171800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x171804: 0x3e00008  jr          $ra
    ctx->pc = 0x171804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17180Cu;
    // 0x17180c: 0x0  nop
    ctx->pc = 0x17180cu;
    // NOP
    ctx->pc = 0x171810u;
}
