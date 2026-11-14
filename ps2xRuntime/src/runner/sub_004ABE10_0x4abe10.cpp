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

// Function: sub_004ABE10
// Address: 0x4abe10 - 0x4abf60
void sub_004ABE10_0x4abe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ABE10_0x4abe10");
#endif

    switch (ctx->pc) {
        case 0x4abe50u: goto label_4abe50;
        case 0x4abea8u: goto label_4abea8;
        case 0x4abec0u: goto label_4abec0;
        default: break;
    }

    ctx->pc = 0x4abe10u;

    // 0x4abe10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4abe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4abe14: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4abe14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x4abe18: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4abe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x4abe1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4abe1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abe20: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4abe20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x4abe24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4abe24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abe28: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4abe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x4abe2c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4abe2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abe30: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4abe30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4abe34: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x4abe34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abe38: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4abe38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x4abe3c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4abe3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abe40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4abe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4abe44: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x4ABE44u;
    {
        const bool branch_taken_0x4abe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABE44u;
        // 0x4abe48: 0x2415000c  addiu       $s5, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abe44) {
            ctx->pc = 0x4ABEB0u;
            goto label_4abeb0;
        }
    }
    ctx->pc = 0x4ABE4Cu;
    // 0x4abe4c: 0x0  nop
    ctx->pc = 0x4abe4cu;
    // NOP
label_4abe50:
    // 0x4abe50: 0x14540013  bne         $v0, $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x4ABE50u;
    {
        const bool branch_taken_0x4abe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x4ABE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABE50u;
        // 0x4abe54: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abe50) {
            ctx->pc = 0x4ABEA0u;
            goto label_4abea0;
        }
    }
    ctx->pc = 0x4ABE58u;
    // 0x4abe58: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4abe58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4abe5c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4abe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x4abe60: 0x34424fff  ori         $v0, $v0, 0x4FFF
    ctx->pc = 0x4abe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20479);
    // 0x4abe64: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4abe64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4abe68: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x4ABE68u;
    {
        const bool branch_taken_0x4abe68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABE68u;
        // 0x4abe6c: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abe68) {
            ctx->pc = 0x4ABF38u;
            goto label_4abf38;
        }
    }
    ctx->pc = 0x4ABE70u;
    // 0x4abe70: 0x34427002  ori         $v0, $v0, 0x7002
    ctx->pc = 0x4abe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28674);
    // 0x4abe74: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4abe74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4abe78: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x4ABE78u;
    {
        const bool branch_taken_0x4abe78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ABE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABE78u;
        // 0x4abe7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abe78) {
            ctx->pc = 0x4ABF3Cu;
            goto label_4abf3c;
        }
    }
    ctx->pc = 0x4ABE80u;
    // 0x4abe80: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4ABE80u;
    {
        const bool branch_taken_0x4abe80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABE80u;
        // 0x4abe84: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abe80) {
            ctx->pc = 0x4ABE8Cu;
            goto label_4abe8c;
        }
    }
    ctx->pc = 0x4ABE88u;
    // 0x4abe88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4abe88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4abe8c:
    // 0x4abe8c: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x4ABE8Cu;
    {
        const bool branch_taken_0x4abe8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABE8Cu;
        // 0x4abe90: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abe8c) {
            ctx->pc = 0x4ABE98u;
            goto label_4abe98;
        }
    }
    ctx->pc = 0x4ABE94u;
    // 0x4abe94: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4abe94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4abe98:
    // 0x4abe98: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x4ABE98u;
    {
        const bool branch_taken_0x4abe98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABE98u;
        // 0x4abe9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abe98) {
            ctx->pc = 0x4ABF3Cu;
            goto label_4abf3c;
        }
    }
    ctx->pc = 0x4ABEA0u;
label_4abea0:
    // 0x4abea0: 0xc1048ec  jal         func_4123B0
    ctx->pc = 0x4ABEA0u;
    SET_GPR_U32(ctx, 31, 0x4ABEA8u);
    ctx->pc = 0x4ABEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABEA0u;
    // 0x4abea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x4ABEA0u, 0x4ABEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABEA8u;
label_4abea8:
    // 0x4abea8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4ABEA8u;
    {
        const bool branch_taken_0x4abea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABEA8u;
        // 0x4abeac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abea8) {
            ctx->pc = 0x4ABF3Cu;
            goto label_4abf3c;
        }
    }
    ctx->pc = 0x4ABEB0u;
label_4abeb0:
    // 0x4abeb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4abeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abeb4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4abeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4abeb8: 0xc10480a  jal         func_412028
    ctx->pc = 0x4ABEB8u;
    SET_GPR_U32(ctx, 31, 0x4ABEC0u);
    ctx->pc = 0x4ABEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABEB8u;
    // 0x4abebc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x4ABEB8u, 0x4ABEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABEC0u;
label_4abec0:
    // 0x4abec0: 0x1455001b  bne         $v0, $s5, . + 4 + (0x1B << 2)
    ctx->pc = 0x4ABEC0u;
    {
        const bool branch_taken_0x4abec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x4ABEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABEC0u;
        // 0x4abec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abec0) {
            ctx->pc = 0x4ABF30u;
            goto label_4abf30;
        }
    }
    ctx->pc = 0x4ABEC8u;
    // 0x4abec8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4abec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4abecc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4abeccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4abed0: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x4abed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4abed4: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x4abed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4abed8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4abed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4abedc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x4abedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4abee0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ABEE0u;
    {
        const bool branch_taken_0x4abee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ABEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABEE0u;
        // 0x4abee4: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abee0) {
            ctx->pc = 0x4ABEF8u;
            goto label_4abef8;
        }
    }
    ctx->pc = 0x4ABEE8u;
    // 0x4abee8: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x4abee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x4abeec: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x4abeecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x4abef0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4ABEF0u;
    {
        const bool branch_taken_0x4abef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABEF0u;
        // 0x4abef4: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abef0) {
            ctx->pc = 0x4ABF28u;
            goto label_4abf28;
        }
    }
    ctx->pc = 0x4ABEF8u;
label_4abef8:
    // 0x4abef8: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x4abef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x4abefc: 0x61b82  srl         $v1, $a2, 14
    ctx->pc = 0x4abefcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 14));
    // 0x4abf00: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x4abf00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x4abf04: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4abf04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4abf08: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4abf08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4abf0c: 0x61402  srl         $v0, $a2, 16
    ctx->pc = 0x4abf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x4abf10: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4abf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4abf14: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4abf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x4abf18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4abf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4abf1c: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x4abf1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4abf20: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4abf20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4abf24: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x4abf24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_4abf28:
    // 0x4abf28: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x4abf28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x4abf2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4abf2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4abf30:
    // 0x4abf30: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x4ABF30u;
    {
        const bool branch_taken_0x4abf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ABF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABF30u;
        // 0x4abf34: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abf30) {
            ctx->pc = 0x4ABE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4abe50;
        }
    }
    ctx->pc = 0x4ABF38u;
label_4abf38:
    // 0x4abf38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4abf38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4abf3c:
    // 0x4abf3c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4abf3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4abf40: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4abf40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4abf44: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4abf44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4abf48: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4abf48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4abf4c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4abf4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4abf50: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4abf50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4abf54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4abf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4abf58: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABF58u;
        // 0x4abf5c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABF60u;
}
