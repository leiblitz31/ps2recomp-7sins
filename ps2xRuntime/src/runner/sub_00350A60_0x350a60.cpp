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

// Function: sub_00350A60
// Address: 0x350a60 - 0x350c30
void sub_00350A60_0x350a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350A60_0x350a60");
#endif

    ctx->pc = 0x350a60u;

    // 0x350a60: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x350a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x350a64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x350a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x350a68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x350a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350a6c: 0x24680050  addiu       $t0, $v1, 0x50
    ctx->pc = 0x350a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x350a70: 0x8d020058  lw          $v0, 0x58($t0)
    ctx->pc = 0x350a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x350a74: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x350a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x350a78: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x350A78u;
    {
        const bool branch_taken_0x350a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x350A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A78u;
        // 0x350a7c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350a78) {
            ctx->pc = 0x350A90u;
            goto label_350a90;
        }
    }
    ctx->pc = 0x350A80u;
    // 0x350a80: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x350a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x350a84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x350a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350a88: 0x3e00008  jr          $ra
    ctx->pc = 0x350A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A88u;
        // 0x350a8c: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350A90u;
label_350a90:
    // 0x350a90: 0x10c2003a  beq         $a2, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x350A90u;
    {
        const bool branch_taken_0x350a90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x350A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A90u;
        // 0x350a94: 0x2cc20011  sltiu       $v0, $a2, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x350a90) {
            ctx->pc = 0x350B7Cu;
            goto label_350b7c;
        }
    }
    ctx->pc = 0x350A98u;
    // 0x350a98: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x350A98u;
    {
        const bool branch_taken_0x350a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350A98u;
        // 0x350a9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350a98) {
            ctx->pc = 0x350ADCu;
            goto label_350adc;
        }
    }
    ctx->pc = 0x350AA0u;
    // 0x350aa0: 0x10c20024  beq         $a2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x350AA0u;
    {
        const bool branch_taken_0x350aa0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x350AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350AA0u;
        // 0x350aa4: 0x2cc20003  sltiu       $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x350aa0) {
            ctx->pc = 0x350B34u;
            goto label_350b34;
        }
    }
    ctx->pc = 0x350AA8u;
    // 0x350aa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x350AA8u;
    {
        const bool branch_taken_0x350aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350AA8u;
        // 0x350aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350aa8) {
            ctx->pc = 0x350AC0u;
            goto label_350ac0;
        }
    }
    ctx->pc = 0x350AB0u;
    // 0x350ab0: 0x10c2001a  beq         $a2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x350AB0u;
    {
        const bool branch_taken_0x350ab0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x350ab0) {
            ctx->pc = 0x350B1Cu;
            goto label_350b1c;
        }
    }
    ctx->pc = 0x350AB8u;
    // 0x350ab8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x350AB8u;
    {
        const bool branch_taken_0x350ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350AB8u;
        // 0x350abc: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ab8) {
            ctx->pc = 0x350BF0u;
            goto label_350bf0;
        }
    }
    ctx->pc = 0x350AC0u;
label_350ac0:
    // 0x350ac0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x350ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x350ac4: 0x10c20021  beq         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x350AC4u;
    {
        const bool branch_taken_0x350ac4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x350AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350AC4u;
        // 0x350ac8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ac4) {
            ctx->pc = 0x350B4Cu;
            goto label_350b4c;
        }
    }
    ctx->pc = 0x350ACCu;
    // 0x350acc: 0x10c20025  beq         $a2, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x350ACCu;
    {
        const bool branch_taken_0x350acc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x350acc) {
            ctx->pc = 0x350B64u;
            goto label_350b64;
        }
    }
    ctx->pc = 0x350AD4u;
    // 0x350ad4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x350AD4u;
    {
        const bool branch_taken_0x350ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350AD4u;
        // 0x350ad8: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ad4) {
            ctx->pc = 0x350BF0u;
            goto label_350bf0;
        }
    }
    ctx->pc = 0x350ADCu;
label_350adc:
    // 0x350adc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x350adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x350ae0: 0x10c20032  beq         $a2, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x350AE0u;
    {
        const bool branch_taken_0x350ae0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x350AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350AE0u;
        // 0x350ae4: 0x2cc20041  sltiu       $v0, $a2, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ae0) {
            ctx->pc = 0x350BACu;
            goto label_350bac;
        }
    }
    ctx->pc = 0x350AE8u;
    // 0x350ae8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x350AE8u;
    {
        const bool branch_taken_0x350ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350AE8u;
        // 0x350aec: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ae8) {
            ctx->pc = 0x350B00u;
            goto label_350b00;
        }
    }
    ctx->pc = 0x350AF0u;
    // 0x350af0: 0x10c20028  beq         $a2, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x350AF0u;
    {
        const bool branch_taken_0x350af0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x350af0) {
            ctx->pc = 0x350B94u;
            goto label_350b94;
        }
    }
    ctx->pc = 0x350AF8u;
    // 0x350af8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x350AF8u;
    {
        const bool branch_taken_0x350af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350AF8u;
        // 0x350afc: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350af8) {
            ctx->pc = 0x350BF0u;
            goto label_350bf0;
        }
    }
    ctx->pc = 0x350B00u;
label_350b00:
    // 0x350b00: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x350b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x350b04: 0x10c2002f  beq         $a2, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x350B04u;
    {
        const bool branch_taken_0x350b04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x350B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B04u;
        // 0x350b08: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350b04) {
            ctx->pc = 0x350BC4u;
            goto label_350bc4;
        }
    }
    ctx->pc = 0x350B0Cu;
    // 0x350b0c: 0x10c20033  beq         $a2, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x350B0Cu;
    {
        const bool branch_taken_0x350b0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x350b0c) {
            ctx->pc = 0x350BDCu;
            goto label_350bdc;
        }
    }
    ctx->pc = 0x350B14u;
    // 0x350b14: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x350B14u;
    {
        const bool branch_taken_0x350b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B14u;
        // 0x350b18: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350b14) {
            ctx->pc = 0x350BF0u;
            goto label_350bf0;
        }
    }
    ctx->pc = 0x350B1Cu;
label_350b1c:
    // 0x350b1c: 0x6862005b  ldl         $v0, 0x5B($v1)
    ctx->pc = 0x350b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x350b20: 0x6c620054  ldr         $v0, 0x54($v1)
    ctx->pc = 0x350b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x350b24: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x350b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350b28: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x350b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350b2c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x350B2Cu;
    {
        const bool branch_taken_0x350b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B2Cu;
        // 0x350b30: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350b2c) {
            ctx->pc = 0x350BF0u;
            goto label_350bf0;
        }
    }
    ctx->pc = 0x350B34u;
label_350b34:
    // 0x350b34: 0x6862007b  ldl         $v0, 0x7B($v1)
    ctx->pc = 0x350b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x350b38: 0x6c620074  ldr         $v0, 0x74($v1)
    ctx->pc = 0x350b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x350b3c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x350b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350b40: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x350b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350b44: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x350B44u;
    {
        const bool branch_taken_0x350b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B44u;
        // 0x350b48: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350b44) {
            ctx->pc = 0x350BF0u;
            goto label_350bf0;
        }
    }
    ctx->pc = 0x350B4Cu;
label_350b4c:
    // 0x350b4c: 0x68620073  ldl         $v0, 0x73($v1)
    ctx->pc = 0x350b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x350b50: 0x6c62006c  ldr         $v0, 0x6C($v1)
    ctx->pc = 0x350b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x350b54: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x350b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350b58: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x350b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350b5c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x350B5Cu;
    {
        const bool branch_taken_0x350b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B5Cu;
        // 0x350b60: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350b5c) {
            ctx->pc = 0x350BF0u;
            goto label_350bf0;
        }
    }
    ctx->pc = 0x350B64u;
label_350b64:
    // 0x350b64: 0x68620063  ldl         $v0, 0x63($v1)
    ctx->pc = 0x350b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x350b68: 0x6c62005c  ldr         $v0, 0x5C($v1)
    ctx->pc = 0x350b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x350b6c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x350b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350b70: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x350b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350b74: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x350B74u;
    {
        const bool branch_taken_0x350b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B74u;
        // 0x350b78: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350b74) {
            ctx->pc = 0x350BF0u;
            goto label_350bf0;
        }
    }
    ctx->pc = 0x350B7Cu;
label_350b7c:
    // 0x350b7c: 0x6862006b  ldl         $v0, 0x6B($v1)
    ctx->pc = 0x350b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x350b80: 0x6c620064  ldr         $v0, 0x64($v1)
    ctx->pc = 0x350b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x350b84: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x350b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350b88: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x350b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350b8c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x350B8Cu;
    {
        const bool branch_taken_0x350b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B8Cu;
        // 0x350b90: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350b8c) {
            ctx->pc = 0x350BF0u;
            goto label_350bf0;
        }
    }
    ctx->pc = 0x350B94u;
label_350b94:
    // 0x350b94: 0x6862008b  ldl         $v0, 0x8B($v1)
    ctx->pc = 0x350b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 139); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x350b98: 0x6c620084  ldr         $v0, 0x84($v1)
    ctx->pc = 0x350b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 132); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x350b9c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x350b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350ba0: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x350ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350ba4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x350BA4u;
    {
        const bool branch_taken_0x350ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350BA4u;
        // 0x350ba8: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ba4) {
            ctx->pc = 0x350BF0u;
            goto label_350bf0;
        }
    }
    ctx->pc = 0x350BACu;
label_350bac:
    // 0x350bac: 0x68620083  ldl         $v0, 0x83($v1)
    ctx->pc = 0x350bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x350bb0: 0x6c62007c  ldr         $v0, 0x7C($v1)
    ctx->pc = 0x350bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x350bb4: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x350bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350bb8: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x350bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350bbc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x350BBCu;
    {
        const bool branch_taken_0x350bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350BBCu;
        // 0x350bc0: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350bbc) {
            ctx->pc = 0x350BF0u;
            goto label_350bf0;
        }
    }
    ctx->pc = 0x350BC4u;
label_350bc4:
    // 0x350bc4: 0x68620093  ldl         $v0, 0x93($v1)
    ctx->pc = 0x350bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 147); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x350bc8: 0x6c62008c  ldr         $v0, 0x8C($v1)
    ctx->pc = 0x350bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 140); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x350bcc: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x350bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350bd0: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x350bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350bd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x350BD4u;
    {
        const bool branch_taken_0x350bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350BD4u;
        // 0x350bd8: 0x8d020054  lw          $v0, 0x54($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350bd4) {
            ctx->pc = 0x350BF0u;
            goto label_350bf0;
        }
    }
    ctx->pc = 0x350BDCu;
label_350bdc:
    // 0x350bdc: 0x6862009b  ldl         $v0, 0x9B($v1)
    ctx->pc = 0x350bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x350be0: 0x6c620094  ldr         $v0, 0x94($v1)
    ctx->pc = 0x350be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x350be4: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x350be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350be8: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x350be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x350bec: 0x8d020054  lw          $v0, 0x54($t0)
    ctx->pc = 0x350becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
label_350bf0:
    // 0x350bf0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x350BF0u;
    {
        const bool branch_taken_0x350bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350bf0) {
            ctx->pc = 0x350BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350BF0u;
            // 0x350bf4: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350BF8u;
            goto label_350bf8;
        }
    }
    ctx->pc = 0x350BF8u;
label_350bf8:
    // 0x350bf8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x350bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x350bfc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x350BFCu;
    {
        const bool branch_taken_0x350bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350BFCu;
        // 0x350c00: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350bfc) {
            ctx->pc = 0x350C28u;
            goto label_350c28;
        }
    }
    ctx->pc = 0x350C04u;
    // 0x350c04: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x350c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x350c08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x350C08u;
    {
        const bool branch_taken_0x350c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C08u;
        // 0x350c0c: 0x8f83a858  lw          $v1, -0x57A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350c08) {
            ctx->pc = 0x350C28u;
            goto label_350c28;
        }
    }
    ctx->pc = 0x350C10u;
    // 0x350c10: 0xe62825  or          $a1, $a3, $a2
    ctx->pc = 0x350c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x350c14: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x350c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x350c18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x350c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x350c1c: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x350c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x350c20: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x350c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x350c24: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x350c24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
label_350c28:
    // 0x350c28: 0x3e00008  jr          $ra
    ctx->pc = 0x350C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C28u;
        // 0x350c2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350C30u;
}
