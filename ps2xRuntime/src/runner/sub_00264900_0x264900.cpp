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

// Function: sub_00264900
// Address: 0x264900 - 0x264a60
void sub_00264900_0x264900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264900_0x264900");
#endif

    switch (ctx->pc) {
        case 0x264934u: goto label_264934;
        case 0x264948u: goto label_264948;
        case 0x26496cu: goto label_26496c;
        case 0x264994u: goto label_264994;
        case 0x2649b8u: goto label_2649b8;
        case 0x2649e0u: goto label_2649e0;
        case 0x264a10u: goto label_264a10;
        case 0x264a20u: goto label_264a20;
        case 0x264a44u: goto label_264a44;
        default: break;
    }

    ctx->pc = 0x264900u;

    // 0x264900: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x264900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x264904: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x264904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x264908: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x264908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26490c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26490cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x264910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x264910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x264914: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x264914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x264918: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x264918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x26491c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x26491cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x264920: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x264920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x264924: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x264924u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x264928: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x264928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26492c: 0xc099308  jal         func_264C20
    ctx->pc = 0x26492Cu;
    SET_GPR_U32(ctx, 31, 0x264934u);
    ctx->pc = 0x264C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264C20u, 0x26492Cu, 0x264934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264934u;
label_264934:
    // 0x264934: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x264934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x264938: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x264938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x26493c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x26493cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x264940: 0xc041954  jal         func_106550
    ctx->pc = 0x264940u;
    SET_GPR_U32(ctx, 31, 0x264948u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x264940u, 0x264948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264948u;
label_264948:
    // 0x264948: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x264948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x26494c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264950: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x264950u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264954: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x264954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264958: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x264958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x26495c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26495cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264960: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x264960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264964: 0xc099590  jal         func_265640
    ctx->pc = 0x264964u;
    SET_GPR_U32(ctx, 31, 0x26496Cu);
    ctx->pc = 0x265640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265640u, 0x264964u, 0x26496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26496Cu;
label_26496c:
    // 0x26496c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26496cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264970: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x264970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264974: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x264974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264978: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x264978u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x26497c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26497cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264980: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x264980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x264984: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x264984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264988: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x264988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x26498c: 0xc0992e8  jal         func_264BA0
    ctx->pc = 0x26498Cu;
    SET_GPR_U32(ctx, 31, 0x264994u);
    ctx->pc = 0x264BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264BA0u, 0x26498Cu, 0x264994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264994u;
label_264994:
    // 0x264994: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x264994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264998: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x264998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26499c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26499cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2649a0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2649A0u;
    {
        const bool branch_taken_0x2649a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2649a0) {
            ctx->pc = 0x2649C4u;
            goto label_2649c4;
        }
    }
    ctx->pc = 0x2649A8u;
    // 0x2649a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2649a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2649ac: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2649acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2649b0: 0xc099318  jal         func_264C60
    ctx->pc = 0x2649B0u;
    SET_GPR_U32(ctx, 31, 0x2649B8u);
    ctx->pc = 0x264C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264C60u, 0x2649B0u, 0x2649B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2649B8u;
label_2649b8:
    // 0x2649b8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2649b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2649bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2649BCu;
    {
        const bool branch_taken_0x2649bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2649bc) {
            ctx->pc = 0x2649E4u;
            goto label_2649e4;
        }
    }
    ctx->pc = 0x2649C4u;
label_2649c4:
    // 0x2649c4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x2649c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x2649c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2649c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2649cc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2649ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2649d0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2649d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2649d4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x2649d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2649d8: 0xc0992c8  jal         func_264B20
    ctx->pc = 0x2649D8u;
    SET_GPR_U32(ctx, 31, 0x2649E0u);
    ctx->pc = 0x264B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264B20u, 0x2649D8u, 0x2649E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2649E0u;
label_2649e0:
    // 0x2649e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2649e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2649e4:
    // 0x2649e4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2649e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2649e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2649E8u;
    {
        const bool branch_taken_0x2649e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2649e8) {
            ctx->pc = 0x264A14u;
            goto label_264a14;
        }
    }
    ctx->pc = 0x2649F0u;
    // 0x2649f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2649f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2649f4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x2649f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x2649f8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2649f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2649fc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2649fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x264a00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x264a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a04: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x264a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x264a08: 0xc0992e8  jal         func_264BA0
    ctx->pc = 0x264A08u;
    SET_GPR_U32(ctx, 31, 0x264A10u);
    ctx->pc = 0x264BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264BA0u, 0x264A08u, 0x264A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A10u;
label_264a10:
    // 0x264a10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x264a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_264a14:
    // 0x264a14: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x264a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264a18: 0xc0992ac  jal         func_264AB0
    ctx->pc = 0x264A18u;
    SET_GPR_U32(ctx, 31, 0x264A20u);
    ctx->pc = 0x264AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264AB0u, 0x264A18u, 0x264A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A20u;
label_264a20:
    // 0x264a20: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x264a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x264a24: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x264a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x264a28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x264a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x264a2c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x264a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x264a30: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x264a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264a34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x264a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x264a38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a3c: 0xc099298  jal         func_264A60
    ctx->pc = 0x264A3Cu;
    SET_GPR_U32(ctx, 31, 0x264A44u);
    ctx->pc = 0x264A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264A60u, 0x264A3Cu, 0x264A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A44u;
label_264a44:
    // 0x264a44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x264a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264a48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x264a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264a4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264a54: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x264a54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x264a58: 0x3e00008  jr          $ra
    ctx->pc = 0x264A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264A60u;
}
