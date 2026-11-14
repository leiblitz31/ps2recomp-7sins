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

// Function: sub_0030E598
// Address: 0x30e598 - 0x30e680
void sub_0030E598_0x30e598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E598_0x30e598");
#endif

    switch (ctx->pc) {
        case 0x30e5d8u: goto label_30e5d8;
        case 0x30e5e8u: goto label_30e5e8;
        case 0x30e62cu: goto label_30e62c;
        case 0x30e644u: goto label_30e644;
        case 0x30e65cu: goto label_30e65c;
        case 0x30e670u: goto label_30e670;
        default: break;
    }

    ctx->pc = 0x30e598u;

    // 0x30e598: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30e598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30e59c: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x30e59cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x30e5a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30e5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30e5a4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x30e5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30e5a8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x30e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x30e5ac: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x30e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x30e5b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x30e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e5b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30e5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30e5b8: 0x34630fd8  ori         $v1, $v1, 0xFD8
    ctx->pc = 0x30e5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4056);
    // 0x30e5bc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x30e5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x30e5c0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x30e5c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30e5c4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30E5C4u;
    {
        const bool branch_taken_0x30e5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e5c4) {
            ctx->pc = 0x30E5E0u;
            goto label_30e5e0;
        }
    }
    ctx->pc = 0x30E5CCu;
    // 0x30e5cc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x30e5ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e5d0: 0xc0c3724  jal         func_30DC90
    ctx->pc = 0x30E5D0u;
    SET_GPR_U32(ctx, 31, 0x30E5D8u);
    ctx->pc = 0x30E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E5D0u;
    // 0x30e5d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DC90u, 0x30E5D0u, 0x30E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E5D8u;
label_30e5d8:
    // 0x30e5d8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x30E5D8u;
    {
        const bool branch_taken_0x30e5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E5D8u;
        // 0x30e5dc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e5d8) {
            ctx->pc = 0x30E678u;
            goto label_30e678;
        }
    }
    ctx->pc = 0x30E5E0u;
label_30e5e0:
    // 0x30e5e0: 0xc0c3396  jal         func_30CE58
    ctx->pc = 0x30E5E0u;
    SET_GPR_U32(ctx, 31, 0x30E5E8u);
    ctx->pc = 0x30E5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E5E0u;
    // 0x30e5e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CE58u, 0x30E5E0u, 0x30E5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E5E8u;
label_30e5e8:
    // 0x30e5e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e5ec: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x30e5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x30e5f0: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x30E5F0u;
    {
        const bool branch_taken_0x30e5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E5F0u;
        // 0x30e5f4: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e5f0) {
            ctx->pc = 0x30E638u;
            goto label_30e638;
        }
    }
    ctx->pc = 0x30E5F8u;
    // 0x30e5f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30E5F8u;
    {
        const bool branch_taken_0x30e5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e5f8) {
            ctx->pc = 0x30E5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E5F8u;
            // 0x30e5fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E610u;
            goto label_30e610;
        }
    }
    ctx->pc = 0x30E600u;
    // 0x30e600: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30E600u;
    {
        const bool branch_taken_0x30e600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E600u;
        // 0x30e604: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e600) {
            ctx->pc = 0x30E620u;
            goto label_30e620;
        }
    }
    ctx->pc = 0x30E608u;
    // 0x30e608: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x30E608u;
    {
        const bool branch_taken_0x30e608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e608) {
            ctx->pc = 0x30E668u;
            goto label_30e668;
        }
    }
    ctx->pc = 0x30E610u;
label_30e610:
    // 0x30e610: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30E610u;
    {
        const bool branch_taken_0x30e610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E610u;
        // 0x30e614: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e610) {
            ctx->pc = 0x30E650u;
            goto label_30e650;
        }
    }
    ctx->pc = 0x30E618u;
    // 0x30e618: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30E618u;
    {
        const bool branch_taken_0x30e618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e618) {
            ctx->pc = 0x30E668u;
            goto label_30e668;
        }
    }
    ctx->pc = 0x30E620u;
label_30e620:
    // 0x30e620: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e624: 0xc0c3724  jal         func_30DC90
    ctx->pc = 0x30E624u;
    SET_GPR_U32(ctx, 31, 0x30E62Cu);
    ctx->pc = 0x30E628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E624u;
    // 0x30e628: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DC90u, 0x30E624u, 0x30E62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E62Cu;
label_30e62c:
    // 0x30e62c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x30E62Cu;
    {
        const bool branch_taken_0x30e62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E62Cu;
        // 0x30e630: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e62c) {
            ctx->pc = 0x30E678u;
            goto label_30e678;
        }
    }
    ctx->pc = 0x30E634u;
    // 0x30e634: 0x0  nop
    ctx->pc = 0x30e634u;
    // NOP
label_30e638:
    // 0x30e638: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x30e638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30e63c: 0xc0c34b6  jal         func_30D2D8
    ctx->pc = 0x30E63Cu;
    SET_GPR_U32(ctx, 31, 0x30E644u);
    ctx->pc = 0x30E640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E63Cu;
    // 0x30e640: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D2D8u, 0x30E63Cu, 0x30E644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E644u;
label_30e644:
    // 0x30e644: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30E644u;
    {
        const bool branch_taken_0x30e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E644u;
        // 0x30e648: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e644) {
            ctx->pc = 0x30E678u;
            goto label_30e678;
        }
    }
    ctx->pc = 0x30E64Cu;
    // 0x30e64c: 0x0  nop
    ctx->pc = 0x30e64cu;
    // NOP
label_30e650:
    // 0x30e650: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e654: 0xc0c3724  jal         func_30DC90
    ctx->pc = 0x30E654u;
    SET_GPR_U32(ctx, 31, 0x30E65Cu);
    ctx->pc = 0x30E658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E654u;
    // 0x30e658: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DC90u, 0x30E654u, 0x30E65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E65Cu;
label_30e65c:
    // 0x30e65c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30E65Cu;
    {
        const bool branch_taken_0x30e65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E65Cu;
        // 0x30e660: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e65c) {
            ctx->pc = 0x30E674u;
            goto label_30e674;
        }
    }
    ctx->pc = 0x30E664u;
    // 0x30e664: 0x0  nop
    ctx->pc = 0x30e664u;
    // NOP
label_30e668:
    // 0x30e668: 0xc0c34b6  jal         func_30D2D8
    ctx->pc = 0x30E668u;
    SET_GPR_U32(ctx, 31, 0x30E670u);
    ctx->pc = 0x30E66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E668u;
    // 0x30e66c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D2D8u, 0x30E668u, 0x30E670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E670u;
label_30e670:
    // 0x30e670: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30e670u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_30e674:
    // 0x30e674: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30e674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30e678:
    // 0x30e678: 0x3e00008  jr          $ra
    ctx->pc = 0x30E678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E678u;
        // 0x30e67c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E680u;
}
