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

// Function: sub_003F1EF8
// Address: 0x3f1ef8 - 0x3f2110
void sub_003F1EF8_0x3f1ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1EF8_0x3f1ef8");
#endif

    switch (ctx->pc) {
        case 0x3f1f44u: goto label_3f1f44;
        case 0x3f1f58u: goto label_3f1f58;
        case 0x3f1f68u: goto label_3f1f68;
        case 0x3f1f78u: goto label_3f1f78;
        case 0x3f1f8cu: goto label_3f1f8c;
        case 0x3f1fa8u: goto label_3f1fa8;
        case 0x3f1fb4u: goto label_3f1fb4;
        case 0x3f2054u: goto label_3f2054;
        default: break;
    }

    ctx->pc = 0x3f1ef8u;

    // 0x3f1ef8: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3f1ef8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3f1efc: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3f1efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3f1f00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f1f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f1f04: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1F04u;
        // 0x3f1f08: 0xfc820108  sd          $v0, 0x108($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 264), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1F0Cu;
    // 0x3f1f0c: 0x0  nop
    ctx->pc = 0x3f1f0cu;
    // NOP
    // 0x3f1f10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f1f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3f1f14: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3f1f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3f1f18: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3f1f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3f1f1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f1f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1f20: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3f1f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3f1f24: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3f1f24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1f28: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3f1f28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1f2c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3f1f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3f1f30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f1f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3f1f34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f1f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f1f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f1f3c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3F1F3Cu;
    SET_GPR_U32(ctx, 31, 0x3F1F44u);
    ctx->pc = 0x3F1F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1F3Cu;
    // 0x3f1f40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3F1F3Cu, 0x3F1F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1F44u;
label_3f1f44:
    // 0x3f1f44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f1f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1f48: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3f1f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3f1f4c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3f1f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3f1f50: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x3F1F50u;
    SET_GPR_U32(ctx, 31, 0x3F1F58u);
    ctx->pc = 0x3F1F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1F50u;
    // 0x3f1f54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x3F1F50u, 0x3F1F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1F58u;
label_3f1f58:
    // 0x3f1f58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f1f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1f5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f1f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1f60: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x3F1F60u;
    SET_GPR_U32(ctx, 31, 0x3F1F68u);
    ctx->pc = 0x3F1F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1F60u;
    // 0x3f1f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x3F1F60u, 0x3F1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1F68u;
label_3f1f68:
    // 0x3f1f68: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F1F68u;
    {
        const bool branch_taken_0x3f1f68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3F1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1F68u;
        // 0x3f1f6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1f68) {
            ctx->pc = 0x3F1F7Cu;
            goto label_3f1f7c;
        }
    }
    ctx->pc = 0x3F1F70u;
    // 0x3f1f70: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x3F1F70u;
    SET_GPR_U32(ctx, 31, 0x3F1F78u);
    ctx->pc = 0x3F1F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1F70u;
    // 0x3f1f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x3F1F70u, 0x3F1F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1F78u;
label_3f1f78:
    // 0x3f1f78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f1f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f1f7c:
    // 0x3f1f7c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3f1f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3f1f80: 0xdc25e9f8  ld          $a1, -0x1608($at)
    ctx->pc = 0x3f1f80u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FE9F8u));
    // 0x3f1f84: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x3F1F84u;
    SET_GPR_U32(ctx, 31, 0x3F1F8Cu);
    ctx->pc = 0x3F1F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1F84u;
    // 0x3f1f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x3F1F84u, 0x3F1F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1F8Cu;
label_3f1f8c:
    // 0x3f1f8c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F1F8Cu;
    {
        const bool branch_taken_0x3f1f8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3F1F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1F8Cu;
        // 0x3f1f90: 0x24032000  addiu       $v1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1f8c) {
            ctx->pc = 0x3F1FA0u;
            goto label_3f1fa0;
        }
    }
    ctx->pc = 0x3F1F94u;
    // 0x3f1f94: 0xde220108  ld          $v0, 0x108($s1)
    ctx->pc = 0x3f1f94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x3f1f98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f1f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f1f9c: 0xfe220108  sd          $v0, 0x108($s1)
    ctx->pc = 0x3f1f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 264), GPR_U64(ctx, 2));
label_3f1fa0:
    // 0x3f1fa0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F1FA0u;
    SET_GPR_U32(ctx, 31, 0x3F1FA8u);
    ctx->pc = 0x3F1FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1FA0u;
    // 0x3f1fa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F1FA0u, 0x3F1FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1FA8u;
label_3f1fa8:
    // 0x3f1fa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f1fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1fac: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3F1FACu;
    SET_GPR_U32(ctx, 31, 0x3F1FB4u);
    ctx->pc = 0x3F1FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F1FACu;
    // 0x3f1fb0: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3F1FACu, 0x3F1FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F1FB4u;
label_3f1fb4:
    // 0x3f1fb4: 0xe6200250  swc1        $f0, 0x250($s1)
    ctx->pc = 0x3f1fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 592), bits); }
    // 0x3f1fb8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3f1fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f1fbc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3f1fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f1fc0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f1fc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f1fc4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3f1fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f1fc8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3f1fc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f1fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f1fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f1fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1FD0u;
        // 0x3f1fd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1FD8u;
    // 0x3f1fd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f1fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f1fdc: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x3f1fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3f1fe0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3f1fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3f1fe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f1fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f1fe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f1fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1fec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f1fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f1ff0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F1FF0u;
    {
        const bool branch_taken_0x3f1ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1FF0u;
        // 0x3f1ff4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1ff0) {
            ctx->pc = 0x3F2054u;
            goto label_3f2054;
        }
    }
    ctx->pc = 0x3F1FF8u;
    // 0x3f1ff8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3f1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3f1ffc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3f1ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3f2000: 0x2442ea00  addiu       $v0, $v0, -0x1600
    ctx->pc = 0x3f2000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961664));
    // 0x3f2004: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f2004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f2008: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3f2008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f200c: 0x800008  jr          $a0
    ctx->pc = 0x3F200Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F2014u: goto label_3f2014;
            case 0x3F202Cu: goto label_3f202c;
            case 0x3F2044u: goto label_3f2044;
            case 0x3F2054u: goto label_3f2054;
            case 0x3F2064u: goto label_3f2064;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F200Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3F2014u;
label_3f2014:
    // 0x3f2014: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x3f2014u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3f2018: 0x2403f3ff  addiu       $v1, $zero, -0xC01
    ctx->pc = 0x3f2018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
    // 0x3f201c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x3f201cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3f2020: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f2020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f2024: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3F2024u;
    {
        const bool branch_taken_0x3f2024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2024u;
        // 0x3f2028: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2024) {
            ctx->pc = 0x3F2060u;
            goto label_3f2060;
        }
    }
    ctx->pc = 0x3F202Cu;
label_3f202c:
    // 0x3f202c: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x3f202cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3f2030: 0x2403f3ff  addiu       $v1, $zero, -0xC01
    ctx->pc = 0x3f2030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
    // 0x3f2034: 0x24040c00  addiu       $a0, $zero, 0xC00
    ctx->pc = 0x3f2034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x3f2038: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f2038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f203c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3F203Cu;
    {
        const bool branch_taken_0x3f203c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F203Cu;
        // 0x3f2040: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f203c) {
            ctx->pc = 0x3F2060u;
            goto label_3f2060;
        }
    }
    ctx->pc = 0x3F2044u;
label_3f2044:
    // 0x3f2044: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f2044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f2048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f204c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F204Cu;
    SET_GPR_U32(ctx, 31, 0x3F2054u);
    ctx->pc = 0x3F2050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F204Cu;
    // 0x3f2050: 0x24a5e760  addiu       $a1, $a1, -0x18A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F204Cu, 0x3F2054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2054u;
label_3f2054:
    // 0x3f2054: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x3f2054u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3f2058: 0x2403f3ff  addiu       $v1, $zero, -0xC01
    ctx->pc = 0x3f2058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
    // 0x3f205c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f205cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3f2060:
    // 0x3f2060: 0xfe020100  sd          $v0, 0x100($s0)
    ctx->pc = 0x3f2060u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 256), GPR_U64(ctx, 2));
label_3f2064:
    // 0x3f2064: 0x2e220006  sltiu       $v0, $s1, 0x6
    ctx->pc = 0x3f2064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3f2068: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3F2068u;
    {
        const bool branch_taken_0x3f2068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2068u;
        // 0x3f206c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2068) {
            ctx->pc = 0x3F20D0u;
            goto label_3f20d0;
        }
    }
    ctx->pc = 0x3F2070u;
    // 0x3f2070: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3f2070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3f2074: 0x2442ea20  addiu       $v0, $v0, -0x15E0
    ctx->pc = 0x3f2074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x3f2078: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f2078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f207c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3f207cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f2080: 0x800008  jr          $a0
    ctx->pc = 0x3F2080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F2088u: goto label_3f2088;
            case 0x3F20A0u: goto label_3f20a0;
            case 0x3F20B8u: goto label_3f20b8;
            case 0x3F20D0u: goto label_3f20d0;
            case 0x3F20E0u: goto label_3f20e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2080u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3F2088u;
label_3f2088:
    // 0x3f2088: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x3f2088u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3f208c: 0x2403fcff  addiu       $v1, $zero, -0x301
    ctx->pc = 0x3f208cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
    // 0x3f2090: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x3f2090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3f2094: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f2094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f2098: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3F2098u;
    {
        const bool branch_taken_0x3f2098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2098u;
        // 0x3f209c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2098) {
            ctx->pc = 0x3F20DCu;
            goto label_3f20dc;
        }
    }
    ctx->pc = 0x3F20A0u;
label_3f20a0:
    // 0x3f20a0: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x3f20a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3f20a4: 0x2403fcff  addiu       $v1, $zero, -0x301
    ctx->pc = 0x3f20a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
    // 0x3f20a8: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x3f20a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x3f20ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f20acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f20b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3F20B0u;
    {
        const bool branch_taken_0x3f20b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F20B0u;
        // 0x3f20b4: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f20b0) {
            ctx->pc = 0x3F20DCu;
            goto label_3f20dc;
        }
    }
    ctx->pc = 0x3F20B8u;
label_3f20b8:
    // 0x3f20b8: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x3f20b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3f20bc: 0x2403fcff  addiu       $v1, $zero, -0x301
    ctx->pc = 0x3f20bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
    // 0x3f20c0: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x3f20c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3f20c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f20c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3f20c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F20C8u;
    {
        const bool branch_taken_0x3f20c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F20CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F20C8u;
        // 0x3f20cc: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f20c8) {
            ctx->pc = 0x3F20DCu;
            goto label_3f20dc;
        }
    }
    ctx->pc = 0x3F20D0u;
label_3f20d0:
    // 0x3f20d0: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x3f20d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3f20d4: 0x2403fcff  addiu       $v1, $zero, -0x301
    ctx->pc = 0x3f20d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
    // 0x3f20d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3f20d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3f20dc:
    // 0x3f20dc: 0xfe020100  sd          $v0, 0x100($s0)
    ctx->pc = 0x3f20dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 256), GPR_U64(ctx, 2));
label_3f20e0:
    // 0x3f20e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3f20e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f20e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f20e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f20e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f20e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f20ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3F20ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F20ECu;
        // 0x3f20f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F20ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F20F4u;
    // 0x3f20f4: 0x0  nop
    ctx->pc = 0x3f20f4u;
    // NOP
    // 0x3f20f8: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3f20f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3f20fc: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3f20fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x3f2100: 0xac8500e8  sw          $a1, 0xE8($a0)
    ctx->pc = 0x3f2100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 5));
    // 0x3f2104: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f2104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f2108: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2108u;
        // 0x3f210c: 0xfc820108  sd          $v0, 0x108($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 264), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2110u;
}
