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

// Function: sub_0030E3C0
// Address: 0x30e3c0 - 0x30e498
void sub_0030E3C0_0x30e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E3C0_0x30e3c0");
#endif

    switch (ctx->pc) {
        case 0x30e400u: goto label_30e400;
        case 0x30e410u: goto label_30e410;
        case 0x30e450u: goto label_30e450;
        case 0x30e468u: goto label_30e468;
        case 0x30e478u: goto label_30e478;
        case 0x30e488u: goto label_30e488;
        default: break;
    }

    ctx->pc = 0x30e3c0u;

    // 0x30e3c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30e3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30e3c4: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x30e3c4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x30e3c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30e3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30e3cc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x30e3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30e3d0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x30e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x30e3d4: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x30e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x30e3d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x30e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e3dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30e3e0: 0x34630fd8  ori         $v1, $v1, 0xFD8
    ctx->pc = 0x30e3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4056);
    // 0x30e3e4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x30e3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x30e3e8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x30e3e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30e3ec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30E3ECu;
    {
        const bool branch_taken_0x30e3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e3ec) {
            ctx->pc = 0x30E408u;
            goto label_30e408;
        }
    }
    ctx->pc = 0x30E3F4u;
    // 0x30e3f4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x30e3f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e3f8: 0xc0c34b6  jal         func_30D2D8
    ctx->pc = 0x30E3F8u;
    SET_GPR_U32(ctx, 31, 0x30E400u);
    ctx->pc = 0x30D2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D2D8u, 0x30E3F8u, 0x30E400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E400u;
label_30e400:
    // 0x30e400: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30E400u;
    {
        const bool branch_taken_0x30e400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E400u;
        // 0x30e404: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e400) {
            ctx->pc = 0x30E48Cu;
            goto label_30e48c;
        }
    }
    ctx->pc = 0x30E408u;
label_30e408:
    // 0x30e408: 0xc0c3396  jal         func_30CE58
    ctx->pc = 0x30E408u;
    SET_GPR_U32(ctx, 31, 0x30E410u);
    ctx->pc = 0x30E40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E408u;
    // 0x30e40c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CE58u, 0x30E408u, 0x30E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E410u;
label_30e410:
    // 0x30e410: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e414: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x30e414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x30e418: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x30E418u;
    {
        const bool branch_taken_0x30e418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E418u;
        // 0x30e41c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e418) {
            ctx->pc = 0x30E458u;
            goto label_30e458;
        }
    }
    ctx->pc = 0x30E420u;
    // 0x30e420: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30E420u;
    {
        const bool branch_taken_0x30e420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e420) {
            ctx->pc = 0x30E424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E420u;
            // 0x30e424: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E438u;
            goto label_30e438;
        }
    }
    ctx->pc = 0x30E428u;
    // 0x30e428: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30E428u;
    {
        const bool branch_taken_0x30e428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E428u;
        // 0x30e42c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e428) {
            ctx->pc = 0x30E448u;
            goto label_30e448;
        }
    }
    ctx->pc = 0x30E430u;
    // 0x30e430: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30E430u;
    {
        const bool branch_taken_0x30e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E430u;
        // 0x30e434: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e430) {
            ctx->pc = 0x30E480u;
            goto label_30e480;
        }
    }
    ctx->pc = 0x30E438u;
label_30e438:
    // 0x30e438: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30E438u;
    {
        const bool branch_taken_0x30e438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E438u;
        // 0x30e43c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e438) {
            ctx->pc = 0x30E470u;
            goto label_30e470;
        }
    }
    ctx->pc = 0x30E440u;
    // 0x30e440: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30E440u;
    {
        const bool branch_taken_0x30e440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E440u;
        // 0x30e444: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e440) {
            ctx->pc = 0x30E480u;
            goto label_30e480;
        }
    }
    ctx->pc = 0x30E448u;
label_30e448:
    // 0x30e448: 0xc0c34b6  jal         func_30D2D8
    ctx->pc = 0x30E448u;
    SET_GPR_U32(ctx, 31, 0x30E450u);
    ctx->pc = 0x30E44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E448u;
    // 0x30e44c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D2D8u, 0x30E448u, 0x30E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E450u;
label_30e450:
    // 0x30e450: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x30E450u;
    {
        const bool branch_taken_0x30e450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E450u;
        // 0x30e454: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e450) {
            ctx->pc = 0x30E48Cu;
            goto label_30e48c;
        }
    }
    ctx->pc = 0x30E458u;
label_30e458:
    // 0x30e458: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x30e458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30e45c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e460: 0xc0c3724  jal         func_30DC90
    ctx->pc = 0x30E460u;
    SET_GPR_U32(ctx, 31, 0x30E468u);
    ctx->pc = 0x30E464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E460u;
    // 0x30e464: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DC90u, 0x30E460u, 0x30E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E468u;
label_30e468:
    // 0x30e468: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30E468u;
    {
        const bool branch_taken_0x30e468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E468u;
        // 0x30e46c: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e468) {
            ctx->pc = 0x30E488u;
            goto label_30e488;
        }
    }
    ctx->pc = 0x30E470u;
label_30e470:
    // 0x30e470: 0xc0c34b6  jal         func_30D2D8
    ctx->pc = 0x30E470u;
    SET_GPR_U32(ctx, 31, 0x30E478u);
    ctx->pc = 0x30E474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E470u;
    // 0x30e474: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D2D8u, 0x30E470u, 0x30E478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E478u;
label_30e478:
    // 0x30e478: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30E478u;
    {
        const bool branch_taken_0x30e478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E478u;
        // 0x30e47c: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e478) {
            ctx->pc = 0x30E488u;
            goto label_30e488;
        }
    }
    ctx->pc = 0x30E480u;
label_30e480:
    // 0x30e480: 0xc0c3724  jal         func_30DC90
    ctx->pc = 0x30E480u;
    SET_GPR_U32(ctx, 31, 0x30E488u);
    ctx->pc = 0x30E484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E480u;
    // 0x30e484: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DC90u, 0x30E480u, 0x30E488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E488u;
label_30e488:
    // 0x30e488: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30e488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30e48c:
    // 0x30e48c: 0x3e00008  jr          $ra
    ctx->pc = 0x30E48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E48Cu;
        // 0x30e490: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E494u;
    // 0x30e494: 0x0  nop
    ctx->pc = 0x30e494u;
    // NOP
    ctx->pc = 0x30e498u;
}
