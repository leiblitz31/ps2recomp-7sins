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

// Function: sub_00411DB0
// Address: 0x411db0 - 0x412028
void sub_00411DB0_0x411db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411DB0_0x411db0");
#endif

    switch (ctx->pc) {
        case 0x411e34u: goto label_411e34;
        case 0x411ebcu: goto label_411ebc;
        case 0x411ed0u: goto label_411ed0;
        case 0x411edcu: goto label_411edc;
        case 0x411f04u: goto label_411f04;
        case 0x411f10u: goto label_411f10;
        case 0x411fa8u: goto label_411fa8;
        case 0x411ff8u: goto label_411ff8;
        case 0x412008u: goto label_412008;
        default: break;
    }

    ctx->pc = 0x411db0u;

    // 0x411db0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x411db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x411db4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x411db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x411db8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x411db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x411dbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x411dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411dc0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x411dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x411dc4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x411dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411dc8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x411dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x411dcc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x411dccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411dd0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x411DD0u;
    {
        const bool branch_taken_0x411dd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x411DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411DD0u;
        // 0x411dd4: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411dd0) {
            ctx->pc = 0x411DE0u;
            goto label_411de0;
        }
    }
    ctx->pc = 0x411DD8u;
    // 0x411dd8: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x411DD8u;
    {
        const bool branch_taken_0x411dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411DD8u;
        // 0x411ddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411dd8) {
            ctx->pc = 0x41200Cu;
            goto label_41200c;
        }
    }
    ctx->pc = 0x411DE0u;
label_411de0:
    // 0x411de0: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x411de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x411de4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x411de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x411de8: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x411de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x411dec: 0x10c40017  beq         $a2, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x411DECu;
    {
        const bool branch_taken_0x411dec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x411DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411DECu;
        // 0x411df0: 0xae070004  sw          $a3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411dec) {
            ctx->pc = 0x411E4Cu;
            goto label_411e4c;
        }
    }
    ctx->pc = 0x411DF4u;
    // 0x411df4: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x411df4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x411df8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x411DF8u;
    {
        const bool branch_taken_0x411df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x411DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411DF8u;
        // 0x411dfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411df8) {
            ctx->pc = 0x411E10u;
            goto label_411e10;
        }
    }
    ctx->pc = 0x411E00u;
    // 0x411e00: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x411E00u;
    {
        const bool branch_taken_0x411e00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x411E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411E00u;
        // 0x411e04: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e00) {
            ctx->pc = 0x411E2Cu;
            goto label_411e2c;
        }
    }
    ctx->pc = 0x411E08u;
    // 0x411e08: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x411E08u;
    {
        const bool branch_taken_0x411e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x411e08) {
            ctx->pc = 0x411FF0u;
            goto label_411ff0;
        }
    }
    ctx->pc = 0x411E10u;
label_411e10:
    // 0x411e10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x411e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x411e14: 0x10c20040  beq         $a2, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x411E14u;
    {
        const bool branch_taken_0x411e14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x411E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411E14u;
        // 0x411e18: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e14) {
            ctx->pc = 0x411F18u;
            goto label_411f18;
        }
    }
    ctx->pc = 0x411E1Cu;
    // 0x411e1c: 0x10c20065  beq         $a2, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x411E1Cu;
    {
        const bool branch_taken_0x411e1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x411E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411E1Cu;
        // 0x411e20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e1c) {
            ctx->pc = 0x411FB4u;
            goto label_411fb4;
        }
    }
    ctx->pc = 0x411E24u;
    // 0x411e24: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x411E24u;
    {
        const bool branch_taken_0x411e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411E24u;
        // 0x411e28: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e24) {
            ctx->pc = 0x411FECu;
            goto label_411fec;
        }
    }
    ctx->pc = 0x411E2Cu;
label_411e2c:
    // 0x411e2c: 0xc0f0ba4  jal         func_3C2E90
    ctx->pc = 0x411E2Cu;
    SET_GPR_U32(ctx, 31, 0x411E34u);
    ctx->pc = 0x411E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411E2Cu;
    // 0x411e30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E90u, 0x411E2Cu, 0x411E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411E34u;
label_411e34:
    // 0x411e34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x411e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x411e38: 0x10430074  beq         $v0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x411E38u;
    {
        const bool branch_taken_0x411e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x411E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411E38u;
        // 0x411e3c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e38) {
            ctx->pc = 0x41200Cu;
            goto label_41200c;
        }
    }
    ctx->pc = 0x411E40u;
    // 0x411e40: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x411e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x411e44: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x411E44u;
    {
        const bool branch_taken_0x411e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411E44u;
        // 0x411e48: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e44) {
            ctx->pc = 0x412008u;
            goto label_412008;
        }
    }
    ctx->pc = 0x411E4Cu;
label_411e4c:
    // 0x411e4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x411e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411e50: 0x10e60011  beq         $a3, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x411E50u;
    {
        const bool branch_taken_0x411e50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x411E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411E50u;
        // 0x411e54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e50) {
            ctx->pc = 0x411E98u;
            goto label_411e98;
        }
    }
    ctx->pc = 0x411E58u;
    // 0x411e58: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x411e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x411e5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x411E5Cu;
    {
        const bool branch_taken_0x411e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x411E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411E5Cu;
        // 0x411e60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e5c) {
            ctx->pc = 0x411E74u;
            goto label_411e74;
        }
    }
    ctx->pc = 0x411E64u;
    // 0x411e64: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x411E64u;
    {
        const bool branch_taken_0x411e64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x411E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411E64u;
        // 0x411e68: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e64) {
            ctx->pc = 0x411E88u;
            goto label_411e88;
        }
    }
    ctx->pc = 0x411E6Cu;
    // 0x411e6c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x411E6Cu;
    {
        const bool branch_taken_0x411e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x411e6c) {
            ctx->pc = 0x411EC8u;
            goto label_411ec8;
        }
    }
    ctx->pc = 0x411E74u;
label_411e74:
    // 0x411e74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x411e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x411e78: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x411E78u;
    {
        const bool branch_taken_0x411e78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x411E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411E78u;
        // 0x411e7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e78) {
            ctx->pc = 0x411EA8u;
            goto label_411ea8;
        }
    }
    ctx->pc = 0x411E80u;
    // 0x411e80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x411E80u;
    {
        const bool branch_taken_0x411e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411E80u;
        // 0x411e84: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e80) {
            ctx->pc = 0x411EC4u;
            goto label_411ec4;
        }
    }
    ctx->pc = 0x411E88u;
label_411e88:
    // 0x411e88: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x411e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x411e8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x411e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411e90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x411E90u;
    {
        const bool branch_taken_0x411e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411E90u;
        // 0x411e94: 0x24a59cb0  addiu       $a1, $a1, -0x6350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411e90) {
            ctx->pc = 0x411EB4u;
            goto label_411eb4;
        }
    }
    ctx->pc = 0x411E98u;
label_411e98:
    // 0x411e98: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x411e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x411e9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x411e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411ea0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x411EA0u;
    {
        const bool branch_taken_0x411ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411EA0u;
        // 0x411ea4: 0x24a59cb8  addiu       $a1, $a1, -0x6348 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411ea0) {
            ctx->pc = 0x411EB4u;
            goto label_411eb4;
        }
    }
    ctx->pc = 0x411EA8u;
label_411ea8:
    // 0x411ea8: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x411ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x411eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x411eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411eb0: 0x24a59cc0  addiu       $a1, $a1, -0x6340
    ctx->pc = 0x411eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941888));
label_411eb4:
    // 0x411eb4: 0xc0f0ab6  jal         func_3C2AD8
    ctx->pc = 0x411EB4u;
    SET_GPR_U32(ctx, 31, 0x411EBCu);
    ctx->pc = 0x3C2AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AD8u, 0x411EB4u, 0x411EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411EBCu;
label_411ebc:
    // 0x411ebc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x411EBCu;
    {
        const bool branch_taken_0x411ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411EBCu;
        // 0x411ec0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411ebc) {
            ctx->pc = 0x411EDCu;
            goto label_411edc;
        }
    }
    ctx->pc = 0x411EC4u;
label_411ec4:
    // 0x411ec4: 0x0  nop
    ctx->pc = 0x411ec4u;
    // NOP
label_411ec8:
    // 0x411ec8: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x411EC8u;
    SET_GPR_U32(ctx, 31, 0x411ED0u);
    ctx->pc = 0x411ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411EC8u;
    // 0x411ecc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x411EC8u, 0x411ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411ED0u;
label_411ed0:
    // 0x411ed0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x411ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411ed4: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x411ED4u;
    SET_GPR_U32(ctx, 31, 0x411EDCu);
    ctx->pc = 0x411ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411ED4u;
    // 0x411ed8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x411ED4u, 0x411EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411EDCu;
label_411edc:
    // 0x411edc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x411EDCu;
    {
        const bool branch_taken_0x411edc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x411EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411EDCu;
        // 0x411ee0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411edc) {
            ctx->pc = 0x411EF0u;
            goto label_411ef0;
        }
    }
    ctx->pc = 0x411EE4u;
    // 0x411ee4: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x411ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x411ee8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x411EE8u;
    {
        const bool branch_taken_0x411ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411EE8u;
        // 0x411eec: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411ee8) {
            ctx->pc = 0x411F10u;
            goto label_411f10;
        }
    }
    ctx->pc = 0x411EF0u;
label_411ef0:
    // 0x411ef0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x411ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x411ef4: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x411ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x411ef8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x411ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x411efc: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x411EFCu;
    SET_GPR_U32(ctx, 31, 0x411F04u);
    ctx->pc = 0x411F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411EFCu;
    // 0x411f00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x411EFCu, 0x411F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411F04u;
label_411f04:
    // 0x411f04: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x411f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x411f08: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x411F08u;
    SET_GPR_U32(ctx, 31, 0x411F10u);
    ctx->pc = 0x411F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411F08u;
    // 0x411f0c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x411F08u, 0x411F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411F10u;
label_411f10:
    // 0x411f10: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x411F10u;
    {
        const bool branch_taken_0x411f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411F10u;
        // 0x411f14: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411f10) {
            ctx->pc = 0x412008u;
            goto label_412008;
        }
    }
    ctx->pc = 0x411F18u;
label_411f18:
    // 0x411f18: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x411f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x411f1c: 0x10e40013  beq         $a3, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x411F1Cu;
    {
        const bool branch_taken_0x411f1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x411F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411F1Cu;
        // 0x411f20: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411f1c) {
            ctx->pc = 0x411F6Cu;
            goto label_411f6c;
        }
    }
    ctx->pc = 0x411F24u;
    // 0x411f24: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x411f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x411f28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x411F28u;
    {
        const bool branch_taken_0x411f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x411F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411F28u;
        // 0x411f2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411f28) {
            ctx->pc = 0x411F40u;
            goto label_411f40;
        }
    }
    ctx->pc = 0x411F30u;
    // 0x411f30: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x411F30u;
    {
        const bool branch_taken_0x411f30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x411F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411F30u;
        // 0x411f34: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411f30) {
            ctx->pc = 0x411F50u;
            goto label_411f50;
        }
    }
    ctx->pc = 0x411F38u;
    // 0x411f38: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x411F38u;
    {
        const bool branch_taken_0x411f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x411f38) {
            ctx->pc = 0x411FA0u;
            goto label_411fa0;
        }
    }
    ctx->pc = 0x411F40u;
label_411f40:
    // 0x411f40: 0x10e6000f  beq         $a3, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x411F40u;
    {
        const bool branch_taken_0x411f40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x411F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411F40u;
        // 0x411f44: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411f40) {
            ctx->pc = 0x411F80u;
            goto label_411f80;
        }
    }
    ctx->pc = 0x411F48u;
    // 0x411f48: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x411F48u;
    {
        const bool branch_taken_0x411f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x411f48) {
            ctx->pc = 0x411FA0u;
            goto label_411fa0;
        }
    }
    ctx->pc = 0x411F50u;
label_411f50:
    // 0x411f50: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x411f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x411f54: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x411f54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411f58: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x411f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x411f5c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x411f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x411f60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x411f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x411f64: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x411F64u;
    {
        const bool branch_taken_0x411f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411F64u;
        // 0x411f68: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411f64) {
            ctx->pc = 0x412008u;
            goto label_412008;
        }
    }
    ctx->pc = 0x411F6Cu;
label_411f6c:
    // 0x411f6c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x411f6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411f70: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x411f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x411f74: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x411f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x411f78: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x411F78u;
    {
        const bool branch_taken_0x411f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411F78u;
        // 0x411f7c: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411f78) {
            ctx->pc = 0x412008u;
            goto label_412008;
        }
    }
    ctx->pc = 0x411F80u;
label_411f80:
    // 0x411f80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x411f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x411f84: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x411f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411f88: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x411f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x411f8c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x411f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x411f90: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x411f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x411f94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x411f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x411f98: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x411F98u;
    {
        const bool branch_taken_0x411f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411F98u;
        // 0x411f9c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411f98) {
            ctx->pc = 0x412008u;
            goto label_412008;
        }
    }
    ctx->pc = 0x411FA0u;
label_411fa0:
    // 0x411fa0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x411FA0u;
    SET_GPR_U32(ctx, 31, 0x411FA8u);
    ctx->pc = 0x411FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411FA0u;
    // 0x411fa4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x411FA0u, 0x411FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411FA8u;
label_411fa8:
    // 0x411fa8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x411fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x411fac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x411FACu;
    {
        const bool branch_taken_0x411fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411FACu;
        // 0x411fb0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411fac) {
            ctx->pc = 0x412000u;
            goto label_412000;
        }
    }
    ctx->pc = 0x411FB4u;
label_411fb4:
    // 0x411fb4: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x411fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x411fb8: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x411fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x411fbc: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x411fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x411fc0: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x411fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x411fc4: 0x8a240013  lwl         $a0, 0x13($s1)
    ctx->pc = 0x411fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x411fc8: 0x9a240010  lwr         $a0, 0x10($s1)
    ctx->pc = 0x411fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x411fcc: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x411fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x411fd0: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x411fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x411fd4: 0xb203001b  sdl         $v1, 0x1B($s0)
    ctx->pc = 0x411fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x411fd8: 0xb6030014  sdr         $v1, 0x14($s0)
    ctx->pc = 0x411fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x411fdc: 0xaa04001f  swl         $a0, 0x1F($s0)
    ctx->pc = 0x411fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x411fe0: 0xba04001c  swr         $a0, 0x1C($s0)
    ctx->pc = 0x411fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x411fe4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x411FE4u;
    {
        const bool branch_taken_0x411fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411FE4u;
        // 0x411fe8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411fe4) {
            ctx->pc = 0x412008u;
            goto label_412008;
        }
    }
    ctx->pc = 0x411FECu;
label_411fec:
    // 0x411fec: 0x0  nop
    ctx->pc = 0x411fecu;
    // NOP
label_411ff0:
    // 0x411ff0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x411FF0u;
    SET_GPR_U32(ctx, 31, 0x411FF8u);
    ctx->pc = 0x411FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411FF0u;
    // 0x411ff4: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x411FF0u, 0x411FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411FF8u;
label_411ff8:
    // 0x411ff8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x411ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x411ffc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x411ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_412000:
    // 0x412000: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x412000u;
    SET_GPR_U32(ctx, 31, 0x412008u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x412000u, 0x412008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412008u;
label_412008:
    // 0x412008: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x412008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41200c:
    // 0x41200c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x41200cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x412010: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x412010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x412014: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x412014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x412018: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x412018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41201c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41201cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x412020: 0x3e00008  jr          $ra
    ctx->pc = 0x412020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412020u;
        // 0x412024: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x412028u;
}
