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

// Function: sub_00321870
// Address: 0x321870 - 0x321940
void sub_00321870_0x321870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321870_0x321870");
#endif

    switch (ctx->pc) {
        case 0x3218a4u: goto label_3218a4;
        case 0x32192cu: goto label_32192c;
        default: break;
    }

    ctx->pc = 0x321870u;

    // 0x321870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x321870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x321874: 0x8f85a5e8  lw          $a1, -0x5A18($gp)
    ctx->pc = 0x321874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944232)));
    // 0x321878: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x321878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x32187c: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x32187cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x321880: 0x8f87a5ec  lw          $a3, -0x5A14($gp)
    ctx->pc = 0x321880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944236)));
    // 0x321884: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x321884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321888: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x321888u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x32188c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32188cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x321890: 0x2508b180  addiu       $t0, $t0, -0x4E80
    ctx->pc = 0x321890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947200));
    // 0x321894: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x321894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x321898: 0x3529011e  ori         $t1, $t1, 0x11E
    ctx->pc = 0x321898u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)286);
    // 0x32189c: 0xc10408c  jal         func_410230
    ctx->pc = 0x32189Cu;
    SET_GPR_U32(ctx, 31, 0x3218A4u);
    ctx->pc = 0x3218A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32189Cu;
    // 0x3218a0: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x32189Cu, 0x3218A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3218A4u;
label_3218a4:
    // 0x3218a4: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x3218a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x3218a8: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x3218a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x3218ac: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x3218acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x3218b0: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x3218b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x3218b4: 0x3c090032  lui         $t1, 0x32
    ctx->pc = 0x3218b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)50 << 16));
    // 0x3218b8: 0x3c0a0032  lui         $t2, 0x32
    ctx->pc = 0x3218b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)50 << 16));
    // 0x3218bc: 0x3c0b0032  lui         $t3, 0x32
    ctx->pc = 0x3218bcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)50 << 16));
    // 0x3218c0: 0x3c0c0032  lui         $t4, 0x32
    ctx->pc = 0x3218c0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)50 << 16));
    // 0x3218c4: 0x240d0024  addiu       $t5, $zero, 0x24
    ctx->pc = 0x3218c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3218c8: 0x24a5ece0  addiu       $a1, $a1, -0x1320
    ctx->pc = 0x3218c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962400));
    // 0x3218cc: 0x24c6f2c0  addiu       $a2, $a2, -0xD40
    ctx->pc = 0x3218ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963904));
    // 0x3218d0: 0x24e7edf0  addiu       $a3, $a3, -0x1210
    ctx->pc = 0x3218d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962672));
    // 0x3218d4: 0x2508f8e8  addiu       $t0, $t0, -0x718
    ctx->pc = 0x3218d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965480));
    // 0x3218d8: 0x2529f780  addiu       $t1, $t1, -0x880
    ctx->pc = 0x3218d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965120));
    // 0x3218dc: 0x254afa38  addiu       $t2, $t2, -0x5C8
    ctx->pc = 0x3218dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965816));
    // 0x3218e0: 0x256bfb18  addiu       $t3, $t3, -0x4E8
    ctx->pc = 0x3218e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294966040));
    // 0x3218e4: 0x258cfbd8  addiu       $t4, $t4, -0x428
    ctx->pc = 0x3218e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294966232));
    // 0x3218e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3218e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3218ec: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x3218ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x3218f0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3218f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3218f4: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x3218f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x3218f8: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x3218f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x3218fc: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x3218fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x321900: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x321900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x321904: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x321904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x321908: 0xafa9001c  sw          $t1, 0x1C($sp)
    ctx->pc = 0x321908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 9));
    // 0x32190c: 0xafaa0020  sw          $t2, 0x20($sp)
    ctx->pc = 0x32190cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 10));
    // 0x321910: 0xafab0024  sw          $t3, 0x24($sp)
    ctx->pc = 0x321910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
    // 0x321914: 0xafac0028  sw          $t4, 0x28($sp)
    ctx->pc = 0x321914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 12));
    // 0x321918: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x321918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x32191c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x32191cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x321920: 0xaf82bce4  sw          $v0, -0x431C($gp)
    ctx->pc = 0x321920u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950116), GPR_U32(ctx, 2));
    // 0x321924: 0xc0ef19a  jal         func_3BC668
    ctx->pc = 0x321924u;
    SET_GPR_U32(ctx, 31, 0x32192Cu);
    ctx->pc = 0x321928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321924u;
    // 0x321928: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC668u, 0x321924u, 0x32192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32192Cu;
label_32192c:
    // 0x32192c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32192cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321930: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x321930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321934: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x321934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x321938: 0x3e00008  jr          $ra
    ctx->pc = 0x321938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321938u;
        // 0x32193c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321940u;
}
