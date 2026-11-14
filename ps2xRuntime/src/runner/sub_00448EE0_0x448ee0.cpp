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

// Function: sub_00448EE0
// Address: 0x448ee0 - 0x449050
void sub_00448EE0_0x448ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00448EE0_0x448ee0");
#endif

    switch (ctx->pc) {
        case 0x448ef8u: goto label_448ef8;
        case 0x448f20u: goto label_448f20;
        case 0x448fc8u: goto label_448fc8;
        default: break;
    }

    ctx->pc = 0x448ee0u;

    // 0x448ee0: 0x3c0effff  lui         $t6, 0xFFFF
    ctx->pc = 0x448ee0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65535 << 16));
    // 0x448ee4: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x448ee4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x448ee8: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x448ee8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448eec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x448eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448ef0: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x448ef0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x448ef4: 0x0  nop
    ctx->pc = 0x448ef4u;
    // NOP
label_448ef8:
    // 0x448ef8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x448ef8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448efc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x448efcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448f00: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x448f00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x448f04: 0x11a0004c  beqz        $t5, . + 4 + (0x4C << 2)
    ctx->pc = 0x448F04u;
    {
        const bool branch_taken_0x448f04 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x448F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448F04u;
        // 0x448f08: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x448f04) {
            ctx->pc = 0x449038u;
            goto label_449038;
        }
    }
    ctx->pc = 0x448F0Cu;
    // 0x448f0c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x448f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x448f10: 0x24180028  addiu       $t8, $zero, 0x28
    ctx->pc = 0x448f10u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x448f14: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x448f14u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448f18: 0x782818  mult        $a1, $v1, $t8
    ctx->pc = 0x448f18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x448f1c: 0x0  nop
    ctx->pc = 0x448f1cu;
    // NOP
label_448f20:
    // 0x448f20: 0x246b0001  addiu       $t3, $v1, 0x1
    ctx->pc = 0x448f20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x448f24: 0xb91021  addu        $v0, $a1, $t9
    ctx->pc = 0x448f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x448f28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x448f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x448f2c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x448f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x448f30: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x448F30u;
    {
        const bool branch_taken_0x448f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x448F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448F30u;
        // 0x448f34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448f30) {
            ctx->pc = 0x449028u;
            goto label_449028;
        }
    }
    ctx->pc = 0x448F38u;
    // 0x448f38: 0x8c480024  lw          $t0, 0x24($v0)
    ctx->pc = 0x448f38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x448f3c: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x448f3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x448f40: 0x31430003  andi        $v1, $t2, 0x3
    ctx->pc = 0x448f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x448f44: 0x19400017  blez        $t2, . + 4 + (0x17 << 2)
    ctx->pc = 0x448F44u;
    {
        const bool branch_taken_0x448f44 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x448F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448F44u;
        // 0x448f48: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448f44) {
            ctx->pc = 0x448FA4u;
            goto label_448fa4;
        }
    }
    ctx->pc = 0x448F4Cu;
    // 0x448f4c: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x448F4Cu;
    {
        const bool branch_taken_0x448f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x448f4c) {
            ctx->pc = 0x448F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448F4Cu;
            // 0x448f50: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448FCCu;
            goto label_448fcc;
        }
    }
    ctx->pc = 0x448F54u;
    // 0x448f54: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x448f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x448f58: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x448F58u;
    {
        const bool branch_taken_0x448f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x448f58) {
            ctx->pc = 0x448F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448F58u;
            // 0x448f5c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448FA8u;
            goto label_448fa8;
        }
    }
    ctx->pc = 0x448F60u;
    // 0x448f60: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x448f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x448f64: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x448F64u;
    {
        const bool branch_taken_0x448f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x448f64) {
            ctx->pc = 0x448F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448F64u;
            // 0x448f68: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448F8Cu;
            goto label_448f8c;
        }
    }
    ctx->pc = 0x448F6Cu;
    // 0x448f6c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x448f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x448f70: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x448f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x448f74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x448F74u;
    {
        const bool branch_taken_0x448f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448F74u;
        // 0x448f78: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x448f74) {
            ctx->pc = 0x448F80u;
            goto label_448f80;
        }
    }
    ctx->pc = 0x448F7Cu;
    // 0x448f7c: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x448f7cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_448f80:
    // 0x448f80: 0x2505000c  addiu       $a1, $t0, 0xC
    ctx->pc = 0x448f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x448f84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x448f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x448f88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x448f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_448f8c:
    // 0x448f8c: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x448f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x448f90: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x448F90u;
    {
        const bool branch_taken_0x448f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448F90u;
        // 0x448f94: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x448f90) {
            ctx->pc = 0x448F9Cu;
            goto label_448f9c;
        }
    }
    ctx->pc = 0x448F98u;
    // 0x448f98: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x448f98u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_448f9c:
    // 0x448f9c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x448f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x448fa0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x448fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_448fa4:
    // 0x448fa4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x448fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_448fa8:
    // 0x448fa8: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x448fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x448fac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x448FACu;
    {
        const bool branch_taken_0x448fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448FACu;
        // 0x448fb0: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x448fac) {
            ctx->pc = 0x448FB8u;
            goto label_448fb8;
        }
    }
    ctx->pc = 0x448FB4u;
    // 0x448fb4: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x448fb4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_448fb8:
    // 0x448fb8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x448fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x448fbc: 0xea102b  sltu        $v0, $a3, $t2
    ctx->pc = 0x448fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x448fc0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x448FC0u;
    {
        const bool branch_taken_0x448fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448FC0u;
        // 0x448fc4: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448fc0) {
            ctx->pc = 0x449028u;
            goto label_449028;
        }
    }
    ctx->pc = 0x448FC8u;
label_448fc8:
    // 0x448fc8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x448fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_448fcc:
    // 0x448fcc: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x448fccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x448fd0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x448FD0u;
    {
        const bool branch_taken_0x448fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448FD0u;
        // 0x448fd4: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x448fd0) {
            ctx->pc = 0x448FDCu;
            goto label_448fdc;
        }
    }
    ctx->pc = 0x448FD8u;
    // 0x448fd8: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x448fd8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_448fdc:
    // 0x448fdc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x448fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x448fe0: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x448fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x448fe4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x448FE4u;
    {
        const bool branch_taken_0x448fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448FE4u;
        // 0x448fe8: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x448fe4) {
            ctx->pc = 0x448FF0u;
            goto label_448ff0;
        }
    }
    ctx->pc = 0x448FECu;
    // 0x448fec: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x448fecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_448ff0:
    // 0x448ff0: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x448ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x448ff4: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x448ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x448ff8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x448FF8u;
    {
        const bool branch_taken_0x448ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448FF8u;
        // 0x448ffc: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x448ff8) {
            ctx->pc = 0x449004u;
            goto label_449004;
        }
    }
    ctx->pc = 0x449000u;
    // 0x449000: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x449000u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_449004:
    // 0x449004: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x449004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x449008: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x449008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x44900c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x44900Cu;
    {
        const bool branch_taken_0x44900c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44900Cu;
        // 0x449010: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44900c) {
            ctx->pc = 0x449018u;
            goto label_449018;
        }
    }
    ctx->pc = 0x449014u;
    // 0x449014: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x449014u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_449018:
    // 0x449018: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x449018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x44901c: 0xea102b  sltu        $v0, $a3, $t2
    ctx->pc = 0x44901cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x449020: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x449020u;
    {
        const bool branch_taken_0x449020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x449024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449020u;
        // 0x449024: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449020) {
            ctx->pc = 0x448FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448fc8;
        }
    }
    ctx->pc = 0x449028u;
label_449028:
    // 0x449028: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x449028u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44902c: 0x6c102b  sltu        $v0, $v1, $t4
    ctx->pc = 0x44902cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x449030: 0x5440ffbb  bnel        $v0, $zero, . + 4 + (-0x45 << 2)
    ctx->pc = 0x449030u;
    {
        const bool branch_taken_0x449030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x449030) {
            ctx->pc = 0x449034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449030u;
            // 0x449034: 0x782818  mult        $a1, $v1, $t8 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x448F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448f20;
        }
    }
    ctx->pc = 0x449038u;
label_449038:
    // 0x449038: 0x10ce0003  beq         $a2, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x449038u;
    {
        const bool branch_taken_0x449038 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 14));
        if (branch_taken_0x449038) {
            ctx->pc = 0x449048u;
            goto label_449048;
        }
    }
    ctx->pc = 0x449040u;
    // 0x449040: 0x1000ffad  b           . + 4 + (-0x53 << 2)
    ctx->pc = 0x449040u;
    {
        const bool branch_taken_0x449040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x449044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449040u;
        // 0x449044: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449040) {
            ctx->pc = 0x448EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448ef8;
        }
    }
    ctx->pc = 0x449048u;
label_449048:
    // 0x449048: 0x3e00008  jr          $ra
    ctx->pc = 0x449048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449048u;
        // 0x44904c: 0x1e0102d  daddu       $v0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449050u;
}
