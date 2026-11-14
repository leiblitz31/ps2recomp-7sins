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

// Function: sub_00312DC0
// Address: 0x312dc0 - 0x313010
void sub_00312DC0_0x312dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312DC0_0x312dc0");
#endif

    switch (ctx->pc) {
        case 0x312de8u: goto label_312de8;
        case 0x312e20u: goto label_312e20;
        case 0x312f50u: goto label_312f50;
        default: break;
    }

    ctx->pc = 0x312dc0u;

    // 0x312dc0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x312dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312dc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x312dc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312dc8: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x312dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x312dcc: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x312dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x312dd0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x312dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x312dd4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x312dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x312dd8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x312DD8u;
    {
        const bool branch_taken_0x312dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x312DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DD8u;
        // 0x312ddc: 0x825021  addu        $t2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312dd8) {
            ctx->pc = 0x312E04u;
            goto label_312e04;
        }
    }
    ctx->pc = 0x312DE0u;
    // 0x312de0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x312de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x312de4: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x312de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_312de8:
    // 0x312de8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x312de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x312dec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x312decu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x312df0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x312df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x312df4: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x312df4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x312df8: 0x0  nop
    ctx->pc = 0x312df8u;
    // NOP
    // 0x312dfc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x312DFCu;
    {
        const bool branch_taken_0x312dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DFCu;
        // 0x312e00: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312dfc) {
            ctx->pc = 0x312DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312de8;
        }
    }
    ctx->pc = 0x312E04u;
label_312e04:
    // 0x312e04: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x312e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x312e08: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x312E08u;
    {
        const bool branch_taken_0x312e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E08u;
        // 0x312e0c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e08) {
            ctx->pc = 0x312E88u;
            goto label_312e88;
        }
    }
    ctx->pc = 0x312E10u;
    // 0x312e10: 0x8ceb0004  lw          $t3, 0x4($a3)
    ctx->pc = 0x312e10u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x312e14: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x312e14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x312e18: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x312e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x312e1c: 0x0  nop
    ctx->pc = 0x312e1cu;
    // NOP
label_312e20:
    // 0x312e20: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x312e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x312e24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x312e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x312e28: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x312e28u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x312e2c: 0x891018  mult        $v0, $a0, $t1
    ctx->pc = 0x312e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x312e30: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x312e30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x312e34: 0x94660004  lhu         $a2, 0x4($v1)
    ctx->pc = 0x312e34u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x312e38: 0x4b2021  addu        $a0, $v0, $t3
    ctx->pc = 0x312e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x312e3c: 0xa91018  mult        $v0, $a1, $t1
    ctx->pc = 0x312e3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x312e40: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x312e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x312e44: 0xc91018  mult        $v0, $a2, $t1
    ctx->pc = 0x312e44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x312e48: 0x4b3021  addu        $a2, $v0, $t3
    ctx->pc = 0x312e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x312e4c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x312e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x312e50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x312e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x312e54: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x312e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x312e58: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x312e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x312e5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x312e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x312e60: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x312e60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x312e64: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x312e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x312e68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x312e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x312e6c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x312e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x312e70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x312e70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x312e74: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x312e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x312e78: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x312e78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x312e7c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x312E7Cu;
    {
        const bool branch_taken_0x312e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E7Cu;
        // 0x312e80: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e7c) {
            ctx->pc = 0x312E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312e20;
        }
    }
    ctx->pc = 0x312E84u;
    // 0x312e84: 0x0  nop
    ctx->pc = 0x312e84u;
    // NOP
label_312e88:
    // 0x312e88: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x312e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x312e8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x312e8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312e90: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x312E90u;
    {
        const bool branch_taken_0x312e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E90u;
        // 0x312e94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e90) {
            ctx->pc = 0x313008u;
            goto label_313008;
        }
    }
    ctx->pc = 0x312E98u;
    // 0x312e98: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x312e98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312e9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x312e9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ea0: 0x31430003  andi        $v1, $t2, 0x3
    ctx->pc = 0x312ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x312ea4: 0x1940001d  blez        $t2, . + 4 + (0x1D << 2)
    ctx->pc = 0x312EA4u;
    {
        const bool branch_taken_0x312ea4 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x312EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312EA4u;
        // 0x312ea8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ea4) {
            ctx->pc = 0x312F1Cu;
            goto label_312f1c;
        }
    }
    ctx->pc = 0x312EACu;
    // 0x312eac: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x312EACu;
    {
        const bool branch_taken_0x312eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x312eac) {
            ctx->pc = 0x312EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312EACu;
            // 0x312eb0: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312F54u;
            goto label_312f54;
        }
    }
    ctx->pc = 0x312EB4u;
    // 0x312eb4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x312eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x312eb8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x312EB8u;
    {
        const bool branch_taken_0x312eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312eb8) {
            ctx->pc = 0x312EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312EB8u;
            // 0x312ebc: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312F20u;
            goto label_312f20;
        }
    }
    ctx->pc = 0x312EC0u;
    // 0x312ec0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x312ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x312ec4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x312EC4u;
    {
        const bool branch_taken_0x312ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312ec4) {
            ctx->pc = 0x312EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312EC4u;
            // 0x312ec8: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312EF4u;
            goto label_312ef4;
        }
    }
    ctx->pc = 0x312ECCu;
    // 0x312ecc: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x312eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x312ed0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x312ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x312ed4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x312ED4u;
    {
        const bool branch_taken_0x312ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312ED4u;
        // 0x312ed8: 0x2409000c  addiu       $t1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ed4) {
            ctx->pc = 0x312EECu;
            goto label_312eec;
        }
    }
    ctx->pc = 0x312EDCu;
    // 0x312edc: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x312edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x312ee0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x312ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x312ee4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x312ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312ee8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x312ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_312eec:
    // 0x312eec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x312eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312ef0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x312ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_312ef4:
    // 0x312ef4: 0x1222021  addu        $a0, $t1, $v0
    ctx->pc = 0x312ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x312ef8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x312ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x312efc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x312EFCu;
    {
        const bool branch_taken_0x312efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x312F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312EFCu;
        // 0x312f00: 0x2529000c  addiu       $t1, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312efc) {
            ctx->pc = 0x312F18u;
            goto label_312f18;
        }
    }
    ctx->pc = 0x312F04u;
    // 0x312f04: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x312f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x312f08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x312f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x312f0c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x312f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x312f10: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x312f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x312f14: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x312f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_312f18:
    // 0x312f18: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x312f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_312f1c:
    // 0x312f1c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x312f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_312f20:
    // 0x312f20: 0x1222021  addu        $a0, $t1, $v0
    ctx->pc = 0x312f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x312f24: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x312f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x312f28: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x312F28u;
    {
        const bool branch_taken_0x312f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x312F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F28u;
        // 0x312f2c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f28) {
            ctx->pc = 0x312F44u;
            goto label_312f44;
        }
    }
    ctx->pc = 0x312F30u;
    // 0x312f30: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x312f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x312f34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x312f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x312f38: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x312f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x312f3c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x312f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x312f40: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x312f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_312f44:
    // 0x312f44: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x312f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x312f48: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x312F48u;
    {
        const bool branch_taken_0x312f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F48u;
        // 0x312f4c: 0x2529000c  addiu       $t1, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f48) {
            ctx->pc = 0x313008u;
            goto label_313008;
        }
    }
    ctx->pc = 0x312F50u;
label_312f50:
    // 0x312f50: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x312f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_312f54:
    // 0x312f54: 0x1222021  addu        $a0, $t1, $v0
    ctx->pc = 0x312f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x312f58: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x312f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x312f5c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x312F5Cu;
    {
        const bool branch_taken_0x312f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x312f5c) {
            ctx->pc = 0x312F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312F5Cu;
            // 0x312f60: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312F7Cu;
            goto label_312f7c;
        }
    }
    ctx->pc = 0x312F64u;
    // 0x312f64: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x312f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x312f68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x312f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x312f6c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x312f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x312f70: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x312f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x312f74: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x312f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x312f78: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x312f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_312f7c:
    // 0x312f7c: 0x2523000c  addiu       $v1, $t1, 0xC
    ctx->pc = 0x312f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x312f80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x312f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x312f84: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x312f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x312f88: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x312F88u;
    {
        const bool branch_taken_0x312f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x312f88) {
            ctx->pc = 0x312F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312F88u;
            // 0x312f8c: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312FA8u;
            goto label_312fa8;
        }
    }
    ctx->pc = 0x312F90u;
    // 0x312f90: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x312f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x312f94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x312f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x312f98: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x312f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x312f9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x312f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x312fa0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x312fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x312fa4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x312fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_312fa8:
    // 0x312fa8: 0x25230018  addiu       $v1, $t1, 0x18
    ctx->pc = 0x312fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
    // 0x312fac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x312facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x312fb0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x312fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x312fb4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x312FB4u;
    {
        const bool branch_taken_0x312fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x312fb4) {
            ctx->pc = 0x312FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312FB4u;
            // 0x312fb8: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312FD4u;
            goto label_312fd4;
        }
    }
    ctx->pc = 0x312FBCu;
    // 0x312fbc: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x312fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x312fc0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x312fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x312fc4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x312fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x312fc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x312fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x312fcc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x312fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x312fd0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x312fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_312fd4:
    // 0x312fd4: 0x25230024  addiu       $v1, $t1, 0x24
    ctx->pc = 0x312fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 36));
    // 0x312fd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x312fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x312fdc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x312fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x312fe0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x312FE0u;
    {
        const bool branch_taken_0x312fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x312FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312FE0u;
        // 0x312fe4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312fe0) {
            ctx->pc = 0x312FFCu;
            goto label_312ffc;
        }
    }
    ctx->pc = 0x312FE8u;
    // 0x312fe8: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x312fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x312fec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x312fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x312ff0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x312ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x312ff4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x312ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x312ff8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x312ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_312ffc:
    // 0x312ffc: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x312ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x313000: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x313000u;
    {
        const bool branch_taken_0x313000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313000u;
        // 0x313004: 0x25290030  addiu       $t1, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313000) {
            ctx->pc = 0x312F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312f50;
        }
    }
    ctx->pc = 0x313008u;
label_313008:
    // 0x313008: 0x3e00008  jr          $ra
    ctx->pc = 0x313008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313008u;
        // 0x31300c: 0xace50034  sw          $a1, 0x34($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313010u;
}
