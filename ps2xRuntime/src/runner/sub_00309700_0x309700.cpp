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

// Function: sub_00309700
// Address: 0x309700 - 0x309800
void sub_00309700_0x309700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309700_0x309700");
#endif

    switch (ctx->pc) {
        case 0x30975cu: goto label_30975c;
        case 0x309784u: goto label_309784;
        case 0x30979cu: goto label_30979c;
        case 0x3097f0u: goto label_3097f0;
        default: break;
    }

    ctx->pc = 0x309700u;

    // 0x309700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x309700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x309704: 0x3c0208ca  lui         $v0, 0x8CA
    ctx->pc = 0x309704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2250 << 16));
    // 0x309708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x309708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30970c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30970cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309710: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x309710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x309714: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x309714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309718: 0x72020019  multu1      $zero, $s0, $v0
    ctx->pc = 0x309718u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 16) * (uint64_t)GPR_U32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30971c: 0x820019  multu       $a0, $v0
    ctx->pc = 0x30971cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x309720: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x309720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x309724: 0x34a54240  ori         $a1, $a1, 0x4240
    ctx->pc = 0x309724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16960);
    // 0x309728: 0x70008010  mfhi1       $s0
    ctx->pc = 0x309728u;
    SET_GPR_U64(ctx, 16, ctx->hi1);
    // 0x30972c: 0x3012  mflo        $a2
    ctx->pc = 0x30972cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x309730: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x309730u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x309734: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x309734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x309738: 0x2010  mfhi        $a0
    ctx->pc = 0x309738u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x30973c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x30973cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x309740: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x309740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x309744: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x309744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x309748: 0x70003012  mflo1       $a2
    ctx->pc = 0x309748u;
    SET_GPR_U64(ctx, 6, ctx->lo1);
    // 0x30974c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x30974cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x309750: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x309750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x309754: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x309754u;
    SET_GPR_U32(ctx, 31, 0x30975Cu);
    ctx->pc = 0x309758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309754u;
    // 0x309758: 0x2068025  or          $s0, $s0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x309754u, 0x30975Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30975Cu;
label_30975c:
    // 0x30975c: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x30975cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x309760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x309760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309768: 0x3e00008  jr          $ra
    ctx->pc = 0x309768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309768u;
        // 0x30976c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309770u;
    // 0x309770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x309770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x309774: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x309774u;
    {
        const bool branch_taken_0x309774 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x309778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309774u;
        // 0x309778: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309774) {
            ctx->pc = 0x30978Cu;
            goto label_30978c;
        }
    }
    ctx->pc = 0x30977Cu;
    // 0x30977c: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x30977Cu;
    SET_GPR_U32(ctx, 31, 0x309784u);
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x30977Cu, 0x309784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309784u;
label_309784:
    // 0x309784: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x309784u;
    {
        const bool branch_taken_0x309784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309784u;
        // 0x309788: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309784) {
            ctx->pc = 0x3097A0u;
            goto label_3097a0;
        }
    }
    ctx->pc = 0x30978Cu;
label_30978c:
    // 0x30978c: 0x4107a  dsrl        $v0, $a0, 1
    ctx->pc = 0x30978cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 1);
    // 0x309790: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x309790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x309794: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x309794u;
    SET_GPR_U32(ctx, 31, 0x30979Cu);
    ctx->pc = 0x309798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309794u;
    // 0x309798: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x309794u, 0x30979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30979Cu;
label_30979c:
    // 0x30979c: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x30979cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3097a0:
    // 0x3097a0: 0x3c014d0c  lui         $at, 0x4D0C
    ctx->pc = 0x3097a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19724 << 16));
    // 0x3097a4: 0x3421a000  ori         $at, $at, 0xA000
    ctx->pc = 0x3097a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40960);
    // 0x3097a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3097a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3097ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3097acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3097b0: 0x0  nop
    ctx->pc = 0x3097b0u;
    // NOP
    // 0x3097b4: 0x0  nop
    ctx->pc = 0x3097b4u;
    // NOP
    // 0x3097b8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3097b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3097bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3097BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3097C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097BCu;
        // 0x3097c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3097BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3097C4u;
    // 0x3097c4: 0x0  nop
    ctx->pc = 0x3097c4u;
    // NOP
    // 0x3097c8: 0x3c014d0c  lui         $at, 0x4D0C
    ctx->pc = 0x3097c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19724 << 16));
    // 0x3097cc: 0x3421a000  ori         $at, $at, 0xA000
    ctx->pc = 0x3097ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40960);
    // 0x3097d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3097d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3097d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3097d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3097d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3097d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3097dc: 0x0  nop
    ctx->pc = 0x3097dcu;
    // NOP
    // 0x3097e0: 0x0  nop
    ctx->pc = 0x3097e0u;
    // NOP
    // 0x3097e4: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x3097e4u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x3097e8: 0xc0beba2  jal         func_2FAE88
    ctx->pc = 0x3097E8u;
    SET_GPR_U32(ctx, 31, 0x3097F0u);
    ctx->pc = 0x2FAE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAE88u, 0x3097E8u, 0x3097F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3097F0u;
label_3097f0:
    // 0x3097f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3097f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3097f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3097F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3097F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3097F4u;
        // 0x3097f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3097F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3097FCu;
    // 0x3097fc: 0x0  nop
    ctx->pc = 0x3097fcu;
    // NOP
    ctx->pc = 0x309800u;
}
