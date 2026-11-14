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

// Function: sub_00393F18
// Address: 0x393f18 - 0x394140
void sub_00393F18_0x393f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393F18_0x393f18");
#endif

    switch (ctx->pc) {
        case 0x393f68u: goto label_393f68;
        case 0x393fd8u: goto label_393fd8;
        case 0x394018u: goto label_394018;
        case 0x394058u: goto label_394058;
        case 0x3940b8u: goto label_3940b8;
        default: break;
    }

    ctx->pc = 0x393f18u;

    // 0x393f18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x393f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x393f1c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x393f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x393f20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x393f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x393f24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x393f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393f28: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x393f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x393f2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x393f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393f30: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x393f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x393f34: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x393f34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393f38: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x393f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x393f3c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x393f3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393f40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x393f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x393f44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x393f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x393f48: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x393f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x393f4c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x393f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x393f50: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x393f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x393f54: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x393F54u;
    {
        const bool branch_taken_0x393f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x393F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F54u;
        // 0x393f58: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393f54) {
            ctx->pc = 0x393FC4u;
            goto label_393fc4;
        }
    }
    ctx->pc = 0x393F5Cu;
    // 0x393f5c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x393f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x393f60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x393f60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393f64: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x393f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_393f68:
    // 0x393f68: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x393f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x393f6c: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x393f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x393f70: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x393f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x393f74: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x393f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x393f78: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x393F78u;
    {
        const bool branch_taken_0x393f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x393f78) {
            ctx->pc = 0x393F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393F78u;
            // 0x393f7c: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393FACu;
            goto label_393fac;
        }
    }
    ctx->pc = 0x393F80u;
    // 0x393f80: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x393f80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x393f84: 0x50ca0001  beql        $a2, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x393F84u;
    {
        const bool branch_taken_0x393f84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x393f84) {
            ctx->pc = 0x393F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393F84u;
            // 0x393f88: 0x8caa0014  lw          $t2, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393F8Cu;
            goto label_393f8c;
        }
    }
    ctx->pc = 0x393F8Cu;
label_393f8c:
    // 0x393f8c: 0x51400007  beql        $t2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x393F8Cu;
    {
        const bool branch_taken_0x393f8c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x393f8c) {
            ctx->pc = 0x393F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393F8Cu;
            // 0x393f90: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393FACu;
            goto label_393fac;
        }
    }
    ctx->pc = 0x393F94u;
    // 0x393f94: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x393f94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x393f98: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x393f98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x393f9c: 0xacea0004  sw          $t2, 0x4($a3)
    ctx->pc = 0x393f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 10));
    // 0x393fa0: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x393fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
    // 0x393fa4: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x393fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x393fa8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x393fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_393fac:
    // 0x393fac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x393facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x393fb0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x393fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x393fb4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x393fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x393fb8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x393fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x393fbc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x393FBCu;
    {
        const bool branch_taken_0x393fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393FBCu;
        // 0x393fc0: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393fbc) {
            ctx->pc = 0x393F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393f68;
        }
    }
    ctx->pc = 0x393FC4u;
label_393fc4:
    // 0x393fc4: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x393fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x393fc8: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x393FC8u;
    {
        const bool branch_taken_0x393fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393FC8u;
        // 0x393fcc: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393fc8) {
            ctx->pc = 0x394118u;
            goto label_394118;
        }
    }
    ctx->pc = 0x393FD0u;
    // 0x393fd0: 0x2631fff4  addiu       $s1, $s1, -0xC
    ctx->pc = 0x393fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
    // 0x393fd4: 0x0  nop
    ctx->pc = 0x393fd4u;
    // NOP
label_393fd8:
    // 0x393fd8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x393fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x393fdc: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x393fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x393fe0: 0x2652fff4  addiu       $s2, $s2, -0xC
    ctx->pc = 0x393fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967284));
    // 0x393fe4: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x393fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x393fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x393fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393fec: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x393fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x393ff0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x393ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x393ff4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x393ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x393ff8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x393ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x393ffc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x393ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x394000: 0x30f30001  andi        $s3, $a3, 0x1
    ctx->pc = 0x394000u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x394004: 0xac45fffc  sw          $a1, -0x4($v0)
    ctx->pc = 0x394004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 5));
    // 0x394008: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x394008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39400c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x39400cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x394010: 0xc0e4f0a  jal         func_393C28
    ctx->pc = 0x394010u;
    SET_GPR_U32(ctx, 31, 0x394018u);
    ctx->pc = 0x394014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394010u;
    // 0x394014: 0xae070000  sw          $a3, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393C28u, 0x394010u, 0x394018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394018u;
label_394018:
    // 0x394018: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x394018u;
    {
        const bool branch_taken_0x394018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394018u;
        // 0x39401c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394018) {
            ctx->pc = 0x39411Cu;
            goto label_39411c;
        }
    }
    ctx->pc = 0x394020u;
    // 0x394020: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x394020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x394024: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x394024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x394028: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x394028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x39402c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x39402Cu;
    {
        const bool branch_taken_0x39402c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39402Cu;
        // 0x394030: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39402c) {
            ctx->pc = 0x39410Cu;
            goto label_39410c;
        }
    }
    ctx->pc = 0x394034u;
    // 0x394034: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x394034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x394038: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x394038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39403c: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x39403cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x394040: 0x8d420018  lw          $v0, 0x18($t2)
    ctx->pc = 0x394040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x394044: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x394044u;
    {
        const bool branch_taken_0x394044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394044u;
        // 0x394048: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394044) {
            ctx->pc = 0x39410Cu;
            goto label_39410c;
        }
    }
    ctx->pc = 0x39404Cu;
    // 0x39404c: 0x254c001c  addiu       $t4, $t2, 0x1C
    ctx->pc = 0x39404cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 28));
    // 0x394050: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x394050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394054: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x394054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_394058:
    // 0x394058: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x394058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x39405c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x39405cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x394060: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x394060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x394064: 0x16630024  bne         $s3, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x394064u;
    {
        const bool branch_taken_0x394064 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x394068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394064u;
        // 0x394068: 0x248b0001  addiu       $t3, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394064) {
            ctx->pc = 0x3940F8u;
            goto label_3940f8;
        }
    }
    ctx->pc = 0x39406Cu;
    // 0x39406c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x39406cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x394070: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x394070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x394074: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x394074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x394078: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x394078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39407c: 0x8c64fffc  lw          $a0, -0x4($v1)
    ctx->pc = 0x39407cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x394080: 0x50a4001e  beql        $a1, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x394080u;
    {
        const bool branch_taken_0x394080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x394080) {
            ctx->pc = 0x394084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394080u;
            // 0x394084: 0x8d420018  lw          $v0, 0x18($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3940FCu;
            goto label_3940fc;
        }
    }
    ctx->pc = 0x394088u;
    // 0x394088: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x394088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x39408c: 0x51430001  beql        $t2, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x39408Cu;
    {
        const bool branch_taken_0x39408c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 3));
        if (branch_taken_0x39408c) {
            ctx->pc = 0x394090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39408Cu;
            // 0x394090: 0x8ca30014  lw          $v1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394094u;
            goto label_394094;
        }
    }
    ctx->pc = 0x394094u;
label_394094:
    // 0x394094: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x394094u;
    {
        const bool branch_taken_0x394094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x394098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394094u;
        // 0x394098: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394094) {
            ctx->pc = 0x3940F8u;
            goto label_3940f8;
        }
    }
    ctx->pc = 0x39409Cu;
    // 0x39409c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x39409cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3940a0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3940a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3940a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3940a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3940a8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3940A8u;
    {
        const bool branch_taken_0x3940a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3940ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940A8u;
        // 0x3940ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3940a8) {
            ctx->pc = 0x3940D4u;
            goto label_3940d4;
        }
    }
    ctx->pc = 0x3940B0u;
    // 0x3940b0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3940b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3940b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3940b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3940b8:
    // 0x3940b8: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x3940b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3940bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3940BCu;
    {
        const bool branch_taken_0x3940bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3940C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940BCu;
        // 0x3940c0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3940bc) {
            ctx->pc = 0x3940E0u;
            goto label_3940e0;
        }
    }
    ctx->pc = 0x3940C4u;
    // 0x3940c4: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3940c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3940c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3940c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3940cc: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3940CCu;
    {
        const bool branch_taken_0x3940cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3940cc) {
            ctx->pc = 0x3940D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3940CCu;
            // 0x3940d0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3940B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3940b8;
        }
    }
    ctx->pc = 0x3940D4u;
label_3940d4:
    // 0x3940d4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3940d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3940d8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3940D8u;
    {
        const bool branch_taken_0x3940d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3940d8) {
            ctx->pc = 0x3940DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3940D8u;
            // 0x3940dc: 0x8d420018  lw          $v0, 0x18($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3940FCu;
            goto label_3940fc;
        }
    }
    ctx->pc = 0x3940E0u;
label_3940e0:
    // 0x3940e0: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x3940e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3940e4: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x3940e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x3940e8: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x3940e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x3940ec: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x3940ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3940f0: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x3940f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x3940f4: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x3940f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_3940f8:
    // 0x3940f8: 0x8d420018  lw          $v0, 0x18($t2)
    ctx->pc = 0x3940f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
label_3940fc:
    // 0x3940fc: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x3940fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394100: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x394100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x394104: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x394104u;
    {
        const bool branch_taken_0x394104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394104u;
        // 0x394108: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394104) {
            ctx->pc = 0x394058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394058;
        }
    }
    ctx->pc = 0x39410Cu;
label_39410c:
    // 0x39410c: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x39410cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x394110: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x394110u;
    {
        const bool branch_taken_0x394110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394110u;
        // 0x394114: 0x2631fff4  addiu       $s1, $s1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394110) {
            ctx->pc = 0x393FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393fd8;
        }
    }
    ctx->pc = 0x394118u;
label_394118:
    // 0x394118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x394118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39411c:
    // 0x39411c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x39411cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x394120: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x394120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x394124: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x394124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x394128: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x394128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39412c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x39412cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x394130: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x394130u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x394134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394138: 0x3e00008  jr          $ra
    ctx->pc = 0x394138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394138u;
        // 0x39413c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394140u;
}
