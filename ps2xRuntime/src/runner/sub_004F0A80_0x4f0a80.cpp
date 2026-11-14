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

// Function: sub_004F0A80
// Address: 0x4f0a80 - 0x4f0b6c
void sub_004F0A80_0x4f0a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0A80_0x4f0a80");
#endif

    switch (ctx->pc) {
        case 0x4f0ac0u: goto label_4f0ac0;
        case 0x4f0b10u: goto label_4f0b10;
        case 0x4f0b20u: goto label_4f0b20;
        case 0x4f0b3cu: goto label_4f0b3c;
        case 0x4f0b50u: goto label_4f0b50;
        default: break;
    }

    ctx->pc = 0x4f0a80u;

    // 0x4f0a80: 0x0  nop
    ctx->pc = 0x4f0a80u;
    // NOP
    // 0x4f0a84: 0x0  nop
    ctx->pc = 0x4f0a84u;
    // NOP
    // 0x4f0a88: 0x0  nop
    ctx->pc = 0x4f0a88u;
    // NOP
    // 0x4f0a8c: 0x0  nop
    ctx->pc = 0x4f0a8cu;
    // NOP
    // 0x4f0a90: 0x0  nop
    ctx->pc = 0x4f0a90u;
    // NOP
    // 0x4f0a94: 0x0  nop
    ctx->pc = 0x4f0a94u;
    // NOP
    // 0x4f0a98: 0x0  nop
    ctx->pc = 0x4f0a98u;
    // NOP
    // 0x4f0a9c: 0x0  nop
    ctx->pc = 0x4f0a9cu;
    // NOP
    // 0x4f0aa0: 0x0  nop
    ctx->pc = 0x4f0aa0u;
    // NOP
    // 0x4f0aa4: 0x0  nop
    ctx->pc = 0x4f0aa4u;
    // NOP
    // 0x4f0aa8: 0x22  neg         $zero, $zero
    ctx->pc = 0x4f0aa8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
    // 0x4f0aac: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x4f0aacu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x4f0ab0: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x4f0ab0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x4f0ab4: 0x0  nop
    ctx->pc = 0x4f0ab4u;
    // NOP
    // 0x4f0ab8: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4f0ab8u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4F0AB8 raw=0x49497350");
    // 0x4f0abc: 0x6462696c  daddiu      $v0, $v1, 0x696C
    ctx->pc = 0x4f0abcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26988);
label_4f0ac0:
    // 0x4f0ac0: 0x20206362  addi        $zero, $at, 0x6362
    ctx->pc = 0x4f0ac0u;
    // NOP (addi to $zero)
    // 0x4f0ac4: 0x30303033  andi        $s0, $at, 0x3033
    ctx->pc = 0x4f0ac4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12339);
    // 0x4f0ac8: 0x0  nop
    ctx->pc = 0x4f0ac8u;
    // NOP
    // 0x4f0acc: 0x0  nop
    ctx->pc = 0x4f0accu;
    // NOP
    // 0x4f0ad0: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4f0ad0u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4F0AD0 raw=0x49497350");
    // 0x4f0ad4: 0x6462696c  daddiu      $v0, $v1, 0x696C
    ctx->pc = 0x4f0ad4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26988);
    // 0x4f0ad8: 0x2020616d  addi        $zero, $at, 0x616D
    ctx->pc = 0x4f0ad8u;
    // NOP (addi to $zero)
    // 0x4f0adc: 0x30303033  andi        $s0, $at, 0x3033
    ctx->pc = 0x4f0adcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12339);
    // 0x4f0ae0: 0x10008000  b           . + 4 + (-0x8000 << 2)
    ctx->pc = 0x4F0AE0u;
    {
        const bool branch_taken_0x4f0ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0AE0u;
        // 0x4f0ae4: 0x10009000  b           . + 4 + (-0x7000 << 2) (Delay Slot)
        // Likely branch instruction at 0x4F0AE4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0ae0) {
            ctx->pc = 0x4D0AE4u;
            return;
        }
    }
    ctx->pc = 0x4F0AE8u;
    // 0x4f0ae8: 0x1000a000  b           . + 4 + (-0x6000 << 2)
    ctx->pc = 0x4F0AE8u;
    {
        const bool branch_taken_0x4f0ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0AE8u;
        // 0x4f0aec: 0x1000b000  b           . + 4 + (-0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x4F0AEC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0ae8) {
            ctx->pc = 0x4D8AECu;
            return;
        }
    }
    ctx->pc = 0x4F0AF0u;
    // 0x4f0af0: 0x1000b400  b           . + 4 + (-0x4C00 << 2)
    ctx->pc = 0x4F0AF0u;
    {
        const bool branch_taken_0x4f0af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0AF0u;
        // 0x4f0af4: 0x1000c000  b           . + 4 + (-0x4000 << 2) (Delay Slot)
        // Likely branch instruction at 0x4F0AF4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0af0) {
            ctx->pc = 0x4DDAF4u;
            return;
        }
    }
    ctx->pc = 0x4F0AF8u;
    // 0x4f0af8: 0x1000c400  b           . + 4 + (-0x3C00 << 2)
    ctx->pc = 0x4F0AF8u;
    {
        const bool branch_taken_0x4f0af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0AF8u;
        // 0x4f0afc: 0x1000c800  b           . + 4 + (-0x3800 << 2) (Delay Slot)
        // Likely branch instruction at 0x4F0AFC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0af8) {
            ctx->pc = 0x4E1AFCu;
            return;
        }
    }
    ctx->pc = 0x4F0B00u;
    // 0x4f0b00: 0x1000d000  b           . + 4 + (-0x3000 << 2)
    ctx->pc = 0x4F0B00u;
    {
        const bool branch_taken_0x4f0b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0B00u;
        // 0x4f0b04: 0x1000d400  b           . + 4 + (-0x2C00 << 2) (Delay Slot)
        // Likely branch instruction at 0x4F0B04 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0b00) {
            ctx->pc = 0x4E4B04u;
            return;
        }
    }
    ctx->pc = 0x4F0B08u;
    // 0x4f0b08: 0x0  nop
    ctx->pc = 0x4f0b08u;
    // NOP
    // 0x4f0b0c: 0x0  nop
    ctx->pc = 0x4f0b0cu;
    // NOP
label_4f0b10:
    // 0x4f0b10: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4f0b10u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4F0B10 raw=0x49497350");
    // 0x4f0b14: 0x6762696c  daddiu      $v0, $k1, 0x696C
    ctx->pc = 0x4f0b14u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26988);
    // 0x4f0b18: 0x68706172  ldl         $s0, 0x6172($v1)
    ctx->pc = 0x4f0b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24946); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x4f0b1c: 0x30303033  andi        $s0, $at, 0x3033
    ctx->pc = 0x4f0b1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12339);
label_4f0b20:
    // 0x4f0b20: 0x20001  .word       0x00020001                   # INVALID     $zero, $v0, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0b20u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4F0B20 raw=0x00020001");
    // 0x4f0b24: 0x30001  .word       0x00030001                   # INVALID     $zero, $v1, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0b24u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4F0B24 raw=0x00030001");
    // 0x4f0b28: 0x0  nop
    ctx->pc = 0x4f0b28u;
    // NOP
    // 0x4f0b2c: 0x0  nop
    ctx->pc = 0x4f0b2cu;
    // NOP
    // 0x4f0b30: 0x1000404  .word       0x01000404                   # sllv        $zero, $zero, $t0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0b30u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
    // 0x4f0b34: 0x20000000  addi        $zero, $zero, 0x0
    ctx->pc = 0x4f0b34u;
    // NOP (addi to $zero)
    // 0x4f0b38: 0x0  nop
    ctx->pc = 0x4f0b38u;
    // NOP
label_4f0b3c:
    // 0x4f0b3c: 0x5000000  bltz        $t0, . + 4 + (0x0 << 2)
label_4f0b40:
    if (ctx->pc == 0x4F0B40u) {
        ctx->pc = 0x4F0B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0B3Cu;
        // 0x4f0b40: 0x6000000  bltz        $s0, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x4F0B44 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0B44u;
        goto label_4f0b44;
    }
    ctx->pc = 0x4F0B3Cu;
    {
        const bool branch_taken_0x4f0b3c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x4F0B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0B3Cu;
        // 0x4f0b40: 0x6000000  bltz        $s0, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x4F0B44 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0b3c) {
            ctx->pc = 0x4F0B40u;
            goto label_4f0b40;
        }
    }
    ctx->pc = 0x4F0B44u;
label_4f0b44:
    // 0x4f0b44: 0x3000000  .word       0x03000000                   # sll         $zero, $zero, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0b44u;
    // NOP
    // 0x4f0b48: 0x2000000  .word       0x02000000                   # sll         $zero, $zero, 0 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0b48u;
    // NOP
    // 0x4f0b4c: 0x4000000  bltz        $zero, . + 4 + (0x0 << 2)
label_4f0b50:
    if (ctx->pc == 0x4F0B50u) {
        ctx->pc = 0x4F0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0B4Cu;
        // 0x4f0b50: 0x6000000  bltz        $s0, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x4F0B54 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0B54u;
        goto label_4f0b54;
    }
    ctx->pc = 0x4F0B4Cu;
    {
        const bool branch_taken_0x4f0b4c = (GPR_S32(ctx, 0) < 0);
        ctx->pc = 0x4F0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0B4Cu;
        // 0x4f0b50: 0x6000000  bltz        $s0, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x4F0B54 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0b4c) {
            ctx->pc = 0x4F0B50u;
            goto label_4f0b50;
        }
    }
    ctx->pc = 0x4F0B54u;
label_4f0b54:
    // 0x4f0b54: 0x0  nop
    ctx->pc = 0x4f0b54u;
    // NOP
    // 0x4f0b58: 0x0  nop
    ctx->pc = 0x4f0b58u;
    // NOP
    // 0x4f0b5c: 0x0  nop
    ctx->pc = 0x4f0b5cu;
    // NOP
    // 0x4f0b60: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4f0b60u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4F0B60 raw=0x49497350");
    // 0x4f0b64: 0x6b62696c  ldl         $v0, 0x696C($k1)
    ctx->pc = 0x4f0b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4f0b68: 0x6c6e7265  ldr         $t6, 0x7265($v1)
    ctx->pc = 0x4f0b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    ctx->pc = 0x4f0b6cu;
}
