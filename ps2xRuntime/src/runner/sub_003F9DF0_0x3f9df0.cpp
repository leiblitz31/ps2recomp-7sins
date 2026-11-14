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

// Function: sub_003F9DF0
// Address: 0x3f9df0 - 0x3f9e98
void sub_003F9DF0_0x3f9df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9DF0_0x3f9df0");
#endif

    switch (ctx->pc) {
        case 0x3f9e44u: goto label_3f9e44;
        default: break;
    }

    ctx->pc = 0x3f9df0u;

    // 0x3f9df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f9df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3f9df4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f9df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3f9df8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f9df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3f9dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f9dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9e00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f9e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f9e04: 0x92020200  lbu         $v0, 0x200($s0)
    ctx->pc = 0x3f9e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x3f9e08: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f9e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f9e0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F9E0Cu;
    {
        const bool branch_taken_0x3f9e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9E0Cu;
        // 0x3f9e10: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9e0c) {
            ctx->pc = 0x3F9E28u;
            goto label_3f9e28;
        }
    }
    ctx->pc = 0x3F9E14u;
    // 0x3f9e14: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x3f9e14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3f9e18: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x3f9e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x3f9e1c: 0x38420300  xori        $v0, $v0, 0x300
    ctx->pc = 0x3f9e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)768);
    // 0x3f9e20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F9E20u;
    {
        const bool branch_taken_0x3f9e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9E20u;
        // 0x3f9e24: 0x2880a  movz        $s1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9e20) {
            ctx->pc = 0x3F9E34u;
            goto label_3f9e34;
        }
    }
    ctx->pc = 0x3F9E28u;
label_3f9e28:
    // 0x3f9e28: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x3f9e28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3f9e2c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3f9e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x3f9e30: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x3f9e30u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_3f9e34:
    // 0x3f9e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f9e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9e38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f9e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9e3c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F9E3Cu;
    SET_GPR_U32(ctx, 31, 0x3F9E44u);
    ctx->pc = 0x3F9E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9E3Cu;
    // 0x3f9e40: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F9E3Cu, 0x3F9E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9E44u;
label_3f9e44:
    // 0x3f9e44: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F9E44u;
    {
        const bool branch_taken_0x3f9e44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9E44u;
        // 0x3f9e48: 0x93a20000  lbu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9e44) {
            ctx->pc = 0x3F9E54u;
            goto label_3f9e54;
        }
    }
    ctx->pc = 0x3F9E4Cu;
    // 0x3f9e4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3F9E4Cu;
    {
        const bool branch_taken_0x3f9e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9E4Cu;
        // 0x3f9e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9e4c) {
            ctx->pc = 0x3F9E84u;
            goto label_3f9e84;
        }
    }
    ctx->pc = 0x3F9E54u;
label_3f9e54:
    // 0x3f9e54: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x3f9e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x3f9e58: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x3f9e58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x3f9e5c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3f9e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3f9e60: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3f9e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3f9e64: 0x93a50003  lbu         $a1, 0x3($sp)
    ctx->pc = 0x3f9e64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x3f9e68: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f9e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f9e6c: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x3f9e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x3f9e70: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3f9e70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3f9e74: 0xde0301f0  ld          $v1, 0x1F0($s0)
    ctx->pc = 0x3f9e74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x3f9e78: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x3f9e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3f9e7c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3f9e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3f9e80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3f9e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3f9e84:
    // 0x3f9e84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3f9e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f9e88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f9e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f9e8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f9e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f9e90: 0x3e00008  jr          $ra
    ctx->pc = 0x3F9E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9E90u;
        // 0x3f9e94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F9E98u;
}
