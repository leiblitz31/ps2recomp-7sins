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

// Function: sub_004B1AE0
// Address: 0x4b1ae0 - 0x4b1f68
void sub_004B1AE0_0x4b1ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B1AE0_0x4b1ae0");
#endif

    switch (ctx->pc) {
        case 0x4b1b30u: goto label_4b1b30;
        case 0x4b1b7cu: goto label_4b1b7c;
        case 0x4b1bb0u: goto label_4b1bb0;
        case 0x4b1bc0u: goto label_4b1bc0;
        case 0x4b1bc8u: goto label_4b1bc8;
        case 0x4b1becu: goto label_4b1bec;
        case 0x4b1c58u: goto label_4b1c58;
        case 0x4b1cdcu: goto label_4b1cdc;
        case 0x4b1d00u: goto label_4b1d00;
        case 0x4b1d08u: goto label_4b1d08;
        case 0x4b1d2cu: goto label_4b1d2c;
        case 0x4b1d50u: goto label_4b1d50;
        case 0x4b1d58u: goto label_4b1d58;
        case 0x4b1db8u: goto label_4b1db8;
        case 0x4b1e38u: goto label_4b1e38;
        case 0x4b1e74u: goto label_4b1e74;
        case 0x4b1eccu: goto label_4b1ecc;
        case 0x4b1f10u: goto label_4b1f10;
        case 0x4b1f54u: goto label_4b1f54;
        default: break;
    }

    ctx->pc = 0x4b1ae0u;

    // 0x4b1ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b1ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b1ae4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4b1ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4b1ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b1ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b1aec: 0x24900040  addiu       $s0, $a0, 0x40
    ctx->pc = 0x4b1aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x4b1af0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1af4: 0x8e021394  lw          $v0, 0x1394($s0)
    ctx->pc = 0x4b1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5012)));
    // 0x4b1af8: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x4B1AF8u;
    {
        const bool branch_taken_0x4b1af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1AF8u;
        // 0x4b1afc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1af8) {
            ctx->pc = 0x4B1BF8u;
            goto label_4b1bf8;
        }
    }
    ctx->pc = 0x4B1B00u;
    // 0x4b1b00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4b1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b1b04: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4B1B04u;
    {
        const bool branch_taken_0x4b1b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B04u;
        // 0x4b1b08: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b04) {
            ctx->pc = 0x4B1B8Cu;
            goto label_4b1b8c;
        }
    }
    ctx->pc = 0x4B1B0Cu;
    // 0x4b1b0c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4b1b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4b1b10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b1b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b1b14: 0x34c6080c  ori         $a2, $a2, 0x80C
    ctx->pc = 0x4b1b14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2060);
    // 0x4b1b18: 0xae031388  sw          $v1, 0x1388($s0)
    ctx->pc = 0x4b1b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5000), GPR_U32(ctx, 3));
    // 0x4b1b1c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4b1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4b1b20: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4b1b20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b1b24: 0xae02138c  sw          $v0, 0x138C($s0)
    ctx->pc = 0x4b1b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5004), GPR_U32(ctx, 2));
    // 0x4b1b28: 0xc127cc2  jal         func_49F308
    ctx->pc = 0x4B1B28u;
    SET_GPR_U32(ctx, 31, 0x4B1B30u);
    ctx->pc = 0x4B1B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1B28u;
    // 0x4b1b2c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F308u, 0x4B1B28u, 0x4B1B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1B30u;
label_4b1b30:
    // 0x4b1b30: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b1b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b1b34: 0x2444003f  addiu       $a0, $v0, 0x3F
    ctx->pc = 0x4b1b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x4b1b38: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x4b1b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x4b1b3c: 0xae021394  sw          $v0, 0x1394($s0)
    ctx->pc = 0x4b1b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5012), GPR_U32(ctx, 2));
    // 0x4b1b40: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b1b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b1b44: 0xae041390  sw          $a0, 0x1390($s0)
    ctx->pc = 0x4b1b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5008), GPR_U32(ctx, 4));
    // 0x4b1b48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4b1b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b1b4c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x4B1B4Cu;
    {
        const bool branch_taken_0x4b1b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B4Cu;
        // 0x4b1b50: 0xae031384  sw          $v1, 0x1384($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4996), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b4c) {
            ctx->pc = 0x4B1BF8u;
            goto label_4b1bf8;
        }
    }
    ctx->pc = 0x4B1B54u;
    // 0x4b1b54: 0x8e0a138c  lw          $t2, 0x138C($s0)
    ctx->pc = 0x4b1b54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5004)));
    // 0x4b1b58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b1b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1b5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b1b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1b60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b1b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1b64: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x4b1b64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x4b1b68: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x4b1b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x4b1b6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b1b6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1b70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b1b70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1b74: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B1B74u;
    SET_GPR_U32(ctx, 31, 0x4B1B7Cu);
    ctx->pc = 0x4B1B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1B74u;
    // 0x4b1b78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B1B74u, 0x4B1B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1B7Cu;
label_4b1b7c:
    // 0x4b1b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b1b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b1b80: 0xaf82b8f8  sw          $v0, -0x4708($gp)
    ctx->pc = 0x4b1b80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949112), GPR_U32(ctx, 2));
    // 0x4b1b84: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x4B1B84u;
    {
        const bool branch_taken_0x4b1b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1B84u;
        // 0x4b1b88: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1b84) {
            ctx->pc = 0x4B1BFCu;
            goto label_4b1bfc;
        }
    }
    ctx->pc = 0x4B1B8Cu;
label_4b1b8c:
    // 0x4b1b8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b1b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b1b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1b94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b1b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1b98: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x4b1b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x4b1b9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b1b9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1ba0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b1ba0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1ba4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4b1ba4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1ba8: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B1BA8u;
    SET_GPR_U32(ctx, 31, 0x4B1BB0u);
    ctx->pc = 0x4B1BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1BA8u;
    // 0x4b1bac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B1BA8u, 0x4B1BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1BB0u;
label_4b1bb0:
    // 0x4b1bb0: 0x8f82b8f8  lw          $v0, -0x4708($gp)
    ctx->pc = 0x4b1bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949112)));
    // 0x4b1bb4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B1BB4u;
    {
        const bool branch_taken_0x4b1bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1bb4) {
            ctx->pc = 0x4B1BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1BB4u;
            // 0x4b1bb8: 0x8e041394  lw          $a0, 0x1394($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5012)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1BD8u;
            goto label_4b1bd8;
        }
    }
    ctx->pc = 0x4B1BBCu;
    // 0x4b1bbc: 0x0  nop
    ctx->pc = 0x4b1bbcu;
    // NOP
label_4b1bc0:
    // 0x4b1bc0: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x4B1BC0u;
    SET_GPR_U32(ctx, 31, 0x4B1BC8u);
    ctx->pc = 0x4B1BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1BC0u;
    // 0x4b1bc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x4B1BC0u, 0x4B1BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1BC8u;
label_4b1bc8:
    // 0x4b1bc8: 0x8f82b8f8  lw          $v0, -0x4708($gp)
    ctx->pc = 0x4b1bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949112)));
    // 0x4b1bcc: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4B1BCCu;
    {
        const bool branch_taken_0x4b1bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1bcc) {
            ctx->pc = 0x4B1BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1bc0;
        }
    }
    ctx->pc = 0x4B1BD4u;
    // 0x4b1bd4: 0x8e041394  lw          $a0, 0x1394($s0)
    ctx->pc = 0x4b1bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5012)));
label_4b1bd8:
    // 0x4b1bd8: 0xae001388  sw          $zero, 0x1388($s0)
    ctx->pc = 0x4b1bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5000), GPR_U32(ctx, 0));
    // 0x4b1bdc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B1BDCu;
    {
        const bool branch_taken_0x4b1bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1BDCu;
        // 0x4b1be0: 0xae00138c  sw          $zero, 0x138C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5004), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1bdc) {
            ctx->pc = 0x4B1BECu;
            goto label_4b1bec;
        }
    }
    ctx->pc = 0x4B1BE4u;
    // 0x4b1be4: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4B1BE4u;
    SET_GPR_U32(ctx, 31, 0x4B1BECu);
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4B1BE4u, 0x4B1BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1BECu;
label_4b1bec:
    // 0x4b1bec: 0xae001384  sw          $zero, 0x1384($s0)
    ctx->pc = 0x4b1becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4996), GPR_U32(ctx, 0));
    // 0x4b1bf0: 0xae001394  sw          $zero, 0x1394($s0)
    ctx->pc = 0x4b1bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5012), GPR_U32(ctx, 0));
    // 0x4b1bf4: 0xae001390  sw          $zero, 0x1390($s0)
    ctx->pc = 0x4b1bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5008), GPR_U32(ctx, 0));
label_4b1bf8:
    // 0x4b1bf8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4b1bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b1bfc:
    // 0x4b1bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b1bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1c04: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C04u;
        // 0x4b1c08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1C0Cu;
    // 0x4b1c0c: 0x0  nop
    ctx->pc = 0x4b1c0cu;
    // NOP
    // 0x4b1c10: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B1C10u;
    {
        const bool branch_taken_0x4b1c10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1c10) {
            ctx->pc = 0x4B1C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1C10u;
            // 0x4b1c14: 0xaf80b8fc  sw          $zero, -0x4704($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294949116), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1C2Cu;
            goto label_4b1c2c;
        }
    }
    ctx->pc = 0x4B1C18u;
    // 0x4b1c18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b1c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b1c1c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4b1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x4b1c20: 0xaf82b900  sw          $v0, -0x4700($gp)
    ctx->pc = 0x4b1c20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949120), GPR_U32(ctx, 2));
    // 0x4b1c24: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C24u;
        // 0x4b1c28: 0xaf83b8fc  sw          $v1, -0x4704($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1C2Cu;
label_4b1c2c:
    // 0x4b1c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C2Cu;
        // 0x4b1c30: 0xaf80b900  sw          $zero, -0x4700($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294949120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1C34u;
    // 0x4b1c34: 0x0  nop
    ctx->pc = 0x4b1c34u;
    // NOP
    // 0x4b1c38: 0x8f86b900  lw          $a2, -0x4700($gp)
    ctx->pc = 0x4b1c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949120)));
    // 0x4b1c3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b1c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1c40: 0x18c00018  blez        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x4B1C40u;
    {
        const bool branch_taken_0x4b1c40 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x4B1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C40u;
        // 0x4b1c44: 0x8f82b8fc  lw          $v0, -0x4704($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1c40) {
            ctx->pc = 0x4B1CA4u;
            goto label_4b1ca4;
        }
    }
    ctx->pc = 0x4B1C48u;
    // 0x4b1c48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b1c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1c4c: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x4b1c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b1c50: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4b1c50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b1c54: 0x0  nop
    ctx->pc = 0x4b1c54u;
    // NOP
label_4b1c58:
    // 0x4b1c58: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4b1c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b1c5c: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4B1C5Cu;
    {
        const bool branch_taken_0x4b1c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b1c5c) {
            ctx->pc = 0x4B1C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1C5Cu;
            // 0x4b1c60: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1C98u;
            goto label_4b1c98;
        }
    }
    ctx->pc = 0x4B1C64u;
    // 0x4b1c64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b1c68: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x4b1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x4b1c6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4b1c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b1c70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4b1c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b1c74: 0x50690004  beql        $v1, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B1C74u;
    {
        const bool branch_taken_0x4b1c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x4b1c74) {
            ctx->pc = 0x4B1C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1C74u;
            // 0x4b1c78: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1C88u;
            goto label_4b1c88;
        }
    }
    ctx->pc = 0x4B1C7Cu;
    // 0x4b1c7c: 0x54680006  bnel        $v1, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B1C7Cu;
    {
        const bool branch_taken_0x4b1c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x4b1c7c) {
            ctx->pc = 0x4B1C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1C7Cu;
            // 0x4b1c80: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1C98u;
            goto label_4b1c98;
        }
    }
    ctx->pc = 0x4B1C84u;
    // 0x4b1c84: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x4b1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_4b1c88:
    // 0x4b1c88: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B1C88u;
    {
        const bool branch_taken_0x4b1c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b1c88) {
            ctx->pc = 0x4B1C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B1C88u;
            // 0x4b1c8c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B1C98u;
            goto label_4b1c98;
        }
    }
    ctx->pc = 0x4B1C90u;
    // 0x4b1c90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4B1C90u;
    {
        const bool branch_taken_0x4b1c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C90u;
        // 0x4b1c94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1c90) {
            ctx->pc = 0x4B1CA8u;
            goto label_4b1ca8;
        }
    }
    ctx->pc = 0x4B1C98u;
label_4b1c98:
    // 0x4b1c98: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x4b1c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4b1c9c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4B1C9Cu;
    {
        const bool branch_taken_0x4b1c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1C9Cu;
        // 0x4b1ca0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1c9c) {
            ctx->pc = 0x4B1C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b1c58;
        }
    }
    ctx->pc = 0x4B1CA4u;
label_4b1ca4:
    // 0x4b1ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b1ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b1ca8:
    // 0x4b1ca8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B1CA8u;
    {
        const bool branch_taken_0x4b1ca8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1CA8u;
        // 0x4b1cac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1ca8) {
            ctx->pc = 0x4B1CBCu;
            goto label_4b1cbc;
        }
    }
    ctx->pc = 0x4B1CB0u;
    // 0x4b1cb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b1cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b1cb4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x4b1cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x4b1cb8: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x4b1cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_4b1cbc:
    // 0x4b1cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1CBCu;
        // 0x4b1cc0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1CC4u;
    // 0x4b1cc4: 0x0  nop
    ctx->pc = 0x4b1cc4u;
    // NOP
    // 0x4b1cc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b1cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b1ccc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b1cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b1cd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1cd4: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4B1CD4u;
    SET_GPR_U32(ctx, 31, 0x4B1CDCu);
    ctx->pc = 0x4B1CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1CD4u;
    // 0x4b1cd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4B1CD4u, 0x4B1CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1CDCu;
label_4b1cdc:
    // 0x4b1cdc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x4b1cdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1ce0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4b1ce0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1ce4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b1ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1ce8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b1ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1cec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b1cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1cf0: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x4b1cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x4b1cf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b1cf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1cf8: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B1CF8u;
    SET_GPR_U32(ctx, 31, 0x4B1D00u);
    ctx->pc = 0x4B1CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1CF8u;
    // 0x4b1cfc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B1CF8u, 0x4B1D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1D00u;
label_4b1d00:
    // 0x4b1d00: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4B1D00u;
    SET_GPR_U32(ctx, 31, 0x4B1D08u);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4B1D00u, 0x4B1D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1D08u;
label_4b1d08:
    // 0x4b1d08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b1d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1d10: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1D10u;
        // 0x4b1d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1D18u;
    // 0x4b1d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b1d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b1d1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b1d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b1d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1d24: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4B1D24u;
    SET_GPR_U32(ctx, 31, 0x4B1D2Cu);
    ctx->pc = 0x4B1D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1D24u;
    // 0x4b1d28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4B1D24u, 0x4B1D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1D2Cu;
label_4b1d2c:
    // 0x4b1d2c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x4b1d2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1d30: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4b1d30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1d34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b1d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b1d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1d3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b1d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1d40: 0x24070046  addiu       $a3, $zero, 0x46
    ctx->pc = 0x4b1d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x4b1d44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4b1d44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1d48: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4B1D48u;
    SET_GPR_U32(ctx, 31, 0x4B1D50u);
    ctx->pc = 0x4B1D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1D48u;
    // 0x4b1d4c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4B1D48u, 0x4B1D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1D50u;
label_4b1d50:
    // 0x4b1d50: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4B1D50u;
    SET_GPR_U32(ctx, 31, 0x4B1D58u);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4B1D50u, 0x4B1D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1D58u;
label_4b1d58:
    // 0x4b1d58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b1d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1d60: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1D60u;
        // 0x4b1d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1D68u;
    // 0x4b1d68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b1d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b1d6c: 0x2783c260  addiu       $v1, $gp, -0x3DA0
    ctx->pc = 0x4b1d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951520));
    // 0x4b1d70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4b1d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4b1d74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b1d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1d78: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4b1d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4b1d7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b1d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b1d80: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x4b1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x4b1d84: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4b1d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4b1d88: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x4b1d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b1d8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1d90: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x4b1d90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b1d94: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4b1d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4b1d98: 0x3a230001  xori        $v1, $s1, 0x1
    ctx->pc = 0x4b1d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x4b1d9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b1d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b1da0: 0x3c130100  lui         $s3, 0x100
    ctx->pc = 0x4b1da0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)256 << 16));
    // 0x4b1da4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4b1da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4b1da8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B1DA8u;
    {
        const bool branch_taken_0x4b1da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1DA8u;
        // 0x4b1dac: 0x83900a  movz        $s2, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1da8) {
            ctx->pc = 0x4B1DD4u;
            goto label_4b1dd4;
        }
    }
    ctx->pc = 0x4B1DB0u;
    // 0x4b1db0: 0xc12d0e0  jal         func_4B4380
    ctx->pc = 0x4B1DB0u;
    SET_GPR_U32(ctx, 31, 0x4B1DB8u);
    ctx->pc = 0x4B1DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1DB0u;
    // 0x4b1db4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4380u, 0x4B1DB0u, 0x4B1DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1DB8u;
label_4b1db8:
    // 0x4b1db8: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B1DB8u;
    {
        const bool branch_taken_0x4b1db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x4B1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1DB8u;
        // 0x4b1dbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1db8) {
            ctx->pc = 0x4B1DD8u;
            goto label_4b1dd8;
        }
    }
    ctx->pc = 0x4B1DC0u;
    // 0x4b1dc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b1dc4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b1dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1dc8: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4b1dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4b1dcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B1DCCu;
    {
        const bool branch_taken_0x4b1dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B1DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1DCCu;
        // 0x4b1dd0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1dcc) {
            ctx->pc = 0x4B1DD8u;
            goto label_4b1dd8;
        }
    }
    ctx->pc = 0x4B1DD4u;
label_4b1dd4:
    // 0x4b1dd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b1dd8:
    // 0x4b1dd8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4b1dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b1ddc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4b1ddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b1de0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b1de0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b1de4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4b1de4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1dec: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1DECu;
        // 0x4b1df0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1DF4u;
    // 0x4b1df4: 0x0  nop
    ctx->pc = 0x4b1df4u;
    // NOP
    // 0x4b1df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b1df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b1dfc: 0x2782c260  addiu       $v0, $gp, -0x3DA0
    ctx->pc = 0x4b1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951520));
    // 0x4b1e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1e04: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x4b1e04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4b1e08: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4b1e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b1e0c: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x4b1e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x4b1e10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b1e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b1e14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b1e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b1e18: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4b1e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b1e1c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x4b1e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x4b1e20: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4b1e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4b1e24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b1e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b1e28: 0xe4300b  movn        $a2, $a3, $a0
    ctx->pc = 0x4b1e28u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x4b1e2c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b1e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4b1e30: 0xc12d0f0  jal         func_4B43C0
    ctx->pc = 0x4B1E30u;
    SET_GPR_U32(ctx, 31, 0x4B1E38u);
    ctx->pc = 0x4B1E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1E30u;
    // 0x4b1e34: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B43C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B43C0u, 0x4B1E30u, 0x4B1E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1E38u;
label_4b1e38:
    // 0x4b1e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1E3Cu;
        // 0x4b1e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1E44u;
    // 0x4b1e44: 0x0  nop
    ctx->pc = 0x4b1e44u;
    // NOP
    // 0x4b1e48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b1e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b1e4c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4b1e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4b1e50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b1e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1e54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4b1e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4b1e58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b1e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b1e5c: 0x118043  sra         $s0, $s1, 1
    ctx->pc = 0x4b1e5cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 1));
    // 0x4b1e60: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4b1e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4b1e64: 0x32320001  andi        $s2, $s1, 0x1
    ctx->pc = 0x4b1e64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4b1e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1e6c: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x4B1E6Cu;
    SET_GPR_U32(ctx, 31, 0x4B1E74u);
    ctx->pc = 0x4B1E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1E6Cu;
    // 0x4b1e70: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x4B1E6Cu, 0x4B1E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1E74u;
label_4b1e74:
    // 0x4b1e74: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x4b1e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4b1e78: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b1e7c: 0x212180a  movz        $v1, $s0, $s2
    ctx->pc = 0x4b1e7cu;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x4b1e80: 0x2442eb80  addiu       $v0, $v0, -0x1480
    ctx->pc = 0x4b1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962048));
    // 0x4b1e84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b1e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4b1e88: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x4b1e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b1e8c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x4b1e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b1e90: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x4B1E90u;
    {
        const bool branch_taken_0x4b1e90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1E90u;
        // 0x4b1e94: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1e90) {
            ctx->pc = 0x4B1EC4u;
            goto label_4b1ec4;
        }
    }
    ctx->pc = 0x4B1E98u;
    // 0x4b1e98: 0x2783c260  addiu       $v1, $gp, -0x3DA0
    ctx->pc = 0x4b1e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951520));
    // 0x4b1e9c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4b1e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b1ea0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4b1ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b1ea4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4b1ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b1ea8: 0x2071804  sllv        $v1, $a3, $s0
    ctx->pc = 0x4b1ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 16) & 0x1F));
    // 0x4b1eac: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x4b1eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b1eb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B1EB0u;
    {
        const bool branch_taken_0x4b1eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1EB0u;
        // 0x4b1eb4: 0x831025  or          $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b1eb0) {
            ctx->pc = 0x4B1EC4u;
            goto label_4b1ec4;
        }
    }
    ctx->pc = 0x4B1EB8u;
    // 0x4b1eb8: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x4b1eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x4b1ebc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b1ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4b1ec0: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x4b1ec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b1ec4:
    // 0x4b1ec4: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x4B1EC4u;
    SET_GPR_U32(ctx, 31, 0x4B1ECCu);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x4B1EC4u, 0x4B1ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1ECCu;
label_4b1ecc:
    // 0x4b1ecc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4b1eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1ed0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4b1ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b1ed4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4b1ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b1ed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b1ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b1edc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4b1edcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1EE4u;
        // 0x4b1ee8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1EECu;
    // 0x4b1eec: 0x0  nop
    ctx->pc = 0x4b1eecu;
    // NOP
    // 0x4b1ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b1ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b1ef4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4b1ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4b1ef8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b1ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1efc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b1efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b1f00: 0x32110001  andi        $s1, $s0, 0x1
    ctx->pc = 0x4b1f00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4b1f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b1f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b1f08: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x4B1F08u;
    SET_GPR_U32(ctx, 31, 0x4B1F10u);
    ctx->pc = 0x4B1F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1F08u;
    // 0x4b1f0c: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x4B1F08u, 0x4B1F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1F10u;
label_4b1f10:
    // 0x4b1f10: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x4b1f10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x4b1f14: 0x2782c260  addiu       $v0, $gp, -0x3DA0
    ctx->pc = 0x4b1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951520));
    // 0x4b1f18: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4b1f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b1f1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b1f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b1f20: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4b1f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b1f24: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x4b1f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4b1f28: 0x2042004  sllv        $a0, $a0, $s0
    ctx->pc = 0x4b1f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x4b1f2c: 0x211180a  movz        $v1, $s0, $s1
    ctx->pc = 0x4b1f2cu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x4b1f30: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x4b1f30u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x4b1f34: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b1f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4b1f38: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4b1f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4b1f3c: 0x2442eb80  addiu       $v0, $v0, -0x1480
    ctx->pc = 0x4b1f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962048));
    // 0x4b1f40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b1f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4b1f44: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4b1f44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4b1f48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b1f4c: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x4B1F4Cu;
    SET_GPR_U32(ctx, 31, 0x4B1F54u);
    ctx->pc = 0x4B1F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1F4Cu;
    // 0x4b1f50: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x4B1F4Cu, 0x4B1F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1F54u;
label_4b1f54:
    // 0x4b1f54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4b1f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b1f58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b1f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1f5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b1f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1f60: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1F60u;
        // 0x4b1f64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B1F68u;
}
