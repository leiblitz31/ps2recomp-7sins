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

// Function: sub_00407578
// Address: 0x407578 - 0x407678
void sub_00407578_0x407578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407578_0x407578");
#endif

    switch (ctx->pc) {
        case 0x4075b4u: goto label_4075b4;
        case 0x407640u: goto label_407640;
        case 0x407650u: goto label_407650;
        case 0x407658u: goto label_407658;
        default: break;
    }

    ctx->pc = 0x407578u;

    // 0x407578: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x407578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x40757c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x40757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x407580: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x407580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x407584: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x407584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407588: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x407588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x40758c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x40758cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407590: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x407590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x407594: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x407594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x407598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40759c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x40759cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4075a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4075A0u;
    {
        const bool branch_taken_0x4075a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4075A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4075A0u;
        // 0x4075a4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4075a0) {
            ctx->pc = 0x4075B4u;
            goto label_4075b4;
        }
    }
    ctx->pc = 0x4075A8u;
    // 0x4075a8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4075a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4075ac: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x4075ACu;
    SET_GPR_U32(ctx, 31, 0x4075B4u);
    ctx->pc = 0x4075B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4075ACu;
    // 0x4075b0: 0x24a50498  addiu       $a1, $a1, 0x498 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x4075ACu, 0x4075B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4075B4u;
label_4075b4:
    // 0x4075b4: 0x10323a  dsrl        $a2, $s0, 8
    ctx->pc = 0x4075b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) >> 8);
    // 0x4075b8: 0x10163a  dsrl        $v0, $s0, 24
    ctx->pc = 0x4075b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 24);
    // 0x4075bc: 0x101c3a  dsrl        $v1, $s0, 16
    ctx->pc = 0x4075bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) >> 16);
    // 0x4075c0: 0x11463a  dsrl        $t0, $s1, 24
    ctx->pc = 0x4075c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) >> 24);
    // 0x4075c4: 0x114c3a  dsrl        $t1, $s1, 16
    ctx->pc = 0x4075c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) >> 16);
    // 0x4075c8: 0x11523a  dsrl        $t2, $s1, 8
    ctx->pc = 0x4075c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) >> 8);
    // 0x4075cc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4075ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4075d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4075d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4075d4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4075d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4075d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4075d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4075dc: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x4075dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x4075e0: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x4075e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x4075e4: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x4075e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x4075e8: 0x320700ff  andi        $a3, $s0, 0xFF
    ctx->pc = 0x4075e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x4075ec: 0x322b00ff  andi        $t3, $s1, 0xFF
    ctx->pc = 0x4075ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x4075f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4075f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4075f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4075f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4075f8: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x4075f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4075fc: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x4075fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x407600: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x407600u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x407604: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x407604u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x407608: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x407608u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x40760c: 0xa3a60002  sb          $a2, 0x2($sp)
    ctx->pc = 0x40760cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x407610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x407610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407614: 0xa3b30008  sb          $s3, 0x8($sp)
    ctx->pc = 0x407614u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 19));
    // 0x407618: 0x2785aca0  addiu       $a1, $gp, -0x5360
    ctx->pc = 0x407618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945952));
    // 0x40761c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x40761cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x407620: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x407620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x407624: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x407624u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x407628: 0xa3a70003  sb          $a3, 0x3($sp)
    ctx->pc = 0x407628u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x40762c: 0xa3a80004  sb          $t0, 0x4($sp)
    ctx->pc = 0x40762cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 8));
    // 0x407630: 0xa3a90005  sb          $t1, 0x5($sp)
    ctx->pc = 0x407630u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 9));
    // 0x407634: 0xa3aa0006  sb          $t2, 0x6($sp)
    ctx->pc = 0x407634u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 10));
    // 0x407638: 0xc101b98  jal         func_406E60
    ctx->pc = 0x407638u;
    SET_GPR_U32(ctx, 31, 0x407640u);
    ctx->pc = 0x40763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407638u;
    // 0x40763c: 0xa3ab0007  sb          $t3, 0x7($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 7), (uint8_t)GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x407638u, 0x407640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407640u;
label_407640:
    // 0x407640: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x407640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407644: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x407644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407648: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x407648u;
    SET_GPR_U32(ctx, 31, 0x407650u);
    ctx->pc = 0x40764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407648u;
    // 0x40764c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x407648u, 0x407650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407650u;
label_407650:
    // 0x407650: 0xc101bda  jal         func_406F68
    ctx->pc = 0x407650u;
    SET_GPR_U32(ctx, 31, 0x407658u);
    ctx->pc = 0x407654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407650u;
    // 0x407654: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x407650u, 0x407658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407658u;
label_407658:
    // 0x407658: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x407658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40765c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x40765cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x407660: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x407660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x407664: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x407664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x407668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x407668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40766c: 0x3e00008  jr          $ra
    ctx->pc = 0x40766Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40766Cu;
        // 0x407670: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40766Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x407674u;
    // 0x407674: 0x0  nop
    ctx->pc = 0x407674u;
    // NOP
    ctx->pc = 0x407678u;
}
