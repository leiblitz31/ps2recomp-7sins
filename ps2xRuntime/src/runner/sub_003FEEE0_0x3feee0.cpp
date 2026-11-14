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

// Function: sub_003FEEE0
// Address: 0x3feee0 - 0x3ff038
void sub_003FEEE0_0x3feee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FEEE0_0x3feee0");
#endif

    switch (ctx->pc) {
        case 0x3fef18u: goto label_3fef18;
        case 0x3fef38u: goto label_3fef38;
        case 0x3fef58u: goto label_3fef58;
        case 0x3fef88u: goto label_3fef88;
        case 0x3fef90u: goto label_3fef90;
        case 0x3fefa8u: goto label_3fefa8;
        case 0x3fefb0u: goto label_3fefb0;
        case 0x3fefe8u: goto label_3fefe8;
        case 0x3feffcu: goto label_3feffc;
        case 0x3ff018u: goto label_3ff018;
        default: break;
    }

    ctx->pc = 0x3feee0u;

    // 0x3feee0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3feee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x3feee4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3feee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3feee8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x3feee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x3feeec: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x3feeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x3feef0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3feef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3feef4: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x3feef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x3feef8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3feef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3feefc: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x3feefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x3fef00: 0x2444e0a0  addiu       $a0, $v0, -0x1F60
    ctx->pc = 0x3fef00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959264));
    // 0x3fef04: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x3fef04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x3fef08: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x3fef08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3fef0c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x3fef0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3fef10: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3fef10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x3fef14: 0x0  nop
    ctx->pc = 0x3fef14u;
    // NOP
label_3fef18:
    // 0x3fef18: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x3fef18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fef1c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3fef1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3fef20: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FEF20u;
    {
        const bool branch_taken_0x3fef20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FEF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF20u;
        // 0x3fef24: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fef20) {
            ctx->pc = 0x3FEF40u;
            goto label_3fef40;
        }
    }
    ctx->pc = 0x3FEF28u;
    // 0x3fef28: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x3fef28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x3fef2c: 0x24c5fba0  addiu       $a1, $a2, -0x460
    ctx->pc = 0x3fef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966176));
    // 0x3fef30: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3FEF30u;
    SET_GPR_U32(ctx, 31, 0x3FEF38u);
    ctx->pc = 0x3FEF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEF30u;
    // 0x3fef34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FEF30u, 0x3FEF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEF38u;
label_3fef38:
    // 0x3fef38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3FEF38u;
    {
        const bool branch_taken_0x3fef38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF38u;
        // 0x3fef3c: 0x2e260300  sltiu       $a2, $s1, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)768) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fef38) {
            ctx->pc = 0x3FEF4Cu;
            goto label_3fef4c;
        }
    }
    ctx->pc = 0x3FEF40u;
label_3fef40:
    // 0x3fef40: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3FEF40u;
    {
        const bool branch_taken_0x3fef40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FEF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF40u;
        // 0x3fef44: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fef40) {
            ctx->pc = 0x3FEF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fef18;
        }
    }
    ctx->pc = 0x3FEF48u;
    // 0x3fef48: 0x2e260300  sltiu       $a2, $s1, 0x300
    ctx->pc = 0x3fef48u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)768) ? 1 : 0);
label_3fef4c:
    // 0x3fef4c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x3fef4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fef50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3fef50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fef54: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x3fef54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_3fef58:
    // 0x3fef58: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x3fef58u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3fef5c: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x3fef5cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3fef60: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3fef60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3fef64: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x3fef64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x3fef68: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3fef68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3fef6c: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3FEF6Cu;
    {
        const bool branch_taken_0x3fef6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3FEF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF6Cu;
        // 0x3fef70: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fef6c) {
            ctx->pc = 0x3FEF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fef58;
        }
    }
    ctx->pc = 0x3FEF74u;
    // 0x3fef74: 0x784a0000  lq          $t2, 0x0($v0)
    ctx->pc = 0x3fef74u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3fef78: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FEF78u;
    {
        const bool branch_taken_0x3fef78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEF78u;
        // 0x3fef7c: 0x7c6a0000  sq          $t2, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fef78) {
            ctx->pc = 0x3FEF98u;
            goto label_3fef98;
        }
    }
    ctx->pc = 0x3FEF80u;
    // 0x3fef80: 0xc0f8b70  jal         func_3E2DC0
    ctx->pc = 0x3FEF80u;
    SET_GPR_U32(ctx, 31, 0x3FEF88u);
    ctx->pc = 0x3FEF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEF80u;
    // 0x3fef84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2DC0u, 0x3FEF80u, 0x3FEF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEF88u;
label_3fef88:
    // 0x3fef88: 0xc0f8b68  jal         func_3E2DA0
    ctx->pc = 0x3FEF88u;
    SET_GPR_U32(ctx, 31, 0x3FEF90u);
    ctx->pc = 0x3FEF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEF88u;
    // 0x3fef8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2DA0u, 0x3FEF88u, 0x3FEF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEF90u;
label_3fef90:
    // 0x3fef90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fef90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fef94: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x3fef94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_3fef98:
    // 0x3fef98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fef98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fef9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3fef9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fefa0: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3FEFA0u;
    SET_GPR_U32(ctx, 31, 0x3FEFA8u);
    ctx->pc = 0x3FEFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEFA0u;
    // 0x3fefa4: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3FEFA0u, 0x3FEFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEFA8u;
label_3fefa8:
    // 0x3fefa8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3fefa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fefac: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x3fefacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fefb0:
    // 0x3fefb0: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x3fefb0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3fefb4: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x3fefb4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3fefb8: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x3fefb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x3fefbc: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x3fefbcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x3fefc0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3fefc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3fefc4: 0x1453fffa  bne         $v0, $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3FEFC4u;
    {
        const bool branch_taken_0x3fefc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x3FEFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEFC4u;
        // 0x3fefc8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fefc4) {
            ctx->pc = 0x3FEFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fefb0;
        }
    }
    ctx->pc = 0x3FEFCCu;
    // 0x3fefcc: 0x784a0000  lq          $t2, 0x0($v0)
    ctx->pc = 0x3fefccu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3fefd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3fefd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fefd4: 0x7c6a0000  sq          $t2, 0x0($v1)
    ctx->pc = 0x3fefd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 10));
    // 0x3fefd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3fefd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fefdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fefdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fefe0: 0xc0ff4a2  jal         func_3FD288
    ctx->pc = 0x3FEFE0u;
    SET_GPR_U32(ctx, 31, 0x3FEFE8u);
    ctx->pc = 0x3FEFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEFE0u;
    // 0x3fefe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD288u, 0x3FEFE0u, 0x3FEFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEFE8u;
label_3fefe8:
    // 0x3fefe8: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x3fefe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x3fefec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fefecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3feff0: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x3feff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x3feff4: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FEFF4u;
    SET_GPR_U32(ctx, 31, 0x3FEFFCu);
    ctx->pc = 0x3FEFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEFF4u;
    // 0x3feff8: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FEFF4u, 0x3FEFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEFFCu;
label_3feffc:
    // 0x3feffc: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x3feffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x3ff000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ff000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ff004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff008: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ff008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ff00c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ff00cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff010: 0xc0ff882  jal         func_3FE208
    ctx->pc = 0x3FF010u;
    SET_GPR_U32(ctx, 31, 0x3FF018u);
    ctx->pc = 0x3FF014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FF010u;
    // 0x3ff014: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FE208u, 0x3FF010u, 0x3FF018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FF018u;
label_3ff018:
    // 0x3ff018: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x3ff018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3ff01c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x3ff01cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3ff020: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x3ff020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3ff024: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x3ff024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3ff028: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x3ff028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3ff02c: 0x3e00008  jr          $ra
    ctx->pc = 0x3FF02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FF02Cu;
        // 0x3ff030: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FF02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FF034u;
    // 0x3ff034: 0x0  nop
    ctx->pc = 0x3ff034u;
    // NOP
    ctx->pc = 0x3ff038u;
}
