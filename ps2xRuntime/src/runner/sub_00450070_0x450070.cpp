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

// Function: sub_00450070
// Address: 0x450070 - 0x450180
void sub_00450070_0x450070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450070_0x450070");
#endif

    switch (ctx->pc) {
        case 0x4500a4u: goto label_4500a4;
        case 0x4500b8u: goto label_4500b8;
        case 0x4500dcu: goto label_4500dc;
        case 0x4500f8u: goto label_4500f8;
        case 0x450110u: goto label_450110;
        case 0x450138u: goto label_450138;
        case 0x450148u: goto label_450148;
        case 0x450164u: goto label_450164;
        default: break;
    }

    ctx->pc = 0x450070u;

    // 0x450070: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x450070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x450074: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x450074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x450078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x450078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45007c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45007cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x450080: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x450080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x450084: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x450084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x450088: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x450088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x45008c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x45008cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x450090: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x450090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x450094: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x450094u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x450098: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x450098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45009c: 0xc113f28  jal         func_44FCA0
    ctx->pc = 0x45009Cu;
    SET_GPR_U32(ctx, 31, 0x4500A4u);
    ctx->pc = 0x44FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FCA0u, 0x45009Cu, 0x4500A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4500A4u;
label_4500a4:
    // 0x4500a4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x4500a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x4500a8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x4500a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x4500ac: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x4500acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4500b0: 0xc041954  jal         func_106550
    ctx->pc = 0x4500B0u;
    SET_GPR_U32(ctx, 31, 0x4500B8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x4500B0u, 0x4500B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4500B8u;
label_4500b8:
    // 0x4500b8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x4500b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x4500bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4500bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4500c0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x4500c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4500c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4500c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4500c8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x4500c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4500cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4500ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4500d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4500d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4500d4: 0xc114808  jal         func_452020
    ctx->pc = 0x4500D4u;
    SET_GPR_U32(ctx, 31, 0x4500DCu);
    ctx->pc = 0x452020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452020u, 0x4500D4u, 0x4500DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4500DCu;
label_4500dc:
    // 0x4500dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4500dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4500e0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4500e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4500e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4500e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4500e8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x4500e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4500ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4500ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4500f0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x4500F0u;
    SET_GPR_U32(ctx, 31, 0x4500F8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x4500F0u, 0x4500F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4500F8u;
label_4500f8:
    // 0x4500f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4500f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4500fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4500fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450100: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x450100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x450104: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x450104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x450108: 0xc114094  jal         func_450250
    ctx->pc = 0x450108u;
    SET_GPR_U32(ctx, 31, 0x450110u);
    ctx->pc = 0x450250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450250u, 0x450108u, 0x450110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450110u;
label_450110:
    // 0x450110: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x450110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450114: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x450114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x450118: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x450118u;
    {
        const bool branch_taken_0x450118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x450118) {
            ctx->pc = 0x45013Cu;
            goto label_45013c;
        }
    }
    ctx->pc = 0x450120u;
    // 0x450120: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x450120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x450124: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x450124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x450128: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x450128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x45012c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45012cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450130: 0xc041934  jal         func_1064D0
    ctx->pc = 0x450130u;
    SET_GPR_U32(ctx, 31, 0x450138u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x450130u, 0x450138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450138u;
label_450138:
    // 0x450138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x450138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45013c:
    // 0x45013c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x45013cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x450140: 0xc114074  jal         func_4501D0
    ctx->pc = 0x450140u;
    SET_GPR_U32(ctx, 31, 0x450148u);
    ctx->pc = 0x4501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4501D0u, 0x450140u, 0x450148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450148u;
label_450148:
    // 0x450148: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x450148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x45014c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x45014cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x450150: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x450150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x450154: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x450154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450158: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x450158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45015c: 0xc114060  jal         func_450180
    ctx->pc = 0x45015Cu;
    SET_GPR_U32(ctx, 31, 0x450164u);
    ctx->pc = 0x450180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450180u, 0x45015Cu, 0x450164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450164u;
label_450164:
    // 0x450164: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x450164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x450168: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x450168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45016c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45016cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x450170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450174: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x450174u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x450178: 0x3e00008  jr          $ra
    ctx->pc = 0x450178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x450180u;
}
